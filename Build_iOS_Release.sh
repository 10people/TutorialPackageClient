#! /bin/bash

################ Path Configure ################
SVN_PATH=svn://10.6.34.93/MOBILERPG_RES/Branches/Version/Main/Project/Client
#TAG_PATH=svn://10.6.35.101/WUXIAN/tags/Marvel
PROJ_PATH=/Users/mldj/Desktop/CI/workspace/mtlbbClient
UNITY_PATH=/Applications/Unity/Unity.app/Contents/MacOS/Unity
OUT_PUT_DIR=$HOME/Desktop/Product/mldj
XCODE_PROJECT_PATH=$PROJ_PATH/Build/MLDJ_IOS
#FRAMEWORK_PY_PATH=/Users/cymrd/Desktop/CI/workspace/KDTLClient/mod_pbxproj.py

################ Your Command ################
echo ''
echo "****************** Your Command: *************************"
echo "Build KDTL iOS $*"
echo "*********************************************************"
echo ''
mkdir -p $OUT_PUT_DIR/$1/
LOG_FILE='$OUT_PUT_DIR/$1/log.txt'

################ Delete Old ################
#echo "Start Clean…"
#rm -rf $PROJ_PATH
#rm -rf $LOG_FILE
#echo "Clean Done."

################ Create Tag From SVN ################
#echo "Start Create Tag..."
#svn copy  --username xxx --password xxx $SVN_PATH $TAG_PATH/$1 --message $1
#echo "Create Tag Done."

################ Check Out From  SVN ################
#echo "Start Check Out…"
#svn checkout --username xxx --password xxx $SVN_PATH $PROJ_PATH
#echo "Check Out Done."

################ Build Unity Project ################
echo "Start Build Unity Project…"
$UNITY_PATH -batchmode -quit -projectPath $PROJ_PATH -logFile $LOG_FILE -executeMethod CommandBuild.BuildiOS
echo "Build Unity Project Done."

################ ADD Xcode Framework ################
#echo "Start Add Xcode Framework..."
#python $FRAMEWORK_PY_PATH $XCODE_PROJECT_PATH/Unity-iPhone.xcodeproj/project.pbxproj
#echo "Add Xcode Framework Done."

################ Copy Xcode Porject to Output Folder ################ 
echo copy $XCODE_PROJECT_PATH to  $OUT_PUT_DIR/$1

cp -r $XCODE_PROJECT_PATH $OUT_PUT_DIR/$1

cp -r $OUT_PUT_DIR/$1 /Users/mldj/Desktop/MLDJVersion/MLDJ
echo $1>/Users/mldj/Desktop/MLDJVersion/MLDJ/NewVersion.txt


################ Build Xcode PROJECT ################
###echo "Start Build Xcode Project"
###echo "Build Xcode Project Done."

echo "Version Auto build succeed !  `date`"

exit 0

