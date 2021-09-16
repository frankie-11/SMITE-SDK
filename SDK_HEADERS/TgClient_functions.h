/*
#############################################################################################
# Smite (v3.24.3804.2) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: TgClient_functions.h
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
# Functions
# ========================================================================================= #
*/

// Function TgClient.TgGfxAchievementPopup.QueueAchievement
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxAchievementPopup::eventQueueAchievement ( )
{
	static UFunction* pFnQueueAchievement = NULL;

	if ( ! pFnQueueAchievement )
		pFnQueueAchievement = (UFunction*) UObject::GObjObjects()->GetIndex( 147715 );

	UTgGfxAchievementPopup_eventQueueAchievement_Parms QueueAchievement_Parms;

	this->ProcessEvent ( pFnQueueAchievement, &QueueAchievement_Parms, NULL );
};

// Function TgClient.TgGfxAchievementPopup.asc_QueueAchievement
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxAchievementPopup::asc_QueueAchievement ( )
{
	static UFunction* pFnasc_QueueAchievement = NULL;

	if ( ! pFnasc_QueueAchievement )
		pFnasc_QueueAchievement = (UFunction*) UObject::GObjObjects()->GetIndex( 147714 );

	UTgGfxAchievementPopup_execasc_QueueAchievement_Parms asc_QueueAchievement_Parms;

	this->ProcessEvent ( pFnasc_QueueAchievement, &asc_QueueAchievement_Parms, NULL );
};

// Function TgClient.TgGfxAchievementPopup.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          pMoviePlayer                   ( CPF_Parm )

void UTgGfxAchievementPopup::Initialize ( class UTgMoviePlayer* pMoviePlayer )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 147712 );

	UTgGfxAchievementPopup_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.pMoviePlayer = pMoviePlayer;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxAchievementSelection.UpdateSelectedAchievements
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxAchievementSelection::eventUpdateSelectedAchievements ( )
{
	static UFunction* pFnUpdateSelectedAchievements = NULL;

	if ( ! pFnUpdateSelectedAchievements )
		pFnUpdateSelectedAchievements = (UFunction*) UObject::GObjObjects()->GetIndex( 147734 );

	UTgGfxAchievementSelection_eventUpdateSelectedAchievements_Parms UpdateSelectedAchievements_Parms;

	this->ProcessEvent ( pFnUpdateSelectedAchievements, &UpdateSelectedAchievements_Parms, NULL );
};

// Function TgClient.TgGfxAchievementSelection.ASC_UpdateSelectedAchievements
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxAchievementSelection::ASC_UpdateSelectedAchievements ( )
{
	static UFunction* pFnASC_UpdateSelectedAchievements = NULL;

	if ( ! pFnASC_UpdateSelectedAchievements )
		pFnASC_UpdateSelectedAchievements = (UFunction*) UObject::GObjObjects()->GetIndex( 147733 );

	UTgGfxAchievementSelection_execASC_UpdateSelectedAchievements_Parms ASC_UpdateSelectedAchievements_Parms;

	this->ProcessEvent ( pFnASC_UpdateSelectedAchievements, &ASC_UpdateSelectedAchievements_Parms, NULL );
};

// Function TgClient.TgGfxAchievementSelection.UpdateScreen
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxAchievementSelection::eventUpdateScreen ( )
{
	static UFunction* pFnUpdateScreen = NULL;

	if ( ! pFnUpdateScreen )
		pFnUpdateScreen = (UFunction*) UObject::GObjObjects()->GetIndex( 147732 );

	UTgGfxAchievementSelection_eventUpdateScreen_Parms UpdateScreen_Parms;

	this->ProcessEvent ( pFnUpdateScreen, &UpdateScreen_Parms, NULL );
};

// Function TgClient.TgGfxAchievementSelection.ASC_UpdateScreen
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxAchievementSelection::ASC_UpdateScreen ( )
{
	static UFunction* pFnASC_UpdateScreen = NULL;

	if ( ! pFnASC_UpdateScreen )
		pFnASC_UpdateScreen = (UFunction*) UObject::GObjObjects()->GetIndex( 147731 );

	UTgGfxAchievementSelection_execASC_UpdateScreen_Parms ASC_UpdateScreen_Parms;

	this->ProcessEvent ( pFnASC_UpdateScreen, &ASC_UpdateScreen_Parms, NULL );
};

// Function TgClient.TgGfxAchievementSelection.USC_ApplySelections
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            as1                            ( CPF_Parm )
// int                            as2                            ( CPF_Parm )
// int                            as3                            ( CPF_Parm )
// int                            as4                            ( CPF_Parm )

void UTgGfxAchievementSelection::USC_ApplySelections ( int as1, int as2, int as3, int as4 )
{
	static UFunction* pFnUSC_ApplySelections = NULL;

	if ( ! pFnUSC_ApplySelections )
		pFnUSC_ApplySelections = (UFunction*) UObject::GObjObjects()->GetIndex( 147726 );

	UTgGfxAchievementSelection_execUSC_ApplySelections_Parms USC_ApplySelections_Parms;
	USC_ApplySelections_Parms.as1 = as1;
	USC_ApplySelections_Parms.as2 = as2;
	USC_ApplySelections_Parms.as3 = as3;
	USC_ApplySelections_Parms.as4 = as4;

	pFnUSC_ApplySelections->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_ApplySelections, &USC_ApplySelections_Parms, NULL );

	pFnUSC_ApplySelections->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxAchievementSelection.USC_ApplySelections_Delegate
// [0x00120000] 
// Parameters infos:
// int                            as1                            ( CPF_Parm )
// int                            as2                            ( CPF_Parm )
// int                            as3                            ( CPF_Parm )
// int                            as4                            ( CPF_Parm )

void UTgGfxAchievementSelection::USC_ApplySelections_Delegate ( int as1, int as2, int as3, int as4 )
{
	static UFunction* pFnUSC_ApplySelections_Delegate = NULL;

	if ( ! pFnUSC_ApplySelections_Delegate )
		pFnUSC_ApplySelections_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 147717 );

	UTgGfxAchievementSelection_execUSC_ApplySelections_Delegate_Parms USC_ApplySelections_Delegate_Parms;
	USC_ApplySelections_Delegate_Parms.as1 = as1;
	USC_ApplySelections_Delegate_Parms.as2 = as2;
	USC_ApplySelections_Delegate_Parms.as3 = as3;
	USC_ApplySelections_Delegate_Parms.as4 = as4;

	this->ProcessEvent ( pFnUSC_ApplySelections_Delegate, &USC_ApplySelections_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxAchievementSelection.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxAchievementSelection::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 147721 );

	UTgGfxAchievementSelection_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxAchievementSelection.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxAchievementSelection::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 147719 );

	UTgGfxAchievementSelection_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxAdventureProgress.OnAcquisition
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgEventDataItem*        pEvent                         ( CPF_Parm )

void UTgGfxAdventureProgress::OnAcquisition ( class UTgEventDataItem* pEvent )
{
	static UFunction* pFnOnAcquisition = NULL;

	if ( ! pFnOnAcquisition )
		pFnOnAcquisition = (UFunction*) UObject::GObjObjects()->GetIndex( 147742 );

	UTgGfxAdventureProgress_execOnAcquisition_Parms OnAcquisition_Parms;
	OnAcquisition_Parms.pEvent = pEvent;

	pFnOnAcquisition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnAcquisition, &OnAcquisition_Parms, NULL );

	pFnOnAcquisition->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxAdventureProgress.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxAdventureProgress::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 147741 );

	UTgGfxAdventureProgress_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxAdventureProgress.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxAdventureProgress::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 147739 );

	UTgGfxAdventureProgress_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxAdventureProgress.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxAdventureProgress::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 147737 );

	UTgGfxAdventureProgress_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxAdventureProgressDungeon2.OnAcquisition
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgEventDataItem*        pEvent                         ( CPF_Parm )

void UTgGfxAdventureProgressDungeon2::OnAcquisition ( class UTgEventDataItem* pEvent )
{
	static UFunction* pFnOnAcquisition = NULL;

	if ( ! pFnOnAcquisition )
		pFnOnAcquisition = (UFunction*) UObject::GObjObjects()->GetIndex( 147754 );

	UTgGfxAdventureProgressDungeon2_execOnAcquisition_Parms OnAcquisition_Parms;
	OnAcquisition_Parms.pEvent = pEvent;

	pFnOnAcquisition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnAcquisition, &OnAcquisition_Parms, NULL );

	pFnOnAcquisition->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxAdventureProgressDungeon2.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxAdventureProgressDungeon2::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 147753 );

	UTgGfxAdventureProgressDungeon2_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxAdventureProgressDungeon2.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxAdventureProgressDungeon2::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 147751 );

	UTgGfxAdventureProgressDungeon2_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxAdventureProgressDungeon2.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxAdventureProgressDungeon2::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 147749 );

	UTgGfxAdventureProgressDungeon2_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxAdventureProgressFox.OnAcquisition
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgEventDataItem*        pEvent                         ( CPF_Parm )

void UTgGfxAdventureProgressFox::OnAcquisition ( class UTgEventDataItem* pEvent )
{
	static UFunction* pFnOnAcquisition = NULL;

	if ( ! pFnOnAcquisition )
		pFnOnAcquisition = (UFunction*) UObject::GObjObjects()->GetIndex( 147777 );

	UTgGfxAdventureProgressFox_execOnAcquisition_Parms OnAcquisition_Parms;
	OnAcquisition_Parms.pEvent = pEvent;

	pFnOnAcquisition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnAcquisition, &OnAcquisition_Parms, NULL );

	pFnOnAcquisition->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxAdventureProgressFox.SetupChestPurchaseFox
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxAdventureProgressFox::SetupChestPurchaseFox ( )
{
	static UFunction* pFnSetupChestPurchaseFox = NULL;

	if ( ! pFnSetupChestPurchaseFox )
		pFnSetupChestPurchaseFox = (UFunction*) UObject::GObjObjects()->GetIndex( 147776 );

	UTgGfxAdventureProgressFox_execSetupChestPurchaseFox_Parms SetupChestPurchaseFox_Parms;

	pFnSetupChestPurchaseFox->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetupChestPurchaseFox, &SetupChestPurchaseFox_Parms, NULL );

	pFnSetupChestPurchaseFox->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxAdventureProgressFox.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxAdventureProgressFox::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 147775 );

	UTgGfxAdventureProgressFox_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxAdventureProgressFox.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxAdventureProgressFox::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 147773 );

	UTgGfxAdventureProgressFox_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxAdventureProgressFox.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxAdventureProgressFox::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 147771 );

	UTgGfxAdventureProgressFox_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxAdventureProgressMMO.OnAcquisition
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgEventDataItem*        pEvent                         ( CPF_Parm )

void UTgGfxAdventureProgressMMO::OnAcquisition ( class UTgEventDataItem* pEvent )
{
	static UFunction* pFnOnAcquisition = NULL;

	if ( ! pFnOnAcquisition )
		pFnOnAcquisition = (UFunction*) UObject::GObjObjects()->GetIndex( 147786 );

	UTgGfxAdventureProgressMMO_execOnAcquisition_Parms OnAcquisition_Parms;
	OnAcquisition_Parms.pEvent = pEvent;

	pFnOnAcquisition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnAcquisition, &OnAcquisition_Parms, NULL );

	pFnOnAcquisition->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxAdventureProgressMMO.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxAdventureProgressMMO::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 147785 );

	UTgGfxAdventureProgressMMO_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxAdventureProgressMMO.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxAdventureProgressMMO::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 147783 );

	UTgGfxAdventureProgressMMO_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxAdventureProgressMMO.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxAdventureProgressMMO::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 147781 );

	UTgGfxAdventureProgressMMO_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxAdventuresHub.SceneTick
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// float                          Delta                          ( CPF_Parm )

void UTgGfxAdventuresHub::eventSceneTick ( float Delta )
{
	static UFunction* pFnSceneTick = NULL;

	if ( ! pFnSceneTick )
		pFnSceneTick = (UFunction*) UObject::GObjObjects()->GetIndex( 147834 );

	UTgGfxAdventuresHub_eventSceneTick_Parms SceneTick_Parms;
	SceneTick_Parms.Delta = Delta;

	this->ProcessEvent ( pFnSceneTick, &SceneTick_Parms, NULL );
};

// Function TgClient.TgGfxAdventuresHub.OnAcquisition
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgEventDataItem*        pEvent                         ( CPF_Parm )

void UTgGfxAdventuresHub::OnAcquisition ( class UTgEventDataItem* pEvent )
{
	static UFunction* pFnOnAcquisition = NULL;

	if ( ! pFnOnAcquisition )
		pFnOnAcquisition = (UFunction*) UObject::GObjObjects()->GetIndex( 147832 );

	UTgGfxAdventuresHub_execOnAcquisition_Parms OnAcquisition_Parms;
	OnAcquisition_Parms.pEvent = pEvent;

	pFnOnAcquisition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnAcquisition, &OnAcquisition_Parms, NULL );

	pFnOnAcquisition->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxAdventuresHub.SetBundleOwnership
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxAdventuresHub::SetBundleOwnership ( )
{
	static UFunction* pFnSetBundleOwnership = NULL;

	if ( ! pFnSetBundleOwnership )
		pFnSetBundleOwnership = (UFunction*) UObject::GObjObjects()->GetIndex( 147831 );

	UTgGfxAdventuresHub_execSetBundleOwnership_Parms SetBundleOwnership_Parms;

	pFnSetBundleOwnership->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetBundleOwnership, &SetBundleOwnership_Parms, NULL );

	pFnSetBundleOwnership->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxAdventuresHub.TriggerLobbyEventHub
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nType                          ( CPF_Parm )
// int                            nTarget                        ( CPF_Parm )

void UTgGfxAdventuresHub::TriggerLobbyEventHub ( int nType, int nTarget )
{
	static UFunction* pFnTriggerLobbyEventHub = NULL;

	if ( ! pFnTriggerLobbyEventHub )
		pFnTriggerLobbyEventHub = (UFunction*) UObject::GObjObjects()->GetIndex( 147828 );

	UTgGfxAdventuresHub_execTriggerLobbyEventHub_Parms TriggerLobbyEventHub_Parms;
	TriggerLobbyEventHub_Parms.nType = nType;
	TriggerLobbyEventHub_Parms.nTarget = nTarget;

	pFnTriggerLobbyEventHub->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTriggerLobbyEventHub, &TriggerLobbyEventHub_Parms, NULL );

	pFnTriggerLobbyEventHub->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxAdventuresHub.TriggerLobbyCamEvent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nType                          ( CPF_Parm )
// int                            nTarget                        ( CPF_Parm )

void UTgGfxAdventuresHub::TriggerLobbyCamEvent ( int nType, int nTarget )
{
	static UFunction* pFnTriggerLobbyCamEvent = NULL;

	if ( ! pFnTriggerLobbyCamEvent )
		pFnTriggerLobbyCamEvent = (UFunction*) UObject::GObjObjects()->GetIndex( 147825 );

	UTgGfxAdventuresHub_execTriggerLobbyCamEvent_Parms TriggerLobbyCamEvent_Parms;
	TriggerLobbyCamEvent_Parms.nType = nType;
	TriggerLobbyCamEvent_Parms.nTarget = nTarget;

	pFnTriggerLobbyCamEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTriggerLobbyCamEvent, &TriggerLobbyCamEvent_Parms, NULL );

	pFnTriggerLobbyCamEvent->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxAdventuresHub.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxAdventuresHub::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 147824 );

	UTgGfxAdventuresHub_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxAdventuresHub.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxAdventuresHub::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 147822 );

	UTgGfxAdventuresHub_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxAdventuresHub.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxAdventuresHub::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 147820 );

	UTgGfxAdventuresHub_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxAdventuresHub.LeaveQueue
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxAdventuresHub::LeaveQueue ( )
{
	static UFunction* pFnLeaveQueue = NULL;

	if ( ! pFnLeaveQueue )
		pFnLeaveQueue = (UFunction*) UObject::GObjObjects()->GetIndex( 147819 );

	UTgGfxAdventuresHub_execLeaveQueue_Parms LeaveQueue_Parms;

	pFnLeaveQueue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLeaveQueue, &LeaveQueue_Parms, NULL );

	pFnLeaveQueue->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxAdventuresHub.PopulateGoalData
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxAdventuresHub::PopulateGoalData ( )
{
	static UFunction* pFnPopulateGoalData = NULL;

	if ( ! pFnPopulateGoalData )
		pFnPopulateGoalData = (UFunction*) UObject::GObjObjects()->GetIndex( 147818 );

	UTgGfxAdventuresHub_execPopulateGoalData_Parms PopulateGoalData_Parms;

	pFnPopulateGoalData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPopulateGoalData, &PopulateGoalData_Parms, NULL );

	pFnPopulateGoalData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxAdventuresHub.USC_OpenEventCam
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  isSmall                        ( CPF_Parm )

void UTgGfxAdventuresHub::USC_OpenEventCam ( unsigned long isSmall )
{
	static UFunction* pFnUSC_OpenEventCam = NULL;

	if ( ! pFnUSC_OpenEventCam )
		pFnUSC_OpenEventCam = (UFunction*) UObject::GObjObjects()->GetIndex( 147816 );

	UTgGfxAdventuresHub_execUSC_OpenEventCam_Parms USC_OpenEventCam_Parms;
	USC_OpenEventCam_Parms.isSmall = isSmall;

	pFnUSC_OpenEventCam->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_OpenEventCam, &USC_OpenEventCam_Parms, NULL );

	pFnUSC_OpenEventCam->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxAdventuresHub.USC_GotoVault
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bIsSmall                       ( CPF_Parm )

void UTgGfxAdventuresHub::USC_GotoVault ( unsigned long bIsSmall )
{
	static UFunction* pFnUSC_GotoVault = NULL;

	if ( ! pFnUSC_GotoVault )
		pFnUSC_GotoVault = (UFunction*) UObject::GObjObjects()->GetIndex( 147814 );

	UTgGfxAdventuresHub_execUSC_GotoVault_Parms USC_GotoVault_Parms;
	USC_GotoVault_Parms.bIsSmall = bIsSmall;

	pFnUSC_GotoVault->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_GotoVault, &USC_GotoVault_Parms, NULL );

	pFnUSC_GotoVault->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxAdventuresHub.USC_SetUserViewedEvent
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxAdventuresHub::USC_SetUserViewedEvent ( )
{
	static UFunction* pFnUSC_SetUserViewedEvent = NULL;

	if ( ! pFnUSC_SetUserViewedEvent )
		pFnUSC_SetUserViewedEvent = (UFunction*) UObject::GObjObjects()->GetIndex( 147813 );

	UTgGfxAdventuresHub_execUSC_SetUserViewedEvent_Parms USC_SetUserViewedEvent_Parms;

	pFnUSC_SetUserViewedEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_SetUserViewedEvent, &USC_SetUserViewedEvent_Parms, NULL );

	pFnUSC_SetUserViewedEvent->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxAdventuresHub.USC_GetAdventureLeaderboard
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nEventId                       ( CPF_Parm )

void UTgGfxAdventuresHub::USC_GetAdventureLeaderboard ( int nEventId )
{
	static UFunction* pFnUSC_GetAdventureLeaderboard = NULL;

	if ( ! pFnUSC_GetAdventureLeaderboard )
		pFnUSC_GetAdventureLeaderboard = (UFunction*) UObject::GObjObjects()->GetIndex( 147811 );

	UTgGfxAdventuresHub_execUSC_GetAdventureLeaderboard_Parms USC_GetAdventureLeaderboard_Parms;
	USC_GetAdventureLeaderboard_Parms.nEventId = nEventId;

	pFnUSC_GetAdventureLeaderboard->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_GetAdventureLeaderboard, &USC_GetAdventureLeaderboard_Parms, NULL );

	pFnUSC_GetAdventureLeaderboard->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxAdventuresHub.USC_OpenEventCam_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxAdventuresHub::USC_OpenEventCam_Delegate ( )
{
	static UFunction* pFnUSC_OpenEventCam_Delegate = NULL;

	if ( ! pFnUSC_OpenEventCam_Delegate )
		pFnUSC_OpenEventCam_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 147790 );

	UTgGfxAdventuresHub_execUSC_OpenEventCam_Delegate_Parms USC_OpenEventCam_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_OpenEventCam_Delegate, &USC_OpenEventCam_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxAdventuresHub.USC_GotoVault_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxAdventuresHub::USC_GotoVault_Delegate ( )
{
	static UFunction* pFnUSC_GotoVault_Delegate = NULL;

	if ( ! pFnUSC_GotoVault_Delegate )
		pFnUSC_GotoVault_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 147792 );

	UTgGfxAdventuresHub_execUSC_GotoVault_Delegate_Parms USC_GotoVault_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_GotoVault_Delegate, &USC_GotoVault_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxAdventuresHub.USC_GetAdventureLeaderboard_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxAdventuresHub::USC_GetAdventureLeaderboard_Delegate ( )
{
	static UFunction* pFnUSC_GetAdventureLeaderboard_Delegate = NULL;

	if ( ! pFnUSC_GetAdventureLeaderboard_Delegate )
		pFnUSC_GetAdventureLeaderboard_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 147794 );

	UTgGfxAdventuresHub_execUSC_GetAdventureLeaderboard_Delegate_Parms USC_GetAdventureLeaderboard_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_GetAdventureLeaderboard_Delegate, &USC_GetAdventureLeaderboard_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxAdventuresHub.USC_SetUserViewedEvent_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxAdventuresHub::USC_SetUserViewedEvent_Delegate ( )
{
	static UFunction* pFnUSC_SetUserViewedEvent_Delegate = NULL;

	if ( ! pFnUSC_SetUserViewedEvent_Delegate )
		pFnUSC_SetUserViewedEvent_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 147796 );

	UTgGfxAdventuresHub_execUSC_SetUserViewedEvent_Delegate_Parms USC_SetUserViewedEvent_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_SetUserViewedEvent_Delegate, &USC_SetUserViewedEvent_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxBooster.UpdateBoosterTime
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxBooster::UpdateBoosterTime ( )
{
	static UFunction* pFnUpdateBoosterTime = NULL;

	if ( ! pFnUpdateBoosterTime )
		pFnUpdateBoosterTime = (UFunction*) UObject::GObjObjects()->GetIndex( 147845 );

	UTgGfxBooster_execUpdateBoosterTime_Parms UpdateBoosterTime_Parms;

	pFnUpdateBoosterTime->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateBoosterTime, &UpdateBoosterTime_Parms, NULL );

	pFnUpdateBoosterTime->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxBooster.USC_ShowPurchasePopup
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ItemId                         ( CPF_Parm )
// int                            nQuantity                      ( CPF_Parm )

void UTgGfxBooster::USC_ShowPurchasePopup ( int ItemId, int nQuantity )
{
	static UFunction* pFnUSC_ShowPurchasePopup = NULL;

	if ( ! pFnUSC_ShowPurchasePopup )
		pFnUSC_ShowPurchasePopup = (UFunction*) UObject::GObjObjects()->GetIndex( 147842 );

	UTgGfxBooster_execUSC_ShowPurchasePopup_Parms USC_ShowPurchasePopup_Parms;
	USC_ShowPurchasePopup_Parms.ItemId = ItemId;
	USC_ShowPurchasePopup_Parms.nQuantity = nQuantity;

	pFnUSC_ShowPurchasePopup->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_ShowPurchasePopup, &USC_ShowPurchasePopup_Parms, NULL );

	pFnUSC_ShowPurchasePopup->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxBooster.USC_ShowPurchasePopup_Delegate
// [0x00120000] 
// Parameters infos:
// int                            ItemId                         ( CPF_Parm )
// int                            nQuantity                      ( CPF_Parm )

void UTgGfxBooster::USC_ShowPurchasePopup_Delegate ( int ItemId, int nQuantity )
{
	static UFunction* pFnUSC_ShowPurchasePopup_Delegate = NULL;

	if ( ! pFnUSC_ShowPurchasePopup_Delegate )
		pFnUSC_ShowPurchasePopup_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 147838 );

	UTgGfxBooster_execUSC_ShowPurchasePopup_Delegate_Parms USC_ShowPurchasePopup_Delegate_Parms;
	USC_ShowPurchasePopup_Delegate_Parms.ItemId = ItemId;
	USC_ShowPurchasePopup_Delegate_Parms.nQuantity = nQuantity;

	this->ProcessEvent ( pFnUSC_ShowPurchasePopup_Delegate, &USC_ShowPurchasePopup_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxBooster.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxBooster::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 147836 );

	UTgGfxBooster_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxCharacterBuilder.HasVendorData
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UTgGfxCharacterBuilder::HasVendorData ( )
{
	static UFunction* pFnHasVendorData = NULL;

	if ( ! pFnHasVendorData )
		pFnHasVendorData = (UFunction*) UObject::GObjObjects()->GetIndex( 147982 );

	UTgGfxCharacterBuilder_execHasVendorData_Parms HasVendorData_Parms;

	pFnHasVendorData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHasVendorData, &HasVendorData_Parms, NULL );

	pFnHasVendorData->FunctionFlags |= 0x400;

	return HasVendorData_Parms.ReturnValue;
};

// Function TgClient.TgGfxCharacterBuilder.GetVendorData
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UTgVendorData*           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UTgVendorData* UTgGfxCharacterBuilder::GetVendorData ( )
{
	static UFunction* pFnGetVendorData = NULL;

	if ( ! pFnGetVendorData )
		pFnGetVendorData = (UFunction*) UObject::GObjObjects()->GetIndex( 147980 );

	UTgGfxCharacterBuilder_execGetVendorData_Parms GetVendorData_Parms;

	pFnGetVendorData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVendorData, &GetVendorData_Parms, NULL );

	pFnGetVendorData->FunctionFlags |= 0x400;

	return GetVendorData_Parms.ReturnValue;
};

// Function TgClient.TgGfxCharacterBuilder.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxCharacterBuilder::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 147978 );

	UTgGfxCharacterBuilder_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxCharacterBuilder.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxCharacterBuilder::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 147977 );

	UTgGfxCharacterBuilder_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxCharacterBuilder.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxCharacterBuilder::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 147975 );

	UTgGfxCharacterBuilder_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxClanIconPicker.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          pMP                            ( CPF_Parm )

void UTgGfxClanIconPicker::Initialize ( class UTgMoviePlayer* pMP )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148018 );

	UTgGfxClanIconPicker_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.pMP = pMP;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxClanIconPicker.USC_SelectIcon
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nIconItemId                    ( CPF_Parm )

void UTgGfxClanIconPicker::USC_SelectIcon ( int nIconItemId )
{
	static UFunction* pFnUSC_SelectIcon = NULL;

	if ( ! pFnUSC_SelectIcon )
		pFnUSC_SelectIcon = (UFunction*) UObject::GObjObjects()->GetIndex( 148016 );

	UTgGfxClanIconPicker_execUSC_SelectIcon_Parms USC_SelectIcon_Parms;
	USC_SelectIcon_Parms.nIconItemId = nIconItemId;

	pFnUSC_SelectIcon->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_SelectIcon, &USC_SelectIcon_Parms, NULL );

	pFnUSC_SelectIcon->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxClanIconPicker.USC_SelectIcon_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxClanIconPicker::USC_SelectIcon_Delegate ( )
{
	static UFunction* pFnUSC_SelectIcon_Delegate = NULL;

	if ( ! pFnUSC_SelectIcon_Delegate )
		pFnUSC_SelectIcon_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 148014 );

	UTgGfxClanIconPicker_execUSC_SelectIcon_Delegate_Parms USC_SelectIcon_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_SelectIcon_Delegate, &USC_SelectIcon_Delegate_Parms, NULL );
};

// Function TgClient.TgGFxDungeonCurrencies.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGFxDungeonCurrencies::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148022 );

	UTgGFxDungeonCurrencies_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGFxDungeonCurrencies.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGFxDungeonCurrencies::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148020 );

	UTgGFxDungeonCurrencies_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxEOMLobby.OnAcquisition
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgEventDataItem*        pEvent                         ( CPF_Parm )

void UTgGfxEOMLobby::OnAcquisition ( class UTgEventDataItem* pEvent )
{
	static UFunction* pFnOnAcquisition = NULL;

	if ( ! pFnOnAcquisition )
		pFnOnAcquisition = (UFunction*) UObject::GObjObjects()->GetIndex( 148047 );

	UTgGfxEOMLobby_execOnAcquisition_Parms OnAcquisition_Parms;
	OnAcquisition_Parms.pEvent = pEvent;

	pFnOnAcquisition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnAcquisition, &OnAcquisition_Parms, NULL );

	pFnOnAcquisition->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxEOMLobby.OnStats
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 instanceId                     ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxEOMLobby::OnStats ( struct FString instanceId )
{
	static UFunction* pFnOnStats = NULL;

	if ( ! pFnOnStats )
		pFnOnStats = (UFunction*) UObject::GObjObjects()->GetIndex( 148045 );

	UTgGfxEOMLobby_execOnStats_Parms OnStats_Parms;
	memcpy ( &OnStats_Parms.instanceId, &instanceId, 0x10 );

	pFnOnStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnStats, &OnStats_Parms, NULL );

	pFnOnStats->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxEOMLobby.OnFeedback
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxEOMLobby::OnFeedback ( )
{
	static UFunction* pFnOnFeedback = NULL;

	if ( ! pFnOnFeedback )
		pFnOnFeedback = (UFunction*) UObject::GObjObjects()->GetIndex( 148044 );

	UTgGfxEOMLobby_execOnFeedback_Parms OnFeedback_Parms;

	pFnOnFeedback->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnFeedback, &OnFeedback_Parms, NULL );

	pFnOnFeedback->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxEOMLobby.OnTwitter
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 instanceId                     ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxEOMLobby::OnTwitter ( struct FString instanceId )
{
	static UFunction* pFnOnTwitter = NULL;

	if ( ! pFnOnTwitter )
		pFnOnTwitter = (UFunction*) UObject::GObjObjects()->GetIndex( 148042 );

	UTgGfxEOMLobby_execOnTwitter_Parms OnTwitter_Parms;
	memcpy ( &OnTwitter_Parms.instanceId, &instanceId, 0x10 );

	pFnOnTwitter->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnTwitter, &OnTwitter_Parms, NULL );

	pFnOnTwitter->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxEOMLobby.OnFacebook
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 instanceId                     ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxEOMLobby::OnFacebook ( struct FString instanceId )
{
	static UFunction* pFnOnFacebook = NULL;

	if ( ! pFnOnFacebook )
		pFnOnFacebook = (UFunction*) UObject::GObjObjects()->GetIndex( 148040 );

	UTgGfxEOMLobby_execOnFacebook_Parms OnFacebook_Parms;
	memcpy ( &OnFacebook_Parms.instanceId, &instanceId, 0x10 );

	pFnOnFacebook->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnFacebook, &OnFacebook_Parms, NULL );

	pFnOnFacebook->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxEOMLobby.OnSendPlayerGift
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgEventDataItem*        pEvent                         ( CPF_Parm )

void UTgGfxEOMLobby::OnSendPlayerGift ( class UTgEventDataItem* pEvent )
{
	static UFunction* pFnOnSendPlayerGift = NULL;

	if ( ! pFnOnSendPlayerGift )
		pFnOnSendPlayerGift = (UFunction*) UObject::GObjObjects()->GetIndex( 148038 );

	UTgGfxEOMLobby_execOnSendPlayerGift_Parms OnSendPlayerGift_Parms;
	OnSendPlayerGift_Parms.pEvent = pEvent;

	pFnOnSendPlayerGift->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnSendPlayerGift, &OnSendPlayerGift_Parms, NULL );

	pFnOnSendPlayerGift->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxEOMLobby.OnSendGiftPoints
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pData                          ( CPF_Parm )

void UTgGfxEOMLobby::OnSendGiftPoints ( class UGFxObject* pData )
{
	static UFunction* pFnOnSendGiftPoints = NULL;

	if ( ! pFnOnSendGiftPoints )
		pFnOnSendGiftPoints = (UFunction*) UObject::GObjObjects()->GetIndex( 148036 );

	UTgGfxEOMLobby_execOnSendGiftPoints_Parms OnSendGiftPoints_Parms;
	OnSendGiftPoints_Parms.pData = pData;

	pFnOnSendGiftPoints->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnSendGiftPoints, &OnSendGiftPoints_Parms, NULL );

	pFnOnSendGiftPoints->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxEOMLobby.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxEOMLobby::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 148034 );

	UTgGfxEOMLobby_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxEOMLobby.USC_SendPlayerGift
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// struct FString                 PlayerName                     ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// struct FString                 nPlayerId                      ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void UTgGfxEOMLobby::USC_SendPlayerGift ( struct FString PlayerName, struct FString nPlayerId )
{
	static UFunction* pFnUSC_SendPlayerGift = NULL;

	if ( ! pFnUSC_SendPlayerGift )
		pFnUSC_SendPlayerGift = (UFunction*) UObject::GObjObjects()->GetIndex( 148031 );

	UTgGfxEOMLobby_execUSC_SendPlayerGift_Parms USC_SendPlayerGift_Parms;
	memcpy ( &USC_SendPlayerGift_Parms.PlayerName, &PlayerName, 0x10 );
	memcpy ( &USC_SendPlayerGift_Parms.nPlayerId, &nPlayerId, 0x10 );

	pFnUSC_SendPlayerGift->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_SendPlayerGift, &USC_SendPlayerGift_Parms, NULL );

	pFnUSC_SendPlayerGift->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxEOMLobby.ReceiveGiftedPoints
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// class UGFxObject*              Data                           ( CPF_Parm )

void UTgGfxEOMLobby::eventReceiveGiftedPoints ( class UGFxObject* Data )
{
	static UFunction* pFnReceiveGiftedPoints = NULL;

	if ( ! pFnReceiveGiftedPoints )
		pFnReceiveGiftedPoints = (UFunction*) UObject::GObjObjects()->GetIndex( 148029 );

	UTgGfxEOMLobby_eventReceiveGiftedPoints_Parms ReceiveGiftedPoints_Parms;
	ReceiveGiftedPoints_Parms.Data = Data;

	this->ProcessEvent ( pFnReceiveGiftedPoints, &ReceiveGiftedPoints_Parms, NULL );
};

// Function TgClient.TgGfxEOMLobby.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxEOMLobby::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148028 );

	UTgGfxEOMLobby_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxEOMLobby.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          pMoviePlayer                   ( CPF_Parm )

void UTgGfxEOMLobby::Initialize ( class UTgMoviePlayer* pMoviePlayer )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148026 );

	UTgGfxEOMLobby_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.pMoviePlayer = pMoviePlayer;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxEventAchievements.CheckBundleOwned
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxEventAchievements::CheckBundleOwned ( )
{
	static UFunction* pFnCheckBundleOwned = NULL;

	if ( ! pFnCheckBundleOwned )
		pFnCheckBundleOwned = (UFunction*) UObject::GObjObjects()->GetIndex( 148053 );

	UTgGfxEventAchievements_execCheckBundleOwned_Parms CheckBundleOwned_Parms;

	pFnCheckBundleOwned->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCheckBundleOwned, &CheckBundleOwned_Parms, NULL );

	pFnCheckBundleOwned->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxEventAchievements.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxEventAchievements::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 148051 );

	UTgGfxEventAchievements_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxEventAchievements.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxEventAchievements::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148049 );

	UTgGfxEventAchievements_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxEventLeaderboard.USC_RequestEventLeaderboard
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            EventIdx                       ( CPF_Parm )

void UTgGfxEventLeaderboard::USC_RequestEventLeaderboard ( int EventIdx )
{
	static UFunction* pFnUSC_RequestEventLeaderboard = NULL;

	if ( ! pFnUSC_RequestEventLeaderboard )
		pFnUSC_RequestEventLeaderboard = (UFunction*) UObject::GObjObjects()->GetIndex( 148082 );

	UTgGfxEventLeaderboard_execUSC_RequestEventLeaderboard_Parms USC_RequestEventLeaderboard_Parms;
	USC_RequestEventLeaderboard_Parms.EventIdx = EventIdx;

	pFnUSC_RequestEventLeaderboard->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_RequestEventLeaderboard, &USC_RequestEventLeaderboard_Parms, NULL );

	pFnUSC_RequestEventLeaderboard->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxEventLeaderboard.Chunk
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGFxObject*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 dataIdx                        ( CPF_Parm | CPF_NeedCtorLink )

class UGFxObject* UTgGfxEventLeaderboard::Chunk ( struct FString dataIdx )
{
	static UFunction* pFnChunk = NULL;

	if ( ! pFnChunk )
		pFnChunk = (UFunction*) UObject::GObjObjects()->GetIndex( 148079 );

	UTgGfxEventLeaderboard_execChunk_Parms Chunk_Parms;
	memcpy ( &Chunk_Parms.dataIdx, &dataIdx, 0x10 );

	pFnChunk->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnChunk, &Chunk_Parms, NULL );

	pFnChunk->FunctionFlags |= 0x400;

	return Chunk_Parms.ReturnValue;
};

// Function TgClient.TgGfxEventLeaderboard.CreateChunk
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGFxObject*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 dataIdx                        ( CPF_Parm | CPF_NeedCtorLink )

class UGFxObject* UTgGfxEventLeaderboard::CreateChunk ( struct FString dataIdx )
{
	static UFunction* pFnCreateChunk = NULL;

	if ( ! pFnCreateChunk )
		pFnCreateChunk = (UFunction*) UObject::GObjObjects()->GetIndex( 148076 );

	UTgGfxEventLeaderboard_execCreateChunk_Parms CreateChunk_Parms;
	memcpy ( &CreateChunk_Parms.dataIdx, &dataIdx, 0x10 );

	pFnCreateChunk->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateChunk, &CreateChunk_Parms, NULL );

	pFnCreateChunk->FunctionFlags |= 0x400;

	return CreateChunk_Parms.ReturnValue;
};

// Function TgClient.TgGfxEventLeaderboard.UpdateFromChunk
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 dataIdx                        ( CPF_Parm | CPF_NeedCtorLink )

bool UTgGfxEventLeaderboard::UpdateFromChunk ( struct FString dataIdx )
{
	static UFunction* pFnUpdateFromChunk = NULL;

	if ( ! pFnUpdateFromChunk )
		pFnUpdateFromChunk = (UFunction*) UObject::GObjObjects()->GetIndex( 148073 );

	UTgGfxEventLeaderboard_execUpdateFromChunk_Parms UpdateFromChunk_Parms;
	memcpy ( &UpdateFromChunk_Parms.dataIdx, &dataIdx, 0x10 );

	pFnUpdateFromChunk->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateFromChunk, &UpdateFromChunk_Parms, NULL );

	pFnUpdateFromChunk->FunctionFlags |= 0x400;

	return UpdateFromChunk_Parms.ReturnValue;
};

// Function TgClient.TgGfxEventLeaderboard.OnReceivePlayerNames
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UTgGfxEventLeaderboard::OnReceivePlayerNames ( )
{
	static UFunction* pFnOnReceivePlayerNames = NULL;

	if ( ! pFnOnReceivePlayerNames )
		pFnOnReceivePlayerNames = (UFunction*) UObject::GObjObjects()->GetIndex( 148072 );

	UTgGfxEventLeaderboard_execOnReceivePlayerNames_Parms OnReceivePlayerNames_Parms;

	pFnOnReceivePlayerNames->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnReceivePlayerNames, &OnReceivePlayerNames_Parms, NULL );

	pFnOnReceivePlayerNames->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxEventLeaderboard.ReceivedAllData
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UTgGfxEventLeaderboard::ReceivedAllData ( )
{
	static UFunction* pFnReceivedAllData = NULL;

	if ( ! pFnReceivedAllData )
		pFnReceivedAllData = (UFunction*) UObject::GObjObjects()->GetIndex( 148071 );

	UTgGfxEventLeaderboard_execReceivedAllData_Parms ReceivedAllData_Parms;

	pFnReceivedAllData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceivedAllData, &ReceivedAllData_Parms, NULL );

	pFnReceivedAllData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxEventLeaderboard.PopulateDropdown
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// TArray< int >                  arrEventIds                    ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxEventLeaderboard::PopulateDropdown ( TArray< int > arrEventIds )
{
	static UFunction* pFnPopulateDropdown = NULL;

	if ( ! pFnPopulateDropdown )
		pFnPopulateDropdown = (UFunction*) UObject::GObjObjects()->GetIndex( 148068 );

	UTgGfxEventLeaderboard_execPopulateDropdown_Parms PopulateDropdown_Parms;
	memcpy ( &PopulateDropdown_Parms.arrEventIds, &arrEventIds, 0x10 );

	pFnPopulateDropdown->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPopulateDropdown, &PopulateDropdown_Parms, NULL );

	pFnPopulateDropdown->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxEventLeaderboard.ShowLeaderboard
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            nStartIndex                    ( CPF_Parm )
// int                            nEndIndex                      ( CPF_Parm )

void UTgGfxEventLeaderboard::ShowLeaderboard ( int nStartIndex, int nEndIndex )
{
	static UFunction* pFnShowLeaderboard = NULL;

	if ( ! pFnShowLeaderboard )
		pFnShowLeaderboard = (UFunction*) UObject::GObjObjects()->GetIndex( 148065 );

	UTgGfxEventLeaderboard_execShowLeaderboard_Parms ShowLeaderboard_Parms;
	ShowLeaderboard_Parms.nStartIndex = nStartIndex;
	ShowLeaderboard_Parms.nEndIndex = nEndIndex;

	pFnShowLeaderboard->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowLeaderboard, &ShowLeaderboard_Parms, NULL );

	pFnShowLeaderboard->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxEventLeaderboard.RequestFriendAndWorldPlayerNames
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UTgGfxEventLeaderboard::RequestFriendAndWorldPlayerNames ( )
{
	static UFunction* pFnRequestFriendAndWorldPlayerNames = NULL;

	if ( ! pFnRequestFriendAndWorldPlayerNames )
		pFnRequestFriendAndWorldPlayerNames = (UFunction*) UObject::GObjObjects()->GetIndex( 148064 );

	UTgGfxEventLeaderboard_execRequestFriendAndWorldPlayerNames_Parms RequestFriendAndWorldPlayerNames_Parms;

	pFnRequestFriendAndWorldPlayerNames->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRequestFriendAndWorldPlayerNames, &RequestFriendAndWorldPlayerNames_Parms, NULL );

	pFnRequestFriendAndWorldPlayerNames->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxEventLeaderboard.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxEventLeaderboard::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148062 );

	UTgGfxEventLeaderboard_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFeedback.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxFeedback::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 148132 );

	UTgGfxFeedback_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxFeedback.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxFeedback::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148130 );

	UTgGfxFeedback_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxGlossary.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxGlossary::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148138 );

	UTgGfxGlossary_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxGlossary.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          pMP                            ( CPF_Parm )

void UTgGfxGlossary::Initialize ( class UTgMoviePlayer* pMP )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148136 );

	UTgGfxGlossary_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.pMP = pMP;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxGlossary.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxGlossary::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 148134 );

	UTgGfxGlossary_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxGods.OnAcquisition
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgEventDataItem*        pEvent                         ( CPF_Parm )

void UTgGfxGods::OnAcquisition ( class UTgEventDataItem* pEvent )
{
	static UFunction* pFnOnAcquisition = NULL;

	if ( ! pFnOnAcquisition )
		pFnOnAcquisition = (UFunction*) UObject::GObjObjects()->GetIndex( 148391 );

	UTgGfxGods_execOnAcquisition_Parms OnAcquisition_Parms;
	OnAcquisition_Parms.pEvent = pEvent;

	pFnOnAcquisition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnAcquisition, &OnAcquisition_Parms, NULL );

	pFnOnAcquisition->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxGods.UpdateUGPValue
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgEventDataItem*        pEvent                         ( CPF_Parm )

void UTgGfxGods::UpdateUGPValue ( class UTgEventDataItem* pEvent )
{
	static UFunction* pFnUpdateUGPValue = NULL;

	if ( ! pFnUpdateUGPValue )
		pFnUpdateUGPValue = (UFunction*) UObject::GObjObjects()->GetIndex( 148389 );

	UTgGfxGods_execUpdateUGPValue_Parms UpdateUGPValue_Parms;
	UpdateUGPValue_Parms.pEvent = pEvent;

	pFnUpdateUGPValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateUGPValue, &UpdateUGPValue_Parms, NULL );

	pFnUpdateUGPValue->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxGods.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxGods::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 148387 );

	UTgGfxGods_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxGods.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxGods::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148386 );

	UTgGfxGods_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxGods.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxGods::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148384 );

	UTgGfxGods_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxGods.USC_PlayGodVideo
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            abilityNumber                  ( CPF_Parm )

void UTgGfxGods::USC_PlayGodVideo ( int abilityNumber )
{
	static UFunction* pFnUSC_PlayGodVideo = NULL;

	if ( ! pFnUSC_PlayGodVideo )
		pFnUSC_PlayGodVideo = (UFunction*) UObject::GObjObjects()->GetIndex( 148382 );

	UTgGfxGods_execUSC_PlayGodVideo_Parms USC_PlayGodVideo_Parms;
	USC_PlayGodVideo_Parms.abilityNumber = abilityNumber;

	pFnUSC_PlayGodVideo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_PlayGodVideo, &USC_PlayGodVideo_Parms, NULL );

	pFnUSC_PlayGodVideo->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxGods.USC_PlayGodVideo_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxGods::USC_PlayGodVideo_Delegate ( )
{
	static UFunction* pFnUSC_PlayGodVideo_Delegate = NULL;

	if ( ! pFnUSC_PlayGodVideo_Delegate )
		pFnUSC_PlayGodVideo_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 148168 );

	UTgGfxGods_execUSC_PlayGodVideo_Delegate_Parms USC_PlayGodVideo_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_PlayGodVideo_Delegate, &USC_PlayGodVideo_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxGods.USC_UpdateEmoteSelection
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 emoteName                      ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxGods::USC_UpdateEmoteSelection ( struct FString emoteName )
{
	static UFunction* pFnUSC_UpdateEmoteSelection = NULL;

	if ( ! pFnUSC_UpdateEmoteSelection )
		pFnUSC_UpdateEmoteSelection = (UFunction*) UObject::GObjObjects()->GetIndex( 148380 );

	UTgGfxGods_execUSC_UpdateEmoteSelection_Parms USC_UpdateEmoteSelection_Parms;
	memcpy ( &USC_UpdateEmoteSelection_Parms.emoteName, &emoteName, 0x10 );

	pFnUSC_UpdateEmoteSelection->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_UpdateEmoteSelection, &USC_UpdateEmoteSelection_Parms, NULL );

	pFnUSC_UpdateEmoteSelection->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxGods.USC_UpdateEmoteSelection_Delegate
// [0x00120000] 
// Parameters infos:
// struct FString                 emoteName                      ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxGods::USC_UpdateEmoteSelection_Delegate ( struct FString emoteName )
{
	static UFunction* pFnUSC_UpdateEmoteSelection_Delegate = NULL;

	if ( ! pFnUSC_UpdateEmoteSelection_Delegate )
		pFnUSC_UpdateEmoteSelection_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 148170 );

	UTgGfxGods_execUSC_UpdateEmoteSelection_Delegate_Parms USC_UpdateEmoteSelection_Delegate_Parms;
	memcpy ( &USC_UpdateEmoteSelection_Delegate_Parms.emoteName, &emoteName, 0x10 );

	this->ProcessEvent ( pFnUSC_UpdateEmoteSelection_Delegate, &USC_UpdateEmoteSelection_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxGodsHistory.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxGodsHistory::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148416 );

	UTgGfxGodsHistory_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxGodsHistory.UpdateGodHistory
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxGodsHistory::eventUpdateGodHistory ( )
{
	static UFunction* pFnUpdateGodHistory = NULL;

	if ( ! pFnUpdateGodHistory )
		pFnUpdateGodHistory = (UFunction*) UObject::GObjObjects()->GetIndex( 148415 );

	UTgGfxGodsHistory_eventUpdateGodHistory_Parms UpdateGodHistory_Parms;

	this->ProcessEvent ( pFnUpdateGodHistory, &UpdateGodHistory_Parms, NULL );
};

// Function TgClient.TgGfxGodsHistory.ASC_UpdateGodHistory
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxGodsHistory::ASC_UpdateGodHistory ( )
{
	static UFunction* pFnASC_UpdateGodHistory = NULL;

	if ( ! pFnASC_UpdateGodHistory )
		pFnASC_UpdateGodHistory = (UFunction*) UObject::GObjObjects()->GetIndex( 148414 );

	UTgGfxGodsHistory_execASC_UpdateGodHistory_Parms ASC_UpdateGodHistory_Parms;

	this->ProcessEvent ( pFnASC_UpdateGodHistory, &ASC_UpdateGodHistory_Parms, NULL );
};

// Function TgClient.TgGfxGodsHistory.UpdateQueueData
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxGodsHistory::eventUpdateQueueData ( )
{
	static UFunction* pFnUpdateQueueData = NULL;

	if ( ! pFnUpdateQueueData )
		pFnUpdateQueueData = (UFunction*) UObject::GObjObjects()->GetIndex( 148413 );

	UTgGfxGodsHistory_eventUpdateQueueData_Parms UpdateQueueData_Parms;

	this->ProcessEvent ( pFnUpdateQueueData, &UpdateQueueData_Parms, NULL );
};

// Function TgClient.TgGfxGodsHistory.ASC_UpdateQueueData
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxGodsHistory::ASC_UpdateQueueData ( )
{
	static UFunction* pFnASC_UpdateQueueData = NULL;

	if ( ! pFnASC_UpdateQueueData )
		pFnASC_UpdateQueueData = (UFunction*) UObject::GObjObjects()->GetIndex( 148412 );

	UTgGfxGodsHistory_execASC_UpdateQueueData_Parms ASC_UpdateQueueData_Parms;

	this->ProcessEvent ( pFnASC_UpdateQueueData, &ASC_UpdateQueueData_Parms, NULL );
};

// Function TgClient.TgGfxGodsHistory.USC_ShowMatchDetails
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            pMatchID                       ( CPF_Parm )

void UTgGfxGodsHistory::USC_ShowMatchDetails ( int pMatchID )
{
	static UFunction* pFnUSC_ShowMatchDetails = NULL;

	if ( ! pFnUSC_ShowMatchDetails )
		pFnUSC_ShowMatchDetails = (UFunction*) UObject::GObjObjects()->GetIndex( 148410 );

	UTgGfxGodsHistory_execUSC_ShowMatchDetails_Parms USC_ShowMatchDetails_Parms;
	USC_ShowMatchDetails_Parms.pMatchID = pMatchID;

	pFnUSC_ShowMatchDetails->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_ShowMatchDetails, &USC_ShowMatchDetails_Parms, NULL );

	pFnUSC_ShowMatchDetails->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxGodsHistory.USC_GetHistoryData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            queueId                        ( CPF_Parm )

void UTgGfxGodsHistory::USC_GetHistoryData ( int queueId )
{
	static UFunction* pFnUSC_GetHistoryData = NULL;

	if ( ! pFnUSC_GetHistoryData )
		pFnUSC_GetHistoryData = (UFunction*) UObject::GObjObjects()->GetIndex( 148408 );

	UTgGfxGodsHistory_execUSC_GetHistoryData_Parms USC_GetHistoryData_Parms;
	USC_GetHistoryData_Parms.queueId = queueId;

	pFnUSC_GetHistoryData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_GetHistoryData, &USC_GetHistoryData_Parms, NULL );

	pFnUSC_GetHistoryData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxGodsHistory.USC_GetQueuesDropdown
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            godId                          ( CPF_Parm )

void UTgGfxGodsHistory::USC_GetQueuesDropdown ( int godId )
{
	static UFunction* pFnUSC_GetQueuesDropdown = NULL;

	if ( ! pFnUSC_GetQueuesDropdown )
		pFnUSC_GetQueuesDropdown = (UFunction*) UObject::GObjObjects()->GetIndex( 148406 );

	UTgGfxGodsHistory_execUSC_GetQueuesDropdown_Parms USC_GetQueuesDropdown_Parms;
	USC_GetQueuesDropdown_Parms.godId = godId;

	pFnUSC_GetQueuesDropdown->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_GetQueuesDropdown, &USC_GetQueuesDropdown_Parms, NULL );

	pFnUSC_GetQueuesDropdown->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxGodsHistory.USC_ShowMatchDetails_Delegate
// [0x00120000] 
// Parameters infos:
// int                            pMatchID                       ( CPF_Parm )

void UTgGfxGodsHistory::USC_ShowMatchDetails_Delegate ( int pMatchID )
{
	static UFunction* pFnUSC_ShowMatchDetails_Delegate = NULL;

	if ( ! pFnUSC_ShowMatchDetails_Delegate )
		pFnUSC_ShowMatchDetails_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 148394 );

	UTgGfxGodsHistory_execUSC_ShowMatchDetails_Delegate_Parms USC_ShowMatchDetails_Delegate_Parms;
	USC_ShowMatchDetails_Delegate_Parms.pMatchID = pMatchID;

	this->ProcessEvent ( pFnUSC_ShowMatchDetails_Delegate, &USC_ShowMatchDetails_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxGodsHistory.USC_GetHistoryData_Delegate
// [0x00120000] 
// Parameters infos:
// int                            queueId                        ( CPF_Parm )

void UTgGfxGodsHistory::USC_GetHistoryData_Delegate ( int queueId )
{
	static UFunction* pFnUSC_GetHistoryData_Delegate = NULL;

	if ( ! pFnUSC_GetHistoryData_Delegate )
		pFnUSC_GetHistoryData_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 148396 );

	UTgGfxGodsHistory_execUSC_GetHistoryData_Delegate_Parms USC_GetHistoryData_Delegate_Parms;
	USC_GetHistoryData_Delegate_Parms.queueId = queueId;

	this->ProcessEvent ( pFnUSC_GetHistoryData_Delegate, &USC_GetHistoryData_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxGodsHistory.USC_GetQueuesDropdown_Delegate
// [0x00120000] 
// Parameters infos:
// int                            godId                          ( CPF_Parm )

void UTgGfxGodsHistory::USC_GetQueuesDropdown_Delegate ( int godId )
{
	static UFunction* pFnUSC_GetQueuesDropdown_Delegate = NULL;

	if ( ! pFnUSC_GetQueuesDropdown_Delegate )
		pFnUSC_GetQueuesDropdown_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 148398 );

	UTgGfxGodsHistory_execUSC_GetQueuesDropdown_Delegate_Parms USC_GetQueuesDropdown_Delegate_Parms;
	USC_GetQueuesDropdown_Delegate_Parms.godId = godId;

	this->ProcessEvent ( pFnUSC_GetQueuesDropdown_Delegate, &USC_GetQueuesDropdown_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxGuides.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxGuides::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148418 );

	UTgGfxGuides_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxHudItems.UpdateGlow
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// unsigned long                  Visibility                     ( CPF_Parm )

void UTgGfxHudItems::eventUpdateGlow ( int Index, unsigned long Visibility )
{
	static UFunction* pFnUpdateGlow = NULL;

	if ( ! pFnUpdateGlow )
		pFnUpdateGlow = (UFunction*) UObject::GObjObjects()->GetIndex( 148438 );

	UTgGfxHudItems_eventUpdateGlow_Parms UpdateGlow_Parms;
	UpdateGlow_Parms.Index = Index;
	UpdateGlow_Parms.Visibility = Visibility;

	this->ProcessEvent ( pFnUpdateGlow, &UpdateGlow_Parms, NULL );
};

// Function TgClient.TgGfxHudItems.ASC_UpdateGlow
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// unsigned long                  Visibility                     ( CPF_Parm )

void UTgGfxHudItems::ASC_UpdateGlow ( int Index, unsigned long Visibility )
{
	static UFunction* pFnASC_UpdateGlow = NULL;

	if ( ! pFnASC_UpdateGlow )
		pFnASC_UpdateGlow = (UFunction*) UObject::GObjObjects()->GetIndex( 148435 );

	UTgGfxHudItems_execASC_UpdateGlow_Parms ASC_UpdateGlow_Parms;
	ASC_UpdateGlow_Parms.Index = Index;
	ASC_UpdateGlow_Parms.Visibility = Visibility;

	this->ProcessEvent ( pFnASC_UpdateGlow, &ASC_UpdateGlow_Parms, NULL );
};

// Function TgClient.TgGfxHudItems.USC_SetupItemDisplay
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxHudItems::USC_SetupItemDisplay ( )
{
	static UFunction* pFnUSC_SetupItemDisplay = NULL;

	if ( ! pFnUSC_SetupItemDisplay )
		pFnUSC_SetupItemDisplay = (UFunction*) UObject::GObjObjects()->GetIndex( 148434 );

	UTgGfxHudItems_execUSC_SetupItemDisplay_Parms USC_SetupItemDisplay_Parms;

	pFnUSC_SetupItemDisplay->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_SetupItemDisplay, &USC_SetupItemDisplay_Parms, NULL );

	pFnUSC_SetupItemDisplay->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxHudItems.USC_SetupItemDisplay_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxHudItems::USC_SetupItemDisplay_Delegate ( )
{
	static UFunction* pFnUSC_SetupItemDisplay_Delegate = NULL;

	if ( ! pFnUSC_SetupItemDisplay_Delegate )
		pFnUSC_SetupItemDisplay_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 148422 );

	UTgGfxHudItems_execUSC_SetupItemDisplay_Delegate_Parms USC_SetupItemDisplay_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_SetupItemDisplay_Delegate, &USC_SetupItemDisplay_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxHudItems.CheckCurrency
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgEventDataItem*        pEvent                         ( CPF_Parm )

void UTgGfxHudItems::CheckCurrency ( class UTgEventDataItem* pEvent )
{
	static UFunction* pFnCheckCurrency = NULL;

	if ( ! pFnCheckCurrency )
		pFnCheckCurrency = (UFunction*) UObject::GObjObjects()->GetIndex( 148432 );

	UTgGfxHudItems_execCheckCurrency_Parms CheckCurrency_Parms;
	CheckCurrency_Parms.pEvent = pEvent;

	pFnCheckCurrency->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCheckCurrency, &CheckCurrency_Parms, NULL );

	pFnCheckCurrency->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxHudItems.CheckWishList
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bPurge                         ( CPF_Parm )

void UTgGfxHudItems::CheckWishList ( unsigned long bPurge )
{
	static UFunction* pFnCheckWishList = NULL;

	if ( ! pFnCheckWishList )
		pFnCheckWishList = (UFunction*) UObject::GObjObjects()->GetIndex( 148430 );

	UTgGfxHudItems_execCheckWishList_Parms CheckWishList_Parms;
	CheckWishList_Parms.bPurge = bPurge;

	pFnCheckWishList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCheckWishList, &CheckWishList_Parms, NULL );

	pFnCheckWishList->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxHudItems.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxHudItems::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 148428 );

	UTgGfxHudItems_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxHudItems.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxHudItems::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148426 );

	UTgGfxHudItems_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxHudNotify.OnGameUIEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UTgEventDataItem*        pEvent                         ( CPF_Parm )

void UTgGfxHudNotify::OnGameUIEvent ( class UTgEventDataItem* pEvent )
{
	static UFunction* pFnOnGameUIEvent = NULL;

	if ( ! pFnOnGameUIEvent )
		pFnOnGameUIEvent = (UFunction*) UObject::GObjObjects()->GetIndex( 148517 );

	UTgGfxHudNotify_execOnGameUIEvent_Parms OnGameUIEvent_Parms;
	OnGameUIEvent_Parms.pEvent = pEvent;

	pFnOnGameUIEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnGameUIEvent, &OnGameUIEvent_Parms, NULL );

	pFnOnGameUIEvent->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxHudNotify.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxHudNotify::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148516 );

	UTgGfxHudNotify_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxHudNotify.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          pMP                            ( CPF_Parm )

void UTgGfxHudNotify::Initialize ( class UTgMoviePlayer* pMP )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148514 );

	UTgGfxHudNotify_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.pMP = pMP;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxHudNotify.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxHudNotify::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 148512 );

	UTgGfxHudNotify_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxHudUpgrade.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          pMP                            ( CPF_Parm )

void UTgGfxHudUpgrade::Initialize ( class UTgMoviePlayer* pMP )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148537 );

	UTgGfxHudUpgrade_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.pMP = pMP;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxHudUpgrade.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxHudUpgrade::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 148535 );

	UTgGfxHudUpgrade_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxIntro.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxIntro::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148539 );

	UTgGfxIntro_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxItemToast.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxItemToast::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148547 );

	UTgGfxItemToast_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxItemToast.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxItemToast::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148545 );

	UTgGfxItemToast_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxItemToast.ToastItem
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            ItemId                         ( CPF_Parm )

void UTgGfxItemToast::eventToastItem ( int ItemId )
{
	static UFunction* pFnToastItem = NULL;

	if ( ! pFnToastItem )
		pFnToastItem = (UFunction*) UObject::GObjObjects()->GetIndex( 148543 );

	UTgGfxItemToast_eventToastItem_Parms ToastItem_Parms;
	ToastItem_Parms.ItemId = ItemId;

	this->ProcessEvent ( pFnToastItem, &ToastItem_Parms, NULL );
};

// Function TgClient.TgGfxItemToast.ASC_ToastItem
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            ItemId                         ( CPF_Parm )

void UTgGfxItemToast::ASC_ToastItem ( int ItemId )
{
	static UFunction* pFnASC_ToastItem = NULL;

	if ( ! pFnASC_ToastItem )
		pFnASC_ToastItem = (UFunction*) UObject::GObjObjects()->GetIndex( 148541 );

	UTgGfxItemToast_execASC_ToastItem_Parms ASC_ToastItem_Parms;
	ASC_ToastItem_Parms.ItemId = ItemId;

	this->ProcessEvent ( pFnASC_ToastItem, &ASC_ToastItem_Parms, NULL );
};

// Function TgClient.TgGfxLeaderboard.RequestCharacterLeaderboard
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            classId                        ( CPF_Parm )
// int                            rankType                       ( CPF_Parm )

void UTgGfxLeaderboard::RequestCharacterLeaderboard ( int classId, int rankType )
{
	static UFunction* pFnRequestCharacterLeaderboard = NULL;

	if ( ! pFnRequestCharacterLeaderboard )
		pFnRequestCharacterLeaderboard = (UFunction*) UObject::GObjObjects()->GetIndex( 148561 );

	UTgGfxLeaderboard_execRequestCharacterLeaderboard_Parms RequestCharacterLeaderboard_Parms;
	RequestCharacterLeaderboard_Parms.classId = classId;
	RequestCharacterLeaderboard_Parms.rankType = rankType;

	pFnRequestCharacterLeaderboard->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRequestCharacterLeaderboard, &RequestCharacterLeaderboard_Parms, NULL );

	pFnRequestCharacterLeaderboard->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxLeaderboard.ShowLeaderboard
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// struct FString                 boardName                      ( CPF_Parm | CPF_NeedCtorLink )
// int                            aValue                         ( CPF_OptionalParm | CPF_Parm )
// int                            Option                         ( CPF_OptionalParm | CPF_Parm )

void UTgGfxLeaderboard::ShowLeaderboard ( struct FString boardName, int aValue, int Option )
{
	static UFunction* pFnShowLeaderboard = NULL;

	if ( ! pFnShowLeaderboard )
		pFnShowLeaderboard = (UFunction*) UObject::GObjObjects()->GetIndex( 148557 );

	UTgGfxLeaderboard_execShowLeaderboard_Parms ShowLeaderboard_Parms;
	memcpy ( &ShowLeaderboard_Parms.boardName, &boardName, 0x10 );
	ShowLeaderboard_Parms.aValue = aValue;
	ShowLeaderboard_Parms.Option = Option;

	pFnShowLeaderboard->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowLeaderboard, &ShowLeaderboard_Parms, NULL );

	pFnShowLeaderboard->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxLeaderboard.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxLeaderboard::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 148555 );

	UTgGfxLeaderboard_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxLeaderboard.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxLeaderboard::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148554 );

	UTgGfxLeaderboard_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxLeaderboard.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxLeaderboard::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148552 );

	UTgGfxLeaderboard_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxLoadouts.OnAcquisition
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgEventDataItem*        pEvent                         ( CPF_Parm )

void UTgGfxLoadouts::OnAcquisition ( class UTgEventDataItem* pEvent )
{
	static UFunction* pFnOnAcquisition = NULL;

	if ( ! pFnOnAcquisition )
		pFnOnAcquisition = (UFunction*) UObject::GObjObjects()->GetIndex( 148660 );

	UTgGfxLoadouts_execOnAcquisition_Parms OnAcquisition_Parms;
	OnAcquisition_Parms.pEvent = pEvent;

	pFnOnAcquisition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnAcquisition, &OnAcquisition_Parms, NULL );

	pFnOnAcquisition->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxLoadouts.RefreshBoosterTimer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgEventDataItem*        pEvent                         ( CPF_Parm )

void UTgGfxLoadouts::RefreshBoosterTimer ( class UTgEventDataItem* pEvent )
{
	static UFunction* pFnRefreshBoosterTimer = NULL;

	if ( ! pFnRefreshBoosterTimer )
		pFnRefreshBoosterTimer = (UFunction*) UObject::GObjObjects()->GetIndex( 148658 );

	UTgGfxLoadouts_execRefreshBoosterTimer_Parms RefreshBoosterTimer_Parms;
	RefreshBoosterTimer_Parms.pEvent = pEvent;

	pFnRefreshBoosterTimer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRefreshBoosterTimer, &RefreshBoosterTimer_Parms, NULL );

	pFnRefreshBoosterTimer->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxLoadouts.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxLoadouts::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 148656 );

	UTgGfxLoadouts_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxLoadouts.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxLoadouts::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148655 );

	UTgGfxLoadouts_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxLoadouts.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxLoadouts::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148653 );

	UTgGfxLoadouts_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxLobbyMain.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxLobbyMain::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148664 );

	UTgGfxLobbyMain_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxLobbyMain.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxLobbyMain::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148662 );

	UTgGfxLobbyMain_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxMatchDetails.MatchDataUpdated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxMatchDetails::eventMatchDataUpdated ( )
{
	static UFunction* pFnMatchDataUpdated = NULL;

	if ( ! pFnMatchDataUpdated )
		pFnMatchDataUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 148673 );

	UTgGfxMatchDetails_eventMatchDataUpdated_Parms MatchDataUpdated_Parms;

	this->ProcessEvent ( pFnMatchDataUpdated, &MatchDataUpdated_Parms, NULL );
};

// Function TgClient.TgGfxMatchDetails.ASC_MatchDataUpdated
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxMatchDetails::ASC_MatchDataUpdated ( )
{
	static UFunction* pFnASC_MatchDataUpdated = NULL;

	if ( ! pFnASC_MatchDataUpdated )
		pFnASC_MatchDataUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 148672 );

	UTgGfxMatchDetails_execASC_MatchDataUpdated_Parms ASC_MatchDataUpdated_Parms;

	this->ProcessEvent ( pFnASC_MatchDataUpdated, &ASC_MatchDataUpdated_Parms, NULL );
};

// Function TgClient.TgGfxMatchDetails.USC_SearchByMatchId
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 matchId                        ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxMatchDetails::USC_SearchByMatchId ( struct FString matchId )
{
	static UFunction* pFnUSC_SearchByMatchId = NULL;

	if ( ! pFnUSC_SearchByMatchId )
		pFnUSC_SearchByMatchId = (UFunction*) UObject::GObjObjects()->GetIndex( 148670 );

	UTgGfxMatchDetails_execUSC_SearchByMatchId_Parms USC_SearchByMatchId_Parms;
	memcpy ( &USC_SearchByMatchId_Parms.matchId, &matchId, 0x10 );

	pFnUSC_SearchByMatchId->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_SearchByMatchId, &USC_SearchByMatchId_Parms, NULL );

	pFnUSC_SearchByMatchId->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxMatchDetails.USC_SearchByMatchId_Delegate
// [0x00120000] 
// Parameters infos:
// struct FString                 matchId                        ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxMatchDetails::USC_SearchByMatchId_Delegate ( struct FString matchId )
{
	static UFunction* pFnUSC_SearchByMatchId_Delegate = NULL;

	if ( ! pFnUSC_SearchByMatchId_Delegate )
		pFnUSC_SearchByMatchId_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 148667 );

	UTgGfxMatchDetails_execUSC_SearchByMatchId_Delegate_Parms USC_SearchByMatchId_Delegate_Parms;
	memcpy ( &USC_SearchByMatchId_Delegate_Parms.matchId, &matchId, 0x10 );

	this->ProcessEvent ( pFnUSC_SearchByMatchId_Delegate, &USC_SearchByMatchId_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxMatchDetails.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxMatchDetails::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148665 );

	UTgGfxMatchDetails_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxPartyManagement.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxPartyManagement::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148706 );

	UTgGfxPartyManagement_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxPartyManagement.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxPartyManagement::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 148704 );

	UTgGfxPartyManagement_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxPartyManagement.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          pMP                            ( CPF_Parm )

void UTgGfxPartyManagement::Initialize ( class UTgMoviePlayer* pMP )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148702 );

	UTgGfxPartyManagement_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.pMP = pMP;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxPlayerProfile.OnFriendSelector
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UTgEventDataItem*        pBaseEvent                     ( CPF_Parm )

void UTgGfxPlayerProfile::OnFriendSelector ( class UTgEventDataItem* pBaseEvent )
{
	static UFunction* pFnOnFriendSelector = NULL;

	if ( ! pFnOnFriendSelector )
		pFnOnFriendSelector = (UFunction*) UObject::GObjObjects()->GetIndex( 148740 );

	UTgGfxPlayerProfile_execOnFriendSelector_Parms OnFriendSelector_Parms;
	OnFriendSelector_Parms.pBaseEvent = pBaseEvent;

	pFnOnFriendSelector->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnFriendSelector, &OnFriendSelector_Parms, NULL );

	pFnOnFriendSelector->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxPlayerProfile.PlayerNameUpdated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxPlayerProfile::eventPlayerNameUpdated ( )
{
	static UFunction* pFnPlayerNameUpdated = NULL;

	if ( ! pFnPlayerNameUpdated )
		pFnPlayerNameUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 148739 );

	UTgGfxPlayerProfile_eventPlayerNameUpdated_Parms PlayerNameUpdated_Parms;

	this->ProcessEvent ( pFnPlayerNameUpdated, &PlayerNameUpdated_Parms, NULL );
};

// Function TgClient.TgGfxPlayerProfile.ASC_PlayerNameUpdated
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxPlayerProfile::ASC_PlayerNameUpdated ( )
{
	static UFunction* pFnASC_PlayerNameUpdated = NULL;

	if ( ! pFnASC_PlayerNameUpdated )
		pFnASC_PlayerNameUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 148738 );

	UTgGfxPlayerProfile_execASC_PlayerNameUpdated_Parms ASC_PlayerNameUpdated_Parms;

	this->ProcessEvent ( pFnASC_PlayerNameUpdated, &ASC_PlayerNameUpdated_Parms, NULL );
};

// Function TgClient.TgGfxPlayerProfile.DropDownUpdated
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            Index                          ( CPF_Parm )

void UTgGfxPlayerProfile::eventDropDownUpdated ( int Index )
{
	static UFunction* pFnDropDownUpdated = NULL;

	if ( ! pFnDropDownUpdated )
		pFnDropDownUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 148736 );

	UTgGfxPlayerProfile_eventDropDownUpdated_Parms DropDownUpdated_Parms;
	DropDownUpdated_Parms.Index = Index;

	this->ProcessEvent ( pFnDropDownUpdated, &DropDownUpdated_Parms, NULL );
};

// Function TgClient.TgGfxPlayerProfile.ASC_DropDownUpdated
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            Index                          ( CPF_Parm )

void UTgGfxPlayerProfile::ASC_DropDownUpdated ( int Index )
{
	static UFunction* pFnASC_DropDownUpdated = NULL;

	if ( ! pFnASC_DropDownUpdated )
		pFnASC_DropDownUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 148734 );

	UTgGfxPlayerProfile_execASC_DropDownUpdated_Parms ASC_DropDownUpdated_Parms;
	ASC_DropDownUpdated_Parms.Index = Index;

	this->ProcessEvent ( pFnASC_DropDownUpdated, &ASC_DropDownUpdated_Parms, NULL );
};

// Function TgClient.TgGfxPlayerProfile.USC_TabSelected
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )

void UTgGfxPlayerProfile::USC_TabSelected ( int Index )
{
	static UFunction* pFnUSC_TabSelected = NULL;

	if ( ! pFnUSC_TabSelected )
		pFnUSC_TabSelected = (UFunction*) UObject::GObjObjects()->GetIndex( 148732 );

	UTgGfxPlayerProfile_execUSC_TabSelected_Parms USC_TabSelected_Parms;
	USC_TabSelected_Parms.Index = Index;

	pFnUSC_TabSelected->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_TabSelected, &USC_TabSelected_Parms, NULL );

	pFnUSC_TabSelected->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxPlayerProfile.USC_SearchByName
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 PlayerName                     ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxPlayerProfile::USC_SearchByName ( struct FString PlayerName )
{
	static UFunction* pFnUSC_SearchByName = NULL;

	if ( ! pFnUSC_SearchByName )
		pFnUSC_SearchByName = (UFunction*) UObject::GObjObjects()->GetIndex( 148730 );

	UTgGfxPlayerProfile_execUSC_SearchByName_Parms USC_SearchByName_Parms;
	memcpy ( &USC_SearchByName_Parms.PlayerName, &PlayerName, 0x10 );

	pFnUSC_SearchByName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_SearchByName, &USC_SearchByName_Parms, NULL );

	pFnUSC_SearchByName->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxPlayerProfile.USC_SetFilter
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            filterIndex                    ( CPF_Parm )
// int                            val                            ( CPF_Parm )

void UTgGfxPlayerProfile::USC_SetFilter ( int filterIndex, int val )
{
	static UFunction* pFnUSC_SetFilter = NULL;

	if ( ! pFnUSC_SetFilter )
		pFnUSC_SetFilter = (UFunction*) UObject::GObjObjects()->GetIndex( 148727 );

	UTgGfxPlayerProfile_execUSC_SetFilter_Parms USC_SetFilter_Parms;
	USC_SetFilter_Parms.filterIndex = filterIndex;
	USC_SetFilter_Parms.val = val;

	pFnUSC_SetFilter->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_SetFilter, &USC_SetFilter_Parms, NULL );

	pFnUSC_SetFilter->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxPlayerProfile.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxPlayerProfile::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148726 );

	UTgGfxPlayerProfile_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxPlayerProfile.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxPlayerProfile::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148724 );

	UTgGfxPlayerProfile_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfileAccolade.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxProfileAccolade::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148745 );

	UTgGfxProfileAccolade_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfileAccolade.AccoladeDataUpdated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxProfileAccolade::eventAccoladeDataUpdated ( )
{
	static UFunction* pFnAccoladeDataUpdated = NULL;

	if ( ! pFnAccoladeDataUpdated )
		pFnAccoladeDataUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 148744 );

	UTgGfxProfileAccolade_eventAccoladeDataUpdated_Parms AccoladeDataUpdated_Parms;

	this->ProcessEvent ( pFnAccoladeDataUpdated, &AccoladeDataUpdated_Parms, NULL );
};

// Function TgClient.TgGfxProfileAccolade.ASC_AccoladeDataUpdated
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxProfileAccolade::ASC_AccoladeDataUpdated ( )
{
	static UFunction* pFnASC_AccoladeDataUpdated = NULL;

	if ( ! pFnASC_AccoladeDataUpdated )
		pFnASC_AccoladeDataUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 148743 );

	UTgGfxProfileAccolade_execASC_AccoladeDataUpdated_Parms ASC_AccoladeDataUpdated_Parms;

	this->ProcessEvent ( pFnASC_AccoladeDataUpdated, &ASC_AccoladeDataUpdated_Parms, NULL );
};

// Function TgClient.TgGfxProfileAchievements.CheckIfHasMasterList
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxProfileAchievements::eventCheckIfHasMasterList ( )
{
	static UFunction* pFnCheckIfHasMasterList = NULL;

	if ( ! pFnCheckIfHasMasterList )
		pFnCheckIfHasMasterList = (UFunction*) UObject::GObjObjects()->GetIndex( 148775 );

	UTgGfxProfileAchievements_eventCheckIfHasMasterList_Parms CheckIfHasMasterList_Parms;

	this->ProcessEvent ( pFnCheckIfHasMasterList, &CheckIfHasMasterList_Parms, NULL );
};

// Function TgClient.TgGfxProfileAchievements.ASC_CheckIfHasMasterList
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxProfileAchievements::ASC_CheckIfHasMasterList ( )
{
	static UFunction* pFnASC_CheckIfHasMasterList = NULL;

	if ( ! pFnASC_CheckIfHasMasterList )
		pFnASC_CheckIfHasMasterList = (UFunction*) UObject::GObjObjects()->GetIndex( 148774 );

	UTgGfxProfileAchievements_execASC_CheckIfHasMasterList_Parms ASC_CheckIfHasMasterList_Parms;

	this->ProcessEvent ( pFnASC_CheckIfHasMasterList, &ASC_CheckIfHasMasterList_Parms, NULL );
};

// Function TgClient.TgGfxProfileAchievements.UpdateAchievements
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxProfileAchievements::eventUpdateAchievements ( )
{
	static UFunction* pFnUpdateAchievements = NULL;

	if ( ! pFnUpdateAchievements )
		pFnUpdateAchievements = (UFunction*) UObject::GObjObjects()->GetIndex( 148773 );

	UTgGfxProfileAchievements_eventUpdateAchievements_Parms UpdateAchievements_Parms;

	this->ProcessEvent ( pFnUpdateAchievements, &UpdateAchievements_Parms, NULL );
};

// Function TgClient.TgGfxProfileAchievements.ASC_UpdateAchievements
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxProfileAchievements::ASC_UpdateAchievements ( )
{
	static UFunction* pFnASC_UpdateAchievements = NULL;

	if ( ! pFnASC_UpdateAchievements )
		pFnASC_UpdateAchievements = (UFunction*) UObject::GObjObjects()->GetIndex( 148772 );

	UTgGfxProfileAchievements_execASC_UpdateAchievements_Parms ASC_UpdateAchievements_Parms;

	this->ProcessEvent ( pFnASC_UpdateAchievements, &ASC_UpdateAchievements_Parms, NULL );
};

// Function TgClient.TgGfxProfileAchievements.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxProfileAchievements::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148770 );

	UTgGfxProfileAchievements_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfileHistory.QueueDataUpdated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxProfileHistory::eventQueueDataUpdated ( )
{
	static UFunction* pFnQueueDataUpdated = NULL;

	if ( ! pFnQueueDataUpdated )
		pFnQueueDataUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 148799 );

	UTgGfxProfileHistory_eventQueueDataUpdated_Parms QueueDataUpdated_Parms;

	this->ProcessEvent ( pFnQueueDataUpdated, &QueueDataUpdated_Parms, NULL );
};

// Function TgClient.TgGfxProfileHistory.ASC_QueueDataUpdated
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxProfileHistory::ASC_QueueDataUpdated ( )
{
	static UFunction* pFnASC_QueueDataUpdated = NULL;

	if ( ! pFnASC_QueueDataUpdated )
		pFnASC_QueueDataUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 148798 );

	UTgGfxProfileHistory_execASC_QueueDataUpdated_Parms ASC_QueueDataUpdated_Parms;

	this->ProcessEvent ( pFnASC_QueueDataUpdated, &ASC_QueueDataUpdated_Parms, NULL );
};

// Function TgClient.TgGfxProfileHistory.MatchesDataUpdated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxProfileHistory::eventMatchesDataUpdated ( )
{
	static UFunction* pFnMatchesDataUpdated = NULL;

	if ( ! pFnMatchesDataUpdated )
		pFnMatchesDataUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 148797 );

	UTgGfxProfileHistory_eventMatchesDataUpdated_Parms MatchesDataUpdated_Parms;

	this->ProcessEvent ( pFnMatchesDataUpdated, &MatchesDataUpdated_Parms, NULL );
};

// Function TgClient.TgGfxProfileHistory.ASC_MatchesDataUpdated
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxProfileHistory::ASC_MatchesDataUpdated ( )
{
	static UFunction* pFnASC_MatchesDataUpdated = NULL;

	if ( ! pFnASC_MatchesDataUpdated )
		pFnASC_MatchesDataUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 148796 );

	UTgGfxProfileHistory_execASC_MatchesDataUpdated_Parms ASC_MatchesDataUpdated_Parms;

	this->ProcessEvent ( pFnASC_MatchesDataUpdated, &ASC_MatchesDataUpdated_Parms, NULL );
};

// Function TgClient.TgGfxProfileHistory.USC_ShowDetails
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 matchId                        ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxProfileHistory::USC_ShowDetails ( struct FString matchId )
{
	static UFunction* pFnUSC_ShowDetails = NULL;

	if ( ! pFnUSC_ShowDetails )
		pFnUSC_ShowDetails = (UFunction*) UObject::GObjObjects()->GetIndex( 148794 );

	UTgGfxProfileHistory_execUSC_ShowDetails_Parms USC_ShowDetails_Parms;
	memcpy ( &USC_ShowDetails_Parms.matchId, &matchId, 0x10 );

	pFnUSC_ShowDetails->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_ShowDetails, &USC_ShowDetails_Parms, NULL );

	pFnUSC_ShowDetails->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfileHistory.USC_SetQueueFilter
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            queueId                        ( CPF_Parm )

void UTgGfxProfileHistory::USC_SetQueueFilter ( int queueId )
{
	static UFunction* pFnUSC_SetQueueFilter = NULL;

	if ( ! pFnUSC_SetQueueFilter )
		pFnUSC_SetQueueFilter = (UFunction*) UObject::GObjObjects()->GetIndex( 148792 );

	UTgGfxProfileHistory_execUSC_SetQueueFilter_Parms USC_SetQueueFilter_Parms;
	USC_SetQueueFilter_Parms.queueId = queueId;

	pFnUSC_SetQueueFilter->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_SetQueueFilter, &USC_SetQueueFilter_Parms, NULL );

	pFnUSC_SetQueueFilter->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfileHistory.USC_SetGodsFilter
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sFilterGod                     ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxProfileHistory::USC_SetGodsFilter ( struct FString sFilterGod )
{
	static UFunction* pFnUSC_SetGodsFilter = NULL;

	if ( ! pFnUSC_SetGodsFilter )
		pFnUSC_SetGodsFilter = (UFunction*) UObject::GObjObjects()->GetIndex( 148790 );

	UTgGfxProfileHistory_execUSC_SetGodsFilter_Parms USC_SetGodsFilter_Parms;
	memcpy ( &USC_SetGodsFilter_Parms.sFilterGod, &sFilterGod, 0x10 );

	pFnUSC_SetGodsFilter->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_SetGodsFilter, &USC_SetGodsFilter_Parms, NULL );

	pFnUSC_SetGodsFilter->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfileHistory.USC_ShowDetails_Delegate
// [0x00120000] 
// Parameters infos:
// struct FString                 matchId                        ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxProfileHistory::USC_ShowDetails_Delegate ( struct FString matchId )
{
	static UFunction* pFnUSC_ShowDetails_Delegate = NULL;

	if ( ! pFnUSC_ShowDetails_Delegate )
		pFnUSC_ShowDetails_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 148777 );

	UTgGfxProfileHistory_execUSC_ShowDetails_Delegate_Parms USC_ShowDetails_Delegate_Parms;
	memcpy ( &USC_ShowDetails_Delegate_Parms.matchId, &matchId, 0x10 );

	this->ProcessEvent ( pFnUSC_ShowDetails_Delegate, &USC_ShowDetails_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxProfileHistory.USC_SetQueueFilter_Delegate
// [0x00120000] 
// Parameters infos:
// int                            queueId                        ( CPF_Parm )

void UTgGfxProfileHistory::USC_SetQueueFilter_Delegate ( int queueId )
{
	static UFunction* pFnUSC_SetQueueFilter_Delegate = NULL;

	if ( ! pFnUSC_SetQueueFilter_Delegate )
		pFnUSC_SetQueueFilter_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 148779 );

	UTgGfxProfileHistory_execUSC_SetQueueFilter_Delegate_Parms USC_SetQueueFilter_Delegate_Parms;
	USC_SetQueueFilter_Delegate_Parms.queueId = queueId;

	this->ProcessEvent ( pFnUSC_SetQueueFilter_Delegate, &USC_SetQueueFilter_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxProfileHistory.USC_SetGodsFilter_Delegate
// [0x00120000] 
// Parameters infos:
// struct FString                 sFilterGod                     ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxProfileHistory::USC_SetGodsFilter_Delegate ( struct FString sFilterGod )
{
	static UFunction* pFnUSC_SetGodsFilter_Delegate = NULL;

	if ( ! pFnUSC_SetGodsFilter_Delegate )
		pFnUSC_SetGodsFilter_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 148781 );

	UTgGfxProfileHistory_execUSC_SetGodsFilter_Delegate_Parms USC_SetGodsFilter_Delegate_Parms;
	memcpy ( &USC_SetGodsFilter_Delegate_Parms.sFilterGod, &sFilterGod, 0x10 );

	this->ProcessEvent ( pFnUSC_SetGodsFilter_Delegate, &USC_SetGodsFilter_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxProfileHistory.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxProfileHistory::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148785 );

	UTgGfxProfileHistory_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfileLeagueStats.UpdateLeagueStats
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxProfileLeagueStats::eventUpdateLeagueStats ( )
{
	static UFunction* pFnUpdateLeagueStats = NULL;

	if ( ! pFnUpdateLeagueStats )
		pFnUpdateLeagueStats = (UFunction*) UObject::GObjObjects()->GetIndex( 148804 );

	UTgGfxProfileLeagueStats_eventUpdateLeagueStats_Parms UpdateLeagueStats_Parms;

	this->ProcessEvent ( pFnUpdateLeagueStats, &UpdateLeagueStats_Parms, NULL );
};

// Function TgClient.TgGfxProfileLeagueStats.ASC_UpdateLeagueStats
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxProfileLeagueStats::ASC_UpdateLeagueStats ( )
{
	static UFunction* pFnASC_UpdateLeagueStats = NULL;

	if ( ! pFnASC_UpdateLeagueStats )
		pFnASC_UpdateLeagueStats = (UFunction*) UObject::GObjObjects()->GetIndex( 148803 );

	UTgGfxProfileLeagueStats_execASC_UpdateLeagueStats_Parms ASC_UpdateLeagueStats_Parms;

	this->ProcessEvent ( pFnASC_UpdateLeagueStats, &ASC_UpdateLeagueStats_Parms, NULL );
};

// Function TgClient.TgGfxProfileLeagueStats.UpdateQueueLeagues
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UTgGfxProfileLeagueStats::UpdateQueueLeagues ( )
{
	static UFunction* pFnUpdateQueueLeagues = NULL;

	if ( ! pFnUpdateQueueLeagues )
		pFnUpdateQueueLeagues = (UFunction*) UObject::GObjObjects()->GetIndex( 148802 );

	UTgGfxProfileLeagueStats_execUpdateQueueLeagues_Parms UpdateQueueLeagues_Parms;

	pFnUpdateQueueLeagues->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateQueueLeagues, &UpdateQueueLeagues_Parms, NULL );

	pFnUpdateQueueLeagues->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfileLeagueStats.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxProfileLeagueStats::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148800 );

	UTgGfxProfileLeagueStats_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfileMastery.UpdateAll
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxProfileMastery::eventUpdateAll ( )
{
	static UFunction* pFnUpdateAll = NULL;

	if ( ! pFnUpdateAll )
		pFnUpdateAll = (UFunction*) UObject::GObjObjects()->GetIndex( 148811 );

	UTgGfxProfileMastery_eventUpdateAll_Parms UpdateAll_Parms;

	this->ProcessEvent ( pFnUpdateAll, &UpdateAll_Parms, NULL );
};

// Function TgClient.TgGfxProfileMastery.asc_updateAll
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxProfileMastery::asc_updateAll ( )
{
	static UFunction* pFnasc_updateAll = NULL;

	if ( ! pFnasc_updateAll )
		pFnasc_updateAll = (UFunction*) UObject::GObjObjects()->GetIndex( 148810 );

	UTgGfxProfileMastery_execasc_updateAll_Parms asc_updateAll_Parms;

	this->ProcessEvent ( pFnasc_updateAll, &asc_updateAll_Parms, NULL );
};

// Function TgClient.TgGfxProfileMastery.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxProfileMastery::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148808 );

	UTgGfxProfileMastery_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfileOverview.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxProfileOverview::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148833 );

	UTgGfxProfileOverview_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfileOverview.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxProfileOverview::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148831 );

	UTgGfxProfileOverview_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfileOverview.UpdateSelectedAchievements
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxProfileOverview::eventUpdateSelectedAchievements ( )
{
	static UFunction* pFnUpdateSelectedAchievements = NULL;

	if ( ! pFnUpdateSelectedAchievements )
		pFnUpdateSelectedAchievements = (UFunction*) UObject::GObjObjects()->GetIndex( 148830 );

	UTgGfxProfileOverview_eventUpdateSelectedAchievements_Parms UpdateSelectedAchievements_Parms;

	this->ProcessEvent ( pFnUpdateSelectedAchievements, &UpdateSelectedAchievements_Parms, NULL );
};

// Function TgClient.TgGfxProfileOverview.ASC_UpdateSelectedAchievements
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxProfileOverview::ASC_UpdateSelectedAchievements ( )
{
	static UFunction* pFnASC_UpdateSelectedAchievements = NULL;

	if ( ! pFnASC_UpdateSelectedAchievements )
		pFnASC_UpdateSelectedAchievements = (UFunction*) UObject::GObjObjects()->GetIndex( 148829 );

	UTgGfxProfileOverview_execASC_UpdateSelectedAchievements_Parms ASC_UpdateSelectedAchievements_Parms;

	this->ProcessEvent ( pFnASC_UpdateSelectedAchievements, &ASC_UpdateSelectedAchievements_Parms, NULL );
};

// Function TgClient.TgGfxProfileOverview.LeagueDataUpdated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxProfileOverview::eventLeagueDataUpdated ( )
{
	static UFunction* pFnLeagueDataUpdated = NULL;

	if ( ! pFnLeagueDataUpdated )
		pFnLeagueDataUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 148828 );

	UTgGfxProfileOverview_eventLeagueDataUpdated_Parms LeagueDataUpdated_Parms;

	this->ProcessEvent ( pFnLeagueDataUpdated, &LeagueDataUpdated_Parms, NULL );
};

// Function TgClient.TgGfxProfileOverview.ASC_LeagueDataUpdated
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxProfileOverview::ASC_LeagueDataUpdated ( )
{
	static UFunction* pFnASC_LeagueDataUpdated = NULL;

	if ( ! pFnASC_LeagueDataUpdated )
		pFnASC_LeagueDataUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 148827 );

	UTgGfxProfileOverview_execASC_LeagueDataUpdated_Parms ASC_LeagueDataUpdated_Parms;

	this->ProcessEvent ( pFnASC_LeagueDataUpdated, &ASC_LeagueDataUpdated_Parms, NULL );
};

// Function TgClient.TgGfxProfileOverview.ProfileDataUpdated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxProfileOverview::eventProfileDataUpdated ( )
{
	static UFunction* pFnProfileDataUpdated = NULL;

	if ( ! pFnProfileDataUpdated )
		pFnProfileDataUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 148826 );

	UTgGfxProfileOverview_eventProfileDataUpdated_Parms ProfileDataUpdated_Parms;

	this->ProcessEvent ( pFnProfileDataUpdated, &ProfileDataUpdated_Parms, NULL );
};

// Function TgClient.TgGfxProfileOverview.ASC_ProfileDataUpdated
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxProfileOverview::ASC_ProfileDataUpdated ( )
{
	static UFunction* pFnASC_ProfileDataUpdated = NULL;

	if ( ! pFnASC_ProfileDataUpdated )
		pFnASC_ProfileDataUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 148825 );

	UTgGfxProfileOverview_execASC_ProfileDataUpdated_Parms ASC_ProfileDataUpdated_Parms;

	this->ProcessEvent ( pFnASC_ProfileDataUpdated, &ASC_ProfileDataUpdated_Parms, NULL );
};

// Function TgClient.TgGfxProfileOverview.USC_NavigateToClan
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxProfileOverview::USC_NavigateToClan ( )
{
	static UFunction* pFnUSC_NavigateToClan = NULL;

	if ( ! pFnUSC_NavigateToClan )
		pFnUSC_NavigateToClan = (UFunction*) UObject::GObjObjects()->GetIndex( 148824 );

	UTgGfxProfileOverview_execUSC_NavigateToClan_Parms USC_NavigateToClan_Parms;

	pFnUSC_NavigateToClan->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_NavigateToClan, &USC_NavigateToClan_Parms, NULL );

	pFnUSC_NavigateToClan->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfileOverview.USC_NavigateToClan_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxProfileOverview::USC_NavigateToClan_Delegate ( )
{
	static UFunction* pFnUSC_NavigateToClan_Delegate = NULL;

	if ( ! pFnUSC_NavigateToClan_Delegate )
		pFnUSC_NavigateToClan_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 148813 );

	UTgGfxProfileOverview_execUSC_NavigateToClan_Delegate_Parms USC_NavigateToClan_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_NavigateToClan_Delegate, &USC_NavigateToClan_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxProfilePage.OnFriendSelector
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UTgEventDataItem*        pBaseEvent                     ( CPF_Parm )

void UTgGfxProfilePage::OnFriendSelector ( class UTgEventDataItem* pBaseEvent )
{
	static UFunction* pFnOnFriendSelector = NULL;

	if ( ! pFnOnFriendSelector )
		pFnOnFriendSelector = (UFunction*) UObject::GObjObjects()->GetIndex( 148864 );

	UTgGfxProfilePage_execOnFriendSelector_Parms OnFriendSelector_Parms;
	OnFriendSelector_Parms.pBaseEvent = pBaseEvent;

	pFnOnFriendSelector->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnFriendSelector, &OnFriendSelector_Parms, NULL );

	pFnOnFriendSelector->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfilePage.UpdateAvailable
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  vis                            ( CPF_Parm )

void UTgGfxProfilePage::eventUpdateAvailable ( unsigned long vis )
{
	static UFunction* pFnUpdateAvailable = NULL;

	if ( ! pFnUpdateAvailable )
		pFnUpdateAvailable = (UFunction*) UObject::GObjObjects()->GetIndex( 148862 );

	UTgGfxProfilePage_eventUpdateAvailable_Parms UpdateAvailable_Parms;
	UpdateAvailable_Parms.vis = vis;

	this->ProcessEvent ( pFnUpdateAvailable, &UpdateAvailable_Parms, NULL );
};

// Function TgClient.TgGfxProfilePage.ASC_UpdateAvailable
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// unsigned long                  vis                            ( CPF_Parm )

void UTgGfxProfilePage::ASC_UpdateAvailable ( unsigned long vis )
{
	static UFunction* pFnASC_UpdateAvailable = NULL;

	if ( ! pFnASC_UpdateAvailable )
		pFnASC_UpdateAvailable = (UFunction*) UObject::GObjObjects()->GetIndex( 148860 );

	UTgGfxProfilePage_execASC_UpdateAvailable_Parms ASC_UpdateAvailable_Parms;
	ASC_UpdateAvailable_Parms.vis = vis;

	this->ProcessEvent ( pFnASC_UpdateAvailable, &ASC_UpdateAvailable_Parms, NULL );
};

// Function TgClient.TgGfxProfilePage.UpdateCallout
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxProfilePage::eventUpdateCallout ( )
{
	static UFunction* pFnUpdateCallout = NULL;

	if ( ! pFnUpdateCallout )
		pFnUpdateCallout = (UFunction*) UObject::GObjObjects()->GetIndex( 148859 );

	UTgGfxProfilePage_eventUpdateCallout_Parms UpdateCallout_Parms;

	this->ProcessEvent ( pFnUpdateCallout, &UpdateCallout_Parms, NULL );
};

// Function TgClient.TgGfxProfilePage.ASC_UpdateCallout
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxProfilePage::ASC_UpdateCallout ( )
{
	static UFunction* pFnASC_UpdateCallout = NULL;

	if ( ! pFnASC_UpdateCallout )
		pFnASC_UpdateCallout = (UFunction*) UObject::GObjObjects()->GetIndex( 148858 );

	UTgGfxProfilePage_execASC_UpdateCallout_Parms ASC_UpdateCallout_Parms;

	this->ProcessEvent ( pFnASC_UpdateCallout, &ASC_UpdateCallout_Parms, NULL );
};

// Function TgClient.TgGfxProfilePage.UpdatePlayer
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxProfilePage::eventUpdatePlayer ( )
{
	static UFunction* pFnUpdatePlayer = NULL;

	if ( ! pFnUpdatePlayer )
		pFnUpdatePlayer = (UFunction*) UObject::GObjObjects()->GetIndex( 148857 );

	UTgGfxProfilePage_eventUpdatePlayer_Parms UpdatePlayer_Parms;

	this->ProcessEvent ( pFnUpdatePlayer, &UpdatePlayer_Parms, NULL );
};

// Function TgClient.TgGfxProfilePage.ASC_UpdatePlayer
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxProfilePage::ASC_UpdatePlayer ( )
{
	static UFunction* pFnASC_UpdatePlayer = NULL;

	if ( ! pFnASC_UpdatePlayer )
		pFnASC_UpdatePlayer = (UFunction*) UObject::GObjObjects()->GetIndex( 148856 );

	UTgGfxProfilePage_execASC_UpdatePlayer_Parms ASC_UpdatePlayer_Parms;

	this->ProcessEvent ( pFnASC_UpdatePlayer, &ASC_UpdatePlayer_Parms, NULL );
};

// Function TgClient.TgGfxProfilePage.UpdateTab
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxProfilePage::eventUpdateTab ( )
{
	static UFunction* pFnUpdateTab = NULL;

	if ( ! pFnUpdateTab )
		pFnUpdateTab = (UFunction*) UObject::GObjObjects()->GetIndex( 148855 );

	UTgGfxProfilePage_eventUpdateTab_Parms UpdateTab_Parms;

	this->ProcessEvent ( pFnUpdateTab, &UpdateTab_Parms, NULL );
};

// Function TgClient.TgGfxProfilePage.ASC_UpdateTab
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxProfilePage::ASC_UpdateTab ( )
{
	static UFunction* pFnASC_UpdateTab = NULL;

	if ( ! pFnASC_UpdateTab )
		pFnASC_UpdateTab = (UFunction*) UObject::GObjObjects()->GetIndex( 148854 );

	UTgGfxProfilePage_execASC_UpdateTab_Parms ASC_UpdateTab_Parms;

	this->ProcessEvent ( pFnASC_UpdateTab, &ASC_UpdateTab_Parms, NULL );
};

// Function TgClient.TgGfxProfilePage.USC_GiftPlayer
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  isYourself                     ( CPF_Parm )

void UTgGfxProfilePage::USC_GiftPlayer ( unsigned long isYourself )
{
	static UFunction* pFnUSC_GiftPlayer = NULL;

	if ( ! pFnUSC_GiftPlayer )
		pFnUSC_GiftPlayer = (UFunction*) UObject::GObjObjects()->GetIndex( 148852 );

	UTgGfxProfilePage_execUSC_GiftPlayer_Parms USC_GiftPlayer_Parms;
	USC_GiftPlayer_Parms.isYourself = isYourself;

	pFnUSC_GiftPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_GiftPlayer, &USC_GiftPlayer_Parms, NULL );

	pFnUSC_GiftPlayer->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfilePage.USC_TwitchLink
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UTgGfxProfilePage::USC_TwitchLink ( )
{
	static UFunction* pFnUSC_TwitchLink = NULL;

	if ( ! pFnUSC_TwitchLink )
		pFnUSC_TwitchLink = (UFunction*) UObject::GObjObjects()->GetIndex( 148851 );

	UTgGfxProfilePage_execUSC_TwitchLink_Parms USC_TwitchLink_Parms;

	pFnUSC_TwitchLink->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_TwitchLink, &USC_TwitchLink_Parms, NULL );

	pFnUSC_TwitchLink->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfilePage.USC_UpdatePrivacy
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UTgGfxProfilePage::USC_UpdatePrivacy ( )
{
	static UFunction* pFnUSC_UpdatePrivacy = NULL;

	if ( ! pFnUSC_UpdatePrivacy )
		pFnUSC_UpdatePrivacy = (UFunction*) UObject::GObjObjects()->GetIndex( 148850 );

	UTgGfxProfilePage_execUSC_UpdatePrivacy_Parms USC_UpdatePrivacy_Parms;

	pFnUSC_UpdatePrivacy->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_UpdatePrivacy, &USC_UpdatePrivacy_Parms, NULL );

	pFnUSC_UpdatePrivacy->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfilePage.USC_AddFriend
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UTgGfxProfilePage::USC_AddFriend ( )
{
	static UFunction* pFnUSC_AddFriend = NULL;

	if ( ! pFnUSC_AddFriend )
		pFnUSC_AddFriend = (UFunction*) UObject::GObjObjects()->GetIndex( 148849 );

	UTgGfxProfilePage_execUSC_AddFriend_Parms USC_AddFriend_Parms;

	pFnUSC_AddFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_AddFriend, &USC_AddFriend_Parms, NULL );

	pFnUSC_AddFriend->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfilePage.USC_TabSelected
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            tabId                          ( CPF_Parm )

void UTgGfxProfilePage::USC_TabSelected ( int tabId )
{
	static UFunction* pFnUSC_TabSelected = NULL;

	if ( ! pFnUSC_TabSelected )
		pFnUSC_TabSelected = (UFunction*) UObject::GObjObjects()->GetIndex( 148847 );

	UTgGfxProfilePage_execUSC_TabSelected_Parms USC_TabSelected_Parms;
	USC_TabSelected_Parms.tabId = tabId;

	pFnUSC_TabSelected->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_TabSelected, &USC_TabSelected_Parms, NULL );

	pFnUSC_TabSelected->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfilePage.USC_SearchPlayerByName
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 PlayerName                     ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxProfilePage::USC_SearchPlayerByName ( struct FString PlayerName )
{
	static UFunction* pFnUSC_SearchPlayerByName = NULL;

	if ( ! pFnUSC_SearchPlayerByName )
		pFnUSC_SearchPlayerByName = (UFunction*) UObject::GObjObjects()->GetIndex( 148845 );

	UTgGfxProfilePage_execUSC_SearchPlayerByName_Parms USC_SearchPlayerByName_Parms;
	memcpy ( &USC_SearchPlayerByName_Parms.PlayerName, &PlayerName, 0x10 );

	pFnUSC_SearchPlayerByName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_SearchPlayerByName, &USC_SearchPlayerByName_Parms, NULL );

	pFnUSC_SearchPlayerByName->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfilePage.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxProfilePage::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148843 );

	UTgGfxProfilePage_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfileWorshiper.FilterDataUpdated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxProfileWorshiper::eventFilterDataUpdated ( )
{
	static UFunction* pFnFilterDataUpdated = NULL;

	if ( ! pFnFilterDataUpdated )
		pFnFilterDataUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 148885 );

	UTgGfxProfileWorshiper_eventFilterDataUpdated_Parms FilterDataUpdated_Parms;

	this->ProcessEvent ( pFnFilterDataUpdated, &FilterDataUpdated_Parms, NULL );
};

// Function TgClient.TgGfxProfileWorshiper.ASC_FilterDataUpdated
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxProfileWorshiper::ASC_FilterDataUpdated ( )
{
	static UFunction* pFnASC_FilterDataUpdated = NULL;

	if ( ! pFnASC_FilterDataUpdated )
		pFnASC_FilterDataUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 148884 );

	UTgGfxProfileWorshiper_execASC_FilterDataUpdated_Parms ASC_FilterDataUpdated_Parms;

	this->ProcessEvent ( pFnASC_FilterDataUpdated, &ASC_FilterDataUpdated_Parms, NULL );
};

// Function TgClient.TgGfxProfileWorshiper.GodMasteryUpdated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxProfileWorshiper::eventGodMasteryUpdated ( )
{
	static UFunction* pFnGodMasteryUpdated = NULL;

	if ( ! pFnGodMasteryUpdated )
		pFnGodMasteryUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 148883 );

	UTgGfxProfileWorshiper_eventGodMasteryUpdated_Parms GodMasteryUpdated_Parms;

	this->ProcessEvent ( pFnGodMasteryUpdated, &GodMasteryUpdated_Parms, NULL );
};

// Function TgClient.TgGfxProfileWorshiper.ASC_GodMasteryUpdated
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxProfileWorshiper::ASC_GodMasteryUpdated ( )
{
	static UFunction* pFnASC_GodMasteryUpdated = NULL;

	if ( ! pFnASC_GodMasteryUpdated )
		pFnASC_GodMasteryUpdated = (UFunction*) UObject::GObjObjects()->GetIndex( 148882 );

	UTgGfxProfileWorshiper_execASC_GodMasteryUpdated_Parms ASC_GodMasteryUpdated_Parms;

	this->ProcessEvent ( pFnASC_GodMasteryUpdated, &ASC_GodMasteryUpdated_Parms, NULL );
};

// Function TgClient.TgGfxProfileWorshiper.USC_Search
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 searchText                     ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxProfileWorshiper::USC_Search ( struct FString searchText )
{
	static UFunction* pFnUSC_Search = NULL;

	if ( ! pFnUSC_Search )
		pFnUSC_Search = (UFunction*) UObject::GObjObjects()->GetIndex( 148880 );

	UTgGfxProfileWorshiper_execUSC_Search_Parms USC_Search_Parms;
	memcpy ( &USC_Search_Parms.searchText, &searchText, 0x10 );

	pFnUSC_Search->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_Search, &USC_Search_Parms, NULL );

	pFnUSC_Search->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfileWorshiper.USC_Search_Delegate
// [0x00120000] 
// Parameters infos:
// struct FString                 searchText                     ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxProfileWorshiper::USC_Search_Delegate ( struct FString searchText )
{
	static UFunction* pFnUSC_Search_Delegate = NULL;

	if ( ! pFnUSC_Search_Delegate )
		pFnUSC_Search_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 148868 );

	UTgGfxProfileWorshiper_execUSC_Search_Delegate_Parms USC_Search_Delegate_Parms;
	memcpy ( &USC_Search_Delegate_Parms.searchText, &searchText, 0x10 );

	this->ProcessEvent ( pFnUSC_Search_Delegate, &USC_Search_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxProfileWorshiper.USC_SetGodMasteryFilter
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            filterId                       ( CPF_Parm )

void UTgGfxProfileWorshiper::USC_SetGodMasteryFilter ( int filterId )
{
	static UFunction* pFnUSC_SetGodMasteryFilter = NULL;

	if ( ! pFnUSC_SetGodMasteryFilter )
		pFnUSC_SetGodMasteryFilter = (UFunction*) UObject::GObjObjects()->GetIndex( 148877 );

	UTgGfxProfileWorshiper_execUSC_SetGodMasteryFilter_Parms USC_SetGodMasteryFilter_Parms;
	USC_SetGodMasteryFilter_Parms.filterId = filterId;

	pFnUSC_SetGodMasteryFilter->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_SetGodMasteryFilter, &USC_SetGodMasteryFilter_Parms, NULL );

	pFnUSC_SetGodMasteryFilter->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxProfileWorshiper.USC_SetGodMasteryFilter_Delegate
// [0x00120000] 
// Parameters infos:
// int                            filterId                       ( CPF_Parm )

void UTgGfxProfileWorshiper::USC_SetGodMasteryFilter_Delegate ( int filterId )
{
	static UFunction* pFnUSC_SetGodMasteryFilter_Delegate = NULL;

	if ( ! pFnUSC_SetGodMasteryFilter_Delegate )
		pFnUSC_SetGodMasteryFilter_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 148870 );

	UTgGfxProfileWorshiper_execUSC_SetGodMasteryFilter_Delegate_Parms USC_SetGodMasteryFilter_Delegate_Parms;
	USC_SetGodMasteryFilter_Delegate_Parms.filterId = filterId;

	this->ProcessEvent ( pFnUSC_SetGodMasteryFilter_Delegate, &USC_SetGodMasteryFilter_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxProfileWorshiper.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxProfileWorshiper::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148874 );

	UTgGfxProfileWorshiper_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxQuestWindow.UpdateQuest
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            Id                             ( CPF_Parm )
// int                            Count                          ( CPF_Parm )
// int                            Goal                           ( CPF_Parm )
// struct FString                 msg                            ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxQuestWindow::eventUpdateQuest ( int Id, int Count, int Goal, struct FString msg )
{
	static UFunction* pFnUpdateQuest = NULL;

	if ( ! pFnUpdateQuest )
		pFnUpdateQuest = (UFunction*) UObject::GObjObjects()->GetIndex( 148893 );

	UTgGfxQuestWindow_eventUpdateQuest_Parms UpdateQuest_Parms;
	UpdateQuest_Parms.Id = Id;
	UpdateQuest_Parms.Count = Count;
	UpdateQuest_Parms.Goal = Goal;
	memcpy ( &UpdateQuest_Parms.msg, &msg, 0x10 );

	this->ProcessEvent ( pFnUpdateQuest, &UpdateQuest_Parms, NULL );
};

// Function TgClient.TgGfxQuestWindow.ASC_UpdateQuest
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            Id                             ( CPF_Parm )
// int                            Count                          ( CPF_Parm )
// int                            Goal                           ( CPF_Parm )
// struct FString                 msg                            ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxQuestWindow::ASC_UpdateQuest ( int Id, int Count, int Goal, struct FString msg )
{
	static UFunction* pFnASC_UpdateQuest = NULL;

	if ( ! pFnASC_UpdateQuest )
		pFnASC_UpdateQuest = (UFunction*) UObject::GObjObjects()->GetIndex( 148888 );

	UTgGfxQuestWindow_execASC_UpdateQuest_Parms ASC_UpdateQuest_Parms;
	ASC_UpdateQuest_Parms.Id = Id;
	ASC_UpdateQuest_Parms.Count = Count;
	ASC_UpdateQuest_Parms.Goal = Goal;
	memcpy ( &ASC_UpdateQuest_Parms.msg, &msg, 0x10 );

	this->ProcessEvent ( pFnASC_UpdateQuest, &ASC_UpdateQuest_Parms, NULL );
};

// Function TgClient.TgGfxQuestWindow.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxQuestWindow::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148886 );

	UTgGfxQuestWindow_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxRacerDispatcher.USC_CheckForUpdates
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxRacerDispatcher::USC_CheckForUpdates ( )
{
	static UFunction* pFnUSC_CheckForUpdates = NULL;

	if ( ! pFnUSC_CheckForUpdates )
		pFnUSC_CheckForUpdates = (UFunction*) UObject::GObjObjects()->GetIndex( 148912 );

	UTgGfxRacerDispatcher_execUSC_CheckForUpdates_Parms USC_CheckForUpdates_Parms;

	pFnUSC_CheckForUpdates->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_CheckForUpdates, &USC_CheckForUpdates_Parms, NULL );

	pFnUSC_CheckForUpdates->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxRacerDispatcher.USC_CheckForUpdates_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxRacerDispatcher::USC_CheckForUpdates_Delegate ( )
{
	static UFunction* pFnUSC_CheckForUpdates_Delegate = NULL;

	if ( ! pFnUSC_CheckForUpdates_Delegate )
		pFnUSC_CheckForUpdates_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 148904 );

	UTgGfxRacerDispatcher_execUSC_CheckForUpdates_Delegate_Parms USC_CheckForUpdates_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_CheckForUpdates_Delegate, &USC_CheckForUpdates_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxRacerDispatcher.DataChange
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UGFxObject*              Data                           ( CPF_Parm )

void UTgGfxRacerDispatcher::eventDataChange ( class UGFxObject* Data )
{
	static UFunction* pFnDataChange = NULL;

	if ( ! pFnDataChange )
		pFnDataChange = (UFunction*) UObject::GObjObjects()->GetIndex( 148910 );

	UTgGfxRacerDispatcher_eventDataChange_Parms DataChange_Parms;
	DataChange_Parms.Data = Data;

	this->ProcessEvent ( pFnDataChange, &DataChange_Parms, NULL );
};

// Function TgClient.TgGfxRacerDispatcher.ASC_DataChange
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// class UGFxObject*              Obj                            ( CPF_Parm )

void UTgGfxRacerDispatcher::ASC_DataChange ( class UGFxObject* Obj )
{
	static UFunction* pFnASC_DataChange = NULL;

	if ( ! pFnASC_DataChange )
		pFnASC_DataChange = (UFunction*) UObject::GObjObjects()->GetIndex( 148908 );

	UTgGfxRacerDispatcher_execASC_DataChange_Parms ASC_DataChange_Parms;
	ASC_DataChange_Parms.Obj = Obj;

	this->ProcessEvent ( pFnASC_DataChange, &ASC_DataChange_Parms, NULL );
};

// Function TgClient.TgGfxRacerDispatcher.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxRacerDispatcher::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148906 );

	UTgGfxRacerDispatcher_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxReferralPopup.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxReferralPopup::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148921 );

	UTgGfxReferralPopup_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxReferralPopup.UpdateFriendList
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxReferralPopup::eventUpdateFriendList ( )
{
	static UFunction* pFnUpdateFriendList = NULL;

	if ( ! pFnUpdateFriendList )
		pFnUpdateFriendList = (UFunction*) UObject::GObjObjects()->GetIndex( 148920 );

	UTgGfxReferralPopup_eventUpdateFriendList_Parms UpdateFriendList_Parms;

	this->ProcessEvent ( pFnUpdateFriendList, &UpdateFriendList_Parms, NULL );
};

// Function TgClient.TgGfxReferralPopup.ASC_UpdateFriendList
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxReferralPopup::ASC_UpdateFriendList ( )
{
	static UFunction* pFnASC_UpdateFriendList = NULL;

	if ( ! pFnASC_UpdateFriendList )
		pFnASC_UpdateFriendList = (UFunction*) UObject::GObjObjects()->GetIndex( 148919 );

	UTgGfxReferralPopup_execASC_UpdateFriendList_Parms ASC_UpdateFriendList_Parms;

	this->ProcessEvent ( pFnASC_UpdateFriendList, &ASC_UpdateFriendList_Parms, NULL );
};

// Function TgClient.TgGfxReferralPopup.USC_SendFriendReferral
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sQQId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sMessage                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sPlayerName                    ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxReferralPopup::USC_SendFriendReferral ( struct FString sQQId, struct FString sMessage, struct FString sPlayerName )
{
	static UFunction* pFnUSC_SendFriendReferral = NULL;

	if ( ! pFnUSC_SendFriendReferral )
		pFnUSC_SendFriendReferral = (UFunction*) UObject::GObjObjects()->GetIndex( 148915 );

	UTgGfxReferralPopup_execUSC_SendFriendReferral_Parms USC_SendFriendReferral_Parms;
	memcpy ( &USC_SendFriendReferral_Parms.sQQId, &sQQId, 0x10 );
	memcpy ( &USC_SendFriendReferral_Parms.sMessage, &sMessage, 0x10 );
	memcpy ( &USC_SendFriendReferral_Parms.sPlayerName, &sPlayerName, 0x10 );

	pFnUSC_SendFriendReferral->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_SendFriendReferral, &USC_SendFriendReferral_Parms, NULL );

	pFnUSC_SendFriendReferral->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxReferralPopup.USC_SendFriendReferral_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxReferralPopup::USC_SendFriendReferral_Delegate ( )
{
	static UFunction* pFnUSC_SendFriendReferral_Delegate = NULL;

	if ( ! pFnUSC_SendFriendReferral_Delegate )
		pFnUSC_SendFriendReferral_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 148913 );

	UTgGfxReferralPopup_execUSC_SendFriendReferral_Delegate_Parms USC_SendFriendReferral_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_SendFriendReferral_Delegate, &USC_SendFriendReferral_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxReferralReward.USC_OpenReferFriendReward
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxReferralReward::USC_OpenReferFriendReward ( )
{
	static UFunction* pFnUSC_OpenReferFriendReward = NULL;

	if ( ! pFnUSC_OpenReferFriendReward )
		pFnUSC_OpenReferFriendReward = (UFunction*) UObject::GObjObjects()->GetIndex( 148927 );

	UTgGfxReferralReward_execUSC_OpenReferFriendReward_Parms USC_OpenReferFriendReward_Parms;

	pFnUSC_OpenReferFriendReward->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_OpenReferFriendReward, &USC_OpenReferFriendReward_Parms, NULL );

	pFnUSC_OpenReferFriendReward->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxReferralReward.USC_OpenReferFriendReward_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxReferralReward::USC_OpenReferFriendReward_Delegate ( )
{
	static UFunction* pFnUSC_OpenReferFriendReward_Delegate = NULL;

	if ( ! pFnUSC_OpenReferFriendReward_Delegate )
		pFnUSC_OpenReferFriendReward_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 148925 );

	UTgGfxReferralReward_execUSC_OpenReferFriendReward_Delegate_Parms USC_OpenReferFriendReward_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_OpenReferFriendReward_Delegate, &USC_OpenReferFriendReward_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxReferralReward.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxReferralReward::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148923 );

	UTgGfxReferralReward_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxReferrals.UpdateAchievements
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxReferrals::eventUpdateAchievements ( )
{
	static UFunction* pFnUpdateAchievements = NULL;

	if ( ! pFnUpdateAchievements )
		pFnUpdateAchievements = (UFunction*) UObject::GObjObjects()->GetIndex( 148950 );

	UTgGfxReferrals_eventUpdateAchievements_Parms UpdateAchievements_Parms;

	this->ProcessEvent ( pFnUpdateAchievements, &UpdateAchievements_Parms, NULL );
};

// Function TgClient.TgGfxReferrals.ASC_UpdateAchievements
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxReferrals::ASC_UpdateAchievements ( )
{
	static UFunction* pFnASC_UpdateAchievements = NULL;

	if ( ! pFnASC_UpdateAchievements )
		pFnASC_UpdateAchievements = (UFunction*) UObject::GObjObjects()->GetIndex( 148949 );

	UTgGfxReferrals_execASC_UpdateAchievements_Parms ASC_UpdateAchievements_Parms;

	this->ProcessEvent ( pFnASC_UpdateAchievements, &ASC_UpdateAchievements_Parms, NULL );
};

// Function TgClient.TgGfxReferrals.UpdatePlayerList
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxReferrals::eventUpdatePlayerList ( )
{
	static UFunction* pFnUpdatePlayerList = NULL;

	if ( ! pFnUpdatePlayerList )
		pFnUpdatePlayerList = (UFunction*) UObject::GObjObjects()->GetIndex( 148948 );

	UTgGfxReferrals_eventUpdatePlayerList_Parms UpdatePlayerList_Parms;

	this->ProcessEvent ( pFnUpdatePlayerList, &UpdatePlayerList_Parms, NULL );
};

// Function TgClient.TgGfxReferrals.ASC_UpdatePlayerList
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxReferrals::ASC_UpdatePlayerList ( )
{
	static UFunction* pFnASC_UpdatePlayerList = NULL;

	if ( ! pFnASC_UpdatePlayerList )
		pFnASC_UpdatePlayerList = (UFunction*) UObject::GObjObjects()->GetIndex( 148947 );

	UTgGfxReferrals_execASC_UpdatePlayerList_Parms ASC_UpdatePlayerList_Parms;

	this->ProcessEvent ( pFnASC_UpdatePlayerList, &ASC_UpdatePlayerList_Parms, NULL );
};

// Function TgClient.TgGfxReferrals.USC_OpenReferFriend
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxReferrals::USC_OpenReferFriend ( )
{
	static UFunction* pFnUSC_OpenReferFriend = NULL;

	if ( ! pFnUSC_OpenReferFriend )
		pFnUSC_OpenReferFriend = (UFunction*) UObject::GObjObjects()->GetIndex( 148946 );

	UTgGfxReferrals_execUSC_OpenReferFriend_Parms USC_OpenReferFriend_Parms;

	pFnUSC_OpenReferFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_OpenReferFriend, &USC_OpenReferFriend_Parms, NULL );

	pFnUSC_OpenReferFriend->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxReferrals.USC_OpenReferFriend_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxReferrals::USC_OpenReferFriend_Delegate ( )
{
	static UFunction* pFnUSC_OpenReferFriend_Delegate = NULL;

	if ( ! pFnUSC_OpenReferFriend_Delegate )
		pFnUSC_OpenReferFriend_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 148943 );

	UTgGfxReferrals_execUSC_OpenReferFriend_Delegate_Parms USC_OpenReferFriend_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_OpenReferFriend_Delegate, &USC_OpenReferFriend_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxReferrals.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxReferrals::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148944 );

	UTgGfxReferrals_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxReferralSelector.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxReferralSelector::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148961 );

	UTgGfxReferralSelector_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxReferralSelector.UpdateFriendList
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxReferralSelector::eventUpdateFriendList ( )
{
	static UFunction* pFnUpdateFriendList = NULL;

	if ( ! pFnUpdateFriendList )
		pFnUpdateFriendList = (UFunction*) UObject::GObjObjects()->GetIndex( 148960 );

	UTgGfxReferralSelector_eventUpdateFriendList_Parms UpdateFriendList_Parms;

	this->ProcessEvent ( pFnUpdateFriendList, &UpdateFriendList_Parms, NULL );
};

// Function TgClient.TgGfxReferralSelector.ASC_UpdateFriendList
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxReferralSelector::ASC_UpdateFriendList ( )
{
	static UFunction* pFnASC_UpdateFriendList = NULL;

	if ( ! pFnASC_UpdateFriendList )
		pFnASC_UpdateFriendList = (UFunction*) UObject::GObjObjects()->GetIndex( 148959 );

	UTgGfxReferralSelector_execASC_UpdateFriendList_Parms ASC_UpdateFriendList_Parms;

	this->ProcessEvent ( pFnASC_UpdateFriendList, &ASC_UpdateFriendList_Parms, NULL );
};

// Function TgClient.TgGfxReferralSelector.USC_SelectReferral
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sQQId                          ( CPF_Parm | CPF_NeedCtorLink )

void UTgGfxReferralSelector::USC_SelectReferral ( struct FString sQQId )
{
	static UFunction* pFnUSC_SelectReferral = NULL;

	if ( ! pFnUSC_SelectReferral )
		pFnUSC_SelectReferral = (UFunction*) UObject::GObjObjects()->GetIndex( 148957 );

	UTgGfxReferralSelector_execUSC_SelectReferral_Parms USC_SelectReferral_Parms;
	memcpy ( &USC_SelectReferral_Parms.sQQId, &sQQId, 0x10 );

	pFnUSC_SelectReferral->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_SelectReferral, &USC_SelectReferral_Parms, NULL );

	pFnUSC_SelectReferral->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxReferralSelector.USC_SelectReferral_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxReferralSelector::USC_SelectReferral_Delegate ( )
{
	static UFunction* pFnUSC_SelectReferral_Delegate = NULL;

	if ( ! pFnUSC_SelectReferral_Delegate )
		pFnUSC_SelectReferral_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 148952 );

	UTgGfxReferralSelector_execUSC_SelectReferral_Delegate_Parms USC_SelectReferral_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_SelectReferral_Delegate, &USC_SelectReferral_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxSettingsMenu.USC_OpenQueueWarning
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxSettingsMenu::USC_OpenQueueWarning ( )
{
	static UFunction* pFnUSC_OpenQueueWarning = NULL;

	if ( ! pFnUSC_OpenQueueWarning )
		pFnUSC_OpenQueueWarning = (UFunction*) UObject::GObjObjects()->GetIndex( 148968 );

	UTgGfxSettingsMenu_execUSC_OpenQueueWarning_Parms USC_OpenQueueWarning_Parms;

	pFnUSC_OpenQueueWarning->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_OpenQueueWarning, &USC_OpenQueueWarning_Parms, NULL );

	pFnUSC_OpenQueueWarning->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxSettingsMenu.USC_OpenQueueWarning_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxSettingsMenu::USC_OpenQueueWarning_Delegate ( )
{
	static UFunction* pFnUSC_OpenQueueWarning_Delegate = NULL;

	if ( ! pFnUSC_OpenQueueWarning_Delegate )
		pFnUSC_OpenQueueWarning_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 148966 );

	UTgGfxSettingsMenu_execUSC_OpenQueueWarning_Delegate_Parms USC_OpenQueueWarning_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_OpenQueueWarning_Delegate, &USC_OpenQueueWarning_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxSettingsMenu.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxSettingsMenu::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148965 );

	UTgGfxSettingsMenu_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxSettingsMenu.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          pMoviePlayer                   ( CPF_Parm )

void UTgGfxSettingsMenu::Initialize ( class UTgMoviePlayer* pMoviePlayer )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148963 );

	UTgGfxSettingsMenu_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.pMoviePlayer = pMoviePlayer;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxSpectatorHud.SendGraphData
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// class UGFxObject*              Obj                            ( CPF_Parm )

void UTgGfxSpectatorHud::eventSendGraphData ( class UGFxObject* Obj )
{
	static UFunction* pFnSendGraphData = NULL;

	if ( ! pFnSendGraphData )
		pFnSendGraphData = (UFunction*) UObject::GObjObjects()->GetIndex( 149006 );

	UTgGfxSpectatorHud_eventSendGraphData_Parms SendGraphData_Parms;
	SendGraphData_Parms.Obj = Obj;

	this->ProcessEvent ( pFnSendGraphData, &SendGraphData_Parms, NULL );
};

// Function TgClient.TgGfxSpectatorHud.USC_UpdatePlayerList
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pPlayerList                    ( CPF_Parm )
// int                            nLength                        ( CPF_Parm )

void UTgGfxSpectatorHud::USC_UpdatePlayerList ( class UGFxObject* pPlayerList, int nLength )
{
	static UFunction* pFnUSC_UpdatePlayerList = NULL;

	if ( ! pFnUSC_UpdatePlayerList )
		pFnUSC_UpdatePlayerList = (UFunction*) UObject::GObjObjects()->GetIndex( 149003 );

	UTgGfxSpectatorHud_execUSC_UpdatePlayerList_Parms USC_UpdatePlayerList_Parms;
	USC_UpdatePlayerList_Parms.pPlayerList = pPlayerList;
	USC_UpdatePlayerList_Parms.nLength = nLength;

	pFnUSC_UpdatePlayerList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_UpdatePlayerList, &USC_UpdatePlayerList_Parms, NULL );

	pFnUSC_UpdatePlayerList->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxSpectatorHud.USC_UpdatePlayerList_Delegate
// [0x00120000] 
// Parameters infos:
// class UGFxObject*              pPlayerList                    ( CPF_Parm )
// int                            nLength                        ( CPF_Parm )

void UTgGfxSpectatorHud::USC_UpdatePlayerList_Delegate ( class UGFxObject* pPlayerList, int nLength )
{
	static UFunction* pFnUSC_UpdatePlayerList_Delegate = NULL;

	if ( ! pFnUSC_UpdatePlayerList_Delegate )
		pFnUSC_UpdatePlayerList_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 148970 );

	UTgGfxSpectatorHud_execUSC_UpdatePlayerList_Delegate_Parms USC_UpdatePlayerList_Delegate_Parms;
	USC_UpdatePlayerList_Delegate_Parms.pPlayerList = pPlayerList;
	USC_UpdatePlayerList_Delegate_Parms.nLength = nLength;

	this->ProcessEvent ( pFnUSC_UpdatePlayerList_Delegate, &USC_UpdatePlayerList_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxSpectatorHud.USC_SetMenuIsOpen
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bOpen                          ( CPF_Parm )

void UTgGfxSpectatorHud::USC_SetMenuIsOpen ( unsigned long bOpen )
{
	static UFunction* pFnUSC_SetMenuIsOpen = NULL;

	if ( ! pFnUSC_SetMenuIsOpen )
		pFnUSC_SetMenuIsOpen = (UFunction*) UObject::GObjObjects()->GetIndex( 148999 );

	UTgGfxSpectatorHud_execUSC_SetMenuIsOpen_Parms USC_SetMenuIsOpen_Parms;
	USC_SetMenuIsOpen_Parms.bOpen = bOpen;

	pFnUSC_SetMenuIsOpen->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_SetMenuIsOpen, &USC_SetMenuIsOpen_Parms, NULL );

	pFnUSC_SetMenuIsOpen->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxSpectatorHud.USC_SetMenuIsOpen_Delegate
// [0x00120000] 
// Parameters infos:
// unsigned long                  bOpen                          ( CPF_Parm )

void UTgGfxSpectatorHud::USC_SetMenuIsOpen_Delegate ( unsigned long bOpen )
{
	static UFunction* pFnUSC_SetMenuIsOpen_Delegate = NULL;

	if ( ! pFnUSC_SetMenuIsOpen_Delegate )
		pFnUSC_SetMenuIsOpen_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 148972 );

	UTgGfxSpectatorHud_execUSC_SetMenuIsOpen_Delegate_Parms USC_SetMenuIsOpen_Delegate_Parms;
	USC_SetMenuIsOpen_Delegate_Parms.bOpen = bOpen;

	this->ProcessEvent ( pFnUSC_SetMenuIsOpen_Delegate, &USC_SetMenuIsOpen_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxSpectatorHud.USC_UpdateStat
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            pawnId                         ( CPF_Parm )

void UTgGfxSpectatorHud::USC_UpdateStat ( int pawnId )
{
	static UFunction* pFnUSC_UpdateStat = NULL;

	if ( ! pFnUSC_UpdateStat )
		pFnUSC_UpdateStat = (UFunction*) UObject::GObjObjects()->GetIndex( 148996 );

	UTgGfxSpectatorHud_execUSC_UpdateStat_Parms USC_UpdateStat_Parms;
	USC_UpdateStat_Parms.pawnId = pawnId;

	pFnUSC_UpdateStat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_UpdateStat, &USC_UpdateStat_Parms, NULL );

	pFnUSC_UpdateStat->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxSpectatorHud.USC_UpdateStat_Delegate
// [0x00120000] 
// Parameters infos:
// int                            pawnId                         ( CPF_Parm )

void UTgGfxSpectatorHud::USC_UpdateStat_Delegate ( int pawnId )
{
	static UFunction* pFnUSC_UpdateStat_Delegate = NULL;

	if ( ! pFnUSC_UpdateStat_Delegate )
		pFnUSC_UpdateStat_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 148974 );

	UTgGfxSpectatorHud_execUSC_UpdateStat_Delegate_Parms USC_UpdateStat_Delegate_Parms;
	USC_UpdateStat_Delegate_Parms.pawnId = pawnId;

	this->ProcessEvent ( pFnUSC_UpdateStat_Delegate, &USC_UpdateStat_Delegate_Parms, NULL );
};

// Function TgClient.TgGfxSpectatorHud.OnGameHUDEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UTgEventDataItem*        pEvent                         ( CPF_Parm )

void UTgGfxSpectatorHud::OnGameHUDEvent ( class UTgEventDataItem* pEvent )
{
	static UFunction* pFnOnGameHUDEvent = NULL;

	if ( ! pFnOnGameHUDEvent )
		pFnOnGameHUDEvent = (UFunction*) UObject::GObjObjects()->GetIndex( 148993 );

	UTgGfxSpectatorHud_execOnGameHUDEvent_Parms OnGameHUDEvent_Parms;
	OnGameHUDEvent_Parms.pEvent = pEvent;

	pFnOnGameHUDEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnGameHUDEvent, &OnGameHUDEvent_Parms, NULL );

	pFnOnGameHUDEvent->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxSpectatorHud.OnSpectatorEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UTgEventDataItem*        pEvent                         ( CPF_Parm )

void UTgGfxSpectatorHud::OnSpectatorEvent ( class UTgEventDataItem* pEvent )
{
	static UFunction* pFnOnSpectatorEvent = NULL;

	if ( ! pFnOnSpectatorEvent )
		pFnOnSpectatorEvent = (UFunction*) UObject::GObjObjects()->GetIndex( 148991 );

	UTgGfxSpectatorHud_execOnSpectatorEvent_Parms OnSpectatorEvent_Parms;
	OnSpectatorEvent_Parms.pEvent = pEvent;

	pFnOnSpectatorEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnSpectatorEvent, &OnSpectatorEvent_Parms, NULL );

	pFnOnSpectatorEvent->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxSpectatorHud.UpdateGraph
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGfxSpectatorHud::UpdateGraph ( )
{
	static UFunction* pFnUpdateGraph = NULL;

	if ( ! pFnUpdateGraph )
		pFnUpdateGraph = (UFunction*) UObject::GObjObjects()->GetIndex( 148990 );

	UTgGfxSpectatorHud_execUpdateGraph_Parms UpdateGraph_Parms;

	pFnUpdateGraph->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateGraph, &UpdateGraph_Parms, NULL );

	pFnUpdateGraph->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxSpectatorHud.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxSpectatorHud::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148989 );

	UTgGfxSpectatorHud_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxSpectatorHud.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          pParentMovie                   ( CPF_Parm )

void UTgGfxSpectatorHud::Initialize ( class UTgMoviePlayer* pParentMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148987 );

	UTgGfxSpectatorHud_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.pParentMovie = pParentMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxStoreChestPC.OnAcquisition
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgEventDataItem*        pEvent                         ( CPF_Parm )

void UTgGfxStoreChestPC::OnAcquisition ( class UTgEventDataItem* pEvent )
{
	static UFunction* pFnOnAcquisition = NULL;

	if ( ! pFnOnAcquisition )
		pFnOnAcquisition = (UFunction*) UObject::GObjObjects()->GetIndex( 149016 );

	UTgGfxStoreChestPC_execOnAcquisition_Parms OnAcquisition_Parms;
	OnAcquisition_Parms.pEvent = pEvent;

	pFnOnAcquisition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnAcquisition, &OnAcquisition_Parms, NULL );

	pFnOnAcquisition->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxStoreChestPC.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxStoreChestPC::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 149014 );

	UTgGfxStoreChestPC_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxStoreChestPC.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxStoreChestPC::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 149012 );

	UTgGfxStoreChestPC_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxTreasurePicker.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxTreasurePicker::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 149027 );

	UTgGfxTreasurePicker_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxTreasurePicker.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxTreasurePicker::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 149026 );

	UTgGfxTreasurePicker_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxTreasurePicker.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          pMoviePlayer                   ( CPF_Parm )

void UTgGfxTreasurePicker::Initialize ( class UTgMoviePlayer* pMoviePlayer )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 149024 );

	UTgGfxTreasurePicker_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.pMoviePlayer = pMoviePlayer;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxWisdomMain.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxWisdomMain::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 149029 );

	UTgGfxWisdomMain_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxWisdomWeb.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxWisdomWeb::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 149046 );

	UTgGfxWisdomWeb_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxWisdomWeb.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxWisdomWeb::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 149044 );

	UTgGfxWisdomWeb_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxWisdomWeb.ASC_UpdateStreamList
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UTgGfxWisdomWeb::ASC_UpdateStreamList ( )
{
	static UFunction* pFnASC_UpdateStreamList = NULL;

	if ( ! pFnASC_UpdateStreamList )
		pFnASC_UpdateStreamList = (UFunction*) UObject::GObjObjects()->GetIndex( 149043 );

	UTgGfxWisdomWeb_execASC_UpdateStreamList_Parms ASC_UpdateStreamList_Parms;

	this->ProcessEvent ( pFnASC_UpdateStreamList, &ASC_UpdateStreamList_Parms, NULL );
};

// Function TgClient.TgGfxWisdomWeb.UpdateStreamList
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGfxWisdomWeb::eventUpdateStreamList ( )
{
	static UFunction* pFnUpdateStreamList = NULL;

	if ( ! pFnUpdateStreamList )
		pFnUpdateStreamList = (UFunction*) UObject::GObjObjects()->GetIndex( 149042 );

	UTgGfxWisdomWeb_eventUpdateStreamList_Parms UpdateStreamList_Parms;

	this->ProcessEvent ( pFnUpdateStreamList, &UpdateStreamList_Parms, NULL );
};

// Function TgClient.TgGfxWisdomWeb.USC_StartStreamData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            streamId                       ( CPF_Parm )
// unsigned long                  external                       ( CPF_Parm )
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )
// float                          Width                          ( CPF_Parm )
// float                          Height                         ( CPF_Parm )
// float                          widthReal                      ( CPF_Parm )
// float                          heightReal                     ( CPF_Parm )

void UTgGfxWisdomWeb::USC_StartStreamData ( int streamId, unsigned long external, float X, float Y, float Width, float Height, float widthReal, float heightReal )
{
	static UFunction* pFnUSC_StartStreamData = NULL;

	if ( ! pFnUSC_StartStreamData )
		pFnUSC_StartStreamData = (UFunction*) UObject::GObjObjects()->GetIndex( 149033 );

	UTgGfxWisdomWeb_execUSC_StartStreamData_Parms USC_StartStreamData_Parms;
	USC_StartStreamData_Parms.streamId = streamId;
	USC_StartStreamData_Parms.external = external;
	USC_StartStreamData_Parms.X = X;
	USC_StartStreamData_Parms.Y = Y;
	USC_StartStreamData_Parms.Width = Width;
	USC_StartStreamData_Parms.Height = Height;
	USC_StartStreamData_Parms.widthReal = widthReal;
	USC_StartStreamData_Parms.heightReal = heightReal;

	pFnUSC_StartStreamData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_StartStreamData, &USC_StartStreamData_Parms, NULL );

	pFnUSC_StartStreamData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxWisdomWeb.USC_StartStreamData_Delegate
// [0x00120000] 
// Parameters infos:

void UTgGfxWisdomWeb::USC_StartStreamData_Delegate ( )
{
	static UFunction* pFnUSC_StartStreamData_Delegate = NULL;

	if ( ! pFnUSC_StartStreamData_Delegate )
		pFnUSC_StartStreamData_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 149031 );

	UTgGfxWisdomWeb_execUSC_StartStreamData_Delegate_Parms USC_StartStreamData_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_StartStreamData_Delegate, &USC_StartStreamData_Delegate_Parms, NULL );
};

// Function TgClient.TgStreamManager.OpenStream
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            surfaceId                      ( CPF_Parm )
// struct FString                 URL                            ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  external                       ( CPF_Parm )
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )
// float                          Width                          ( CPF_Parm )
// float                          Height                         ( CPF_Parm )
// float                          widthReal                      ( CPF_Parm )
// float                          heightReal                     ( CPF_Parm )
// unsigned long                  joinChat                       ( CPF_OptionalParm | CPF_Parm )

bool UTgStreamManager::OpenStream ( int surfaceId, struct FString URL, unsigned long external, float X, float Y, float Width, float Height, float widthReal, float heightReal, unsigned long joinChat )
{
	static UFunction* pFnOpenStream = NULL;

	if ( ! pFnOpenStream )
		pFnOpenStream = (UFunction*) UObject::GObjObjects()->GetIndex( 149137 );

	UTgStreamManager_execOpenStream_Parms OpenStream_Parms;
	OpenStream_Parms.surfaceId = surfaceId;
	memcpy ( &OpenStream_Parms.URL, &URL, 0x10 );
	OpenStream_Parms.external = external;
	OpenStream_Parms.X = X;
	OpenStream_Parms.Y = Y;
	OpenStream_Parms.Width = Width;
	OpenStream_Parms.Height = Height;
	OpenStream_Parms.widthReal = widthReal;
	OpenStream_Parms.heightReal = heightReal;
	OpenStream_Parms.joinChat = joinChat;

	pFnOpenStream->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenStream, &OpenStream_Parms, NULL );

	pFnOpenStream->FunctionFlags |= 0x400;

	return OpenStream_Parms.ReturnValue;
};

// Function TgClient.TgGameDataHandler.ChatInput_SetReplyName
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sSenderName                    ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameDataHandler::ChatInput_SetReplyName ( struct FString sSenderName )
{
	static UFunction* pFnChatInput_SetReplyName = NULL;

	if ( ! pFnChatInput_SetReplyName )
		pFnChatInput_SetReplyName = (UFunction*) UObject::GObjObjects()->GetIndex( 147421 );

	UTgGameDataHandler_execChatInput_SetReplyName_Parms ChatInput_SetReplyName_Parms;
	memcpy ( &ChatInput_SetReplyName_Parms.sSenderName, &sSenderName, 0x10 );

	pFnChatInput_SetReplyName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnChatInput_SetReplyName, &ChatInput_SetReplyName_Parms, NULL );

	pFnChatInput_SetReplyName->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDataHandler.DispatchEvent_VendorStore_UpdateInventory
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameDataHandler::DispatchEvent_VendorStore_UpdateInventory ( )
{
	static UFunction* pFnDispatchEvent_VendorStore_UpdateInventory = NULL;

	if ( ! pFnDispatchEvent_VendorStore_UpdateInventory )
		pFnDispatchEvent_VendorStore_UpdateInventory = (UFunction*) UObject::GObjObjects()->GetIndex( 147420 );

	UTgGameDataHandler_execDispatchEvent_VendorStore_UpdateInventory_Parms DispatchEvent_VendorStore_UpdateInventory_Parms;

	pFnDispatchEvent_VendorStore_UpdateInventory->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDispatchEvent_VendorStore_UpdateInventory, &DispatchEvent_VendorStore_UpdateInventory_Parms, NULL );

	pFnDispatchEvent_VendorStore_UpdateInventory->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDataHandler.DispatchEvent_VendorStore_UpdateStats
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameDataHandler::DispatchEvent_VendorStore_UpdateStats ( )
{
	static UFunction* pFnDispatchEvent_VendorStore_UpdateStats = NULL;

	if ( ! pFnDispatchEvent_VendorStore_UpdateStats )
		pFnDispatchEvent_VendorStore_UpdateStats = (UFunction*) UObject::GObjObjects()->GetIndex( 147419 );

	UTgGameDataHandler_execDispatchEvent_VendorStore_UpdateStats_Parms DispatchEvent_VendorStore_UpdateStats_Parms;

	pFnDispatchEvent_VendorStore_UpdateStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDispatchEvent_VendorStore_UpdateStats, &DispatchEvent_VendorStore_UpdateStats_Parms, NULL );

	pFnDispatchEvent_VendorStore_UpdateStats->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameDataHandler.InitializeDataHandler
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameDataHandler::InitializeDataHandler ( )
{
	static UFunction* pFnInitializeDataHandler = NULL;

	if ( ! pFnInitializeDataHandler )
		pFnInitializeDataHandler = (UFunction*) UObject::GObjObjects()->GetIndex( 147418 );

	UTgGameDataHandler_execInitializeDataHandler_Parms InitializeDataHandler_Parms;

	pFnInitializeDataHandler->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeDataHandler, &InitializeDataHandler_Parms, NULL );

	pFnInitializeDataHandler->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.DelegateGFxList
// [0x00120000] 
// Parameters infos:
// class UGFxObject*              List                           ( CPF_Parm )

void UTgGameMoviePlayer::DelegateGFxList ( class UGFxObject* List )
{
	static UFunction* pFnDelegateGFxList = NULL;

	if ( ! pFnDelegateGFxList )
		pFnDelegateGFxList = (UFunction*) UObject::GObjObjects()->GetIndex( 147435 );

	UTgGameMoviePlayer_execDelegateGFxList_Parms DelegateGFxList_Parms;
	DelegateGFxList_Parms.List = List;

	this->ProcessEvent ( pFnDelegateGFxList, &DelegateGFxList_Parms, NULL );
};

// Function TgClient.TgGameMoviePlayer.usc_rotate_lobby_model
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// float                          fValue                         ( CPF_Parm )

void UTgGameMoviePlayer::usc_rotate_lobby_model ( float fValue )
{
	static UFunction* pFnusc_rotate_lobby_model = NULL;

	if ( ! pFnusc_rotate_lobby_model )
		pFnusc_rotate_lobby_model = (UFunction*) UObject::GObjObjects()->GetIndex( 147697 );

	UTgGameMoviePlayer_execusc_rotate_lobby_model_Parms usc_rotate_lobby_model_Parms;
	usc_rotate_lobby_model_Parms.fValue = fValue;

	this->ProcessEvent ( pFnusc_rotate_lobby_model, &usc_rotate_lobby_model_Parms, NULL );
};

// Function TgClient.TgGameMoviePlayer.usc_activate_key
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UTgGameMoviePlayer::usc_activate_key ( )
{
	static UFunction* pFnusc_activate_key = NULL;

	if ( ! pFnusc_activate_key )
		pFnusc_activate_key = (UFunction*) UObject::GObjObjects()->GetIndex( 147696 );

	UTgGameMoviePlayer_execusc_activate_key_Parms usc_activate_key_Parms;

	this->ProcessEvent ( pFnusc_activate_key, &usc_activate_key_Parms, NULL );
};

// Function TgClient.TgGameMoviePlayer.CacheLoggedInGamepad
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UTgGameMoviePlayer::eventCacheLoggedInGamepad ( )
{
	static UFunction* pFnCacheLoggedInGamepad = NULL;

	if ( ! pFnCacheLoggedInGamepad )
		pFnCacheLoggedInGamepad = (UFunction*) UObject::GObjObjects()->GetIndex( 147694 );

	UTgGameMoviePlayer_eventCacheLoggedInGamepad_Parms CacheLoggedInGamepad_Parms;

	this->ProcessEvent ( pFnCacheLoggedInGamepad, &CacheLoggedInGamepad_Parms, NULL );
};

// Function TgClient.TgGameMoviePlayer.SetUISetting
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 Setting                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Value                          ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::SetUISetting ( struct FString Setting, struct FString Value )
{
	static UFunction* pFnSetUISetting = NULL;

	if ( ! pFnSetUISetting )
		pFnSetUISetting = (UFunction*) UObject::GObjObjects()->GetIndex( 147691 );

	UTgGameMoviePlayer_execSetUISetting_Parms SetUISetting_Parms;
	memcpy ( &SetUISetting_Parms.Setting, &Setting, 0x10 );
	memcpy ( &SetUISetting_Parms.Value, &Value, 0x10 );

	this->ProcessEvent ( pFnSetUISetting, &SetUISetting_Parms, NULL );
};

// Function TgClient.TgGameMoviePlayer.CheckSpecialInput
// [0x00020002] 
// Parameters infos:
// class ATgPlayerController*     TgPC                           ( CPF_Parm )
// struct FName                   ButtonName                     ( CPF_Parm )
// unsigned char                  Event                          ( CPF_Parm )

void UTgGameMoviePlayer::CheckSpecialInput ( class ATgPlayerController* TgPC, struct FName ButtonName, unsigned char Event )
{
	static UFunction* pFnCheckSpecialInput = NULL;

	if ( ! pFnCheckSpecialInput )
		pFnCheckSpecialInput = (UFunction*) UObject::GObjObjects()->GetIndex( 147687 );

	UTgGameMoviePlayer_execCheckSpecialInput_Parms CheckSpecialInput_Parms;
	CheckSpecialInput_Parms.TgPC = TgPC;
	memcpy ( &CheckSpecialInput_Parms.ButtonName, &ButtonName, 0x8 );
	CheckSpecialInput_Parms.Event = Event;

	this->ProcessEvent ( pFnCheckSpecialInput, &CheckSpecialInput_Parms, NULL );
};

// Function TgClient.TgGameMoviePlayer.FilterButtonInput
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerId                   ( CPF_Parm )
// struct FName                   ButtonName                     ( CPF_Parm )
// unsigned char                  Event                          ( CPF_Parm )

bool UTgGameMoviePlayer::eventFilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char Event )
{
	static UFunction* pFnFilterButtonInput = NULL;

	if ( ! pFnFilterButtonInput )
		pFnFilterButtonInput = (UFunction*) UObject::GObjObjects()->GetIndex( 147678 );

	UTgGameMoviePlayer_eventFilterButtonInput_Parms FilterButtonInput_Parms;
	FilterButtonInput_Parms.ControllerId = ControllerId;
	memcpy ( &FilterButtonInput_Parms.ButtonName, &ButtonName, 0x8 );
	FilterButtonInput_Parms.Event = Event;

	this->ProcessEvent ( pFnFilterButtonInput, &FilterButtonInput_Parms, NULL );

	return FilterButtonInput_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.WidgetUnloaded
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   WidgetName                     ( CPF_Parm )
// struct FName                   WidgetPath                     ( CPF_Parm )
// class UGFxObject*              Widget                         ( CPF_Parm )

bool UTgGameMoviePlayer::eventWidgetUnloaded ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget )
{
	static UFunction* pFnWidgetUnloaded = NULL;

	if ( ! pFnWidgetUnloaded )
		pFnWidgetUnloaded = (UFunction*) UObject::GObjObjects()->GetIndex( 147673 );

	UTgGameMoviePlayer_eventWidgetUnloaded_Parms WidgetUnloaded_Parms;
	memcpy ( &WidgetUnloaded_Parms.WidgetName, &WidgetName, 0x8 );
	memcpy ( &WidgetUnloaded_Parms.WidgetPath, &WidgetPath, 0x8 );
	WidgetUnloaded_Parms.Widget = Widget;

	this->ProcessEvent ( pFnWidgetUnloaded, &WidgetUnloaded_Parms, NULL );

	return WidgetUnloaded_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.WidgetInitialized
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   WidgetName                     ( CPF_Parm )
// struct FName                   WidgetPath                     ( CPF_Parm )
// class UGFxObject*              Widget                         ( CPF_Parm )

bool UTgGameMoviePlayer::eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget )
{
	static UFunction* pFnWidgetInitialized = NULL;

	if ( ! pFnWidgetInitialized )
		pFnWidgetInitialized = (UFunction*) UObject::GObjObjects()->GetIndex( 147668 );

	UTgGameMoviePlayer_eventWidgetInitialized_Parms WidgetInitialized_Parms;
	memcpy ( &WidgetInitialized_Parms.WidgetName, &WidgetName, 0x8 );
	memcpy ( &WidgetInitialized_Parms.WidgetPath, &WidgetPath, 0x8 );
	WidgetInitialized_Parms.Widget = Widget;

	this->ProcessEvent ( pFnWidgetInitialized, &WidgetInitialized_Parms, NULL );

	return WidgetInitialized_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.GetBrowserType
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nURLType                       ( CPF_Parm )

bool UTgGameMoviePlayer::GetBrowserType ( int nURLType )
{
	static UFunction* pFnGetBrowserType = NULL;

	if ( ! pFnGetBrowserType )
		pFnGetBrowserType = (UFunction*) UObject::GObjObjects()->GetIndex( 147665 );

	UTgGameMoviePlayer_execGetBrowserType_Parms GetBrowserType_Parms;
	GetBrowserType_Parms.nURLType = nURLType;

	pFnGetBrowserType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBrowserType, &GetBrowserType_Parms, NULL );

	pFnGetBrowserType->FunctionFlags |= 0x400;

	return GetBrowserType_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_forceFlushActionLog
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::usc_forceFlushActionLog ( )
{
	static UFunction* pFnusc_forceFlushActionLog = NULL;

	if ( ! pFnusc_forceFlushActionLog )
		pFnusc_forceFlushActionLog = (UFunction*) UObject::GObjObjects()->GetIndex( 147664 );

	UTgGameMoviePlayer_execusc_forceFlushActionLog_Parms usc_forceFlushActionLog_Parms;

	pFnusc_forceFlushActionLog->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_forceFlushActionLog, &usc_forceFlushActionLog_Parms, NULL );

	pFnusc_forceFlushActionLog->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.ToggleCombatLog
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::ToggleCombatLog ( )
{
	static UFunction* pFnToggleCombatLog = NULL;

	if ( ! pFnToggleCombatLog )
		pFnToggleCombatLog = (UFunction*) UObject::GObjObjects()->GetIndex( 147663 );

	UTgGameMoviePlayer_execToggleCombatLog_Parms ToggleCombatLog_Parms;

	pFnToggleCombatLog->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleCombatLog, &ToggleCombatLog_Parms, NULL );

	pFnToggleCombatLog->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_get_ui_display_mode
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UTgGameMoviePlayer::usc_get_ui_display_mode ( )
{
	static UFunction* pFnusc_get_ui_display_mode = NULL;

	if ( ! pFnusc_get_ui_display_mode )
		pFnusc_get_ui_display_mode = (UFunction*) UObject::GObjObjects()->GetIndex( 147661 );

	UTgGameMoviePlayer_execusc_get_ui_display_mode_Parms usc_get_ui_display_mode_Parms;

	this->ProcessEvent ( pFnusc_get_ui_display_mode, &usc_get_ui_display_mode_Parms, NULL );

	return usc_get_ui_display_mode_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.NativeTick
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UTgGameMoviePlayer::NativeTick ( float DeltaTime )
{
	static UFunction* pFnNativeTick = NULL;

	if ( ! pFnNativeTick )
		pFnNativeTick = (UFunction*) UObject::GObjObjects()->GetIndex( 147659 );

	UTgGameMoviePlayer_execNativeTick_Parms NativeTick_Parms;
	NativeTick_Parms.DeltaTime = DeltaTime;

	pFnNativeTick->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNativeTick, &NativeTick_Parms, NULL );

	pFnNativeTick->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.UpdateTutorialImage
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  show                           ( CPF_Parm )
// int                            HeaderMsgId                    ( CPF_Parm )
// int                            ImageId                        ( CPF_Parm )
// int                            msgId                          ( CPF_Parm )

void UTgGameMoviePlayer::UpdateTutorialImage ( unsigned long show, int HeaderMsgId, int ImageId, int msgId )
{
	static UFunction* pFnUpdateTutorialImage = NULL;

	if ( ! pFnUpdateTutorialImage )
		pFnUpdateTutorialImage = (UFunction*) UObject::GObjObjects()->GetIndex( 147654 );

	UTgGameMoviePlayer_execUpdateTutorialImage_Parms UpdateTutorialImage_Parms;
	UpdateTutorialImage_Parms.show = show;
	UpdateTutorialImage_Parms.HeaderMsgId = HeaderMsgId;
	UpdateTutorialImage_Parms.ImageId = ImageId;
	UpdateTutorialImage_Parms.msgId = msgId;

	pFnUpdateTutorialImage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateTutorialImage, &UpdateTutorialImage_Parms, NULL );

	pFnUpdateTutorialImage->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.HandleEscapeKey
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::HandleEscapeKey ( )
{
	static UFunction* pFnHandleEscapeKey = NULL;

	if ( ! pFnHandleEscapeKey )
		pFnHandleEscapeKey = (UFunction*) UObject::GObjObjects()->GetIndex( 147653 );

	UTgGameMoviePlayer_execHandleEscapeKey_Parms HandleEscapeKey_Parms;

	pFnHandleEscapeKey->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHandleEscapeKey, &HandleEscapeKey_Parms, NULL );

	pFnHandleEscapeKey->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.PostInit
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::PostInit ( )
{
	static UFunction* pFnPostInit = NULL;

	if ( ! pFnPostInit )
		pFnPostInit = (UFunction*) UObject::GObjObjects()->GetIndex( 147652 );

	UTgGameMoviePlayer_execPostInit_Parms PostInit_Parms;

	pFnPostInit->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPostInit, &PostInit_Parms, NULL );

	pFnPostInit->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.UpdateQuestUI
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// int                            Id                             ( CPF_OptionalParm | CPF_Parm )
// int                            Count                          ( CPF_OptionalParm | CPF_Parm )
// int                            Goal                           ( CPF_OptionalParm | CPF_Parm )
// int                            msgId                          ( CPF_OptionalParm | CPF_Parm )

void UTgGameMoviePlayer::UpdateQuestUI ( int Id, int Count, int Goal, int msgId )
{
	static UFunction* pFnUpdateQuestUI = NULL;

	if ( ! pFnUpdateQuestUI )
		pFnUpdateQuestUI = (UFunction*) UObject::GObjObjects()->GetIndex( 147647 );

	UTgGameMoviePlayer_execUpdateQuestUI_Parms UpdateQuestUI_Parms;
	UpdateQuestUI_Parms.Id = Id;
	UpdateQuestUI_Parms.Count = Count;
	UpdateQuestUI_Parms.Goal = Goal;
	UpdateQuestUI_Parms.msgId = msgId;

	pFnUpdateQuestUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateQuestUI, &UpdateQuestUI_Parms, NULL );

	pFnUpdateQuestUI->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_allowSpaceBar
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// unsigned long                  bAllow                         ( CPF_Parm )

void UTgGameMoviePlayer::usc_allowSpaceBar ( unsigned long bAllow )
{
	static UFunction* pFnusc_allowSpaceBar = NULL;

	if ( ! pFnusc_allowSpaceBar )
		pFnusc_allowSpaceBar = (UFunction*) UObject::GObjObjects()->GetIndex( 147645 );

	UTgGameMoviePlayer_execusc_allowSpaceBar_Parms usc_allowSpaceBar_Parms;
	usc_allowSpaceBar_Parms.bAllow = bAllow;

	pFnusc_allowSpaceBar->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_allowSpaceBar, &usc_allowSpaceBar_Parms, NULL );

	pFnusc_allowSpaceBar->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_getPassiveMeterPath
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            BotID                          ( CPF_Parm )

struct FString UTgGameMoviePlayer::usc_getPassiveMeterPath ( int BotID )
{
	static UFunction* pFnusc_getPassiveMeterPath = NULL;

	if ( ! pFnusc_getPassiveMeterPath )
		pFnusc_getPassiveMeterPath = (UFunction*) UObject::GObjObjects()->GetIndex( 147642 );

	UTgGameMoviePlayer_execusc_getPassiveMeterPath_Parms usc_getPassiveMeterPath_Parms;
	usc_getPassiveMeterPath_Parms.BotID = BotID;

	pFnusc_getPassiveMeterPath->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_getPassiveMeterPath, &usc_getPassiveMeterPath_Parms, NULL );

	pFnusc_getPassiveMeterPath->FunctionFlags |= 0x400;

	return usc_getPassiveMeterPath_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.RunIntroMovie
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bRun                           ( CPF_Parm )

void UTgGameMoviePlayer::RunIntroMovie ( unsigned long bRun )
{
	static UFunction* pFnRunIntroMovie = NULL;

	if ( ! pFnRunIntroMovie )
		pFnRunIntroMovie = (UFunction*) UObject::GObjObjects()->GetIndex( 147640 );

	UTgGameMoviePlayer_execRunIntroMovie_Parms RunIntroMovie_Parms;
	RunIntroMovie_Parms.bRun = bRun;

	pFnRunIntroMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRunIntroMovie, &RunIntroMovie_Parms, NULL );

	pFnRunIntroMovie->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.InvokeRenderTargetReady
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::InvokeRenderTargetReady ( )
{
	static UFunction* pFnInvokeRenderTargetReady = NULL;

	if ( ! pFnInvokeRenderTargetReady )
		pFnInvokeRenderTargetReady = (UFunction*) UObject::GObjObjects()->GetIndex( 147639 );

	UTgGameMoviePlayer_execInvokeRenderTargetReady_Parms InvokeRenderTargetReady_Parms;

	pFnInvokeRenderTargetReady->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInvokeRenderTargetReady, &InvokeRenderTargetReady_Parms, NULL );

	pFnInvokeRenderTargetReady->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.SetRenderTargetCallback
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// class UGFxObject*              targetObj                      ( CPF_Parm )
// unsigned long                  addObj                         ( CPF_OptionalParm | CPF_Parm )

void UTgGameMoviePlayer::SetRenderTargetCallback ( class UGFxObject* targetObj, unsigned long addObj )
{
	static UFunction* pFnSetRenderTargetCallback = NULL;

	if ( ! pFnSetRenderTargetCallback )
		pFnSetRenderTargetCallback = (UFunction*) UObject::GObjObjects()->GetIndex( 147636 );

	UTgGameMoviePlayer_execSetRenderTargetCallback_Parms SetRenderTargetCallback_Parms;
	SetRenderTargetCallback_Parms.targetObj = targetObj;
	SetRenderTargetCallback_Parms.addObj = addObj;

	pFnSetRenderTargetCallback->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetRenderTargetCallback, &SetRenderTargetCallback_Parms, NULL );

	pFnSetRenderTargetCallback->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_autoConfigureSettings
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::usc_autoConfigureSettings ( )
{
	static UFunction* pFnusc_autoConfigureSettings = NULL;

	if ( ! pFnusc_autoConfigureSettings )
		pFnusc_autoConfigureSettings = (UFunction*) UObject::GObjObjects()->GetIndex( 147635 );

	UTgGameMoviePlayer_execusc_autoConfigureSettings_Parms usc_autoConfigureSettings_Parms;

	pFnusc_autoConfigureSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_autoConfigureSettings, &usc_autoConfigureSettings_Parms, NULL );

	pFnusc_autoConfigureSettings->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_goto_item
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nItemId                        ( CPF_Parm )
// unsigned long                  bUseAltRedirect                ( CPF_OptionalParm | CPF_Parm )

void UTgGameMoviePlayer::usc_goto_item ( int nItemId, unsigned long bUseAltRedirect )
{
	static UFunction* pFnusc_goto_item = NULL;

	if ( ! pFnusc_goto_item )
		pFnusc_goto_item = (UFunction*) UObject::GObjObjects()->GetIndex( 147632 );

	UTgGameMoviePlayer_execusc_goto_item_Parms usc_goto_item_Parms;
	usc_goto_item_Parms.nItemId = nItemId;
	usc_goto_item_Parms.bUseAltRedirect = bUseAltRedirect;

	pFnusc_goto_item->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_goto_item, &usc_goto_item_Parms, NULL );

	pFnusc_goto_item->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_send_chat
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nChannel                       ( CPF_Parm )
// struct FString                 msg                            ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Recipient                      ( CPF_Parm | CPF_NeedCtorLink )

bool UTgGameMoviePlayer::usc_send_chat ( int nChannel, struct FString msg, struct FString Recipient )
{
	static UFunction* pFnusc_send_chat = NULL;

	if ( ! pFnusc_send_chat )
		pFnusc_send_chat = (UFunction*) UObject::GObjObjects()->GetIndex( 147627 );

	UTgGameMoviePlayer_execusc_send_chat_Parms usc_send_chat_Parms;
	usc_send_chat_Parms.nChannel = nChannel;
	memcpy ( &usc_send_chat_Parms.msg, &msg, 0x10 );
	memcpy ( &usc_send_chat_Parms.Recipient, &Recipient, 0x10 );

	pFnusc_send_chat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_send_chat, &usc_send_chat_Parms, NULL );

	pFnusc_send_chat->FunctionFlags |= 0x400;

	return usc_send_chat_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_toggle_player_mute
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 sPlayerName                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sUnused                        ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// struct FString                 nPlayerId                      ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::usc_toggle_player_mute ( struct FString sPlayerName, struct FString sUnused, struct FString nPlayerId )
{
	static UFunction* pFnusc_toggle_player_mute = NULL;

	if ( ! pFnusc_toggle_player_mute )
		pFnusc_toggle_player_mute = (UFunction*) UObject::GObjObjects()->GetIndex( 147623 );

	UTgGameMoviePlayer_execusc_toggle_player_mute_Parms usc_toggle_player_mute_Parms;
	memcpy ( &usc_toggle_player_mute_Parms.sPlayerName, &sPlayerName, 0x10 );
	memcpy ( &usc_toggle_player_mute_Parms.sUnused, &sUnused, 0x10 );
	memcpy ( &usc_toggle_player_mute_Parms.nPlayerId, &nPlayerId, 0x10 );

	pFnusc_toggle_player_mute->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_toggle_player_mute, &usc_toggle_player_mute_Parms, NULL );

	pFnusc_toggle_player_mute->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_lobbyFeaturesShouldShow
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UTgGameMoviePlayer::usc_lobbyFeaturesShouldShow ( )
{
	static UFunction* pFnusc_lobbyFeaturesShouldShow = NULL;

	if ( ! pFnusc_lobbyFeaturesShouldShow )
		pFnusc_lobbyFeaturesShouldShow = (UFunction*) UObject::GObjObjects()->GetIndex( 147621 );

	UTgGameMoviePlayer_execusc_lobbyFeaturesShouldShow_Parms usc_lobbyFeaturesShouldShow_Parms;

	pFnusc_lobbyFeaturesShouldShow->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_lobbyFeaturesShouldShow, &usc_lobbyFeaturesShouldShow_Parms, NULL );

	pFnusc_lobbyFeaturesShouldShow->FunctionFlags |= 0x400;

	return usc_lobbyFeaturesShouldShow_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_isPlayingTutorial
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// unsigned long                  Toggle                         ( CPF_Parm )

void UTgGameMoviePlayer::usc_isPlayingTutorial ( unsigned long Toggle )
{
	static UFunction* pFnusc_isPlayingTutorial = NULL;

	if ( ! pFnusc_isPlayingTutorial )
		pFnusc_isPlayingTutorial = (UFunction*) UObject::GObjObjects()->GetIndex( 147619 );

	UTgGameMoviePlayer_execusc_isPlayingTutorial_Parms usc_isPlayingTutorial_Parms;
	usc_isPlayingTutorial_Parms.Toggle = Toggle;

	pFnusc_isPlayingTutorial->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_isPlayingTutorial, &usc_isPlayingTutorial_Parms, NULL );

	pFnusc_isPlayingTutorial->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_stopSoundCue
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 soundTheme                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SoundEventName                 ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::usc_stopSoundCue ( struct FString soundTheme, struct FString SoundEventName )
{
	static UFunction* pFnusc_stopSoundCue = NULL;

	if ( ! pFnusc_stopSoundCue )
		pFnusc_stopSoundCue = (UFunction*) UObject::GObjObjects()->GetIndex( 147616 );

	UTgGameMoviePlayer_execusc_stopSoundCue_Parms usc_stopSoundCue_Parms;
	memcpy ( &usc_stopSoundCue_Parms.soundTheme, &soundTheme, 0x10 );
	memcpy ( &usc_stopSoundCue_Parms.SoundEventName, &SoundEventName, 0x10 );

	pFnusc_stopSoundCue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_stopSoundCue, &usc_stopSoundCue_Parms, NULL );

	pFnusc_stopSoundCue->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_join_channel
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            Id                             ( CPF_Parm )

void UTgGameMoviePlayer::usc_join_channel ( int Id )
{
	static UFunction* pFnusc_join_channel = NULL;

	if ( ! pFnusc_join_channel )
		pFnusc_join_channel = (UFunction*) UObject::GObjObjects()->GetIndex( 147614 );

	UTgGameMoviePlayer_execusc_join_channel_Parms usc_join_channel_Parms;
	usc_join_channel_Parms.Id = Id;

	pFnusc_join_channel->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_join_channel, &usc_join_channel_Parms, NULL );

	pFnusc_join_channel->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_GetWinningTeamName
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UTgGameMoviePlayer::usc_GetWinningTeamName ( )
{
	static UFunction* pFnusc_GetWinningTeamName = NULL;

	if ( ! pFnusc_GetWinningTeamName )
		pFnusc_GetWinningTeamName = (UFunction*) UObject::GObjObjects()->GetIndex( 147612 );

	UTgGameMoviePlayer_execusc_GetWinningTeamName_Parms usc_GetWinningTeamName_Parms;

	pFnusc_GetWinningTeamName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_GetWinningTeamName, &usc_GetWinningTeamName_Parms, NULL );

	pFnusc_GetWinningTeamName->FunctionFlags |= 0x400;

	return usc_GetWinningTeamName_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_get_device_tooltip
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            nItemId                        ( CPF_Parm )
// int                            nRank                          ( CPF_Parm )

struct FString UTgGameMoviePlayer::usc_get_device_tooltip ( int nItemId, int nRank )
{
	static UFunction* pFnusc_get_device_tooltip = NULL;

	if ( ! pFnusc_get_device_tooltip )
		pFnusc_get_device_tooltip = (UFunction*) UObject::GObjObjects()->GetIndex( 147608 );

	UTgGameMoviePlayer_execusc_get_device_tooltip_Parms usc_get_device_tooltip_Parms;
	usc_get_device_tooltip_Parms.nItemId = nItemId;
	usc_get_device_tooltip_Parms.nRank = nRank;

	pFnusc_get_device_tooltip->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_get_device_tooltip, &usc_get_device_tooltip_Parms, NULL );

	pFnusc_get_device_tooltip->FunctionFlags |= 0x400;

	return usc_get_device_tooltip_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_force_purchase_current_item
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::usc_force_purchase_current_item ( )
{
	static UFunction* pFnusc_force_purchase_current_item = NULL;

	if ( ! pFnusc_force_purchase_current_item )
		pFnusc_force_purchase_current_item = (UFunction*) UObject::GObjObjects()->GetIndex( 147607 );

	UTgGameMoviePlayer_execusc_force_purchase_current_item_Parms usc_force_purchase_current_item_Parms;

	pFnusc_force_purchase_current_item->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_force_purchase_current_item, &usc_force_purchase_current_item_Parms, NULL );

	pFnusc_force_purchase_current_item->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_forward_feature2
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            pItemType                      ( CPF_Parm )
// struct FString                 pItemData                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 pItemData2                     ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::usc_forward_feature2 ( int pItemType, struct FString pItemData, struct FString pItemData2 )
{
	static UFunction* pFnusc_forward_feature2 = NULL;

	if ( ! pFnusc_forward_feature2 )
		pFnusc_forward_feature2 = (UFunction*) UObject::GObjObjects()->GetIndex( 147603 );

	UTgGameMoviePlayer_execusc_forward_feature2_Parms usc_forward_feature2_Parms;
	usc_forward_feature2_Parms.pItemType = pItemType;
	memcpy ( &usc_forward_feature2_Parms.pItemData, &pItemData, 0x10 );
	memcpy ( &usc_forward_feature2_Parms.pItemData2, &pItemData2, 0x10 );

	pFnusc_forward_feature2->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_forward_feature2, &usc_forward_feature2_Parms, NULL );

	pFnusc_forward_feature2->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_forward_feature
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            pItemType                      ( CPF_Parm )
// struct FString                 pItemData                      ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::usc_forward_feature ( int pItemType, struct FString pItemData )
{
	static UFunction* pFnusc_forward_feature = NULL;

	if ( ! pFnusc_forward_feature )
		pFnusc_forward_feature = (UFunction*) UObject::GObjObjects()->GetIndex( 147600 );

	UTgGameMoviePlayer_execusc_forward_feature_Parms usc_forward_feature_Parms;
	usc_forward_feature_Parms.pItemType = pItemType;
	memcpy ( &usc_forward_feature_Parms.pItemData, &pItemData, 0x10 );

	pFnusc_forward_feature->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_forward_feature, &usc_forward_feature_Parms, NULL );

	pFnusc_forward_feature->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_class_loading_resume
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::usc_class_loading_resume ( )
{
	static UFunction* pFnusc_class_loading_resume = NULL;

	if ( ! pFnusc_class_loading_resume )
		pFnusc_class_loading_resume = (UFunction*) UObject::GObjObjects()->GetIndex( 147599 );

	UTgGameMoviePlayer_execusc_class_loading_resume_Parms usc_class_loading_resume_Parms;

	pFnusc_class_loading_resume->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_class_loading_resume, &usc_class_loading_resume_Parms, NULL );

	pFnusc_class_loading_resume->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_class_loading_suspend
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::usc_class_loading_suspend ( )
{
	static UFunction* pFnusc_class_loading_suspend = NULL;

	if ( ! pFnusc_class_loading_suspend )
		pFnusc_class_loading_suspend = (UFunction*) UObject::GObjObjects()->GetIndex( 147598 );

	UTgGameMoviePlayer_execusc_class_loading_suspend_Parms usc_class_loading_suspend_Parms;

	pFnusc_class_loading_suspend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_class_loading_suspend, &usc_class_loading_suspend_Parms, NULL );

	pFnusc_class_loading_suspend->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_clearReferral
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 sExtId                         ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::usc_clearReferral ( struct FString sExtId )
{
	static UFunction* pFnusc_clearReferral = NULL;

	if ( ! pFnusc_clearReferral )
		pFnusc_clearReferral = (UFunction*) UObject::GObjObjects()->GetIndex( 147596 );

	UTgGameMoviePlayer_execusc_clearReferral_Parms usc_clearReferral_Parms;
	memcpy ( &usc_clearReferral_Parms.sExtId, &sExtId, 0x10 );

	pFnusc_clearReferral->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_clearReferral, &usc_clearReferral_Parms, NULL );

	pFnusc_clearReferral->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_ListenNextVivoxBtn
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::usc_ListenNextVivoxBtn ( )
{
	static UFunction* pFnusc_ListenNextVivoxBtn = NULL;

	if ( ! pFnusc_ListenNextVivoxBtn )
		pFnusc_ListenNextVivoxBtn = (UFunction*) UObject::GObjObjects()->GetIndex( 147595 );

	UTgGameMoviePlayer_execusc_ListenNextVivoxBtn_Parms usc_ListenNextVivoxBtn_Parms;

	pFnusc_ListenNextVivoxBtn->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_ListenNextVivoxBtn, &usc_ListenNextVivoxBtn_Parms, NULL );

	pFnusc_ListenNextVivoxBtn->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_GetLocalPlayerId
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UTgGameMoviePlayer::usc_GetLocalPlayerId ( )
{
	static UFunction* pFnusc_GetLocalPlayerId = NULL;

	if ( ! pFnusc_GetLocalPlayerId )
		pFnusc_GetLocalPlayerId = (UFunction*) UObject::GObjObjects()->GetIndex( 147593 );

	UTgGameMoviePlayer_execusc_GetLocalPlayerId_Parms usc_GetLocalPlayerId_Parms;

	pFnusc_GetLocalPlayerId->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_GetLocalPlayerId, &usc_GetLocalPlayerId_Parms, NULL );

	pFnusc_GetLocalPlayerId->FunctionFlags |= 0x400;

	return usc_GetLocalPlayerId_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_request_account_info
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nType                          ( CPF_Parm )

void UTgGameMoviePlayer::usc_request_account_info ( int nType )
{
	static UFunction* pFnusc_request_account_info = NULL;

	if ( ! pFnusc_request_account_info )
		pFnusc_request_account_info = (UFunction*) UObject::GObjObjects()->GetIndex( 147591 );

	UTgGameMoviePlayer_execusc_request_account_info_Parms usc_request_account_info_Parms;
	usc_request_account_info_Parms.nType = nType;

	pFnusc_request_account_info->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_request_account_info, &usc_request_account_info_Parms, NULL );

	pFnusc_request_account_info->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.OnHUDStateChange
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgEventDataItem*        pEvent                         ( CPF_Parm )

void UTgGameMoviePlayer::OnHUDStateChange ( class UTgEventDataItem* pEvent )
{
	static UFunction* pFnOnHUDStateChange = NULL;

	if ( ! pFnOnHUDStateChange )
		pFnOnHUDStateChange = (UFunction*) UObject::GObjObjects()->GetIndex( 147589 );

	UTgGameMoviePlayer_execOnHUDStateChange_Parms OnHUDStateChange_Parms;
	OnHUDStateChange_Parms.pEvent = pEvent;

	pFnOnHUDStateChange->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnHUDStateChange, &OnHUDStateChange_Parms, NULL );

	pFnOnHUDStateChange->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.OnGameUIEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UTgEventDataItem*        pEvent                         ( CPF_Parm )

void UTgGameMoviePlayer::OnGameUIEvent ( class UTgEventDataItem* pEvent )
{
	static UFunction* pFnOnGameUIEvent = NULL;

	if ( ! pFnOnGameUIEvent )
		pFnOnGameUIEvent = (UFunction*) UObject::GObjObjects()->GetIndex( 147587 );

	UTgGameMoviePlayer_execOnGameUIEvent_Parms OnGameUIEvent_Parms;
	OnGameUIEvent_Parms.pEvent = pEvent;

	pFnOnGameUIEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnGameUIEvent, &OnGameUIEvent_Parms, NULL );

	pFnOnGameUIEvent->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.ProcessUIEvents
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::ProcessUIEvents ( )
{
	static UFunction* pFnProcessUIEvents = NULL;

	if ( ! pFnProcessUIEvents )
		pFnProcessUIEvents = (UFunction*) UObject::GObjObjects()->GetIndex( 147586 );

	UTgGameMoviePlayer_execProcessUIEvents_Parms ProcessUIEvents_Parms;

	pFnProcessUIEvents->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnProcessUIEvents, &ProcessUIEvents_Parms, NULL );

	pFnProcessUIEvents->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.SetRenderTargetEnabled
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bEnabled                       ( CPF_Parm )
// int                            surfaceId                      ( CPF_Parm )
// int                            X                              ( CPF_Parm )
// int                            Y                              ( CPF_Parm )
// float                          widthReal                      ( CPF_Parm )
// float                          heightReal                     ( CPF_Parm )
// float                          Width                          ( CPF_Parm )
// float                          Height                         ( CPF_Parm )

bool UTgGameMoviePlayer::SetRenderTargetEnabled ( unsigned long bEnabled, int surfaceId, int X, int Y, float widthReal, float heightReal, float Width, float Height )
{
	static UFunction* pFnSetRenderTargetEnabled = NULL;

	if ( ! pFnSetRenderTargetEnabled )
		pFnSetRenderTargetEnabled = (UFunction*) UObject::GObjObjects()->GetIndex( 147576 );

	UTgGameMoviePlayer_execSetRenderTargetEnabled_Parms SetRenderTargetEnabled_Parms;
	SetRenderTargetEnabled_Parms.bEnabled = bEnabled;
	SetRenderTargetEnabled_Parms.surfaceId = surfaceId;
	SetRenderTargetEnabled_Parms.X = X;
	SetRenderTargetEnabled_Parms.Y = Y;
	SetRenderTargetEnabled_Parms.widthReal = widthReal;
	SetRenderTargetEnabled_Parms.heightReal = heightReal;
	SetRenderTargetEnabled_Parms.Width = Width;
	SetRenderTargetEnabled_Parms.Height = Height;

	pFnSetRenderTargetEnabled->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetRenderTargetEnabled, &SetRenderTargetEnabled_Parms, NULL );

	pFnSetRenderTargetEnabled->FunctionFlags |= 0x400;

	return SetRenderTargetEnabled_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.GetClanData
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UTgDataGroup_Clan*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UTgDataGroup_Clan* UTgGameMoviePlayer::GetClanData ( )
{
	static UFunction* pFnGetClanData = NULL;

	if ( ! pFnGetClanData )
		pFnGetClanData = (UFunction*) UObject::GObjObjects()->GetIndex( 147574 );

	UTgGameMoviePlayer_execGetClanData_Parms GetClanData_Parms;

	pFnGetClanData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetClanData, &GetClanData_Parms, NULL );

	pFnGetClanData->FunctionFlags |= 0x400;

	return GetClanData_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.SetLoginReady
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// unsigned long                  fromIntro                      ( CPF_OptionalParm | CPF_Parm )

void UTgGameMoviePlayer::SetLoginReady ( unsigned long fromIntro )
{
	static UFunction* pFnSetLoginReady = NULL;

	if ( ! pFnSetLoginReady )
		pFnSetLoginReady = (UFunction*) UObject::GObjObjects()->GetIndex( 147572 );

	UTgGameMoviePlayer_execSetLoginReady_Parms SetLoginReady_Parms;
	SetLoginReady_Parms.fromIntro = fromIntro;

	pFnSetLoginReady->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetLoginReady, &SetLoginReady_Parms, NULL );

	pFnSetLoginReady->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.ShowLoginUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::ShowLoginUI ( )
{
	static UFunction* pFnShowLoginUI = NULL;

	if ( ! pFnShowLoginUI )
		pFnShowLoginUI = (UFunction*) UObject::GObjObjects()->GetIndex( 147571 );

	UTgGameMoviePlayer_execShowLoginUI_Parms ShowLoginUI_Parms;

	pFnShowLoginUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowLoginUI, &ShowLoginUI_Parms, NULL );

	pFnShowLoginUI->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.ShowNormalUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::ShowNormalUI ( )
{
	static UFunction* pFnShowNormalUI = NULL;

	if ( ! pFnShowNormalUI )
		pFnShowNormalUI = (UFunction*) UObject::GObjObjects()->GetIndex( 147570 );

	UTgGameMoviePlayer_execShowNormalUI_Parms ShowNormalUI_Parms;

	pFnShowNormalUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowNormalUI, &ShowNormalUI_Parms, NULL );

	pFnShowNormalUI->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.SetHUDVisiblity
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::SetHUDVisiblity ( )
{
	static UFunction* pFnSetHUDVisiblity = NULL;

	if ( ! pFnSetHUDVisiblity )
		pFnSetHUDVisiblity = (UFunction*) UObject::GObjObjects()->GetIndex( 147569 );

	UTgGameMoviePlayer_execSetHUDVisiblity_Parms SetHUDVisiblity_Parms;

	pFnSetHUDVisiblity->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetHUDVisiblity, &SetHUDVisiblity_Parms, NULL );

	pFnSetHUDVisiblity->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.USC_ShowLeaderboard
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 sName                          ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// int                            nValue                         ( CPF_OptionalParm | CPF_Parm )
// int                            nOption                        ( CPF_OptionalParm | CPF_Parm )

void UTgGameMoviePlayer::USC_ShowLeaderboard ( struct FString sName, int nValue, int nOption )
{
	static UFunction* pFnUSC_ShowLeaderboard = NULL;

	if ( ! pFnUSC_ShowLeaderboard )
		pFnUSC_ShowLeaderboard = (UFunction*) UObject::GObjObjects()->GetIndex( 147565 );

	UTgGameMoviePlayer_execUSC_ShowLeaderboard_Parms USC_ShowLeaderboard_Parms;
	memcpy ( &USC_ShowLeaderboard_Parms.sName, &sName, 0x10 );
	USC_ShowLeaderboard_Parms.nValue = nValue;
	USC_ShowLeaderboard_Parms.nOption = nOption;

	pFnUSC_ShowLeaderboard->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_ShowLeaderboard, &USC_ShowLeaderboard_Parms, NULL );

	pFnUSC_ShowLeaderboard->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_Scene_Manager_Scene_Unloaded
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sSceneName                     ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::usc_Scene_Manager_Scene_Unloaded ( struct FString sSceneName )
{
	static UFunction* pFnusc_Scene_Manager_Scene_Unloaded = NULL;

	if ( ! pFnusc_Scene_Manager_Scene_Unloaded )
		pFnusc_Scene_Manager_Scene_Unloaded = (UFunction*) UObject::GObjObjects()->GetIndex( 147563 );

	UTgGameMoviePlayer_execusc_Scene_Manager_Scene_Unloaded_Parms usc_Scene_Manager_Scene_Unloaded_Parms;
	memcpy ( &usc_Scene_Manager_Scene_Unloaded_Parms.sSceneName, &sSceneName, 0x10 );

	pFnusc_Scene_Manager_Scene_Unloaded->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_Scene_Manager_Scene_Unloaded, &usc_Scene_Manager_Scene_Unloaded_Parms, NULL );

	pFnusc_Scene_Manager_Scene_Unloaded->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_Scene_Manager_Scene_Loaded
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sSceneName                     ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::usc_Scene_Manager_Scene_Loaded ( struct FString sSceneName )
{
	static UFunction* pFnusc_Scene_Manager_Scene_Loaded = NULL;

	if ( ! pFnusc_Scene_Manager_Scene_Loaded )
		pFnusc_Scene_Manager_Scene_Loaded = (UFunction*) UObject::GObjObjects()->GetIndex( 147561 );

	UTgGameMoviePlayer_execusc_Scene_Manager_Scene_Loaded_Parms usc_Scene_Manager_Scene_Loaded_Parms;
	memcpy ( &usc_Scene_Manager_Scene_Loaded_Parms.sSceneName, &sSceneName, 0x10 );

	pFnusc_Scene_Manager_Scene_Loaded->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_Scene_Manager_Scene_Loaded, &usc_Scene_Manager_Scene_Loaded_Parms, NULL );

	pFnusc_Scene_Manager_Scene_Loaded->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_getItemData
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ItemId                         ( CPF_Parm )
// int                            quantityCount                  ( CPF_OptionalParm | CPF_Parm )
// int                            vendorId                       ( CPF_OptionalParm | CPF_Parm )

class UGFxObject* UTgGameMoviePlayer::usc_getItemData ( int ItemId, int quantityCount, int vendorId )
{
	static UFunction* pFnusc_getItemData = NULL;

	if ( ! pFnusc_getItemData )
		pFnusc_getItemData = (UFunction*) UObject::GObjObjects()->GetIndex( 147556 );

	UTgGameMoviePlayer_execusc_getItemData_Parms usc_getItemData_Parms;
	usc_getItemData_Parms.ItemId = ItemId;
	usc_getItemData_Parms.quantityCount = quantityCount;
	usc_getItemData_Parms.vendorId = vendorId;

	pFnusc_getItemData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_getItemData, &usc_getItemData_Parms, NULL );

	pFnusc_getItemData->FunctionFlags |= 0x400;

	return usc_getItemData_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_resize_browser
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            surfaceId                      ( CPF_Parm )
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )
// float                          Width                          ( CPF_Parm )
// float                          Height                         ( CPF_Parm )
// float                          widthReal                      ( CPF_Parm )
// float                          heightReal                     ( CPF_Parm )

bool UTgGameMoviePlayer::usc_resize_browser ( int surfaceId, float X, float Y, float Width, float Height, float widthReal, float heightReal )
{
	static UFunction* pFnusc_resize_browser = NULL;

	if ( ! pFnusc_resize_browser )
		pFnusc_resize_browser = (UFunction*) UObject::GObjObjects()->GetIndex( 147547 );

	UTgGameMoviePlayer_execusc_resize_browser_Parms usc_resize_browser_Parms;
	usc_resize_browser_Parms.surfaceId = surfaceId;
	usc_resize_browser_Parms.X = X;
	usc_resize_browser_Parms.Y = Y;
	usc_resize_browser_Parms.Width = Width;
	usc_resize_browser_Parms.Height = Height;
	usc_resize_browser_Parms.widthReal = widthReal;
	usc_resize_browser_Parms.heightReal = heightReal;

	pFnusc_resize_browser->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_resize_browser, &usc_resize_browser_Parms, NULL );

	pFnusc_resize_browser->FunctionFlags |= 0x400;

	return usc_resize_browser_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_enable_browser_input
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// unsigned long                  bEnable                        ( CPF_Parm )

void UTgGameMoviePlayer::usc_enable_browser_input ( unsigned long bEnable )
{
	static UFunction* pFnusc_enable_browser_input = NULL;

	if ( ! pFnusc_enable_browser_input )
		pFnusc_enable_browser_input = (UFunction*) UObject::GObjObjects()->GetIndex( 147545 );

	UTgGameMoviePlayer_execusc_enable_browser_input_Parms usc_enable_browser_input_Parms;
	usc_enable_browser_input_Parms.bEnable = bEnable;

	pFnusc_enable_browser_input->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_enable_browser_input, &usc_enable_browser_input_Parms, NULL );

	pFnusc_enable_browser_input->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.UnloadHudSection
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 Section                        ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::UnloadHudSection ( struct FString Section )
{
	static UFunction* pFnUnloadHudSection = NULL;

	if ( ! pFnUnloadHudSection )
		pFnUnloadHudSection = (UFunction*) UObject::GObjObjects()->GetIndex( 147543 );

	UTgGameMoviePlayer_execUnloadHudSection_Parms UnloadHudSection_Parms;
	memcpy ( &UnloadHudSection_Parms.Section, &Section, 0x10 );

	pFnUnloadHudSection->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnloadHudSection, &UnloadHudSection_Parms, NULL );

	pFnUnloadHudSection->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_rejectNotification
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nNotificationType              ( CPF_Parm )
// int                            nId                            ( CPF_Parm )

void UTgGameMoviePlayer::usc_rejectNotification ( int nNotificationType, int nId )
{
	static UFunction* pFnusc_rejectNotification = NULL;

	if ( ! pFnusc_rejectNotification )
		pFnusc_rejectNotification = (UFunction*) UObject::GObjObjects()->GetIndex( 147540 );

	UTgGameMoviePlayer_execusc_rejectNotification_Parms usc_rejectNotification_Parms;
	usc_rejectNotification_Parms.nNotificationType = nNotificationType;
	usc_rejectNotification_Parms.nId = nId;

	pFnusc_rejectNotification->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_rejectNotification, &usc_rejectNotification_Parms, NULL );

	pFnusc_rejectNotification->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_acceptNotification
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nNotificationType              ( CPF_Parm )
// int                            nId                            ( CPF_Parm )

void UTgGameMoviePlayer::usc_acceptNotification ( int nNotificationType, int nId )
{
	static UFunction* pFnusc_acceptNotification = NULL;

	if ( ! pFnusc_acceptNotification )
		pFnusc_acceptNotification = (UFunction*) UObject::GObjObjects()->GetIndex( 147537 );

	UTgGameMoviePlayer_execusc_acceptNotification_Parms usc_acceptNotification_Parms;
	usc_acceptNotification_Parms.nNotificationType = nNotificationType;
	usc_acceptNotification_Parms.nId = nId;

	pFnusc_acceptNotification->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_acceptNotification, &usc_acceptNotification_Parms, NULL );

	pFnusc_acceptNotification->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_test_voice_pack
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nVoicePackId                   ( CPF_Parm )
// int                            nSkinId                        ( CPF_Parm )

void UTgGameMoviePlayer::usc_test_voice_pack ( int nVoicePackId, int nSkinId )
{
	static UFunction* pFnusc_test_voice_pack = NULL;

	if ( ! pFnusc_test_voice_pack )
		pFnusc_test_voice_pack = (UFunction*) UObject::GObjObjects()->GetIndex( 147534 );

	UTgGameMoviePlayer_execusc_test_voice_pack_Parms usc_test_voice_pack_Parms;
	usc_test_voice_pack_Parms.nVoicePackId = nVoicePackId;
	usc_test_voice_pack_Parms.nSkinId = nSkinId;

	pFnusc_test_voice_pack->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_test_voice_pack, &usc_test_voice_pack_Parms, NULL );

	pFnusc_test_voice_pack->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_show_skin
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nSkinId                        ( CPF_Parm )

void UTgGameMoviePlayer::usc_show_skin ( int nSkinId )
{
	static UFunction* pFnusc_show_skin = NULL;

	if ( ! pFnusc_show_skin )
		pFnusc_show_skin = (UFunction*) UObject::GObjObjects()->GetIndex( 147532 );

	UTgGameMoviePlayer_execusc_show_skin_Parms usc_show_skin_Parms;
	usc_show_skin_Parms.nSkinId = nSkinId;

	pFnusc_show_skin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_show_skin, &usc_show_skin_Parms, NULL );

	pFnusc_show_skin->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_request_treasure_roll
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nItemId                        ( CPF_Parm )
// int                            CurrencyType                   ( CPF_OptionalParm | CPF_Parm )

void UTgGameMoviePlayer::usc_request_treasure_roll ( int nItemId, int CurrencyType )
{
	static UFunction* pFnusc_request_treasure_roll = NULL;

	if ( ! pFnusc_request_treasure_roll )
		pFnusc_request_treasure_roll = (UFunction*) UObject::GObjObjects()->GetIndex( 147529 );

	UTgGameMoviePlayer_execusc_request_treasure_roll_Parms usc_request_treasure_roll_Parms;
	usc_request_treasure_roll_Parms.nItemId = nItemId;
	usc_request_treasure_roll_Parms.CurrencyType = CurrencyType;

	pFnusc_request_treasure_roll->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_request_treasure_roll, &usc_request_treasure_roll_Parms, NULL );

	pFnusc_request_treasure_roll->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.is_item_owned
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ItemId                         ( CPF_Parm )

bool UTgGameMoviePlayer::is_item_owned ( int ItemId )
{
	static UFunction* pFnis_item_owned = NULL;

	if ( ! pFnis_item_owned )
		pFnis_item_owned = (UFunction*) UObject::GObjObjects()->GetIndex( 147526 );

	UTgGameMoviePlayer_execis_item_owned_Parms is_item_owned_Parms;
	is_item_owned_Parms.ItemId = ItemId;

	pFnis_item_owned->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnis_item_owned, &is_item_owned_Parms, NULL );

	pFnis_item_owned->FunctionFlags |= 0x400;

	return is_item_owned_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_is_item_owned
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 ItemId                         ( CPF_Parm | CPF_NeedCtorLink )

bool UTgGameMoviePlayer::usc_is_item_owned ( struct FString ItemId )
{
	static UFunction* pFnusc_is_item_owned = NULL;

	if ( ! pFnusc_is_item_owned )
		pFnusc_is_item_owned = (UFunction*) UObject::GObjObjects()->GetIndex( 147523 );

	UTgGameMoviePlayer_execusc_is_item_owned_Parms usc_is_item_owned_Parms;
	memcpy ( &usc_is_item_owned_Parms.ItemId, &ItemId, 0x10 );

	pFnusc_is_item_owned->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_is_item_owned, &usc_is_item_owned_Parms, NULL );

	pFnusc_is_item_owned->FunctionFlags |= 0x400;

	return usc_is_item_owned_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_unregister_mouse_region
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 Key                            ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::usc_unregister_mouse_region ( struct FString Key )
{
	static UFunction* pFnusc_unregister_mouse_region = NULL;

	if ( ! pFnusc_unregister_mouse_region )
		pFnusc_unregister_mouse_region = (UFunction*) UObject::GObjObjects()->GetIndex( 147521 );

	UTgGameMoviePlayer_execusc_unregister_mouse_region_Parms usc_unregister_mouse_region_Parms;
	memcpy ( &usc_unregister_mouse_region_Parms.Key, &Key, 0x10 );

	pFnusc_unregister_mouse_region->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_unregister_mouse_region, &usc_unregister_mouse_region_Parms, NULL );

	pFnusc_unregister_mouse_region->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_register_mouse_region
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 Key                            ( CPF_Parm | CPF_NeedCtorLink )
// int                            X                              ( CPF_Parm )
// int                            Y                              ( CPF_Parm )
// int                            Width                          ( CPF_Parm )
// int                            Height                         ( CPF_Parm )

void UTgGameMoviePlayer::usc_register_mouse_region ( struct FString Key, int X, int Y, int Width, int Height )
{
	static UFunction* pFnusc_register_mouse_region = NULL;

	if ( ! pFnusc_register_mouse_region )
		pFnusc_register_mouse_region = (UFunction*) UObject::GObjObjects()->GetIndex( 147515 );

	UTgGameMoviePlayer_execusc_register_mouse_region_Parms usc_register_mouse_region_Parms;
	memcpy ( &usc_register_mouse_region_Parms.Key, &Key, 0x10 );
	usc_register_mouse_region_Parms.X = X;
	usc_register_mouse_region_Parms.Y = Y;
	usc_register_mouse_region_Parms.Width = Width;
	usc_register_mouse_region_Parms.Height = Height;

	pFnusc_register_mouse_region->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_register_mouse_region, &usc_register_mouse_region_Parms, NULL );

	pFnusc_register_mouse_region->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_is_in_game
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UTgGameMoviePlayer::usc_is_in_game ( )
{
	static UFunction* pFnusc_is_in_game = NULL;

	if ( ! pFnusc_is_in_game )
		pFnusc_is_in_game = (UFunction*) UObject::GObjObjects()->GetIndex( 147513 );

	UTgGameMoviePlayer_execusc_is_in_game_Parms usc_is_in_game_Parms;

	pFnusc_is_in_game->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_is_in_game, &usc_is_in_game_Parms, NULL );

	pFnusc_is_in_game->FunctionFlags |= 0x400;

	return usc_is_in_game_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.EndLobbyPlayback
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::EndLobbyPlayback ( )
{
	static UFunction* pFnEndLobbyPlayback = NULL;

	if ( ! pFnEndLobbyPlayback )
		pFnEndLobbyPlayback = (UFunction*) UObject::GObjObjects()->GetIndex( 147512 );

	UTgGameMoviePlayer_execEndLobbyPlayback_Parms EndLobbyPlayback_Parms;

	pFnEndLobbyPlayback->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEndLobbyPlayback, &EndLobbyPlayback_Parms, NULL );

	pFnEndLobbyPlayback->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.CancelPlayback
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::CancelPlayback ( )
{
	static UFunction* pFnCancelPlayback = NULL;

	if ( ! pFnCancelPlayback )
		pFnCancelPlayback = (UFunction*) UObject::GObjObjects()->GetIndex( 147511 );

	UTgGameMoviePlayer_execCancelPlayback_Parms CancelPlayback_Parms;

	pFnCancelPlayback->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCancelPlayback, &CancelPlayback_Parms, NULL );

	pFnCancelPlayback->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.OnDemoReady
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::OnDemoReady ( )
{
	static UFunction* pFnOnDemoReady = NULL;

	if ( ! pFnOnDemoReady )
		pFnOnDemoReady = (UFunction*) UObject::GObjObjects()->GetIndex( 147510 );

	UTgGameMoviePlayer_execOnDemoReady_Parms OnDemoReady_Parms;

	pFnOnDemoReady->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnDemoReady, &OnDemoReady_Parms, NULL );

	pFnOnDemoReady->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_match_can_purchase_random_class
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nQueueId                       ( CPF_Parm )

bool UTgGameMoviePlayer::usc_match_can_purchase_random_class ( int nQueueId )
{
	static UFunction* pFnusc_match_can_purchase_random_class = NULL;

	if ( ! pFnusc_match_can_purchase_random_class )
		pFnusc_match_can_purchase_random_class = (UFunction*) UObject::GObjObjects()->GetIndex( 147507 );

	UTgGameMoviePlayer_execusc_match_can_purchase_random_class_Parms usc_match_can_purchase_random_class_Parms;
	usc_match_can_purchase_random_class_Parms.nQueueId = nQueueId;

	pFnusc_match_can_purchase_random_class->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_match_can_purchase_random_class, &usc_match_can_purchase_random_class_Parms, NULL );

	pFnusc_match_can_purchase_random_class->FunctionFlags |= 0x400;

	return usc_match_can_purchase_random_class_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_viewStatsOnline
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 sInstanceId                    ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::usc_viewStatsOnline ( struct FString sInstanceId )
{
	static UFunction* pFnusc_viewStatsOnline = NULL;

	if ( ! pFnusc_viewStatsOnline )
		pFnusc_viewStatsOnline = (UFunction*) UObject::GObjObjects()->GetIndex( 147505 );

	UTgGameMoviePlayer_execusc_viewStatsOnline_Parms usc_viewStatsOnline_Parms;
	memcpy ( &usc_viewStatsOnline_Parms.sInstanceId, &sInstanceId, 0x10 );

	pFnusc_viewStatsOnline->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_viewStatsOnline, &usc_viewStatsOnline_Parms, NULL );

	pFnusc_viewStatsOnline->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_close_eom_lobby
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nNavigationTarget              ( CPF_OptionalParm | CPF_Parm )

void UTgGameMoviePlayer::usc_close_eom_lobby ( int nNavigationTarget )
{
	static UFunction* pFnusc_close_eom_lobby = NULL;

	if ( ! pFnusc_close_eom_lobby )
		pFnusc_close_eom_lobby = (UFunction*) UObject::GObjObjects()->GetIndex( 147503 );

	UTgGameMoviePlayer_execusc_close_eom_lobby_Parms usc_close_eom_lobby_Parms;
	usc_close_eom_lobby_Parms.nNavigationTarget = nNavigationTarget;

	pFnusc_close_eom_lobby->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_close_eom_lobby, &usc_close_eom_lobby_Parms, NULL );

	pFnusc_close_eom_lobby->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_can_play_again
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UTgGameMoviePlayer::usc_can_play_again ( )
{
	static UFunction* pFnusc_can_play_again = NULL;

	if ( ! pFnusc_can_play_again )
		pFnusc_can_play_again = (UFunction*) UObject::GObjObjects()->GetIndex( 147501 );

	UTgGameMoviePlayer_execusc_can_play_again_Parms usc_can_play_again_Parms;

	pFnusc_can_play_again->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_can_play_again, &usc_can_play_again_Parms, NULL );

	pFnusc_can_play_again->FunctionFlags |= 0x400;

	return usc_can_play_again_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_match_choose_skin
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nSkinId                        ( CPF_Parm )

void UTgGameMoviePlayer::usc_match_choose_skin ( int nSkinId )
{
	static UFunction* pFnusc_match_choose_skin = NULL;

	if ( ! pFnusc_match_choose_skin )
		pFnusc_match_choose_skin = (UFunction*) UObject::GObjObjects()->GetIndex( 147499 );

	UTgGameMoviePlayer_execusc_match_choose_skin_Parms usc_match_choose_skin_Parms;
	usc_match_choose_skin_Parms.nSkinId = nSkinId;

	pFnusc_match_choose_skin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_match_choose_skin, &usc_match_choose_skin_Parms, NULL );

	pFnusc_match_choose_skin->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_match_choose_class
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nClassId                       ( CPF_Parm )

void UTgGameMoviePlayer::usc_match_choose_class ( int nClassId )
{
	static UFunction* pFnusc_match_choose_class = NULL;

	if ( ! pFnusc_match_choose_class )
		pFnusc_match_choose_class = (UFunction*) UObject::GObjObjects()->GetIndex( 147497 );

	UTgGameMoviePlayer_execusc_match_choose_class_Parms usc_match_choose_class_Parms;
	usc_match_choose_class_Parms.nClassId = nClassId;

	pFnusc_match_choose_class->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_match_choose_class, &usc_match_choose_class_Parms, NULL );

	pFnusc_match_choose_class->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.USC_SelectedPopup
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nActionId                      ( CPF_Parm )
// struct FString                 sInputValue                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sSecondaryInputValue           ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::USC_SelectedPopup ( int nActionId, struct FString sInputValue, struct FString sSecondaryInputValue )
{
	static UFunction* pFnUSC_SelectedPopup = NULL;

	if ( ! pFnUSC_SelectedPopup )
		pFnUSC_SelectedPopup = (UFunction*) UObject::GObjObjects()->GetIndex( 147493 );

	UTgGameMoviePlayer_execUSC_SelectedPopup_Parms USC_SelectedPopup_Parms;
	USC_SelectedPopup_Parms.nActionId = nActionId;
	memcpy ( &USC_SelectedPopup_Parms.sInputValue, &sInputValue, 0x10 );
	memcpy ( &USC_SelectedPopup_Parms.sSecondaryInputValue, &sSecondaryInputValue, 0x10 );

	pFnUSC_SelectedPopup->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_SelectedPopup, &USC_SelectedPopup_Parms, NULL );

	pFnUSC_SelectedPopup->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.FakeItemToast
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nItemId                        ( CPF_Parm )

void UTgGameMoviePlayer::FakeItemToast ( int nItemId )
{
	static UFunction* pFnFakeItemToast = NULL;

	if ( ! pFnFakeItemToast )
		pFnFakeItemToast = (UFunction*) UObject::GObjObjects()->GetIndex( 147491 );

	UTgGameMoviePlayer_execFakeItemToast_Parms FakeItemToast_Parms;
	FakeItemToast_Parms.nItemId = nItemId;

	pFnFakeItemToast->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFakeItemToast, &FakeItemToast_Parms, NULL );

	pFnFakeItemToast->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.CloseChatTab
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// int                            nChannel                       ( CPF_Parm )
// struct FString                 sSender                        ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::CloseChatTab ( int nChannel, struct FString sSender )
{
	static UFunction* pFnCloseChatTab = NULL;

	if ( ! pFnCloseChatTab )
		pFnCloseChatTab = (UFunction*) UObject::GObjObjects()->GetIndex( 147488 );

	UTgGameMoviePlayer_execCloseChatTab_Parms CloseChatTab_Parms;
	CloseChatTab_Parms.nChannel = nChannel;
	memcpy ( &CloseChatTab_Parms.sSender, &sSender, 0x10 );

	pFnCloseChatTab->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCloseChatTab, &CloseChatTab_Parms, NULL );

	pFnCloseChatTab->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.OpenChatTab
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// int                            nChannel                       ( CPF_Parm )
// unsigned long                  bForce                         ( CPF_OptionalParm | CPF_Parm )

void UTgGameMoviePlayer::OpenChatTab ( int nChannel, unsigned long bForce )
{
	static UFunction* pFnOpenChatTab = NULL;

	if ( ! pFnOpenChatTab )
		pFnOpenChatTab = (UFunction*) UObject::GObjObjects()->GetIndex( 147485 );

	UTgGameMoviePlayer_execOpenChatTab_Parms OpenChatTab_Parms;
	OpenChatTab_Parms.nChannel = nChannel;
	OpenChatTab_Parms.bForce = bForce;

	pFnOpenChatTab->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenChatTab, &OpenChatTab_Parms, NULL );

	pFnOpenChatTab->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.ShowGodPackPurchase
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UTgGameMoviePlayer::ShowGodPackPurchase ( )
{
	static UFunction* pFnShowGodPackPurchase = NULL;

	if ( ! pFnShowGodPackPurchase )
		pFnShowGodPackPurchase = (UFunction*) UObject::GObjObjects()->GetIndex( 147483 );

	UTgGameMoviePlayer_execShowGodPackPurchase_Parms ShowGodPackPurchase_Parms;

	pFnShowGodPackPurchase->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowGodPackPurchase, &ShowGodPackPurchase_Parms, NULL );

	pFnShowGodPackPurchase->FunctionFlags |= 0x400;

	return ShowGodPackPurchase_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.usc_CheckForLoginErrorMsg
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UTgGameMoviePlayer::usc_CheckForLoginErrorMsg ( )
{
	static UFunction* pFnusc_CheckForLoginErrorMsg = NULL;

	if ( ! pFnusc_CheckForLoginErrorMsg )
		pFnusc_CheckForLoginErrorMsg = (UFunction*) UObject::GObjObjects()->GetIndex( 147481 );

	UTgGameMoviePlayer_execusc_CheckForLoginErrorMsg_Parms usc_CheckForLoginErrorMsg_Parms;

	pFnusc_CheckForLoginErrorMsg->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_CheckForLoginErrorMsg, &usc_CheckForLoginErrorMsg_Parms, NULL );

	pFnusc_CheckForLoginErrorMsg->FunctionFlags |= 0x400;

	return usc_CheckForLoginErrorMsg_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.LeavePartyNotification
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::LeavePartyNotification ( )
{
	static UFunction* pFnLeavePartyNotification = NULL;

	if ( ! pFnLeavePartyNotification )
		pFnLeavePartyNotification = (UFunction*) UObject::GObjObjects()->GetIndex( 147480 );

	UTgGameMoviePlayer_execLeavePartyNotification_Parms LeavePartyNotification_Parms;

	pFnLeavePartyNotification->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLeavePartyNotification, &LeavePartyNotification_Parms, NULL );

	pFnLeavePartyNotification->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.DisbandPartyNotification
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UTgGameMoviePlayer::DisbandPartyNotification ( )
{
	static UFunction* pFnDisbandPartyNotification = NULL;

	if ( ! pFnDisbandPartyNotification )
		pFnDisbandPartyNotification = (UFunction*) UObject::GObjObjects()->GetIndex( 147479 );

	UTgGameMoviePlayer_execDisbandPartyNotification_Parms DisbandPartyNotification_Parms;

	pFnDisbandPartyNotification->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDisbandPartyNotification, &DisbandPartyNotification_Parms, NULL );

	pFnDisbandPartyNotification->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.GotoSendGift
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FPointer                pPID                           ( CPF_Parm )

void UTgGameMoviePlayer::GotoSendGift ( struct FPointer pPID )
{
	static UFunction* pFnGotoSendGift = NULL;

	if ( ! pFnGotoSendGift )
		pFnGotoSendGift = (UFunction*) UObject::GObjObjects()->GetIndex( 147476 );

	UTgGameMoviePlayer_execGotoSendGift_Parms GotoSendGift_Parms;
	memcpy ( &GotoSendGift_Parms.pPID, &pPID, 0x8 );

	pFnGotoSendGift->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGotoSendGift, &GotoSendGift_Parms, NULL );

	pFnGotoSendGift->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.GotoChestItem
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// int                            nChestItemId                   ( CPF_Parm )
// int                            nOriginalItemId                ( CPF_Parm )
// int                            nReturnToTarget                ( CPF_OptionalParm | CPF_Parm )
// int                            nReturnToEvent                 ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bUseAltRedirect                ( CPF_OptionalParm | CPF_Parm )

void UTgGameMoviePlayer::GotoChestItem ( int nChestItemId, int nOriginalItemId, int nReturnToTarget, int nReturnToEvent, unsigned long bUseAltRedirect )
{
	static UFunction* pFnGotoChestItem = NULL;

	if ( ! pFnGotoChestItem )
		pFnGotoChestItem = (UFunction*) UObject::GObjObjects()->GetIndex( 147478 );

	UTgGameMoviePlayer_execGotoChestItem_Parms GotoChestItem_Parms;
	GotoChestItem_Parms.nChestItemId = nChestItemId;
	GotoChestItem_Parms.nOriginalItemId = nOriginalItemId;
	GotoChestItem_Parms.nReturnToTarget = nReturnToTarget;
	GotoChestItem_Parms.nReturnToEvent = nReturnToEvent;
	GotoChestItem_Parms.bUseAltRedirect = bUseAltRedirect;

	pFnGotoChestItem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGotoChestItem, &GotoChestItem_Parms, NULL );

	pFnGotoChestItem->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.GotoItem
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// int                            nItemId                        ( CPF_Parm )
// int                            nReturnToTarget                ( CPF_OptionalParm | CPF_Parm )
// int                            nReturnToEvent                 ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bUseAltRedirect                ( CPF_OptionalParm | CPF_Parm )

void UTgGameMoviePlayer::GotoItem ( int nItemId, int nReturnToTarget, int nReturnToEvent, unsigned long bUseAltRedirect )
{
	static UFunction* pFnGotoItem = NULL;

	if ( ! pFnGotoItem )
		pFnGotoItem = (UFunction*) UObject::GObjObjects()->GetIndex( 147471 );

	UTgGameMoviePlayer_execGotoItem_Parms GotoItem_Parms;
	GotoItem_Parms.nItemId = nItemId;
	GotoItem_Parms.nReturnToTarget = nReturnToTarget;
	GotoItem_Parms.nReturnToEvent = nReturnToEvent;
	GotoItem_Parms.bUseAltRedirect = bUseAltRedirect;

	pFnGotoItem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGotoItem, &GotoItem_Parms, NULL );

	pFnGotoItem->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.usc_getBoostedTime
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UTgGameMoviePlayer::usc_getBoostedTime ( )
{
	static UFunction* pFnusc_getBoostedTime = NULL;

	if ( ! pFnusc_getBoostedTime )
		pFnusc_getBoostedTime = (UFunction*) UObject::GObjObjects()->GetIndex( 147469 );

	UTgGameMoviePlayer_execusc_getBoostedTime_Parms usc_getBoostedTime_Parms;

	pFnusc_getBoostedTime->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_getBoostedTime, &usc_getBoostedTime_Parms, NULL );

	pFnusc_getBoostedTime->FunctionFlags |= 0x400;

	return usc_getBoostedTime_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.UnregisterWebPageRegion
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 sName                          ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::UnregisterWebPageRegion ( struct FString sName )
{
	static UFunction* pFnUnregisterWebPageRegion = NULL;

	if ( ! pFnUnregisterWebPageRegion )
		pFnUnregisterWebPageRegion = (UFunction*) UObject::GObjObjects()->GetIndex( 147467 );

	UTgGameMoviePlayer_execUnregisterWebPageRegion_Parms UnregisterWebPageRegion_Parms;
	memcpy ( &UnregisterWebPageRegion_Parms.sName, &sName, 0x10 );

	pFnUnregisterWebPageRegion->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterWebPageRegion, &UnregisterWebPageRegion_Parms, NULL );

	pFnUnregisterWebPageRegion->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.RegisterWebPageRegion
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 sName                          ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWidescreen                    ( CPF_Parm )
// int                            nStreamId                      ( CPF_Parm )
// struct FString                 sUrl                           ( CPF_Parm | CPF_NeedCtorLink )
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )
// float                          Width                          ( CPF_Parm )
// float                          Height                         ( CPF_Parm )
// float                          realWidth                      ( CPF_Parm )
// float                          realHeight                     ( CPF_Parm )

int UTgGameMoviePlayer::RegisterWebPageRegion ( struct FString sName, unsigned long bWidescreen, int nStreamId, struct FString sUrl, float X, float Y, float Width, float Height, float realWidth, float realHeight )
{
	static UFunction* pFnRegisterWebPageRegion = NULL;

	if ( ! pFnRegisterWebPageRegion )
		pFnRegisterWebPageRegion = (UFunction*) UObject::GObjObjects()->GetIndex( 147455 );

	UTgGameMoviePlayer_execRegisterWebPageRegion_Parms RegisterWebPageRegion_Parms;
	memcpy ( &RegisterWebPageRegion_Parms.sName, &sName, 0x10 );
	RegisterWebPageRegion_Parms.bWidescreen = bWidescreen;
	RegisterWebPageRegion_Parms.nStreamId = nStreamId;
	memcpy ( &RegisterWebPageRegion_Parms.sUrl, &sUrl, 0x10 );
	RegisterWebPageRegion_Parms.X = X;
	RegisterWebPageRegion_Parms.Y = Y;
	RegisterWebPageRegion_Parms.Width = Width;
	RegisterWebPageRegion_Parms.Height = Height;
	RegisterWebPageRegion_Parms.realWidth = realWidth;
	RegisterWebPageRegion_Parms.realHeight = realHeight;

	pFnRegisterWebPageRegion->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterWebPageRegion, &RegisterWebPageRegion_Parms, NULL );

	pFnRegisterWebPageRegion->FunctionFlags |= 0x400;

	return RegisterWebPageRegion_Parms.ReturnValue;
};

// Function TgClient.TgGameMoviePlayer.USC_OpenInternalBrowser
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 URL                            ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::USC_OpenInternalBrowser ( struct FString URL )
{
	static UFunction* pFnUSC_OpenInternalBrowser = NULL;

	if ( ! pFnUSC_OpenInternalBrowser )
		pFnUSC_OpenInternalBrowser = (UFunction*) UObject::GObjObjects()->GetIndex( 147453 );

	UTgGameMoviePlayer_execUSC_OpenInternalBrowser_Parms USC_OpenInternalBrowser_Parms;
	memcpy ( &USC_OpenInternalBrowser_Parms.URL, &URL, 0x10 );

	pFnUSC_OpenInternalBrowser->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_OpenInternalBrowser, &USC_OpenInternalBrowser_Parms, NULL );

	pFnUSC_OpenInternalBrowser->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.USC_OpenExternalBrowser
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 externalURL                    ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameMoviePlayer::USC_OpenExternalBrowser ( struct FString externalURL )
{
	static UFunction* pFnUSC_OpenExternalBrowser = NULL;

	if ( ! pFnUSC_OpenExternalBrowser )
		pFnUSC_OpenExternalBrowser = (UFunction*) UObject::GObjObjects()->GetIndex( 147451 );

	UTgGameMoviePlayer_execUSC_OpenExternalBrowser_Parms USC_OpenExternalBrowser_Parms;
	memcpy ( &USC_OpenExternalBrowser_Parms.externalURL, &externalURL, 0x10 );

	pFnUSC_OpenExternalBrowser->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_OpenExternalBrowser, &USC_OpenExternalBrowser_Parms, NULL );

	pFnUSC_OpenExternalBrowser->FunctionFlags |= 0x400;
};

// Function TgClient.TgGameMoviePlayer.LoadBrowserScene
// [0x00020002] 
// Parameters infos:

void UTgGameMoviePlayer::LoadBrowserScene ( )
{
	static UFunction* pFnLoadBrowserScene = NULL;

	if ( ! pFnLoadBrowserScene )
		pFnLoadBrowserScene = (UFunction*) UObject::GObjObjects()->GetIndex( 147450 );

	UTgGameMoviePlayer_execLoadBrowserScene_Parms LoadBrowserScene_Parms;

	this->ProcessEvent ( pFnLoadBrowserScene, &LoadBrowserScene_Parms, NULL );
};

// Function TgClient.TgGfxChatInput.OnGameUIEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UTgEventDataItem*        pEvt                           ( CPF_Parm )

void UTgGfxChatInput::OnGameUIEvent ( class UTgEventDataItem* pEvt )
{
	static UFunction* pFnOnGameUIEvent = NULL;

	if ( ! pFnOnGameUIEvent )
		pFnOnGameUIEvent = (UFunction*) UObject::GObjObjects()->GetIndex( 148012 );

	UTgGfxChatInput_execOnGameUIEvent_Parms OnGameUIEvent_Parms;
	OnGameUIEvent_Parms.pEvt = pEvt;

	pFnOnGameUIEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnGameUIEvent, &OnGameUIEvent_Parms, NULL );

	pFnOnGameUIEvent->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxChatInput.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              pObj                           ( CPF_Parm )

void UTgGfxChatInput::ReceiveGFxData ( class UGFxObject* pObj )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 148010 );

	UTgGfxChatInput_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.pObj = pObj;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxChatInput.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGfxChatInput::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148009 );

	UTgGfxChatInput_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxChatInput.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          pMP                            ( CPF_Parm )

void UTgGfxChatInput::Initialize ( class UTgMoviePlayer* pMP )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148007 );

	UTgGfxChatInput_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.pMP = pMP;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgSpectatorHUD.ToggleHUD
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ATgSpectatorHUD::ToggleHUD ( )
{
	static UFunction* pFnToggleHUD = NULL;

	if ( ! pFnToggleHUD )
		pFnToggleHUD = (UFunction*) UObject::GObjObjects()->GetIndex( 149136 );

	ATgSpectatorHUD_execToggleHUD_Parms ToggleHUD_Parms;

	this->ProcessEvent ( pFnToggleHUD, &ToggleHUD_Parms, NULL );
};

// Function TgClient.TgSpectatorHUD.Tick
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ATgSpectatorHUD::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->GetIndex( 149133 );

	ATgSpectatorHUD_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function TgClient.TgSpectatorHUD.GetGameState
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ATgSpectatorHUD::eventGetGameState ( )
{
	static UFunction* pFnGetGameState = NULL;

	if ( ! pFnGetGameState )
		pFnGetGameState = (UFunction*) UObject::GObjObjects()->GetIndex( 149131 );

	ATgSpectatorHUD_eventGetGameState_Parms GetGameState_Parms;

	this->ProcessEvent ( pFnGetGameState, &GetGameState_Parms, NULL );

	return GetGameState_Parms.ReturnValue;
};

// Function TgClient.TgSpectatorHUD.SetVisibilityMode
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// unsigned char                  Mode                           ( CPF_Parm )

void ATgSpectatorHUD::SetVisibilityMode ( unsigned char Mode )
{
	static UFunction* pFnSetVisibilityMode = NULL;

	if ( ! pFnSetVisibilityMode )
		pFnSetVisibilityMode = (UFunction*) UObject::GObjObjects()->GetIndex( 149128 );

	ATgSpectatorHUD_execSetVisibilityMode_Parms SetVisibilityMode_Parms;
	SetVisibilityMode_Parms.Mode = Mode;

	this->ProcessEvent ( pFnSetVisibilityMode, &SetVisibilityMode_Parms, NULL );
};

// Function TgClient.TgSpectatorHUD.ToggleVisibilityMode
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ATgSpectatorHUD::ToggleVisibilityMode ( )
{
	static UFunction* pFnToggleVisibilityMode = NULL;

	if ( ! pFnToggleVisibilityMode )
		pFnToggleVisibilityMode = (UFunction*) UObject::GObjObjects()->GetIndex( 149126 );

	ATgSpectatorHUD_execToggleVisibilityMode_Parms ToggleVisibilityMode_Parms;

	this->ProcessEvent ( pFnToggleVisibilityMode, &ToggleVisibilityMode_Parms, NULL );
};

// Function TgClient.TgSpectatorHUD.ShowPreviousInfoPanel
// [0x00020002] 
// Parameters infos:

void ATgSpectatorHUD::ShowPreviousInfoPanel ( )
{
	static UFunction* pFnShowPreviousInfoPanel = NULL;

	if ( ! pFnShowPreviousInfoPanel )
		pFnShowPreviousInfoPanel = (UFunction*) UObject::GObjObjects()->GetIndex( 149125 );

	ATgSpectatorHUD_execShowPreviousInfoPanel_Parms ShowPreviousInfoPanel_Parms;

	this->ProcessEvent ( pFnShowPreviousInfoPanel, &ShowPreviousInfoPanel_Parms, NULL );
};

// Function TgClient.TgSpectatorHUD.ShowNextInfoPanel
// [0x00020002] 
// Parameters infos:

void ATgSpectatorHUD::ShowNextInfoPanel ( )
{
	static UFunction* pFnShowNextInfoPanel = NULL;

	if ( ! pFnShowNextInfoPanel )
		pFnShowNextInfoPanel = (UFunction*) UObject::GObjObjects()->GetIndex( 149124 );

	ATgSpectatorHUD_execShowNextInfoPanel_Parms ShowNextInfoPanel_Parms;

	this->ProcessEvent ( pFnShowNextInfoPanel, &ShowNextInfoPanel_Parms, NULL );
};

// Function TgClient.TgSpectatorHUD.ToggleStatPanel
// [0x00020002] 
// Parameters infos:

void ATgSpectatorHUD::ToggleStatPanel ( )
{
	static UFunction* pFnToggleStatPanel = NULL;

	if ( ! pFnToggleStatPanel )
		pFnToggleStatPanel = (UFunction*) UObject::GObjObjects()->GetIndex( 149123 );

	ATgSpectatorHUD_execToggleStatPanel_Parms ToggleStatPanel_Parms;

	this->ProcessEvent ( pFnToggleStatPanel, &ToggleStatPanel_Parms, NULL );
};

// Function TgClient.TgSpectatorHUD.ShowPreviousStatPanel
// [0x00020002] 
// Parameters infos:

void ATgSpectatorHUD::ShowPreviousStatPanel ( )
{
	static UFunction* pFnShowPreviousStatPanel = NULL;

	if ( ! pFnShowPreviousStatPanel )
		pFnShowPreviousStatPanel = (UFunction*) UObject::GObjObjects()->GetIndex( 149122 );

	ATgSpectatorHUD_execShowPreviousStatPanel_Parms ShowPreviousStatPanel_Parms;

	this->ProcessEvent ( pFnShowPreviousStatPanel, &ShowPreviousStatPanel_Parms, NULL );
};

// Function TgClient.TgSpectatorHUD.ShowNextStatPanel
// [0x00020002] 
// Parameters infos:

void ATgSpectatorHUD::ShowNextStatPanel ( )
{
	static UFunction* pFnShowNextStatPanel = NULL;

	if ( ! pFnShowNextStatPanel )
		pFnShowNextStatPanel = (UFunction*) UObject::GObjObjects()->GetIndex( 149121 );

	ATgSpectatorHUD_execShowNextStatPanel_Parms ShowNextStatPanel_Parms;

	this->ProcessEvent ( pFnShowNextStatPanel, &ShowNextStatPanel_Parms, NULL );
};

// Function TgClient.TgSpectatorHUD.UpdatePlayerStatUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ATgPawn*                 changedPawn                    ( CPF_Parm )

bool ATgSpectatorHUD::UpdatePlayerStatUI ( class ATgPawn* changedPawn )
{
	static UFunction* pFnUpdatePlayerStatUI = NULL;

	if ( ! pFnUpdatePlayerStatUI )
		pFnUpdatePlayerStatUI = (UFunction*) UObject::GObjObjects()->GetIndex( 149118 );

	ATgSpectatorHUD_execUpdatePlayerStatUI_Parms UpdatePlayerStatUI_Parms;
	UpdatePlayerStatUI_Parms.changedPawn = changedPawn;

	pFnUpdatePlayerStatUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdatePlayerStatUI, &UpdatePlayerStatUI_Parms, NULL );

	pFnUpdatePlayerStatUI->FunctionFlags |= 0x400;

	return UpdatePlayerStatUI_Parms.ReturnValue;
};

// Function TgClient.TgSpectatorHUD.SetStatIndex
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            StatIndex                      ( CPF_Parm )

void ATgSpectatorHUD::SetStatIndex ( int StatIndex )
{
	static UFunction* pFnSetStatIndex = NULL;

	if ( ! pFnSetStatIndex )
		pFnSetStatIndex = (UFunction*) UObject::GObjObjects()->GetIndex( 149116 );

	ATgSpectatorHUD_execSetStatIndex_Parms SetStatIndex_Parms;
	SetStatIndex_Parms.StatIndex = StatIndex;

	pFnSetStatIndex->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetStatIndex, &SetStatIndex_Parms, NULL );

	pFnSetStatIndex->FunctionFlags |= 0x400;
};

// Function TgClient.TgSpectatorHUD.SpectatorShowAll
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void ATgSpectatorHUD::SpectatorShowAll ( )
{
	static UFunction* pFnSpectatorShowAll = NULL;

	if ( ! pFnSpectatorShowAll )
		pFnSpectatorShowAll = (UFunction*) UObject::GObjObjects()->GetIndex( 149115 );

	ATgSpectatorHUD_execSpectatorShowAll_Parms SpectatorShowAll_Parms;

	pFnSpectatorShowAll->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSpectatorShowAll, &SpectatorShowAll_Parms, NULL );

	pFnSpectatorShowAll->FunctionFlags |= 0x400;
};

// Function TgClient.TgSpectatorHUD.SpectatorHideBottomHalf
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void ATgSpectatorHUD::SpectatorHideBottomHalf ( )
{
	static UFunction* pFnSpectatorHideBottomHalf = NULL;

	if ( ! pFnSpectatorHideBottomHalf )
		pFnSpectatorHideBottomHalf = (UFunction*) UObject::GObjObjects()->GetIndex( 149114 );

	ATgSpectatorHUD_execSpectatorHideBottomHalf_Parms SpectatorHideBottomHalf_Parms;

	pFnSpectatorHideBottomHalf->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSpectatorHideBottomHalf, &SpectatorHideBottomHalf_Parms, NULL );

	pFnSpectatorHideBottomHalf->FunctionFlags |= 0x400;
};

// Function TgClient.TgSpectatorHUD.SpectatorHideAll
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void ATgSpectatorHUD::SpectatorHideAll ( )
{
	static UFunction* pFnSpectatorHideAll = NULL;

	if ( ! pFnSpectatorHideAll )
		pFnSpectatorHideAll = (UFunction*) UObject::GObjObjects()->GetIndex( 149113 );

	ATgSpectatorHUD_execSpectatorHideAll_Parms SpectatorHideAll_Parms;

	pFnSpectatorHideAll->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSpectatorHideAll, &SpectatorHideAll_Parms, NULL );

	pFnSpectatorHideAll->FunctionFlags |= 0x400;
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorGameStats
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void ATgSpectatorHUD::ToggleSpectatorGameStats ( )
{
	static UFunction* pFnToggleSpectatorGameStats = NULL;

	if ( ! pFnToggleSpectatorGameStats )
		pFnToggleSpectatorGameStats = (UFunction*) UObject::GObjObjects()->GetIndex( 149112 );

	ATgSpectatorHUD_execToggleSpectatorGameStats_Parms ToggleSpectatorGameStats_Parms;

	pFnToggleSpectatorGameStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleSpectatorGameStats, &ToggleSpectatorGameStats_Parms, NULL );

	pFnToggleSpectatorGameStats->FunctionFlags |= 0x400;
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorMinimap
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void ATgSpectatorHUD::ToggleSpectatorMinimap ( )
{
	static UFunction* pFnToggleSpectatorMinimap = NULL;

	if ( ! pFnToggleSpectatorMinimap )
		pFnToggleSpectatorMinimap = (UFunction*) UObject::GObjObjects()->GetIndex( 149111 );

	ATgSpectatorHUD_execToggleSpectatorMinimap_Parms ToggleSpectatorMinimap_Parms;

	pFnToggleSpectatorMinimap->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleSpectatorMinimap, &ToggleSpectatorMinimap_Parms, NULL );

	pFnToggleSpectatorMinimap->FunctionFlags |= 0x400;
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorPlayerPanels
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void ATgSpectatorHUD::ToggleSpectatorPlayerPanels ( )
{
	static UFunction* pFnToggleSpectatorPlayerPanels = NULL;

	if ( ! pFnToggleSpectatorPlayerPanels )
		pFnToggleSpectatorPlayerPanels = (UFunction*) UObject::GObjObjects()->GetIndex( 149110 );

	ATgSpectatorHUD_execToggleSpectatorPlayerPanels_Parms ToggleSpectatorPlayerPanels_Parms;

	pFnToggleSpectatorPlayerPanels->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleSpectatorPlayerPanels, &ToggleSpectatorPlayerPanels_Parms, NULL );

	pFnToggleSpectatorPlayerPanels->FunctionFlags |= 0x400;
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorObjectives
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void ATgSpectatorHUD::ToggleSpectatorObjectives ( )
{
	static UFunction* pFnToggleSpectatorObjectives = NULL;

	if ( ! pFnToggleSpectatorObjectives )
		pFnToggleSpectatorObjectives = (UFunction*) UObject::GObjObjects()->GetIndex( 149109 );

	ATgSpectatorHUD_execToggleSpectatorObjectives_Parms ToggleSpectatorObjectives_Parms;

	pFnToggleSpectatorObjectives->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleSpectatorObjectives, &ToggleSpectatorObjectives_Parms, NULL );

	pFnToggleSpectatorObjectives->FunctionFlags |= 0x400;
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorTimeline
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void ATgSpectatorHUD::ToggleSpectatorTimeline ( )
{
	static UFunction* pFnToggleSpectatorTimeline = NULL;

	if ( ! pFnToggleSpectatorTimeline )
		pFnToggleSpectatorTimeline = (UFunction*) UObject::GObjObjects()->GetIndex( 149108 );

	ATgSpectatorHUD_execToggleSpectatorTimeline_Parms ToggleSpectatorTimeline_Parms;

	pFnToggleSpectatorTimeline->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleSpectatorTimeline, &ToggleSpectatorTimeline_Parms, NULL );

	pFnToggleSpectatorTimeline->FunctionFlags |= 0x400;
};

// Function TgClient.TgSpectatorHUD.ToggleSecretMessage
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void ATgSpectatorHUD::ToggleSecretMessage ( )
{
	static UFunction* pFnToggleSecretMessage = NULL;

	if ( ! pFnToggleSecretMessage )
		pFnToggleSecretMessage = (UFunction*) UObject::GObjObjects()->GetIndex( 149107 );

	ATgSpectatorHUD_execToggleSecretMessage_Parms ToggleSecretMessage_Parms;

	pFnToggleSecretMessage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleSecretMessage, &ToggleSecretMessage_Parms, NULL );

	pFnToggleSecretMessage->FunctionFlags |= 0x400;
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorControls
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void ATgSpectatorHUD::ToggleSpectatorControls ( )
{
	static UFunction* pFnToggleSpectatorControls = NULL;

	if ( ! pFnToggleSpectatorControls )
		pFnToggleSpectatorControls = (UFunction*) UObject::GObjObjects()->GetIndex( 149106 );

	ATgSpectatorHUD_execToggleSpectatorControls_Parms ToggleSpectatorControls_Parms;

	pFnToggleSpectatorControls->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleSpectatorControls, &ToggleSpectatorControls_Parms, NULL );

	pFnToggleSpectatorControls->FunctionFlags |= 0x400;
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorPlayerInformation
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void ATgSpectatorHUD::ToggleSpectatorPlayerInformation ( )
{
	static UFunction* pFnToggleSpectatorPlayerInformation = NULL;

	if ( ! pFnToggleSpectatorPlayerInformation )
		pFnToggleSpectatorPlayerInformation = (UFunction*) UObject::GObjObjects()->GetIndex( 149105 );

	ATgSpectatorHUD_execToggleSpectatorPlayerInformation_Parms ToggleSpectatorPlayerInformation_Parms;

	pFnToggleSpectatorPlayerInformation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleSpectatorPlayerInformation, &ToggleSpectatorPlayerInformation_Parms, NULL );

	pFnToggleSpectatorPlayerInformation->FunctionFlags |= 0x400;
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorTicker
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void ATgSpectatorHUD::ToggleSpectatorTicker ( )
{
	static UFunction* pFnToggleSpectatorTicker = NULL;

	if ( ! pFnToggleSpectatorTicker )
		pFnToggleSpectatorTicker = (UFunction*) UObject::GObjObjects()->GetIndex( 149104 );

	ATgSpectatorHUD_execToggleSpectatorTicker_Parms ToggleSpectatorTicker_Parms;

	pFnToggleSpectatorTicker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleSpectatorTicker, &ToggleSpectatorTicker_Parms, NULL );

	pFnToggleSpectatorTicker->FunctionFlags |= 0x400;
};

// Function TgClient.TgSpectatorHUD.SetSpectatorMode
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nNum                           ( CPF_Parm )

void ATgSpectatorHUD::SetSpectatorMode ( int nNum )
{
	static UFunction* pFnSetSpectatorMode = NULL;

	if ( ! pFnSetSpectatorMode )
		pFnSetSpectatorMode = (UFunction*) UObject::GObjObjects()->GetIndex( 149102 );

	ATgSpectatorHUD_execSetSpectatorMode_Parms SetSpectatorMode_Parms;
	SetSpectatorMode_Parms.nNum = nNum;

	pFnSetSpectatorMode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetSpectatorMode, &SetSpectatorMode_Parms, NULL );

	pFnSetSpectatorMode->FunctionFlags |= 0x400;
};

// Function TgClient.TgSpectatorHUD.ToggleBans
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void ATgSpectatorHUD::ToggleBans ( )
{
	static UFunction* pFnToggleBans = NULL;

	if ( ! pFnToggleBans )
		pFnToggleBans = (UFunction*) UObject::GObjObjects()->GetIndex( 149101 );

	ATgSpectatorHUD_execToggleBans_Parms ToggleBans_Parms;

	pFnToggleBans->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleBans, &ToggleBans_Parms, NULL );

	pFnToggleBans->FunctionFlags |= 0x400;
};

// Function TgClient.TgSpectatorHUD.EndMission
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bPlayerAttacker                ( CPF_Parm )
// unsigned char                  finalWinState                  ( CPF_Parm )

void ATgSpectatorHUD::EndMission ( unsigned long bPlayerAttacker, unsigned char finalWinState )
{
	static UFunction* pFnEndMission = NULL;

	if ( ! pFnEndMission )
		pFnEndMission = (UFunction*) UObject::GObjObjects()->GetIndex( 149098 );

	ATgSpectatorHUD_execEndMission_Parms EndMission_Parms;
	EndMission_Parms.bPlayerAttacker = bPlayerAttacker;
	EndMission_Parms.finalWinState = finalWinState;

	pFnEndMission->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEndMission, &EndMission_Parms, NULL );

	pFnEndMission->FunctionFlags |= 0x400;
};

// Function TgClient.TgSpectatorHUD.UpdateSpectatorViewMode
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  Mode                           ( CPF_Parm )

void ATgSpectatorHUD::UpdateSpectatorViewMode ( unsigned char Mode )
{
	static UFunction* pFnUpdateSpectatorViewMode = NULL;

	if ( ! pFnUpdateSpectatorViewMode )
		pFnUpdateSpectatorViewMode = (UFunction*) UObject::GObjObjects()->GetIndex( 149096 );

	ATgSpectatorHUD_execUpdateSpectatorViewMode_Parms UpdateSpectatorViewMode_Parms;
	UpdateSpectatorViewMode_Parms.Mode = Mode;

	pFnUpdateSpectatorViewMode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateSpectatorViewMode, &UpdateSpectatorViewMode_Parms, NULL );

	pFnUpdateSpectatorViewMode->FunctionFlags |= 0x400;
};

// Function TgClient.TgSpectatorHUD.UpdateSpectatorViewTarget
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class AActor*                  Target                         ( CPF_Parm )

void ATgSpectatorHUD::UpdateSpectatorViewTarget ( class AActor* Target )
{
	static UFunction* pFnUpdateSpectatorViewTarget = NULL;

	if ( ! pFnUpdateSpectatorViewTarget )
		pFnUpdateSpectatorViewTarget = (UFunction*) UObject::GObjObjects()->GetIndex( 149094 );

	ATgSpectatorHUD_execUpdateSpectatorViewTarget_Parms UpdateSpectatorViewTarget_Parms;
	UpdateSpectatorViewTarget_Parms.Target = Target;

	pFnUpdateSpectatorViewTarget->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateSpectatorViewTarget, &UpdateSpectatorViewTarget_Parms, NULL );

	pFnUpdateSpectatorViewTarget->FunctionFlags |= 0x400;
};

// Function TgClient.TgSpectatorHUD.GetVisibilityMode
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char ATgSpectatorHUD::GetVisibilityMode ( )
{
	static UFunction* pFnGetVisibilityMode = NULL;

	if ( ! pFnGetVisibilityMode )
		pFnGetVisibilityMode = (UFunction*) UObject::GObjObjects()->GetIndex( 149092 );

	ATgSpectatorHUD_execGetVisibilityMode_Parms GetVisibilityMode_Parms;

	pFnGetVisibilityMode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVisibilityMode, &GetVisibilityMode_Parms, NULL );

	pFnGetVisibilityMode->FunctionFlags |= 0x400;

	return GetVisibilityMode_Parms.ReturnValue;
};

// Function TgClient.TgClanDC_ClanStats.usc_UpdateClanNameFormat
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            nIndex                         ( CPF_Parm )

void UTgClanDC_ClanStats::usc_UpdateClanNameFormat ( int nIndex )
{
	static UFunction* pFnusc_UpdateClanNameFormat = NULL;

	if ( ! pFnusc_UpdateClanNameFormat )
		pFnusc_UpdateClanNameFormat = (UFunction*) UObject::GObjObjects()->GetIndex( 147383 );

	UTgClanDC_ClanStats_execusc_UpdateClanNameFormat_Parms usc_UpdateClanNameFormat_Parms;
	usc_UpdateClanNameFormat_Parms.nIndex = nIndex;

	pFnusc_UpdateClanNameFormat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_UpdateClanNameFormat, &usc_UpdateClanNameFormat_Parms, NULL );

	pFnusc_UpdateClanNameFormat->FunctionFlags |= 0x400;
};

// Function TgClient.TgClanDC_ClanStats.usc_UpdateTag
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 sMessage                       ( CPF_Parm | CPF_NeedCtorLink )

void UTgClanDC_ClanStats::usc_UpdateTag ( struct FString sMessage )
{
	static UFunction* pFnusc_UpdateTag = NULL;

	if ( ! pFnusc_UpdateTag )
		pFnusc_UpdateTag = (UFunction*) UObject::GObjObjects()->GetIndex( 147381 );

	UTgClanDC_ClanStats_execusc_UpdateTag_Parms usc_UpdateTag_Parms;
	memcpy ( &usc_UpdateTag_Parms.sMessage, &sMessage, 0x10 );

	pFnusc_UpdateTag->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_UpdateTag, &usc_UpdateTag_Parms, NULL );

	pFnusc_UpdateTag->FunctionFlags |= 0x400;
};

// Function TgClient.TgClanDC_ClanStats.usc_ApplicationAction
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            nAction                        ( CPF_Parm )
// struct FString                 sPlayerId                      ( CPF_Parm | CPF_NeedCtorLink )

void UTgClanDC_ClanStats::usc_ApplicationAction ( int nAction, struct FString sPlayerId )
{
	static UFunction* pFnusc_ApplicationAction = NULL;

	if ( ! pFnusc_ApplicationAction )
		pFnusc_ApplicationAction = (UFunction*) UObject::GObjObjects()->GetIndex( 147378 );

	UTgClanDC_ClanStats_execusc_ApplicationAction_Parms usc_ApplicationAction_Parms;
	usc_ApplicationAction_Parms.nAction = nAction;
	memcpy ( &usc_ApplicationAction_Parms.sPlayerId, &sPlayerId, 0x10 );

	pFnusc_ApplicationAction->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_ApplicationAction, &usc_ApplicationAction_Parms, NULL );

	pFnusc_ApplicationAction->FunctionFlags |= 0x400;
};

// Function TgClient.TgClanDC_ClanStats.usc_UpdateRecruiting
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 sMessage                       ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bIsRecruiting                  ( CPF_Parm )

void UTgClanDC_ClanStats::usc_UpdateRecruiting ( struct FString sMessage, unsigned long bIsRecruiting )
{
	static UFunction* pFnusc_UpdateRecruiting = NULL;

	if ( ! pFnusc_UpdateRecruiting )
		pFnusc_UpdateRecruiting = (UFunction*) UObject::GObjObjects()->GetIndex( 147375 );

	UTgClanDC_ClanStats_execusc_UpdateRecruiting_Parms usc_UpdateRecruiting_Parms;
	memcpy ( &usc_UpdateRecruiting_Parms.sMessage, &sMessage, 0x10 );
	usc_UpdateRecruiting_Parms.bIsRecruiting = bIsRecruiting;

	pFnusc_UpdateRecruiting->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_UpdateRecruiting, &usc_UpdateRecruiting_Parms, NULL );

	pFnusc_UpdateRecruiting->FunctionFlags |= 0x400;
};

// Function TgClient.TgClanDC_ClanStats.usc_UpdateMessage
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 sMessage                       ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bIsDaily                       ( CPF_Parm )

void UTgClanDC_ClanStats::usc_UpdateMessage ( struct FString sMessage, unsigned long bIsDaily )
{
	static UFunction* pFnusc_UpdateMessage = NULL;

	if ( ! pFnusc_UpdateMessage )
		pFnusc_UpdateMessage = (UFunction*) UObject::GObjObjects()->GetIndex( 147372 );

	UTgClanDC_ClanStats_execusc_UpdateMessage_Parms usc_UpdateMessage_Parms;
	memcpy ( &usc_UpdateMessage_Parms.sMessage, &sMessage, 0x10 );
	usc_UpdateMessage_Parms.bIsDaily = bIsDaily;

	pFnusc_UpdateMessage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_UpdateMessage, &usc_UpdateMessage_Parms, NULL );

	pFnusc_UpdateMessage->FunctionFlags |= 0x400;
};

// Function TgClient.TgClanDC_ClanStats.OnFilterResult
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 sOriginal                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sFiltered                      ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bTotalCensor                   ( CPF_Parm )

void UTgClanDC_ClanStats::OnFilterResult ( struct FString sOriginal, struct FString sFiltered, unsigned long bTotalCensor )
{
	static UFunction* pFnOnFilterResult = NULL;

	if ( ! pFnOnFilterResult )
		pFnOnFilterResult = (UFunction*) UObject::GObjObjects()->GetIndex( 147368 );

	UTgClanDC_ClanStats_execOnFilterResult_Parms OnFilterResult_Parms;
	memcpy ( &OnFilterResult_Parms.sOriginal, &sOriginal, 0x10 );
	memcpy ( &OnFilterResult_Parms.sFiltered, &sFiltered, 0x10 );
	OnFilterResult_Parms.bTotalCensor = bTotalCensor;

	pFnOnFilterResult->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnFilterResult, &OnFilterResult_Parms, NULL );

	pFnOnFilterResult->FunctionFlags |= 0x400;
};

// Function TgClient.TgClanDC_ClanStats.UpdateRecruiting
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 sDesc                          ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bIsRecruiting                  ( CPF_Parm )

void UTgClanDC_ClanStats::UpdateRecruiting ( struct FString sDesc, unsigned long bIsRecruiting )
{
	static UFunction* pFnUpdateRecruiting = NULL;

	if ( ! pFnUpdateRecruiting )
		pFnUpdateRecruiting = (UFunction*) UObject::GObjObjects()->GetIndex( 147365 );

	UTgClanDC_ClanStats_execUpdateRecruiting_Parms UpdateRecruiting_Parms;
	memcpy ( &UpdateRecruiting_Parms.sDesc, &sDesc, 0x10 );
	UpdateRecruiting_Parms.bIsRecruiting = bIsRecruiting;

	pFnUpdateRecruiting->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateRecruiting, &UpdateRecruiting_Parms, NULL );

	pFnUpdateRecruiting->FunctionFlags |= 0x400;
};

// Function TgClient.TgClanDC_ClanStats.UpdateClanMOTD
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 sMessage                       ( CPF_Parm | CPF_NeedCtorLink )

void UTgClanDC_ClanStats::UpdateClanMOTD ( struct FString sMessage )
{
	static UFunction* pFnUpdateClanMOTD = NULL;

	if ( ! pFnUpdateClanMOTD )
		pFnUpdateClanMOTD = (UFunction*) UObject::GObjObjects()->GetIndex( 147363 );

	UTgClanDC_ClanStats_execUpdateClanMOTD_Parms UpdateClanMOTD_Parms;
	memcpy ( &UpdateClanMOTD_Parms.sMessage, &sMessage, 0x10 );

	pFnUpdateClanMOTD->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateClanMOTD, &UpdateClanMOTD_Parms, NULL );

	pFnUpdateClanMOTD->FunctionFlags |= 0x400;
};

// Function TgClient.TgClanDC_ClanStats.UpdateClanDesc
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 sMessage                       ( CPF_Parm | CPF_NeedCtorLink )

void UTgClanDC_ClanStats::UpdateClanDesc ( struct FString sMessage )
{
	static UFunction* pFnUpdateClanDesc = NULL;

	if ( ! pFnUpdateClanDesc )
		pFnUpdateClanDesc = (UFunction*) UObject::GObjObjects()->GetIndex( 147361 );

	UTgClanDC_ClanStats_execUpdateClanDesc_Parms UpdateClanDesc_Parms;
	memcpy ( &UpdateClanDesc_Parms.sMessage, &sMessage, 0x10 );

	pFnUpdateClanDesc->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateClanDesc, &UpdateClanDesc_Parms, NULL );

	pFnUpdateClanDesc->FunctionFlags |= 0x400;
};

// Function TgClient.TgClanDC_ClanStats.UpdateClanName
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 sName                          ( CPF_Parm | CPF_NeedCtorLink )

void UTgClanDC_ClanStats::UpdateClanName ( struct FString sName )
{
	static UFunction* pFnUpdateClanName = NULL;

	if ( ! pFnUpdateClanName )
		pFnUpdateClanName = (UFunction*) UObject::GObjObjects()->GetIndex( 147359 );

	UTgClanDC_ClanStats_execUpdateClanName_Parms UpdateClanName_Parms;
	memcpy ( &UpdateClanName_Parms.sName, &sName, 0x10 );

	pFnUpdateClanName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateClanName, &UpdateClanName_Parms, NULL );

	pFnUpdateClanName->FunctionFlags |= 0x400;
};

// Function TgClient.TgClanDC_ClanStats.UpdateClanData
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UTgClanDC_ClanStats::UpdateClanData ( )
{
	static UFunction* pFnUpdateClanData = NULL;

	if ( ! pFnUpdateClanData )
		pFnUpdateClanData = (UFunction*) UObject::GObjObjects()->GetIndex( 147358 );

	UTgClanDC_ClanStats_execUpdateClanData_Parms UpdateClanData_Parms;

	pFnUpdateClanData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateClanData, &UpdateClanData_Parms, NULL );

	pFnUpdateClanData->FunctionFlags |= 0x400;
};

// Function TgClient.TgClanDC_ClanStats.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgClanDC_ClanStats::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 147355 );

	UTgClanDC_ClanStats_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgClanDC_Roster.usc_UpdateComment
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 nPlayerId                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sComment                       ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  isOfficerNote                  ( CPF_Parm )

void UTgClanDC_Roster::usc_UpdateComment ( struct FString nPlayerId, struct FString sComment, unsigned long isOfficerNote )
{
	static UFunction* pFnusc_UpdateComment = NULL;

	if ( ! pFnusc_UpdateComment )
		pFnusc_UpdateComment = (UFunction*) UObject::GObjObjects()->GetIndex( 147395 );

	UTgClanDC_Roster_execusc_UpdateComment_Parms usc_UpdateComment_Parms;
	memcpy ( &usc_UpdateComment_Parms.nPlayerId, &nPlayerId, 0x10 );
	memcpy ( &usc_UpdateComment_Parms.sComment, &sComment, 0x10 );
	usc_UpdateComment_Parms.isOfficerNote = isOfficerNote;

	pFnusc_UpdateComment->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_UpdateComment, &usc_UpdateComment_Parms, NULL );

	pFnusc_UpdateComment->FunctionFlags |= 0x400;
};

// Function TgClient.TgClanDC_Roster.usc_ClanAction
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nAction                        ( CPF_Parm )
// struct FString                 nPlayerId                      ( CPF_Parm | CPF_NeedCtorLink )

void UTgClanDC_Roster::usc_ClanAction ( int nAction, struct FString nPlayerId )
{
	static UFunction* pFnusc_ClanAction = NULL;

	if ( ! pFnusc_ClanAction )
		pFnusc_ClanAction = (UFunction*) UObject::GObjObjects()->GetIndex( 147392 );

	UTgClanDC_Roster_execusc_ClanAction_Parms usc_ClanAction_Parms;
	usc_ClanAction_Parms.nAction = nAction;
	memcpy ( &usc_ClanAction_Parms.nPlayerId, &nPlayerId, 0x10 );

	pFnusc_ClanAction->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_ClanAction, &usc_ClanAction_Parms, NULL );

	pFnusc_ClanAction->FunctionFlags |= 0x400;
};

// Function TgClient.TgClanDC_Roster.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgClanDC_Roster::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 147389 );

	UTgClanDC_Roster_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgClanDC_Settings.usc_UpdateLeader
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sName                          ( CPF_Parm | CPF_NeedCtorLink )

void UTgClanDC_Settings::usc_UpdateLeader ( struct FString sName )
{
	static UFunction* pFnusc_UpdateLeader = NULL;

	if ( ! pFnusc_UpdateLeader )
		pFnusc_UpdateLeader = (UFunction*) UObject::GObjObjects()->GetIndex( 147408 );

	UTgClanDC_Settings_execusc_UpdateLeader_Parms usc_UpdateLeader_Parms;
	memcpy ( &usc_UpdateLeader_Parms.sName, &sName, 0x10 );

	pFnusc_UpdateLeader->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_UpdateLeader, &usc_UpdateLeader_Parms, NULL );

	pFnusc_UpdateLeader->FunctionFlags |= 0x400;
};

// Function TgClient.TgClanDC_Settings.usc_UpdateRank
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          RankId                         ( CPF_Parm )
// struct FString                 sName                          ( CPF_Parm | CPF_NeedCtorLink )
// float                          rankPermission                 ( CPF_Parm )

void UTgClanDC_Settings::usc_UpdateRank ( float RankId, struct FString sName, float rankPermission )
{
	static UFunction* pFnusc_UpdateRank = NULL;

	if ( ! pFnusc_UpdateRank )
		pFnusc_UpdateRank = (UFunction*) UObject::GObjObjects()->GetIndex( 147404 );

	UTgClanDC_Settings_execusc_UpdateRank_Parms usc_UpdateRank_Parms;
	usc_UpdateRank_Parms.RankId = RankId;
	memcpy ( &usc_UpdateRank_Parms.sName, &sName, 0x10 );
	usc_UpdateRank_Parms.rankPermission = rankPermission;

	pFnusc_UpdateRank->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnusc_UpdateRank, &usc_UpdateRank_Parms, NULL );

	pFnusc_UpdateRank->FunctionFlags |= 0x400;
};

// Function TgClient.TgClanDC_Settings.UpdateRankArray
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgClanDC_Settings::UpdateRankArray ( )
{
	static UFunction* pFnUpdateRankArray = NULL;

	if ( ! pFnUpdateRankArray )
		pFnUpdateRankArray = (UFunction*) UObject::GObjObjects()->GetIndex( 147403 );

	UTgClanDC_Settings_execUpdateRankArray_Parms UpdateRankArray_Parms;

	pFnUpdateRankArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateRankArray, &UpdateRankArray_Parms, NULL );

	pFnUpdateRankArray->FunctionFlags |= 0x400;
};

// Function TgClient.TgClanDC_Settings.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgClanDC_Settings::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 147400 );

	UTgClanDC_Settings_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgDataGroup_Clan.InitializeData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgDataHandler*          Handler                        ( CPF_Parm )
// class UTgDataChunk*            parentChunk                    ( CPF_Parm )

void UTgDataGroup_Clan::InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk )
{
	static UFunction* pFnInitializeData = NULL;

	if ( ! pFnInitializeData )
		pFnInitializeData = (UFunction*) UObject::GObjObjects()->GetIndex( 147414 );

	UTgDataGroup_Clan_execInitializeData_Parms InitializeData_Parms;
	InitializeData_Parms.Handler = Handler;
	InitializeData_Parms.parentChunk = parentChunk;

	pFnInitializeData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeData, &InitializeData_Parms, NULL );

	pFnInitializeData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxEventPurchase.ShowOutOfCurrency
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            CurrencyType                   ( CPF_Parm )

void UTgGfxEventPurchase::ShowOutOfCurrency ( int CurrencyType )
{
	static UFunction* pFnShowOutOfCurrency = NULL;

	if ( ! pFnShowOutOfCurrency )
		pFnShowOutOfCurrency = (UFunction*) UObject::GObjObjects()->GetIndex( 148093 );

	UTgGfxEventPurchase_execShowOutOfCurrency_Parms ShowOutOfCurrency_Parms;
	ShowOutOfCurrency_Parms.CurrencyType = CurrencyType;

	pFnShowOutOfCurrency->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowOutOfCurrency, &ShowOutOfCurrency_Parms, NULL );

	pFnShowOutOfCurrency->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxEventPurchase.SubmitPurchase
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              Data                           ( CPF_Parm )

void UTgGfxEventPurchase::SubmitPurchase ( class UGFxObject* Data )
{
	static UFunction* pFnSubmitPurchase = NULL;

	if ( ! pFnSubmitPurchase )
		pFnSubmitPurchase = (UFunction*) UObject::GObjObjects()->GetIndex( 148091 );

	UTgGfxEventPurchase_execSubmitPurchase_Parms SubmitPurchase_Parms;
	SubmitPurchase_Parms.Data = Data;

	pFnSubmitPurchase->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubmitPurchase, &SubmitPurchase_Parms, NULL );

	pFnSubmitPurchase->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxEventPurchase.GetItemInfo
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ItemId                         ( CPF_Parm )

void UTgGfxEventPurchase::GetItemInfo ( int ItemId )
{
	static UFunction* pFnGetItemInfo = NULL;

	if ( ! pFnGetItemInfo )
		pFnGetItemInfo = (UFunction*) UObject::GObjObjects()->GetIndex( 148089 );

	UTgGfxEventPurchase_execGetItemInfo_Parms GetItemInfo_Parms;
	GetItemInfo_Parms.ItemId = ItemId;

	pFnGetItemInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetItemInfo, &GetItemInfo_Parms, NULL );

	pFnGetItemInfo->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxEventPurchase.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              theObject                      ( CPF_Parm )

void UTgGfxEventPurchase::ReceiveGFxData ( class UGFxObject* theObject )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 148087 );

	UTgGfxEventPurchase_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.theObject = theObject;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGfxEventPurchase.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGfxEventPurchase::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148085 );

	UTgGfxEventPurchase_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGFxEventQuestNotification.USC_GetOptOut
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UTgGFxEventQuestNotification::USC_GetOptOut ( )
{
	static UFunction* pFnUSC_GetOptOut = NULL;

	if ( ! pFnUSC_GetOptOut )
		pFnUSC_GetOptOut = (UFunction*) UObject::GObjObjects()->GetIndex( 148115 );

	UTgGFxEventQuestNotification_execUSC_GetOptOut_Parms USC_GetOptOut_Parms;

	pFnUSC_GetOptOut->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUSC_GetOptOut, &USC_GetOptOut_Parms, NULL );

	pFnUSC_GetOptOut->FunctionFlags |= 0x400;

	return USC_GetOptOut_Parms.ReturnValue;
};

// Function TgClient.TgGFxEventQuestNotification.USC_GetOptOut_Delegate
// [0x00120000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UTgGFxEventQuestNotification::USC_GetOptOut_Delegate ( )
{
	static UFunction* pFnUSC_GetOptOut_Delegate = NULL;

	if ( ! pFnUSC_GetOptOut_Delegate )
		pFnUSC_GetOptOut_Delegate = (UFunction*) UObject::GObjObjects()->GetIndex( 148102 );

	UTgGFxEventQuestNotification_execUSC_GetOptOut_Delegate_Parms USC_GetOptOut_Delegate_Parms;

	this->ProcessEvent ( pFnUSC_GetOptOut_Delegate, &USC_GetOptOut_Delegate_Parms, NULL );

	return USC_GetOptOut_Delegate_Parms.ReturnValue;
};

// Function TgClient.TgGFxEventQuestNotification.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              Data                           ( CPF_Parm )

void UTgGFxEventQuestNotification::ReceiveGFxData ( class UGFxObject* Data )
{
	static UFunction* pFnReceiveGFxData = NULL;

	if ( ! pFnReceiveGFxData )
		pFnReceiveGFxData = (UFunction*) UObject::GObjObjects()->GetIndex( 148112 );

	UTgGFxEventQuestNotification_execReceiveGFxData_Parms ReceiveGFxData_Parms;
	ReceiveGFxData_Parms.Data = Data;

	pFnReceiveGFxData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReceiveGFxData, &ReceiveGFxData_Parms, NULL );

	pFnReceiveGFxData->FunctionFlags |= 0x400;
};

// Function TgClient.TgGFxEventQuestNotification.RedirectToFirstQuest
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGFxEventQuestNotification::RedirectToFirstQuest ( )
{
	static UFunction* pFnRedirectToFirstQuest = NULL;

	if ( ! pFnRedirectToFirstQuest )
		pFnRedirectToFirstQuest = (UFunction*) UObject::GObjObjects()->GetIndex( 148111 );

	UTgGFxEventQuestNotification_execRedirectToFirstQuest_Parms RedirectToFirstQuest_Parms;

	pFnRedirectToFirstQuest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRedirectToFirstQuest, &RedirectToFirstQuest_Parms, NULL );

	pFnRedirectToFirstQuest->FunctionFlags |= 0x400;
};

// Function TgClient.TgGFxEventQuestNotification.UpdateNotifySetting
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bDisable                       ( CPF_Parm )

void UTgGFxEventQuestNotification::UpdateNotifySetting ( unsigned long bDisable )
{
	static UFunction* pFnUpdateNotifySetting = NULL;

	if ( ! pFnUpdateNotifySetting )
		pFnUpdateNotifySetting = (UFunction*) UObject::GObjObjects()->GetIndex( 148109 );

	UTgGFxEventQuestNotification_execUpdateNotifySetting_Parms UpdateNotifySetting_Parms;
	UpdateNotifySetting_Parms.bDisable = bDisable;

	pFnUpdateNotifySetting->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateNotifySetting, &UpdateNotifySetting_Parms, NULL );

	pFnUpdateNotifySetting->FunctionFlags |= 0x400;
};

// Function TgClient.TgGFxEventQuestNotification.GetHasAvailableSpecialEventQuest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UTgGFxEventQuestNotification::GetHasAvailableSpecialEventQuest ( )
{
	static UFunction* pFnGetHasAvailableSpecialEventQuest = NULL;

	if ( ! pFnGetHasAvailableSpecialEventQuest )
		pFnGetHasAvailableSpecialEventQuest = (UFunction*) UObject::GObjObjects()->GetIndex( 148107 );

	UTgGFxEventQuestNotification_execGetHasAvailableSpecialEventQuest_Parms GetHasAvailableSpecialEventQuest_Parms;

	pFnGetHasAvailableSpecialEventQuest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetHasAvailableSpecialEventQuest, &GetHasAvailableSpecialEventQuest_Parms, NULL );

	pFnGetHasAvailableSpecialEventQuest->FunctionFlags |= 0x400;

	return GetHasAvailableSpecialEventQuest_Parms.ReturnValue;
};

// Function TgClient.TgGFxEventQuestNotification.Uninitialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGFxEventQuestNotification::Uninitialize ( )
{
	static UFunction* pFnUninitialize = NULL;

	if ( ! pFnUninitialize )
		pFnUninitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148106 );

	UTgGFxEventQuestNotification_execUninitialize_Parms Uninitialize_Parms;

	pFnUninitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUninitialize, &Uninitialize_Parms, NULL );

	pFnUninitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgGFxEventQuestNotification.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTgMoviePlayer*          theMovie                       ( CPF_Parm )

void UTgGFxEventQuestNotification::Initialize ( class UTgMoviePlayer* theMovie )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 148104 );

	UTgGFxEventQuestNotification_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.theMovie = theMovie;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function TgClient.TgLobbyHUD.SetInitialState
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATgLobbyHUD::eventSetInitialState ( )
{
	static UFunction* pFnSetInitialState = NULL;

	if ( ! pFnSetInitialState )
		pFnSetInitialState = (UFunction*) UObject::GObjObjects()->GetIndex( 149057 );

	ATgLobbyHUD_eventSetInitialState_Parms SetInitialState_Parms;

	this->ProcessEvent ( pFnSetInitialState, &SetInitialState_Parms, NULL );
};

// Function TgClient.TgLobbyHUD.ReturnToMain
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ATgLobbyHUD::eventReturnToMain ( )
{
	static UFunction* pFnReturnToMain = NULL;

	if ( ! pFnReturnToMain )
		pFnReturnToMain = (UFunction*) UObject::GObjObjects()->GetIndex( 149058 );

	ATgLobbyHUD_eventReturnToMain_Parms ReturnToMain_Parms;

	this->ProcessEvent ( pFnReturnToMain, &ReturnToMain_Parms, NULL );
};

// Function TgClient.TgLobbyHUD.IsCurrentCameraMatchLobby
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATgLobbyHUD::IsCurrentCameraMatchLobby ( )
{
	static UFunction* pFnIsCurrentCameraMatchLobby = NULL;

	if ( ! pFnIsCurrentCameraMatchLobby )
		pFnIsCurrentCameraMatchLobby = (UFunction*) UObject::GObjObjects()->GetIndex( 149055 );

	ATgLobbyHUD_execIsCurrentCameraMatchLobby_Parms IsCurrentCameraMatchLobby_Parms;

	pFnIsCurrentCameraMatchLobby->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsCurrentCameraMatchLobby, &IsCurrentCameraMatchLobby_Parms, NULL );

	pFnIsCurrentCameraMatchLobby->FunctionFlags |= 0x400;

	return IsCurrentCameraMatchLobby_Parms.ReturnValue;
};

// Function TgClient.TgLobbyHUD.GetMatchLobbyCameraName
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName ATgLobbyHUD::GetMatchLobbyCameraName ( )
{
	static UFunction* pFnGetMatchLobbyCameraName = NULL;

	if ( ! pFnGetMatchLobbyCameraName )
		pFnGetMatchLobbyCameraName = (UFunction*) UObject::GObjObjects()->GetIndex( 149053 );

	ATgLobbyHUD_execGetMatchLobbyCameraName_Parms GetMatchLobbyCameraName_Parms;

	pFnGetMatchLobbyCameraName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetMatchLobbyCameraName, &GetMatchLobbyCameraName_Parms, NULL );

	pFnGetMatchLobbyCameraName->FunctionFlags |= 0x400;

	return GetMatchLobbyCameraName_Parms.ReturnValue;
};

// Function TgClient.TgLobbyHUD.OnClassSelected
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nClassId                       ( CPF_Parm )
// int                            nSkinId                        ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bChangedClass                  ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bChangedSkin                   ( CPF_OptionalParm | CPF_Parm )

void ATgLobbyHUD::OnClassSelected ( int nClassId, int nSkinId, unsigned long bChangedClass, unsigned long bChangedSkin )
{
	static UFunction* pFnOnClassSelected = NULL;

	if ( ! pFnOnClassSelected )
		pFnOnClassSelected = (UFunction*) UObject::GObjObjects()->GetIndex( 149048 );

	ATgLobbyHUD_execOnClassSelected_Parms OnClassSelected_Parms;
	OnClassSelected_Parms.nClassId = nClassId;
	OnClassSelected_Parms.nSkinId = nSkinId;
	OnClassSelected_Parms.bChangedClass = bChangedClass;
	OnClassSelected_Parms.bChangedSkin = bChangedSkin;

	pFnOnClassSelected->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnClassSelected, &OnClassSelected_Parms, NULL );

	pFnOnClassSelected->FunctionFlags |= 0x400;
};

// Function TgClient.TgLobbyHUD.AsynchNotifies
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ATgLobbyHUD::AsynchNotifies ( )
{
	static UFunction* pFnAsynchNotifies = NULL;

	if ( ! pFnAsynchNotifies )
		pFnAsynchNotifies = (UFunction*) UObject::GObjObjects()->GetIndex( 149047 );

	ATgLobbyHUD_execAsynchNotifies_Parms AsynchNotifies_Parms;

	pFnAsynchNotifies->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAsynchNotifies, &AsynchNotifies_Parms, NULL );

	pFnAsynchNotifies->FunctionFlags |= 0x400;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif