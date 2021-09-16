/*
#############################################################################################
# Smite (v3.24.3804.2) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: TgGameContent_classes.h
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

// Class TgGameContent.tgflagcontentdata_content
// 0x0000 (0x0070 - 0x0070)
class Utgflagcontentdata_content : public UTgFlagContentData
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 166082 );

		return pClassPointer;
	};

};

UClass* Utgflagcontentdata_content::pClassPointer = NULL;

// Class TgGameContent.tgmenucontentdata_content
// 0x0000 (0x0070 - 0x0070)
class Utgmenucontentdata_content : public UTgMenuContentData
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 166134 );

		return pClassPointer;
	};

};

UClass* Utgmenucontentdata_content::pClassPointer = NULL;

// Class TgGameContent.tgmenucontentdataconsole_content
// 0x0000 (0x0070 - 0x0070)
class Utgmenucontentdataconsole_content : public UTgMenuContentData
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 166148 );

		return pClassPointer;
	};

};

UClass* Utgmenucontentdataconsole_content::pClassPointer = NULL;

// Class TgGameContent.tgmenutransitionactor_content
// 0x0000 (0x0278 - 0x0278)
class Atgmenutransitionactor_content : public ATgMenuTransitionActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 166163 );

		return pClassPointer;
	};

};

UClass* Atgmenutransitionactor_content::pClassPointer = NULL;

// Class TgGameContent.tgmenutransitionactor_pedestal
// 0x0000 (0x0278 - 0x0278)
class Atgmenutransitionactor_pedestal : public ATgMenuTransitionActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 166166 );

		return pClassPointer;
	};

};

UClass* Atgmenutransitionactor_pedestal::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif