
#import "TessarMobileSDK.h"

char* uuidb = (char*)malloc(1000);
// Converts C style string to NSString
NSString* CreateNSString (const char* string)
{
	if (string)
		return [NSString stringWithUTF8String: string];
	else
		return [NSString stringWithUTF8String: ""];
}
//Boolean  CreateBoolean(bool stype)
//{
//
//    if (stype == true) {
//        NSString* tt = @"sss";
//        return Boolean.parseBoolean(tt.toString);
//    }
//    else
//    {
//         NSString* tt = @"";
//        return Boolean.parseBoolean(tt.toString);
//    }
//
//}
extern "C" {
    void _Init(const char *proj, const char *channel, const char *version)
    {
        [TessarMobileSDK proj:CreateNSString(proj) channel:CreateNSString(channel) version:CreateNSString(version)];
    }
    void _Initproj(const char *proj, const char *channel, const char *version,const char*reportpolicy,bool isdeug)
    {
        [TessarMobileSDK proj:CreateNSString(proj) channel:CreateNSString(channel) version:CreateNSString(version) reportpolicy:CreateNSString(reportpolicy) isdebug:isdeug];
    }
    void onLogInfo(const char* userName_t, const char*role, unsigned int level_t, unsigned int coin_t,const char* gameState)
    {
        [TessarMobileSDK onLogInfo:CreateNSString(userName_t) role:CreateNSString(role) level:level_t coin:coin_t gamestate:CreateNSString(gameState)];
    }
    void onNewMission(unsigned int level_t, unsigned int coin_t, const char* costTime)
    {
        [TessarMobileSDK onNewMission:level_t coin:coin_t costtime:CreateNSString(costTime)];
    }
    void onMission(const char* mission,unsigned int level_t,unsigned int coin_t)
    {
        [TessarMobileSDK onMission:CreateNSString(mission) level:level_t coin:coin_t];
        
    }
    void pay(double money, unsigned int coin_t,unsigned int source_t)
    {
        [TessarMobileSDK pay:money coin:coin_t  source:source_t];
    }
    void buy(const char* item, unsigned int number_t, double price_t)
    {
        [TessarMobileSDK buy:CreateNSString(item) number:number_t price:price_t];
    }
    void bonus(double coin, unsigned int trigger_t)
    {
        [TessarMobileSDK bonus:coin trigger:trigger_t];
    }
    void bonusextra(const char* item, unsigned int num_t,double price_t,unsigned int trigger_t)
    {
        [TessarMobileSDK bonus:CreateNSString(item) num:num_t price:price_t trigger:trigger_t];
    }
    void startUIClick(const char* UIevent)
    {
        [TessarMobileSDK startUIclick:CreateNSString(UIevent)];
    }
    void doUIClick(int x,int y)
    {
        [TessarMobileSDK doUIClick:x point_y:y];
    }
    void finishUIclick(const char* UIevent)
    {
        [TessarMobileSDK finishUIclick:CreateNSString(UIevent)];
    }
    void onKeyValue(unsigned int value, int keyType,int trigger)
    {
        [TessarMobileSDK onKeyValue:value keytype:keyType trig:trigger];
    }
    void recordusingsendbyte(unsigned int bytesize)
    {
        [TessarMobileSDK recordSendDataSize:bytesize];
    }
    void sendusingrecivebyte(unsigned int bytesize)
    {
        [TessarMobileSDK recordReceiveDataSize:bytesize];
    }
    void reportErrorFile(const char* logfilename)
    {
        [TessarMobileSDK reportErrorFile:CreateNSString(logfilename)];
    }
    void exceptionExtra(const char*crashName, const char*crashReson,const char* creashStack)
    {
        [TessarMobileSDK exceptionExtra:CreateNSString(crashName) crashreason:CreateNSString(crashReson) crashstack:CreateNSString(creashStack)];
    }
    void registerException(const char* errorMsg)
    {
        //[TessarMobileSDK registerExceptionC:CreateNSString(errorMsg)];
    }
    void setSendInfoInterval(double second)
    {
        [TessarMobileSDK setSendInfoInterval:second];
    }
    int getNetstatus()
    {
        return [TessarMobileSDK backNetstatus];
    }
    char* getDeviceUUID()
    {
        char* uuidb = (char*)malloc(100);
        NSString* uuid =  [TessarMobileSDK backDeviceUUID];
        NSLog(@"%@",uuid);
        memset(uuidb, 0, sizeof(char));
        const char* oldc =  [uuid UTF8String];
        //char* backid = malloc(uuid.length + 1);
        char* backid2 = uuidb;
        for (int i = 0; i < uuid.length; i++) {
            *backid2++ = *oldc++;
        }
        *backid2 = '\0';
        NSLog(@"over");
        //free(&oldc);
        return uuidb;
        
    }
    int getDeviceFreeMemory()
    {
        return [TessarMobileSDK backFreeMemory];
    }
    int getDeviceTotalMemory()
    {
        return [TessarMobileSDK backTotalMemory];
    }
    void controlScreenState(BOOL scrstate)
    {
        [TessarMobileSDK controlIphnedark:scrstate];
    }
    void SavePhoto(const char* imagepath)
    {
        [TessarMobileSDK SavePhoto:CreateNSString(imagepath)];
    }

}
