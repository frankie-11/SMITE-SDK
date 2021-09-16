/*
#############################################################################################
# Smite (v3.24.3804.2) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: OnlineSubsystemDiscord_classes.h
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

// Class OnlineSubsystemDiscord.OnlineGameInterfaceDiscord
// 0x0060 (0x03A8 - 0x0348)
class UOnlineGameInterfaceDiscord : public UOnlineGameInterfaceImpl
{
public:
	unsigned char                                      UnknownData00[ 0x60 ];                            		// 0x0348 (0x0060) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1466 );

		return pClassPointer;
	};

};

UClass* UOnlineGameInterfaceDiscord::pClassPointer = NULL;

// Class OnlineSubsystemDiscord.OnlineSubsystemDiscord
// 0x07C8 (0x0A30 - 0x0268)
class UOnlineSubsystemDiscord : public UOnlineSubsystemCommonImpl
{
public:
	unsigned char                                      UnknownData00[ 0x7C8 ];                           		// 0x0268 (0x07C8) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1467 );

		return pClassPointer;
	};

};

UClass* UOnlineSubsystemDiscord::pClassPointer = NULL;

// Class OnlineSubsystemDiscord.OnlineMarketplaceInterfaceDiscord
// 0x07F8 (0x0858 - 0x0060)
class UOnlineMarketplaceInterfaceDiscord : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x7F8 ];                           		// 0x0060 (0x07F8) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1468 );

		return pClassPointer;
	};

};

UClass* UOnlineMarketplaceInterfaceDiscord::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif