using UnityEngine;

/// <summary>
/// Ever wanted to be able to auto-center on an object within a draggable panel?
/// Attach this script to the container that has the objects to center on as its children.
/// </summary>

[AddComponentMenu("NGUI/Interaction/Center On Child")]
public class UICenterOnChild : MonoBehaviour
{
    /// <summary>
    /// The strength of the spring.
    /// </summary>

    public float springStrength = 8f;
    public float nextPageThreshold = 0f;

    /// <summary>
    /// Callback to be triggered when the centering operation completes.
    /// </summary>

    public SpringPanel.OnFinished onFinished;

    UIDraggablePanel mDrag;
    GameObject mCenteredObject;

    public delegate void OnCenterFinished(GameObject target);
    public OnCenterFinished onCenterFinished;
    //为了设置页数方便

    /// <summary>
    /// Game object that the draggable panel is currently centered on.
    /// </summary>

    public GameObject centeredObject { get { return mCenteredObject; } }

    void OnEnable() { Recenter(); }
    void OnDragFinished() { if (enabled) Recenter(); }

    /// <summary>
    /// Recenter the draggable list on the center-most child.
    /// </summary>

    public void Recenter()
    {
        if (mDrag == null)
        {
            mDrag = NGUITools.FindInParents<UIDraggablePanel>(gameObject);

            if (mDrag == null)
            {
                Debug.LogWarning(GetType() + " requires " + typeof(UIDraggablePanel) + " on a parent object in order to work", this);
                enabled = false;
                return;
            }
            else
            {
                mDrag.onDragFinished = OnDragFinished;

                if (mDrag.horizontalScrollBar != null)
                    mDrag.horizontalScrollBar.onDragFinished = OnDragFinished;

                if (mDrag.verticalScrollBar != null)
                    mDrag.verticalScrollBar.onDragFinished = OnDragFinished;
            }
        }
        if (mDrag.panel == null) return;

        // Calculate the panel's center in world coordinates
        Vector4 clip = mDrag.panel.clipRange;
        Transform dt = mDrag.panel.cachedTransform;
        Vector3 center = dt.localPosition;
        center.x += clip.x;
        center.y += clip.y;
        center = dt.parent.TransformPoint(center);

        // Offset this value by the momentum
        Vector3 offsetCenter = center - mDrag.currentMomentum * (mDrag.momentumAmount * 0.1f);
        mDrag.currentMomentum = Vector3.zero;

        float min = float.MaxValue;
        Transform closest = null;
        Transform trans = transform;
        int index = 0;

        // Determine the closest child
        for (int i = 0, imax = trans.childCount; i < imax; ++i)
        {
            Transform t = trans.GetChild(i);
            float sqrDist = Vector3.SqrMagnitude(t.position - offsetCenter);

            if (sqrDist < min)
            {
                min = sqrDist;
                closest = t;
                index = i;
            }
        }

        // If we have a touch in progress and the next page threshold set
        if (nextPageThreshold > 0f && UICamera.currentTouch != null)
        {
            // If we're still on the same object
            if (mCenteredObject != null && mCenteredObject.transform == trans.GetChild(index))
            {
                Vector2 delta = UICamera.currentTouch.totalDelta;
                //Debug.LogWarning("delta .x : " + delta + " nextPageThreshold : " + nextPageThreshold);
                if (delta.x > nextPageThreshold)
                {
                    // Next page
                    if (index > 0)
                        closest = trans.GetChild(index - 1);
                }
                else if (delta.x < -nextPageThreshold)
                {
                    // Previous page
                    if (index < trans.childCount - 1)
                        closest = trans.GetChild(index + 1);
                }
            }
        }

        CenterOn(closest, center);
    }

    void CenterOn(Transform target, Vector3 panelCenter)
    {
        if (target != null && mDrag != null && mDrag.panel != null)
        {
            Transform panelTrans = mDrag.panel.cachedTransform;
            mCenteredObject = target.gameObject;

            // Figure out the difference between the chosen child and the panel's center in local coordinates
            Vector3 cp = panelTrans.InverseTransformPoint(target.position);
            Vector3 cc = panelTrans.InverseTransformPoint(panelCenter);
            Vector3 offset = cp - cc;

            // Offset shouldn't occur if blocked by a zeroed-out scale
            if (mDrag.scale.x == 0f) offset.x = 0f;
            if (mDrag.scale.y == 0f) offset.y = 0f;
            if (mDrag.scale.z == 0f) offset.z = 0f;

            // Spring the panel to this calculated position
            SpringPanel.Begin(mDrag.gameObject, panelTrans.localPosition - offset, springStrength).onFinished = onFinished;
            if (onCenterFinished != null)
            {
                onCenterFinished(mCenteredObject);
            }
        }
        else mCenteredObject = null;
    }

    /// <summary>
    /// Center the panel on the specified target.
    /// </summary>

    public void CenterOn(Transform target)
    {
        if (mDrag != null && mDrag.panel != null)
        {
            // Calculate the panel's center in world coordinates
            Vector4 clip = mDrag.panel.clipRange;
            Transform dt = mDrag.panel.cachedTransform;
            Vector3 center = dt.localPosition;
            center.x += clip.x;
            center.y += clip.y;
            center = dt.parent.TransformPoint(center);

            CenterOn(target, center);
        }
    }
}