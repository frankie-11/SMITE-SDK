/*
#############################################################################################
# Smite (v3.24.3804.2) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: TgClient_f_structs.h
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
# Function Structs
# ========================================================================================= #
*/

// Function TgClient.TgGfxAchievementPopup.QueueAchievement
// [0x00020802] ( FUNC_Event )
struct UTgGfxAchievementPopup_eventQueueAchievement_Parms
{
};

// Function TgClient.TgGfxAchievementPopup.asc_QueueAchievement
// [0x00020003] ( FUNC_Final )
struct UTgGfxAchievementPopup_execasc_QueueAchievement_Parms
{
};

// Function TgClient.TgGfxAchievementPopup.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxAchievementPopup_execInitialize_Parms
{
	class UTgMoviePlayer*                              pMoviePlayer;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxAchievementSelection.UpdateSelectedAchievements
// [0x00020802] ( FUNC_Event )
struct UTgGfxAchievementSelection_eventUpdateSelectedAchievements_Parms
{
};

// Function TgClient.TgGfxAchievementSelection.ASC_UpdateSelectedAchievements
// [0x00020003] ( FUNC_Final )
struct UTgGfxAchievementSelection_execASC_UpdateSelectedAchievements_Parms
{
};

// Function TgClient.TgGfxAchievementSelection.UpdateScreen
// [0x00020802] ( FUNC_Event )
struct UTgGfxAchievementSelection_eventUpdateScreen_Parms
{
};

// Function TgClient.TgGfxAchievementSelection.ASC_UpdateScreen
// [0x00020003] ( FUNC_Final )
struct UTgGfxAchievementSelection_execASC_UpdateScreen_Parms
{
};

// Function TgClient.TgGfxAchievementSelection.USC_ApplySelections
// [0x00020400] ( FUNC_Native )
struct UTgGfxAchievementSelection_execUSC_ApplySelections_Parms
{
	int                                                as1;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                as2;                                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                as3;                                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                as4;                                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxAchievementSelection.USC_ApplySelections_Delegate
// [0x00120000] 
struct UTgGfxAchievementSelection_execUSC_ApplySelections_Delegate_Parms
{
	int                                                as1;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                as2;                                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                as3;                                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                as4;                                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxAchievementSelection.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxAchievementSelection_execUninitialize_Parms
{
};

// Function TgClient.TgGfxAchievementSelection.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxAchievementSelection_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxAdventureProgress.OnAcquisition
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventureProgress_execOnAcquisition_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxAdventureProgress.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventureProgress_execUninitialize_Parms
{
};

// Function TgClient.TgGfxAdventureProgress.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventureProgress_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxAdventureProgress.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventureProgress_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxAdventureProgressDungeon2.OnAcquisition
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventureProgressDungeon2_execOnAcquisition_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxAdventureProgressDungeon2.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventureProgressDungeon2_execUninitialize_Parms
{
};

// Function TgClient.TgGfxAdventureProgressDungeon2.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventureProgressDungeon2_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxAdventureProgressDungeon2.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventureProgressDungeon2_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxAdventureProgressFox.OnAcquisition
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventureProgressFox_execOnAcquisition_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxAdventureProgressFox.SetupChestPurchaseFox
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventureProgressFox_execSetupChestPurchaseFox_Parms
{
};

// Function TgClient.TgGfxAdventureProgressFox.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventureProgressFox_execUninitialize_Parms
{
};

// Function TgClient.TgGfxAdventureProgressFox.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventureProgressFox_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxAdventureProgressFox.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventureProgressFox_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxAdventureProgressMMO.OnAcquisition
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventureProgressMMO_execOnAcquisition_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxAdventureProgressMMO.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventureProgressMMO_execUninitialize_Parms
{
};

// Function TgClient.TgGfxAdventureProgressMMO.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventureProgressMMO_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxAdventureProgressMMO.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventureProgressMMO_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxAdventuresHub.SceneTick
// [0x00020800] ( FUNC_Event )
struct UTgGfxAdventuresHub_eventSceneTick_Parms
{
	float                                              Delta;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxAdventuresHub.OnAcquisition
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventuresHub_execOnAcquisition_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxAdventuresHub.SetBundleOwnership
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventuresHub_execSetBundleOwnership_Parms
{
};

// Function TgClient.TgGfxAdventuresHub.TriggerLobbyEventHub
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventuresHub_execTriggerLobbyEventHub_Parms
{
	int                                                nType;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nTarget;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxAdventuresHub.TriggerLobbyCamEvent
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventuresHub_execTriggerLobbyCamEvent_Parms
{
	int                                                nType;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nTarget;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxAdventuresHub.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventuresHub_execUninitialize_Parms
{
};

// Function TgClient.TgGfxAdventuresHub.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventuresHub_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxAdventuresHub.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventuresHub_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxAdventuresHub.LeaveQueue
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventuresHub_execLeaveQueue_Parms
{
};

// Function TgClient.TgGfxAdventuresHub.PopulateGoalData
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventuresHub_execPopulateGoalData_Parms
{
};

// Function TgClient.TgGfxAdventuresHub.USC_OpenEventCam
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventuresHub_execUSC_OpenEventCam_Parms
{
	unsigned long                                      isSmall : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGfxAdventuresHub.USC_GotoVault
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventuresHub_execUSC_GotoVault_Parms
{
	unsigned long                                      bIsSmall : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGfxAdventuresHub.USC_SetUserViewedEvent
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventuresHub_execUSC_SetUserViewedEvent_Parms
{
};

// Function TgClient.TgGfxAdventuresHub.USC_GetAdventureLeaderboard
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventuresHub_execUSC_GetAdventureLeaderboard_Parms
{
	int                                                nEventId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxAdventuresHub.USC_OpenEventCam_Delegate
// [0x00120000] 
struct UTgGfxAdventuresHub_execUSC_OpenEventCam_Delegate_Parms
{
};

// Function TgClient.TgGfxAdventuresHub.USC_GotoVault_Delegate
// [0x00120000] 
struct UTgGfxAdventuresHub_execUSC_GotoVault_Delegate_Parms
{
};

// Function TgClient.TgGfxAdventuresHub.USC_GetAdventureLeaderboard_Delegate
// [0x00120000] 
struct UTgGfxAdventuresHub_execUSC_GetAdventureLeaderboard_Delegate_Parms
{
};

// Function TgClient.TgGfxAdventuresHub.USC_SetUserViewedEvent_Delegate
// [0x00120000] 
struct UTgGfxAdventuresHub_execUSC_SetUserViewedEvent_Delegate_Parms
{
};

// Function TgClient.TgGfxBooster.UpdateBoosterTime
// [0x00020400] ( FUNC_Native )
struct UTgGfxBooster_execUpdateBoosterTime_Parms
{
};

// Function TgClient.TgGfxBooster.USC_ShowPurchasePopup
// [0x00020400] ( FUNC_Native )
struct UTgGfxBooster_execUSC_ShowPurchasePopup_Parms
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nQuantity;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxBooster.USC_ShowPurchasePopup_Delegate
// [0x00120000] 
struct UTgGfxBooster_execUSC_ShowPurchasePopup_Delegate_Parms
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nQuantity;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxBooster.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxBooster_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxCharacterBuilder.HasVendorData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxCharacterBuilder_execHasVendorData_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGfxCharacterBuilder.GetVendorData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxCharacterBuilder_execGetVendorData_Parms
{
	class UTgVendorData*                               ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGfxCharacterBuilder.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxCharacterBuilder_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxCharacterBuilder.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxCharacterBuilder_execUninitialize_Parms
{
};

// Function TgClient.TgGfxCharacterBuilder.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxCharacterBuilder_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxClanIconPicker.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxClanIconPicker_execInitialize_Parms
{
	class UTgMoviePlayer*                              pMP;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxClanIconPicker.USC_SelectIcon
// [0x00020400] ( FUNC_Native )
struct UTgGfxClanIconPicker_execUSC_SelectIcon_Parms
{
	int                                                nIconItemId;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxClanIconPicker.USC_SelectIcon_Delegate
// [0x00120000] 
struct UTgGfxClanIconPicker_execUSC_SelectIcon_Delegate_Parms
{
};

// Function TgClient.TgGFxDungeonCurrencies.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxDungeonCurrencies_execUninitialize_Parms
{
};

// Function TgClient.TgGFxDungeonCurrencies.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxDungeonCurrencies_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxEOMLobby.OnAcquisition
// [0x00020400] ( FUNC_Native )
struct UTgGfxEOMLobby_execOnAcquisition_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxEOMLobby.OnStats
// [0x00020400] ( FUNC_Native )
struct UTgGfxEOMLobby_execOnStats_Parms
{
	struct FString                                     instanceId;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxEOMLobby.OnFeedback
// [0x00020400] ( FUNC_Native )
struct UTgGfxEOMLobby_execOnFeedback_Parms
{
};

// Function TgClient.TgGfxEOMLobby.OnTwitter
// [0x00020400] ( FUNC_Native )
struct UTgGfxEOMLobby_execOnTwitter_Parms
{
	struct FString                                     instanceId;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxEOMLobby.OnFacebook
// [0x00020400] ( FUNC_Native )
struct UTgGfxEOMLobby_execOnFacebook_Parms
{
	struct FString                                     instanceId;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxEOMLobby.OnSendPlayerGift
// [0x00020400] ( FUNC_Native )
struct UTgGfxEOMLobby_execOnSendPlayerGift_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxEOMLobby.OnSendGiftPoints
// [0x00020400] ( FUNC_Native )
struct UTgGfxEOMLobby_execOnSendGiftPoints_Parms
{
	class UGFxObject*                                  pData;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxEOMLobby.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxEOMLobby_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxEOMLobby.USC_SendPlayerGift
// [0x00024400] ( FUNC_Native )
struct UTgGfxEOMLobby_execUSC_SendPlayerGift_Parms
{
	struct FString                                     PlayerName;                                       		// 0x0000 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     nPlayerId;                                        		// 0x0010 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxEOMLobby.ReceiveGiftedPoints
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGfxEOMLobby_eventReceiveGiftedPoints_Parms
{
	class UGFxObject*                                  Data;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxEOMLobby.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxEOMLobby_execUninitialize_Parms
{
};

// Function TgClient.TgGfxEOMLobby.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxEOMLobby_execInitialize_Parms
{
	class UTgMoviePlayer*                              pMoviePlayer;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxEventAchievements.CheckBundleOwned
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventAchievements_execCheckBundleOwned_Parms
{
};

// Function TgClient.TgGfxEventAchievements.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventAchievements_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxEventAchievements.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventAchievements_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxEventLeaderboard.USC_RequestEventLeaderboard
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxEventLeaderboard_execUSC_RequestEventLeaderboard_Parms
{
	int                                                EventIdx;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxEventLeaderboard.Chunk
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxEventLeaderboard_execChunk_Parms
{
	struct FString                                     dataIdx;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGfxEventLeaderboard.CreateChunk
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxEventLeaderboard_execCreateChunk_Parms
{
	struct FString                                     dataIdx;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGfxEventLeaderboard.UpdateFromChunk
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxEventLeaderboard_execUpdateFromChunk_Parms
{
	struct FString                                     dataIdx;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGfxEventLeaderboard.OnReceivePlayerNames
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxEventLeaderboard_execOnReceivePlayerNames_Parms
{
};

// Function TgClient.TgGfxEventLeaderboard.ReceivedAllData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxEventLeaderboard_execReceivedAllData_Parms
{
};

// Function TgClient.TgGfxEventLeaderboard.PopulateDropdown
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxEventLeaderboard_execPopulateDropdown_Parms
{
	TArray< int >                                      arrEventIds;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxEventLeaderboard.ShowLeaderboard
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxEventLeaderboard_execShowLeaderboard_Parms
{
	int                                                nStartIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nEndIndex;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxEventLeaderboard.RequestFriendAndWorldPlayerNames
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxEventLeaderboard_execRequestFriendAndWorldPlayerNames_Parms
{
};

// Function TgClient.TgGfxEventLeaderboard.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventLeaderboard_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFeedback.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxFeedback_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxFeedback.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxFeedback_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxGlossary.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxGlossary_execUninitialize_Parms
{
};

// Function TgClient.TgGfxGlossary.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxGlossary_execInitialize_Parms
{
	class UTgMoviePlayer*                              pMP;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxGlossary.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxGlossary_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxGods.OnAcquisition
// [0x00020400] ( FUNC_Native )
struct UTgGfxGods_execOnAcquisition_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxGods.UpdateUGPValue
// [0x00020400] ( FUNC_Native )
struct UTgGfxGods_execUpdateUGPValue_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxGods.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxGods_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxGods.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxGods_execUninitialize_Parms
{
};

// Function TgClient.TgGfxGods.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxGods_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxGods.USC_PlayGodVideo
// [0x00020400] ( FUNC_Native )
struct UTgGfxGods_execUSC_PlayGodVideo_Parms
{
	int                                                abilityNumber;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxGods.USC_PlayGodVideo_Delegate
// [0x00120000] 
struct UTgGfxGods_execUSC_PlayGodVideo_Delegate_Parms
{
};

// Function TgClient.TgGfxGods.USC_UpdateEmoteSelection
// [0x00020400] ( FUNC_Native )
struct UTgGfxGods_execUSC_UpdateEmoteSelection_Parms
{
	struct FString                                     emoteName;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxGods.USC_UpdateEmoteSelection_Delegate
// [0x00120000] 
struct UTgGfxGods_execUSC_UpdateEmoteSelection_Delegate_Parms
{
	struct FString                                     emoteName;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxGodsHistory.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxGodsHistory_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxGodsHistory.UpdateGodHistory
// [0x00020802] ( FUNC_Event )
struct UTgGfxGodsHistory_eventUpdateGodHistory_Parms
{
};

// Function TgClient.TgGfxGodsHistory.ASC_UpdateGodHistory
// [0x00020003] ( FUNC_Final )
struct UTgGfxGodsHistory_execASC_UpdateGodHistory_Parms
{
};

// Function TgClient.TgGfxGodsHistory.UpdateQueueData
// [0x00020802] ( FUNC_Event )
struct UTgGfxGodsHistory_eventUpdateQueueData_Parms
{
};

// Function TgClient.TgGfxGodsHistory.ASC_UpdateQueueData
// [0x00020003] ( FUNC_Final )
struct UTgGfxGodsHistory_execASC_UpdateQueueData_Parms
{
};

// Function TgClient.TgGfxGodsHistory.USC_ShowMatchDetails
// [0x00020400] ( FUNC_Native )
struct UTgGfxGodsHistory_execUSC_ShowMatchDetails_Parms
{
	int                                                pMatchID;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxGodsHistory.USC_GetHistoryData
// [0x00020400] ( FUNC_Native )
struct UTgGfxGodsHistory_execUSC_GetHistoryData_Parms
{
	int                                                queueId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxGodsHistory.USC_GetQueuesDropdown
// [0x00020400] ( FUNC_Native )
struct UTgGfxGodsHistory_execUSC_GetQueuesDropdown_Parms
{
	int                                                godId;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxGodsHistory.USC_ShowMatchDetails_Delegate
// [0x00120000] 
struct UTgGfxGodsHistory_execUSC_ShowMatchDetails_Delegate_Parms
{
	int                                                pMatchID;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxGodsHistory.USC_GetHistoryData_Delegate
// [0x00120000] 
struct UTgGfxGodsHistory_execUSC_GetHistoryData_Delegate_Parms
{
	int                                                queueId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxGodsHistory.USC_GetQueuesDropdown_Delegate
// [0x00120000] 
struct UTgGfxGodsHistory_execUSC_GetQueuesDropdown_Delegate_Parms
{
	int                                                godId;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxGuides.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxGuides_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxHudItems.UpdateGlow
// [0x00020802] ( FUNC_Event )
struct UTgGfxHudItems_eventUpdateGlow_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      Visibility : 1;                                   		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGfxHudItems.ASC_UpdateGlow
// [0x00020003] ( FUNC_Final )
struct UTgGfxHudItems_execASC_UpdateGlow_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      Visibility : 1;                                   		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGfxHudItems.USC_SetupItemDisplay
// [0x00020400] ( FUNC_Native )
struct UTgGfxHudItems_execUSC_SetupItemDisplay_Parms
{
};

// Function TgClient.TgGfxHudItems.USC_SetupItemDisplay_Delegate
// [0x00120000] 
struct UTgGfxHudItems_execUSC_SetupItemDisplay_Delegate_Parms
{
};

// Function TgClient.TgGfxHudItems.CheckCurrency
// [0x00020400] ( FUNC_Native )
struct UTgGfxHudItems_execCheckCurrency_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxHudItems.CheckWishList
// [0x00020400] ( FUNC_Native )
struct UTgGfxHudItems_execCheckWishList_Parms
{
	unsigned long                                      bPurge : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGfxHudItems.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxHudItems_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxHudItems.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxHudItems_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxHudNotify.OnGameUIEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxHudNotify_execOnGameUIEvent_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxHudNotify.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxHudNotify_execUninitialize_Parms
{
};

// Function TgClient.TgGfxHudNotify.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxHudNotify_execInitialize_Parms
{
	class UTgMoviePlayer*                              pMP;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxHudNotify.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxHudNotify_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxHudUpgrade.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxHudUpgrade_execInitialize_Parms
{
	class UTgMoviePlayer*                              pMP;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxHudUpgrade.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxHudUpgrade_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxIntro.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxIntro_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxItemToast.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxItemToast_execUninitialize_Parms
{
};

// Function TgClient.TgGfxItemToast.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxItemToast_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxItemToast.ToastItem
// [0x00020802] ( FUNC_Event )
struct UTgGfxItemToast_eventToastItem_Parms
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxItemToast.ASC_ToastItem
// [0x00020003] ( FUNC_Final )
struct UTgGfxItemToast_execASC_ToastItem_Parms
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxLeaderboard.RequestCharacterLeaderboard
// [0x00020400] ( FUNC_Native )
struct UTgGfxLeaderboard_execRequestCharacterLeaderboard_Parms
{
	int                                                classId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                rankType;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxLeaderboard.ShowLeaderboard
// [0x00024400] ( FUNC_Native )
struct UTgGfxLeaderboard_execShowLeaderboard_Parms
{
	struct FString                                     boardName;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                aValue;                                           		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                Option;                                           		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgGfxLeaderboard.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxLeaderboard_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxLeaderboard.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxLeaderboard_execUninitialize_Parms
{
};

// Function TgClient.TgGfxLeaderboard.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxLeaderboard_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxLoadouts.OnAcquisition
// [0x00020400] ( FUNC_Native )
struct UTgGfxLoadouts_execOnAcquisition_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxLoadouts.RefreshBoosterTimer
// [0x00020400] ( FUNC_Native )
struct UTgGfxLoadouts_execRefreshBoosterTimer_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxLoadouts.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxLoadouts_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxLoadouts.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxLoadouts_execUninitialize_Parms
{
};

// Function TgClient.TgGfxLoadouts.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxLoadouts_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxLobbyMain.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxLobbyMain_execUninitialize_Parms
{
};

// Function TgClient.TgGfxLobbyMain.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxLobbyMain_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxMatchDetails.MatchDataUpdated
// [0x00020802] ( FUNC_Event )
struct UTgGfxMatchDetails_eventMatchDataUpdated_Parms
{
};

// Function TgClient.TgGfxMatchDetails.ASC_MatchDataUpdated
// [0x00020003] ( FUNC_Final )
struct UTgGfxMatchDetails_execASC_MatchDataUpdated_Parms
{
};

// Function TgClient.TgGfxMatchDetails.USC_SearchByMatchId
// [0x00020400] ( FUNC_Native )
struct UTgGfxMatchDetails_execUSC_SearchByMatchId_Parms
{
	struct FString                                     matchId;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxMatchDetails.USC_SearchByMatchId_Delegate
// [0x00120000] 
struct UTgGfxMatchDetails_execUSC_SearchByMatchId_Delegate_Parms
{
	struct FString                                     matchId;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxMatchDetails.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxMatchDetails_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPartyManagement.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxPartyManagement_execUninitialize_Parms
{
};

// Function TgClient.TgGfxPartyManagement.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxPartyManagement_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPartyManagement.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxPartyManagement_execInitialize_Parms
{
	class UTgMoviePlayer*                              pMP;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPlayerProfile.OnFriendSelector
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxPlayerProfile_execOnFriendSelector_Parms
{
	class UTgEventDataItem*                            pBaseEvent;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPlayerProfile.PlayerNameUpdated
// [0x00020802] ( FUNC_Event )
struct UTgGfxPlayerProfile_eventPlayerNameUpdated_Parms
{
};

// Function TgClient.TgGfxPlayerProfile.ASC_PlayerNameUpdated
// [0x00020003] ( FUNC_Final )
struct UTgGfxPlayerProfile_execASC_PlayerNameUpdated_Parms
{
};

// Function TgClient.TgGfxPlayerProfile.DropDownUpdated
// [0x00020802] ( FUNC_Event )
struct UTgGfxPlayerProfile_eventDropDownUpdated_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPlayerProfile.ASC_DropDownUpdated
// [0x00020003] ( FUNC_Final )
struct UTgGfxPlayerProfile_execASC_DropDownUpdated_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPlayerProfile.USC_TabSelected
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxPlayerProfile_execUSC_TabSelected_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPlayerProfile.USC_SearchByName
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxPlayerProfile_execUSC_SearchByName_Parms
{
	struct FString                                     PlayerName;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxPlayerProfile.USC_SetFilter
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxPlayerProfile_execUSC_SetFilter_Parms
{
	int                                                filterIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                val;                                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxPlayerProfile.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxPlayerProfile_execUninitialize_Parms
{
};

// Function TgClient.TgGfxPlayerProfile.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxPlayerProfile_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxProfileAccolade.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxProfileAccolade_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxProfileAccolade.AccoladeDataUpdated
// [0x00020802] ( FUNC_Event )
struct UTgGfxProfileAccolade_eventAccoladeDataUpdated_Parms
{
};

// Function TgClient.TgGfxProfileAccolade.ASC_AccoladeDataUpdated
// [0x00020003] ( FUNC_Final )
struct UTgGfxProfileAccolade_execASC_AccoladeDataUpdated_Parms
{
};

// Function TgClient.TgGfxProfileAchievements.CheckIfHasMasterList
// [0x00020802] ( FUNC_Event )
struct UTgGfxProfileAchievements_eventCheckIfHasMasterList_Parms
{
};

// Function TgClient.TgGfxProfileAchievements.ASC_CheckIfHasMasterList
// [0x00020003] ( FUNC_Final )
struct UTgGfxProfileAchievements_execASC_CheckIfHasMasterList_Parms
{
};

// Function TgClient.TgGfxProfileAchievements.UpdateAchievements
// [0x00020802] ( FUNC_Event )
struct UTgGfxProfileAchievements_eventUpdateAchievements_Parms
{
};

// Function TgClient.TgGfxProfileAchievements.ASC_UpdateAchievements
// [0x00020003] ( FUNC_Final )
struct UTgGfxProfileAchievements_execASC_UpdateAchievements_Parms
{
};

// Function TgClient.TgGfxProfileAchievements.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxProfileAchievements_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxProfileHistory.QueueDataUpdated
// [0x00020802] ( FUNC_Event )
struct UTgGfxProfileHistory_eventQueueDataUpdated_Parms
{
};

// Function TgClient.TgGfxProfileHistory.ASC_QueueDataUpdated
// [0x00020003] ( FUNC_Final )
struct UTgGfxProfileHistory_execASC_QueueDataUpdated_Parms
{
};

// Function TgClient.TgGfxProfileHistory.MatchesDataUpdated
// [0x00020802] ( FUNC_Event )
struct UTgGfxProfileHistory_eventMatchesDataUpdated_Parms
{
};

// Function TgClient.TgGfxProfileHistory.ASC_MatchesDataUpdated
// [0x00020003] ( FUNC_Final )
struct UTgGfxProfileHistory_execASC_MatchesDataUpdated_Parms
{
};

// Function TgClient.TgGfxProfileHistory.USC_ShowDetails
// [0x00020400] ( FUNC_Native )
struct UTgGfxProfileHistory_execUSC_ShowDetails_Parms
{
	struct FString                                     matchId;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxProfileHistory.USC_SetQueueFilter
// [0x00020400] ( FUNC_Native )
struct UTgGfxProfileHistory_execUSC_SetQueueFilter_Parms
{
	int                                                queueId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxProfileHistory.USC_SetGodsFilter
// [0x00020400] ( FUNC_Native )
struct UTgGfxProfileHistory_execUSC_SetGodsFilter_Parms
{
	struct FString                                     sFilterGod;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxProfileHistory.USC_ShowDetails_Delegate
// [0x00120000] 
struct UTgGfxProfileHistory_execUSC_ShowDetails_Delegate_Parms
{
	struct FString                                     matchId;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxProfileHistory.USC_SetQueueFilter_Delegate
// [0x00120000] 
struct UTgGfxProfileHistory_execUSC_SetQueueFilter_Delegate_Parms
{
	int                                                queueId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxProfileHistory.USC_SetGodsFilter_Delegate
// [0x00120000] 
struct UTgGfxProfileHistory_execUSC_SetGodsFilter_Delegate_Parms
{
	struct FString                                     sFilterGod;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxProfileHistory.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxProfileHistory_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxProfileLeagueStats.UpdateLeagueStats
// [0x00020802] ( FUNC_Event )
struct UTgGfxProfileLeagueStats_eventUpdateLeagueStats_Parms
{
};

// Function TgClient.TgGfxProfileLeagueStats.ASC_UpdateLeagueStats
// [0x00020003] ( FUNC_Final )
struct UTgGfxProfileLeagueStats_execASC_UpdateLeagueStats_Parms
{
};

// Function TgClient.TgGfxProfileLeagueStats.UpdateQueueLeagues
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxProfileLeagueStats_execUpdateQueueLeagues_Parms
{
};

// Function TgClient.TgGfxProfileLeagueStats.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxProfileLeagueStats_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxProfileMastery.UpdateAll
// [0x00020802] ( FUNC_Event )
struct UTgGfxProfileMastery_eventUpdateAll_Parms
{
};

// Function TgClient.TgGfxProfileMastery.asc_updateAll
// [0x00020003] ( FUNC_Final )
struct UTgGfxProfileMastery_execasc_updateAll_Parms
{
};

// Function TgClient.TgGfxProfileMastery.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxProfileMastery_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxProfileOverview.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxProfileOverview_execUninitialize_Parms
{
};

// Function TgClient.TgGfxProfileOverview.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxProfileOverview_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxProfileOverview.UpdateSelectedAchievements
// [0x00020802] ( FUNC_Event )
struct UTgGfxProfileOverview_eventUpdateSelectedAchievements_Parms
{
};

// Function TgClient.TgGfxProfileOverview.ASC_UpdateSelectedAchievements
// [0x00020003] ( FUNC_Final )
struct UTgGfxProfileOverview_execASC_UpdateSelectedAchievements_Parms
{
};

// Function TgClient.TgGfxProfileOverview.LeagueDataUpdated
// [0x00020802] ( FUNC_Event )
struct UTgGfxProfileOverview_eventLeagueDataUpdated_Parms
{
};

// Function TgClient.TgGfxProfileOverview.ASC_LeagueDataUpdated
// [0x00020003] ( FUNC_Final )
struct UTgGfxProfileOverview_execASC_LeagueDataUpdated_Parms
{
};

// Function TgClient.TgGfxProfileOverview.ProfileDataUpdated
// [0x00020802] ( FUNC_Event )
struct UTgGfxProfileOverview_eventProfileDataUpdated_Parms
{
};

// Function TgClient.TgGfxProfileOverview.ASC_ProfileDataUpdated
// [0x00020003] ( FUNC_Final )
struct UTgGfxProfileOverview_execASC_ProfileDataUpdated_Parms
{
};

// Function TgClient.TgGfxProfileOverview.USC_NavigateToClan
// [0x00020400] ( FUNC_Native )
struct UTgGfxProfileOverview_execUSC_NavigateToClan_Parms
{
};

// Function TgClient.TgGfxProfileOverview.USC_NavigateToClan_Delegate
// [0x00120000] 
struct UTgGfxProfileOverview_execUSC_NavigateToClan_Delegate_Parms
{
};

// Function TgClient.TgGfxProfilePage.OnFriendSelector
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxProfilePage_execOnFriendSelector_Parms
{
	class UTgEventDataItem*                            pBaseEvent;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxProfilePage.UpdateAvailable
// [0x00020802] ( FUNC_Event )
struct UTgGfxProfilePage_eventUpdateAvailable_Parms
{
	unsigned long                                      vis : 1;                                          		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGfxProfilePage.ASC_UpdateAvailable
// [0x00020003] ( FUNC_Final )
struct UTgGfxProfilePage_execASC_UpdateAvailable_Parms
{
	unsigned long                                      vis : 1;                                          		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGfxProfilePage.UpdateCallout
// [0x00020802] ( FUNC_Event )
struct UTgGfxProfilePage_eventUpdateCallout_Parms
{
};

// Function TgClient.TgGfxProfilePage.ASC_UpdateCallout
// [0x00020003] ( FUNC_Final )
struct UTgGfxProfilePage_execASC_UpdateCallout_Parms
{
};

// Function TgClient.TgGfxProfilePage.UpdatePlayer
// [0x00020802] ( FUNC_Event )
struct UTgGfxProfilePage_eventUpdatePlayer_Parms
{
};

// Function TgClient.TgGfxProfilePage.ASC_UpdatePlayer
// [0x00020003] ( FUNC_Final )
struct UTgGfxProfilePage_execASC_UpdatePlayer_Parms
{
};

// Function TgClient.TgGfxProfilePage.UpdateTab
// [0x00020802] ( FUNC_Event )
struct UTgGfxProfilePage_eventUpdateTab_Parms
{
};

// Function TgClient.TgGfxProfilePage.ASC_UpdateTab
// [0x00020003] ( FUNC_Final )
struct UTgGfxProfilePage_execASC_UpdateTab_Parms
{
};

// Function TgClient.TgGfxProfilePage.USC_GiftPlayer
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxProfilePage_execUSC_GiftPlayer_Parms
{
	unsigned long                                      isYourself : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGfxProfilePage.USC_TwitchLink
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxProfilePage_execUSC_TwitchLink_Parms
{
};

// Function TgClient.TgGfxProfilePage.USC_UpdatePrivacy
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxProfilePage_execUSC_UpdatePrivacy_Parms
{
};

// Function TgClient.TgGfxProfilePage.USC_AddFriend
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxProfilePage_execUSC_AddFriend_Parms
{
};

// Function TgClient.TgGfxProfilePage.USC_TabSelected
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxProfilePage_execUSC_TabSelected_Parms
{
	int                                                tabId;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxProfilePage.USC_SearchPlayerByName
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxProfilePage_execUSC_SearchPlayerByName_Parms
{
	struct FString                                     PlayerName;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxProfilePage.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxProfilePage_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxProfileWorshiper.FilterDataUpdated
// [0x00020802] ( FUNC_Event )
struct UTgGfxProfileWorshiper_eventFilterDataUpdated_Parms
{
};

// Function TgClient.TgGfxProfileWorshiper.ASC_FilterDataUpdated
// [0x00020003] ( FUNC_Final )
struct UTgGfxProfileWorshiper_execASC_FilterDataUpdated_Parms
{
};

// Function TgClient.TgGfxProfileWorshiper.GodMasteryUpdated
// [0x00020802] ( FUNC_Event )
struct UTgGfxProfileWorshiper_eventGodMasteryUpdated_Parms
{
};

// Function TgClient.TgGfxProfileWorshiper.ASC_GodMasteryUpdated
// [0x00020003] ( FUNC_Final )
struct UTgGfxProfileWorshiper_execASC_GodMasteryUpdated_Parms
{
};

// Function TgClient.TgGfxProfileWorshiper.USC_Search
// [0x00020400] ( FUNC_Native )
struct UTgGfxProfileWorshiper_execUSC_Search_Parms
{
	struct FString                                     searchText;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxProfileWorshiper.USC_Search_Delegate
// [0x00120000] 
struct UTgGfxProfileWorshiper_execUSC_Search_Delegate_Parms
{
	struct FString                                     searchText;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxProfileWorshiper.USC_SetGodMasteryFilter
// [0x00020400] ( FUNC_Native )
struct UTgGfxProfileWorshiper_execUSC_SetGodMasteryFilter_Parms
{
	int                                                filterId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxProfileWorshiper.USC_SetGodMasteryFilter_Delegate
// [0x00120000] 
struct UTgGfxProfileWorshiper_execUSC_SetGodMasteryFilter_Delegate_Parms
{
	int                                                filterId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxProfileWorshiper.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxProfileWorshiper_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxQuestWindow.UpdateQuest
// [0x00020802] ( FUNC_Event )
struct UTgGfxQuestWindow_eventUpdateQuest_Parms
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Goal;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     msg;                                              		// 0x000C (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxQuestWindow.ASC_UpdateQuest
// [0x00020003] ( FUNC_Final )
struct UTgGfxQuestWindow_execASC_UpdateQuest_Parms
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Goal;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     msg;                                              		// 0x000C (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxQuestWindow.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxQuestWindow_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxRacerDispatcher.USC_CheckForUpdates
// [0x00020400] ( FUNC_Native )
struct UTgGfxRacerDispatcher_execUSC_CheckForUpdates_Parms
{
};

// Function TgClient.TgGfxRacerDispatcher.USC_CheckForUpdates_Delegate
// [0x00120000] 
struct UTgGfxRacerDispatcher_execUSC_CheckForUpdates_Delegate_Parms
{
};

// Function TgClient.TgGfxRacerDispatcher.DataChange
// [0x00020802] ( FUNC_Event )
struct UTgGfxRacerDispatcher_eventDataChange_Parms
{
	class UGFxObject*                                  Data;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxRacerDispatcher.ASC_DataChange
// [0x00020003] ( FUNC_Final )
struct UTgGfxRacerDispatcher_execASC_DataChange_Parms
{
	class UGFxObject*                                  Obj;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxRacerDispatcher.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxRacerDispatcher_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxReferralPopup.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxReferralPopup_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxReferralPopup.UpdateFriendList
// [0x00020802] ( FUNC_Event )
struct UTgGfxReferralPopup_eventUpdateFriendList_Parms
{
};

// Function TgClient.TgGfxReferralPopup.ASC_UpdateFriendList
// [0x00020003] ( FUNC_Final )
struct UTgGfxReferralPopup_execASC_UpdateFriendList_Parms
{
};

// Function TgClient.TgGfxReferralPopup.USC_SendFriendReferral
// [0x00020400] ( FUNC_Native )
struct UTgGfxReferralPopup_execUSC_SendFriendReferral_Parms
{
	struct FString                                     sQQId;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sMessage;                                         		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sPlayerName;                                      		// 0x0020 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxReferralPopup.USC_SendFriendReferral_Delegate
// [0x00120000] 
struct UTgGfxReferralPopup_execUSC_SendFriendReferral_Delegate_Parms
{
};

// Function TgClient.TgGfxReferralReward.USC_OpenReferFriendReward
// [0x00020400] ( FUNC_Native )
struct UTgGfxReferralReward_execUSC_OpenReferFriendReward_Parms
{
};

// Function TgClient.TgGfxReferralReward.USC_OpenReferFriendReward_Delegate
// [0x00120000] 
struct UTgGfxReferralReward_execUSC_OpenReferFriendReward_Delegate_Parms
{
};

// Function TgClient.TgGfxReferralReward.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxReferralReward_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxReferrals.UpdateAchievements
// [0x00020802] ( FUNC_Event )
struct UTgGfxReferrals_eventUpdateAchievements_Parms
{
};

// Function TgClient.TgGfxReferrals.ASC_UpdateAchievements
// [0x00020003] ( FUNC_Final )
struct UTgGfxReferrals_execASC_UpdateAchievements_Parms
{
};

// Function TgClient.TgGfxReferrals.UpdatePlayerList
// [0x00020802] ( FUNC_Event )
struct UTgGfxReferrals_eventUpdatePlayerList_Parms
{
};

// Function TgClient.TgGfxReferrals.ASC_UpdatePlayerList
// [0x00020003] ( FUNC_Final )
struct UTgGfxReferrals_execASC_UpdatePlayerList_Parms
{
};

// Function TgClient.TgGfxReferrals.USC_OpenReferFriend
// [0x00020400] ( FUNC_Native )
struct UTgGfxReferrals_execUSC_OpenReferFriend_Parms
{
};

// Function TgClient.TgGfxReferrals.USC_OpenReferFriend_Delegate
// [0x00120000] 
struct UTgGfxReferrals_execUSC_OpenReferFriend_Delegate_Parms
{
};

// Function TgClient.TgGfxReferrals.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxReferrals_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxReferralSelector.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxReferralSelector_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxReferralSelector.UpdateFriendList
// [0x00020802] ( FUNC_Event )
struct UTgGfxReferralSelector_eventUpdateFriendList_Parms
{
};

// Function TgClient.TgGfxReferralSelector.ASC_UpdateFriendList
// [0x00020003] ( FUNC_Final )
struct UTgGfxReferralSelector_execASC_UpdateFriendList_Parms
{
};

// Function TgClient.TgGfxReferralSelector.USC_SelectReferral
// [0x00020400] ( FUNC_Native )
struct UTgGfxReferralSelector_execUSC_SelectReferral_Parms
{
	struct FString                                     sQQId;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGfxReferralSelector.USC_SelectReferral_Delegate
// [0x00120000] 
struct UTgGfxReferralSelector_execUSC_SelectReferral_Delegate_Parms
{
};

// Function TgClient.TgGfxSettingsMenu.USC_OpenQueueWarning
// [0x00020400] ( FUNC_Native )
struct UTgGfxSettingsMenu_execUSC_OpenQueueWarning_Parms
{
};

// Function TgClient.TgGfxSettingsMenu.USC_OpenQueueWarning_Delegate
// [0x00120000] 
struct UTgGfxSettingsMenu_execUSC_OpenQueueWarning_Delegate_Parms
{
};

// Function TgClient.TgGfxSettingsMenu.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxSettingsMenu_execUninitialize_Parms
{
};

// Function TgClient.TgGfxSettingsMenu.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxSettingsMenu_execInitialize_Parms
{
	class UTgMoviePlayer*                              pMoviePlayer;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxSpectatorHud.SendGraphData
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGfxSpectatorHud_eventSendGraphData_Parms
{
	class UGFxObject*                                  Obj;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxSpectatorHud.USC_UpdatePlayerList
// [0x00020400] ( FUNC_Native )
struct UTgGfxSpectatorHud_execUSC_UpdatePlayerList_Parms
{
	class UGFxObject*                                  pPlayerList;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nLength;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxSpectatorHud.USC_UpdatePlayerList_Delegate
// [0x00120000] 
struct UTgGfxSpectatorHud_execUSC_UpdatePlayerList_Delegate_Parms
{
	class UGFxObject*                                  pPlayerList;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nLength;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxSpectatorHud.USC_SetMenuIsOpen
// [0x00020400] ( FUNC_Native )
struct UTgGfxSpectatorHud_execUSC_SetMenuIsOpen_Parms
{
	unsigned long                                      bOpen : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGfxSpectatorHud.USC_SetMenuIsOpen_Delegate
// [0x00120000] 
struct UTgGfxSpectatorHud_execUSC_SetMenuIsOpen_Delegate_Parms
{
	unsigned long                                      bOpen : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGfxSpectatorHud.USC_UpdateStat
// [0x00020400] ( FUNC_Native )
struct UTgGfxSpectatorHud_execUSC_UpdateStat_Parms
{
	int                                                pawnId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxSpectatorHud.USC_UpdateStat_Delegate
// [0x00120000] 
struct UTgGfxSpectatorHud_execUSC_UpdateStat_Delegate_Parms
{
	int                                                pawnId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxSpectatorHud.OnGameHUDEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxSpectatorHud_execOnGameHUDEvent_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxSpectatorHud.OnSpectatorEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxSpectatorHud_execOnSpectatorEvent_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxSpectatorHud.UpdateGraph
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGfxSpectatorHud_execUpdateGraph_Parms
{
};

// Function TgClient.TgGfxSpectatorHud.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxSpectatorHud_execUninitialize_Parms
{
};

// Function TgClient.TgGfxSpectatorHud.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxSpectatorHud_execInitialize_Parms
{
	class UTgMoviePlayer*                              pParentMovie;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxStoreChestPC.OnAcquisition
// [0x00020400] ( FUNC_Native )
struct UTgGfxStoreChestPC_execOnAcquisition_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxStoreChestPC.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxStoreChestPC_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxStoreChestPC.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxStoreChestPC_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxTreasurePicker.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxTreasurePicker_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxTreasurePicker.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxTreasurePicker_execUninitialize_Parms
{
};

// Function TgClient.TgGfxTreasurePicker.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxTreasurePicker_execInitialize_Parms
{
	class UTgMoviePlayer*                              pMoviePlayer;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxWisdomMain.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxWisdomMain_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxWisdomWeb.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxWisdomWeb_execUninitialize_Parms
{
};

// Function TgClient.TgGfxWisdomWeb.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxWisdomWeb_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxWisdomWeb.ASC_UpdateStreamList
// [0x00020003] ( FUNC_Final )
struct UTgGfxWisdomWeb_execASC_UpdateStreamList_Parms
{
};

// Function TgClient.TgGfxWisdomWeb.UpdateStreamList
// [0x00020802] ( FUNC_Event )
struct UTgGfxWisdomWeb_eventUpdateStreamList_Parms
{
};

// Function TgClient.TgGfxWisdomWeb.USC_StartStreamData
// [0x00020400] ( FUNC_Native )
struct UTgGfxWisdomWeb_execUSC_StartStreamData_Parms
{
	int                                                streamId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      external : 1;                                     		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              X;                                                		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Width;                                            		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Height;                                           		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              widthReal;                                        		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              heightReal;                                       		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxWisdomWeb.USC_StartStreamData_Delegate
// [0x00120000] 
struct UTgGfxWisdomWeb_execUSC_StartStreamData_Delegate_Parms
{
};

// Function TgClient.TgStreamManager.OpenStream
// [0x00024400] ( FUNC_Native )
struct UTgStreamManager_execOpenStream_Parms
{
	int                                                surfaceId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     URL;                                              		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      external : 1;                                     		// 0x0014 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              X;                                                		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Width;                                            		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Height;                                           		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              widthReal;                                        		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              heightReal;                                       		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      joinChat : 1;                                     		// 0x0030 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0034 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameDataHandler.ChatInput_SetReplyName
// [0x00020400] ( FUNC_Native )
struct UTgGameDataHandler_execChatInput_SetReplyName_Parms
{
	struct FString                                     sSenderName;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameDataHandler.DispatchEvent_VendorStore_UpdateInventory
// [0x00020400] ( FUNC_Native )
struct UTgGameDataHandler_execDispatchEvent_VendorStore_UpdateInventory_Parms
{
};

// Function TgClient.TgGameDataHandler.DispatchEvent_VendorStore_UpdateStats
// [0x00020400] ( FUNC_Native )
struct UTgGameDataHandler_execDispatchEvent_VendorStore_UpdateStats_Parms
{
};

// Function TgClient.TgGameDataHandler.InitializeDataHandler
// [0x00020400] ( FUNC_Native )
struct UTgGameDataHandler_execInitializeDataHandler_Parms
{
};

// Function TgClient.TgGameMoviePlayer.DelegateGFxList
// [0x00120000] 
struct UTgGameMoviePlayer_execDelegateGFxList_Parms
{
	class UGFxObject*                                  List;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_rotate_lobby_model
// [0x00020202] ( FUNC_Exec )
struct UTgGameMoviePlayer_execusc_rotate_lobby_model_Parms
{
	float                                              fValue;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ATgLobbyHUD*                              lobby;                                            		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function TgClient.TgGameMoviePlayer.usc_activate_key
// [0x00020202] ( FUNC_Exec )
struct UTgGameMoviePlayer_execusc_activate_key_Parms
{
};

// Function TgClient.TgGameMoviePlayer.CacheLoggedInGamepad
// [0x00020802] ( FUNC_Event )
struct UTgGameMoviePlayer_eventCacheLoggedInGamepad_Parms
{
	// class UOnlineSubsystem*                         pOnlineSub;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function TgClient.TgGameMoviePlayer.SetUISetting
// [0x00020202] ( FUNC_Exec )
struct UTgGameMoviePlayer_execSetUISetting_Parms
{
	struct FString                                     Setting;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Value;                                            		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.CheckSpecialInput
// [0x00020002] 
struct UTgGameMoviePlayer_execCheckSpecialInput_Parms
{
	class ATgPlayerController*                         TgPC;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ButtonName;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Event;                                            		// 0x0010 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.FilterButtonInput
// [0x00820802] ( FUNC_Event )
struct UTgGameMoviePlayer_eventFilterButtonInput_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Event;                                            		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATgPlayerController*                      TgPC;                                             		// 0x0014 (0x0008) [0x0000000000000000]              
	// class UTgPlayerInput*                           tgPI;                                             		// 0x001C (0x0008) [0x0000000000000000]              
	// struct FKeyBind                                 Bind;                                             		// 0x0024 (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class ATgSpectatorController*                   SpectatorController;                              		// 0x0040 (0x0008) [0x0000000000000000]              
};

// Function TgClient.TgGameMoviePlayer.WidgetUnloaded
// [0x00020802] ( FUNC_Event )
struct UTgGameMoviePlayer_eventWidgetUnloaded_Parms
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.WidgetInitialized
// [0x00020802] ( FUNC_Event )
struct UTgGameMoviePlayer_eventWidgetInitialized_Parms
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.GetBrowserType
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execGetBrowserType_Parms
{
	int                                                nURLType;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.usc_forceFlushActionLog
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_forceFlushActionLog_Parms
{
};

// Function TgClient.TgGameMoviePlayer.ToggleCombatLog
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execToggleCombatLog_Parms
{
};

// Function TgClient.TgGameMoviePlayer.usc_get_ui_display_mode
// [0x00020202] ( FUNC_Exec )
struct UTgGameMoviePlayer_execusc_get_ui_display_mode_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.NativeTick
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execNativeTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.UpdateTutorialImage
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execUpdateTutorialImage_Parms
{
	unsigned long                                      show : 1;                                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                HeaderMsgId;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImageId;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                msgId;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.HandleEscapeKey
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execHandleEscapeKey_Parms
{
};

// Function TgClient.TgGameMoviePlayer.PostInit
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execPostInit_Parms
{
};

// Function TgClient.TgGameMoviePlayer.UpdateQuestUI
// [0x00024400] ( FUNC_Native )
struct UTgGameMoviePlayer_execUpdateQuestUI_Parms
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                Goal;                                             		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                msgId;                                            		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_allowSpaceBar
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_allowSpaceBar_Parms
{
	unsigned long                                      bAllow : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_getPassiveMeterPath
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_getPassiveMeterPath_Parms
{
	int                                                BotID;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.RunIntroMovie
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execRunIntroMovie_Parms
{
	unsigned long                                      bRun : 1;                                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.InvokeRenderTargetReady
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execInvokeRenderTargetReady_Parms
{
};

// Function TgClient.TgGameMoviePlayer.SetRenderTargetCallback
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execSetRenderTargetCallback_Parms
{
	class UGFxObject*                                  targetObj;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      addObj : 1;                                       		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_autoConfigureSettings
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_autoConfigureSettings_Parms
{
};

// Function TgClient.TgGameMoviePlayer.usc_goto_item
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_goto_item_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bUseAltRedirect : 1;                              		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_send_chat
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_send_chat_Parms
{
	int                                                nChannel;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     msg;                                              		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Recipient;                                        		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.usc_toggle_player_mute
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_toggle_player_mute_Parms
{
	struct FString                                     sPlayerName;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sUnused;                                          		// 0x0010 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     nPlayerId;                                        		// 0x0020 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_lobbyFeaturesShouldShow
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_lobbyFeaturesShouldShow_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.usc_isPlayingTutorial
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_isPlayingTutorial_Parms
{
	unsigned long                                      Toggle : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_stopSoundCue
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_stopSoundCue_Parms
{
	struct FString                                     soundTheme;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     SoundEventName;                                   		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_join_channel
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_join_channel_Parms
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_GetWinningTeamName
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_GetWinningTeamName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_get_device_tooltip
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_get_device_tooltip_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nRank;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_force_purchase_current_item
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_force_purchase_current_item_Parms
{
};

// Function TgClient.TgGameMoviePlayer.usc_forward_feature2
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_forward_feature2_Parms
{
	int                                                pItemType;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     pItemData;                                        		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     pItemData2;                                       		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_forward_feature
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_forward_feature_Parms
{
	int                                                pItemType;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     pItemData;                                        		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_class_loading_resume
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_class_loading_resume_Parms
{
};

// Function TgClient.TgGameMoviePlayer.usc_class_loading_suspend
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_class_loading_suspend_Parms
{
};

// Function TgClient.TgGameMoviePlayer.usc_clearReferral
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_clearReferral_Parms
{
	struct FString                                     sExtId;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_ListenNextVivoxBtn
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_ListenNextVivoxBtn_Parms
{
};

// Function TgClient.TgGameMoviePlayer.usc_GetLocalPlayerId
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_GetLocalPlayerId_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.usc_request_account_info
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_request_account_info_Parms
{
	int                                                nType;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.OnHUDStateChange
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execOnHUDStateChange_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.OnGameUIEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGameMoviePlayer_execOnGameUIEvent_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.ProcessUIEvents
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execProcessUIEvents_Parms
{
};

// Function TgClient.TgGameMoviePlayer.SetRenderTargetEnabled
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execSetRenderTargetEnabled_Parms
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                surfaceId;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                X;                                                		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Y;                                                		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              widthReal;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              heightReal;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Width;                                            		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Height;                                           		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.GetClanData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGameMoviePlayer_execGetClanData_Parms
{
	class UTgDataGroup_Clan*                           ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.SetLoginReady
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execSetLoginReady_Parms
{
	unsigned long                                      fromIntro : 1;                                    		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.ShowLoginUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execShowLoginUI_Parms
{
};

// Function TgClient.TgGameMoviePlayer.ShowNormalUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execShowNormalUI_Parms
{
};

// Function TgClient.TgGameMoviePlayer.SetHUDVisiblity
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execSetHUDVisiblity_Parms
{
};

// Function TgClient.TgGameMoviePlayer.USC_ShowLeaderboard
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execUSC_ShowLeaderboard_Parms
{
	struct FString                                     sName;                                            		// 0x0000 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                nValue;                                           		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                nOption;                                          		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_Scene_Manager_Scene_Unloaded
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execusc_Scene_Manager_Scene_Unloaded_Parms
{
	struct FString                                     sSceneName;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_Scene_Manager_Scene_Loaded
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execusc_Scene_Manager_Scene_Loaded_Parms
{
	struct FString                                     sSceneName;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_getItemData
// [0x00024400] ( FUNC_Native )
struct UTgGameMoviePlayer_execusc_getItemData_Parms
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                quantityCount;                                    		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                vendorId;                                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x000C (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.usc_resize_browser
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_resize_browser_Parms
{
	int                                                surfaceId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              X;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Width;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Height;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              widthReal;                                        		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              heightReal;                                       		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.usc_enable_browser_input
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_enable_browser_input_Parms
{
	unsigned long                                      bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.UnloadHudSection
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execUnloadHudSection_Parms
{
	struct FString                                     Section;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_rejectNotification
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_rejectNotification_Parms
{
	int                                                nNotificationType;                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nId;                                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_acceptNotification
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_acceptNotification_Parms
{
	int                                                nNotificationType;                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nId;                                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_test_voice_pack
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_test_voice_pack_Parms
{
	int                                                nVoicePackId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nSkinId;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_show_skin
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_show_skin_Parms
{
	int                                                nSkinId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_request_treasure_roll
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_request_treasure_roll_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                CurrencyType;                                     		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.is_item_owned
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execis_item_owned_Parms
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.usc_is_item_owned
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_is_item_owned_Parms
{
	struct FString                                     ItemId;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.usc_unregister_mouse_region
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_unregister_mouse_region_Parms
{
	struct FString                                     Key;                                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_register_mouse_region
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_register_mouse_region_Parms
{
	struct FString                                     Key;                                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                X;                                                		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Y;                                                		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Width;                                            		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Height;                                           		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_is_in_game
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_is_in_game_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.EndLobbyPlayback
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execEndLobbyPlayback_Parms
{
};

// Function TgClient.TgGameMoviePlayer.CancelPlayback
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execCancelPlayback_Parms
{
};

// Function TgClient.TgGameMoviePlayer.OnDemoReady
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execOnDemoReady_Parms
{
};

// Function TgClient.TgGameMoviePlayer.usc_match_can_purchase_random_class
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_match_can_purchase_random_class_Parms
{
	int                                                nQueueId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.usc_viewStatsOnline
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_viewStatsOnline_Parms
{
	struct FString                                     sInstanceId;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.usc_close_eom_lobby
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_close_eom_lobby_Parms
{
	int                                                nNavigationTarget;                                		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_can_play_again
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_can_play_again_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.usc_match_choose_skin
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_match_choose_skin_Parms
{
	int                                                nSkinId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_match_choose_class
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_match_choose_class_Parms
{
	int                                                nClassId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.USC_SelectedPopup
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execUSC_SelectedPopup_Parms
{
	int                                                nActionId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sInputValue;                                      		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sSecondaryInputValue;                             		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.FakeItemToast
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execFakeItemToast_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.CloseChatTab
// [0x00024400] ( FUNC_Native )
struct UTgGameMoviePlayer_execCloseChatTab_Parms
{
	int                                                nChannel;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sSender;                                          		// 0x0004 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.OpenChatTab
// [0x00024400] ( FUNC_Native )
struct UTgGameMoviePlayer_execOpenChatTab_Parms
{
	int                                                nChannel;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForce : 1;                                       		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.ShowGodPackPurchase
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execShowGodPackPurchase_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.usc_CheckForLoginErrorMsg
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_CheckForLoginErrorMsg_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.LeavePartyNotification
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execLeavePartyNotification_Parms
{
};

// Function TgClient.TgGameMoviePlayer.DisbandPartyNotification
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execDisbandPartyNotification_Parms
{
};

// Function TgClient.TgGameMoviePlayer.GotoSendGift
// [0x00020400] ( FUNC_Native )
struct UTgGameMoviePlayer_execGotoSendGift_Parms
{
	struct FPointer                                    pPID;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.GotoChestItem
// [0x00024400] ( FUNC_Native )
struct UTgGameMoviePlayer_execGotoChestItem_Parms
{
	int                                                nChestItemId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nOriginalItemId;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nReturnToTarget;                                  		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                nReturnToEvent;                                   		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bUseAltRedirect : 1;                              		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.GotoItem
// [0x00024400] ( FUNC_Native )
struct UTgGameMoviePlayer_execGotoItem_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nReturnToTarget;                                  		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                nReturnToEvent;                                   		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bUseAltRedirect : 1;                              		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgGameMoviePlayer.usc_getBoostedTime
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execusc_getBoostedTime_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.UnregisterWebPageRegion
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execUnregisterWebPageRegion_Parms
{
	struct FString                                     sName;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.RegisterWebPageRegion
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execRegisterWebPageRegion_Parms
{
	struct FString                                     sName;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bWidescreen : 1;                                  		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                nStreamId;                                        		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sUrl;                                             		// 0x0018 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              X;                                                		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Width;                                            		// 0x0030 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Height;                                           		// 0x0034 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              realWidth;                                        		// 0x0038 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              realHeight;                                       		// 0x003C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0040 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGameMoviePlayer.USC_OpenInternalBrowser
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execUSC_OpenInternalBrowser_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.USC_OpenExternalBrowser
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameMoviePlayer_execUSC_OpenExternalBrowser_Parms
{
	struct FString                                     externalURL;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgGameMoviePlayer.LoadBrowserScene
// [0x00020002] 
struct UTgGameMoviePlayer_execLoadBrowserScene_Parms
{
};

// Function TgClient.TgGfxChatInput.OnGameUIEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxChatInput_execOnGameUIEvent_Parms
{
	class UTgEventDataItem*                            pEvt;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxChatInput.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxChatInput_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxChatInput.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxChatInput_execUninitialize_Parms
{
};

// Function TgClient.TgGfxChatInput.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxChatInput_execInitialize_Parms
{
	class UTgMoviePlayer*                              pMP;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgSpectatorHUD.ToggleHUD
// [0x00020202] ( FUNC_Exec )
struct ATgSpectatorHUD_execToggleHUD_Parms
{
};

// Function TgClient.TgSpectatorHUD.Tick
// [0x00020802] ( FUNC_Event )
struct ATgSpectatorHUD_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   ViewTarget;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function TgClient.TgSpectatorHUD.GetGameState
// [0x00020802] ( FUNC_Event )
struct ATgSpectatorHUD_eventGetGameState_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgSpectatorHUD.SetVisibilityMode
// [0x00020202] ( FUNC_Exec )
struct ATgSpectatorHUD_execSetVisibilityMode_Parms
{
	unsigned char                                      Mode;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class ATgRepInfo_Player*                        PRI;                                              		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function TgClient.TgSpectatorHUD.ToggleVisibilityMode
// [0x00020202] ( FUNC_Exec )
struct ATgSpectatorHUD_execToggleVisibilityMode_Parms
{
	// unsigned char                                   Mode;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function TgClient.TgSpectatorHUD.ShowPreviousInfoPanel
// [0x00020002] 
struct ATgSpectatorHUD_execShowPreviousInfoPanel_Parms
{
};

// Function TgClient.TgSpectatorHUD.ShowNextInfoPanel
// [0x00020002] 
struct ATgSpectatorHUD_execShowNextInfoPanel_Parms
{
};

// Function TgClient.TgSpectatorHUD.ToggleStatPanel
// [0x00020002] 
struct ATgSpectatorHUD_execToggleStatPanel_Parms
{
};

// Function TgClient.TgSpectatorHUD.ShowPreviousStatPanel
// [0x00020002] 
struct ATgSpectatorHUD_execShowPreviousStatPanel_Parms
{
};

// Function TgClient.TgSpectatorHUD.ShowNextStatPanel
// [0x00020002] 
struct ATgSpectatorHUD_execShowNextStatPanel_Parms
{
};

// Function TgClient.TgSpectatorHUD.UpdatePlayerStatUI
// [0x00020400] ( FUNC_Native )
struct ATgSpectatorHUD_execUpdatePlayerStatUI_Parms
{
	class ATgPawn*                                     changedPawn;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgSpectatorHUD.SetStatIndex
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgSpectatorHUD_execSetStatIndex_Parms
{
	int                                                StatIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgSpectatorHUD.SpectatorShowAll
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgSpectatorHUD_execSpectatorShowAll_Parms
{
};

// Function TgClient.TgSpectatorHUD.SpectatorHideBottomHalf
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgSpectatorHUD_execSpectatorHideBottomHalf_Parms
{
};

// Function TgClient.TgSpectatorHUD.SpectatorHideAll
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgSpectatorHUD_execSpectatorHideAll_Parms
{
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorGameStats
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgSpectatorHUD_execToggleSpectatorGameStats_Parms
{
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorMinimap
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgSpectatorHUD_execToggleSpectatorMinimap_Parms
{
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorPlayerPanels
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgSpectatorHUD_execToggleSpectatorPlayerPanels_Parms
{
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorObjectives
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgSpectatorHUD_execToggleSpectatorObjectives_Parms
{
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorTimeline
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgSpectatorHUD_execToggleSpectatorTimeline_Parms
{
};

// Function TgClient.TgSpectatorHUD.ToggleSecretMessage
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgSpectatorHUD_execToggleSecretMessage_Parms
{
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorControls
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgSpectatorHUD_execToggleSpectatorControls_Parms
{
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorPlayerInformation
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgSpectatorHUD_execToggleSpectatorPlayerInformation_Parms
{
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorTicker
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgSpectatorHUD_execToggleSpectatorTicker_Parms
{
};

// Function TgClient.TgSpectatorHUD.SetSpectatorMode
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgSpectatorHUD_execSetSpectatorMode_Parms
{
	int                                                nNum;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgSpectatorHUD.ToggleBans
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgSpectatorHUD_execToggleBans_Parms
{
};

// Function TgClient.TgSpectatorHUD.EndMission
// [0x00020400] ( FUNC_Native )
struct ATgSpectatorHUD_execEndMission_Parms
{
	unsigned long                                      bPlayerAttacker : 1;                              		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned char                                      finalWinState;                                    		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgSpectatorHUD.UpdateSpectatorViewMode
// [0x00020400] ( FUNC_Native )
struct ATgSpectatorHUD_execUpdateSpectatorViewMode_Parms
{
	unsigned char                                      Mode;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgSpectatorHUD.UpdateSpectatorViewTarget
// [0x00020400] ( FUNC_Native )
struct ATgSpectatorHUD_execUpdateSpectatorViewTarget_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgSpectatorHUD.GetVisibilityMode
// [0x00020400] ( FUNC_Native )
struct ATgSpectatorHUD_execGetVisibilityMode_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgClanDC_ClanStats.usc_UpdateClanNameFormat
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgClanDC_ClanStats_execusc_UpdateClanNameFormat_Parms
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgClanDC_ClanStats.usc_UpdateTag
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgClanDC_ClanStats_execusc_UpdateTag_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgClanDC_ClanStats.usc_ApplicationAction
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgClanDC_ClanStats_execusc_ApplicationAction_Parms
{
	int                                                nAction;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sPlayerId;                                        		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgClanDC_ClanStats.usc_UpdateRecruiting
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgClanDC_ClanStats_execusc_UpdateRecruiting_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bIsRecruiting : 1;                                		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgClanDC_ClanStats.usc_UpdateMessage
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgClanDC_ClanStats_execusc_UpdateMessage_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bIsDaily : 1;                                     		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgClanDC_ClanStats.OnFilterResult
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgClanDC_ClanStats_execOnFilterResult_Parms
{
	struct FString                                     sOriginal;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sFiltered;                                        		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bTotalCensor : 1;                                 		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgClanDC_ClanStats.UpdateRecruiting
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgClanDC_ClanStats_execUpdateRecruiting_Parms
{
	struct FString                                     sDesc;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bIsRecruiting : 1;                                		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgClanDC_ClanStats.UpdateClanMOTD
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgClanDC_ClanStats_execUpdateClanMOTD_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgClanDC_ClanStats.UpdateClanDesc
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgClanDC_ClanStats_execUpdateClanDesc_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgClanDC_ClanStats.UpdateClanName
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgClanDC_ClanStats_execUpdateClanName_Parms
{
	struct FString                                     sName;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgClanDC_ClanStats.UpdateClanData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgClanDC_ClanStats_execUpdateClanData_Parms
{
};

// Function TgClient.TgClanDC_ClanStats.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgClanDC_ClanStats_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgClanDC_Roster.usc_UpdateComment
// [0x00020400] ( FUNC_Native )
struct UTgClanDC_Roster_execusc_UpdateComment_Parms
{
	struct FString                                     nPlayerId;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sComment;                                         		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      isOfficerNote : 1;                                		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgClanDC_Roster.usc_ClanAction
// [0x00020400] ( FUNC_Native )
struct UTgClanDC_Roster_execusc_ClanAction_Parms
{
	int                                                nAction;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     nPlayerId;                                        		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgClanDC_Roster.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgClanDC_Roster_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgClanDC_Settings.usc_UpdateLeader
// [0x00020400] ( FUNC_Native )
struct UTgClanDC_Settings_execusc_UpdateLeader_Parms
{
	struct FString                                     sName;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClient.TgClanDC_Settings.usc_UpdateRank
// [0x00020400] ( FUNC_Native )
struct UTgClanDC_Settings_execusc_UpdateRank_Parms
{
	float                                              RankId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sName;                                            		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              rankPermission;                                   		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgClanDC_Settings.UpdateRankArray
// [0x00020400] ( FUNC_Native )
struct UTgClanDC_Settings_execUpdateRankArray_Parms
{
};

// Function TgClient.TgClanDC_Settings.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgClanDC_Settings_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgDataGroup_Clan.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgDataGroup_Clan_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxEventPurchase.ShowOutOfCurrency
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventPurchase_execShowOutOfCurrency_Parms
{
	int                                                CurrencyType;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxEventPurchase.SubmitPurchase
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventPurchase_execSubmitPurchase_Parms
{
	class UGFxObject*                                  Data;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxEventPurchase.GetItemInfo
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventPurchase_execGetItemInfo_Parms
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxEventPurchase.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventPurchase_execReceiveGFxData_Parms
{
	class UGFxObject*                                  theObject;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGfxEventPurchase.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventPurchase_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGFxEventQuestNotification.USC_GetOptOut
// [0x00020400] ( FUNC_Native )
struct UTgGFxEventQuestNotification_execUSC_GetOptOut_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGFxEventQuestNotification.USC_GetOptOut_Delegate
// [0x00120000] 
struct UTgGFxEventQuestNotification_execUSC_GetOptOut_Delegate_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGFxEventQuestNotification.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGFxEventQuestNotification_execReceiveGFxData_Parms
{
	class UGFxObject*                                  Data;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgGFxEventQuestNotification.RedirectToFirstQuest
// [0x00020400] ( FUNC_Native )
struct UTgGFxEventQuestNotification_execRedirectToFirstQuest_Parms
{
};

// Function TgClient.TgGFxEventQuestNotification.UpdateNotifySetting
// [0x00020400] ( FUNC_Native )
struct UTgGFxEventQuestNotification_execUpdateNotifySetting_Parms
{
	unsigned long                                      bDisable : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClient.TgGFxEventQuestNotification.GetHasAvailableSpecialEventQuest
// [0x00020400] ( FUNC_Native )
struct UTgGFxEventQuestNotification_execGetHasAvailableSpecialEventQuest_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgGFxEventQuestNotification.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxEventQuestNotification_execUninitialize_Parms
{
};

// Function TgClient.TgGFxEventQuestNotification.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxEventQuestNotification_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClient.TgLobbyHUD.SetInitialState
// [0x00020902] ( FUNC_Event )
struct ATgLobbyHUD_eventSetInitialState_Parms
{
};

// Function TgClient.TgLobbyHUD.ReturnToMain
// [0x00020902] ( FUNC_Event )
struct ATgLobbyHUD_eventReturnToMain_Parms
{
};

// Function TgClient.TgLobbyHUD.IsCurrentCameraMatchLobby
// [0x00020400] ( FUNC_Native )
struct ATgLobbyHUD_execIsCurrentCameraMatchLobby_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgLobbyHUD.GetMatchLobbyCameraName
// [0x00020400] ( FUNC_Native )
struct ATgLobbyHUD_execGetMatchLobbyCameraName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClient.TgLobbyHUD.OnClassSelected
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct ATgLobbyHUD_execOnClassSelected_Parms
{
	int                                                nClassId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nSkinId;                                          		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bChangedClass : 1;                                		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bChangedSkin : 1;                                 		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClient.TgLobbyHUD.AsynchNotifies
// [0x00020400] ( FUNC_Native )
struct ATgLobbyHUD_execAsynchNotifies_Parms
{
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif