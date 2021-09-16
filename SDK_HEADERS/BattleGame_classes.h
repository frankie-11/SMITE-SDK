/*
#############################################################################################
# Smite (v3.24.3804.2) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: BattleGame_classes.h
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

// Class BattleGame.BattleObject
// 0x0000 (0x0060 - 0x0060)
class UBattleObject : public UTgObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4824 );

		return pClassPointer;
	};

};

UClass* UBattleObject::pClassPointer = NULL;

// Class BattleGame.BattlePlayerController
// 0x0000 (0x1588 - 0x1588)
class ABattlePlayerController : public ATgPlayerController
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 4825 );

		return pClassPointer;
	};

	void BattlePlayerControllerFunction ( );
};

UClass* ABattlePlayerController::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif