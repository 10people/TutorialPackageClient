//
//  SDKHelper.h
//  Unity-iPhone
//
//  Created by WD on 14-5-26.
//
//

#import <Foundation/Foundation.h>

@interface SDKHelper : NSObject

+ (void)AppStart;
+ (void)UserLogin;
+ (void)UserLogout;
+ (void)EnterUserCenter;
+ (void)ShowCallCenter;
+ (void)UserActionEvent:(NSString *)strEvent;
+ (void)MakePay:(NSString *)strRoleID : (NSString *)strGroupID;
+ (void)MakePay:(NSString *)strRoleID : (NSString *)strGroupID;
+ (void)MakePayWithGoodInfo:(NSString *)strRoleID :(NSString *)strServerID : (NSString *)strRoleName :(NSString *)strGoodID :(NSString *)strGoodName :(NSString *)strGoodNum :(NSString *)strPrice : (NSString *)strRegisterID;
+ (void)ShowRechargeRecord;
+ (void)ReqPaymentGoodInfoList;
+ (void)RoleEnterGame:(NSString *)strAccountID :(NSString *)strRoleType : (NSString *)strRoleName : (int)RoleLevel;
+ (void)OnAccountLogin:(NSString *)strServerID : (NSString *)strUserID;
+ (void)ShowSocialShareCenter:(NSString *)strShareContent;
+ (BOOL)AppOpenUrl:(NSURL *)url;
+ (BOOL)AppHandleUrl:(NSURL *)url;
+ (void)StartBanner;
+ (void)ShowBanner:(BOOL)bShow;
+ (void)EnableTestMode:(BOOL)bEnable;
+ (NSString *)GetDeviceUDID;
+ (void)SGInitSDK:(const char *)appid :(const char *)appkey;
+ (void)SGSetUnityReceiver:(const char *)string;
+ (void)SGStartRecord;
+ (void)SGStopRecord;
+ (void)SGCancelTask;
+ (void)SGPlayAudio:(const char *)path;
+ (void)SGPlayAudioBuffer:(Byte*)bytes :(int)length;
+ (int)SGGetAudioBufferLength;
+ (void)SGGetAudioBuffer:(Byte*)buffer;
+ (void)SGSetMaxRecordInterval:(float)interval;
+ (void)ShareToFB:(NSString *)strText;
@end
