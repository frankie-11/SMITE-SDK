/*
#############################################################################################
# Smite (v3.24.3804.2) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: OnlineSubsystemEpic_classes.h
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

// Class OnlineSubsystemEpic.OnlineGameInterfaceEpic
// 0x0060 (0x03A8 - 0x0348)
class UOnlineGameInterfaceEpic : public UOnlineGameInterfaceImpl
{
public:
	unsigned char                                      UnknownData00[ 0x60 ];                            		// 0x0348 (0x0060) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1463 );

		return pClassPointer;
	};

};

UClass* UOnlineGameInterfaceEpic::pClassPointer = NULL;

// Class OnlineSubsystemEpic.OnlineSubsystemEpic
// 0x07B8 (0x0A20 - 0x0268)
class UOnlineSubsystemEpic : public UOnlineSubsystemCommonImpl
{
public:
	unsigned char                                      UnknownData00[ 0x7B8 ];                           		// 0x0268 (0x07B8) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1464 );

		return pClassPointer;
	};

};

UClass* UOnlineSubsystemEpic::pClassPointer = NULL;

// Class OnlineSubsystemEpic.OnlineMarketplaceInterfaceEpic
// 0x07F8 (0x0858 - 0x0060)
class UOnlineMarketplaceInterfaceEpic : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x7F8 ];                           		// 0x0060 (0x07F8) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1465 );

		return pClassPointer;
	};

};

UClass* UOnlineMarketplaceInterfaceEpic::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif