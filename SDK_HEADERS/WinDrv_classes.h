/*
#############################################################################################
# Smite (v3.24.3804.2) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: WinDrv_classes.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class WinDrv.FacebookWindows
// 0x0010 (0x00F0 - 0x00E0)
class UFacebookWindows : public UFacebookIntegration
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x00E0 (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1451 );

		return pClassPointer;
	};

};

UClass* UFacebookWindows::pClassPointer = NULL;

// Class WinDrv.HttpRequestWindows
// 0x0030 (0x00A0 - 0x0070)
class UHttpRequestWindows : public UHttpRequestInterface
{
public:
	unsigned char                                      UnknownData00[ 0x30 ];                            		// 0x0070 (0x0030) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1452 );

		return pClassPointer;
	};

};

UClass* UHttpRequestWindows::pClassPointer = NULL;

// Class WinDrv.HttpResponseWindows
// 0x0018 (0x0078 - 0x0060)
class UHttpResponseWindows : public UHttpResponseInterface
{
public:
	unsigned char                                      UnknownData00[ 0x18 ];                            		// 0x0060 (0x0018) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1453 );

		return pClassPointer;
	};

};

UClass* UHttpResponseWindows::pClassPointer = NULL;

// Class WinDrv.SwrveAnalyticsWindows
// 0x0048 (0x00E0 - 0x0098)
class USwrveAnalyticsWindows : public UAnalyticEventsBase
{
public:
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x0098 (0x0048) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1454 );

		return pClassPointer;
	};

};

UClass* USwrveAnalyticsWindows::pClassPointer = NULL;

// Class WinDrv.WindowsClient
// 0x01B8 (0x0230 - 0x0078)
class UWindowsClient : public UClient
{
public:
	unsigned char                                      UnknownData00[ 0x16C ];                           		// 0x0078 (0x016C) MISSED OFFSET
	class UClass*                                      AudioDeviceClass;                                 		// 0x01E4 (0x0008) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      UnknownData01[ 0x30 ];                            		// 0x01EC (0x0030) MISSED OFFSET
	int                                                AllowJoystickInput;                               		// 0x021C (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      UnknownData02[ 0x10 ];                            		// 0x0220 (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1455 );

		return pClassPointer;
	};

};

UClass* UWindowsClient::pClassPointer = NULL;

// Class WinDrv.XnaForceFeedbackManager
// 0x0000 (0x0078 - 0x0078)
class UXnaForceFeedbackManager : public UForceFeedbackManager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1456 );

		return pClassPointer;
	};

};

UClass* UXnaForceFeedbackManager::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif