/*
#############################################################################################
# Smite (v3.24.3804.2) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: TgClientBase_f_structs.h
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

// Function TgClientBase.TgAnnouncerPreviewer.PreviewAnnouncerByItemId
// [0x00024400] ( FUNC_Native )
struct UTgAnnouncerPreviewer_execPreviewAnnouncerByItemId_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bAsync : 1;                                       		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgAnnouncerPreviewer.OnAnnouncerLoaded
// [0x00020400] ( FUNC_Native )
struct UTgAnnouncerPreviewer_execOnAnnouncerLoaded_Parms
{
};

// Function TgClientBase.TgAnnouncerPreviewer.Init
// [0x00020400] ( FUNC_Native )
struct UTgAnnouncerPreviewer_execInit_Parms
{
};

// Function TgClientBase.TgMoviePlayer.usc_get_experimental_hud
// [0x00020202] ( FUNC_Exec )
struct UTgMoviePlayer_execusc_get_experimental_hud_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_use_experimental_hud
// [0x00020202] ( FUNC_Exec )
struct UTgMoviePlayer_execusc_use_experimental_hud_Parms
{
	unsigned long                                      Value : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_PauseGame
// [0x00020202] ( FUNC_Exec )
struct UTgMoviePlayer_execusc_PauseGame_Parms
{
	unsigned long                                      shouldPause : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ATgDemoRecSpectator*                      SpecPC;                                           		// 0x0004 (0x0008) [0x0000000000000000]              
	// class ATgPlayerController*                      TgPC;                                             		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function TgClientBase.TgMoviePlayer.usc_minimap_hovered
// [0x00020202] ( FUNC_Exec )
struct UTgMoviePlayer_execusc_minimap_hovered_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     MapName;                                          		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class ATgGameHUD*                               HUD;                                              		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function TgClientBase.TgMoviePlayer.usc_minimap_pinged
// [0x00020202] ( FUNC_Exec )
struct UTgMoviePlayer_execusc_minimap_pinged_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Type;                                             		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     MapName;                                          		// 0x0018 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class ATgGameHUD*                               HUD;                                              		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function TgClientBase.TgMoviePlayer.usc_PauseGameToggle
// [0x00020202] ( FUNC_Exec )
struct UTgMoviePlayer_execusc_PauseGameToggle_Parms
{
	// class ATgPlayerController*                      TgPC;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function TgClientBase.TgMoviePlayer.usc_isAllowedPause
// [0x00020202] ( FUNC_Exec )
struct UTgMoviePlayer_execusc_isAllowedPause_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATgPlayerController*                      TgPC;                                             		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function TgClientBase.TgMoviePlayer.IsAccountPickerOpen
// [0x00020802] ( FUNC_Event )
struct UTgMoviePlayer_eventIsAccountPickerOpen_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_ShowContentPurchaseUI
// [0x00020A02] ( FUNC_Exec | FUNC_Event )
struct UTgMoviePlayer_execusc_ShowContentPurchaseUI_Parms
{
	struct FString                                     SignedOffer;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.GetAvailableProducts
// [0x00420802] ( FUNC_Event )
struct UTgMoviePlayer_eventGetAvailableProducts_Parms
{
	int                                                nControllerId;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      MediaType;                                        		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FMarketplaceProductDetails >        Products;                                         		// 0x0008 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.ShowContentPurchaseUI
// [0x00020A02] ( FUNC_Exec | FUNC_Event )
struct UTgMoviePlayer_execShowContentPurchaseUI_Parms
{
	struct FString                                     SingedOffer;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.GetInventoryItems
// [0x00420802] ( FUNC_Event )
struct UTgMoviePlayer_eventGetInventoryItems_Parms
{
	TArray< struct FMarketplaceInventoryItem >         InventoryItems;                                   		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.CanShowContentPurchaseUI
// [0x00020802] ( FUNC_Event )
struct UTgMoviePlayer_eventCanShowContentPurchaseUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.UnregisterLocalTalker
// [0x00024803] ( FUNC_Final | FUNC_Event )
struct UTgMoviePlayer_eventUnregisterLocalTalker_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ChannelIndex;                                     		// 0x0001 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.RegisterLocalTalker
// [0x00024803] ( FUNC_Final | FUNC_Event )
struct UTgMoviePlayer_eventRegisterLocalTalker_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ChannelIndex;                                     		// 0x0001 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.ShowNotification
// [0x00024803] ( FUNC_Final | FUNC_Event )
struct UTgMoviePlayer_eventShowNotification_Parms
{
	int                                                nType;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Message;                                          		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Message2;                                         		// 0x0014 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UGFxObject*                                  Data;                                             		// 0x0024 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.HideNotification
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgMoviePlayer_eventHideNotification_Parms
{
	int                                                nType;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.TestShowNotification
// [0x00020203] ( FUNC_Final | FUNC_Exec )
struct UTgMoviePlayer_execTestShowNotification_Parms
{
};

// Function TgClientBase.TgMoviePlayer.TestHideNotification
// [0x00020203] ( FUNC_Final | FUNC_Exec )
struct UTgMoviePlayer_execTestHideNotification_Parms
{
};

// Function TgClientBase.TgMoviePlayer.LogFocus
// [0x00020203] ( FUNC_Final | FUNC_Exec )
struct UTgMoviePlayer_execLogFocus_Parms
{
};

// Function TgClientBase.TgMoviePlayer.SetGamepadMode
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgMoviePlayer_eventSetGamepadMode_Parms
{
	unsigned long                                      bIsGamepad : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.SetModal
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgMoviePlayer_eventSetModal_Parms
{
	class UGFxObject*                                  modalObj;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.ClearModal
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgMoviePlayer_eventClearModal_Parms
{
};

// Function TgClientBase.TgMoviePlayer.EndLoading
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgMoviePlayer_eventEndLoading_Parms
{
	struct FString                                     KeyName;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.StartLoading
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgMoviePlayer_eventStartLoading_Parms
{
	struct FString                                     KeyName;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.GainFocus
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgMoviePlayer_eventGainFocus_Parms
{
	class UGFxObject*                                  focusObj;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.FindFocus
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgMoviePlayer_eventFindFocus_Parms
{
};

// Function TgClientBase.TgMoviePlayer.RegainFocus
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgMoviePlayer_eventRegainFocus_Parms
{
};

// Function TgClientBase.TgMoviePlayer.LostFocus
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgMoviePlayer_eventLostFocus_Parms
{
};

// Function TgClientBase.TgMoviePlayer.SetOnlineStatus
// [0x00024802] ( FUNC_Event )
struct UTgMoviePlayer_eventSetOnlineStatus_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     StatusString;                                     		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      PlayerActive : 1;                                 		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.DisableVideoRecording
// [0x00020802] ( FUNC_Event )
struct UTgMoviePlayer_eventDisableVideoRecording_Parms
{
};

// Function TgClientBase.TgMoviePlayer.EnableVideoRecording
// [0x00020802] ( FUNC_Event )
struct UTgMoviePlayer_eventEnableVideoRecording_Parms
{
};

// Function TgClientBase.TgMoviePlayer.usc_get_gamestate
// [0x00020002] 
struct UTgMoviePlayer_execusc_get_gamestate_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.UIDebugModeEnd
// [0x00020202] ( FUNC_Exec )
struct UTgMoviePlayer_execUIDebugModeEnd_Parms
{
};

// Function TgClientBase.TgMoviePlayer.UIDebugModeWatch
// [0x00024202] ( FUNC_Exec )
struct UTgMoviePlayer_execUIDebugModeWatch_Parms
{
	struct FString                                     sPath;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nDrillInDepth;                                    		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.UIDebugModeNavigation
// [0x00020202] ( FUNC_Exec )
struct UTgMoviePlayer_execUIDebugModeNavigation_Parms
{
};

// Function TgClientBase.TgMoviePlayer.UIDebugModeHighlight
// [0x00024202] ( FUNC_Exec )
struct UTgMoviePlayer_execUIDebugModeHighlight_Parms
{
	unsigned long                                      mousableOnly : 1;                                 		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.ToggleAlienFX
// [0x00020202] ( FUNC_Exec )
struct UTgMoviePlayer_execToggleAlienFX_Parms
{
	// class ATgPlayerController*                      TgPC;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function TgClientBase.TgMoviePlayer.FlashCaptureMouse
// [0x00020202] ( FUNC_Exec )
struct UTgMoviePlayer_execFlashCaptureMouse_Parms
{
};

// Function TgClientBase.TgMoviePlayer.FlashReleaseMouse
// [0x00020202] ( FUNC_Exec )
struct UTgMoviePlayer_execFlashReleaseMouse_Parms
{
};

// Function TgClientBase.TgMoviePlayer.ListOpenScenes
// [0x00020202] ( FUNC_Exec )
struct UTgMoviePlayer_execListOpenScenes_Parms
{
};

// Function TgClientBase.TgMoviePlayer.CloseAllScenes
// [0x00020202] ( FUNC_Exec )
struct UTgMoviePlayer_execCloseAllScenes_Parms
{
};

// Function TgClientBase.TgMoviePlayer.EnableItemWarningPopup
// [0x00020202] ( FUNC_Exec )
struct UTgMoviePlayer_execEnableItemWarningPopup_Parms
{
};

// Function TgClientBase.TgMoviePlayer.DisableItemWarningPopup
// [0x00020202] ( FUNC_Exec )
struct UTgMoviePlayer_execDisableItemWarningPopup_Parms
{
};

// Function TgClientBase.TgMoviePlayer.ClosePartyInviteDialog
// [0x00020802] ( FUNC_Event )
struct UTgMoviePlayer_eventClosePartyInviteDialog_Parms
{
};

// Function TgClientBase.TgMoviePlayer.DisplayLoginUI
// [0x00020802] ( FUNC_Event )
struct UTgMoviePlayer_eventDisplayLoginUI_Parms
{
};

// Function TgClientBase.TgMoviePlayer.ShouldBlockKey
// [0x00020802] ( FUNC_Event )
struct UTgMoviePlayer_eventShouldBlockKey_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Event;                                            		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATgPlayerController*                      TgPC;                                             		// 0x0014 (0x0008) [0x0000000000000000]              
	// class UTgPlayerInput*                           tgPI;                                             		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function TgClientBase.TgMoviePlayer.usc_ClipboardCopy
// [0x00020202] ( FUNC_Exec )
struct UTgMoviePlayer_execusc_ClipboardCopy_Parms
{
	struct FString                                     Str;                                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class ATgPlayerController*                      TgPC;                                             		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function TgClientBase.TgMoviePlayer.usc_ClipboardPaste
// [0x00020202] ( FUNC_Exec )
struct UTgMoviePlayer_execusc_ClipboardPaste_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// class ATgPlayerController*                      TgPC;                                             		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function TgClientBase.TgMoviePlayer.OnPlayerCardComplete
// [0x00020002] 
struct UTgMoviePlayer_execOnPlayerCardComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.WidgetUnloaded
// [0x00020802] ( FUNC_Event )
struct UTgMoviePlayer_eventWidgetUnloaded_Parms
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x001C (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               tempWidget;                                       		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function TgClientBase.TgMoviePlayer.WidgetInitialized
// [0x00820802] ( FUNC_Event )
struct UTgMoviePlayer_eventWidgetInitialized_Parms
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FWidgetBinding                           newWidget;                                        		// 0x001C (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function TgClientBase.TgMoviePlayer.ReadOnlinePlayerData
// [0x00024802] ( FUNC_Event )
struct UTgMoviePlayer_eventReadOnlinePlayerData_Parms
{
	TArray< struct FString >                           PlayerIDs;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bIncludePresence : 1;                             		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.CleanupUC
// [0x00020802] ( FUNC_Event )
struct UTgMoviePlayer_eventCleanupUC_Parms
{
};

// Function TgClientBase.TgMoviePlayer.InitOSSRef
// [0x00020002] 
struct UTgMoviePlayer_execInitOSSRef_Parms
{
};

// Function TgClientBase.TgMoviePlayer.Init
// [0x00024802] ( FUNC_Event )
struct UTgMoviePlayer_eventInit_Parms
{
	class ULocalPlayer*                                LocPlay;                                          		// 0x0000 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.PostWidgetInit
// [0x00020800] ( FUNC_Event )
struct UTgMoviePlayer_eventPostWidgetInit_Parms
{
};

// Function TgClientBase.TgMoviePlayer.Tick
// [0x00020802] ( FUNC_Event )
struct UTgMoviePlayer_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_findIndicesForCapitalSizeCharacters
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execusc_findIndicesForCapitalSizeCharacters_Parms
{
	struct FString                                     sourceText;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxObject*                                  out_capitalIndices;                               		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_report_player
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_report_player_Parms
{
	struct FString                                     sPlayerName;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nReasonCode;                                      		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sReason;                                          		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nTaskForce;                                       		// 0x0024 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                nPlayerCount;                                     		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                nReportedPlayerTaskForce;                         		// 0x002C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.DebugSimulmediaVideoPlayer
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execDebugSimulmediaVideoPlayer_Parms
{
};

// Function TgClientBase.TgMoviePlayer.DebugIntroVideo
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execDebugIntroVideo_Parms
{
};

// Function TgClientBase.TgMoviePlayer.DebugActivities
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execDebugActivities_Parms
{
};

// Function TgClientBase.TgMoviePlayer.usc_GetAppSettings
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_GetAppSettings_Parms
{
	struct FString                                     pSetting;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.OnClearCachedJoinChallengeTimer
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execOnClearCachedJoinChallengeTimer_Parms
{
};

// Function TgClientBase.TgMoviePlayer.OnJoinChallengePasswordPopup
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execOnJoinChallengePasswordPopup_Parms
{
	class UTgPagePopup*                                pData;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FPopupResponse                              Response;                                         		// 0x0008 (0x0018) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.FlushKeyboardBinds
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execFlushKeyboardBinds_Parms
{
};

// Function TgClientBase.TgMoviePlayer.ToggleInputConfirm
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execToggleInputConfirm_Parms
{
	unsigned long                                      bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.TestInputHud
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execTestInputHud_Parms
{
	unsigned long                                      isGamePad : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.ForcePSPlus
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execForcePSPlus_Parms
{
	unsigned long                                      bShouldForce : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_MuteVivoxPlayer
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_MuteVivoxPlayer_Parms
{
	struct FString                                     sPlayerId;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      Toggle : 1;                                       		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     sPlatformId;                                      		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.OnReferralSelected
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execOnReferralSelected_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.ShowGodPackPurchase
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execShowGodPackPurchase_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.GetOwnsGodPack
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execGetOwnsGodPack_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.DestroyVideoPlayer
// [0x00020802] ( FUNC_Event )
struct UTgMoviePlayer_eventDestroyVideoPlayer_Parms
{
};

// Function TgClientBase.TgMoviePlayer.OnVideoError
// [0x00020802] ( FUNC_Event )
struct UTgMoviePlayer_eventOnVideoError_Parms
{
	class APComVideoPlayer*                            VideoPlayer;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ErrorCode;                                        		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.SpawnVideoPlayer
// [0x00020802] ( FUNC_Event )
struct UTgMoviePlayer_eventSpawnVideoPlayer_Parms
{
	class AActor*                                      SpawningActor;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.PrintUIGameInputIntercepts
// [0x00020203] ( FUNC_Final | FUNC_Exec )
struct UTgMoviePlayer_execPrintUIGameInputIntercepts_Parms
{
};

// Function TgClientBase.TgMoviePlayer.PrintInputCaptures
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execPrintInputCaptures_Parms
{
};

// Function TgClientBase.TgMoviePlayer.PrintFocusStack
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execPrintFocusStack_Parms
{
};

// Function TgClientBase.TgMoviePlayer.PrintGameInfo
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execPrintGameInfo_Parms
{
};

// Function TgClientBase.TgMoviePlayer.NativeVideoPlayerDestroy
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execNativeVideoPlayerDestroy_Parms
{
};

// Function TgClientBase.TgMoviePlayer.HandleVideoPlayerErrorCallback
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execHandleVideoPlayerErrorCallback_Parms
{
	class APComVideoPlayer*                            VideoPlayer;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ErrorCode;                                        		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.CheckForGlobalKeyInput
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execCheckForGlobalKeyInput_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Event;                                            		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.OnToggleSkillScreen
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execOnToggleSkillScreen_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.OnVendorStoreToggle
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execOnVendorStoreToggle_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.OnVendorStoreClose
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execOnVendorStoreClose_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.OnVendorStoreOpen
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execOnVendorStoreOpen_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_CheckEOMLSimulmediaOpportunities
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_CheckEOMLSimulmediaOpportunities_Parms
{
};

// Function TgClientBase.TgMoviePlayer.usc_NativeLog
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_NativeLog_Parms
{
	struct FString                                     sValue;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.usc_getIsGamePadInput
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_getIsGamePadInput_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_saveTransformSettings
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_saveTransformSettings_Parms
{
	struct FString                                     TransformSettings;                                		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.usc_loadTransformSettings
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_loadTransformSettings_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.OnVideoPlaybackEnded
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execOnVideoPlaybackEnded_Parms
{
};

// Function TgClientBase.TgMoviePlayer.usc_GetFocusedTextField
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execusc_GetFocusedTextField_Parms
{
	class UGFxObject*                                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_ShowKeyboardUI
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execusc_ShowKeyboardUI_Parms
{
	class UGFxObject*                                  FocusedTextField;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     TitleText;                                        		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     DescriptionText;                                  		// 0x0018 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bIsPassword : 1;                                  		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldValidate : 1;                              		// 0x002C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     DefaultText;                                      		// 0x0030 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                MaxResultLength;                                  		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0044 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_HideKeyboardUI
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execusc_HideKeyboardUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_IsShowingKeyboardUI
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execusc_IsShowingKeyboardUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.OnResolveChatMessage
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execOnResolveChatMessage_Parms
{
	unsigned long                                      bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class UTgPlayerNameManager*                        pManager;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.OpenPurchaseGems
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execOpenPurchaseGems_Parms
{
	struct FString                                     SKUCode;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.ClaimPendingChatMessages
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execClaimPendingChatMessages_Parms
{
	TArray< class UTgChatData* >                       out_arrData;                                      		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.ShowHudChatMessage
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execShowHudChatMessage_Parms
{
	class UTgChatData*                                 pData;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.TestShowMessage
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execTestShowMessage_Parms
{
	struct FString                                     msg;                                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.gfxProcessSound
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execgfxProcessSound_Parms
{
	struct FName                                       aThemeName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       aEventName;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.OnBattlePassToastUpdate
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execOnBattlePassToastUpdate_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.OnInputModeChanged
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execOnInputModeChanged_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.HandleClanPlayerInviteUpdates
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execHandleClanPlayerInviteUpdates_Parms
{
	struct FPointer                                    pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_send_chat
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_send_chat_Parms
{
	int                                                nChannel;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     msg;                                              		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Recipient;                                        		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_can_view_ugc
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execusc_can_view_ugc_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.ASC_ShowFriendsUI
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execASC_ShowFriendsUI_Parms
{
};

// Function TgClientBase.TgMoviePlayer.SetupPurchaseWithProductId
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execSetupPurchaseWithProductId_Parms
{
	struct FString                                     sProductId;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.ClaimGift
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execClaimGift_Parms
{
	struct FString                                     nAcqId;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.TestListPendingGifts
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execTestListPendingGifts_Parms
{
};

// Function TgClientBase.TgMoviePlayer.TestSendGift
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execTestSendGift_Parms
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nMessageIndex;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bAnon : 1;                                        		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.FixLocalizationKeybinds
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execFixLocalizationKeybinds_Parms
{
	struct FString                                     sMsg;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.GetPlayerData
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execGetPlayerData_Parms
{
	struct FTgPlayerId                                 pid;                                              		// 0x0000 (0x0024) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	class UTgGFxPlayerData*                            ReturnValue;                                      		// 0x0024 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.AttemptToJoinTutorial
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execAttemptToJoinTutorial_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.CallPrivilegeDelegate
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgMoviePlayer_eventCallPrivilegeDelegate_Parms
{
	struct FScriptDelegate                             delCallback;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      ePriv;                                            		// 0x0010 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ePermiss;                                         		// 0x0011 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.CheckOnlinePrivileges
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execCheckOnlinePrivileges_Parms
{
	unsigned char                                      ePriv;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             delCallback;                                      		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.CancelCheckOnlinePrivileges
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execCancelCheckOnlinePrivileges_Parms
{
	class UObject*                                     pScope;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.OnVGSCustomMessage
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execOnVGSCustomMessage_Parms
{
	unsigned long                                      bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     sText;                                            		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.TryEstablishPlatformSession
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execTryEstablishPlatformSession_Parms
{
	struct FPointer                                    pMarshal;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.OnForceMatchDataUpdate
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execOnForceMatchDataUpdate_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.OnMatchDataChange
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execOnMatchDataChange_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.ReceiveMatchData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execReceiveMatchData_Parms
{
	struct FPointer                                    pMarshal;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.UnregisterLocalPlayerForVoice
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execUnregisterLocalPlayerForVoice_Parms
{
	unsigned char                                      ChannelIndex;                                     		// 0x0000 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.RegisterLocalPlayerForVoice
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execRegisterLocalPlayerForVoice_Parms
{
	unsigned char                                      ChannelIndex;                                     		// 0x0000 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.UpdateCameraBasedOnNavAction
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execUpdateCameraBasedOnNavAction_Parms
{
};

// Function TgClientBase.TgMoviePlayer.EquipLoadoutItem
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execEquipLoadoutItem_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.NavigateTo
// [0x00420400] ( FUNC_Native )
struct UTgMoviePlayer_execNavigateTo_Parms
{
	struct FNavParams                                  Params;                                           		// 0x0000 (0x0024) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function TgClientBase.TgMoviePlayer.HandleEscapeKey
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execHandleEscapeKey_Parms
{
};

// Function TgClientBase.TgMoviePlayer.usc_goto_item
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_goto_item_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bUseAltRedirect : 1;                              		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.GotoChestItem
// [0x00024400] ( FUNC_Native )
struct UTgMoviePlayer_execGotoChestItem_Parms
{
	int                                                nChestItemId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nOriginalItemId;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nReturnToTarget;                                  		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                nReturnToEvent;                                   		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bUseAltRedirect : 1;                              		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.GotoItem
// [0x00024400] ( FUNC_Native )
struct UTgMoviePlayer_execGotoItem_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nReturnToTarget;                                  		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                nReturnToEvent;                                   		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bUseAltRedirect : 1;                              		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.RedirectToItemObtainLocation
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execRedirectToItemObtainLocation_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.ShowGodVideo
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execShowGodVideo_Parms
{
	int                                                nGodVideoId;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sGodVideoUrl;                                     		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.goto_lobby
// [0x00024400] ( FUNC_Native )
struct UTgMoviePlayer_execgoto_lobby_Parms
{
	unsigned long                                      bAtEOM : 1;                                       		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.GetRoot
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execGetRoot_Parms
{
	class UTgGFxObject*                                ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.GetWidget
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execGetWidget_Parms
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.TestMatchLobby
// [0x00024601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execTestMatchLobby_Parms
{
	int                                                nQueue;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPreSelect : 1;                                   		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                nTeamCount;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                nPlayerPerTeam;                                   		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.GetHUDTeamName
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execGetHUDTeamName_Parms
{
	unsigned long                                      bEnemy : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.SetLanguage
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execSetLanguage_Parms
{
};

// Function TgClientBase.TgMoviePlayer.ShowLoginMessage
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execShowLoginMessage_Parms
{
	struct FString                                     sMsg;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.ShowLoginUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execShowLoginUI_Parms
{
};

// Function TgClientBase.TgMoviePlayer.ShowNormalUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execShowNormalUI_Parms
{
};

// Function TgClientBase.TgMoviePlayer.GetAndClearLastLoginError
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execGetAndClearLastLoginError_Parms
{
	struct FIntStringPair                              ReturnValue;                                      		// 0x0000 (0x0014) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.TestClearDeferBlacklist
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execTestClearDeferBlacklist_Parms
{
};

// Function TgClientBase.TgMoviePlayer.TestAddDeferBlacklistEntry
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execTestAddDeferBlacklistEntry_Parms
{
	int                                                newEntry;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.TestDeferBlacklist
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execTestDeferBlacklist_Parms
{
	unsigned long                                      bQueue : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.TestShowPopupModal
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execTestShowPopupModal_Parms
{
	int                                                nType;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.TestSendPlayerTrackingEvent
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execTestSendPlayerTrackingEvent_Parms
{
	int                                                nEvent;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nSubEvent;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sRefName;                                         		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nRefValue;                                        		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.TestPurchaseClanNameChange
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execTestPurchaseClanNameChange_Parms
{
	struct FString                                     sName;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sTag;                                             		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.TestShowAcquisition
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execTestShowAcquisition_Parms
{
	int                                                nType;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nLootId;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.SendCloseAllPopup
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execSendCloseAllPopup_Parms
{
};

// Function TgClientBase.TgMoviePlayer.SendClosePopup
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execSendClosePopup_Parms
{
};

// Function TgClientBase.TgMoviePlayer.SendOpenPopup
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execSendOpenPopup_Parms
{
	class UTgPagePopup*                                pPopup;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.SetSceneLoadPermissions
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execSetSceneLoadPermissions_Parms
{
	struct Fdword                                      fPermiss;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.PlayerLoginError
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execPlayerLoginError_Parms
{
	int                                                nError;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sMessage;                                         		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.SetLoginReady
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execSetLoginReady_Parms
{
	unsigned long                                      fromIntro : 1;                                    		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.OnLobbyStateChange
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execOnLobbyStateChange_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.OnHUDStateChange
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execOnHUDStateChange_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.OnSpectateFail
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execOnSpectateFail_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.USC_GetCurrencyName
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execUSC_GetCurrencyName_Parms
{
	int                                                nCurrencyValidValue;                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.usc_getConsolePlatform
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_getConsolePlatform_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_isConsole
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_isConsole_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.AttemptAutoLogin
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execAttemptAutoLogin_Parms
{
};

// Function TgClientBase.TgMoviePlayer.usc_acceptEULA
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_acceptEULA_Parms
{
};

// Function TgClientBase.TgMoviePlayer.usc_createPlayerName
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_createPlayerName_Parms
{
	struct FString                                     sLoginName;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sPass;                                            		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sNewPlayerName;                                   		// 0x0020 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.USC_Login
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execUSC_Login_Parms
{
	struct FString                                     sUsername;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sPassword;                                        		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.USC_LoginExits
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execUSC_LoginExits_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_isLoginReady
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execusc_isLoginReady_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.USC_ShowEndOfMatch
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execUSC_ShowEndOfMatch_Parms
{
	unsigned long                                      bShow : 1;                                        		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.UpdateVoiceChatPlayer
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgMoviePlayer_eventUpdateVoiceChatPlayer_Parms
{
	struct FString                                     sPId;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bIsActive : 1;                                    		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bIsSpeaking : 1;                                  		// 0x0014 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_toggle_voice_mute
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execusc_toggle_voice_mute_Parms
{
	struct FString                                     sConsoleId;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nPortalType;                                      		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sPlayerName;                                      		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sPlayerId;                                        		// 0x0024 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bMute : 1;                                        		// 0x0034 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_toggle_player_mute
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_toggle_player_mute_Parms
{
	struct FString                                     ConsoleIdString;                                  		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     PlayerName;                                       		// 0x0010 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sPlayerId;                                        		// 0x0020 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.usc_add_to_party
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_add_to_party_Parms
{
	struct FString                                     sConsoleId;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nPortalType;                                      		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sPlayerId;                                        		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sPlayerName;                                      		// 0x0024 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0034 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_can_invite_to_party
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_can_invite_to_party_Parms
{
	struct FString                                     sPlayerId;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_add_to_clan
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_add_to_clan_Parms
{
	struct FString                                     sConsoleId;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nPortalType;                                      		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sPlayerId;                                        		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sPlayerName;                                      		// 0x0024 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0034 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_can_invite_to_clan
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_can_invite_to_clan_Parms
{
	struct FString                                     sPlayerId;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_get_queue_timer
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_get_queue_timer_Parms
{
	int                                                nQueueId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_can_cancel_spectate
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_can_cancel_spectate_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_disconnect
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_disconnect_Parms
{
};

// Function TgClientBase.TgMoviePlayer.usc_CancelQueue
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_CancelQueue_Parms
{
};

// Function TgClientBase.TgMoviePlayer.is_item_owned
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execis_item_owned_Parms
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.SetUIDisplayMode
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execSetUIDisplayMode_Parms
{
	int                                                displayMode;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_getItemData
// [0x00024400] ( FUNC_Native )
struct UTgMoviePlayer_execusc_getItemData_Parms
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                quantityCount;                                    		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                vendorId;                                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x000C (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_Scene_Manager_Scene_Unloaded
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execusc_Scene_Manager_Scene_Unloaded_Parms
{
	struct FString                                     sSceneName;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.usc_Scene_Manager_Scene_Loaded
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execusc_Scene_Manager_Scene_Loaded_Parms
{
	struct FString                                     sSceneName;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.update_player_mute
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execupdate_player_mute_Parms
{
};

// Function TgClientBase.TgMoviePlayer.TryToggleMute
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execTryToggleMute_Parms
{
	unsigned long                                      bShouldMute : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.ShowPopupMessage
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execShowPopupMessage_Parms
{
	struct FString                                     sTitle;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sMessage;                                         		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.ShowErrorMessage
// [0x00024400] ( FUNC_Native )
struct UTgMoviePlayer_execShowErrorMessage_Parms
{
	struct FString                                     sTitle;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sMessage;                                         		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      _user_must_close : 1;                             		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.SetHUDVisiblity
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execSetHUDVisiblity_Parms
{
};

// Function TgClientBase.TgMoviePlayer.OnDemoReady
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execOnDemoReady_Parms
{
};

// Function TgClientBase.TgMoviePlayer.AddRecentlyInvited
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execAddRecentlyInvited_Parms
{
	struct FTgPlayerId                                 pid;                                              		// 0x0000 (0x0024) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.GetRecentlyInvitedTimeRemain
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execGetRecentlyInvitedTimeRemain_Parms
{
	struct FTgPlayerId                                 pid;                                              		// 0x0000 (0x0024) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.HasRecentlyInvited
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execHasRecentlyInvited_Parms
{
	struct FTgPlayerId                                 pid;                                              		// 0x0000 (0x0024) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_isItemEquippable
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execusc_isItemEquippable_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_isItemEquipped
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execusc_isItemEquipped_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_GetActiveGamepadIndex
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execusc_GetActiveGamepadIndex_Parms
{
	int                                                nPlayerIndex;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_RegisterCardTexture
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execusc_RegisterCardTexture_Parms
{
	class UGFxObject*                                  Widget;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nItemId;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              X;                                                		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Width;                                            		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Height;                                           		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bOnlyIfMat : 1;                                   		// 0x001C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.GetTestNotificationData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execGetTestNotificationData_Parms
{
	class UGFxObject*                                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_UnregisterCardTextureById
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execusc_UnregisterCardTextureById_Parms
{
	int                                                nCardId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_UnregisterCardTexture
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execusc_UnregisterCardTexture_Parms
{
	class UGFxObject*                                  Widget;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.StartBatchPurchaseRequest
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execStartBatchPurchaseRequest_Parms
{
};

// Function TgClientBase.TgMoviePlayer.GetFeedback
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execGetFeedback_Parms
{
	int                                                nType;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.CompleteBatchPurchaseRequest
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execCompleteBatchPurchaseRequest_Parms
{
};

// Function TgClientBase.TgMoviePlayer.AddBatchPurchaseRequest
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execAddBatchPurchaseRequest_Parms
{
	int                                                nVendorId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nItemId;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPriceInUI;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nCurrencyType;                                    		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nQuantity;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct Fdword                                      locationId;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nCouponId;                                        		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_get_class_purchase_pricing
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_get_class_purchase_pricing_Parms
{
	int                                                nClassId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.usc_GetGameName
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_GetGameName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.GetSysCounterValue
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execGetSysCounterValue_Parms
{
	int                                                nCounterId;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.GetPortalType
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execGetPortalType_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_is_time_between
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_is_time_between_Parms
{
	struct FString                                     Start;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     End;                                              		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_isFriend
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_isFriend_Parms
{
	struct FString                                     sPlayerId;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_is_party_leader
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_is_party_leader_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_can_invite_players
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_can_invite_players_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_ableToSkipTutorial
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_ableToSkipTutorial_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_watch_eom_replay
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_watch_eom_replay_Parms
{
	struct FString                                     sInstanceId;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.usc_remove_music_theme
// [0x00024601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_remove_music_theme_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sEventName;                                       		// 0x0004 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.usc_add_music_theme
// [0x00024601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_add_music_theme_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sEventName;                                       		// 0x0004 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.usc_test_music_theme
// [0x00024601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_test_music_theme_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sEventName;                                       		// 0x0004 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.usc_show_god_detail
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_show_god_detail_Parms
{
	int                                                nClassId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_request_goto_lobby
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_request_goto_lobby_Parms
{
	struct FString                                     Title;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Desc;                                             		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.usc_redeem_login_bonus
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_redeem_login_bonus_Parms
{
};

// Function TgClientBase.TgMoviePlayer.usc_queue_create_team
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_queue_create_team_Parms
{
	int                                                nQueueId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sPassword;                                        		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.usc_onServerStabilityFeedback
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_onServerStabilityFeedback_Parms
{
};

// Function TgClientBase.TgMoviePlayer.usc_match_suggest_pick
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_match_suggest_pick_Parms
{
	int                                                nClassId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_match_suggest_ban
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_match_suggest_ban_Parms
{
	int                                                nClassId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_match_cancel_role_trade
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_match_cancel_role_trade_Parms
{
};

// Function TgClientBase.TgMoviePlayer.usc_match_request_role_trade
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_match_request_role_trade_Parms
{
	struct FString                                     sPlayerId;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.usc_match_request_trade
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_match_request_trade_Parms
{
	struct FString                                     sPlayerId;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.usc_match_request_random_class
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_match_request_random_class_Parms
{
};

// Function TgClientBase.TgMoviePlayer.usc_match_purchase_voice_pack
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_match_purchase_voice_pack_Parms
{
	int                                                nVoicePackItemId;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_match_close_random_class_popup
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_match_close_random_class_popup_Parms
{
};

// Function TgClientBase.TgMoviePlayer.usc_match_cancel_trade
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_match_cancel_trade_Parms
{
};

// Function TgClientBase.TgMoviePlayer.usc_match_ban_class
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_match_ban_class_Parms
{
	int                                                nClassId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_kick_team_player
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_kick_team_player_Parms
{
	struct FString                                     sPlayerName;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.usc_introFinished
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_introFinished_Parms
{
};

// Function TgClientBase.TgMoviePlayer.Replay
// [0x00024601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execReplay_Parms
{
	int                                                nInstanceId;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sPassword;                                        		// 0x0004 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.ChangeHudSection
// [0x00024601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execChangeHudSection_Parms
{
	struct FString                                     Section;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              percentX;                                         		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              percentY;                                         		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Scale;                                            		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              dockX;                                            		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              dockY;                                            		// 0x0020 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     dockObj;                                          		// 0x0024 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	float                                              dockObjX;                                         		// 0x0034 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              dockObjY;                                         		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      outX : 1;                                         		// 0x003C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      outY : 1;                                         		// 0x0040 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_GetHudSkinPath
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_GetHudSkinPath_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.usc_get_date_est
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execusc_get_date_est_Parms
{
	class UGFxObject*                                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_get_time
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_get_time_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_get_server_time_secs
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_get_server_time_secs_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_get_server_time
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_get_server_time_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_SyncMorriganPassiveMeter
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_SyncMorriganPassiveMeter_Parms
{
	class UGFxObject*                                  passiveMeter;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_GetRentedTimeLeft
// [0x00024601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_GetRentedTimeLeft_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nIdType;                                          		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_resize_browser
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_resize_browser_Parms
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

// Function TgClientBase.TgMoviePlayer.usc_match_can_purchase_random_class
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_match_can_purchase_random_class_Parms
{
	int                                                nQueueId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_is_item_owned
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_is_item_owned_Parms
{
	struct FString                                     ItemId;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_is_in_game
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_is_in_game_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_isInTutorial
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_isInTutorial_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_isInSiege
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_isInSiege_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_isCapsLockActive
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_isCapsLockActive_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_can_play_again
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_can_play_again_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_IsGameBit
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_IsGameBit_Parms
{
	int                                                iGB;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_ConfirmHudSkin
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_ConfirmHudSkin_Parms
{
	int                                                nId;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_viewStatsOnline
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_viewStatsOnline_Parms
{
	struct FString                                     sInstanceId;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.usc_upgrade_item
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_upgrade_item_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nUpgradeInvId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_unregister_mouse_region
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_unregister_mouse_region_Parms
{
	struct FString                                     Key;                                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.usc_test_voice_pack
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_test_voice_pack_Parms
{
	int                                                nVoicePackId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nSkinId;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_test_announcer_pack
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_test_announcer_pack_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_surrender
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_surrender_Parms
{
	unsigned long                                      bSurrender : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_show_skin
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_show_skin_Parms
{
	int                                                nSkinId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_set_auto_skill_up
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_set_auto_skill_up_Parms
{
	unsigned long                                      bAutoSkill : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bForMatch : 1;                                    		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_set_auto_purchase
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_set_auto_purchase_Parms
{
	unsigned long                                      bAutoPurchase : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bForMatch : 1;                                    		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_sell_item
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_sell_item_Parms
{
	int                                                nInventoryId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_resend_private_messages
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_resend_private_messages_Parms
{
};

// Function TgClientBase.TgMoviePlayer.usc_request_treasure_roll
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_request_treasure_roll_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                CurrencyType;                                     		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_keep_me_logged_in
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_keep_me_logged_in_Parms
{
	unsigned long                                      bNewValue : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_rejectNotification
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_rejectNotification_Parms
{
	int                                                nNotificationType;                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nId;                                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_register_mouse_region
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_register_mouse_region_Parms
{
	struct FString                                     Key;                                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                X;                                                		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Y;                                                		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Width;                                            		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Height;                                           		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_redeem_reward
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_redeem_reward_Parms
{
	int                                                nActId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nGoalId;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nCount;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_queue_leave
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_queue_leave_Parms
{
};

// Function TgClientBase.TgMoviePlayer.usc_purchase_item
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_purchase_item_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nAmount;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_play_again
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_play_again_Parms
{
};

// Function TgClientBase.TgMoviePlayer.usc_passwordInputFocus
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_passwordInputFocus_Parms
{
};

// Function TgClientBase.TgMoviePlayer.usc_open_triumph_chest
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_open_triumph_chest_Parms
{
	int                                                nLootTableItemId;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_nameInputFocus
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_nameInputFocus_Parms
{
};

// Function TgClientBase.TgMoviePlayer.usc_match_lock_in
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_match_lock_in_Parms
{
};

// Function TgClientBase.TgMoviePlayer.usc_match_choose_skin
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_match_choose_skin_Parms
{
	int                                                nSkinId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_match_choose_class
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_match_choose_class_Parms
{
	int                                                nClassId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_friend_action
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_friend_action_Parms
{
	struct FString                                     sType;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sPlayerId;                                        		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.usc_enable_browser_input
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_enable_browser_input_Parms
{
	unsigned long                                      bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_close_eom_lobby
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_close_eom_lobby_Parms
{
	int                                                nNavigationTarget;                                		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_clearLeagueDC
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_clearLeagueDC_Parms
{
};

// Function TgClientBase.TgMoviePlayer.usc_attempt_auto_login
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_attempt_auto_login_Parms
{
};

// Function TgClientBase.TgMoviePlayer.usc_acceptNotification
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_acceptNotification_Parms
{
	int                                                nNotificationType;                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nId;                                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_Accept_Match_Invite
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_Accept_Match_Invite_Parms
{
};

// Function TgClientBase.TgMoviePlayer.UnloadHudSection
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execUnloadHudSection_Parms
{
	struct FString                                     Section;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.USC_ShowLeaderboard
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execUSC_ShowLeaderboard_Parms
{
	struct FString                                     sName;                                            		// 0x0000 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                nValue;                                           		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                nOption;                                          		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.SetSpecTeamName
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execSetSpecTeamName_Parms
{
	unsigned long                                      bEnemy : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     TeamName;                                         		// 0x0004 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.SetSpecState
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execSetSpecState_Parms
{
	struct FString                                     stateString;                                      		// 0x0000 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.EndLobbyPlayback
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execEndLobbyPlayback_Parms
{
};

// Function TgClientBase.TgMoviePlayer.CancelPlayback
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execCancelPlayback_Parms
{
};

// Function TgClientBase.TgMoviePlayer.USC_SelectedPopup
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execUSC_SelectedPopup_Parms
{
	int                                                nActionId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sInputValue;                                      		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sSecondaryInputValue;                             		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.TryPopupCallback
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execTryPopupCallback_Parms
{
	int                                                nActionId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sInputValue;                                      		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sSecondaryInputValue;                             		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.AddInitialChatMessages
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execAddInitialChatMessages_Parms
{
};

// Function TgClientBase.TgMoviePlayer.FakeItemToast
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execFakeItemToast_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.CloseChatTab
// [0x00024400] ( FUNC_Native )
struct UTgMoviePlayer_execCloseChatTab_Parms
{
	int                                                nChannel;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sSender;                                          		// 0x0004 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.OpenChatTab
// [0x00024400] ( FUNC_Native )
struct UTgMoviePlayer_execOpenChatTab_Parms
{
	int                                                nChannel;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForce : 1;                                       		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.UpdateMapBackground
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execUpdateMapBackground_Parms
{
};

// Function TgClientBase.TgMoviePlayer.AttemptAutoReplayDemoRecording
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execAttemptAutoReplayDemoRecording_Parms
{
};

// Function TgClientBase.TgMoviePlayer.usc_chat_ready
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_chat_ready_Parms
{
};

// Function TgClientBase.TgMoviePlayer.usc_vgs_command
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_vgs_command_Parms
{
	int                                                nId;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSubMenu : 1;                                     		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_chat_close_tab
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_chat_close_tab_Parms
{
	int                                                nChannel;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Sender;                                           		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.usc_get_sellback_price
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_get_sellback_price_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_full_sellback_available
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_full_sellback_available_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_set_chat_channel
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_set_chat_channel_Parms
{
	int                                                nChannel;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.AddRemoveDeferredChannelTab
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execAddRemoveDeferredChannelTab_Parms
{
	unsigned long                                      bAdd : 1;                                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                nChannelId;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_can_view_user_content
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execusc_can_view_user_content_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.UnregisterForJSON
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execUnregisterForJSON_Parms
{
	class UPComUIManagerBase*                          pRegistrant;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sJsonName;                                        		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.RegisterForJSON
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execRegisterForJSON_Parms
{
	class UPComUIManagerBase*                          pRegistrant;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sJsonName;                                        		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.UnregisterMctsCallbacks
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execUnregisterMctsCallbacks_Parms
{
};

// Function TgClientBase.TgMoviePlayer.RegisterMctsCallbacks
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execRegisterMctsCallbacks_Parms
{
};

// Function TgClientBase.TgMoviePlayer.OpenWorldScene
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execOpenWorldScene_Parms
{
	struct FString                                     CameraName;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                cameraTransitionType;                             		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_IME_Exists
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_IME_Exists_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_IME_SetEnabled
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_IME_SetEnabled_Parms
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_view_player_profile
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_view_player_profile_Parms
{
	struct FString                                     sPlayerId;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sPlayerName;                                      		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sProfileTab;                                      		// 0x0020 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.usc_view_platform_player_card
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_view_platform_player_card_Parms
{
	struct FString                                     sPlayerId;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sPlayerName;                                      		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.UpdatePromptMode
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execUpdatePromptMode_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.SetButtonPromptMode
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execSetButtonPromptMode_Parms
{
	int                                                nMode;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_HasPlayerLogin
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_HasPlayerLogin_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_getFontSize
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_getFontSize_Parms
{
	struct FString                                     Identifier;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     SectionName;                                      		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x0020 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.usc_TranslateMsg
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_TranslateMsg_Parms
{
	struct FString                                     Identifier;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     SectionName;                                      		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x0020 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.usc_TranslateMsgId
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execusc_TranslateMsgId_Parms
{
	int                                                nId;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.ShowTransitionScene
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgMoviePlayer_execShowTransitionScene_Parms
{
	unsigned long                                      bShow : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_is_safe_to_load
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execusc_is_safe_to_load_Parms
{
	struct FString                                     sUrl;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.usc_toggle_key_capture
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execusc_toggle_key_capture_Parms
{
	unsigned long                                      bCapture : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_toggle_cursor
// [0x00024400] ( FUNC_Native )
struct UTgMoviePlayer_execusc_toggle_cursor_Parms
{
	unsigned long                                      bShow : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bOnlyVisibility : 1;                              		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.usc_quit
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execusc_quit_Parms
{
};

// Function TgClientBase.TgMoviePlayer.usc_Console_Command
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execusc_Console_Command_Parms
{
	struct FString                                     Cmd;                                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.usc_Scene_Manager_Created
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execusc_Scene_Manager_Created_Parms
{
};

// Function TgClientBase.TgMoviePlayer.usc_Event_Mediator_Created
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execusc_Event_Mediator_Created_Parms
{
};

// Function TgClientBase.TgMoviePlayer.usc_Data_Handler_Created
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execusc_Data_Handler_Created_Parms
{
};

// Function TgClientBase.TgMoviePlayer.GotoSendGift
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execGotoSendGift_Parms
{
	struct FPointer                                    pPID;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.ProcessUIEvents
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execProcessUIEvents_Parms
{
};

// Function TgClientBase.TgMoviePlayer.UIChangeEvent
// [0x00024400] ( FUNC_Native )
struct UTgMoviePlayer_execUIChangeEvent_Parms
{
	class AActor*                                      refActor;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Event;                                            		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bUnique : 1;                                      		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                subType;                                          		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.UnregisterEngineCallbacks
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execUnregisterEngineCallbacks_Parms
{
};

// Function TgClientBase.TgMoviePlayer.RegisterEngineCallbacks
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execRegisterEngineCallbacks_Parms
{
};

// Function TgClientBase.TgMoviePlayer.GetKeyBindText
// [0x00024400] ( FUNC_Native )
struct UTgMoviePlayer_execGetKeyBindText_Parms
{
	struct FString                                     Command;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nAlternate;                                       		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bUseLookup : 1;                                   		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0018 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.GetTranslatedSpecKeyBind
// [0x00024400] ( FUNC_Native )
struct UTgMoviePlayer_execGetTranslatedSpecKeyBind_Parms
{
	struct FString                                     Command;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nAlternate;                                       		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bUseLookup : 1;                                   		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0018 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.GetTranslatedKeyBind
// [0x00024400] ( FUNC_Native )
struct UTgMoviePlayer_execGetTranslatedKeyBind_Parms
{
	struct FString                                     Command;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nAlternate;                                       		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bUseLookup : 1;                                   		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0018 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMoviePlayer.UpdateViewportForSafeAreas
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execUpdateViewportForSafeAreas_Parms
{
};

// Function TgClientBase.TgMoviePlayer.OnMatchTimeout
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execOnMatchTimeout_Parms
{
	float                                              nDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.NativeTick
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execNativeTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMoviePlayer.OnClose
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UTgMoviePlayer_eventOnClose_Parms
{
};

// Function TgClientBase.TgMoviePlayer.PostInit
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execPostInit_Parms
{
};

// Function TgClientBase.TgMoviePlayer.InitializeSceneManager
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execInitializeSceneManager_Parms
{
};

// Function TgClientBase.TgMoviePlayer.InitializeDataHandler
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execInitializeDataHandler_Parms
{
};

// Function TgClientBase.TgMoviePlayer.GetSettingsData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execGetSettingsData_Parms
{
	class UTgDataGroup_Settings*                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.GetEOMLobbyData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execGetEOMLobbyData_Parms
{
	class UTgDataGroup_EOMLobby*                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.GetBattlePassDataChunk
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execGetBattlePassDataChunk_Parms
{
	class UTgLobbyDC_BattlePass*                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.GetLobbyInventoryDataChunk
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execGetLobbyInventoryDataChunk_Parms
{
	class UTgLobbyDC_Inventory*                        ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.GetCharacterBuilderData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execGetCharacterBuilderData_Parms
{
	class UTgGameDC_Player*                            ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.GetLobbyDataChunk
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execGetLobbyDataChunk_Parms
{
	class UTgLobbyDC_Lobby*                            ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.GetMatchDataChunk
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execGetMatchDataChunk_Parms
{
	class UTgLobbyDC_Match*                            ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.GetLobbyData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execGetLobbyData_Parms
{
	class UTgDataGroup_Lobby*                          ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.GetGameData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execGetGameData_Parms
{
	class UTgDataGroup_Game*                           ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.GetStateInfo
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execGetStateInfo_Parms
{
	class UTgUIServerStates*                           ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.GetESportsManager
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execGetESportsManager_Parms
{
	class UTgEsportsManager*                           ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.GetDeferManager
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execGetDeferManager_Parms
{
	class UTgDeferManager*                             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.GetIntervalManager
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execGetIntervalManager_Parms
{
	class UTgIntervalManager*                          ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.GetDispatcher
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgMoviePlayer_execGetDispatcher_Parms
{
	class UTgEventDispatcher*                          ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.GetHUD
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execGetHUD_Parms
{
	class ATgClientHUD*                                ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.GetPlayerOwner
// [0x00020400] ( FUNC_Native )
struct UTgMoviePlayer_execGetPlayerOwner_Parms
{
	class ATgPlayerController*                         ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMoviePlayer.OnPrivilegeCallback
// [0x00120000] 
struct UTgMoviePlayer_execOnPrivilegeCallback_Parms
{
	unsigned char                                      ePriv;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ePermiss;                                         		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgBrowserManager.OpenWebPage
// [0x00024802] ( FUNC_Event )
struct UTgBrowserManager_eventOpenWebPage_Parms
{
	int                                                pageType;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bExternal : 1;                                    		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bShowNavButtons : 1;                              		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bAddLang : 1;                                     		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// struct FString                                  URL;                                              		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TgClientBase.TgBrowserManager.GetURLByPageType
// [0x00020002] 
struct UTgBrowserManager_execGetURLByPageType_Parms
{
	int                                                pageType;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgBrowserManager.OpenWebPageWithTarget
// [0x00024802] ( FUNC_Event )
struct UTgBrowserManager_eventOpenWebPageWithTarget_Parms
{
	int                                                pageType;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     urlTarget;                                        		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bExternal : 1;                                    		// 0x0014 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bShowNavButtons : 1;                              		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// struct FString                                  URL;                                              		// 0x001C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TgClientBase.TgBrowserManager.SetContainer
// [0x00020400] ( FUNC_Native )
struct UTgBrowserManager_execSetContainer_Parms
{
	class UTgGFxBrowser*                               pContainer;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgBrowserManager.ResizeView
// [0x00020400] ( FUNC_Native )
struct UTgBrowserManager_execResizeView_Parms
{
};

// Function TgClientBase.TgBrowserManager.Close
// [0x00020400] ( FUNC_Native )
struct UTgBrowserManager_execClose_Parms
{
};

// Function TgClientBase.TgBrowserManager.OpenVideo
// [0x00020400] ( FUNC_Native )
struct UTgBrowserManager_execOpenVideo_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgBrowserManager.OpenURL
// [0x00024400] ( FUNC_Native )
struct UTgBrowserManager_execOpenURL_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bShowNavButtons : 1;                              		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bSetFocus : 1;                                    		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgBrowserManager.ExternalOpenURL
// [0x00024400] ( FUNC_Native )
struct UTgBrowserManager_execExternalOpenURL_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bAddLang : 1;                                     		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgBrowserManager.OnLobbyStateChange
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgBrowserManager_execOnLobbyStateChange_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgBrowserManager.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgBrowserManager_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgBrowserManager.IsBrowserLoaded
// [0x00020002] 
struct UTgBrowserManager_execIsBrowserLoaded_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgCanvasDrawInterface.DrawCanvas
// [0x00020400] ( FUNC_Native )
struct UTgCanvasDrawInterface_execDrawCanvas_Parms
{
	class UCanvas*                                     pCanvas;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgChatData.TokenReplace
// [0x00020802] ( FUNC_Event )
struct UTgChatData_eventTokenReplace_Parms
{
	struct FString                                     Message;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Token;                                            		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sValue;                                           		// 0x0020 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x0030 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgChatData.CheckWarning
// [0x00020802] ( FUNC_Event )
struct UTgChatData_eventCheckWarning_Parms
{
	struct FString                                     Message;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgClientHUD.GetBulletPoint
// [0x00020802] ( FUNC_Event )
struct ATgClientHUD_eventGetBulletPoint_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Message;                                          		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function TgClientBase.TgClientHUD.GetGameState
// [0x00020802] ( FUNC_Event )
struct ATgClientHUD_eventGetGameState_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgClientHUD.KillScene
// [0x00020A02] ( FUNC_Exec | FUNC_Event )
struct ATgClientHUD_execKillScene_Parms
{
	struct FString                                     SceneName;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgClientHUD.ToggleScene
// [0x00020A02] ( FUNC_Exec | FUNC_Event )
struct ATgClientHUD_execToggleScene_Parms
{
	struct FString                                     SceneName;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgClientHUD.UnloadScene
// [0x00020A02] ( FUNC_Exec | FUNC_Event )
struct ATgClientHUD_execUnloadScene_Parms
{
	struct FString                                     SceneName;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgClientHUD.LoadScene
// [0x00020A02] ( FUNC_Exec | FUNC_Event )
struct ATgClientHUD_execLoadScene_Parms
{
	struct FString                                     SceneName;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgClientHUD.Tick
// [0x00020802] ( FUNC_Event )
struct ATgClientHUD_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgClientHUD.LogState
// [0x00020003] ( FUNC_Final )
struct ATgClientHUD_execLogState_Parms
{
	struct FString                                     sName;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgClientHUD.PostBeginPlay
// [0x00020102] 
struct ATgClientHUD_execPostBeginPlay_Parms
{
	// class APlayerController*                        localPC;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function TgClientBase.TgClientHUD.PostRender
// [0x00020802] ( FUNC_Event )
struct ATgClientHUD_eventPostRender_Parms
{
};

// Function TgClientBase.TgClientHUD.OnEscapePressed
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgClientHUD_execOnEscapePressed_Parms
{
};

// Function TgClientBase.TgClientHUD.OnDisconnect
// [0x00020400] ( FUNC_Native )
struct ATgClientHUD_execOnDisconnect_Parms
{
};

// Function TgClientBase.TgClientHUD.NotifyLobbyStateChange
// [0x00020400] ( FUNC_Native )
struct ATgClientHUD_execNotifyLobbyStateChange_Parms
{
};

// Function TgClientBase.TgClientHUD.SHC
// [0x00020202] ( FUNC_Exec )
struct ATgClientHUD_execSHC_Parms
{
	unsigned long                                      bShow : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgClientHUD.ShowHardwareCursor
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgClientHUD_execShowHardwareCursor_Parms
{
	unsigned long                                      bShow : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgClientHUD.ToggleDevMenu
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgClientHUD_execToggleDevMenu_Parms
{
};

// Function TgClientBase.TgClientHUD.ToggleVGSScene
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgClientHUD_execToggleVGSScene_Parms
{
};

// Function TgClientBase.TgClientHUD.ToggleHUDScene
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgClientHUD_execToggleHUDScene_Parms
{
	struct FString                                     SceneName;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgClientHUD.ToggleHUD
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgClientHUD_execToggleHUD_Parms
{
};

// Function TgClientBase.TgClientHUD.TestDidIt
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct ATgClientHUD_execTestDidIt_Parms
{
	int                                                nActivityId;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nCount;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nGoalId;                                          		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgClientHUD.UpdateSpectatorSettingsMenu
// [0x00020400] ( FUNC_Native )
struct ATgClientHUD_execUpdateSpectatorSettingsMenu_Parms
{
};

// Function TgClientBase.TgClientHUD.UpdateKeyBindSettingsMenu
// [0x00024400] ( FUNC_Native )
struct ATgClientHUD_execUpdateKeyBindSettingsMenu_Parms
{
	int                                                settingtype;                                      		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgClientHUD.UpdateSpecKeyDisplay
// [0x00020400] ( FUNC_Native )
struct ATgClientHUD_execUpdateSpecKeyDisplay_Parms
{
	struct FString                                     Key;                                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgClientHUD.UpdateKeyDisplay
// [0x00020400] ( FUNC_Native )
struct ATgClientHUD_execUpdateKeyDisplay_Parms
{
	struct FString                                     Key;                                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgClientHUD.gfxProcessSound
// [0x00020400] ( FUNC_Native )
struct ATgClientHUD_execgfxProcessSound_Parms
{
	struct FName                                       aThemeName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       aEventName;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgClientHUD.IsInGame
// [0x00020400] ( FUNC_Native )
struct ATgClientHUD_execIsInGame_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgClientHUD.IsLoggedIn
// [0x00020400] ( FUNC_Native )
struct ATgClientHUD_execIsLoggedIn_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgClientHUD.GetVisibilityMode
// [0x00020400] ( FUNC_Native )
struct ATgClientHUD_execGetVisibilityMode_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgClientHUD.GetDataHandler
// [0x00020400] ( FUNC_Native )
struct ATgClientHUD_execGetDataHandler_Parms
{
	class UTgDataHandler*                              ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgClientHUD.NativePostRender
// [0x00020400] ( FUNC_Native )
struct ATgClientHUD_execNativePostRender_Parms
{
};

// Function TgClientBase.TgClientHUD.UnregisterForPostRender
// [0x00020400] ( FUNC_Native )
struct ATgClientHUD_execUnregisterForPostRender_Parms
{
	class UTgCanvasDrawInterface*                      pObj;                                             		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgClientHUD.RegisterForPostRender
// [0x00020400] ( FUNC_Native )
struct ATgClientHUD_execRegisterForPostRender_Parms
{
	class UTgCanvasDrawInterface*                      pObj;                                             		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgClientHUD.TutorialMessage
// [0x00020400] ( FUNC_Native )
struct ATgClientHUD_execTutorialMessage_Parms
{
	int                                                msgId;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bTips : 1;                                        		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgClientHUD.ResetViewCenterPoint
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgClientHUD_execResetViewCenterPoint_Parms
{
};

// Function TgClientBase.TgClientHUD.SetViewCenterPoint
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgClientHUD_execSetViewCenterPoint_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fScale;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgClientHUD.DisplayBadConnectionAlert
// [0x00020400] ( FUNC_Native )
struct ATgClientHUD_execDisplayBadConnectionAlert_Parms
{
};

// Function TgClientBase.TgClientHUD.InitSceneManager
// [0x00020400] ( FUNC_Native )
struct ATgClientHUD_execInitSceneManager_Parms
{
};

// Function TgClientBase.TgClientHUD.InitMainMoviePlayer
// [0x00020400] ( FUNC_Native )
struct ATgClientHUD_execInitMainMoviePlayer_Parms
{
};

// Function TgClientBase.TgClientHUD.ShowCursor
// [0x00024400] ( FUNC_Native )
struct ATgClientHUD_execShowCursor_Parms
{
	unsigned long                                      bShow : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bUpdateCapture : 1;                               		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgClientHUD.CloseMovie
// [0x00024400] ( FUNC_Native )
struct ATgClientHUD_execCloseMovie_Parms
{
	class UGFxMoviePlayer*                             mp;                                               		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bUnload : 1;                                      		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgClientHUD.CreateMovie
// [0x00024400] ( FUNC_Native )
struct ATgClientHUD_execCreateMovie_Parms
{
	class UClass*                                      MovieClass;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bAutoFocus : 1;                                   		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bCaptureInput : 1;                                		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      TimingMode;                                       		// 0x0010 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     sMoviePath;                                       		// 0x0014 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UGFxMoviePlayer*                             ReturnValue;                                      		// 0x0024 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgClientHUD.UnregisterEngineCallbacks
// [0x00020400] ( FUNC_Native )
struct ATgClientHUD_execUnregisterEngineCallbacks_Parms
{
};

// Function TgClientBase.TgClientHUD.RegisterEngineCallbacks
// [0x00020400] ( FUNC_Native )
struct ATgClientHUD_execRegisterEngineCallbacks_Parms
{
};

// Function TgClientBase.TgClientObject.GetMovieDispatcher
// [0x00020400] ( FUNC_Native )
struct UTgClientObject_execGetMovieDispatcher_Parms
{
	class UTgEventDispatcher*                          ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgClientObject.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgClientObject_execUninitialize_Parms
{
};

// Function TgClientBase.TgClientObject.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgClientObject_execInitialize_Parms
{
	class UTgMoviePlayer*                              pMoviePlayer;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgAcquisitionManager.AddQueuedAcquisition
// [0x00420400] ( FUNC_Native )
struct UTgAcquisitionManager_execAddQueuedAcquisition_Parms
{
	struct FUIQueuedAcquisition                        acqData;                                          		// 0x0000 (0x0080) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgAcquisitionManager.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgAcquisitionManager_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgDeferManager.CancelTask
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgDeferManager_execCancelTask_Parms
{
	class UTgDeferredTask*                             pTask;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgDeferManager.StartTask
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgDeferManager_execStartTask_Parms
{
	class UTgDeferredTask*                             pTask;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     pOwner;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nmCallback;                                       		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgDeferManager.GetProgress
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgDeferManager_execGetProgress_Parms
{
	class UTgDeferredTask*                             pTask;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FTgDeferProgress                            ReturnValue;                                      		// 0x0008 (0x0014) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgDeferManager.ClearAllCallbacks
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgDeferManager_execClearAllCallbacks_Parms
{
	class UObject*                                     pOwner;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgDeferManager.ClearCallback
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgDeferManager_execClearCallback_Parms
{
	class UTgDeferredTask*                             pTask;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgDeferManager.SetAllCallbacks
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgDeferManager_execSetAllCallbacks_Parms
{
	TArray< struct FTgDeferTaskData >                  arrTasks;                                         		// 0x0000 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	class UObject*                                     pOwner;                                           		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nmCallback;                                       		// 0x0018 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgDeferManager.SetCallback
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgDeferManager_execSetCallback_Parms
{
	class UTgDeferredTask*                             pTask;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     pOwner;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nmCallback;                                       		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgDeferManager.GetTasks
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgDeferManager_execGetTasks_Parms
{
	class UObject*                                     pOwner;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FTgDeferTaskData >                  out_arrData;                                      		// 0x0008 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgDeferManager.IsTickable
// [0x00020400] ( FUNC_Native )
struct UTgDeferManager_execIsTickable_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgDeferManager.Tick
// [0x00020400] ( FUNC_Native )
struct UTgDeferManager_execTick_Parms
{
	float                                              nDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgDeferManager.OnDeferUpdate
// [0x00520000] 
struct UTgDeferManager_execOnDeferUpdate_Parms
{
	struct FTgDeferProgress                            Progress;                                         		// 0x0000 (0x0014) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgDeferredTask.Tick
// [0x00420400] ( FUNC_Native )
struct UTgDeferredTask_execTick_Parms
{
	float                                              nDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTgDeferProgress                            Progress;                                         		// 0x0004 (0x0014) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgDeferDeclineFriendRequests.OnFriendTimeout
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgDeferDeclineFriendRequests_execOnFriendTimeout_Parms
{
	float                                              nDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgDeferDeclineFriendRequests.OnFriendUpdate
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgDeferDeclineFriendRequests_execOnFriendUpdate_Parms
{
	struct FPointer                                    pEventBase;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgDeferDeclineFriendRequests.Tick
// [0x00420400] ( FUNC_Native )
struct UTgDeferDeclineFriendRequests_execTick_Parms
{
	float                                              nDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTgDeferProgress                            Progress;                                         		// 0x0004 (0x0014) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgDeferDeclineFriendRequests.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgDeferDeclineFriendRequests_execUninitialize_Parms
{
};

// Function TgClientBase.TgDeferDeclineFriendRequests.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgDeferDeclineFriendRequests_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgPopupManager.OnQueueStateChange
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgPopupManager_execOnQueueStateChange_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgPopupManager.OpenPopup
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgPopupManager_execOpenPopup_Parms
{
};

// Function TgClientBase.TgPopupManager.RemoveAllPopups
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgPopupManager_execRemoveAllPopups_Parms
{
};

// Function TgClientBase.TgPopupManager.RemovePopup
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgPopupManager_execRemovePopup_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgPopupManager.AddPopup
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgPopupManager_execAddPopup_Parms
{
	class UTgPagePopup*                                PopUp;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgPopupManager.ClosePopup
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgPopupManager_execClosePopup_Parms
{
};

// Function TgClientBase.TgPopupManager.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgPopupManager_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgRewardCenterManagerBase.OnAcquisition
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgRewardCenterManagerBase_execOnAcquisition_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgRewardCenterManagerBase.UpdateLoginDay
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgRewardCenterManagerBase_execUpdateLoginDay_Parms
{
	struct Fdword                                      nDay;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgRewardCenterManagerBase.ClaimLoginBonus
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgRewardCenterManagerBase_execClaimLoginBonus_Parms
{
};

// Function TgClientBase.TgRewardCenterManagerBase.TryAutoCollectLoginBonus
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgRewardCenterManagerBase_execTryAutoCollectLoginBonus_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgRewardCenterManagerBase.TryShowLoginBonus
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgRewardCenterManagerBase_execTryShowLoginBonus_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgRewardCenterManagerBase.ShouldShowLoginBonus
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgRewardCenterManagerBase_execShouldShowLoginBonus_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgSessionVars.GetFriendData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSessionVars_execGetFriendData_Parms
{
	class UTgGFxFriendData*                            ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgSessionVars.GetPlayerGenerator
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSessionVars_execGetPlayerGenerator_Parms
{
	class UTgGFxPlayerGenerator*                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgSessionVars.OnHUDStateChange
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSessionVars_execOnHUDStateChange_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSessionVars.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgSessionVars_execUninitialize_Parms
{
};

// Function TgClientBase.TgSessionVars.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgSessionVars_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgStreamManagerBase.GetFeatureDescription
// [0x00024002] 
struct UTgStreamManagerBase_execGetFeatureDescription_Parms
{
	int                                                Count;                                            		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TgClientBase.TgStreamManagerBase.GetFeatureName
// [0x00024002] 
struct UTgStreamManagerBase_execGetFeatureName_Parms
{
	int                                                Count;                                            		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function TgClientBase.TgStreamManagerBase.HaveFeature
// [0x00020002] 
struct UTgStreamManagerBase_execHaveFeature_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function TgClientBase.TgStreamManagerBase.IsLiveAtIndex
// [0x00020002] 
struct UTgStreamManagerBase_execIsLiveAtIndex_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgStreamManagerBase.GetDescriptionAtIndex
// [0x00020002] 
struct UTgStreamManagerBase_execGetDescriptionAtIndex_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  Desc;                                             		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TgClientBase.TgStreamManagerBase.GetViewersAtIndex
// [0x00020002] 
struct UTgStreamManagerBase_execGetViewersAtIndex_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgStreamManagerBase.GetTitleAtIndex
// [0x00020002] 
struct UTgStreamManagerBase_execGetTitleAtIndex_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgStreamManagerBase.IsStream
// [0x00020002] 
struct UTgStreamManagerBase_execIsStream_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgStreamManagerBase.GetTypeCountWatching
// [0x00020002] 
struct UTgStreamManagerBase_execGetTypeCountWatching_Parms
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Count;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TgClientBase.TgStreamManagerBase.GetTypeCount
// [0x00020002] 
struct UTgStreamManagerBase_execGetTypeCount_Parms
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Count;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function TgClientBase.TgStreamManagerBase.LiveSort
// [0x00120002] 
struct UTgStreamManagerBase_execLiveSort_Parms
{
	struct FGameStream                                 A;                                                		// 0x0000 (0x0058) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FGameStream                                 B;                                                		// 0x0058 (0x0058) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x00B0 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgStreamManagerBase.FeaturedSort
// [0x00120002] 
struct UTgStreamManagerBase_execFeaturedSort_Parms
{
	struct FGameStream                                 A;                                                		// 0x0000 (0x0058) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FGameStream                                 B;                                                		// 0x0058 (0x0058) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x00B0 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgStreamManagerBase.ViewerSort
// [0x00120002] 
struct UTgStreamManagerBase_execViewerSort_Parms
{
	struct FGameStream                                 A;                                                		// 0x0000 (0x0058) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FGameStream                                 B;                                                		// 0x0058 (0x0058) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x00B0 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgStreamManagerBase.ResolveChannelName
// [0x00020802] ( FUNC_Event )
struct UTgStreamManagerBase_eventResolveChannelName_Parms
{
	struct FString                                     sChannel;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgStreamManagerBase.CompleteUpdate
// [0x00020802] ( FUNC_Event )
struct UTgStreamManagerBase_eventCompleteUpdate_Parms
{
};

// Function TgClientBase.TgStreamManagerBase.ViewStreamIndex
// [0x00024802] ( FUNC_Event )
struct UTgStreamManagerBase_eventViewStreamIndex_Parms
{
	int                                                surfaceId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Index;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      external : 1;                                     		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              X;                                                		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Y;                                                		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Width;                                            		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Height;                                           		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              widthReal;                                        		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              heightReal;                                       		// 0x0020 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      joinChat : 1;                                     		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FString                                  watch_end;                                        		// 0x002C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TgClientBase.TgStreamManagerBase.UpdateStreams
// [0x00020400] ( FUNC_Native )
struct UTgStreamManagerBase_execUpdateStreams_Parms
{
};

// Function TgClientBase.TgStreamManagerBase.HasSpecialStreams
// [0x00020400] ( FUNC_Native )
struct UTgStreamManagerBase_execHasSpecialStreams_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgStreamManagerBase.OpenPlayerStream
// [0x00020400] ( FUNC_Native )
struct UTgStreamManagerBase_execOpenPlayerStream_Parms
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      external : 1;                                     		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              X;                                                		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Width;                                            		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Height;                                           		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              widthReal;                                        		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              heightReal;                                       		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgStreamManagerBase.OpenStream
// [0x00024400] ( FUNC_Native )
struct UTgStreamManagerBase_execOpenStream_Parms
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

// Function TgClientBase.TgStreamManagerBase.LoadStreams
// [0x00020400] ( FUNC_Native )
struct UTgStreamManagerBase_execLoadStreams_Parms
{
};

// Function TgClientBase.TgDataHandler.MoviePlayer_GetUseSpectateEOMLobby
// [0x00020400] ( FUNC_Native )
struct UTgDataHandler_execMoviePlayer_GetUseSpectateEOMLobby_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgDataHandler.DispatchEvent_LobbyHud_ClearRolledOverSkin
// [0x00020400] ( FUNC_Native )
struct UTgDataHandler_execDispatchEvent_LobbyHud_ClearRolledOverSkin_Parms
{
};

// Function TgClientBase.TgDataHandler.DispatchEvent_MoviePlayer_SetIsCustom
// [0x00020400] ( FUNC_Native )
struct UTgDataHandler_execDispatchEvent_MoviePlayer_SetIsCustom_Parms
{
	unsigned long                                      bIsCustom : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgDataHandler.DispatchEvent_MatchLobbyClassSelection_SetSpectatorMode
// [0x00020400] ( FUNC_Native )
struct UTgDataHandler_execDispatchEvent_MatchLobbyClassSelection_SetSpectatorMode_Parms
{
};

// Function TgClientBase.TgDataHandler.DispatchEvent_SpectatorHUD_ForceTeamUpdate
// [0x00020400] ( FUNC_Native )
struct UTgDataHandler_execDispatchEvent_SpectatorHUD_ForceTeamUpdate_Parms
{
};

// Function TgClientBase.TgDataHandler.ChatInput_SetReplyName
// [0x00020400] ( FUNC_Native )
struct UTgDataHandler_execChatInput_SetReplyName_Parms
{
	struct FString                                     sSenderName;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgDataHandler.DispatchEvent_VendorStore_UpdateInventory
// [0x00020400] ( FUNC_Native )
struct UTgDataHandler_execDispatchEvent_VendorStore_UpdateInventory_Parms
{
};

// Function TgClientBase.TgDataHandler.DispatchEvent_VendorStore_UpdateStats
// [0x00020400] ( FUNC_Native )
struct UTgDataHandler_execDispatchEvent_VendorStore_UpdateStats_Parms
{
};

// Function TgClientBase.TgDataHandler.DoImmediateUpdate
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgDataHandler_execDoImmediateUpdate_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                Node;                                             		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bParentIsSubscribed : 1;                          		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgDataHandler.QueueDirtyChunks
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgDataHandler_execQueueDirtyChunks_Parms
{
	class UTgDataChunk*                                Node;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bParentIsSubscribed : 1;                          		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgDataHandler.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgDataHandler_execNotifyMapChange_Parms
{
};

// Function TgClientBase.TgDataHandler.Update
// [0x00024400] ( FUNC_Native )
struct UTgDataHandler_execUpdate_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bImmediate : 1;                                   		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgDataHandler.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgDataHandler_execUninitialize_Parms
{
};

// Function TgClientBase.TgDataHandler.InitializeDataHandler
// [0x00020400] ( FUNC_Native )
struct UTgDataHandler_execInitializeDataHandler_Parms
{
};

// Function TgClientBase.TgEsportsManager.ClearData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgEsportsManager_execClearData_Parms
{
};

// Function TgClientBase.TgEsportsManager.GetArrInputIntercepts
// [0x00420400] ( FUNC_Native )
struct UTgEsportsManager_execGetArrInputIntercepts_Parms
{
	struct FPointer                                    pArr;                                             		// 0x0000 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function TgClientBase.TgEsportsManager.GetArrGameEventListeners
// [0x00420400] ( FUNC_Native )
struct UTgEsportsManager_execGetArrGameEventListeners_Parms
{
	struct FPointer                                    pArr;                                             		// 0x0000 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function TgClientBase.TgEsportsManager.GetArrMctsListeners
// [0x00420400] ( FUNC_Native )
struct UTgEsportsManager_execGetArrMctsListeners_Parms
{
	struct FPointer                                    pArr;                                             		// 0x0000 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function TgClientBase.TgEsportsManager.GetArrOldMctsListeners
// [0x00420400] ( FUNC_Native )
struct UTgEsportsManager_execGetArrOldMctsListeners_Parms
{
	struct FPointer                                    pArr;                                             		// 0x0000 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function TgClientBase.TgEsportsManager.GetDispatcher
// [0x00020400] ( FUNC_Native )
struct UTgEsportsManager_execGetDispatcher_Parms
{
	class UTgEventDispatcher*                          ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgEsportsManager.RequestESportsPicks
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgEsportsManager_execRequestESportsPicks_Parms
{
};

// Function TgClientBase.TgEsportsManager.RequestESportsMatches
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgEsportsManager_execRequestESportsMatches_Parms
{
};

// Function TgClientBase.TgEsportsManager.Uninitialize
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgEsportsManager_execUninitialize_Parms
{
};

// Function TgClientBase.TgEsportsManager.Initialize
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgEsportsManager_execInitialize_Parms
{
};

// Function TgClientBase.TgEventAccessInterface.GetArrInputIntercepts
// [0x00420400] ( FUNC_Native )
struct UTgEventAccessInterface_execGetArrInputIntercepts_Parms
{
	struct FPointer                                    pArr;                                             		// 0x0000 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function TgClientBase.TgEventAccessInterface.GetArrGameEventListeners
// [0x00420400] ( FUNC_Native )
struct UTgEventAccessInterface_execGetArrGameEventListeners_Parms
{
	struct FPointer                                    pArr;                                             		// 0x0000 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function TgClientBase.TgEventAccessInterface.GetArrMctsListeners
// [0x00420400] ( FUNC_Native )
struct UTgEventAccessInterface_execGetArrMctsListeners_Parms
{
	struct FPointer                                    pArr;                                             		// 0x0000 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function TgClientBase.TgEventAccessInterface.GetArrOldMctsListeners
// [0x00420400] ( FUNC_Native )
struct UTgEventAccessInterface_execGetArrOldMctsListeners_Parms
{
	struct FPointer                                    pArr;                                             		// 0x0000 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function TgClientBase.TgEventMediator.DispatchEvent
// [0x00020400] ( FUNC_Native )
struct UTgEventMediator_execDispatchEvent_Parms
{
	struct FString                                     sEventType;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FASValue                                    EventData;                                        		// 0x0010 (0x0020) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgEventSceneInterface.GetBuyAllPurchaseModalArtLinkage
// [0x00480400] ( FUNC_Native )
struct UTgEventSceneInterface_execGetBuyAllPurchaseModalArtLinkage_Parms
{
	struct FString                                     sOutArtLinkage;                                   		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgEventSceneInterface.GetRewardItemIds
// [0x00480400] ( FUNC_Native )
struct UTgEventSceneInterface_execGetRewardItemIds_Parms
{
	TArray< int >                                      outItemIds;                                       		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgEventSceneInterface.GetAcquisitionSubtext
// [0x00480400] ( FUNC_Native )
struct UTgEventSceneInterface_execGetAcquisitionSubtext_Parms
{
	struct FUIQueuedAcquisition                        acqData;                                          		// 0x0000 (0x0080) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     sOutSubtext;                                      		// 0x0080 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGameViewportClientBase.GetSubtitleRegion
// [0x00420802] ( FUNC_Event )
struct UTgGameViewportClientBase_eventGetSubtitleRegion_Parms
{
	struct FVector2D                                   MinPos;                                           		// 0x0000 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector2D                                   MaxPos;                                           		// 0x0008 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function TgClientBase.TgGameViewportClientBase.PostRender
// [0x00020802] ( FUNC_Event )
struct UTgGameViewportClientBase_eventPostRender_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ATgPlayerController*                      PC;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ATgGameHUD*                               HUD;                                              		// 0x0010 (0x0008) [0x0000000000000000]              
	// class ATgLobbyHUDBase*                          lobbyHUD;                                         		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function TgClientBase.TgGameViewportClientBase.GameSessionEnded
// [0x00020802] ( FUNC_Event )
struct UTgGameViewportClientBase_eventGameSessionEnded_Parms
{
	// class ATgSpectatorController*                   SpectatorPC;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function TgClientBase.TgGameViewportClientBase.NotifyConnectionError
// [0x00024002] 
struct UTgGameViewportClientBase_execNotifyConnectionError_Parms
{
	unsigned char                                      MessageType;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Message;                                          		// 0x0004 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Title;                                            		// 0x0014 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGameViewportClientBase.AdjustViewportSafeZone
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameViewportClientBase_execAdjustViewportSafeZone_Parms
{
	float                                              Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameViewportClientBase.SetViewportSafeZone
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGameViewportClientBase_execSetViewportSafeZone_Parms
{
	float                                              SafeZone;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameViewportClientBase.HandleConnectionError
// [0x00020400] ( FUNC_Native )
struct UTgGameViewportClientBase_execHandleConnectionError_Parms
{
	unsigned char                                      MessageType;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameViewportClientBase.NativePostRender
// [0x00020400] ( FUNC_Native )
struct UTgGameViewportClientBase_execNativePostRender_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameViewportClientBase.IsGfxMovieCapturingMouseInput
// [0x00020400] ( FUNC_Native )
struct UTgGameViewportClientBase_execIsGfxMovieCapturingMouseInput_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGameViewportClientBase.NativeGameSessionEnded
// [0x00020400] ( FUNC_Native )
struct UTgGameViewportClientBase_execNativeGameSessionEnded_Parms
{
};

// Function TgClientBase.TgGameViewportClientBase.DrawTransition
// [0x00020000] 
struct UTgGameViewportClientBase_execDrawTransition_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxGameInputInterceptor.PrintUIGameInputIntercepts
// [0x00020203] ( FUNC_Final | FUNC_Exec )
struct UTgGfxGameInputInterceptor_execPrintUIGameInputIntercepts_Parms
{
};

// Function TgClientBase.TgGfxGameInputInterceptor.ASC_DebugPrint
// [0x00020003] ( FUNC_Final )
struct UTgGfxGameInputInterceptor_execASC_DebugPrint_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxGameInputInterceptor.DebugPrintAS
// [0x00020802] ( FUNC_Event )
struct UTgGfxGameInputInterceptor_eventDebugPrintAS_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxGameInputInterceptor.ASC_HandleInterceptInput
// [0x00020003] ( FUNC_Final )
struct UTgGfxGameInputInterceptor_execASC_HandleInterceptInput_Parms
{
	class UGFxObject*                                  Obj;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGfxGameInputInterceptor.HandleInterceptInput
// [0x00020802] ( FUNC_Event )
struct UTgGfxGameInputInterceptor_eventHandleInterceptInput_Parms
{
	class UGFxObject*                                  Obj;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGfxGameInputInterceptor.CallInputDelegate
// [0x00020802] ( FUNC_Event )
struct UTgGfxGameInputInterceptor_eventCallInputDelegate_Parms
{
	struct FScriptDelegate                             delCallback;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FPointer                                    pInputEvent;                                      		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGfxGameInputInterceptor.USC_ToggleSuspend
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxGameInputInterceptor_execUSC_ToggleSuspend_Parms
{
	unsigned long                                      suspend : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGfxGameInputInterceptor.USC_RemoveIntercept
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxGameInputInterceptor_execUSC_RemoveIntercept_Parms
{
	struct FString                                     sInput;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxGameInputInterceptor.USC_AddIntercept
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxGameInputInterceptor_execUSC_AddIntercept_Parms
{
	struct FString                                     sInput;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxGameInputInterceptor.DebugPrint
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxGameInputInterceptor_execDebugPrint_Parms
{
};

// Function TgClientBase.TgGfxGameInputInterceptor.HandleASIntercept
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxGameInputInterceptor_execHandleASIntercept_Parms
{
	struct FPointer                                    pInputEvent;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGfxGameInputInterceptor.RemoveASIntercept
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxGameInputInterceptor_execRemoveASIntercept_Parms
{
	struct FString                                     sInput;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxGameInputInterceptor.AddASIntercept
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxGameInputInterceptor_execAddASIntercept_Parms
{
	struct FString                                     sInput;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxGameInputInterceptor.SetupBindings
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxGameInputInterceptor_execSetupBindings_Parms
{
};

// Function TgClientBase.TgGfxGameInputInterceptor.HandleInput_Delegate
// [0x00120000] 
struct UTgGfxGameInputInterceptor_execHandleInput_Delegate_Parms
{
	struct FPointer                                    pInputEvent;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGfxGameVideoPlayerManager.USC_StopVideo_Delegate
// [0x00120000] 
struct UTgGfxGameVideoPlayerManager_execUSC_StopVideo_Delegate_Parms
{
};

// Function TgClientBase.TgGfxGameVideoPlayerManager.USC_StopVideo
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct UTgGfxGameVideoPlayerManager_execUSC_StopVideo_Parms
{
};

// Function TgClientBase.TgGfxGameVideoPlayerManager.USC_PlayVideo_Delegate
// [0x00120000] 
struct UTgGfxGameVideoPlayerManager_execUSC_PlayVideo_Delegate_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxObject*                                  dimensions;                                       		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxGameVideoPlayerManager.USC_PlayVideo
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct UTgGfxGameVideoPlayerManager_execUSC_PlayVideo_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxObject*                                  dimensions;                                       		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxGameVideoPlayerManager.DestroyVideoPlayer
// [0x00020802] ( FUNC_Event )
struct UTgGfxGameVideoPlayerManager_eventDestroyVideoPlayer_Parms
{
};

// Function TgClientBase.TgGfxGameVideoPlayerManager.OnVideoComplete
// [0x00020802] ( FUNC_Event )
struct UTgGfxGameVideoPlayerManager_eventOnVideoComplete_Parms
{
};

// Function TgClientBase.TgGfxGameVideoPlayerManager.ASC_OnVideoComplete
// [0x00020003] ( FUNC_Final )
struct UTgGfxGameVideoPlayerManager_execASC_OnVideoComplete_Parms
{
};

// Function TgClientBase.TgGfxGameVideoPlayerManager.OnVideoError
// [0x00020802] ( FUNC_Event )
struct UTgGfxGameVideoPlayerManager_eventOnVideoError_Parms
{
	int                                                ErrorCode;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxGameVideoPlayerManager.ASC_OnVideoError
// [0x00020003] ( FUNC_Final )
struct UTgGfxGameVideoPlayerManager_execASC_OnVideoError_Parms
{
	int                                                ErrorCode;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxGameVideoPlayerManager.SpawnVideoPlayer
// [0x00020802] ( FUNC_Event )
struct UTgGfxGameVideoPlayerManager_eventSpawnVideoPlayer_Parms
{
	class AActor*                                      SpawningActor;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxGameVideoPlayerManager.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxGameVideoPlayerManager_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxGameVideoPlayerManager.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxGameVideoPlayerManager_execInitialize_Parms
{
	class UGFxMoviePlayer*                             theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxNameDisplayManager.OnReceiveFilteredNames
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxNameDisplayManager_execOnReceiveFilteredNames_Parms
{
	unsigned long                                      bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class UTgPlayerNameManager*                        pManager;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxNameDisplayManager.CancelRequest
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxNameDisplayManager_execCancelRequest_Parms
{
	class UTgGFxPlayerNameWidget*                      pWidget;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxNameDisplayManager.MakeRequest
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgGFxNameDisplayManager_execMakeRequest_Parms
{
	class UTgGFxPlayerNameWidget*                      pWidget;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FTgPlayerId                                 pid;                                              		// 0x0008 (0x0024) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxNameDisplayManager.RemoveWidget
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxNameDisplayManager_execRemoveWidget_Parms
{
	struct FName                                       WidgetPath;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgGFxPlayerNameWidget*                      pWidget;                                          		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxNameDisplayManager.AddWidget
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxNameDisplayManager_execAddWidget_Parms
{
	struct FName                                       WidgetPath;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgGFxPlayerNameWidget*                      pWidget;                                          		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxNameDisplayManager.Uninitialize
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxNameDisplayManager_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxNameDisplayManager.Initialize
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxNameDisplayManager_execInitialize_Parms
{
};

// Function TgClientBase.TgGFxObject.ASRemoveAllEventListenersImpl
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct UTgGFxObject_eventASRemoveAllEventListenersImpl_Parms
{
	struct FString                                     Event;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxObject.ASRemoveEventListenerImpl
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct UTgGFxObject_eventASRemoveEventListenerImpl_Parms
{
	struct FString                                     Type;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxObject*                                  O;                                                		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     func;                                             		// 0x0018 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxObject.ASAddEventListenerImpl
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct UTgGFxObject_eventASAddEventListenerImpl_Parms
{
	struct FString                                     Type;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxObject*                                  O;                                                		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     func;                                             		// 0x0018 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxObject.ASRemoveListenerImpl
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct UTgGFxObject_eventASRemoveListenerImpl_Parms
{
	class UGFxObject*                                  O;                                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Member;                                           		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxObject.ASSetListenerImpl
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct UTgGFxObject_eventASSetListenerImpl_Parms
{
	class UGFxObject*                                  O;                                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Member;                                           		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             Listener;                                         		// 0x0018 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxObject.ASRemoveAllEventListeners
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxObject_execASRemoveAllEventListeners_Parms
{
	struct FName                                       nmEvent;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxObject.ASRemoveEventListener
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxObject_execASRemoveEventListener_Parms
{
	struct FName                                       nmEvent;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     pScope;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nmCallback;                                       		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxObject.ASAddEventListener
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxObject_execASAddEventListener_Parms
{
	struct FName                                       nmEvent;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     pScope;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nmCallback;                                       		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxObject.EventListener
// [0x00120000] 
struct UTgGFxObject_execEventListener_Parms
{
	struct FGFxEventData                               Data;                                             		// 0x0000 (0x002C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxObject.ProjectXYTo
// [0x00424401] ( FUNC_Final | FUNC_Native )
struct UTgGFxObject_execProjectXYTo_Parms
{
	class UGFxObject*                                  pTo;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              nX;                                               		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              nY;                                               		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      bIsPosition : 1;                                  		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgGFxObject.ProjectXYFrom
// [0x00424401] ( FUNC_Final | FUNC_Native )
struct UTgGFxObject_execProjectXYFrom_Parms
{
	class UGFxObject*                                  pFrom;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              nX;                                               		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              nY;                                               		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      bIsPosition : 1;                                  		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgGFxObject.GlobalToParent
// [0x00424401] ( FUNC_Final | FUNC_Native )
struct UTgGFxObject_execGlobalToParent_Parms
{
	float                                              nX;                                               		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              nY;                                               		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      bIsPosition : 1;                                  		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgGFxObject.ParentToGlobal
// [0x00424401] ( FUNC_Final | FUNC_Native )
struct UTgGFxObject_execParentToGlobal_Parms
{
	float                                              nX;                                               		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              nY;                                               		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      bIsPosition : 1;                                  		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgGFxObject.ParentToLocal
// [0x00424401] ( FUNC_Final | FUNC_Native )
struct UTgGFxObject_execParentToLocal_Parms
{
	float                                              nX;                                               		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              nY;                                               		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      bIsPosition : 1;                                  		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgGFxObject.LocalToParent
// [0x00424401] ( FUNC_Final | FUNC_Native )
struct UTgGFxObject_execLocalToParent_Parms
{
	float                                              nX;                                               		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              nY;                                               		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      bIsPosition : 1;                                  		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgGFxObject.GlobalToLocal
// [0x00424401] ( FUNC_Final | FUNC_Native )
struct UTgGFxObject_execGlobalToLocal_Parms
{
	float                                              nX;                                               		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              nY;                                               		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      bIsPosition : 1;                                  		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgGFxObject.LocalToGlobal
// [0x00424401] ( FUNC_Final | FUNC_Native )
struct UTgGFxObject_execLocalToGlobal_Parms
{
	float                                              nX;                                               		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              nY;                                               		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      bIsPosition : 1;                                  		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgGFxObject.GetBoundsRelativeToStage
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxObject_execGetBoundsRelativeToStage_Parms
{
	struct FRect                                       ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxObject.GetHitAreaBounds
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgGFxObject_execGetHitAreaBounds_Parms
{
	class UTgGFxObject*                                pRelativeTo;                                      		// 0x0000 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRect                                       ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxObject.GetBounds
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgGFxObject_execGetBounds_Parms
{
	class UTgGFxObject*                                pRelativeTo;                                      		// 0x0000 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRect                                       ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxObject.SetBounds
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgGFxObject_execSetBounds_Parms
{
	struct FRect                                       rectBounds;                                       		// 0x0000 (0x0010) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function TgClientBase.TgGFxObject.SetPositionY
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxObject_execSetPositionY_Parms
{
	float                                              nValue;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxObject.SetPositionX
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxObject_execSetPositionX_Parms
{
	float                                              nValue;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxObject.GetPositionY
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxObject_execGetPositionY_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxObject.GetPositionX
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxObject_execGetPositionX_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxObject.CreateGFxArray
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgGFxObject_execCreateGFxArray_Parms
{
	class UClass*                                      pClass;                                           		// 0x0000 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxObject.CreateGFxObject
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgGFxObject_execCreateGFxObject_Parms
{
	struct FString                                     sClassPath;                                       		// 0x0000 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UClass*                                      pClass;                                           		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	TArray< struct FASValue >                          arrCtorArgs;                                      		// 0x0018 (0x0010) [0x0000000000400092]              ( CPF_Const | CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0028 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxObject.OnCreateGFxObject
// [0x00020400] ( FUNC_Native )
struct UTgGFxObject_execOnCreateGFxObject_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      pClass;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxObject.UnbindFunction
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxObject_execUnbindFunction_Parms
{
	struct FName                                       nmFuncName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxObject.BindFunction
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxObject_execBindFunction_Parms
{
	struct FName                                       nmFuncName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxObject.SetFunction
// [0x00020400] ( FUNC_Native )
struct UTgGFxObject_execSetFunction_Parms
{
	struct FString                                     sMember;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     pContext;                                         		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nmFuncName;                                       		// 0x0018 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxObject.RemoveChild
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxObject_execRemoveChild_Parms
{
	class UTgGFxObject*                                pChild;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxObject.SwapDepthsI
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxObject_execSwapDepthsI_Parms
{
	int                                                nTargetIndex;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxObject.SwapDepths
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxObject_execSwapDepths_Parms
{
	class UGFxObject*                                  pTarget;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxObject.GetDepth
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxObject_execGetDepth_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxObject.GetNextHighestDepth
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxObject_execGetNextHighestDepth_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxObject.DuplicateMovieClip
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgGFxObject_execDuplicateMovieClip_Parms
{
	struct FString                                     sName;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nDepth;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  pInitValues;                                      		// 0x0014 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UClass*                                      pClass;                                           		// 0x001C (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0024 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxObject.ContainsChild
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxObject_execContainsChild_Parms
{
	class UTgGFxObject*                                pChild;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxObject.GetGFxHitArea
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxObject_execGetGFxHitArea_Parms
{
	class UTgGFxObject*                                ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxObject.GetGFxParent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxObject_execGetGFxParent_Parms
{
	class UTgGFxObject*                                ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxObject.GetGFxStagePath
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxObject_execGetGFxStagePath_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxObject.GetGFxName
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxObject_execGetGFxName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxObject.GetVisible
// [0x00020400] ( FUNC_Native )
struct UTgGFxObject_execGetVisible_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxObject.GetAspectRatio
// [0x00020400] ( FUNC_Native )
struct UTgGFxObject_execGetAspectRatio_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxObject.GetDisabled
// [0x00020400] ( FUNC_Native )
struct UTgGFxObject_execGetDisabled_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxObject.SetDisabled
// [0x00020400] ( FUNC_Native )
struct UTgGFxObject_execSetDisabled_Parms
{
	unsigned long                                      bDisabled : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGFxObject.SetScaleY
// [0x00020400] ( FUNC_Native )
struct UTgGFxObject_execSetScaleY_Parms
{
	float                                              nValue;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxObject.SetScaleX
// [0x00020400] ( FUNC_Native )
struct UTgGFxObject_execSetScaleX_Parms
{
	float                                              nValue;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxObject.GetScaleY
// [0x00020400] ( FUNC_Native )
struct UTgGFxObject_execGetScaleY_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxObject.GetScaleX
// [0x00020400] ( FUNC_Native )
struct UTgGFxObject_execGetScaleX_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxObject.SetScale
// [0x00020400] ( FUNC_Native )
struct UTgGFxObject_execSetScale_Parms
{
	float                                              nX;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              nY;                                               		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxObject.GetScale
// [0x00420400] ( FUNC_Native )
struct UTgGFxObject_execGetScale_Parms
{
	float                                              out_nX;                                           		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_nY;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function TgClientBase.TgGFxObject.SetHeight
// [0x00020400] ( FUNC_Native )
struct UTgGFxObject_execSetHeight_Parms
{
	float                                              nValue;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxObject.SetWidth
// [0x00020400] ( FUNC_Native )
struct UTgGFxObject_execSetWidth_Parms
{
	float                                              nValue;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxObject.GetHeight
// [0x00020400] ( FUNC_Native )
struct UTgGFxObject_execGetHeight_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxObject.GetWidth
// [0x00020400] ( FUNC_Native )
struct UTgGFxObject_execGetWidth_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxObject.SetSize
// [0x00020400] ( FUNC_Native )
struct UTgGFxObject_execSetSize_Parms
{
	float                                              nWidth;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              nHeight;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxObject.GetSize
// [0x00420400] ( FUNC_Native )
struct UTgGFxObject_execGetSize_Parms
{
	float                                              out_nWidth;                                       		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_nHeight;                                      		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function TgClientBase.TgGFxButtonPrompt.SetVisible
// [0x00020400] ( FUNC_Native )
struct UTgGFxButtonPrompt_execSetVisible_Parms
{
	unsigned long                                      bValue : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGFxButtonPrompt.SetDefaultText
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxButtonPrompt_execSetDefaultText_Parms
{
	struct FString                                     sText;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxButtonPrompt.SetPromptText
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxButtonPrompt_execSetPromptText_Parms
{
	struct FString                                     sText;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxButtonPrompt.SetDisplayButton
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxButtonPrompt_execSetDisplayButton_Parms
{
	struct FName                                       nmXboxType;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxButtonPrompt.SetPrompt
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxButtonPrompt_execSetPrompt_Parms
{
	struct FName                                       nmXboxType;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sText;                                            		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxEventObject.GetArrInputIntercepts
// [0x00420400] ( FUNC_Native )
struct UTgGFxEventObject_execGetArrInputIntercepts_Parms
{
	struct FPointer                                    pArr;                                             		// 0x0000 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function TgClientBase.TgGFxEventObject.GetArrGameEventListeners
// [0x00420400] ( FUNC_Native )
struct UTgGFxEventObject_execGetArrGameEventListeners_Parms
{
	struct FPointer                                    pArr;                                             		// 0x0000 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function TgClientBase.TgGFxEventObject.GetArrMctsListeners
// [0x00420400] ( FUNC_Native )
struct UTgGFxEventObject_execGetArrMctsListeners_Parms
{
	struct FPointer                                    pArr;                                             		// 0x0000 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function TgClientBase.TgGFxEventObject.GetArrOldMctsListeners
// [0x00420400] ( FUNC_Native )
struct UTgGFxEventObject_execGetArrOldMctsListeners_Parms
{
	struct FPointer                                    pArr;                                             		// 0x0000 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function TgClientBase.TgGFxEventObject.IsInitialized
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxEventObject_execIsInitialized_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxEventObject.GetMovieDispatcher
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxEventObject_execGetMovieDispatcher_Parms
{
	class UTgEventDispatcher*                          ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxEventObject.OnCreateGFxObject
// [0x00020400] ( FUNC_Native )
struct UTgGFxEventObject_execOnCreateGFxObject_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      pClass;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxEventObject.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxEventObject_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxEventObject.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxEventObject_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgDataChunk.GetOuterTgMoviePlayer
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgDataChunk_execGetOuterTgMoviePlayer_Parms
{
	class UTgMoviePlayer*                              ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgDataChunk.usc_ResetAllFields
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgDataChunk_execusc_ResetAllFields_Parms
{
};

// Function TgClientBase.TgDataChunk.usc_Unsubscribe
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgDataChunk_execusc_Unsubscribe_Parms
{
};

// Function TgClientBase.TgDataChunk.usc_Subscribe
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgDataChunk_execusc_Subscribe_Parms
{
};

// Function TgClientBase.TgDataChunk.GetPlayerController
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgDataChunk_execGetPlayerController_Parms
{
	class ATgPlayerController*                         ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgDataChunk.NeedsUpdate
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgDataChunk_execNeedsUpdate_Parms
{
	unsigned char                                      fStep;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgDataChunk.IsSubscribed
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgDataChunk_execIsSubscribed_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgDataChunk.ForceNextUpdate
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgDataChunk_execForceNextUpdate_Parms
{
};

// Function TgClientBase.TgDataChunk.SetDirty
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgDataChunk_execSetDirty_Parms
{
};

// Function TgClientBase.TgDataChunk.GetFieldByHandle
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgDataChunk_execGetFieldByHandle_Parms
{
	struct FTgDataFieldHandle                          InHandle;                                         		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	struct FASValue                                    NewValue;                                         		// 0x0004 (0x0020) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgDataChunk.GetField
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgDataChunk_execGetField_Parms
{
	struct FPointer                                    FieldName;                                        		// 0x0000 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	struct FASValue                                    NewValue;                                         		// 0x0008 (0x0020) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgDataChunk.SetFieldByHandle
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgDataChunk_execSetFieldByHandle_Parms
{
	struct FTgDataFieldHandle                          InHandle;                                         		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	struct FASValue                                    NewValue;                                         		// 0x0004 (0x0020) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgDataChunk.SetField
// [0x00424401] ( FUNC_Final | FUNC_Native )
struct UTgDataChunk_execSetField_Parms
{
	struct FPointer                                    FieldName;                                        		// 0x0000 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	struct FASValue                                    NewValue;                                         		// 0x0008 (0x0020) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      bCreateIfMissing : 1;                             		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgDataChunk.AddField
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgDataChunk_execAddField_Parms
{
	struct FPointer                                    FieldName;                                        		// 0x0000 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	struct FASValue                                    NewValue;                                         		// 0x0008 (0x0020) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FTgDataFieldHandle                          ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgDataChunk.ResetAllFields
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgDataChunk_execResetAllFields_Parms
{
};

// Function TgClientBase.TgDataChunk.ClearDelegates
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgDataChunk_execClearDelegates_Parms
{
};

// Function TgClientBase.TgDataChunk.SetDelegates
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgDataChunk_execSetDelegates_Parms
{
};

// Function TgClientBase.TgDataChunk.RemoveChildChunk
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgDataChunk_execRemoveChildChunk_Parms
{
	class UTgDataChunk*                                Child;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bClearDelegates : 1;                              		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgDataChunk.AddChildChunk
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgDataChunk_execAddChildChunk_Parms
{
	class UTgDataChunk*                                Child;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgDataChunk.PostDataUpdatedEvent
// [0x00020400] ( FUNC_Native )
struct UTgDataChunk_execPostDataUpdatedEvent_Parms
{
};

// Function TgClientBase.TgDataChunk.DataUpdateEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgDataChunk_execDataUpdateEvent_Parms
{
};

// Function TgClientBase.TgDataChunk.Update
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgDataChunk_execUpdate_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSkipCallback : 1;                                		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgDataChunk.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgDataChunk_execNotifyMapChange_Parms
{
};

// Function TgClientBase.TgDataChunk.UpdateInternal
// [0x00020400] ( FUNC_Native )
struct UTgDataChunk_execUpdateInternal_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgDataChunk.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgDataChunk_execUninitialize_Parms
{
};

// Function TgClientBase.TgDataChunk.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgDataChunk_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxScene.GetLP
// [0x00020003] ( FUNC_Final )
struct UTgGfxScene_execGetLP_Parms
{
	class ULocalPlayer*                                ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGfxScene.ClearLoadSceneData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxScene_execClearLoadSceneData_Parms
{
	struct FString                                     sSceneName;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxScene.GetLoadSceneData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxScene_execGetLoadSceneData_Parms
{
	struct FString                                     sSceneName;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UTgDataItem*                                 ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGfxScene.SendGFxData
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGfxScene_eventSendGFxData_Parms
{
	class UGFxObject*                                  Data;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxScene.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxScene_execReceiveGFxData_Parms
{
	class UGFxObject*                                  Data;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxScene.GetIntervalManager
// [0x00020400] ( FUNC_Native )
struct UTgGfxScene_execGetIntervalManager_Parms
{
	class UTgIntervalManager*                          ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGfxScene.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxScene_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxScene.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxScene_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxAcquisitionPopup.HideAcquisition
// [0x00020802] ( FUNC_Event )
struct UTgGfxAcquisitionPopup_eventHideAcquisition_Parms
{
};

// Function TgClientBase.TgGfxAcquisitionPopup.DoShowAcquisition
// [0x00020802] ( FUNC_Event )
struct UTgGfxAcquisitionPopup_eventDoShowAcquisition_Parms
{
	class UGFxObject*                                  Data;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxAcquisitionPopup.EquipAll
// [0x00020400] ( FUNC_Native )
struct UTgGfxAcquisitionPopup_execEquipAll_Parms
{
};

// Function TgClientBase.TgGfxAcquisitionPopup.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxAcquisitionPopup_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxAcquisitionPopup.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxAcquisitionPopup_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxAcquisitionPopup.ClearAcquisitions
// [0x00020400] ( FUNC_Native )
struct UTgGfxAcquisitionPopup_execClearAcquisitions_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxAcquisitionPopup.ShowAcquisition
// [0x00020400] ( FUNC_Native )
struct UTgGfxAcquisitionPopup_execShowAcquisition_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxAcquisitionPopup.HideAcquisitionInternal
// [0x00020003] ( FUNC_Final )
struct UTgGfxAcquisitionPopup_execHideAcquisitionInternal_Parms
{
};

// Function TgClientBase.TgGfxAcquisitionPopup.ShowAcquisitionInternal
// [0x00020003] ( FUNC_Final )
struct UTgGfxAcquisitionPopup_execShowAcquisitionInternal_Parms
{
	class UGFxObject*                                  Data;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxAdventureProgressArena.OnAcquisition
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventureProgressArena_execOnAcquisition_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxAdventureProgressArena.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventureProgressArena_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxAdventureProgressArena.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventureProgressArena_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxAdventureProgressArena.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventureProgressArena_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxAdventureProgressCH09.OnAcquisition
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventureProgressCH09_execOnAcquisition_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxAdventureProgressCH09.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventureProgressCH09_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxAdventureProgressCH09.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventureProgressCH09_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxAdventureProgressCH09.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventureProgressCH09_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxAdventureProgressCH10.OnAcquisition
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventureProgressCH10_execOnAcquisition_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxAdventureProgressCH10.SetupChestPurchaseFox
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventureProgressCH10_execSetupChestPurchaseFox_Parms
{
};

// Function TgClientBase.TgGfxAdventureProgressCH10.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventureProgressCH10_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxAdventureProgressCH10.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventureProgressCH10_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxAdventureProgressCH10.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventureProgressCH10_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxAdventureProgressHel.OnAcquisition
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventureProgressHel_execOnAcquisition_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxAdventureProgressHel.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventureProgressHel_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxAdventureProgressHel.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventureProgressHel_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxAdventureProgressHel.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventureProgressHel_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxAdventureProgressHel.SetupChestPurchase
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventureProgressHel_execSetupChestPurchase_Parms
{
};

// Function TgClientBase.TgGfxAdventuresVault.OnAcquisition
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventuresVault_execOnAcquisition_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxAdventuresVault.PopulateVaultData
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventuresVault_execPopulateVaultData_Parms
{
};

// Function TgClientBase.TgGfxAdventuresVault.SetVaultOwnership
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventuresVault_execSetVaultOwnership_Parms
{
	int                                                vaultIdx;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxAdventuresVault.ExitVault
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventuresVault_execExitVault_Parms
{
	int                                                previousVault;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxAdventuresVault.EnterVault
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventuresVault_execEnterVault_Parms
{
	int                                                EventIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxAdventuresVault.SendLobbyCamEvent
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventuresVault_execSendLobbyCamEvent_Parms
{
	int                                                EventType;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                camType;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxAdventuresVault.ClickedVaultArea
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventuresVault_execClickedVaultArea_Parms
{
	int                                                EventType;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                indexLoc;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxAdventuresVault.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventuresVault_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxAdventuresVault.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventuresVault_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxAdventuresVault.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxAdventuresVault_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxBattlePass.GetBuyAllPurchaseModalArtLinkage
// [0x00480400] ( FUNC_Native )
struct UTgGfxBattlePass_execGetBuyAllPurchaseModalArtLinkage_Parms
{
	struct FString                                     sOutArtLinkage;                                   		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxBattlePass.GetRewardItemIds
// [0x00480400] ( FUNC_Native )
struct UTgGfxBattlePass_execGetRewardItemIds_Parms
{
	TArray< int >                                      outItemIds;                                       		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxBattlePass.GetAcquisitionSubtext
// [0x00480400] ( FUNC_Native )
struct UTgGfxBattlePass_execGetAcquisitionSubtext_Parms
{
	struct FUIQueuedAcquisition                        acqData;                                          		// 0x0000 (0x0080) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     sOutSubtext;                                      		// 0x0080 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxBattlePass.ReceiveEndTransition
// [0x00020400] ( FUNC_Native )
struct UTgGfxBattlePass_execReceiveEndTransition_Parms
{
	class UTgEventDataItem*                            pDataItem;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxBattlePass.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxBattlePass_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxBattlePass.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxBattlePass_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxBattlePass.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxBattlePass_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxBattlePassToast.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxBattlePassToast_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxBattlePassToast.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxBattlePassToast_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxBattlePassToast.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxBattlePassToast_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxBrowser.ToggleVisibility
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgGFxBrowser_execToggleVisibility_Parms
{
	unsigned long                                      bShow : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bShowNav : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgGFxBrowser.GetAbsoluteSize
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgGFxBrowser_execGetAbsoluteSize_Parms
{
	float                                              Width;                                            		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              Height;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function TgClientBase.TgGFxBrowser.GetAbsolutePosition
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgGFxBrowser_execGetAbsolutePosition_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function TgClientBase.TgGFxBrowser.OnPopupOpened
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxBrowser_execOnPopupOpened_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxBrowser.SetControls
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxBrowser_eventSetControls_Parms
{
	unsigned long                                      prevDisabled : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      nextDisabled : 1;                                 		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGFxBrowser.ToggleControls
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxBrowser_eventToggleControls_Parms
{
	unsigned long                                      showNav : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGFxBrowser.USC_OnNavigate
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxBrowser_execUSC_OnNavigate_Parms
{
	int                                                navId;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxBrowser.USC_OnResize
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxBrowser_execUSC_OnResize_Parms
{
};

// Function TgClientBase.TgGFxBrowser.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxBrowser_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxBrowser.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxBrowser_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxBundlesPurchase.OnAcquisition
// [0x00020400] ( FUNC_Native )
struct UTgGfxBundlesPurchase_execOnAcquisition_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxBundlesPurchase.PopulateBundleData
// [0x00020400] ( FUNC_Native )
struct UTgGfxBundlesPurchase_execPopulateBundleData_Parms
{
};

// Function TgClientBase.TgGfxBundlesPurchase.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxBundlesPurchase_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxBundlesPurchase.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxBundlesPurchase_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxBundlesPurchase.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxBundlesPurchase_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxBuyAllModalBase.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxBuyAllModalBase_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxBuyAllModalBase.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxBuyAllModalBase_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxBuyAllModalBase.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxBuyAllModalBase_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxChestCounterChoice.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxChestCounterChoice_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxChestCounterChoice.OnPurchaseModalClose
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxChestCounterChoice_execOnPurchaseModalClose_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxChestCounterChoice.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxChestCounterChoice_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxChestCounterChoice.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxChestCounterChoice_execInitialize_Parms
{
	class UTgMoviePlayer*                              pMoviePlayer;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxClanAdminBase.DoPlayerInfoUpdate
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxClanAdminBase_execDoPlayerInfoUpdate_Parms
{
};

// Function TgClientBase.TgGfxClanAdminBase.UpdateCallouts
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxClanAdminBase_execUpdateCallouts_Parms
{
};

// Function TgClientBase.TgGfxClanAdminBase.UpdateApplicationData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxClanAdminBase_execUpdateApplicationData_Parms
{
	unsigned long                                      bCanRequestNames : 1;                             		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGfxClanAdminBase.UpdatePlayerInvites
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxClanAdminBase_execUpdatePlayerInvites_Parms
{
	unsigned long                                      bCanRequestNames : 1;                             		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGfxClanAdminBase.UpdateClanData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxClanAdminBase_execUpdateClanData_Parms
{
};

// Function TgClientBase.TgGfxClanAdminBase.GetJoinTypeIndexById
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxClanAdminBase_execGetJoinTypeIndexById_Parms
{
	int                                                nRecruitmentType;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGfxClanAdminBase.GetRegionIndexById
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxClanAdminBase_execGetRegionIndexById_Parms
{
	int                                                nSiteId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGfxClanAdminBase.InitRegionData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxClanAdminBase_execInitRegionData_Parms
{
};

// Function TgClientBase.TgGfxClanAdminBase.InitClanApplicationTypes
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxClanAdminBase_execInitClanApplicationTypes_Parms
{
};

// Function TgClientBase.TgGfxClanAdminBase.ReceivedPlayerNames
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxClanAdminBase_execReceivedPlayerNames_Parms
{
	unsigned long                                      bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class UTgPlayerNameManager*                        pManager;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxClanAdminBase.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxClanAdminBase_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxClanAdminBase.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxClanAdminBase_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxClanAdminBase.ASUpdateApplicationData
// [0x00020802] ( FUNC_Event )
struct UTgGfxClanAdminBase_eventASUpdateApplicationData_Parms
{
};

// Function TgClientBase.TgGfxClanAdminBase.ASUpdatePlayerInvites
// [0x00020802] ( FUNC_Event )
struct UTgGfxClanAdminBase_eventASUpdatePlayerInvites_Parms
{
};

// Function TgClientBase.TgGfxClanAdminBase.ASUpdateClanData
// [0x00020802] ( FUNC_Event )
struct UTgGfxClanAdminBase_eventASUpdateClanData_Parms
{
};

// Function TgClientBase.TgGfxClanAdminBase.USC_UpdateMOTD
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxClanAdminBase_execUSC_UpdateMOTD_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxClanAdminBase.USC_CheckApplicationUpdate
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxClanAdminBase_execUSC_CheckApplicationUpdate_Parms
{
	int                                                nListLength;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxClanAdminBase.USC_CheckInviteUpdate
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxClanAdminBase_execUSC_CheckInviteUpdate_Parms
{
	int                                                nListLength;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxClanAdminBase.USC_UpdateClanInvites
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxClanAdminBase_execUSC_UpdateClanInvites_Parms
{
};

// Function TgClientBase.TgGfxClanAdminBase.USC_UpdateClanApplications
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxClanAdminBase_execUSC_UpdateClanApplications_Parms
{
};

// Function TgClientBase.TgGfxClanAdminBase.USC_BanClanApp
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxClanAdminBase_execUSC_BanClanApp_Parms
{
	struct FString                                     sPlayerId;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxClanAdminBase.USC_DeclineClanApp
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxClanAdminBase_execUSC_DeclineClanApp_Parms
{
	int                                                nAppId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxClanAdminBase.USC_AcceptClanApp
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxClanAdminBase_execUSC_AcceptClanApp_Parms
{
	int                                                nAppId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxClanAdminBase.USC_UpdateJoinTypeRegion
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxClanAdminBase_execUSC_UpdateJoinTypeRegion_Parms
{
	int                                                nJoinTypeId;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nRegionId;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxClanAdminBase.USC_UpdateClanNameAndTag
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxClanAdminBase_execUSC_UpdateClanNameAndTag_Parms
{
	struct FString                                     sName;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sTag;                                             		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxClanCreationBase.Reinit
// [0x00020802] ( FUNC_Event )
struct UTgGfxClanCreationBase_eventReinit_Parms
{
};

// Function TgClientBase.TgGfxClanCreationBase.ASC_Reinit
// [0x00020003] ( FUNC_Final )
struct UTgGfxClanCreationBase_execASC_Reinit_Parms
{
};

// Function TgClientBase.TgGfxClanCreationBase.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxClanCreationBase_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxClanCreationBase.USC_GotoClanList
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxClanCreationBase_execUSC_GotoClanList_Parms
{
};

// Function TgClientBase.TgGfxClanCreationBase.USC_GetRegionListData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxClanCreationBase_execUSC_GetRegionListData_Parms
{
};

// Function TgClientBase.TgGfxClanCreationBase.USC_CancelClanRequest
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxClanCreationBase_execUSC_CancelClanRequest_Parms
{
	int                                                nClanId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxClanCreationBase.USC_AcceptClanRequest
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxClanCreationBase_execUSC_AcceptClanRequest_Parms
{
	int                                                nClanId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxClanCreationBase.USC_GetInvitesData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxClanCreationBase_execUSC_GetInvitesData_Parms
{
};

// Function TgClientBase.TgGfxClanCreationBase.USC_CreateClan
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxClanCreationBase_execUSC_CreateClan_Parms
{
	struct FString                                     sClanName;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sClanTag;                                         		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nRegionId;                                        		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nRecruitmentType;                                 		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxClanManagementBase.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxClanManagementBase_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxClanManagementBase.OnInviteToClanSelect
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxClanManagementBase_execOnInviteToClanSelect_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxClanManagementBase.OnInviteToClanQuery
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxClanManagementBase_execOnInviteToClanQuery_Parms
{
	struct FPointer                                    pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxClanManagementBase.USC_ModifyLeader
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxClanManagementBase_execUSC_ModifyLeader_Parms
{
	struct FString                                     sPlayerId;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxClanManagementBase.USC_ViewProfile
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxClanManagementBase_execUSC_ViewProfile_Parms
{
	struct FString                                     sPlayerId;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxClanManagementBase.USC_InviteToClanByName
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxClanManagementBase_execUSC_InviteToClanByName_Parms
{
	struct FString                                     sName;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxClanManagementBase.USC_UpdateClanTag
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxClanManagementBase_execUSC_UpdateClanTag_Parms
{
};

// Function TgClientBase.TgGfxClanManagementBase.USC_QuitClan
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxClanManagementBase_execUSC_QuitClan_Parms
{
};

// Function TgClientBase.TgGfxClanManagementBase.USC_CancelPlayerInvite
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxClanManagementBase_execUSC_CancelPlayerInvite_Parms
{
	struct FString                                     sPlayerId;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxCommendationPage.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxCommendationPage_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxCommendationPage.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxCommendationPage_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxCommendationPage.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxCommendationPage_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxControllerDisconnect.Unload
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxControllerDisconnect_eventUnload_Parms
{
};

// Function TgClientBase.TgGFxControllerDisconnect.USC_CloseDialog
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxControllerDisconnect_execUSC_CloseDialog_Parms
{
};

// Function TgClientBase.TgGFxControllerDisconnect.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxControllerDisconnect_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxControllerDisconnect.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxControllerDisconnect_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxDailyDealPopup.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGFxDailyDealPopup_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxDailyDealPopup.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxDailyDealPopup_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxDailyReward.UpdateDataToAS
// [0x00020400] ( FUNC_Native )
struct UTgGfxDailyReward_execUpdateDataToAS_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxDailyReward.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxDailyReward_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxDailyReward.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxDailyReward_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxDailyReward.UpdateDailyData
// [0x00020802] ( FUNC_Event )
struct UTgGfxDailyReward_eventUpdateDailyData_Parms
{
};

// Function TgClientBase.TgGfxDebugActivity.USC_SearchActivity
// [0x00020400] ( FUNC_Native )
struct UTgGfxDebugActivity_execUSC_SearchActivity_Parms
{
	int                                                searchId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      isActivity : 1;                                   		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGfxDebugActivity.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxDebugActivity_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxDebugActivity.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxDebugActivity_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxEventBundleList.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventBundleList_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxEventBundleList.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventBundleList_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxEventBundleList.USC_UpdateBundles
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventBundleList_execUSC_UpdateBundles_Parms
{
	class UGFxObject*                                  Data;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxEventDialog.usc_PlaySound
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventDialog_execusc_PlaySound_Parms
{
	int                                                msgId;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxEventDialog.LoadJSON
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventDialog_execLoadJSON_Parms
{
};

// Function TgClientBase.TgGfxEventDialog.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventDialog_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxEventSceneBase.GetBuyAllPurchaseModalArtLinkage
// [0x00480400] ( FUNC_Native )
struct UTgGfxEventSceneBase_execGetBuyAllPurchaseModalArtLinkage_Parms
{
	struct FString                                     sOutArtLinkage;                                   		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxEventSceneBase.GetRewardItemIds
// [0x00480400] ( FUNC_Native )
struct UTgGfxEventSceneBase_execGetRewardItemIds_Parms
{
	TArray< int >                                      outItemIds;                                       		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxEventSceneBase.GetEventAcquisitionSubtext
// [0x00480400] ( FUNC_Native )
struct UTgGfxEventSceneBase_execGetEventAcquisitionSubtext_Parms
{
	struct FUIQueuedAcquisition                        acqData;                                          		// 0x0000 (0x0080) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     OutSubtext;                                       		// 0x0080 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxEventSceneBase.GetAcquisitionSubtext
// [0x00480400] ( FUNC_Native )
struct UTgGfxEventSceneBase_execGetAcquisitionSubtext_Parms
{
	struct FUIQueuedAcquisition                        acqData;                                          		// 0x0000 (0x0080) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     OutSubtext;                                       		// 0x0080 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxEventSceneBase.OnSceneOpened
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventSceneBase_execOnSceneOpened_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxEventSceneBase.OnRedirect
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventSceneBase_execOnRedirect_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxEventSceneBase.OnAcquisition
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventSceneBase_execOnAcquisition_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxEventSceneBase.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventSceneBase_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxEventSceneBase.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventSceneBase_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxEventSceneBase.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventSceneBase_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxCommunityEventBase.UpdateRewardItems
// [0x00020802] ( FUNC_Event )
struct UTgGfxCommunityEventBase_eventUpdateRewardItems_Parms
{
};

// Function TgClientBase.TgGfxCommunityEventBase.UpdateEventBars
// [0x00020802] ( FUNC_Event )
struct UTgGfxCommunityEventBase_eventUpdateEventBars_Parms
{
};

// Function TgClientBase.TgGfxCommunityEventBase.USC_ClaimNextReward
// [0x00020400] ( FUNC_Native )
struct UTgGfxCommunityEventBase_execUSC_ClaimNextReward_Parms
{
	int                                                itemGoalId;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxCommunityEventBase.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxCommunityEventBase_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxCommunityEventBase.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxCommunityEventBase_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxCommunityEventBase.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxCommunityEventBase_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxDivineUprisingEventBase.UpdateTabs
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGfxDivineUprisingEventBase_eventUpdateTabs_Parms
{
	int                                                unseenQuests;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                gotoTab;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxDivineUprisingEventBase.GetRewardItemIds
// [0x00480400] ( FUNC_Native )
struct UTgGfxDivineUprisingEventBase_execGetRewardItemIds_Parms
{
	TArray< int >                                      outItemIds;                                       		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxDivineUprisingEventBase.USC_UpdateSeenLore
// [0x00020400] ( FUNC_Native )
struct UTgGfxDivineUprisingEventBase_execUSC_UpdateSeenLore_Parms
{
	int                                                chapterNum;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxDivineUprisingEventBase.USC_UpdateQuestNotification
// [0x00020400] ( FUNC_Native )
struct UTgGfxDivineUprisingEventBase_execUSC_UpdateQuestNotification_Parms
{
};

// Function TgClientBase.TgGfxDivineUprisingEventBase.OnAcquisition
// [0x00020400] ( FUNC_Native )
struct UTgGfxDivineUprisingEventBase_execOnAcquisition_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxDivineUprisingEventBase.GetActiveChapters
// [0x00020400] ( FUNC_Native )
struct UTgGfxDivineUprisingEventBase_execGetActiveChapters_Parms
{
};

// Function TgClientBase.TgGfxDivineUprisingEventBase.PopulateQuestData
// [0x00020400] ( FUNC_Native )
struct UTgGfxDivineUprisingEventBase_execPopulateQuestData_Parms
{
};

// Function TgClientBase.TgGfxDivineUprisingEventBase.PopulateRewardSkinProgress
// [0x00020400] ( FUNC_Native )
struct UTgGfxDivineUprisingEventBase_execPopulateRewardSkinProgress_Parms
{
};

// Function TgClientBase.TgGfxDivineUprisingEventBase.PopulateRewardSkinData
// [0x00020400] ( FUNC_Native )
struct UTgGfxDivineUprisingEventBase_execPopulateRewardSkinData_Parms
{
};

// Function TgClientBase.TgGfxDivineUprisingEventBase.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxDivineUprisingEventBase_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxDivineUprisingEventBase.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxDivineUprisingEventBase_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxDivineUprisingEventBase.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxDivineUprisingEventBase_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxEventBundleCollection.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventBundleCollection_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxEventBundleCollection.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventBundleCollection_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxEventBundleCollection.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventBundleCollection_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxEventTreasureRoll.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventTreasureRoll_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxEventTreasureRoll.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventTreasureRoll_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxEventTreasureRoll.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventTreasureRoll_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxGiftingEventBase.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxGiftingEventBase_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxGiftingEventBase.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxGiftingEventBase_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxGiftingEventBase.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxGiftingEventBase_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxMorganEvent.GetRewardItemIds
// [0x00480400] ( FUNC_Native )
struct UTgGfxMorganEvent_execGetRewardItemIds_Parms
{
	TArray< int >                                      outItemIds;                                       		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxMorganEvent.GetEventAcquisitionSubtext
// [0x00480400] ( FUNC_Native )
struct UTgGfxMorganEvent_execGetEventAcquisitionSubtext_Parms
{
	struct FUIQueuedAcquisition                        acqData;                                          		// 0x0000 (0x0080) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     OutSubtext;                                       		// 0x0080 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxMorganEvent.OnAcquisition
// [0x00020400] ( FUNC_Native )
struct UTgGfxMorganEvent_execOnAcquisition_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxMorganEvent.usc_UpdateData
// [0x00020400] ( FUNC_Native )
struct UTgGfxMorganEvent_execusc_UpdateData_Parms
{
};

// Function TgClientBase.TgGfxMorganEvent.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxMorganEvent_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxMorganEvent.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxMorganEvent_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxNewMoonEvent.GetRewardItemIds
// [0x00480400] ( FUNC_Native )
struct UTgGfxNewMoonEvent_execGetRewardItemIds_Parms
{
	TArray< int >                                      outItemIds;                                       		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxNewMoonEvent.GetEventAcquisitionSubtext
// [0x00480400] ( FUNC_Native )
struct UTgGfxNewMoonEvent_execGetEventAcquisitionSubtext_Parms
{
	struct FUIQueuedAcquisition                        acqData;                                          		// 0x0000 (0x0080) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     OutSubtext;                                       		// 0x0080 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxNewMoonEvent.UpdateTabs
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGfxNewMoonEvent_eventUpdateTabs_Parms
{
	int                                                unseenQuests;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                gotoTab;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxNewMoonEvent.USC_UpdateQuestNotification
// [0x00020400] ( FUNC_Native )
struct UTgGfxNewMoonEvent_execUSC_UpdateQuestNotification_Parms
{
};

// Function TgClientBase.TgGfxNewMoonEvent.onFinishModelLoad
// [0x00020400] ( FUNC_Native )
struct UTgGfxNewMoonEvent_execonFinishModelLoad_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxNewMoonEvent.GetActiveChapters
// [0x00020400] ( FUNC_Native )
struct UTgGfxNewMoonEvent_execGetActiveChapters_Parms
{
};

// Function TgClientBase.TgGfxNewMoonEvent.PopulateQuestData
// [0x00020400] ( FUNC_Native )
struct UTgGfxNewMoonEvent_execPopulateQuestData_Parms
{
};

// Function TgClientBase.TgGfxNewMoonEvent.PopulateRewardSkinProgress
// [0x00020400] ( FUNC_Native )
struct UTgGfxNewMoonEvent_execPopulateRewardSkinProgress_Parms
{
};

// Function TgClientBase.TgGfxNewMoonEvent.PopulateRewardSkinData
// [0x00020400] ( FUNC_Native )
struct UTgGfxNewMoonEvent_execPopulateRewardSkinData_Parms
{
};

// Function TgClientBase.TgGfxNewMoonEvent.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxNewMoonEvent_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxNewMoonEvent.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxNewMoonEvent_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxNewMoonEvent.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxNewMoonEvent_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxOdysseyEventBase.GetRewardItemIds
// [0x00480400] ( FUNC_Native )
struct UTgGfxOdysseyEventBase_execGetRewardItemIds_Parms
{
	TArray< int >                                      outItemIds;                                       		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxOdysseyEventBase.USC_SetDialogAsWatched
// [0x00020400] ( FUNC_Native )
struct UTgGfxOdysseyEventBase_execUSC_SetDialogAsWatched_Parms
{
	int                                                dialogIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxOdysseyEventBase.USC_UpdateMorePointsPanel
// [0x00020400] ( FUNC_Native )
struct UTgGfxOdysseyEventBase_execUSC_UpdateMorePointsPanel_Parms
{
};

// Function TgClientBase.TgGfxOdysseyEventBase.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxOdysseyEventBase_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxOdysseyEventBase.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxOdysseyEventBase_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxOdysseyEventBase.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxOdysseyEventBase_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxSeasonalEventCalendar.GetEventAcquisitionSubtext
// [0x00480400] ( FUNC_Native )
struct UTgGfxSeasonalEventCalendar_execGetEventAcquisitionSubtext_Parms
{
	struct FUIQueuedAcquisition                        acqData;                                          		// 0x0000 (0x0080) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     OutSubtext;                                       		// 0x0080 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxSeasonalEventCalendar.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxSeasonalEventCalendar_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxSeasonalEventCalendar.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxSeasonalEventCalendar_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxSeasonalEventCalendar.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxSeasonalEventCalendar_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxEventSceneBase2.GetBuyAllPurchaseModalArtLinkage
// [0x00480400] ( FUNC_Native )
struct UTgGfxEventSceneBase2_execGetBuyAllPurchaseModalArtLinkage_Parms
{
	struct FString                                     sOutArtLinkage;                                   		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxEventSceneBase2.GetRewardItemIds
// [0x00480400] ( FUNC_Native )
struct UTgGfxEventSceneBase2_execGetRewardItemIds_Parms
{
	TArray< int >                                      outItemIds;                                       		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxEventSceneBase2.GetEventAcquisitionSubtext
// [0x00480400] ( FUNC_Native )
struct UTgGfxEventSceneBase2_execGetEventAcquisitionSubtext_Parms
{
	struct FUIQueuedAcquisition                        acqData;                                          		// 0x0000 (0x0080) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     OutSubtext;                                       		// 0x0080 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxEventSceneBase2.GetAcquisitionSubtext
// [0x00480400] ( FUNC_Native )
struct UTgGfxEventSceneBase2_execGetAcquisitionSubtext_Parms
{
	struct FUIQueuedAcquisition                        acqData;                                          		// 0x0000 (0x0080) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     OutSubtext;                                       		// 0x0080 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxEventSceneBase2.OnSceneOpened
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventSceneBase2_execOnSceneOpened_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxEventSceneBase2.OnRedirect
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventSceneBase2_execOnRedirect_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxEventSceneBase2.OnAcquisition
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventSceneBase2_execOnAcquisition_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxEventSceneBase2.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventSceneBase2_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxEventSceneBase2.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventSceneBase2_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxEventSceneBase2.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventSceneBase2_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxReapingEvent.OnAcquisition
// [0x00020400] ( FUNC_Native )
struct UTgGfxReapingEvent_execOnAcquisition_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxReapingEvent.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxReapingEvent_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxEventTreasureRollList.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventTreasureRollList_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxEventTreasureRollList.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventTreasureRollList_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxEventTreasureRollList.USC_UpdateTreasureRollContent
// [0x00020400] ( FUNC_Native )
struct UTgGfxEventTreasureRollList_execUSC_UpdateTreasureRollContent_Parms
{
	class UGFxObject*                                  Data;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxFriendSelector.OnSearchEmpty
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxFriendSelector_execOnSearchEmpty_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxFriendSelector.OnServerSearchResults
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxFriendSelector_execOnServerSearchResults_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxFriendSelector.OnLocalSearchResults
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxFriendSelector_execOnLocalSearchResults_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxFriendSelector.OnStartSearch
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxFriendSelector_execOnStartSearch_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxFriendSelector.USC_SearchFriends
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxFriendSelector_execUSC_SearchFriends_Parms
{
	struct FString                                     PlayerName;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGfxFriendSelector.USC_SelectFriend
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxFriendSelector_execUSC_SelectFriend_Parms
{
	class UTgGFxPlayerData*                            pPlayer;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxFriendSelector.OnReceiveSearchQuery
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxFriendSelector_execOnReceiveSearchQuery_Parms
{
	struct FPointer                                    pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxFriendSelector.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxFriendSelector_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxFriendSelector.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxFriendSelector_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxFullscreenBackground.SetBackgroundImageAS
// [0x00020802] ( FUNC_Event )
struct UTgGFxFullscreenBackground_eventSetBackgroundImageAS_Parms
{
	struct FString                                     sImage;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxFullscreenBackground.SetBackgroundImageInternal
// [0x00020400] ( FUNC_Native )
struct UTgGFxFullscreenBackground_execSetBackgroundImageInternal_Parms
{
	struct FString                                     sImage;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxFullscreenBackground.ClearBackgroundImage
// [0x00020400] ( FUNC_Native )
struct UTgGFxFullscreenBackground_execClearBackgroundImage_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxFullscreenBackground.SetBackgroundImage
// [0x00020400] ( FUNC_Native )
struct UTgGFxFullscreenBackground_execSetBackgroundImage_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxFullscreenBackground.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxFullscreenBackground_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxFullscreenBackground.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxFullscreenBackground_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxGammaControls.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxGammaControls_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxGammaControls.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxGammaControls_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxGammaControls.DrawGammaLogo
// [0x00020400] ( FUNC_Native )
struct UTgGfxGammaControls_execDrawGammaLogo_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxGiftingBase.SetReceiverData
// [0x00020802] ( FUNC_Event )
struct UTgGfxGiftingBase_eventSetReceiverData_Parms
{
	struct FString                                     sPlayerName;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sPlayerId;                                        		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxGiftingBase.SetMessageData
// [0x00020802] ( FUNC_Event )
struct UTgGfxGiftingBase_eventSetMessageData_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nMessageId;                                       		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxGiftingBase.ForceSingleReceiverPopup
// [0x00020802] ( FUNC_Event )
struct UTgGfxGiftingBase_eventForceSingleReceiverPopup_Parms
{
	struct FString                                     sName;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     nPlayerId;                                        		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxGiftingBase.USC_PurchaseGift
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGfxGiftingBase_execUSC_PurchaseGift_Parms
{
	int                                                giftItemId;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sPlayerId;                                        		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nMsgIndex;                                        		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bAnon : 1;                                        		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGfxGiftingBase.GetSingleReceiverProfile
// [0x00020400] ( FUNC_Native )
struct UTgGfxGiftingBase_execGetSingleReceiverProfile_Parms
{
	unsigned long                                      bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class UTgPlayerNameManager*                        pManager;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxGiftingBase.SetSingleReceiver
// [0x00020400] ( FUNC_Native )
struct UTgGfxGiftingBase_execSetSingleReceiver_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxGiftingBase.OnReceiveFriends
// [0x00020400] ( FUNC_Native )
struct UTgGfxGiftingBase_execOnReceiveFriends_Parms
{
	class UTgGFxFriendData*                            pFriends;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxGiftingBase.PopulateMessageSelector
// [0x00020400] ( FUNC_Native )
struct UTgGfxGiftingBase_execPopulateMessageSelector_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxGiftingBase.MessageSelected
// [0x00020400] ( FUNC_Native )
struct UTgGfxGiftingBase_execMessageSelected_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxGiftingBase.FriendSelected
// [0x00020400] ( FUNC_Native )
struct UTgGfxGiftingBase_execFriendSelected_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxGiftingBase.ForceSingleReceiver
// [0x00424400] ( FUNC_Native )
struct UTgGfxGiftingBase_execForceSingleReceiver_Parms
{
	struct FTgPlayerId                                 pid;                                              		// 0x0000 (0x0024) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     overrideName;                                     		// 0x0024 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxGiftingBase.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxGiftingBase_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxGiftingBase.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxGiftingBase_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxGiftingBase.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxGiftingBase_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxGiftNotification.OnReceiveNotification
// [0x00020400] ( FUNC_Native )
struct UTgGfxGiftNotification_execOnReceiveNotification_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxGiftNotification.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxGiftNotification_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxGiftNotification.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxGiftNotification_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxGiftNotification.GiftNotification
// [0x00020802] ( FUNC_Event )
struct UTgGfxGiftNotification_eventGiftNotification_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nFrameId;                                         		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxGiftNotification.ASC_GiftNotification
// [0x00020003] ( FUNC_Final )
struct UTgGfxGiftNotification_execASC_GiftNotification_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nFrameId;                                         		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxGiftSentPopup.OnReceivePlayerName
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxGiftSentPopup_execOnReceivePlayerName_Parms
{
	unsigned long                                      bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class UTgPlayerNameManager*                        pManager;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxGiftSentPopup.IncrementActivities
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxGiftSentPopup_execIncrementActivities_Parms
{
};

// Function TgClientBase.TgGfxGiftSentPopup.SetGiftPopupData
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgGfxGiftSentPopup_execSetGiftPopupData_Parms
{
	struct FTgPlayerId                                 pid;                                              		// 0x0000 (0x0024) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct Fdword                                      nItemId;                                          		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxGiftSentPopup.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxGiftSentPopup_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxGiftSentPopup.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxGiftSentPopup_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxGiftSentPopup.GiftSentPopup
// [0x00020802] ( FUNC_Event )
struct UTgGfxGiftSentPopup_eventGiftSentPopup_Parms
{
	class UGFxObject*                                  Data;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxGiftSentPopup.ASC_GiftSentPopup
// [0x00020003] ( FUNC_Final )
struct UTgGfxGiftSentPopup_execASC_GiftSentPopup_Parms
{
	class UGFxObject*                                  Data;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxGodTargeter.Tick
// [0x00020400] ( FUNC_Native )
struct UTgGfxGodTargeter_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxGodTargeter.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxGodTargeter_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxGodTargeter.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxGodTargeter_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxGodTargeter.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxGodTargeter_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxGodTargeter.AttemptGodSelect
// [0x00020802] ( FUNC_Event )
struct UTgGfxGodTargeter_eventAttemptGodSelect_Parms
{
};

// Function TgClientBase.TgGfxGodTargeter.ASC_AttemptGodSelect
// [0x00020003] ( FUNC_Final )
struct UTgGfxGodTargeter_execASC_AttemptGodSelect_Parms
{
};

// Function TgClientBase.TgGfxGodTargeter.UpdateThumbstickPos
// [0x00020802] ( FUNC_Event )
struct UTgGfxGodTargeter_eventUpdateThumbstickPos_Parms
{
};

// Function TgClientBase.TgGfxGodTargeter.ASC_UpdateThumbstickPos
// [0x00020003] ( FUNC_Final )
struct UTgGfxGodTargeter_execASC_UpdateThumbstickPos_Parms
{
};

// Function TgClientBase.TgGfxHelloWorld.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxHelloWorld_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxHUD.PlayTakeHit
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxHUD_eventPlayTakeHit_Parms
{
	int                                                nDamage;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              nDamageAngle;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxHUD.SetPlayerSpeaking
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxHUD_eventSetPlayerSpeaking_Parms
{
	struct FString                                     sPlayerNetId;                                     		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bIsSpeaking : 1;                                  		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGFxHUD.ToggleScoreboard
// [0x00024803] ( FUNC_Final | FUNC_Event )
struct UTgGFxHUD_eventToggleScoreboard_Parms
{
	unsigned long                                      bShow : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bFocused : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                View;                                             		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgGFxHUD.ChangeHudSection
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxHUD_eventChangeHudSection_Parms
{
	struct FString                                     Section;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              percentX;                                         		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              percentY;                                         		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Scale;                                            		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              dockX;                                            		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              dockY;                                            		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     dockObj;                                          		// 0x0024 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              dockObjX;                                         		// 0x0034 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              dockObjY;                                         		// 0x0038 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      outX : 1;                                         		// 0x003C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      outY : 1;                                         		// 0x0040 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGFxHUD.ToggleHudSection
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxHUD_eventToggleHudSection_Parms
{
	struct FString                                     sSectionName;                                     		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxHUD.UnloadHudSection
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxHUD_eventUnloadHudSection_Parms
{
	struct FString                                     sSectionName;                                     		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxHUD.ToggleMatineeSkip
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxHUD_eventToggleMatineeSkip_Parms
{
	unsigned long                                      bShow : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGFxHUD.ShowTutorialHighlighter
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxHUD_eventShowTutorialHighlighter_Parms
{
	int                                                nTutorialEvent;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxHUD.ShowEventAccolade
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxHUD_eventShowEventAccolade_Parms
{
	int                                                nIconId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxHUD.ShowConsoleStorePrompt
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxHUD_eventShowConsoleStorePrompt_Parms
{
	unsigned long                                      bShow : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGFxHUD.SetHudVisible
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxHUD_eventSetHudVisible_Parms
{
	unsigned long                                      bVisible : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGFxHUD.ShowEndOfMatch
// [0x00024803] ( FUNC_Final | FUNC_Event )
struct UTgGFxHUD_eventShowEndOfMatch_Parms
{
	unsigned long                                      show : 1;                                         		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgGFxHUD.GameTypeSet
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxHUD_eventGameTypeSet_Parms
{
	int                                                GameType;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      isConsole : 1;                                    		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGFxHUD.TogglePassiveMeter
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxHUD_eventTogglePassiveMeter_Parms
{
};

// Function TgClientBase.TgGFxHUD.SetEndOfMatchVisibility
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxHUD_eventSetEndOfMatchVisibility_Parms
{
};

// Function TgClientBase.TgGFxHUD.OnTutorialMessage
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxHUD_execOnTutorialMessage_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxHUD.OnShowEndOfMatch
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxHUD_execOnShowEndOfMatch_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxHUD.OnGameTypeSet
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxHUD_execOnGameTypeSet_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxHUD.OnGameHUDEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxHUD_execOnGameHUDEvent_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxHUD.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxHUD_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxHUD.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxHUD_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxLoadoutsBase.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxLoadoutsBase_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxLoadoutsBase.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxLoadoutsBase_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxLoadoutsBase.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxLoadoutsBase_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxLoginBlocker.LandingPanelImagesLoaded
// [0x00020400] ( FUNC_Native )
struct UTgGfxLoginBlocker_execLandingPanelImagesLoaded_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxLoginBlocker.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxLoginBlocker_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxLoginBlocker.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxLoginBlocker_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxLoginBlocker.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxLoginBlocker_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxMassInviteBase.OnReceiveFriends
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxMassInviteBase_execOnReceiveFriends_Parms
{
	class UTgGFxFriendData*                            pFriends;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxMassInviteBase.OnPrivilegeCheck
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxMassInviteBase_execOnPrivilegeCheck_Parms
{
	unsigned char                                      ePriv;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eLevel;                                           		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxMassInviteBase.OnFriendSelector
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxMassInviteBase_execOnFriendSelector_Parms
{
	class UTgEventDataItem*                            pBaseEvent;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxMassInviteBase.OnPlayerQuery
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxMassInviteBase_execOnPlayerQuery_Parms
{
	struct FPointer                                    pBaseEvent;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxMassInviteBase.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxMassInviteBase_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxMassInviteBase.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxMassInviteBase_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchInvitation.CheckOnlinePermissions
// [0x00020802] ( FUNC_Event )
struct UTgGFxMatchInvitation_eventCheckOnlinePermissions_Parms
{
	struct FUniqueNetId                                nId;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// TArray< struct FUniqueNetId >                   arrIds;                                           		// 0x000C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxMatchInvitation.UCUninitialize
// [0x00020802] ( FUNC_Event )
struct UTgGFxMatchInvitation_eventUCUninitialize_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxMatchInvitation.UCInitialize
// [0x00020802] ( FUNC_Event )
struct UTgGFxMatchInvitation_eventUCInitialize_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxMatchInvitation.GetPlayerInterface
// [0x00020003] ( FUNC_Final )
struct UTgGFxMatchInvitation_execGetPlayerInterface_Parms
{
	class UOnlinePlayerInterface*                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxMatchInvitation.OnInputChanged
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchInvitation_execOnInputChanged_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchInvitation.OnLobbyStateChange
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchInvitation_execOnLobbyStateChange_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchInvitation.OnQueueStateChange
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchInvitation_execOnQueueStateChange_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchInvitation.OnReceivePlayerInfo
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchInvitation_execOnReceivePlayerInfo_Parms
{
	struct FPointer                                    pEventBase;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchInvitation.OnReceivePlatformPermissions
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchInvitation_execOnReceivePlatformPermissions_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Privilege;                                        		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPermissionsResultByUniqueNetId >   Results;                                          		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxMatchInvitation.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGFxMatchInvitation_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchInvitation.Tick
// [0x00020400] ( FUNC_Native )
struct UTgGFxMatchInvitation_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchInvitation.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxMatchInvitation_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxMatchInvitation.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxMatchInvitation_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxMessageSelector.USC_SelectMessage
// [0x00020400] ( FUNC_Native )
struct UTgGfxMessageSelector_execUSC_SelectMessage_Parms
{
	struct FString                                     Message;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                MessageId;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxMessageSelector.PopulateMessages
// [0x00020400] ( FUNC_Native )
struct UTgGfxMessageSelector_execPopulateMessages_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxMessageSelector.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxMessageSelector_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxMessageSelector.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxMessageSelector_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxNotificationCenter.USC_GetTabs
// [0x00020400] ( FUNC_Native )
struct UTgGfxNotificationCenter_execUSC_GetTabs_Parms
{
	class UGFxObject*                                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGfxNotificationCenter.USC_ClearAllNotifications
// [0x00020400] ( FUNC_Native )
struct UTgGfxNotificationCenter_execUSC_ClearAllNotifications_Parms
{
	int                                                tabIndex;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxNotificationCenter.USC_RespondToClanInvite
// [0x00020400] ( FUNC_Native )
struct UTgGfxNotificationCenter_execUSC_RespondToClanInvite_Parms
{
	unsigned long                                      bAccept : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     clanId;                                           		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxNotificationCenter.USC_RespondToPartyInvite
// [0x00020400] ( FUNC_Native )
struct UTgGfxNotificationCenter_execUSC_RespondToPartyInvite_Parms
{
	unsigned long                                      bAccept : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGfxNotificationCenter.USC_RespondToFriendInvite
// [0x00020400] ( FUNC_Native )
struct UTgGfxNotificationCenter_execUSC_RespondToFriendInvite_Parms
{
	unsigned long                                      bAccept : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     PlayerID;                                         		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxNotificationCenter.USC_EquipItem
// [0x00020400] ( FUNC_Native )
struct UTgGfxNotificationCenter_execUSC_EquipItem_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxNotificationCenter.USC_SelectTab
// [0x00020400] ( FUNC_Native )
struct UTgGfxNotificationCenter_execUSC_SelectTab_Parms
{
	int                                                tabIndex;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxNotificationCenter.UpdateNotifications
// [0x00020400] ( FUNC_Native )
struct UTgGfxNotificationCenter_execUpdateNotifications_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxNotificationCenter.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxNotificationCenter_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxPatchOverview.LandingPanelImagesLoaded
// [0x00020400] ( FUNC_Native )
struct UTgGfxPatchOverview_execLandingPanelImagesLoaded_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxPatchOverview.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxPatchOverview_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxPatchOverview.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxPatchOverview_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxPatchOverview.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxPatchOverview_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlay.usc_JoinMultiqueue
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlay_execusc_JoinMultiqueue_Parms
{
	TArray< int >                                      queueIDs;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxPlay.OnQueueStateChange
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlay_execOnQueueStateChange_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlay.OnPopup
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlay_execOnPopup_Parms
{
	class UTgPagePopup*                                pData;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FPopupResponse                              Response;                                         		// 0x0008 (0x0018) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxPlay.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGFxPlay_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlay.Tick
// [0x00020400] ( FUNC_Native )
struct UTgGFxPlay_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlay.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxPlay_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxPlay.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxPlay_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlayCustom.OnCreateCustomGame
// [0x00020400] ( FUNC_Native )
struct UTgGFxPlayCustom_execOnCreateCustomGame_Parms
{
	struct FString                                     SessionGuid;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxPlayCustom.OnPeoplePickerComplete
// [0x00020002] 
struct UTgGFxPlayCustom_execOnPeoplePickerComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	TArray< struct FOnlineFriend >                     PeoplePicked;                                     		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// TArray< struct FUniqueNetId >                   IdsToInvite;                                      		// 0x0018 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxPlayCustom.OnReadFriendsListComplete
// [0x00020002] 
struct UTgGFxPlayCustom_execOnReadFriendsListComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// TArray< struct FOnlineFriend >                  FriendsList;                                      		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  PeoplePickerText;                                 		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FSessionMemberInfo >             SessionMemberList;                                		// 0x0024 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             MaxInviteSlots;                                   		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function TgClientBase.TgGFxPlayCustom.ShowPeoplePickerForCustomGameInvite
// [0x00020802] ( FUNC_Event )
struct UTgGFxPlayCustom_eventShowPeoplePickerForCustomGameInvite_Parms
{
	// TArray< struct FOnlineFriend >                  FriendsList;                                      		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FSessionMemberInfo >             SessionMemberList;                                		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             MaxInviteSlots;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bCreatedCustomGameInvite : 1;                     		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	// TArray< unsigned char >                         InviteData;                                       		// 0x0028 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxPlayCustom.CreateDataForCustomGameInvite
// [0x00420400] ( FUNC_Native )
struct UTgGFxPlayCustom_execCreateDataForCustomGameInvite_Parms
{
	TArray< unsigned char >                            OutInviteData;                                    		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayCustom.ClearDelegates
// [0x00020802] ( FUNC_Event )
struct UTgGFxPlayCustom_eventClearDelegates_Parms
{
};

// Function TgClientBase.TgGFxPlayCustom.UpdateOnlineGame
// [0x00020802] ( FUNC_Event )
struct UTgGFxPlayCustom_eventUpdateOnlineGame_Parms
{
};

// Function TgClientBase.TgGFxPlayCustom.OnCreateOnlineGameComplete
// [0x00020002] 
struct UTgGFxPlayCustom_execOnCreateOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UOnlineGameSettings*                      GS;                                               		// 0x000C (0x0008) [0x0000000000000000]              
	// struct FString                                  SessionGuid;                                      		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxPlayCustom.CreateOnlineSession
// [0x00020802] ( FUNC_Event )
struct UTgGFxPlayCustom_eventCreateOnlineSession_Parms
{
	int                                                MaxPlayers;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bPrivate : 1;                                     		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlayCustom.FilterFriendListForPeoplePicker
// [0x00420500] ( FUNC_Native )
struct UTgGFxPlayCustom_execFilterFriendListForPeoplePicker_Parms
{
	TArray< struct FOnlineFriend >                     FriendList;                                       		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	TArray< struct FSessionMemberInfo >                SessionMemberList;                                		// 0x0010 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                MaxInviteSize;                                    		// 0x0020 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function TgClientBase.TgGFxPlayCustom.OnQueueStateChange
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayCustom_execOnQueueStateChange_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlayCustom.OnCustomGameHudEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayCustom_execOnCustomGameHudEvent_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlayCustom.OnPopup
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayCustom_execOnPopup_Parms
{
	class UTgPagePopup*                                pData;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FPopupResponse                              Response;                                         		// 0x0008 (0x0018) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxPlayCustom.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGFxPlayCustom_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlayCustom.Tick
// [0x00020400] ( FUNC_Native )
struct UTgGFxPlayCustom_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlayCustom.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxPlayCustom_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxPlayCustom.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxPlayCustom_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxPopupModal.OnPopupClosed
// [0x00020400] ( FUNC_Native )
struct UTgGfxPopupModal_execOnPopupClosed_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxPopupModal.OnPopupOpened
// [0x00020400] ( FUNC_Native )
struct UTgGfxPopupModal_execOnPopupOpened_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxPopupModal.USC_SelectedPopup
// [0x00020400] ( FUNC_Native )
struct UTgGfxPopupModal_execUSC_SelectedPopup_Parms
{
	int                                                nActionId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sInputValue;                                      		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sSecondaryInputValue;                             		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxPopupModal.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxPopupModal_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxPopupModal.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxPopupModal_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxPopupModal.USC_SelectedPopup_Delegate
// [0x00120000] 
struct UTgGfxPopupModal_execUSC_SelectedPopup_Delegate_Parms
{
	int                                                nActionId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sInputValue;                                      		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sSecondaryInputValue;                             		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxPopupModal.SendAnnounceReportPlayer
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGfxPopupModal_eventSendAnnounceReportPlayer_Parms
{
	struct FString                                     sReportedId;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxPopupModal.SendClosePopup
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGfxPopupModal_eventSendClosePopup_Parms
{
};

// Function TgClientBase.TgGfxPopupModal.SendOpenPopup
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGfxPopupModal_eventSendOpenPopup_Parms
{
	class UGFxObject*                                  Obj;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxProfileCommendations.UpdateAll
// [0x00020802] ( FUNC_Event )
struct UTgGfxProfileCommendations_eventUpdateAll_Parms
{
};

// Function TgClientBase.TgGfxProfileCommendations.asc_updateAll
// [0x00020003] ( FUNC_Final )
struct UTgGfxProfileCommendations_execasc_updateAll_Parms
{
};

// Function TgClientBase.TgGfxProfileCommendations.USC_SeenCommendationUpdate
// [0x00020400] ( FUNC_Native )
struct UTgGfxProfileCommendations_execUSC_SeenCommendationUpdate_Parms
{
};

// Function TgClientBase.TgGfxProfileCommendations.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxProfileCommendations_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxProfileReferral.CreateMilestones
// [0x00020400] ( FUNC_Native )
struct UTgGfxProfileReferral_execCreateMilestones_Parms
{
};

// Function TgClientBase.TgGfxProfileReferral.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxProfileReferral_execInitialize_Parms
{
	class UTgMoviePlayer*                              pMoviePlayer;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxPurchaseGems.SetMarketplaceVisibility
// [0x00024802] ( FUNC_Event )
struct UTgGfxPurchaseGems_eventSetMarketplaceVisibility_Parms
{
	unsigned long                                      Visible : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned char                                      IconPosition;                                     		// 0x0004 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgGfxPurchaseGems.GetAvailableProducts
// [0x00420802] ( FUNC_Event )
struct UTgGfxPurchaseGems_eventGetAvailableProducts_Parms
{
	unsigned char                                      MediaType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FMarketplaceProductDetails >        AvailableProducts;                                		// 0x0004 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxPurchaseGems.GetMarketPlaceCatalog
// [0x00420400] ( FUNC_Native )
struct UTgGfxPurchaseGems_execGetMarketPlaceCatalog_Parms
{
	unsigned char                                      MediaType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FProductInfo >                      Products;                                         		// 0x0004 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxPurchaseGems.GetInventoryItems
// [0x00420802] ( FUNC_Event )
struct UTgGfxPurchaseGems_eventGetInventoryItems_Parms
{
	TArray< struct FMarketplaceInventoryItem >         InventoryItems;                                   		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxPurchaseGems.GetAllXBProducts
// [0x00420802] ( FUNC_Event )
struct UTgGfxPurchaseGems_eventGetAllXBProducts_Parms
{
	TArray< struct FProductInfo >                      Products;                                         		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// unsigned char                                   MediaType;                                        		// 0x0010 (0x0001) [0x0000000000000000]              
};

// Function TgClientBase.TgGfxPurchaseGems.PopulateXboxProduct
// [0x00420002] 
struct UTgGfxPurchaseGems_execPopulateXboxProduct_Parms
{
	struct FString                                     ProductId;                                        		// 0x0000 (0x0010) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
	TArray< struct FProductInfo >                      Products;                                         		// 0x0010 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function TgClientBase.TgGfxPurchaseGems.PopulateProduct
// [0x00C20002] 
struct UTgGfxPurchaseGems_execPopulateProduct_Parms
{
	struct FString                                     ProductId;                                        		// 0x0000 (0x0010) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Header;                                           		// 0x0010 (0x0010) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0020 (0x0010) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
	TArray< struct FProductInfo >                      Products;                                         		// 0x0030 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	TArray< struct FProductImageInfo >                 ProductImages;                                    		// 0x0040 (0x0010) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
	// struct FProductInfo                             Product;                                          		// 0x0050 (0x0078) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x00C8 (0x0004) [0x0000000000000000]              
};

// Function TgClientBase.TgGfxPurchaseGems.GetGemProducts
// [0x00420802] ( FUNC_Event )
struct UTgGfxPurchaseGems_eventGetGemProducts_Parms
{
	TArray< struct FProductInfo >                      Products;                                         		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxPurchaseGems.GetBaseProducts
// [0x00420802] ( FUNC_Event )
struct UTgGfxPurchaseGems_eventGetBaseProducts_Parms
{
	TArray< struct FProductInfo >                      Products;                                         		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxPurchaseGems.OnAcquisition
// [0x00020400] ( FUNC_Native )
struct UTgGfxPurchaseGems_execOnAcquisition_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxPurchaseGems.UpdateData
// [0x00020802] ( FUNC_Event )
struct UTgGfxPurchaseGems_eventUpdateData_Parms
{
};

// Function TgClientBase.TgGfxPurchaseGems.ASC_UpdateData
// [0x00020003] ( FUNC_Final )
struct UTgGfxPurchaseGems_execASC_UpdateData_Parms
{
};

// Function TgClientBase.TgGfxPurchaseGems.HideOverlay
// [0x00020802] ( FUNC_Event )
struct UTgGfxPurchaseGems_eventHideOverlay_Parms
{
};

// Function TgClientBase.TgGfxPurchaseGems.ASC_HideOverlay
// [0x00020003] ( FUNC_Final )
struct UTgGfxPurchaseGems_execASC_HideOverlay_Parms
{
};

// Function TgClientBase.TgGfxPurchaseGems.ShowOverlay
// [0x00020802] ( FUNC_Event )
struct UTgGfxPurchaseGems_eventShowOverlay_Parms
{
};

// Function TgClientBase.TgGfxPurchaseGems.ASC_ShowOverlay
// [0x00020003] ( FUNC_Final )
struct UTgGfxPurchaseGems_execASC_ShowOverlay_Parms
{
};

// Function TgClientBase.TgGfxPurchaseGems.USC_CancelPurchase
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxPurchaseGems_execUSC_CancelPurchase_Parms
{
};

// Function TgClientBase.TgGfxPurchaseGems.USC_SetupLongDescModal
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxPurchaseGems_execUSC_SetupLongDescModal_Parms
{
	struct FString                                     ItemName;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     longDesc;                                         		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     SignedOffer;                                      		// 0x0020 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxPurchaseGems.USC_ShowEmptyMessage
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxPurchaseGems_execUSC_ShowEmptyMessage_Parms
{
};

// Function TgClientBase.TgGfxPurchaseGems.USC_PurchaseItem
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxPurchaseGems_execUSC_PurchaseItem_Parms
{
	struct FString                                     SKUCode;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                lootId;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxPurchaseGems.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxPurchaseGems_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxPurchaseGems.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxPurchaseGems_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxQuestAcquisition.OnNewQuests
// [0x00020400] ( FUNC_Native )
struct UTgGfxQuestAcquisition_execOnNewQuests_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxQuestAcquisition.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxQuestAcquisition_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxQuestAcquisition.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxQuestAcquisition_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxQuestList.UpdateQuests
// [0x00020400] ( FUNC_Native )
struct UTgGfxQuestList_execUpdateQuests_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxQuestList.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxQuestList_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxQuestList.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxQuestList_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxQuestList.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxQuestList_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxQuickTestMenu.USC_CallConsoleCommand
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxQuickTestMenu_execUSC_CallConsoleCommand_Parms
{
	struct FString                                     sCommand;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxQuickTestMenu.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxQuickTestMenu_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxQuickTestMenu.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxQuickTestMenu_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxReturnPlayer.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxReturnPlayer_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxReturnPlayer.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxReturnPlayer_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxReturnPlayer.USC_ClaimReturnRewards
// [0x00020400] ( FUNC_Native )
struct UTgGfxReturnPlayer_execUSC_ClaimReturnRewards_Parms
{
};

// Function TgClientBase.TgGfxRewardCenter.RepopulateInformation
// [0x00020400] ( FUNC_Native )
struct UTgGfxRewardCenter_execRepopulateInformation_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxRewardCenter.UpdateRewards
// [0x00020400] ( FUNC_Native )
struct UTgGfxRewardCenter_execUpdateRewards_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxRewardCenter.USC_GotoReceiptItem
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgGfxRewardCenter_execUSC_GotoReceiptItem_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxRewardCenter.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxRewardCenter_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxRewardCenter.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxRewardCenter_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxRewardCenter.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxRewardCenter_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxRewardCenter.RepopulateGiftsFromName
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxRewardCenter_execRepopulateGiftsFromName_Parms
{
	unsigned long                                      bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class UTgPlayerNameManager*                        pManager;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxSeasonalEventQuestView.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxSeasonalEventQuestView_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxSeasonalEventQuestView.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxSeasonalEventQuestView_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxSeasonalEventQuestView.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxSeasonalEventQuestView_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxSimulmediaBase.HasOpportunities
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxSimulmediaBase_eventHasOpportunities_Parms
{
};

// Function TgClientBase.TgGFxSimulmediaBase.NoOpportunities
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxSimulmediaBase_eventNoOpportunities_Parms
{
};

// Function TgClientBase.TgGFxSimulmediaBase.UpdateSimulmediaPopupOpportunities
// [0x00020802] ( FUNC_Event )
struct UTgGFxSimulmediaBase_eventUpdateSimulmediaPopupOpportunities_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxSimulmediaBase.RemoveSimulmediaDelegate
// [0x00020802] ( FUNC_Event )
struct UTgGFxSimulmediaBase_eventRemoveSimulmediaDelegate_Parms
{
};

// Function TgClientBase.TgGFxSimulmediaBase.SetOnPostAdvanceDelegateSimulmedia
// [0x00020802] ( FUNC_Event )
struct UTgGFxSimulmediaBase_eventSetOnPostAdvanceDelegateSimulmedia_Parms
{
};

// Function TgClientBase.TgGFxSimulmediaBase.OnOpportunityUpdated
// [0x00020400] ( FUNC_Native )
struct UTgGFxSimulmediaBase_execOnOpportunityUpdated_Parms
{
};

// Function TgClientBase.TgGFxSimulmediaBase.OnAcquisition
// [0x00020400] ( FUNC_Native )
struct UTgGFxSimulmediaBase_execOnAcquisition_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxSimulmediaBase.OnVideoPlayerClosed
// [0x00020400] ( FUNC_Native )
struct UTgGFxSimulmediaBase_execOnVideoPlayerClosed_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxSimulmediaBase.USC_UpdateRewards
// [0x00020400] ( FUNC_Native )
struct UTgGFxSimulmediaBase_execUSC_UpdateRewards_Parms
{
};

// Function TgClientBase.TgGFxSimulmediaBase.USC_UpdateState
// [0x00020400] ( FUNC_Native )
struct UTgGFxSimulmediaBase_execUSC_UpdateState_Parms
{
};

// Function TgClientBase.TgGFxSimulmediaBase.USC_OpenVideoPlayer
// [0x00020400] ( FUNC_Native )
struct UTgGFxSimulmediaBase_execUSC_OpenVideoPlayer_Parms
{
};

// Function TgClientBase.TgGFxSimulmediaBase.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxSimulmediaBase_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxSimulmediaBase.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxSimulmediaBase_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxSimulmediaVideoPlayer.OnVideoError
// [0x00020802] ( FUNC_Event )
struct UTgGFxSimulmediaVideoPlayer_eventOnVideoError_Parms
{
	class APComVideoPlayer*                            VideoPlayer;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ErrorCode;                                        		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxSimulmediaVideoPlayer.DestroyVideoPlayer
// [0x00020802] ( FUNC_Event )
struct UTgGFxSimulmediaVideoPlayer_eventDestroyVideoPlayer_Parms
{
};

// Function TgClientBase.TgGFxSimulmediaVideoPlayer.CompleteWatchingAd
// [0x00020802] ( FUNC_Event )
struct UTgGFxSimulmediaVideoPlayer_eventCompleteWatchingAd_Parms
{
};

// Function TgClientBase.TgGFxSimulmediaVideoPlayer.SpawnVideoPlayer
// [0x00020802] ( FUNC_Event )
struct UTgGFxSimulmediaVideoPlayer_eventSpawnVideoPlayer_Parms
{
	class AActor*                                      SpawningActor;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxSimulmediaVideoPlayer.USC_AbortAd
// [0x00020400] ( FUNC_Native )
struct UTgGFxSimulmediaVideoPlayer_execUSC_AbortAd_Parms
{
};

// Function TgClientBase.TgGFxSimulmediaVideoPlayer.CloseVideoPlayer
// [0x00020400] ( FUNC_Native )
struct UTgGFxSimulmediaVideoPlayer_execCloseVideoPlayer_Parms
{
};

// Function TgClientBase.TgGFxSimulmediaVideoPlayer.CompleteAd
// [0x00020400] ( FUNC_Native )
struct UTgGFxSimulmediaVideoPlayer_execCompleteAd_Parms
{
};

// Function TgClientBase.TgGFxSimulmediaVideoPlayer.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxSimulmediaVideoPlayer_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxSimulmediaVideoPlayer.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxSimulmediaVideoPlayer_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxSocialBase.UpdateClanInvitations
// [0x00020400] ( FUNC_Native )
struct UTgGfxSocialBase_execUpdateClanInvitations_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxSocialBase.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxSocialBase_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxSocialBase.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxSocialBase_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxSocialBase.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxSocialBase_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxSocialBase.SetSelectedAdminTab
// [0x00020802] ( FUNC_Event )
struct UTgGfxSocialBase_eventSetSelectedAdminTab_Parms
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxSocialBase.ASC_SetSelectedAdminTab
// [0x00020003] ( FUNC_Final )
struct UTgGfxSocialBase_execASC_SetSelectedAdminTab_Parms
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxSocialBase.JoinedClan
// [0x00020802] ( FUNC_Event )
struct UTgGfxSocialBase_eventJoinedClan_Parms
{
};

// Function TgClientBase.TgGfxSocialBase.ASC_JoinedClan
// [0x00020003] ( FUNC_Final )
struct UTgGfxSocialBase_execASC_JoinedClan_Parms
{
};

// Function TgClientBase.TgGfxSocialBase.UpdateClanInvitationsEvent
// [0x00020802] ( FUNC_Event )
struct UTgGfxSocialBase_eventUpdateClanInvitationsEvent_Parms
{
};

// Function TgClientBase.TgGfxSocialBase.ASC_UpdateClanInvitations
// [0x00020003] ( FUNC_Final )
struct UTgGfxSocialBase_execASC_UpdateClanInvitations_Parms
{
};

// Function TgClientBase.TgGfxSocialBase.UpdateClanMOTD
// [0x00020802] ( FUNC_Event )
struct UTgGfxSocialBase_eventUpdateClanMOTD_Parms
{
};

// Function TgClientBase.TgGfxSocialBase.ASC_UpdateClanMOTD
// [0x00020003] ( FUNC_Final )
struct UTgGfxSocialBase_execASC_UpdateClanMOTD_Parms
{
};

// Function TgClientBase.TgGfxSocialBase.UpdateSelectedTab
// [0x00020802] ( FUNC_Event )
struct UTgGfxSocialBase_eventUpdateSelectedTab_Parms
{
	struct FString                                     tabLabel;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxSocialBase.ASC_UpdateSelectedTab
// [0x00020003] ( FUNC_Final )
struct UTgGfxSocialBase_execASC_UpdateSelectedTab_Parms
{
	struct FString                                     tabLabel;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxSocialBase.UpdateClanQuestData
// [0x00020802] ( FUNC_Event )
struct UTgGfxSocialBase_eventUpdateClanQuestData_Parms
{
};

// Function TgClientBase.TgGfxSocialBase.ASC_UpdateClanQuestData
// [0x00020003] ( FUNC_Final )
struct UTgGfxSocialBase_execASC_UpdateClanQuestData_Parms
{
};

// Function TgClientBase.TgGfxSocialBase.UpdateSocialTabLabels
// [0x00020802] ( FUNC_Event )
struct UTgGfxSocialBase_eventUpdateSocialTabLabels_Parms
{
};

// Function TgClientBase.TgGfxSocialBase.ASC_UpdateSocialTabLabels
// [0x00020003] ( FUNC_Final )
struct UTgGfxSocialBase_execASC_UpdateSocialTabLabels_Parms
{
};

// Function TgClientBase.TgGfxSocialBase.USC_SelectIcon
// [0x00020400] ( FUNC_Native )
struct UTgGfxSocialBase_execUSC_SelectIcon_Parms
{
	int                                                nIconItemId;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxSocialBase.USC_UpdateCallouts
// [0x00020400] ( FUNC_Native )
struct UTgGfxSocialBase_execUSC_UpdateCallouts_Parms
{
};

// Function TgClientBase.TgGfxSocialBase.USC_UpdateClanQuestData
// [0x00020400] ( FUNC_Native )
struct UTgGfxSocialBase_execUSC_UpdateClanQuestData_Parms
{
};

// Function TgClientBase.TgGfxSocialBase.USC_TabSelected
// [0x00020400] ( FUNC_Native )
struct UTgGfxSocialBase_execUSC_TabSelected_Parms
{
	struct FString                                     tabSelected;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxSovereigntyVendorStore.USC_TryAction
// [0x00020400] ( FUNC_Native )
struct UTgGfxSovereigntyVendorStore_execUSC_TryAction_Parms
{
};

// Function TgClientBase.TgGfxSovereigntyVendorStore.USC_TryReroll
// [0x00020400] ( FUNC_Native )
struct UTgGfxSovereigntyVendorStore_execUSC_TryReroll_Parms
{
};

// Function TgClientBase.TgGfxSovereigntyVendorStore.USC_OnInvItemFocused
// [0x00020400] ( FUNC_Native )
struct UTgGfxSovereigntyVendorStore_execUSC_OnInvItemFocused_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxSovereigntyVendorStore.USC_OnShopItemFocused
// [0x00020400] ( FUNC_Native )
struct UTgGfxSovereigntyVendorStore_execUSC_OnShopItemFocused_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxSovereigntyVendorStore.PlayCloseAnimation
// [0x00020802] ( FUNC_Event )
struct UTgGfxSovereigntyVendorStore_eventPlayCloseAnimation_Parms
{
};

// Function TgClientBase.TgGfxSovereigntyVendorStore.PlayOpenAnimation
// [0x00020802] ( FUNC_Event )
struct UTgGfxSovereigntyVendorStore_eventPlayOpenAnimation_Parms
{
};

// Function TgClientBase.TgGfxSovereigntyVendorStore.OnGameUIEvent
// [0x00020400] ( FUNC_Native )
struct UTgGfxSovereigntyVendorStore_execOnGameUIEvent_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxSovereigntyVendorStore.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxSovereigntyVendorStore_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxSovereigntyVendorStore.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxSovereigntyVendorStore_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxSovereigntyVendorStore.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxSovereigntyVendorStore_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxStoreChest.OnAcquisition
// [0x00020400] ( FUNC_Native )
struct UTgGfxStoreChest_execOnAcquisition_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxStoreChest.ASC_PurchaseTreasureChest
// [0x00020802] ( FUNC_Event )
struct UTgGfxStoreChest_eventASC_PurchaseTreasureChest_Parms
{
};

// Function TgClientBase.TgGfxStoreChest.PurchaseTreasureChest
// [0x00020400] ( FUNC_Native )
struct UTgGfxStoreChest_execPurchaseTreasureChest_Parms
{
};

// Function TgClientBase.TgGfxStoreChest.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxStoreChest_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxStoreChest.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxStoreChest_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxStoreChest.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxStoreChest_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxStoreFeatures.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxStoreFeatures_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxStoreFeatures.OnAcquisition
// [0x00020400] ( FUNC_Native )
struct UTgGfxStoreFeatures_execOnAcquisition_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxStoreFeatures.ApplyGemPrices
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxStoreFeatures_execApplyGemPrices_Parms
{
	class UGFxObject*                                  pArray;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxStoreFeatures.ClearDailyDeal
// [0x00020400] ( FUNC_Native )
struct UTgGfxStoreFeatures_execClearDailyDeal_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxStoreFeatures.LandingPanelImagesLoaded
// [0x00020400] ( FUNC_Native )
struct UTgGfxStoreFeatures_execLandingPanelImagesLoaded_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxStoreFeatures.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxStoreFeatures_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxStoreFeatures.ASC_UpdateDP
// [0x00020003] ( FUNC_Final )
struct UTgGfxStoreFeatures_execASC_UpdateDP_Parms
{
};

// Function TgClientBase.TgGfxStoreFeatures.UpdateDP
// [0x00020802] ( FUNC_Event )
struct UTgGfxStoreFeatures_eventUpdateDP_Parms
{
};

// Function TgClientBase.TgGfxStoreFeatures.USC_ForwardFeature
// [0x00020400] ( FUNC_Native )
struct UTgGfxStoreFeatures_execUSC_ForwardFeature_Parms
{
	int                                                pItemType;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     pItemData;                                        		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     pItemData2;                                       		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nLocationId;                                      		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxStoreFeatures.USC_Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxStoreFeatures_execUSC_Initialize_Parms
{
};

// Function TgClientBase.TgGfxStoreInfo.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxStoreInfo_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxStoreInfo.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxStoreInfo_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxStoreMixer.OnAcquisition
// [0x00020400] ( FUNC_Native )
struct UTgGfxStoreMixer_execOnAcquisition_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxStoreMixer.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxStoreMixer_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxStoreMixer.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxStoreMixer_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxStoreShared.UpdateNameChangePrice
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxStoreShared_eventUpdateNameChangePrice_Parms
{
	int                                                nPrice;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxStoreShared.SetSelectedTab
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxStoreShared_eventSetSelectedTab_Parms
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxStoreShared.OnGameUIEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxStoreShared_execOnGameUIEvent_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxStoreShared.USC_BuyGems
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxStoreShared_execUSC_BuyGems_Parms
{
};

// Function TgClientBase.TgGFxStoreShared.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGFxStoreShared_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxStoreShared.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxStoreShared_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxStoreViewer.UpdateItems
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxStoreViewer_execUpdateItems_Parms
{
};

// Function TgClientBase.TgGfxStoreViewer.OnNameChangeConfirm
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgGfxStoreViewer_execOnNameChangeConfirm_Parms
{
	class UTgPagePopup*                                pData;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FPopupResponse                              Response;                                         		// 0x0008 (0x0018) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxStoreViewer.TryBuyNameChange
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxStoreViewer_execTryBuyNameChange_Parms
{
	struct FString                                     sName;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxStoreViewer.TryRedeemCode
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxStoreViewer_execTryRedeemCode_Parms
{
	struct FString                                     sCode;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxStoreViewer.OnAcquisition
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxStoreViewer_execOnAcquisition_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxStoreViewer.UpdateUGPValue
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxStoreViewer_execUpdateUGPValue_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxStoreViewer.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxStoreViewer_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxStoreViewer.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxStoreViewer_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxTextInputPopup.GetInputObject
// [0x00020400] ( FUNC_Native )
struct UTgGfxTextInputPopup_execGetInputObject_Parms
{
	class UGFxObject*                                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGfxTextInputPopup.SetCachedInputObject
// [0x00020400] ( FUNC_Native )
struct UTgGfxTextInputPopup_execSetCachedInputObject_Parms
{
	class UGFxObject*                                  CachedInputObject;                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxTextInputPopup.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxTextInputPopup_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxTextInputPopup.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxTextInputPopup_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxTriumphChest.ShowAboutPanel
// [0x00020400] ( FUNC_Native )
struct UTgGfxTriumphChest_execShowAboutPanel_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxTriumphChest.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxTriumphChest_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxTriumphChest.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxTriumphChest_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxTriumphChest.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxTriumphChest_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxVendorStore_PC.OnPopupEvent
// [0x00020400] ( FUNC_Native )
struct UTgGfxVendorStore_PC_execOnPopupEvent_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxVendorStore_PC.CheckCurrency
// [0x00020400] ( FUNC_Native )
struct UTgGfxVendorStore_PC_execCheckCurrency_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxVendorStore_PC.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxVendorStore_PC_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxVendorStore_PC.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxVendorStore_PC_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxVendorStore_PC.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxVendorStore_PC_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxVendorStoreUnit.OnUnitShopUpdate
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxVendorStoreUnit_execOnUnitShopUpdate_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxVendorStoreUnit.SwapUnits
// [0x00020400] ( FUNC_Native )
struct UTgGfxVendorStoreUnit_execSwapUnits_Parms
{
	int                                                initPos;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                finalPos;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxVendorStoreUnit.BuffUnit
// [0x00020400] ( FUNC_Native )
struct UTgGfxVendorStoreUnit_execBuffUnit_Parms
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxVendorStoreUnit.SellUnit
// [0x00020400] ( FUNC_Native )
struct UTgGfxVendorStoreUnit_execSellUnit_Parms
{
	int                                                Position;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxVendorStoreUnit.PurchaseUnit
// [0x00020400] ( FUNC_Native )
struct UTgGfxVendorStoreUnit_execPurchaseUnit_Parms
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Position;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxVendorStoreUnit.UpdateInventory
// [0x00020400] ( FUNC_Native )
struct UTgGfxVendorStoreUnit_execUpdateInventory_Parms
{
};

// Function TgClientBase.TgGfxVendorStoreUnit.UpdateShop
// [0x00020400] ( FUNC_Native )
struct UTgGfxVendorStoreUnit_execUpdateShop_Parms
{
};

// Function TgClientBase.TgGfxVendorStoreUnit.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxVendorStoreUnit_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxVendorStoreUnit.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxVendorStoreUnit_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.OnPopupEvent
// [0x00020400] ( FUNC_Native )
struct UTgGfxVendorStoreV2_Console_execOnPopupEvent_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.UpdateTierSummary
// [0x00020802] ( FUNC_Event )
struct UTgGfxVendorStoreV2_Console_eventUpdateTierSummary_Parms
{
	int                                                pItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.ASC_UpdateTierSummary
// [0x00020003] ( FUNC_Final )
struct UTgGfxVendorStoreV2_Console_execASC_UpdateTierSummary_Parms
{
	int                                                pItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.ToggleStatDisplay
// [0x00020802] ( FUNC_Event )
struct UTgGfxVendorStoreV2_Console_eventToggleStatDisplay_Parms
{
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.ASC_ToggleStatDisplay
// [0x00020003] ( FUNC_Final )
struct UTgGfxVendorStoreV2_Console_execASC_ToggleStatDisplay_Parms
{
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.CloseStoreOnDelay
// [0x00020802] ( FUNC_Event )
struct UTgGfxVendorStoreV2_Console_eventCloseStoreOnDelay_Parms
{
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.ASC_CloseStoreOnDelay
// [0x00020003] ( FUNC_Final )
struct UTgGfxVendorStoreV2_Console_execASC_CloseStoreOnDelay_Parms
{
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.UpdateSelectedPrice
// [0x00020802] ( FUNC_Event )
struct UTgGfxVendorStoreV2_Console_eventUpdateSelectedPrice_Parms
{
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.ASC_UpdateSelectedPrice
// [0x00020003] ( FUNC_Final )
struct UTgGfxVendorStoreV2_Console_execASC_UpdateSelectedPrice_Parms
{
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.AnimateItemPurchase
// [0x00020802] ( FUNC_Event )
struct UTgGfxVendorStoreV2_Console_eventAnimateItemPurchase_Parms
{
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.ASC_AnimateItemPurchase
// [0x00020003] ( FUNC_Final )
struct UTgGfxVendorStoreV2_Console_execASC_AnimateItemPurchase_Parms
{
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.FocusRightPanel
// [0x00020802] ( FUNC_Event )
struct UTgGfxVendorStoreV2_Console_eventFocusRightPanel_Parms
{
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.ASC_FocusRightPanel
// [0x00020003] ( FUNC_Final )
struct UTgGfxVendorStoreV2_Console_execASC_FocusRightPanel_Parms
{
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.FocusLeftPanel
// [0x00020802] ( FUNC_Event )
struct UTgGfxVendorStoreV2_Console_eventFocusLeftPanel_Parms
{
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.ASC_FocusLeftPanel
// [0x00020003] ( FUNC_Final )
struct UTgGfxVendorStoreV2_Console_execASC_FocusLeftPanel_Parms
{
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.PlayCloseAnimation
// [0x00020802] ( FUNC_Event )
struct UTgGfxVendorStoreV2_Console_eventPlayCloseAnimation_Parms
{
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.ASC_PlayCloseAnimation
// [0x00020003] ( FUNC_Final )
struct UTgGfxVendorStoreV2_Console_execASC_PlayCloseAnimation_Parms
{
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.PlayOpenAnimation
// [0x00020802] ( FUNC_Event )
struct UTgGfxVendorStoreV2_Console_eventPlayOpenAnimation_Parms
{
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.ASC_PlayOpenAnimation
// [0x00020003] ( FUNC_Final )
struct UTgGfxVendorStoreV2_Console_execASC_PlayOpenAnimation_Parms
{
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.USC_HandleButtonInput
// [0x00020400] ( FUNC_Native )
struct UTgGfxVendorStoreV2_Console_execUSC_HandleButtonInput_Parms
{
	int                                                nControllerId;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nKeyCode;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPressType;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.USC_ToggleStore
// [0x00020400] ( FUNC_Native )
struct UTgGfxVendorStoreV2_Console_execUSC_ToggleStore_Parms
{
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.USC_HandleButtonInput_Delegate
// [0x00120000] 
struct UTgGfxVendorStoreV2_Console_execUSC_HandleButtonInput_Delegate_Parms
{
	int                                                nControllerId;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nKeyCode;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPressType;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.USC_ToggleStore_Delegate
// [0x00120000] 
struct UTgGfxVendorStoreV2_Console_execUSC_ToggleStore_Delegate_Parms
{
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxVendorStoreV2_Console_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxVendorStoreV2_Console_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.CheckCurrency
// [0x00020400] ( FUNC_Native )
struct UTgGfxVendorStoreV2_Console_execCheckCurrency_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSystemNotifManagerBase.UCUninitialize
// [0x00020802] ( FUNC_Event )
struct UTgSystemNotifManagerBase_eventUCUninitialize_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgSystemNotifManagerBase.UCInitialize
// [0x00020802] ( FUNC_Event )
struct UTgSystemNotifManagerBase_eventUCInitialize_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgSystemNotifManagerBase.GetPlayerInterface
// [0x00020003] ( FUNC_Final )
struct UTgSystemNotifManagerBase_execGetPlayerInterface_Parms
{
	class UOnlinePlayerInterface*                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgSystemNotifManagerBase.OnReceivePlatformPermissions
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSystemNotifManagerBase_execOnReceivePlatformPermissions_Parms
{
	unsigned char                                      nLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ePrivilege;                                       		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPermissionsResultByUniqueNetId >   arrResults;                                       		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgSystemNotifManagerBase.OnLoginEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSystemNotifManagerBase_execOnLoginEvent_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSystemNotifManagerBase.OnAcquisitionNotification
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSystemNotifManagerBase_execOnAcquisitionNotification_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSystemNotifManagerBase.OnAddSystemMessageNotification
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSystemNotifManagerBase_execOnAddSystemMessageNotification_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSystemNotifManagerBase.OnQuestComplete
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSystemNotifManagerBase_execOnQuestComplete_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSystemNotifManagerBase.AddQuestCompletedNotification
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSystemNotifManagerBase_execAddQuestCompletedNotification_Parms
{
	struct FString                                     msg;                                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nIconIndex;                                       		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSystemNotifManagerBase.ExpireSystemMessageTeamInvite
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSystemNotifManagerBase_execExpireSystemMessageTeamInvite_Parms
{
};

// Function TgClientBase.TgSystemNotifManagerBase.AddSystemMessageTeamInvite
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSystemNotifManagerBase_execAddSystemMessageTeamInvite_Parms
{
};

// Function TgClientBase.TgSystemNotifManagerBase.RejectPartySystemMessage
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSystemNotifManagerBase_execRejectPartySystemMessage_Parms
{
};

// Function TgClientBase.TgSystemNotifManagerBase.AcceptPartySystemMessage
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSystemNotifManagerBase_execAcceptPartySystemMessage_Parms
{
};

// Function TgClientBase.TgSystemNotifManagerBase.RejectClanSystemMessage
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSystemNotifManagerBase_execRejectClanSystemMessage_Parms
{
	int                                                nClanId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSystemNotifManagerBase.AcceptClanSystemMessage
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSystemNotifManagerBase_execAcceptClanSystemMessage_Parms
{
	int                                                nClanId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSystemNotifManagerBase.InitializeClanInvites
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSystemNotifManagerBase_execInitializeClanInvites_Parms
{
};

// Function TgClientBase.TgSystemNotifManagerBase.GetNotificationCount
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSystemNotifManagerBase_execGetNotificationCount_Parms
{
	unsigned char                                      nType;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgSystemNotifManagerBase.OnSystemMessageAdded
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSystemNotifManagerBase_execOnSystemMessageAdded_Parms
{
};

// Function TgClientBase.TgSystemNotifManagerBase.RejectNotification
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSystemNotifManagerBase_execRejectNotification_Parms
{
	unsigned char                                      nType;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nId;                                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSystemNotifManagerBase.AcceptNotification
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSystemNotifManagerBase_execAcceptNotification_Parms
{
	unsigned char                                      nType;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nId;                                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSystemNotifManagerBase.RemoveNotification
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSystemNotifManagerBase_execRemoveNotification_Parms
{
	unsigned char                                      nType;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nIndex;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSystemNotifManagerBase.RemoveAllNotifications
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSystemNotifManagerBase_execRemoveAllNotifications_Parms
{
	unsigned char                                      nType;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSystemNotifManagerBase.GetNewSystemMessageCount
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgSystemNotifManagerBase_execGetNewSystemMessageCount_Parms
{
	unsigned char                                      nType;                                            		// 0x0000 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgSystemNotifManagerBase.IsAnySystemMessageNew
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgSystemNotifManagerBase_execIsAnySystemMessageNew_Parms
{
	unsigned char                                      nType;                                            		// 0x0000 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgSystemNotifManagerBase.SetAllSystemMessagesSeen
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgSystemNotifManagerBase_execSetAllSystemMessagesSeen_Parms
{
	unsigned char                                      nType;                                            		// 0x0000 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgSystemNotifManagerBase.AddSystemAcquisitionNotification
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSystemNotifManagerBase_execAddSystemAcquisitionNotification_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSystemNotifManagerBase.AddSystemMessageNotification
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgSystemNotifManagerBase_execAddSystemMessageNotification_Parms
{
	struct FString                                     msg;                                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      nType;                                            		// 0x0010 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      nSubType;                                         		// 0x0011 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgSystemNotifManagerBase.ShowPlayerNotif
// [0x00420400] ( FUNC_Native )
struct UTgSystemNotifManagerBase_execShowPlayerNotif_Parms
{
	struct FSystemMessage                              msg;                                              		// 0x0000 (0x0058) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgSystemNotifManagerBase.OnReceivePlatformNames
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSystemNotifManagerBase_execOnReceivePlatformNames_Parms
{
	unsigned long                                      bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class UTgPlayerNameManager*                        pManager;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSystemNotifManagerBase.OnPlayerInfo
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSystemNotifManagerBase_execOnPlayerInfo_Parms
{
	struct FPointer                                    pEventBase;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSystemNotifManagerBase.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgSystemNotifManagerBase_execUninitialize_Parms
{
};

// Function TgClientBase.TgSystemNotifManagerBase.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgSystemNotifManagerBase_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxNativeWidget.WidgetUnloaded
// [0x00020802] ( FUNC_Event )
struct UTgGFxNativeWidget_eventWidgetUnloaded_Parms
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxNativeWidget.WidgetInitialized
// [0x00020802] ( FUNC_Event )
struct UTgGFxNativeWidget_eventWidgetInitialized_Parms
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxNativeWidget.GetArrInputIntercepts
// [0x00420400] ( FUNC_Native )
struct UTgGFxNativeWidget_execGetArrInputIntercepts_Parms
{
	struct FPointer                                    pArr;                                             		// 0x0000 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function TgClientBase.TgGFxNativeWidget.GetArrGameEventListeners
// [0x00420400] ( FUNC_Native )
struct UTgGFxNativeWidget_execGetArrGameEventListeners_Parms
{
	struct FPointer                                    pArr;                                             		// 0x0000 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function TgClientBase.TgGFxNativeWidget.GetArrMctsListeners
// [0x00420400] ( FUNC_Native )
struct UTgGFxNativeWidget_execGetArrMctsListeners_Parms
{
	struct FPointer                                    pArr;                                             		// 0x0000 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function TgClientBase.TgGFxNativeWidget.GetArrOldMctsListeners
// [0x00420400] ( FUNC_Native )
struct UTgGFxNativeWidget_execGetArrOldMctsListeners_Parms
{
	struct FPointer                                    pArr;                                             		// 0x0000 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function TgClientBase.TgGFxNativeWidget.TryUnbindProperty
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxNativeWidget_execTryUnbindProperty_Parms
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  Widget;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxNativeWidget.TryBindProperty
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxNativeWidget_execTryBindProperty_Parms
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  Widget;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxNativeWidget.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxNativeWidget_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxNativeWidget.PostInit
// [0x00020400] ( FUNC_Native )
struct UTgGFxNativeWidget_execPostInit_Parms
{
};

// Function TgClientBase.TgGFxNativeWidget.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxNativeWidget_execInitialize_Parms
{
};

// Function TgClientBase.TgGFxNativeWidget.PreInit
// [0x00020400] ( FUNC_Native )
struct UTgGFxNativeWidget_execPreInit_Parms
{
};

// Function TgClientBase.TgGFxNativeWidget.UninitImpl
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxNativeWidget_execUninitImpl_Parms
{
};

// Function TgClientBase.TgGFxNativeWidget.InitImpl
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxNativeWidget_execInitImpl_Parms
{
	struct FString                                     sPath;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxNativeWidget.IsInitialized
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxNativeWidget_execIsInitialized_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGfxMainMenu.OnRedeemCodeResponse
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgGfxMainMenu_execOnRedeemCodeResponse_Parms
{
	class UTgPagePopup*                                pData;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FPopupResponse                              Response;                                         		// 0x0008 (0x0018) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxMainMenu.HandleInput
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgGfxMainMenu_execHandleInput_Parms
{
	struct FInputDetails                               Details;                                          		// 0x0000 (0x0020) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	TArray< class UGFxObject* >                        arrPathToFocus;                                   		// 0x0020 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGfxMainMenu.OnPopup
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgGfxMainMenu_execOnPopup_Parms
{
	class UTgPagePopup*                                pData;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FPopupResponse                              Response;                                         		// 0x0008 (0x0018) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxMainMenu.CloseScene
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxMainMenu_execCloseScene_Parms
{
};

// Function TgClientBase.TgGfxMainMenu.OnRefreshMenu
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxMainMenu_execOnRefreshMenu_Parms
{
	class UTgEventDataItem*                            pEventBase;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxMainMenu.OnTutorialUpdate
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxMainMenu_execOnTutorialUpdate_Parms
{
	class UTgEventDataItem*                            pEventBase;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxMainMenu.OnButtonFocus
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgGfxMainMenu_execOnButtonFocus_Parms
{
	struct FGFxEventData                               evtData;                                          		// 0x0000 (0x002C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function TgClientBase.TgGfxMainMenu.OnButtonClick
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgGfxMainMenu_execOnButtonClick_Parms
{
	struct FGFxEventData                               evtData;                                          		// 0x0000 (0x002C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function TgClientBase.TgGfxMainMenu.OnUpdateInterval
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxMainMenu_execOnUpdateInterval_Parms
{
	float                                              nDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxMainMenu.AnimateIn
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxMainMenu_execAnimateIn_Parms
{
};

// Function TgClientBase.TgGfxMainMenu.SetupButtons
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxMainMenu_execSetupButtons_Parms
{
};

// Function TgClientBase.TgGfxMainMenu.AutoPopulate
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxMainMenu_execAutoPopulate_Parms
{
};

// Function TgClientBase.TgGfxMainMenu.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxMainMenu_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxMainMenu.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxMainMenu_execInitialize_Parms
{
};

// Function TgClientBase.TgGfxMainMenu.HandleAction
// [0x00120000] 
struct UTgGfxMainMenu_execHandleAction_Parms
{
	struct Fdword                                      nAction;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerNameWidget.OnNameUpdate
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxPlayerNameWidget_eventOnNameUpdate_Parms
{
	unsigned long                                      bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class UGFxObject*                                  pForId;                                           		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sName;                                            		// 0x000C (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxPlayerNameWidget.USC_RequestName
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerNameWidget_execUSC_RequestName_Parms
{
	struct FString                                     sPlayerId;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sUserId;                                          		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nPortalType;                                      		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlayerNameWidget.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxPlayerNameWidget_execInitialize_Parms
{
};

// Function TgClientBase.TgGFxPriceData.ClearPrices
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPriceData_execClearPrices_Parms
{
};

// Function TgClientBase.TgGFxPriceData.SetData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPriceData_execSetData_Parms
{
	struct Fdword                                      nLTI;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct Fdword                                      nVendor;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxVendorItemData.Populate
// [0x00020400] ( FUNC_Native )
struct UTgGFxVendorItemData_execPopulate_Parms
{
};

// Function TgClientBase.TgGFxVendorItemData.SetData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxVendorItemData_execSetData_Parms
{
	struct Fdword                                      nLTI;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct Fdword                                      nVendorId;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxBundleData.Populate
// [0x00020400] ( FUNC_Native )
struct UTgGFxBundleData_execPopulate_Parms
{
};

// Function TgClientBase.TgSceneManager.asc_getScenesAsArray
// [0x00020802] ( FUNC_Event )
struct UTgSceneManager_eventasc_getScenesAsArray_Parms
{
	class UGFxObject*                                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgSceneManager.asc_pushSceneToFocusStack
// [0x00020802] ( FUNC_Event )
struct UTgSceneManager_eventasc_pushSceneToFocusStack_Parms
{
	struct FString                                     SceneName;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxObject*                                  modalObj;                                         		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  focusObj;                                         		// 0x0018 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSceneManager.asc_popSceneFromFocusStack
// [0x00020802] ( FUNC_Event )
struct UTgSceneManager_eventasc_popSceneFromFocusStack_Parms
{
	struct FString                                     SceneName;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgSceneManager.IsMouseCaptured
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSceneManager_execIsMouseCaptured_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgSceneManager.PopSceneFromFocusStack
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSceneManager_execPopSceneFromFocusStack_Parms
{
	struct FString                                     sSceneName;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgSceneManager.PushSceneToFocusStack
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgSceneManager_execPushSceneToFocusStack_Parms
{
	struct FString                                     sSceneName;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxObject*                                  pModal;                                           		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  pFocus;                                           		// 0x0018 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgSceneManager.HasDismissableScene
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSceneManager_execHasDismissableScene_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgSceneManager.DismissHighestScene
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSceneManager_execDismissHighestScene_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgSceneManager.ShowCharacterCard
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSceneManager_execShowCharacterCard_Parms
{
	int                                                nClassId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSceneManager.PopKeyCapture
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgSceneManager_execPopKeyCapture_Parms
{
	struct FString                                     sKeyName;                                         		// 0x0000 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgSceneManager.PushKeyCapture
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgSceneManager_execPushKeyCapture_Parms
{
	struct FString                                     sKeyName;                                         		// 0x0000 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgSceneManager.PopMouseCapture
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgSceneManager_execPopMouseCapture_Parms
{
	struct FString                                     sKeyName;                                         		// 0x0000 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgSceneManager.PushMouseCapture
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgSceneManager_execPushMouseCapture_Parms
{
	struct FString                                     sKeyName;                                         		// 0x0000 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgSceneManager.KillAllScenes
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSceneManager_execKillAllScenes_Parms
{
};

// Function TgClientBase.TgSceneManager.UnloadAllScenes
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgSceneManager_execUnloadAllScenes_Parms
{
	TArray< struct FString >                           arrExclusions;                                    		// 0x0000 (0x0010) [0x0000000000400092]              ( CPF_Const | CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bKill : 1;                                        		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgSceneManager.ConsumeLoadSceneData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSceneManager_execConsumeLoadSceneData_Parms
{
	struct FString                                     sSceneName;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UTgDataItem*                                 ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgSceneManager.GetLoadSceneData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSceneManager_execGetLoadSceneData_Parms
{
	struct FString                                     SceneName;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UTgDataItem*                                 ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgSceneManager.SetLoadPermissions
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSceneManager_execSetLoadPermissions_Parms
{
	struct Fdword                                      fPermiss;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSceneManager.IsSceneBlockingAcquisitions
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSceneManager_execIsSceneBlockingAcquisitions_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgSceneManager.IsSceneLoaded
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSceneManager_execIsSceneLoaded_Parms
{
	struct FString                                     SceneName;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgSceneManager.ListOpenScenes
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSceneManager_execListOpenScenes_Parms
{
};

// Function TgClientBase.TgSceneManager.ToggleScene
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgSceneManager_execToggleScene_Parms
{
	struct FString                                     SceneName;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UTgDataItem*                                 pLoadData;                                        		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgSceneManager.PreloadScene
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSceneManager_execPreloadScene_Parms
{
	struct FString                                     SceneName;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgSceneManager.UnloadScene
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSceneManager_execUnloadScene_Parms
{
	struct FString                                     SceneName;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgSceneManager.LoadScene
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgSceneManager_execLoadScene_Parms
{
	struct FString                                     SceneName;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UTgDataItem*                                 pLoadData;                                        		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgSceneManager.KillScene
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSceneManager_execKillScene_Parms
{
	struct FString                                     SceneName;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgSceneManager.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgSceneManager_execUninitialize_Parms
{
};

// Function TgClientBase.TgSceneManager.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgSceneManager_execInitialize_Parms
{
};

// Function TgClientBase.TgInitInterface.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgInitInterface_execUninitialize_Parms
{
};

// Function TgClientBase.TgInitInterface.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgInitInterface_execInitialize_Parms
{
};

// Function TgClientBase.TgSceneManagerInterface.HasDismissableScene
// [0x00020400] ( FUNC_Native )
struct UTgSceneManagerInterface_execHasDismissableScene_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgSceneManagerInterface.DismissHighestScene
// [0x00020400] ( FUNC_Native )
struct UTgSceneManagerInterface_execDismissHighestScene_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgSceneManagerInterface.PopSceneFromFocusStack
// [0x00020400] ( FUNC_Native )
struct UTgSceneManagerInterface_execPopSceneFromFocusStack_Parms
{
	struct FString                                     sSceneName;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgSceneManagerInterface.PushSceneToFocusStack
// [0x00024400] ( FUNC_Native )
struct UTgSceneManagerInterface_execPushSceneToFocusStack_Parms
{
	struct FString                                     sSceneName;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxObject*                                  pModal;                                           		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  pFocus;                                           		// 0x0018 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgSceneManagerInterface.PopKeyCapture
// [0x00024400] ( FUNC_Native )
struct UTgSceneManagerInterface_execPopKeyCapture_Parms
{
	class UGFxObject*                                  pOwner;                                           		// 0x0000 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgSceneManagerInterface.PushKeyCapture
// [0x00024400] ( FUNC_Native )
struct UTgSceneManagerInterface_execPushKeyCapture_Parms
{
	class UGFxObject*                                  pOwner;                                           		// 0x0000 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgSceneManagerInterface.PopMouseCapture
// [0x00024400] ( FUNC_Native )
struct UTgSceneManagerInterface_execPopMouseCapture_Parms
{
	class UGFxObject*                                  pOwner;                                           		// 0x0000 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgSceneManagerInterface.PushMouseCapture
// [0x00024400] ( FUNC_Native )
struct UTgSceneManagerInterface_execPushMouseCapture_Parms
{
	class UGFxObject*                                  pOwner;                                           		// 0x0000 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgSceneManagerInterface.ListOpenScenes
// [0x00020400] ( FUNC_Native )
struct UTgSceneManagerInterface_execListOpenScenes_Parms
{
};

// Function TgClientBase.TgSceneManagerInterface.IsSceneLoaded
// [0x00020400] ( FUNC_Native )
struct UTgSceneManagerInterface_execIsSceneLoaded_Parms
{
	struct FString                                     SceneName;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgSceneManagerInterface.UnloadAllScenes
// [0x00024400] ( FUNC_Native )
struct UTgSceneManagerInterface_execUnloadAllScenes_Parms
{
	TArray< struct FString >                           exclusionList;                                    		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bKill : 1;                                        		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgSceneManagerInterface.ToggleScene
// [0x00024400] ( FUNC_Native )
struct UTgSceneManagerInterface_execToggleScene_Parms
{
	struct FString                                     SceneName;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UTgDataItem*                                 pLoadData;                                        		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgSceneManagerInterface.UnloadScene
// [0x00020400] ( FUNC_Native )
struct UTgSceneManagerInterface_execUnloadScene_Parms
{
	struct FString                                     SceneName;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgSceneManagerInterface.LoadScene
// [0x00024400] ( FUNC_Native )
struct UTgSceneManagerInterface_execLoadScene_Parms
{
	struct FString                                     SceneName;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UTgDataItem*                                 pLoadData;                                        		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgSceneManagerInterface.KillScene
// [0x00020400] ( FUNC_Native )
struct UTgSceneManagerInterface_execKillScene_Parms
{
	struct FString                                     SceneName;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgIntervalInterface.GetIntervalManager
// [0x00020400] ( FUNC_Native )
struct UTgIntervalInterface_execGetIntervalManager_Parms
{
	class UTgIntervalManager*                          ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgIntervalManager.GetNextId
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgIntervalManager_execGetNextId_Parms
{
	struct FQWord                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgIntervalManager.ClearAll
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgIntervalManager_execClearAll_Parms
{
	class UObject*                                     pScope;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgIntervalManager.ClearTimeout
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgIntervalManager_execClearTimeout_Parms
{
	struct FTgIntervalHandle                           Handle;                                           		// 0x0000 (0x0010) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgIntervalManager.ClearInterval
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgIntervalManager_execClearInterval_Parms
{
	struct FTgIntervalHandle                           Handle;                                           		// 0x0000 (0x0010) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgIntervalManager.SetIntervalEx
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgIntervalManager_execSetIntervalEx_Parms
{
	float                                              nTimeSecs;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nRepeatCount;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             delCallback;                                      		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FTgIntervalHandle                           ReturnValue;                                      		// 0x0018 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgIntervalManager.SetInterval
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgIntervalManager_execSetInterval_Parms
{
	float                                              nTimeSecs;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             delCallback;                                      		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FTgIntervalHandle                           ReturnValue;                                      		// 0x0014 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgIntervalManager.SetTimeout
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgIntervalManager_execSetTimeout_Parms
{
	float                                              nTimeSecs;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             delCallback;                                      		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FTgIntervalHandle                           ReturnValue;                                      		// 0x0014 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgIntervalManager.IntervalDelegate
// [0x00120000] 
struct UTgIntervalManager_execIntervalDelegate_Parms
{
	float                                              nDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgDevMenuMoviePlayer.FilterButtonInput
// [0x00020802] ( FUNC_Event )
struct UTgDevMenuMoviePlayer_eventFilterButtonInput_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Event;                                            		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATgPlayerController*                      PlayerOwner;                                      		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function TgClientBase.TgDevMenuMoviePlayer.OnClose
// [0x00020802] ( FUNC_Event )
struct UTgDevMenuMoviePlayer_eventOnClose_Parms
{
};

// Function TgClientBase.TgDevMenuMoviePlayer.PostInit
// [0x00020002] 
struct UTgDevMenuMoviePlayer_execPostInit_Parms
{
};

// Function TgClientBase.TgDevMenuMoviePlayer.usc_FillCommands
// [0x00020002] 
struct UTgDevMenuMoviePlayer_execusc_FillCommands_Parms
{
	struct FString                                     MenuName;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgDevMenuMoviePlayer.AddSubMenu
// [0x00020400] ( FUNC_Native )
struct UTgDevMenuMoviePlayer_execAddSubMenu_Parms
{
	struct FString                                     Section;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     submenuname;                                      		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     DisplayName;                                      		// 0x0020 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgDevMenuMoviePlayer.AddCommand
// [0x00020400] ( FUNC_Native )
struct UTgDevMenuMoviePlayer_execAddCommand_Parms
{
	struct FString                                     Section;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Command;                                          		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     DisplayName;                                      		// 0x0020 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgDevMenuMoviePlayer.FillSubMenuCommands
// [0x00020400] ( FUNC_Native )
struct UTgDevMenuMoviePlayer_execFillSubMenuCommands_Parms
{
	struct FString                                     submenuname;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgDevMenuMoviePlayer.FillMenuCommands
// [0x00020400] ( FUNC_Native )
struct UTgDevMenuMoviePlayer_execFillMenuCommands_Parms
{
};

// Function TgClientBase.TgPagePopup.HandleResponse
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgPagePopup_execHandleResponse_Parms
{
	struct FPopupResponse                              Response;                                         		// 0x0000 (0x0018) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgPagePopup.RemoveCallback
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgPagePopup_execRemoveCallback_Parms
{
	class UObject*                                     pObject;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgPagePopup.SetCallback
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgPagePopup_execSetCallback_Parms
{
	struct FScriptDelegate                             delCallback;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgPagePopup.FillPopupData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgPagePopup_execFillPopupData_Parms
{
	class UGFxObject*                                  popupData;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgPagePopup.OnPopupDelegate
// [0x00520000] 
struct UTgPagePopup_execOnPopupDelegate_Parms
{
	class UTgPagePopup*                                pData;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FPopupResponse                              Response;                                         		// 0x0008 (0x0018) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgPlayerNameManager.GetLP
// [0x00020802] ( FUNC_Event )
struct UTgPlayerNameManager_eventGetLP_Parms
{
	class ULocalPlayer*                                ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UGFxMoviePlayer*                          Movie;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function TgClientBase.TgPlayerNameManager.GetLocalUserNum
// [0x00020802] ( FUNC_Event )
struct UTgPlayerNameManager_eventGetLocalUserNum_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UGFxMoviePlayer*                          Movie;                                            		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function TgClientBase.TgPlayerNameManager.IsPlayerMutedImpl
// [0x00020802] ( FUNC_Event )
struct UTgPlayerNameManager_eventIsPlayerMutedImpl_Parms
{
	struct FUniqueNetId                                ConsoleId;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgPlayerNameManager.UnmutePlayerImpl
// [0x00020802] ( FUNC_Event )
struct UTgPlayerNameManager_eventUnmutePlayerImpl_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                ConsoleId;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgPlayerNameManager.MutePlayerImpl
// [0x00020802] ( FUNC_Event )
struct UTgPlayerNameManager_eventMutePlayerImpl_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                ConsoleId;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgPlayerNameManager.GetPlayerNicknameFromInterface
// [0x00020802] ( FUNC_Event )
struct UTgPlayerNameManager_eventGetPlayerNicknameFromInterface_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// class ULocalPlayer*                             LocPlayer;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function TgClientBase.TgPlayerNameManager.ShowPlayerCardByUserNameImpl
// [0x00024802] ( FUNC_Event )
struct UTgPlayerNameManager_eventShowPlayerCardByUserNameImpl_Parms
{
	struct FString                                     UserName;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             completeCallback;                                 		// 0x0018 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ULocalPlayer*                             LocPlayer;                                        		// 0x002C (0x0008) [0x0000000000000000]              
	// struct FString                                  localPlayerUserName;                              		// 0x0034 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TgClientBase.TgPlayerNameManager.ShowPlayerCardImpl
// [0x00024802] ( FUNC_Event )
struct UTgPlayerNameManager_eventShowPlayerCardImpl_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             completeCallback;                                 		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ULocalPlayer*                             LocPlayer;                                        		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function TgClientBase.TgPlayerNameManager.UnregisterOSSFriends
// [0x00020802] ( FUNC_Event )
struct UTgPlayerNameManager_eventUnregisterOSSFriends_Parms
{
};

// Function TgClientBase.TgPlayerNameManager.RegisterOSSFriends
// [0x00020802] ( FUNC_Event )
struct UTgPlayerNameManager_eventRegisterOSSFriends_Parms
{
};

// Function TgClientBase.TgPlayerNameManager.ClearCachedOnlineProfiles
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgPlayerNameManager_execClearCachedOnlineProfiles_Parms
{
	struct Fdword                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgPlayerNameManager.IsOnline
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgPlayerNameManager_execIsOnline_Parms
{
	struct FTgPlayerId                                 pid;                                              		// 0x0000 (0x0024) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FPointer                                    pStateOwner;                                      		// 0x0024 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgPlayerNameManager.OnPlayerCardClosed
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgPlayerNameManager_execOnPlayerCardClosed_Parms
{
	unsigned long                                      bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgPlayerNameManager.IsPlayerMuted
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgPlayerNameManager_execIsPlayerMuted_Parms
{
	struct FTgPlayerId                                 pid;                                              		// 0x0000 (0x0024) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgPlayerNameManager.UnmutePlayer
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgPlayerNameManager_execUnmutePlayer_Parms
{
	struct FTgPlayerId                                 pid;                                              		// 0x0000 (0x0024) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgPlayerNameManager.MutePlayer
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgPlayerNameManager_execMutePlayer_Parms
{
	struct FTgPlayerId                                 pid;                                              		// 0x0000 (0x0024) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgPlayerNameManager.ShowPlayerCard
// [0x00424401] ( FUNC_Final | FUNC_Native )
struct UTgPlayerNameManager_execShowPlayerCard_Parms
{
	struct FTgPlayerId                                 pid;                                              		// 0x0000 (0x0024) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FScriptDelegate                             delComplete;                                      		// 0x0024 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0034 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgPlayerNameManager.GetLocalPlayer
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgPlayerNameManager_execGetLocalPlayer_Parms
{
	unsigned char                                      nIndex;                                           		// 0x0000 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FTgPlayerId                                 ReturnValue;                                      		// 0x0004 (0x0024) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgPlayerNameManager.CancelProfileRequests
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgPlayerNameManager_execCancelProfileRequests_Parms
{
	class UObject*                                     pOwner;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgPlayerNameManager.RequestProfileAsync
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgPlayerNameManager_execRequestProfileAsync_Parms
{
	struct FTgPlayerId                                 pid;                                              		// 0x0000 (0x0024) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FScriptDelegate                             delCallback;                                      		// 0x0024 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bWaitOnly : 1;                                    		// 0x0034 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bNoFilter : 1;                                    		// 0x0038 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x003C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgPlayerNameManager.RequestNamesByGFxPlayersAsync
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgPlayerNameManager_execRequestNamesByGFxPlayersAsync_Parms
{
	class UGFxObject*                                  arrPlayers;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             delCallback;                                      		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bWaitOnly : 1;                                    		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bNoFilter : 1;                                    		// 0x001C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgPlayerNameManager.HasUnfilteredNameFor
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgPlayerNameManager_execHasUnfilteredNameFor_Parms
{
	struct FTgPlayerId                                 Id;                                               		// 0x0000 (0x0024) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgPlayerNameManager.HasProfileFor
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgPlayerNameManager_execHasProfileFor_Parms
{
	struct FTgPlayerId                                 Id;                                               		// 0x0000 (0x0024) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgPlayerNameManager.HasNameFor
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgPlayerNameManager_execHasNameFor_Parms
{
	struct FTgPlayerId                                 Id;                                               		// 0x0000 (0x0024) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgPlayerNameManager.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgPlayerNameManager_execUninitialize_Parms
{
};

// Function TgClientBase.TgPlayerNameManager.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgPlayerNameManager_execInitialize_Parms
{
};

// Function TgClientBase.TgPlayerNameManager.SystemCall
// [0x00120000] 
struct UTgPlayerNameManager_execSystemCall_Parms
{
	unsigned long                                      bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgPlayerNameManager.NameRequestDelegate
// [0x00120000] 
struct UTgPlayerNameManager_execNameRequestDelegate_Parms
{
	unsigned long                                      bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class UTgPlayerNameManager*                        pManager;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgPlayerNameProcessor.Tick
// [0x00020400] ( FUNC_Native )
struct UTgPlayerNameProcessor_execTick_Parms
{
	float                                              nDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgPlayerNameProcessor.IsTickable
// [0x00020400] ( FUNC_Native )
struct UTgPlayerNameProcessor_execIsTickable_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgPlayerNameProcessor.RequestPlatformProfile
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgPlayerNameProcessor_execRequestPlatformProfile_Parms
{
	struct FString                                     sId;                                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             delCallback;                                      		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgPlayerNameProcessor.RequestMctsProfile
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgPlayerNameProcessor_execRequestMctsProfile_Parms
{
	struct Fdword                                      nId;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             delCallback;                                      		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bWaitOnly : 1;                                    		// 0x0014 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bNoFilter : 1;                                    		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgPlayerNameProcessor.RequestProfile
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgPlayerNameProcessor_execRequestProfile_Parms
{
	struct FTgPlayerId                                 pid;                                              		// 0x0000 (0x0024) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FScriptDelegate                             delCallback;                                      		// 0x0024 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bWaitOnly : 1;                                    		// 0x0034 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bNoFilter : 1;                                    		// 0x0038 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgPlayerNameProcessor.OnReadPlatformFriends
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgPlayerNameProcessor_execOnReadPlatformFriends_Parms
{
};

// Function TgClientBase.TgPlayerNameProcessor.ReceivePlatformInfo
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgPlayerNameProcessor_execReceivePlatformInfo_Parms
{
	unsigned long                                      bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	TArray< struct FString >                           arrIds;                                           		// 0x0004 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	TArray< struct FOnlineProfile >                    arrProfiles;                                      		// 0x0014 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgPlayerNameProcessor.ReceiveMctsInfo
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgPlayerNameProcessor_execReceiveMctsInfo_Parms
{
	struct Fdword                                      nPid;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTgUserId                                   Uid;                                              		// 0x0004 (0x000C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	struct FString                                     sFilter;                                          		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgPlayerNameProcessor.OnFilterResult
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgPlayerNameProcessor_execOnFilterResult_Parms
{
	struct FString                                     sOriginal;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sFiltered;                                        		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bTotalCensor : 1;                                 		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgPlayerNameProcessor.RequestPlatformProfiles
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgPlayerNameProcessor_execRequestPlatformProfiles_Parms
{
	TArray< struct FString >                           arrUids;                                          		// 0x0000 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgPlayerNameProcessor.Empty
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgPlayerNameProcessor_execEmpty_Parms
{
};

// Function TgClientBase.TgPlayerNameProcessor.Uninitialize
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgPlayerNameProcessor_execUninitialize_Parms
{
};

// Function TgClientBase.TgPlayerNameProcessor.Initialize
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgPlayerNameProcessor_execInitialize_Parms
{
};

// Function TgClientBase.TgPlayerNameProcessor.UnregisterOSS
// [0x00020802] ( FUNC_Event )
struct UTgPlayerNameProcessor_eventUnregisterOSS_Parms
{
};

// Function TgClientBase.TgPlayerNameProcessor.RegisterOSS
// [0x00020802] ( FUNC_Event )
struct UTgPlayerNameProcessor_eventRegisterOSS_Parms
{
};

// Function TgClientBase.TgPlayerNameProcessor.SubmitProfilesRequest
// [0x00420802] ( FUNC_Event )
struct UTgPlayerNameProcessor_eventSubmitProfilesRequest_Parms
{
	TArray< struct FString >                           arrPlayerIdStrings;                               		// 0x0000 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgPlayerNameProcessor.OnReadOnlinePlayerDataComplete
// [0x00020002] 
struct UTgPlayerNameProcessor_execOnReadOnlinePlayerDataComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	TArray< struct FString >                           PlayerIDs;                                        		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	TArray< struct FOnlineProfile >                    OnlineProfiles;                                   		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgPlayerNameProcessor.NameRequestDelegate
// [0x00120000] 
struct UTgPlayerNameProcessor_execNameRequestDelegate_Parms
{
	unsigned long                                      bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class UTgPlayerNameManager*                        pManager;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgPromptManager.RestoreButtonPrompts
// [0x00020802] ( FUNC_Event )
struct UTgPromptManager_eventRestoreButtonPrompts_Parms
{
};

// Function TgClientBase.TgPromptManager.CacheAndClearButtonPrompts
// [0x00020802] ( FUNC_Event )
struct UTgPromptManager_eventCacheAndClearButtonPrompts_Parms
{
};

// Function TgClientBase.TgPromptManager.UnsuppressGlobalPrompt
// [0x00020802] ( FUNC_Event )
struct UTgPromptManager_eventUnsuppressGlobalPrompt_Parms
{
	struct FString                                     sButtonDisplay;                                   		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxObject*                                  Owner;                                            		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgPromptManager.SuppressGlobalPrompt
// [0x00020802] ( FUNC_Event )
struct UTgPromptManager_eventSuppressGlobalPrompt_Parms
{
	struct FString                                     sButtonDisplay;                                   		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxObject*                                  Owner;                                            		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgPromptManager.ClearAllButtonPrompts
// [0x00020802] ( FUNC_Event )
struct UTgPromptManager_eventClearAllButtonPrompts_Parms
{
};

// Function TgClientBase.TgPromptManager.ClearButtonPrompt
// [0x00020802] ( FUNC_Event )
struct UTgPromptManager_eventClearButtonPrompt_Parms
{
	struct FString                                     sButtonDisplay;                                   		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgPromptManager.SetPrompts
// [0x00020802] ( FUNC_Event )
struct UTgPromptManager_eventSetPrompts_Parms
{
	TArray< class UGFxObject* >                        prompts;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgPromptManager.UpdateButtonPromptText
// [0x00020802] ( FUNC_Event )
struct UTgPromptManager_eventUpdateButtonPromptText_Parms
{
	struct FString                                     sButtonDisplay;                                   		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sPromptText;                                      		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgPromptManager.UpdateButtonPrompt
// [0x00020802] ( FUNC_Event )
struct UTgPromptManager_eventUpdateButtonPrompt_Parms
{
	struct FString                                     sButtonDisplay;                                   		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sPromptMsg;                                       		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgPromptManager.SetPrimaryDisplay
// [0x00020802] ( FUNC_Event )
struct UTgPromptManager_eventSetPrimaryDisplay_Parms
{
	class UGFxObject*                                  Clip;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSynchronizedTimer.IsPaused
// [0x00020400] ( FUNC_Native )
struct UTgSynchronizedTimer_execIsPaused_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgSynchronizedTimer.IsRunning
// [0x00020400] ( FUNC_Native )
struct UTgSynchronizedTimer_execIsRunning_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgSynchronizedTimer.EventCallback
// [0x00020400] ( FUNC_Native )
struct UTgSynchronizedTimer_execEventCallback_Parms
{
	int                                                nTimerId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eEvent;                                           		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSynchronizedTimer.ExpireTimer
// [0x00024400] ( FUNC_Native )
struct UTgSynchronizedTimer_execExpireTimer_Parms
{
	unsigned long                                      bFromCallback : 1;                                		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgSynchronizedTimer.UpdateTimer
// [0x00024400] ( FUNC_Native )
struct UTgSynchronizedTimer_execUpdateTimer_Parms
{
	float                                              fElapsed;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fTotal;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bPaused : 1;                                      		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bFromCallback : 1;                                		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgSynchronizedTimer.StartTimer
// [0x00020400] ( FUNC_Native )
struct UTgSynchronizedTimer_execStartTimer_Parms
{
	float                                              fSeconds;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgUIServerStates.GetDispatcher
// [0x00020400] ( FUNC_Native )
struct UTgUIServerStates_execGetDispatcher_Parms
{
	class UTgEventDispatcher*                          ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgUIServerStates.Update
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgUIServerStates_execUpdate_Parms
{
};

// Function TgClientBase.TgUIServerStates.IsQueuedToSpectate
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgUIServerStates_execIsQueuedToSpectate_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgUIServerStates.IsSpectating
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgUIServerStates_execIsSpectating_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgUIServerStates.IsInGame
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgUIServerStates_execIsInGame_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgUIServerStates.IsInMatch
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgUIServerStates_execIsInMatch_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgUIServerStates.IsInQueue
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgUIServerStates_execIsInQueue_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgUIServerStates.GetLastMatchId
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgUIServerStates_execGetLastMatchId_Parms
{
	struct Fdword                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgUIServerStates.GetCurrentQueueId
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgUIServerStates_execGetCurrentQueueId_Parms
{
	struct Fdword                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgUIServerStates.GetCurrentMatchId
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgUIServerStates_execGetCurrentMatchId_Parms
{
	struct Fdword                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgUIServerStates.SetPendingPrivilegeAllowed
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgUIServerStates_execSetPendingPrivilegeAllowed_Parms
{
	struct Fdword                                      nMatchId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgUIServerStates.SetPendingPrivilegeDenied
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgUIServerStates_execSetPendingPrivilegeDenied_Parms
{
	struct Fdword                                      nMatchId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgUIServerStates.StartPendingPrivilegeCheck
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgUIServerStates_execStartPendingPrivilegeCheck_Parms
{
	struct Fdword                                      nMatchId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgUIServerStates.SetSpectatingState
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgUIServerStates_execSetSpectatingState_Parms
{
	unsigned long                                      bSpectating : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgUIServerStates.SetMatchComplete
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgUIServerStates_execSetMatchComplete_Parms
{
	struct Fdword                                      nMatchId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgVirtualKeyboard.OnKeyboardInputComplete
// [0x00020002] 
struct UTgVirtualKeyboard_execOnKeyboardInputComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// unsigned char                                   nCancelled;                                       		// 0x0004 (0x0001) [0x0000000000000000]              
	// struct FString                                  OutStr;                                           		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TgClientBase.TgVirtualKeyboard.OnGFxVirtualKeyboard
// [0x00020002] 
struct UTgVirtualKeyboard_execOnGFxVirtualKeyboard_Parms
{
	unsigned long                                      bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     sText;                                            		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgVirtualKeyboard.ShowKeyboardUIGFx
// [0x00024A02] ( FUNC_Exec | FUNC_Event )
struct UTgVirtualKeyboard_execShowKeyboardUIGFx_Parms
{
	class UGFxObject*                                  FocusedTextField;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     TitleText;                                        		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     DescriptionText;                                  		// 0x0018 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bIsPassword : 1;                                  		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldValidate : 1;                              		// 0x002C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShowPopup : 1;                                   		// 0x0030 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     DefaultText;                                      		// 0x0034 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                MaxResultLength;                                  		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0048 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgVirtualKeyboard.usc_GetFocusedTextField
// [0x00020002] 
struct UTgVirtualKeyboard_execusc_GetFocusedTextField_Parms
{
	class UGFxObject*                                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgVirtualKeyboard.GetFocusedTextField
// [0x00020A02] ( FUNC_Exec | FUNC_Event )
struct UTgVirtualKeyboard_execGetFocusedTextField_Parms
{
	class UGFxObject*                                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgVirtualKeyboard.usc_IsShowingKeyboardUI
// [0x00020002] 
struct UTgVirtualKeyboard_execusc_IsShowingKeyboardUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgVirtualKeyboard.IsShowingKeyboardUI
// [0x00020A02] ( FUNC_Exec | FUNC_Event )
struct UTgVirtualKeyboard_execIsShowingKeyboardUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgVirtualKeyboard.ShowKeyboardUI
// [0x00024A02] ( FUNC_Exec | FUNC_Event )
struct UTgVirtualKeyboard_execShowKeyboardUI_Parms
{
	struct FScriptDelegate                             delCallback;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     TitleText;                                        		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     DescriptionText;                                  		// 0x0020 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bIsPassword : 1;                                  		// 0x0030 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldValidate : 1;                              		// 0x0034 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShowPopup : 1;                                   		// 0x0038 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     DefaultText;                                      		// 0x003C (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                MaxResultLength;                                  		// 0x004C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgVirtualKeyboard.HideKeyboardUI
// [0x00020A02] ( FUNC_Exec | FUNC_Event )
struct UTgVirtualKeyboard_execHideKeyboardUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgVirtualKeyboard.DoShowKeyboardUI
// [0x00024002] 
struct UTgVirtualKeyboard_execDoShowKeyboardUI_Parms
{
	struct FString                                     TitleText;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     DescriptionText;                                  		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bIsPassword : 1;                                  		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldValidate : 1;                              		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShowPopup : 1;                                   		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     DefaultText;                                      		// 0x002C (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                MaxResultLength;                                  		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0040 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgVirtualKeyboard.Cleanup
// [0x00020802] ( FUNC_Event )
struct UTgVirtualKeyboard_eventCleanup_Parms
{
};

// Function TgClientBase.TgVirtualKeyboard.InitOSSRef
// [0x00020802] ( FUNC_Event )
struct UTgVirtualKeyboard_eventInitOSSRef_Parms
{
	// class UOnlineSubsystem*                         TempOnlineSub;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function TgClientBase.TgVirtualKeyboard.BackupLog
// [0x00020400] ( FUNC_Native )
struct UTgVirtualKeyboard_execBackupLog_Parms
{
	struct FString                                     sText;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgVirtualKeyboard.SetInputPopupText
// [0x00020400] ( FUNC_Native )
struct UTgVirtualKeyboard_execSetInputPopupText_Parms
{
	struct FString                                     sText;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgVirtualKeyboard.HideInputPopup
// [0x00020400] ( FUNC_Native )
struct UTgVirtualKeyboard_execHideInputPopup_Parms
{
};

// Function TgClientBase.TgVirtualKeyboard.ShowInputPopup
// [0x00020400] ( FUNC_Native )
struct UTgVirtualKeyboard_execShowInputPopup_Parms
{
};

// Function TgClientBase.TgVirtualKeyboard.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgVirtualKeyboard_execUninitialize_Parms
{
};

// Function TgClientBase.TgVirtualKeyboard.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgVirtualKeyboard_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgVirtualKeyboard.OnVirtualKeyboard
// [0x00120000] 
struct UTgVirtualKeyboard_execOnVirtualKeyboard_Parms
{
	unsigned long                                      bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     sText;                                            		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgBlinder.Draw
// [0x00020400] ( FUNC_Native )
struct UTgBlinder_execDraw_Parms
{
	class UCanvas*                                     DestinationCanvas;                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              BlindnessFactor;                                  		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameHUD.LeaveSpamDetention
// [0x00020002] 
struct ATgGameHUD_execLeaveSpamDetention_Parms
{
};

// Function TgClientBase.TgGameHUD.SpamPrevention
// [0x00020002] 
struct ATgGameHUD_execSpamPrevention_Parms
{
};

// Function TgClientBase.TgGameHUD.ShowGodTargeter
// [0x00020002] 
struct ATgGameHUD_execShowGodTargeter_Parms
{
	unsigned long                                      bShow : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGameHUD.ShowTargetingMap
// [0x00020002] 
struct ATgGameHUD_execShowTargetingMap_Parms
{
	unsigned long                                      bShow : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UTgClientSettings*                        Settings;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FString                                  targetingMapSceneName;                            		// 0x000C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function TgClientBase.TgGameHUD.CheckForGameType
// [0x00020002] 
struct ATgGameHUD_execCheckForGameType_Parms
{
	// unsigned char                                   GameType;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function TgClientBase.TgGameHUD.InitializeUIData
// [0x00020802] ( FUNC_Event )
struct ATgGameHUD_eventInitializeUIData_Parms
{
	// unsigned char                                   GameType;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function TgClientBase.TgGameHUD.GetGameState
// [0x00020802] ( FUNC_Event )
struct ATgGameHUD_eventGetGameState_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned char                                   GameType;                                         		// 0x0004 (0x0001) [0x0000000000000000]              
};

// Function TgClientBase.TgGameHUD.UpdateMinimapFrame
// [0x00020202] ( FUNC_Exec )
struct ATgGameHUD_execUpdateMinimapFrame_Parms
{
};

// Function TgClientBase.TgGameHUD.HoverMap
// [0x00020202] ( FUNC_Exec )
struct ATgGameHUD_execHoverMap_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     MapName;                                          		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UTgMiniMap*                               Minimap;                                          		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function TgClientBase.TgGameHUD.PingMap
// [0x00820202] ( FUNC_Exec )
struct ATgGameHUD_execPingMap_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Type;                                             		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     MapName;                                          		// 0x0018 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// unsigned long                                   bHandled : 1;                                     		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FVector                                  WorldLoc;                                         		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FVector                                  mapLoc;                                           		// 0x0038 (0x000C) [0x0000000000000000]              
	// unsigned char                                   Pt;                                               		// 0x0044 (0x0001) [0x0000000000000000]              
	// TArray< class AReplicationInfo* >               repInfos;                                         		// 0x0048 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UTgMiniMap*                               Minimap;                                          		// 0x0058 (0x0008) [0x0000000000000000]              
};

// Function TgClientBase.TgGameHUD.GetMapByName
// [0x00020002] 
struct ATgGameHUD_execGetMapByName_Parms
{
	struct FString                                     MapName;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UTgMiniMap*                                  ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGameHUD.UpdateMMTimer
// [0x00020202] ( FUNC_Exec )
struct ATgGameHUD_execUpdateMMTimer_Parms
{
	float                                              fNew;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameHUD.HideOverlay
// [0x00020202] ( FUNC_Exec )
struct ATgGameHUD_execHideOverlay_Parms
{
};

// Function TgClientBase.TgGameHUD.ShowOverlay
// [0x00020202] ( FUNC_Exec )
struct ATgGameHUD_execShowOverlay_Parms
{
};

// Function TgClientBase.TgGameHUD.ToggleOverlay
// [0x00020202] ( FUNC_Exec )
struct ATgGameHUD_execToggleOverlay_Parms
{
};

// Function TgClientBase.TgGameHUD.ToggleMiniMap
// [0x00020A02] ( FUNC_Exec | FUNC_Event )
struct ATgGameHUD_execToggleMiniMap_Parms
{
};

// Function TgClientBase.TgGameHUD.HideMiniMap
// [0x00020B02] ( FUNC_Exec | FUNC_Event )
struct ATgGameHUD_execHideMiniMap_Parms
{
};

// Function TgClientBase.TgGameHUD.ShowMiniMap
// [0x00020B02] ( FUNC_Exec | FUNC_Event )
struct ATgGameHUD_execShowMiniMap_Parms
{
};

// Function TgClientBase.TgGameHUD.UpdateMiniMap
// [0x00020500] ( FUNC_Native )
struct ATgGameHUD_execUpdateMiniMap_Parms
{
};

// Function TgClientBase.TgGameHUD.DrawMiniMap
// [0x00020102] 
struct ATgGameHUD_execDrawMiniMap_Parms
{
	class UCanvas*                                     theCanvas;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameHUD.PreDemoRewind
// [0x00020902] ( FUNC_Event )
struct ATgGameHUD_eventPreDemoRewind_Parms
{
};

// Function TgClientBase.TgGameHUD.PostRender
// [0x00020802] ( FUNC_Event )
struct ATgGameHUD_eventPostRender_Parms
{
};

// Function TgClientBase.TgGameHUD.InitCapturePoints
// [0x00020002] 
struct ATgGameHUD_execInitCapturePoints_Parms
{
};

// Function TgClientBase.TgGameHUD.SetInitialState
// [0x00020902] ( FUNC_Event )
struct ATgGameHUD_eventSetInitialState_Parms
{
};

// Function TgClientBase.TgGameHUD.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATgGameHUD_eventPostBeginPlay_Parms
{
};

// Function TgClientBase.TgGameHUD.LeaveMapPingMode
// [0x00020802] ( FUNC_Event )
struct ATgGameHUD_eventLeaveMapPingMode_Parms
{
};

// Function TgClientBase.TgGameHUD.UpdateChatDCPriority
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdateChatDCPriority_Parms
{
};

// Function TgClientBase.TgGameHUD.OnInputAxis
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execOnInputAxis_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       Key;                                              		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Delta;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGameHUD.EnterMapPingMode
// [0x00020802] ( FUNC_Event )
struct ATgGameHUD_eventEnterMapPingMode_Parms
{
};

// Function TgClientBase.TgGameHUD.ShowCrosshair
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execShowCrosshair_Parms
{
	unsigned long                                      bShow : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGameHUD.Destroyed
// [0x00020802] ( FUNC_Event )
struct ATgGameHUD_eventDestroyed_Parms
{
};

// Function TgClientBase.TgGameHUD.PlayDeviceFailResponse
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execPlayDeviceFailResponse_Parms
{
	unsigned char                                      failType;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameHUD.OnRawInputKey
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execOnRawInputKey_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       Key;                                              		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Event;                                            		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              AmountDepressed;                                  		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGameHUD.SetGameTypeReady
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct ATgGameHUD_execSetGameTypeReady_Parms
{
	int                                                GameType;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameHUD.TogglePassiveMeter
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct ATgGameHUD_execTogglePassiveMeter_Parms
{
};

// Function TgClientBase.TgGameHUD.ToggleHudSection
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct ATgGameHUD_execToggleHudSection_Parms
{
	struct FString                                     SectionName;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGameHUD.NotifyInGame
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct ATgGameHUD_execNotifyInGame_Parms
{
};

// Function TgClientBase.TgGameHUD.ToggleHUD
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgGameHUD_execToggleHUD_Parms
{
};

// Function TgClientBase.TgGameHUD.GetVisibilityMode
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execGetVisibilityMode_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGameHUD.ToggleStoreDisplay
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execToggleStoreDisplay_Parms
{
	unsigned long                                      bShow : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGameHUD.HideFinalEOMScene
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execHideFinalEOMScene_Parms
{
};

// Function TgClientBase.TgGameHUD.HideEOMScene
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execHideEOMScene_Parms
{
};

// Function TgClientBase.TgGameHUD.FinishIntro
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execFinishIntro_Parms
{
};

// Function TgClientBase.TgGameHUD.PlayIntro
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execPlayIntro_Parms
{
};

// Function TgClientBase.TgGameHUD.ToggleViewSkipCinematic
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execToggleViewSkipCinematic_Parms
{
	unsigned long                                      bShow : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGameHUD.DoReportPlayerMutedImpl
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct ATgGameHUD_execDoReportPlayerMutedImpl_Parms
{
	float                                              nDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameHUD.ReportPlayerMuted
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct ATgGameHUD_execReportPlayerMuted_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameHUD.HideGameTip
// [0x00024400] ( FUNC_Native )
struct ATgGameHUD_execHideGameTip_Parms
{
	unsigned long                                      bNoSound : 1;                                     		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgGameHUD.ShowGameTip
// [0x00024400] ( FUNC_Native )
struct ATgGameHUD_execShowGameTip_Parms
{
	int                                                nTipId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bNoSound : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPopup : 1;                                       		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgGameHUD.SetWaypointPing
// [0x00424400] ( FUNC_Native )
struct ATgGameHUD_execSetWaypointPing_Parms
{
	unsigned long                                      bSetWaypointActive : 1;                           		// 0x0000 (0x0004) [0x0000000000000082] [0x00000001] ( CPF_Const | CPF_Parm )
	int                                                nWaypointId;                                      		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     vWaypointLoc;                                     		// 0x0008 (0x000C) [0x0000000000000092]              ( CPF_Const | CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgGameHUD.PingWorldLocation
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execPingWorldLocation_Parms
{
	struct FVector                                     PingLocation;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Type;                                             		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameHUD.PrecacheClass
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct ATgGameHUD_execPrecacheClass_Parms
{
	struct FString                                     godName;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     SkinName;                                         		// 0x0010 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGameHUD.TestAchievement
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgGameHUD_execTestAchievement_Parms
{
};

// Function TgClientBase.TgGameHUD.TestPrecache
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct ATgGameHUD_execTestPrecache_Parms
{
	int                                                nBotId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nSkinId;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bAll : 1;                                         		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgGameHUD.TestEquipLobbyPassiveItems
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgGameHUD_execTestEquipLobbyPassiveItems_Parms
{
	int                                                nItemId1;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nItemId2;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameHUD.TestEquipLobbyActiveItems
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgGameHUD_execTestEquipLobbyActiveItems_Parms
{
	int                                                nItemId1;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nItemId2;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameHUD.SetRecapMode
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execSetRecapMode_Parms
{
	unsigned long                                      bRecap : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGameHUD.GetRecapMode
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execGetRecapMode_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGameHUD.EndMission
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execEndMission_Parms
{
	unsigned long                                      bPlayerAttacker : 1;                              		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned char                                      finalWinState;                                    		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameHUD.UpdateItemStoreItems
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdateItemStoreItems_Parms
{
	class ATgRepInfo_Player*                           PRI;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGameHUD.UpdateScoreboard
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdateScoreboard_Parms
{
};

// Function TgClientBase.TgGameHUD.ToggleConsoleDeathRecap
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgGameHUD_execToggleConsoleDeathRecap_Parms
{
};

// Function TgClientBase.TgGameHUD.ToggleConsoleScoreBoard
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgGameHUD_execToggleConsoleScoreBoard_Parms
{
};

// Function TgClientBase.TgGameHUD.StartMapPingMode
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgGameHUD_execStartMapPingMode_Parms
{
};

// Function TgClientBase.TgGameHUD.StartVGS
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgGameHUD_execStartVGS_Parms
{
};

// Function TgClientBase.TgGameHUD.ToggleScoreboard
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgGameHUD_execToggleScoreboard_Parms
{
	unsigned long                                      bShow : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGameHUD.PlayTakeHit
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execPlayTakeHit_Parms
{
	struct FRotator                                    HitDir;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                nDamage;                                          		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameHUD.SellItem
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execSellItem_Parms
{
	int                                                nInventoryId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameHUD.UpgradeItem
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpgradeItem_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nUpgradeInvId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameHUD.PurchaseItem
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execPurchaseItem_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nAmount;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameHUD.CloseSkillScreen
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgGameHUD_execCloseSkillScreen_Parms
{
};

// Function TgClientBase.TgGameHUD.OpenSkillScreen
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgGameHUD_execOpenSkillScreen_Parms
{
};

// Function TgClientBase.TgGameHUD.OpenVendorUnit
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgGameHUD_execOpenVendorUnit_Parms
{
};

// Function TgClientBase.TgGameHUD.OpenVendorMenu
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgGameHUD_execOpenVendorMenu_Parms
{
};

// Function TgClientBase.TgGameHUD.DeviceChangeEvent
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execDeviceChangeEvent_Parms
{
	class ATgDevice*                                   Dev;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Event;                                            		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameHUD.UpdateReleaseTimeRemaining
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdateReleaseTimeRemaining_Parms
{
	float                                              fTimeRemaining;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameHUD.UpdateObjectiveKillCount
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdateObjectiveKillCount_Parms
{
	int                                                nObjectiveId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nTaskForceNum;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameHUD.UpdateObjectiveUI
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdateObjectiveUI_Parms
{
	struct FObjectiveSpawnData                         Data;                                             		// 0x0000 (0x0018) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameHUD.UpdatePlayerReady
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdatePlayerReady_Parms
{
	class ATgRepInfo_Player*                           PRI;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameHUD.UpdatePlayerStatUI
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdatePlayerStatUI_Parms
{
	class ATgPawn*                                     changedPawn;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGameHUD.UpdateGameTypeByQueue
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdateGameTypeByQueue_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGameHUD.UpdateTeamUI
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdateTeamUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGameHUD.UpdatePlayerVitalsUI
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdatePlayerVitalsUI_Parms
{
	class ATgPlayerController*                         PC;                                               		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGameHUD.UpdatePlayerPause
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdatePlayerPause_Parms
{
	class ATgRepInfo_Player*                           PRI;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGameHUD.UpdatePlayerSurrender
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdatePlayerSurrender_Parms
{
	class ATgRepInfo_Player*                           PRI;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGameHUD.UpdatePlayerInfoUI
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdatePlayerInfoUI_Parms
{
	class ATgRepInfo_Player*                           PRI;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGameHUD.UpdateGameCapturePointControlUI
// [0x00024400] ( FUNC_Native )
struct ATgGameHUD_execUpdateGameCapturePointControlUI_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGameHUD.UpdateGameScoreUI
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdateGameScoreUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGameHUD.UpdateGameClockUI
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdateGameClockUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGameHUD.UpdateBuildupTimer
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdateBuildupTimer_Parms
{
	class ATgDevice*                                   Dev;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameHUD.UpdateRefireTimer
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdateRefireTimer_Parms
{
	class ATgDevice*                                   Dev;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameHUD.UpdateHoverTarget
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdateHoverTarget_Parms
{
};

// Function TgClientBase.TgGameHUD.UpdateDebugDraws
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdateDebugDraws_Parms
{
};

// Function TgClientBase.TgGameHUD.UpdateOverlay
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdateOverlay_Parms
{
};

// Function TgClientBase.TgGameHUD.Uninit
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUninit_Parms
{
};

// Function TgClientBase.TgGameHUD.UninitOverlayMoviePlayer
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUninitOverlayMoviePlayer_Parms
{
};

// Function TgClientBase.TgGameHUD.InitOverlayMoviePlayer
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execInitOverlayMoviePlayer_Parms
{
};

// Function TgClientBase.TgGameHUD.UpdateGammaControls
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUpdateGammaControls_Parms
{
};

// Function TgClientBase.TgGameHUD.InitMainMoviePlayer
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execInitMainMoviePlayer_Parms
{
};

// Function TgClientBase.TgGameHUD.UnregisterEngineCallbacks
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execUnregisterEngineCallbacks_Parms
{
};

// Function TgClientBase.TgGameHUD.RegisterEngineCallbacks
// [0x00020400] ( FUNC_Native )
struct ATgGameHUD_execRegisterEngineCallbacks_Parms
{
};

// Function TgClientBase.TgGameHUDOverlay.RemoveReferencedClip
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGameHUDOverlay_execRemoveReferencedClip_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameHUDOverlay.AddReferencedClip
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGameHUDOverlay_execAddReferencedClip_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameHUDOverlay.OnGameUIEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGameHUDOverlay_execOnGameUIEvent_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameHUDOverlay.Uninitialize
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGameHUDOverlay_execUninitialize_Parms
{
};

// Function TgClientBase.TgGameHUDOverlay.Initialize
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGameHUDOverlay_execInitialize_Parms
{
};

// Function TgClientBase.TgGameHUDOverlay.usc_TweenFinished
// [0x00020400] ( FUNC_Native )
struct UTgGameHUDOverlay_execusc_TweenFinished_Parms
{
	class UGFxObject*                                  Obj;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameHUDOverlay.ForceRebuildOverlays
// [0x00020400] ( FUNC_Native )
struct UTgGameHUDOverlay_execForceRebuildOverlays_Parms
{
};

// Function TgClientBase.TgDataGroup_Game.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgDataGroup_Game_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_Chat.TokenReplace
// [0x00020802] ( FUNC_Event )
struct UTgGameDC_Chat_eventTokenReplace_Parms
{
	struct FString                                     Message;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Token;                                            		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sValue;                                           		// 0x0020 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x0030 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGameDC_Chat.SubmitDeferredMessages
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgGameDC_Chat_execSubmitDeferredMessages_Parms
{
	int                                                nChannel;                                         		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgGameDC_Chat.PlayVGSSound
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGameDC_Chat_execPlayVGSSound_Parms
{
	int                                                nMsgId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPackId;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nBotId;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nSkinId;                                          		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     customSuffix;                                     		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGameDC_Chat.PlayMessageSound
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgGameDC_Chat_execPlayMessageSound_Parms
{
	int                                                nMsgId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPackId;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ePriority;                                        		// 0x0008 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgGameDC_Chat.AddDeferredMessage
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGameDC_Chat_execAddDeferredMessage_Parms
{
	class UTgChatData*                                 pData;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_Chat.AddNotifyMsg
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgGameDC_Chat_execAddNotifyMsg_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bIsMain : 1;                                      		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                nDelay;                                           		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nColor;                                           		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                nSize;                                            		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                nFill;                                            		// 0x0020 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgGameDC_Chat.AddAlert
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGameDC_Chat_execAddAlert_Parms
{
	struct FString                                     Message;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGameDC_Chat.UpdateMessageSoundQueue
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGameDC_Chat_execUpdateMessageSoundQueue_Parms
{
};

// Function TgClientBase.TgGameDC_Chat.AddPopupMsg
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGameDC_Chat_execAddPopupMsg_Parms
{
	struct FString                                     msg;                                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGameDC_Chat.AddCombatMsg
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGameDC_Chat_execAddCombatMsg_Parms
{
	struct FString                                     msg;                                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGameDC_Chat.AddLocalChatMsg
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgGameDC_Chat_execAddLocalChatMsg_Parms
{
	struct FString                                     msg;                                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     senderName;                                       		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bIsMapPing : 1;                                   		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgGameDC_Chat.AddChatMsg
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgGameDC_Chat_execAddChatMsg_Parms
{
	struct FString                                     msg;                                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     senderName;                                       		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nTime;                                            		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nChannel;                                         		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsFeedback : 1;                                  		// 0x0028 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bIsVGS : 1;                                       		// 0x002C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bOnlyIfOpen : 1;                                  		// 0x0030 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bHideSender : 1;                                  		// 0x0034 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bNew : 1;                                         		// 0x0038 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgGameDC_Chat.UpdatePriorityQueue
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Chat_execUpdatePriorityQueue_Parms
{
	float                                              Delay;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_Chat.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Chat_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_Device.usc_set_cast_mode
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Device_execusc_set_cast_mode_Parms
{
	int                                                nCastMode;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_Device.usc_get_mode_tooltip
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Device_execusc_get_mode_tooltip_Parms
{
	int                                                nRank;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_Device.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Device_execNotifyMapChange_Parms
{
};

// Function TgClientBase.TgGameDC_Device.UpdateCastMode
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Device_execUpdateCastMode_Parms
{
};

// Function TgClientBase.TgGameDC_Device.UpdateIcon
// [0x00024400] ( FUNC_Native )
struct UTgGameDC_Device_execUpdateIcon_Parms
{
	class ATgDevice*                                   Dev;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ForceUpdate : 1;                                  		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgGameDC_Device.UpdateInstanceCount
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Device_execUpdateInstanceCount_Parms
{
	class ATgDevice*                                   Dev;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_Device.UpdateHasBeenTrained
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Device_execUpdateHasBeenTrained_Parms
{
	class ATgDevice*                                   Dev;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_Device.UpdatePtsAlloc
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Device_execUpdatePtsAlloc_Parms
{
	class ATgDevice*                                   Dev;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_Device.UpdateToggleState
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Device_execUpdateToggleState_Parms
{
	class ATgDevice*                                   Dev;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_Device.UpdateCooldown
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Device_execUpdateCooldown_Parms
{
	class ATgDevice*                                   Dev;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_Device.UpdateCanFire
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Device_execUpdateCanFire_Parms
{
	class ATgDevice*                                   Dev;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_Device.UpdateSelected
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Device_execUpdateSelected_Parms
{
	unsigned long                                      bSelected : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_Device.UpdateRelicValues
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Device_execUpdateRelicValues_Parms
{
	class ATgDevice*                                   Dev;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_Device.UpdateValues
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Device_execUpdateValues_Parms
{
	class ATgDevice*                                   Dev;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_Device.DeviceChangeEvent
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Device_execDeviceChangeEvent_Parms
{
	class ATgDevice*                                   Dev;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Event;                                            		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_Device.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Device_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_DeviceList.SetEmpty
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_DeviceList_execSetEmpty_Parms
{
	unsigned char                                      eSlot;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_DeviceList.UpdatePtsAlloc
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_DeviceList_execUpdatePtsAlloc_Parms
{
	class ATgDevice*                                   Dev;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_DeviceList.UpdateToggleState
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_DeviceList_execUpdateToggleState_Parms
{
	class ATgDevice*                                   Dev;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_DeviceList.UpdateSelected
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_DeviceList_execUpdateSelected_Parms
{
	class ATgDevice*                                   Dev;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_DeviceList.UpdateDevice
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_DeviceList_execUpdateDevice_Parms
{
	class ATgDevice*                                   Dev;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_DeviceList.DeviceChangeEvent
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_DeviceList_execDeviceChangeEvent_Parms
{
	class ATgDevice*                                   Dev;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Event;                                            		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_DeviceList.GetDeviceChunk
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_DeviceList_execGetDeviceChunk_Parms
{
	class ATgDevice*                                   Dev;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgGameDC_Device*                            ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGameDC_DeviceList.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_DeviceList_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_Effect.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Effect_execNotifyMapChange_Parms
{
};

// Function TgClientBase.TgGameDC_Effect.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Effect_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_EffectList.UpdateEffects
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_EffectList_execUpdateEffects_Parms
{
	class ATgEffectManager*                            effectManager;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                indexChanged;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_EffectList.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_EffectList_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_Game.OnTaskForceDataUpdate
// [0x00020802] ( FUNC_Event )
struct UTgGameDC_Game_eventOnTaskForceDataUpdate_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_Game.SetupTaskForceData
// [0x00020802] ( FUNC_Event )
struct UTgGameDC_Game_eventSetupTaskForceData_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_Game.asc_OnTaskForceDataUpdate
// [0x00020003] ( FUNC_Final )
struct UTgGameDC_Game_execasc_OnTaskForceDataUpdate_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_Game.asc_SetupTaskForceData
// [0x00020003] ( FUNC_Final )
struct UTgGameDC_Game_execasc_SetupTaskForceData_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_Game.OnRankedTeamUpdate
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Game_execOnRankedTeamUpdate_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_Game.OnFogNextPhase
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Game_execOnFogNextPhase_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_Game.OnFogGrowTime
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Game_execOnFogGrowTime_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_Game.OnTaskForceUpdate
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Game_execOnTaskForceUpdate_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_Game.OnPauseTimerUpdate
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Game_execOnPauseTimerUpdate_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_Game.OnSurrenderTimerUpdate
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Game_execOnSurrenderTimerUpdate_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_Game.OnRoundUIUpdate
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Game_execOnRoundUIUpdate_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_Game.UpdateGame
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Game_execUpdateGame_Parms
{
	class ATgRepInfo_Game*                             GameRepInfo;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGameDC_Game.UpdateRound
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Game_execUpdateRound_Parms
{
	int                                                nRound;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_Game.UpdateEncounter
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Game_execUpdateEncounter_Parms
{
	struct FString                                     sRoundString;                                     		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGameDC_Game.UpdateGameCapturePoint
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Game_execUpdateGameCapturePoint_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                TaskForce;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_Game.UpdateGameClock
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Game_execUpdateGameClock_Parms
{
};

// Function TgClientBase.TgGameDC_Game.UpdatePauseStatus
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Game_execUpdatePauseStatus_Parms
{
};

// Function TgClientBase.TgGameDC_Game.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Game_execNotifyMapChange_Parms
{
};

// Function TgClientBase.TgGameDC_Game.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Game_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_MapEntity.SetBotSpecificData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGameDC_MapEntity_execSetBotSpecificData_Parms
{
	int                                                nBotId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_MapEntity.SetObjectiveData
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgGameDC_MapEntity_execSetObjectiveData_Parms
{
	class ATgPawn*                                     PRI;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sEntityName;                                      		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                nLane;                                            		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShow : 1;                                        		// 0x001C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGameDC_MapEntity.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_MapEntity_execNotifyMapChange_Parms
{
};

// Function TgClientBase.TgGameDC_MapEntity.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_MapEntity_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_Player.IsPlayerMuted
// [0x00020802] ( FUNC_Event )
struct UTgGameDC_Player_eventIsPlayerMuted_Parms
{
	struct FUniqueNetId                                ConsoleId;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UOnlineSubsystem*                         OnlineSub;                                        		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function TgClientBase.TgGameDC_Player.USC_ForceStatsUpdate
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Player_execUSC_ForceStatsUpdate_Parms
{
};

// Function TgClientBase.TgGameDC_Player.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Player_execNotifyMapChange_Parms
{
};

// Function TgClientBase.TgGameDC_Player.UpdateItemStoreItems
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Player_execUpdateItemStoreItems_Parms
{
	class ATgRepInfo_Player*                           PRI;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_Player.UpdateStats
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Player_execUpdateStats_Parms
{
	class ATgPawn*                                     changedPawn;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_Player.UpdatePlayer
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Player_execUpdatePlayer_Parms
{
	class ATgRepInfo_Player*                           PRI;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_Player.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Player_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_LocalPlayer.UpdateTutorialOptions
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGameDC_LocalPlayer_execUpdateTutorialOptions_Parms
{
	unsigned long                                      bDisableSkills : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bDisableStore : 1;                                		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bDisableActives : 1;                              		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_LocalPlayer.PostDataUpdatedEvent
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_LocalPlayer_execPostDataUpdatedEvent_Parms
{
};

// Function TgClientBase.TgGameDC_LocalPlayer.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_LocalPlayer_execNotifyMapChange_Parms
{
};

// Function TgClientBase.TgGameDC_LocalPlayer.UpdateCourierData
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_LocalPlayer_execUpdateCourierData_Parms
{
	class ATgPawn*                                     Pawn;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_LocalPlayer.UpdateSpectatorViewTarget
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_LocalPlayer_execUpdateSpectatorViewTarget_Parms
{
	class UTgGameDC_MapEntity*                         entity;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_LocalPlayer.SetVendorItemList
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_LocalPlayer_execSetVendorItemList_Parms
{
	TArray< int >                                      nItemIds;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGameDC_LocalPlayer.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_LocalPlayer_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_PlayerStats.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_PlayerStats_execNotifyMapChange_Parms
{
};

// Function TgClientBase.TgGameDC_PlayerStats.UpdateStats
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_PlayerStats_execUpdateStats_Parms
{
	class ATgPawn*                                     changedPawn;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_PlayerStats.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_PlayerStats_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_PlayerVitals.UpdatePawnVitals
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGameDC_PlayerVitals_execUpdatePawnVitals_Parms
{
	class ATgPawn_Character*                           Pawn;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_PlayerVitals.OnDamageEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGameDC_PlayerVitals_execOnDamageEvent_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_PlayerVitals.CheckObjectivePawnSetup
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGameDC_PlayerVitals_execCheckObjectivePawnSetup_Parms
{
	struct Fdword                                      nPawnId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_PlayerVitals.SetNearestObjective
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGameDC_PlayerVitals_execSetNearestObjective_Parms
{
	class ATgPawn*                                     pPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_PlayerVitals.UpdateCoreStats
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGameDC_PlayerVitals_execUpdateCoreStats_Parms
{
};

// Function TgClientBase.TgGameDC_PlayerVitals.UpdateDamageDealt
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGameDC_PlayerVitals_execUpdateDamageDealt_Parms
{
};

// Function TgClientBase.TgGameDC_PlayerVitals.UpdateDamageTaken
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGameDC_PlayerVitals_execUpdateDamageTaken_Parms
{
};

// Function TgClientBase.TgGameDC_PlayerVitals.UpdateDamageRecap
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGameDC_PlayerVitals_execUpdateDamageRecap_Parms
{
};

// Function TgClientBase.TgGameDC_PlayerVitals.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_PlayerVitals_execNotifyMapChange_Parms
{
};

// Function TgClientBase.TgGameDC_PlayerVitals.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_PlayerVitals_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_Tower.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Tower_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_Target.UpdateTarget
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Target_execUpdateTarget_Parms
{
	class AActor*                                      NewTarget;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bHovered : 1;                                     		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGameDC_Target.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Target_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_Team.PostDataUpdatedEvent
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Team_execPostDataUpdatedEvent_Parms
{
};

// Function TgClientBase.TgGameDC_Team.SetupMemberData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGameDC_Team_execSetupMemberData_Parms
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGameDC_Team.UpdateMembersTick
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGameDC_Team_execUpdateMembersTick_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGameDC_Team.FindTower
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgGameDC_Team_execFindTower_Parms
{
	int                                                nPawnId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nNextIndex;                                       		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UTgGameDC_Tower*                             ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGameDC_Team.FindPlayer
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGameDC_Team_execFindPlayer_Parms
{
	int                                                nPawnId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPlayerCount;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgGameDC_Player*                            ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGameDC_Team.ParseUpdatablePlayers
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgGameDC_Team_execParseUpdatablePlayers_Parms
{
	class ATgRepInfo_TaskForce*                        tfri;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	TArray< class ATgRepInfo_Player* >                 arrPlayers;                                       		// 0x0008 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGameDC_Team.UpdatePlayerPause
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGameDC_Team_execUpdatePlayerPause_Parms
{
	class ATgRepInfo_Player*                           PRI;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGameDC_Team.UpdatePlayerSurrender
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGameDC_Team_execUpdatePlayerSurrender_Parms
{
	class ATgRepInfo_Player*                           PRI;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGameDC_Team.UpdatePlayerItemStoreItems
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGameDC_Team_execUpdatePlayerItemStoreItems_Parms
{
	class ATgRepInfo_Player*                           PRI;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGameDC_Team.UpdatePlayerStat
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGameDC_Team_execUpdatePlayerStat_Parms
{
	class ATgPawn*                                     changedPawn;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGameDC_Team.UpdateTaskForce
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGameDC_Team_execUpdateTaskForce_Parms
{
	class ATgRepInfo_TaskForce*                        tfri;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGameDC_Team.UpdateMembers
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGameDC_Team_execUpdateMembers_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGameDC_Team.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Team_execNotifyMapChange_Parms
{
};

// Function TgClientBase.TgGameDC_Team.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgGameDC_Team_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxHomeMenuScreen.UpdateSimulmediaOpportunities
// [0x00020802] ( FUNC_Event )
struct UTgGFxHomeMenuScreen_eventUpdateSimulmediaOpportunities_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxHomeMenuScreen.RemoveSimulmediaDelegate
// [0x00020802] ( FUNC_Event )
struct UTgGFxHomeMenuScreen_eventRemoveSimulmediaDelegate_Parms
{
};

// Function TgClientBase.TgGFxHomeMenuScreen.SetOnPostAdvanceDelegate
// [0x00020802] ( FUNC_Event )
struct UTgGFxHomeMenuScreen_eventSetOnPostAdvanceDelegate_Parms
{
};

// Function TgClientBase.TgGFxHomeMenuScreen.OnSimulmediaPopupClosed
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxHomeMenuScreen_execOnSimulmediaPopupClosed_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxHomeMenuScreen.OnSimulmediaPopupOpened
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxHomeMenuScreen_execOnSimulmediaPopupOpened_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxHomeMenuScreen.OnEsportsMatchupDataReceived
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxHomeMenuScreen_execOnEsportsMatchupDataReceived_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxHomeMenuScreen.OnQueueStateChange
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxHomeMenuScreen_execOnQueueStateChange_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxHomeMenuScreen.USC_ForwardFeature
// [0x00020400] ( FUNC_Native )
struct UTgGFxHomeMenuScreen_execUSC_ForwardFeature_Parms
{
	int                                                pItemType;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     pItemData;                                        		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     pItemData2;                                       		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nLocationId;                                      		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxHomeMenuScreen.FindNavigationButton
// [0x00024400] ( FUNC_Native )
struct UTgGFxHomeMenuScreen_execFindNavigationButton_Parms
{
	int                                                hmiActionId;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                hmiActionDataId;                                  		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UTgGFxObject*                                ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxHomeMenuScreen.OnOpportunityUpdated
// [0x00020400] ( FUNC_Native )
struct UTgGFxHomeMenuScreen_execOnOpportunityUpdated_Parms
{
};

// Function TgClientBase.TgGFxHomeMenuScreen.SendLobbyCamEvent
// [0x00020400] ( FUNC_Native )
struct UTgGFxHomeMenuScreen_execSendLobbyCamEvent_Parms
{
	int                                                EventType;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                camType;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxHomeMenuScreen.UpdateQuests
// [0x00020400] ( FUNC_Native )
struct UTgGFxHomeMenuScreen_execUpdateQuests_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxHomeMenuScreen.onFinishModelLoad
// [0x00020400] ( FUNC_Native )
struct UTgGFxHomeMenuScreen_execonFinishModelLoad_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxHomeMenuScreen.UpdatePreviewModel
// [0x00020400] ( FUNC_Native )
struct UTgGFxHomeMenuScreen_execUpdatePreviewModel_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxHomeMenuScreen.UpdateImage
// [0x00020400] ( FUNC_Native )
struct UTgGFxHomeMenuScreen_execUpdateImage_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxHomeMenuScreen.UpdateFeatures
// [0x00020400] ( FUNC_Native )
struct UTgGFxHomeMenuScreen_execUpdateFeatures_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxHomeMenuScreen.UpdateCallouts
// [0x00020400] ( FUNC_Native )
struct UTgGFxHomeMenuScreen_execUpdateCallouts_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxHomeMenuScreen.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGFxHomeMenuScreen_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxHomeMenuScreen.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxHomeMenuScreen_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxHomeMenuScreen.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxHomeMenuScreen_execInitialize_Parms
{
	class UTgMoviePlayer*                              pMoviePlayer;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxHomeMenuScreen.ApplyGemPrices
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxHomeMenuScreen_execApplyGemPrices_Parms
{
	class UGFxObject*                                  pArray;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxHomeMenuScreen.OnNavigateButton
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxHomeMenuScreen_execOnNavigateButton_Parms
{
	unsigned long                                      isMenu : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                Index;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxHomeMenuScreen.UpdateMenuButtons
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxHomeMenuScreen_execUpdateMenuButtons_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxHomeMenuScreen.PopulateMenuData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxHomeMenuScreen_execPopulateMenuData_Parms
{
};

// Function TgClientBase.TgGfxHudChatBase.ShouldShowCombat
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxHudChatBase_execShouldShowCombat_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGfxHudChatBase.CachePrivilegeInfo
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxHudChatBase_execCachePrivilegeInfo_Parms
{
};

// Function TgClientBase.TgGfxHudChatBase.CanSeeUserMessages
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxHudChatBase_execCanSeeUserMessages_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGfxHudChatBase.OnGameUIEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxHudChatBase_execOnGameUIEvent_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxHudChatBase.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxHudChatBase_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxHudChatBase.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxHudChatBase_execInitialize_Parms
{
	class UTgMoviePlayer*                              pMP;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxPlayerSkills.OnDeviceLevelUp
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxPlayerSkills_execOnDeviceLevelUp_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxPlayerSkills.OnToggleSkillScreen
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxPlayerSkills_execOnToggleSkillScreen_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxPlayerSkills.OnOffhandSlotReleased
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxPlayerSkills_execOnOffhandSlotReleased_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxPlayerSkills.OnOffhandSlotPressed
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxPlayerSkills_execOnOffhandSlotPressed_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxPlayerSkills.OnInput
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxPlayerSkills_execOnInput_Parms
{
	struct FPointer                                    pInputEvent;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGfxPlayerSkills.LevelUpOffhandSlot
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxPlayerSkills_execLevelUpOffhandSlot_Parms
{
	int                                                eqp;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ATgPlayerController*                         PC;                                               		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxPlayerSkills.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxPlayerSkills_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxPlayerSkills.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxPlayerSkills_execInitialize_Parms
{
	class UTgMoviePlayer*                              pMP;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxVGS.OnInput
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxVGS_execOnInput_Parms
{
	struct FPointer                                    tgInput;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGfxVGS.usc_CloseScene
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxVGS_execusc_CloseScene_Parms
{
};

// Function TgClientBase.TgGfxVGS.usc_UnsetVGS
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgGfxVGS_execusc_UnsetVGS_Parms
{
	unsigned long                                      bRemoveInput : 1;                                 		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgGfxVGS.usc_ForceInput
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxVGS_execusc_ForceInput_Parms
{
	struct FString                                     Input;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGfxVGS.CloseVGS
// [0x00020400] ( FUNC_Native )
struct UTgGfxVGS_execCloseVGS_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxVGS.Unset
// [0x00020400] ( FUNC_Native )
struct UTgGfxVGS_execUnset_Parms
{
};

// Function TgClientBase.TgGfxVGS.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxVGS_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxVGS.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxVGS_execInitialize_Parms
{
	class UTgMoviePlayer*                              pMP;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxVGS.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxVGS_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMiniMap.CheckSpectatorState
// [0x00020902] ( FUNC_Event )
struct UTgMiniMap_eventCheckSpectatorState_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ATgSpectatorController*                   SpectatorController;                              		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function TgClientBase.TgMiniMap.UpdateMapSize
// [0x00020102] 
struct UTgMiniMap_execUpdateMapSize_Parms
{
	int                                                newX;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMiniMap.UpdateMiniMapTexture
// [0x00020102] 
struct UTgMiniMap_execUpdateMiniMapTexture_Parms
{
	// class UTexture2D*                               mmTexture;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function TgClientBase.TgMiniMap.CreateMiniMapTexture
// [0x00820102] 
struct UTgMiniMap_execCreateMiniMapTexture_Parms
{
	// struct FLinearColor                             LC_Friendly;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FLinearColor                             LC_Enemy;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FLinearColor                             LC_Friendly_CB;                                   		// 0x0020 (0x0010) [0x0000000000000000]              
	// struct FLinearColor                             LC_Enemy_CB;                                      		// 0x0030 (0x0010) [0x0000000000000000]              
	// struct FLinearColor                             LC_Outline_Oni;                                   		// 0x0040 (0x0010) [0x0000000000000000]              
	// struct FLinearColor                             LC_Outline_Oni_CB;                                		// 0x0050 (0x0010) [0x0000000000000000]              
};

// Function TgClientBase.TgMiniMap.RemoveAllEntities
// [0x00020400] ( FUNC_Native )
struct UTgMiniMap_execRemoveAllEntities_Parms
{
};

// Function TgClientBase.TgMiniMap.VerifyMapLocation
// [0x00020400] ( FUNC_Native )
struct UTgMiniMap_execVerifyMapLocation_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMiniMap.GetRepInfosForLocation
// [0x00420400] ( FUNC_Native )
struct UTgMiniMap_execGetRepInfosForLocation_Parms
{
	struct FVector                                     mapLoc;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	TArray< class AReplicationInfo* >                  repInfos;                                         		// 0x000C (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgMiniMap.WorldToMap
// [0x00020400] ( FUNC_Native )
struct UTgMiniMap_execWorldToMap_Parms
{
	struct FVector                                     Loc;                                              		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMiniMap.MapToWorld
// [0x00020400] ( FUNC_Native )
struct UTgMiniMap_execMapToWorld_Parms
{
	struct FVector                                     Loc;                                              		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMiniMap.ClearHover
// [0x00020400] ( FUNC_Native )
struct UTgMiniMap_execClearHover_Parms
{
};

// Function TgClientBase.TgMiniMap.HoverMap
// [0x00020400] ( FUNC_Native )
struct UTgMiniMap_execHoverMap_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMiniMap.PingMap
// [0x00020400] ( FUNC_Native )
struct UTgMiniMap_execPingMap_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Pt;                                               		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMiniMap.ShouldRender
// [0x00020400] ( FUNC_Native )
struct UTgMiniMap_execShouldRender_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgMiniMap.RemoveWaypoint
// [0x00020400] ( FUNC_Native )
struct UTgMiniMap_execRemoveWaypoint_Parms
{
	int                                                nWaypointId;                                      		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
};

// Function TgClientBase.TgMiniMap.PlaceWaypoint
// [0x00420400] ( FUNC_Native )
struct UTgMiniMap_execPlaceWaypoint_Parms
{
	int                                                nWaypointId;                                      		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     vWaypointLoc;                                     		// 0x0004 (0x000C) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
};

// Function TgClientBase.TgMiniMap.SetWaypointPing
// [0x00424400] ( FUNC_Native )
struct UTgMiniMap_execSetWaypointPing_Parms
{
	unsigned long                                      bSetWaypointActive : 1;                           		// 0x0000 (0x0004) [0x0000000000000082] [0x00000001] ( CPF_Const | CPF_Parm )
	int                                                nWaypointId;                                      		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     vWaypointLoc;                                     		// 0x0008 (0x000C) [0x0000000000000092]              ( CPF_Const | CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgMiniMap.PingWorldLocation
// [0x00020400] ( FUNC_Native )
struct UTgMiniMap_execPingWorldLocation_Parms
{
	struct FVector                                     PingLocation;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Pt;                                               		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMiniMap.Init
// [0x00020400] ( FUNC_Native )
struct UTgMiniMap_execInit_Parms
{
	class ATgPlayerController*                         PC;                                               		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMiniMap.Draw
// [0x00020400] ( FUNC_Native )
struct UTgMiniMap_execDraw_Parms
{
	class UCanvas*                                     theCanvas;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgMiniMap.UpdateThreaded
// [0x00020400] ( FUNC_Native )
struct UTgMiniMap_execUpdateThreaded_Parms
{
};

// Function TgClientBase.TgMiniMap.Update
// [0x00020400] ( FUNC_Native )
struct UTgMiniMap_execUpdate_Parms
{
};

// Function TgClientBase.TgOverlayMoviePlayer.OnClose
// [0x00020802] ( FUNC_Event )
struct UTgOverlayMoviePlayer_eventOnClose_Parms
{
};

// Function TgClientBase.TgOverlayMoviePlayer.usc_TweenFinished
// [0x00020802] ( FUNC_Event )
struct UTgOverlayMoviePlayer_eventusc_TweenFinished_Parms
{
	class UGFxObject*                                  Obj;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgOverlayMoviePlayer.WidgetUnloaded
// [0x00020802] ( FUNC_Event )
struct UTgOverlayMoviePlayer_eventWidgetUnloaded_Parms
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgOverlayMoviePlayer.WidgetInitialized
// [0x00020802] ( FUNC_Event )
struct UTgOverlayMoviePlayer_eventWidgetInitialized_Parms
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgOverlayMoviePlayer.usc_TranslateMsg
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UTgOverlayMoviePlayer_execusc_TranslateMsg_Parms
{
	struct FString                                     Identifier;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     SectionName;                                      		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x0020 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgConfigDC_Cached.PrecacheData
// [0x00020400] ( FUNC_Native )
struct UTgConfigDC_Cached_execPrecacheData_Parms
{
};

// Function TgClientBase.TgConfigDC_Cached.CreateDataObject
// [0x00020400] ( FUNC_Native )
struct UTgConfigDC_Cached_execCreateDataObject_Parms
{
	int                                                nId;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgConfigDC_Cached.usc_load_data
// [0x00020400] ( FUNC_Native )
struct UTgConfigDC_Cached_execusc_load_data_Parms
{
	int                                                nId;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgConfigDC_Cached.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgConfigDC_Cached_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgConfigDC_Classes.CreateDataObject
// [0x00020400] ( FUNC_Native )
struct UTgConfigDC_Classes_execCreateDataObject_Parms
{
	int                                                nId;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgConfigDC_GameTip.CreateDataObject
// [0x00020400] ( FUNC_Native )
struct UTgConfigDC_GameTip_execCreateDataObject_Parms
{
	int                                                nId;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgConfigDC_Items.CreateDataObject
// [0x00020400] ( FUNC_Native )
struct UTgConfigDC_Items_execCreateDataObject_Parms
{
	int                                                nId;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgConfigDC_LangMessages.usc_load_data
// [0x00020400] ( FUNC_Native )
struct UTgConfigDC_LangMessages_execusc_load_data_Parms
{
	int                                                nId;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgDataGroup_Config.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgDataGroup_Config_execNotifyMapChange_Parms
{
};

// Function TgClientBase.TgDataGroup_Config.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgDataGroup_Config_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxEvent.GetTarget
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgGFxEvent_execGetTarget_Parms
{
	class UClass*                                      pClass;                                           		// 0x0000 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxMouseEvent.GetButtonState
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMouseEvent_execGetButtonState_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxMouseEvent.GetButton
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMouseEvent_execGetButton_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxMouseEvent.GetWheelAmount
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMouseEvent_execGetWheelAmount_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxMouseEvent.GetY
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMouseEvent_execGetY_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxMouseEvent.GetX
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMouseEvent_execGetX_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxValidationEvent.GetDataBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxValidationEvent_execGetDataBool_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxValidationEvent.GetDataString
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxValidationEvent_execGetDataString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxValidationEvent.GetDataFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxValidationEvent_execGetDataFloat_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxValidationEvent.GetDataInt
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxValidationEvent_execGetDataInt_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxValidationEvent.GetDataObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxValidationEvent_execGetDataObject_Parms
{
	class UGFxObject*                                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxValidationEvent.HasInvalidAll
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxValidationEvent_execHasInvalidAll_Parms
{
	struct Fdword                                      Flags;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxValidationEvent.HasInvalidAny
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxValidationEvent_execHasInvalidAny_Parms
{
	struct Fdword                                      Flags;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxValidationEvent.GetValidationType
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxValidationEvent_execGetValidationType_Parms
{
	struct Fdword                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxMouse.GetGFxConst
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMouse_execGetGFxConst_Parms
{
	struct FPointer                                    pField;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxMouse.GetMouseIndex
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMouse_execGetMouseIndex_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxMouse.SetCursorType
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMouse_execSetCursorType_Parms
{
	int                                                nCursorType;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nMouseIndex;                                      		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgGFxMouse.GetMousePosition
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMouse_execGetMousePosition_Parms
{
	int                                                nMouseIndex;                                      		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector2D                                   ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxMouse.GetTopMostEntity
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMouse_execGetTopMostEntity_Parms
{
	class UGFxObject*                                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxMouse.GetButtonState
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMouse_execGetButtonState_Parms
{
	int                                                nMouseIndex;                                      		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxMouse.HideMouse
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMouse_execHideMouse_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxMouse.ShowMouse
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMouse_execShowMouse_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxMouse.RemoveListener
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMouse_execRemoveListener_Parms
{
	class UGFxObject*                                  pListener;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMouse.AddListener
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMouse_execAddListener_Parms
{
	class UGFxObject*                                  pListener;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxSelection.GetControllerMaskByFocusGroup
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxSelection_execGetControllerMaskByFocusGroup_Parms
{
	int                                                nFocusGroupIdx;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct Fdword                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxSelection.GetFocusBitmask
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxSelection_execGetFocusBitmask_Parms
{
	class UGFxObject*                                  pMovieClip;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct Fdword                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxSelection.GetFocusArray
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxSelection_execGetFocusArray_Parms
{
	class UGFxObject*                                  pMovieClip;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxSelection.GetControllerFocusGroup
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxSelection_execGetControllerFocusGroup_Parms
{
	int                                                nControllerIndex;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxSelection.SetControllerFocusGroup
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxSelection_execSetControllerFocusGroup_Parms
{
	int                                                nControllerIndex;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nFocusGroupIdx;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxSelection.SetSelection
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxSelection_execSetSelection_Parms
{
	int                                                nBegin;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nEnd;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxSelection.GetEndIndex
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxSelection_execGetEndIndex_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxSelection.GetCaretIndex
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxSelection_execGetCaretIndex_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxSelection.GetBeginIndex
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxSelection_execGetBeginIndex_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxSelection.RemoveListener
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxSelection_execRemoveListener_Parms
{
	class UGFxObject*                                  pListener;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxSelection.AddListener
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxSelection_execAddListener_Parms
{
	class UGFxObject*                                  pListener;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxSelection.GetModalClip
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgGFxSelection_execGetModalClip_Parms
{
	int                                                nControllerIdx;                                   		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxSelection.SetModalClip
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgGFxSelection_execSetModalClip_Parms
{
	class UGFxObject*                                  pModal;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nControllerIdx;                                   		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x000C (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxSelection.FindFocus
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgGFxSelection_execFindFocus_Parms
{
	struct FString                                     sKeyToSimulate;                                   		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxObject*                                  pParentMovie;                                     		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bLoop : 1;                                        		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class UGFxObject*                                  pStartFromMovie;                                  		// 0x001C (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bIncludeFocusEnabledChars : 1;                    		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                nControllerIndex;                                 		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x002C (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxSelection.MoveFocus
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgGFxSelection_execMoveFocus_Parms
{
	struct FString                                     sKeyToSimulate;                                   		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxObject*                                  pStartFromMovie;                                  		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0018 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxSelection.GetFocusObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxSelection_execGetFocusObject_Parms
{
	class UGFxObject*                                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxSelection.GetFocusPath
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxSelection_execGetFocusPath_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxSelection.SetFocus
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxSelection_execSetFocus_Parms
{
	class UGFxObject*                                  pFocus;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxSelection.Uninitialize
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxSelection_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxSelection.Initialize
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxSelection_execInitialize_Parms
{
};

// Function TgClientBase.TgGFxWidget.RemoveGFxEventListener
// [0x00020400] ( FUNC_Native )
struct UTgGFxWidget_execRemoveGFxEventListener_Parms
{
	unsigned char                                      Evt;                                              		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             delCallback;                                      		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxWidget.AddGFxEventListener
// [0x00020400] ( FUNC_Native )
struct UTgGFxWidget_execAddGFxEventListener_Parms
{
	unsigned char                                      Evt;                                              		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             delCallback;                                      		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxWidget.GetChildDirect
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgGFxWidget_execGetChildDirect_Parms
{
	struct FPointer                                    sName;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bRequired : 1;                                    		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class UClass*                                      pClass;                                           		// 0x000C (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UTgGFxObject*                                ReturnValue;                                      		// 0x0014 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxWidget.GetChild
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgGFxWidget_execGetChild_Parms
{
	struct FString                                     sName;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bRequired : 1;                                    		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class UClass*                                      pClass;                                           		// 0x0014 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UTgGFxObject*                                ReturnValue;                                      		// 0x001C (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxWidget.SetDisabled
// [0x00020400] ( FUNC_Native )
struct UTgGFxWidget_execSetDisabled_Parms
{
	unsigned long                                      bValue : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGFxWidget.IsDisabled
// [0x00020400] ( FUNC_Native )
struct UTgGFxWidget_execIsDisabled_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxWidget.IsASInitialized
// [0x00020400] ( FUNC_Native )
struct UTgGFxWidget_execIsASInitialized_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxWidget.IsUCInitialized
// [0x00020400] ( FUNC_Native )
struct UTgGFxWidget_execIsUCInitialized_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxWidget.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxWidget_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxWidget.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxWidget_execInitialize_Parms
{
};

// Function TgClientBase.TgGFxWidget.OnGFxEvent
// [0x00120000] 
struct UTgGFxWidget_execOnGFxEvent_Parms
{
	class UTgGFxEvent*                                 pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxFriendSearchProvider.Num
// [0x00020400] ( FUNC_Native )
struct UTgGFxFriendSearchProvider_execNum_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxFriendSearchProvider.IsInvalid
// [0x00020400] ( FUNC_Native )
struct UTgGFxFriendSearchProvider_execIsInvalid_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxFriendSearchProvider.Empty
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxFriendSearchProvider_execEmpty_Parms
{
};

// Function TgClientBase.TgGFxFriendSearchProvider.OnServerTimeout
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxFriendSearchProvider_execOnServerTimeout_Parms
{
	float                                              nDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxFriendSearchProvider.LocalSearchIncrement
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxFriendSearchProvider_execLocalSearchIncrement_Parms
{
};

// Function TgClientBase.TgGFxFriendSearchProvider.OnSearchFriendRequest
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxFriendSearchProvider_execOnSearchFriendRequest_Parms
{
	class UTgGFxPlayerProvider*                        pProvider;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxFriendSearchProvider.OnReceivePlayerQuery
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxFriendSearchProvider_execOnReceivePlayerQuery_Parms
{
	struct FPointer                                    pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxFriendSearchProvider.GetDispatcher
// [0x00020400] ( FUNC_Native )
struct UTgGFxFriendSearchProvider_execGetDispatcher_Parms
{
	class UTgEventDispatcher*                          ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxFriendSearchProvider.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxFriendSearchProvider_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxFriendSearchProvider.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxFriendSearchProvider_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlayerGenerator.OnReceiveNames
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerGenerator_execOnReceiveNames_Parms
{
	unsigned long                                      bSucces : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class UTgPlayerNameManager*                        pManager;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlayerGenerator.GetClanData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerGenerator_execGetClanData_Parms
{
	class UTgGFxClanData*                              ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerGenerator.GetPartyData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerGenerator_execGetPartyData_Parms
{
	class UTgGFxPartyData*                             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerGenerator.GetFriendData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerGenerator_execGetFriendData_Parms
{
	class UTgGFxFriendData*                            ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerGenerator.Empty
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerGenerator_execEmpty_Parms
{
};

// Function TgClientBase.TgGFxPlayerGenerator.OnMctsEvent
// [0x00020400] ( FUNC_Native )
struct UTgGFxPlayerGenerator_execOnMctsEvent_Parms
{
	struct FPointer                                    pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlayerGenerator.FindOrCreatePlayer
// [0x00424401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerGenerator_execFindOrCreatePlayer_Parms
{
	struct FTgPlayerId                                 pid;                                              		// 0x0000 (0x0024) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      bWaitForNames : 1;                                		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class UTgGFxPlayerData*                            ReturnValue;                                      		// 0x0028 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerGenerator.CreatePlayer
// [0x00424401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerGenerator_execCreatePlayer_Parms
{
	struct FTgPlayerId                                 pid;                                              		// 0x0000 (0x0024) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      bWaitForNames : 1;                                		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class UTgGFxPlayerData*                            ReturnValue;                                      		// 0x0028 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerGenerator.FindPlayer
// [0x00424401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerGenerator_execFindPlayer_Parms
{
	struct FTgPlayerId                                 pid;                                              		// 0x0000 (0x0024) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                nFlags;                                           		// 0x0024 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UTgGFxPlayerData*                            ReturnValue;                                      		// 0x0028 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerGenerator.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxPlayerGenerator_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxPlayerGenerator.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxPlayerGenerator_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgDataProvider.Invalidate
// [0x00020400] ( FUNC_Native )
struct UTgDataProvider_execInvalidate_Parms
{
};

// Function TgClientBase.TgDataProvider.RequestItemAt
// [0x00020400] ( FUNC_Native )
struct UTgDataProvider_execRequestItemAt_Parms
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             delCallback;                                      		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgDataProvider.RequestItemRange
// [0x00020400] ( FUNC_Native )
struct UTgDataProvider_execRequestItemRange_Parms
{
	int                                                nStartIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nCount;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             delCallback;                                      		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgDataProvider.GetDispatcher
// [0x00020400] ( FUNC_Native )
struct UTgDataProvider_execGetDispatcher_Parms
{
	class UTgEventDispatcher*                          ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgDataProvider.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgDataProvider_execUninitialize_Parms
{
};

// Function TgClientBase.TgDataProvider.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgDataProvider_execInitialize_Parms
{
};

// Function TgClientBase.TgDataProvider.OnPopulateItem
// [0x00120000] 
struct UTgDataProvider_execOnPopulateItem_Parms
{
	class UObject*                                     Obj;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nIndex;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgDataProvider.OnPopulateRange
// [0x00120000] 
struct UTgDataProvider_execOnPopulateRange_Parms
{
	struct FPointer                                    arrData;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgBasicDataProvider.Invalidate
// [0x00020400] ( FUNC_Native )
struct UTgBasicDataProvider_execInvalidate_Parms
{
};

// Function TgClientBase.TgBasicDataProvider.RequestItemAt
// [0x00020400] ( FUNC_Native )
struct UTgBasicDataProvider_execRequestItemAt_Parms
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             delCallback;                                      		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgBasicDataProvider.RequestItemRange
// [0x00020400] ( FUNC_Native )
struct UTgBasicDataProvider_execRequestItemRange_Parms
{
	int                                                nStartIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nCount;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             delCallback;                                      		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgBasicDataProvider.Populate
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgBasicDataProvider_execPopulate_Parms
{
	TArray< class UObject* >                           arrData;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxItemHelperBinding.NotifyItemUpdate
// [0x00420802] ( FUNC_Event )
struct UTgGFxItemHelperBinding_eventNotifyItemUpdate_Parms
{
	TArray< struct Fdword >                            arrLTI;                                           		// 0x0000 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxItemHelperBinding.NotifyCouponChange
// [0x00020802] ( FUNC_Event )
struct UTgGFxItemHelperBinding_eventNotifyCouponChange_Parms
{
};

// Function TgClientBase.TgGFxItemHelperBinding.GetItemDataByLootId
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxItemHelperBinding_execGetItemDataByLootId_Parms
{
	int                                                nLootId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nVendorId;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxItemHelperBinding.GetItemDataByItemId
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxItemHelperBinding_execGetItemDataByItemId_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxItemHelperBinding.GetCouponDataByLootId
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxItemHelperBinding_execGetCouponDataByLootId_Parms
{
	int                                                nLootId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nVendorId;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxItemHelperBinding.GetCouponDataByItemId
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxItemHelperBinding_execGetCouponDataByItemId_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxItemHelperBinding.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxItemHelperBinding_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxItemHelperBinding.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxItemHelperBinding_execInitialize_Parms
{
};

// Function TgClientBase.TgGFxDataGroup.Invalidate
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxDataGroup_eventInvalidate_Parms
{
};

// Function TgClientBase.TgGFxDataGroup.GetData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxDataGroup_execGetData_Parms
{
	class UTgGFxDataProvider*                          ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxDataGroup.GetIsPending
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxDataGroup_execGetIsPending_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxDataGroup.GetOpenByDefault
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxDataGroup_execGetOpenByDefault_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxDataGroup.GetGroupId
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxDataGroup_execGetGroupId_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxDataGroup.GetLabel2
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxDataGroup_execGetLabel2_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxDataGroup.GetLabel
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxDataGroup_execGetLabel_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxDataGroup.SetIsPending
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxDataGroup_execSetIsPending_Parms
{
	unsigned long                                      bValue : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGFxDataGroup.SetOpenByDefault
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxDataGroup_execSetOpenByDefault_Parms
{
	unsigned long                                      bValue : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGFxDataGroup.SetGroupId
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxDataGroup_execSetGroupId_Parms
{
	int                                                nValue;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxDataGroup.SetLabel2
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxDataGroup_execSetLabel2_Parms
{
	struct FString                                     sValue;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxDataGroup.SetLabel
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxDataGroup_execSetLabel_Parms
{
	struct FString                                     sValue;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxDataGroup.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxDataGroup_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxDataGroup.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxDataGroup_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxDataProviderBase.Invalidate
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxDataProviderBase_eventInvalidate_Parms
{
};

// Function TgClientBase.TgGFxDataProviderBase.ValidateNow
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxDataProviderBase_eventValidateNow_Parms
{
};

// Function TgClientBase.TgGFxDataProviderBase.AddItemUnique
// [0x00020400] ( FUNC_Native )
struct UTgGFxDataProviderBase_execAddItemUnique_Parms
{
	class UGFxObject*                                  pObject;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxDataProviderBase.AddItem
// [0x00020400] ( FUNC_Native )
struct UTgGFxDataProviderBase_execAddItem_Parms
{
	class UGFxObject*                                  pObject;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxDataProviderBase.Empty
// [0x00024400] ( FUNC_Native )
struct UTgGFxDataProviderBase_execEmpty_Parms
{
	int                                                nReserve;                                         		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgGFxDataProviderBase.Populate
// [0x00020400] ( FUNC_Native )
struct UTgGFxDataProviderBase_execPopulate_Parms
{
	struct FPointer                                    pData;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nCount;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxDataProviderBase.SetAt
// [0x00020400] ( FUNC_Native )
struct UTgGFxDataProviderBase_execSetAt_Parms
{
	int                                                nPos;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  pObject;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxDataProviderBase.GetAt
// [0x00024400] ( FUNC_Native )
struct UTgGFxDataProviderBase_execGetAt_Parms
{
	int                                                nPos;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      pClass;                                           		// 0x0004 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x000C (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxDataProviderBase.SetNum
// [0x00020400] ( FUNC_Native )
struct UTgGFxDataProviderBase_execSetNum_Parms
{
	int                                                nValue;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxDataProviderBase.Num
// [0x00020400] ( FUNC_Native )
struct UTgGFxDataProviderBase_execNum_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxDataProviderBase.IsInvalid
// [0x00020400] ( FUNC_Native )
struct UTgGFxDataProviderBase_execIsInvalid_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxDataProviderBase.USC_CancelPendingRequests
// [0x00020400] ( FUNC_Native )
struct UTgGFxDataProviderBase_execUSC_CancelPendingRequests_Parms
{
	class UGFxObject*                                  pRequester;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxDataProviderBase.USC_IndexOf
// [0x00020400] ( FUNC_Native )
struct UTgGFxDataProviderBase_execUSC_IndexOf_Parms
{
	class UGFxObject*                                  pItem;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  pScope;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sCallback;                                        		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxDataProviderBase.USC_RequestItemRange
// [0x00020400] ( FUNC_Native )
struct UTgGFxDataProviderBase_execUSC_RequestItemRange_Parms
{
	int                                                nStartIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nEndIndex;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  pScope;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sCallback;                                        		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0020 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxDataProviderBase.USC_RequestItemAt
// [0x00020400] ( FUNC_Native )
struct UTgGFxDataProviderBase_execUSC_RequestItemAt_Parms
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  pScope;                                           		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sCallback;                                        		// 0x000C (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxObject*                                  ReturnValue;                                      		// 0x001C (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxDataProviderBase.GetDispatcher
// [0x00020400] ( FUNC_Native )
struct UTgGFxDataProviderBase_execGetDispatcher_Parms
{
	class UTgEventDispatcher*                          ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxDataProviderBase.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxDataProviderBase_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxDataProvider.Empty
// [0x00024400] ( FUNC_Native )
struct UTgGFxDataProvider_execEmpty_Parms
{
	int                                                nReserve;                                         		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgGFxDataProvider.Populate
// [0x00020400] ( FUNC_Native )
struct UTgGFxDataProvider_execPopulate_Parms
{
	struct FPointer                                    pData;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nCount;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxDataProvider.SetAt
// [0x00020400] ( FUNC_Native )
struct UTgGFxDataProvider_execSetAt_Parms
{
	int                                                nPos;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  pObject;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxDataProvider.GetAt
// [0x00024400] ( FUNC_Native )
struct UTgGFxDataProvider_execGetAt_Parms
{
	int                                                nPos;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      pClass;                                           		// 0x0004 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x000C (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxDataProvider.SetNum
// [0x00020400] ( FUNC_Native )
struct UTgGFxDataProvider_execSetNum_Parms
{
	int                                                nLen;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxDataProvider.Num
// [0x00020400] ( FUNC_Native )
struct UTgGFxDataProvider_execNum_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerProvider.CallUCCallback
// [0x00020802] ( FUNC_Event )
struct UTgGFxPlayerProvider_eventCallUCCallback_Parms
{
	struct FScriptDelegate                             delCallback;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxPlayerProvider.USC_CancelPendingRequests
// [0x00020400] ( FUNC_Native )
struct UTgGFxPlayerProvider_execUSC_CancelPendingRequests_Parms
{
	class UGFxObject*                                  pRequester;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlayerProvider.USC_IndexOf
// [0x00020400] ( FUNC_Native )
struct UTgGFxPlayerProvider_execUSC_IndexOf_Parms
{
	class UGFxObject*                                  pItem;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  pScope;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sCallback;                                        		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerProvider.USC_RequestItemRange
// [0x00020400] ( FUNC_Native )
struct UTgGFxPlayerProvider_execUSC_RequestItemRange_Parms
{
	int                                                nStartIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nEndIndex;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  pScope;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sCallback;                                        		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0020 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerProvider.USC_RequestItemAt
// [0x00020400] ( FUNC_Native )
struct UTgGFxPlayerProvider_execUSC_RequestItemAt_Parms
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  pScope;                                           		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sCallback;                                        		// 0x000C (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxObject*                                  ReturnValue;                                      		// 0x001C (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerProvider.DoUpdate
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerProvider_execDoUpdate_Parms
{
};

// Function TgClientBase.TgGFxPlayerProvider.NeedsUpdate
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerProvider_execNeedsUpdate_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerProvider.SetAt
// [0x00020400] ( FUNC_Native )
struct UTgGFxPlayerProvider_execSetAt_Parms
{
	int                                                nPos;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  pObject;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlayerProvider.GetAt
// [0x00024400] ( FUNC_Native )
struct UTgGFxPlayerProvider_execGetAt_Parms
{
	int                                                nPos;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      pClass;                                           		// 0x0004 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x000C (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerProvider.GetRefFlag
// [0x00020400] ( FUNC_Native )
struct UTgGFxPlayerProvider_execGetRefFlag_Parms
{
	struct Fdword                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerProvider.SetNum
// [0x00020400] ( FUNC_Native )
struct UTgGFxPlayerProvider_execSetNum_Parms
{
	int                                                nCount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlayerProvider.Num
// [0x00020400] ( FUNC_Native )
struct UTgGFxPlayerProvider_execNum_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerProvider.IsInvalid
// [0x00020400] ( FUNC_Native )
struct UTgGFxPlayerProvider_execIsInvalid_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerProvider.TryRequestPlayers
// [0x00020400] ( FUNC_Native )
struct UTgGFxPlayerProvider_execTryRequestPlayers_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerProvider.IsEmpty
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerProvider_execIsEmpty_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerProvider.Empty
// [0x00024400] ( FUNC_Native )
struct UTgGFxPlayerProvider_execEmpty_Parms
{
	int                                                nReserve;                                         		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgGFxPlayerProvider.SetDirty
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerProvider_execSetDirty_Parms
{
};

// Function TgClientBase.TgGFxPlayerProvider.IsDirty
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerProvider_execIsDirty_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerProvider.SetOwner
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerProvider_execSetOwner_Parms
{
	class UTgGFxPlayerGenerator*                       pOwner;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlayerProvider.GetPlayerAt
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerProvider_execGetPlayerAt_Parms
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgGFxPlayerData*                            ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerProvider.GetList
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerProvider_execGetList_Parms
{
	TArray< class UTgGFxPlayerData* >                  out_arrList;                                      		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxPlayerProvider.CancelRequests
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerProvider_execCancelRequests_Parms
{
	class UObject*                                     pScope;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlayerProvider.RequestPlayers
// [0x00020400] ( FUNC_Native )
struct UTgGFxPlayerProvider_execRequestPlayers_Parms
{
	struct FScriptDelegate                             delCallback;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerProvider.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxPlayerProvider_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxPlayerProvider.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxPlayerProvider_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlayerProvider.PlayerUpdateDelegate
// [0x00120000] 
struct UTgGFxPlayerProvider_execPlayerUpdateDelegate_Parms
{
	class UTgGFxPlayerProvider*                        Data;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxClanData.GetClanTag
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxClanData_execGetClanTag_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxClanData.GetClanName
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxClanData_execGetClanName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxClanData.SetClanTag
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxClanData_execSetClanTag_Parms
{
	struct FString                                     sValue;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxClanData.SetClanName
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxClanData_execSetClanName_Parms
{
	struct FString                                     sValue;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxClanData.OnClanUpdate
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxClanData_execOnClanUpdate_Parms
{
};

// Function TgClientBase.TgGFxClanData.TryRequestPlayers
// [0x00020400] ( FUNC_Native )
struct UTgGFxClanData_execTryRequestPlayers_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxClanData.IsInvalid
// [0x00020400] ( FUNC_Native )
struct UTgGFxClanData_execIsInvalid_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxClanData.OnMctsEvent
// [0x00020400] ( FUNC_Native )
struct UTgGFxClanData_execOnMctsEvent_Parms
{
	struct FPointer                                    pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxClanData.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxClanData_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxClanData.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxClanData_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxFriendData.USC_NotifyListenersChange
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxFriendData_execUSC_NotifyListenersChange_Parms
{
	unsigned long                                      bHasListener : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGFxFriendData.IsInvalid
// [0x00020400] ( FUNC_Native )
struct UTgGFxFriendData_execIsInvalid_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxFriendData.GiveUpOnResponse
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxFriendData_execGiveUpOnResponse_Parms
{
	float                                              nDelta;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxFriendData.OnUpdate
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxFriendData_execOnUpdate_Parms
{
	float                                              nDelta;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxFriendData.TryRequestPlayers
// [0x00020400] ( FUNC_Native )
struct UTgGFxFriendData_execTryRequestPlayers_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxFriendData.Empty
// [0x00024400] ( FUNC_Native )
struct UTgGFxFriendData_execEmpty_Parms
{
	int                                                nReserve;                                         		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgGFxFriendData.OnReceivePlatformFriends
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxFriendData_execOnReceivePlatformFriends_Parms
{
	struct FPointer                                    pEventBase;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxFriendData.OnReceivePlatformHRUpdate
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxFriendData_execOnReceivePlatformHRUpdate_Parms
{
	struct FPointer                                    pEventBase;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxFriendData.OnMctsEvent
// [0x00020400] ( FUNC_Native )
struct UTgGFxFriendData_execOnMctsEvent_Parms
{
	struct FPointer                                    pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxFriendData.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxFriendData_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxFriendData.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxFriendData_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPartyData.IsInParty
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPartyData_execIsInParty_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPartyData.GetLeader
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPartyData_execGetLeader_Parms
{
	class UTgGFxPlayerData*                            ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPartyData.SetLeader
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPartyData_execSetLeader_Parms
{
	class UTgGFxPlayerData*                            pLeader;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPartyData.TryRequestPlayers
// [0x00020400] ( FUNC_Native )
struct UTgGFxPartyData_execTryRequestPlayers_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPartyData.OnMctsEvent
// [0x00020400] ( FUNC_Native )
struct UTgGFxPartyData_execOnMctsEvent_Parms
{
	struct FPointer                                    pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPartyData.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxPartyData_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxPartyData.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxPartyData_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxRoleQueuePopup.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGFxRoleQueuePopup_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxRoleQueuePopup.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxRoleQueuePopup_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxRoleQueuePopup.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxRoleQueuePopup_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlayerClanData.Invalidate
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxPlayerClanData_eventInvalidate_Parms
{
};

// Function TgClientBase.TgGFxPlayerClanData.GetClanHonor
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerClanData_execGetClanHonor_Parms
{
	struct Fdword                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerClanData.GetClanId
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerClanData_execGetClanId_Parms
{
	struct Fdword                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerClanData.GetIsPending
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerClanData_execGetIsPending_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerClanData.GetIsLeader
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerClanData_execGetIsLeader_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerClanData.GetIsInClan
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerClanData_execGetIsInClan_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerClanData.GetClanRankId
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerClanData_execGetClanRankId_Parms
{
	struct Fdword                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerClanData.GetClanRankName
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerClanData_execGetClanRankName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxPlayerClanData.GetClanTag
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerClanData_execGetClanTag_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxPlayerClanData.GetClanName
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerClanData_execGetClanName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxPlayerClanData.SetClanHonor
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerClanData_execSetClanHonor_Parms
{
	struct Fdword                                      nValue;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlayerClanData.SetClanId
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerClanData_execSetClanId_Parms
{
	struct Fdword                                      nValue;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlayerClanData.SetIsPending
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerClanData_execSetIsPending_Parms
{
	unsigned long                                      bValue : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlayerClanData.SetIsLeader
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerClanData_execSetIsLeader_Parms
{
	unsigned long                                      bValue : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlayerClanData.SetIsInClan
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerClanData_execSetIsInClan_Parms
{
	unsigned long                                      bValue : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlayerClanData.SetClanRankId
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerClanData_execSetClanRankId_Parms
{
	struct Fdword                                      nRank;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlayerClanData.SetClanRankName
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerClanData_execSetClanRankName_Parms
{
	struct FString                                     sRank;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxPlayerClanData.SetClanTag
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerClanData_execSetClanTag_Parms
{
	struct FString                                     sTag;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxPlayerClanData.SetClanName
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerClanData_execSetClanName_Parms
{
	struct FString                                     sName;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxPlayerData.USC_GetFriendRequestCount
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execUSC_GetFriendRequestCount_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.USC_SetNote
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execUSC_SetNote_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.USC_SetStatus
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execUSC_SetStatus_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.USC_ToggleDND
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execUSC_ToggleDND_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.USC_ReportPlayer
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execUSC_ReportPlayer_Parms
{
	int                                                nReasonCode;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sReasonMsg;                                       		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nPlayerCount;                                     		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nSourceTaskForce;                                 		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nTargetTaskForce;                                 		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.USC_ReferFriend
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execUSC_ReferFriend_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.USC_DeclineFriend
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execUSC_DeclineFriend_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.USC_AcceptFriend
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execUSC_AcceptFriend_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.USC_RemoveFriend
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execUSC_RemoveFriend_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.USC_AddFriend
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execUSC_AddFriend_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.USC_Whisper
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execUSC_Whisper_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.USC_ToggleBlock
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execUSC_ToggleBlock_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.USC_Spectate
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execUSC_Spectate_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.USC_SendGift
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execUSC_SendGift_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.USC_ClanInvite
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execUSC_ClanInvite_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.USC_PartyMakeLeader
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execUSC_PartyMakeLeader_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.USC_SetCanPartyInvite
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execUSC_SetCanPartyInvite_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.USC_PartyKick
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execUSC_PartyKick_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.USC_PartyInvite
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execUSC_PartyInvite_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.USC_ViewMatchHistory
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execUSC_ViewMatchHistory_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.USC_ViewSmiteProfile
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execUSC_ViewSmiteProfile_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.USC_ViewPortalProfile
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execUSC_ViewPortalProfile_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.Invalidate
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxPlayerData_eventInvalidate_Parms
{
};

// Function TgClientBase.TgGFxPlayerData.OnBlockPopup
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execOnBlockPopup_Parms
{
	class UTgPagePopup*                                pPopup;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FPopupResponse                              Response;                                         		// 0x0008 (0x0018) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxPlayerData.OnRemoveFriendPopup
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execOnRemoveFriendPopup_Parms
{
	class UTgPagePopup*                                pPopup;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FPopupResponse                              Response;                                         		// 0x0008 (0x0018) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxPlayerData.OnNotePopup
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execOnNotePopup_Parms
{
	class UTgPagePopup*                                pPopup;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FPopupResponse                              Response;                                         		// 0x0008 (0x0018) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxPlayerData.OnStatusPopup
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execOnStatusPopup_Parms
{
	class UTgPagePopup*                                pPopup;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FPopupResponse                              Response;                                         		// 0x0008 (0x0018) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxPlayerData.OnWhisperPopup
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execOnWhisperPopup_Parms
{
	class UTgPagePopup*                                pPopup;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FPopupResponse                              Response;                                         		// 0x0008 (0x0018) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxPlayerData.RemoveClanData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execRemoveClanData_Parms
{
};

// Function TgClientBase.TgGFxPlayerData.RemovePartyData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execRemovePartyData_Parms
{
};

// Function TgClientBase.TgGFxPlayerData.RemoveFriendData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execRemoveFriendData_Parms
{
};

// Function TgClientBase.TgGFxPlayerData.GetClanData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execGetClanData_Parms
{
	class UTgGFxPlayerClanData*                        ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.GetPartyData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execGetPartyData_Parms
{
	class UTgGFxPlayerPartyData*                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.CreateClanData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execCreateClanData_Parms
{
	class UTgGFxPlayerClanData*                        ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.CreatePartyData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execCreatePartyData_Parms
{
	class UTgGFxPlayerPartyData*                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.PopulateAS_Level
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execPopulateAS_Level_Parms
{
};

// Function TgClientBase.TgGFxPlayerData.PopulateAS_PrestigeData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execPopulateAS_PrestigeData_Parms
{
};

// Function TgClientBase.TgGFxPlayerData.GetIsHirezFriend
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execGetIsHirezFriend_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.GetIsPortalFriend
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execGetIsPortalFriend_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.GetDoNotDisturb
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execGetDoNotDisturb_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.GetFriendRequesting
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execGetFriendRequesting_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.GetFriendRequested
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execGetFriendRequested_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.GetPlayerLevel
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execGetPlayerLevel_Parms
{
	struct Fdword                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.GetIsInOurParty
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execGetIsInOurParty_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.GetIsInOurClan
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execGetIsInOurClan_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.GetIsMuted
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execGetIsMuted_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.GetIsBlocked
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execGetIsBlocked_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.GetIsOnline
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execGetIsOnline_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.GetAvatarId
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execGetAvatarId_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.GetNote
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execGetNote_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxPlayerData.GetRichStatus
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execGetRichStatus_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxPlayerData.GetStatus
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execGetStatus_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxPlayerData.GetPlayerName
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execGetPlayerName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxPlayerData.CheckStatusIntegrity
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execCheckStatusIntegrity_Parms
{
};

// Function TgClientBase.TgGFxPlayerData.UpdateIsMuted
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execUpdateIsMuted_Parms
{
};

// Function TgClientBase.TgGFxPlayerData.UpdatePlayerName
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execUpdatePlayerName_Parms
{
};

// Function TgClientBase.TgGFxPlayerData.SetId
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execSetId_Parms
{
	struct FTgPlayerId                                 pid;                                              		// 0x0000 (0x0024) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.SetPlayerLevelByXp
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execSetPlayerLevelByXp_Parms
{
	struct Fdword                                      nValue;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlayerData.SetPlayerLevel
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execSetPlayerLevel_Parms
{
	struct Fdword                                      nValue;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlayerData.SetStatusTimeElapsed
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execSetStatusTimeElapsed_Parms
{
	int                                                nTimeSecs;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlayerData.SetDoNotDisturb
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execSetDoNotDisturb_Parms
{
	unsigned long                                      bValue : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlayerData.SetFriendRequesting
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execSetFriendRequesting_Parms
{
	unsigned long                                      bValue : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlayerData.SetFriendRequested
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execSetFriendRequested_Parms
{
	unsigned long                                      bValue : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlayerData.SetIsInOurParty
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execSetIsInOurParty_Parms
{
	unsigned long                                      bValue : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlayerData.SetIsInOurClan
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execSetIsInOurClan_Parms
{
	unsigned long                                      bValue : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlayerData.SetWorshiperCount
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execSetWorshiperCount_Parms
{
	struct Fdword                                      nValue;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlayerData.SetIsBlocked
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execSetIsBlocked_Parms
{
	unsigned long                                      bValue : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlayerData.SetIsOnline
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execSetIsOnline_Parms
{
	unsigned long                                      bValue : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlayerData.SetAvatarId
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execSetAvatarId_Parms
{
	int                                                nAvatarId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlayerData.SetNote
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execSetNote_Parms
{
	struct FString                                     sNote;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxPlayerData.SetRichStatus
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execSetRichStatus_Parms
{
	struct FString                                     sStatus;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxPlayerData.SetStatus
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execSetStatus_Parms
{
	struct FString                                     sStatus;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxPlayerData.IsValid
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execIsValid_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerData.Initialize
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerData_execInitialize_Parms
{
	struct FTgPlayerId                                 pid;                                              		// 0x0000 (0x0024) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxPlayerPartyData.Invalidate
// [0x00020802] ( FUNC_Event )
struct UTgGFxPlayerPartyData_eventInvalidate_Parms
{
};

// Function TgClientBase.TgGFxPlayerPartyData.GetPartyCount
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerPartyData_execGetPartyCount_Parms
{
	struct Fdword                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerPartyData.GetPartyId
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerPartyData_execGetPartyId_Parms
{
	struct Fdword                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerPartyData.GetIsPending
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerPartyData_execGetIsPending_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerPartyData.GetIsLeader
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerPartyData_execGetIsLeader_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerPartyData.GetCanInvite
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerPartyData_execGetCanInvite_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPlayerPartyData.SetPartyCount
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerPartyData_execSetPartyCount_Parms
{
	struct Fdword                                      nValue;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlayerPartyData.SetPartyId
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerPartyData_execSetPartyId_Parms
{
	struct Fdword                                      nValue;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlayerPartyData.SetIsPending
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerPartyData_execSetIsPending_Parms
{
	unsigned long                                      bValue : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlayerPartyData.SetIsLeader
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerPartyData_execSetIsLeader_Parms
{
	unsigned long                                      bValue : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGFxPlayerPartyData.SetCanInvite
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPlayerPartyData_execSetCanInvite_Parms
{
	unsigned long                                      bValue : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgLobbyHUDBase.Destroyed
// [0x00020902] ( FUNC_Event )
struct ATgLobbyHUDBase_eventDestroyed_Parms
{
	// class ATgPlayerController*                      PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function TgClientBase.TgLobbyHUDBase.PostRender
// [0x00020802] ( FUNC_Event )
struct ATgLobbyHUDBase_eventPostRender_Parms
{
};

// Function TgClientBase.TgLobbyHUDBase.CommitPedestalSelectionChange
// [0x00020802] ( FUNC_Event )
struct ATgLobbyHUDBase_eventCommitPedestalSelectionChange_Parms
{
	// unsigned long                                   bChangedPedestal : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TgClientBase.TgLobbyHUDBase.BeginPedestalSelectionChange
// [0x00024A02] ( FUNC_Exec | FUNC_Event )
struct ATgLobbyHUDBase_execBeginPedestalSelectionChange_Parms
{
	int                                                nPedestalSkinId;                                  		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgLobbyHUDBase.CommitClassSelectionChange
// [0x00020802] ( FUNC_Event )
struct ATgLobbyHUDBase_eventCommitClassSelectionChange_Parms
{
	// unsigned long                                   bChangedClass : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bChangedSkin : 1;                                 		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function TgClientBase.TgLobbyHUDBase.BeginClassSelectionChange
// [0x00024A02] ( FUNC_Exec | FUNC_Event )
struct ATgLobbyHUDBase_execBeginClassSelectionChange_Parms
{
	int                                                nClassId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nSkinId;                                          		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgLobbyHUDBase.NotifyLoggedIn
// [0x00020802] ( FUNC_Event )
struct ATgLobbyHUDBase_eventNotifyLoggedIn_Parms
{
};

// Function TgClientBase.TgLobbyHUDBase.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATgLobbyHUDBase_eventPostBeginPlay_Parms
{
	// class ATgPlayerController*                      PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function TgClientBase.TgLobbyHUDBase.TriggerLazyPrecache
// [0x00020400] ( FUNC_Native )
struct ATgLobbyHUDBase_execTriggerLazyPrecache_Parms
{
};

// Function TgClientBase.TgLobbyHUDBase.PreBeginPlay
// [0x00020902] ( FUNC_Event )
struct ATgLobbyHUDBase_eventPreBeginPlay_Parms
{
	// class UClass*                                   MenuContentDataClass;                             		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function TgClientBase.TgLobbyHUDBase.NotifyKismetToLoadMusicTheme
// [0x00020400] ( FUNC_Native )
struct ATgLobbyHUDBase_execNotifyKismetToLoadMusicTheme_Parms
{
};

// Function TgClientBase.TgLobbyHUDBase.OnGameStateChange
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct ATgLobbyHUDBase_execOnGameStateChange_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgLobbyHUDBase.OnMatchUpdate
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct ATgLobbyHUDBase_execOnMatchUpdate_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgLobbyHUDBase.GetLoginDataType
// [0x00020400] ( FUNC_Native )
struct ATgLobbyHUDBase_execGetLoginDataType_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgLobbyHUDBase.OnCameraReady
// [0x00020400] ( FUNC_Native )
struct ATgLobbyHUDBase_execOnCameraReady_Parms
{
	class ATgLobbyCamera*                              PCam;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgLobbyHUDBase.DisableEmoteZoom
// [0x00024400] ( FUNC_Native )
struct ATgLobbyHUDBase_execDisableEmoteZoom_Parms
{
	unsigned long                                      bImmediate : 1;                                   		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgLobbyHUDBase.EnableEmoteZoom
// [0x00020400] ( FUNC_Native )
struct ATgLobbyHUDBase_execEnableEmoteZoom_Parms
{
};

// Function TgClientBase.TgLobbyHUDBase.PlayEmote
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgLobbyHUDBase_execPlayEmote_Parms
{
	int                                                nVgsId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgLobbyHUDBase.UpdateCardDraws
// [0x00020400] ( FUNC_Native )
struct ATgLobbyHUDBase_execUpdateCardDraws_Parms
{
	class UCanvas*                                     CanvasIn;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgLobbyHUDBase.UpdateDebugDraws
// [0x00020400] ( FUNC_Native )
struct ATgLobbyHUDBase_execUpdateDebugDraws_Parms
{
};

// Function TgClientBase.TgLobbyHUDBase.NotifyLobbyStateChange
// [0x00020400] ( FUNC_Native )
struct ATgLobbyHUDBase_execNotifyLobbyStateChange_Parms
{
};

// Function TgClientBase.TgLobbyHUDBase.UpdateGammaControls
// [0x00020400] ( FUNC_Native )
struct ATgLobbyHUDBase_execUpdateGammaControls_Parms
{
};

// Function TgClientBase.TgLobbyHUDBase.TestTrayPopup
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgLobbyHUDBase_execTestTrayPopup_Parms
{
	unsigned char                                      popupType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgLobbyHUDBase.TestEOMLobby
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct ATgLobbyHUDBase_execTestEOMLobby_Parms
{
	unsigned long                                      bVictory : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     ClassName;                                        		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     skinName_EOML;                                    		// 0x0014 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgLobbyHUDBase.TestTransition
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct ATgLobbyHUDBase_execTestTransition_Parms
{
	unsigned long                                      bShow : 1;                                        		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bAddData : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                frameItemID;                                      		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                godId;                                            		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgLobbyHUDBase.SwitchToCamera
// [0x00024400] ( FUNC_Native )
struct ATgLobbyHUDBase_execSwitchToCamera_Parms
{
	struct FName                                       CamTag;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      camDirection;                                     		// 0x0008 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class ATgLobbyCamera*                              ReturnValue;                                      		// 0x000C (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgLobbyHUDBase.UnsuspendLoadingClassModels
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgLobbyHUDBase_execUnsuspendLoadingClassModels_Parms
{
};

// Function TgClientBase.TgLobbyHUDBase.SuspendLoadingClassModels
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgLobbyHUDBase_execSuspendLoadingClassModels_Parms
{
};

// Function TgClientBase.TgLobbyHUDBase.ChangePedestalEnemyModel
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct ATgLobbyHUDBase_execChangePedestalEnemyModel_Parms
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPedestalSkinId;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      pose;                                             		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bAsync : 1;                                       		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgLobbyHUDBase.ChangeClassEnemyModel
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct ATgLobbyHUDBase_execChangeClassEnemyModel_Parms
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nClassId;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nSkinId;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      pose;                                             		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bAsync : 1;                                       		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bLockedIn : 1;                                    		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgLobbyHUDBase.ChangePedestalFriendlyModel
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct ATgLobbyHUDBase_execChangePedestalFriendlyModel_Parms
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPedestalSkinId;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      pose;                                             		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bAsync : 1;                                       		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgLobbyHUDBase.ChangeClassFriendlyModel
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct ATgLobbyHUDBase_execChangeClassFriendlyModel_Parms
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nClassId;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nSkinId;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      pose;                                             		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bAsync : 1;                                       		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bLockedIn : 1;                                    		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgLobbyHUDBase.IsCurrentCameraMatchLobby
// [0x00020400] ( FUNC_Native )
struct ATgLobbyHUDBase_execIsCurrentCameraMatchLobby_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgLobbyHUDBase.GetMatchLobbyCameraName
// [0x00020400] ( FUNC_Native )
struct ATgLobbyHUDBase_execGetMatchLobbyCameraName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgLobbyHUDBase.ChangePreloadModel
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgLobbyHUDBase_execChangePreloadModel_Parms
{
	int                                                nClassId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nSkinId;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       CameraTag;                                        		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgLobbyHUDBase.OnPedestalSelected
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct ATgLobbyHUDBase_execOnPedestalSelected_Parms
{
	int                                                nPedestalSkinId;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bChangedPedestal : 1;                             		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgLobbyHUDBase.OnClassSelected
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct ATgLobbyHUDBase_execOnClassSelected_Parms
{
	int                                                nClassId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nSkinId;                                          		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bChangedClass : 1;                                		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bChangedSkin : 1;                                 		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgLobbyHUDBase.RotateModel
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct ATgLobbyHUDBase_execRotateModel_Parms
{
	float                                              fValue;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgLobbyHUDBase.TestLobbyModel
// [0x00020601] ( FUNC_Final | FUNC_Exec | FUNC_Native )
struct ATgLobbyHUDBase_execTestLobbyModel_Parms
{
	int                                                nSkinId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgLobbyHUDBase.ChangeClassModel
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct ATgLobbyHUDBase_execChangeClassModel_Parms
{
	int                                                nClassId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nSkinId;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPedestalSkinId;                                  		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      pose;                                             		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       CameraTag;                                        		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      camDirection;                                     		// 0x0018 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bAsync : 1;                                       		// 0x001C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShowFlag : 1;                                    		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShowCard : 1;                                    		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgLobbyHUDBase.ChangeMenuModel
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct ATgLobbyHUDBase_execChangeMenuModel_Parms
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      camDirection;                                     		// 0x0001 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgLobbyHUDBase.AsynchNotifies
// [0x00020400] ( FUNC_Native )
struct ATgLobbyHUDBase_execAsynchNotifies_Parms
{
};

// Function TgClientBase.TgLobbyHUDBase.OnDisconnect
// [0x00020400] ( FUNC_Native )
struct ATgLobbyHUDBase_execOnDisconnect_Parms
{
};

// Function TgClientBase.TgLobbyHUDBase.SetUpEOMLobby
// [0x00020400] ( FUNC_Native )
struct ATgLobbyHUDBase_execSetUpEOMLobby_Parms
{
};

// Function TgClientBase.TgLobbyHUDBase.HaveEOMLobbyData
// [0x00020400] ( FUNC_Native )
struct ATgLobbyHUDBase_execHaveEOMLobbyData_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgLobbyHUDBase.CleanupSessionForDisconnect
// [0x00020400] ( FUNC_Native )
struct ATgLobbyHUDBase_execCleanupSessionForDisconnect_Parms
{
};

// Function TgClientBase.TgLobbyHUDBase.UnregisterEngineCallbacks
// [0x00020400] ( FUNC_Native )
struct ATgLobbyHUDBase_execUnregisterEngineCallbacks_Parms
{
};

// Function TgClientBase.TgLobbyHUDBase.RegisterEngineCallbacks
// [0x00020400] ( FUNC_Native )
struct ATgLobbyHUDBase_execRegisterEngineCallbacks_Parms
{
};

// Function TgClientBase.TgLobbyHUDBase.InitMainMoviePlayer
// [0x00020400] ( FUNC_Native )
struct ATgLobbyHUDBase_execInitMainMoviePlayer_Parms
{
};

// Function TgClientBase.TgLobbyHUDBase.InitializeDisconnectedState
// [0x00020400] ( FUNC_Native )
struct ATgLobbyHUDBase_execInitializeDisconnectedState_Parms
{
};

// Function TgClientBase.TgClanDC_Player.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgClanDC_Player_execNotifyMapChange_Parms
{
};

// Function TgClientBase.TgClanDC_Player.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgClanDC_Player_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgDataGroup_EOMLobby.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgDataGroup_EOMLobby_execNotifyMapChange_Parms
{
};

// Function TgClientBase.TgDataGroup_EOMLobby.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgDataGroup_EOMLobby_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgDataGroup_League.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgDataGroup_League_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgDataGroup_Lobby.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgDataGroup_Lobby_execNotifyMapChange_Parms
{
};

// Function TgClientBase.TgDataGroup_Lobby.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgDataGroup_Lobby_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgEOMLobbyDC_ChatLobby.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgEOMLobbyDC_ChatLobby_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgEOMLobbyDC_ChatPlayer.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgEOMLobbyDC_ChatPlayer_execNotifyMapChange_Parms
{
};

// Function TgClientBase.TgEOMLobbyDC_ChatPlayer.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgEOMLobbyDC_ChatPlayer_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgEOMLobbyDC_Lobby.asc_SetupTaskForceEOML
// [0x00020003] ( FUNC_Final )
struct UTgEOMLobbyDC_Lobby_execasc_SetupTaskForceEOML_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgEOMLobbyDC_Lobby.SetupTaskForceEOML
// [0x00020802] ( FUNC_Event )
struct UTgEOMLobbyDC_Lobby_eventSetupTaskForceEOML_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgEOMLobbyDC_Lobby.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgEOMLobbyDC_Lobby_execNotifyMapChange_Parms
{
};

// Function TgClientBase.TgEOMLobbyDC_Lobby.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgEOMLobbyDC_Lobby_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgEOMLobbyDC_Player.IsPlayerMuted
// [0x00020802] ( FUNC_Event )
struct UTgEOMLobbyDC_Player_eventIsPlayerMuted_Parms
{
	struct FUniqueNetId                                ConsoleId;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UOnlineSubsystem*                         OnlineSub;                                        		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function TgClientBase.TgEOMLobbyDC_Player.UpdatePlayerInventory
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgEOMLobbyDC_Player_execUpdatePlayerInventory_Parms
{
	struct FPointer                                    pMarshal;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgEOMLobbyDC_Player.UpdatePlayerBehaviour
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgEOMLobbyDC_Player_execUpdatePlayerBehaviour_Parms
{
	struct FPointer                                    pMarshal;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgEOMLobbyDC_Player.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgEOMLobbyDC_Player_execNotifyMapChange_Parms
{
};

// Function TgClientBase.TgEOMLobbyDC_Player.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgEOMLobbyDC_Player_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgEOMLobbyDC_Team.OnPlayerMute
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgEOMLobbyDC_Team_execOnPlayerMute_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgEOMLobbyDC_Team.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgEOMLobbyDC_Team_execNotifyMapChange_Parms
{
};

// Function TgClientBase.TgEOMLobbyDC_Team.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgEOMLobbyDC_Team_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgLeagueDC_Leaderboard.USC_GetLeaderboard
// [0x00020400] ( FUNC_Native )
struct UTgLeagueDC_Leaderboard_execUSC_GetLeaderboard_Parms
{
	int                                                nLeagueId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nTierId;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgLeagueDC_Leaderboard.RequestPlayerName
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgLeagueDC_Leaderboard_execRequestPlayerName_Parms
{
	struct FTgPlayerId                                 pid;                                              		// 0x0000 (0x0024) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	class UGFxObject*                                  pObj;                                             		// 0x0024 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgLeagueDC_Leaderboard.UpdateNames
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLeagueDC_Leaderboard_execUpdateNames_Parms
{
	unsigned long                                      bSucces : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class UTgPlayerNameManager*                        pManager;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgLeagueDC_Leaderboard.OnUpdate
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLeagueDC_Leaderboard_execOnUpdate_Parms
{
	float                                              nDelta;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgLeagueDC_Leaderboard.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgLeagueDC_Leaderboard_execUninitialize_Parms
{
};

// Function TgClientBase.TgLeagueDC_Leaderboard.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgLeagueDC_Leaderboard_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgLeagueDC_PlayerSummary.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgLeagueDC_PlayerSummary_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgLobbyDC_BattlePass.USC_PurchaseBattlePass
// [0x00020400] ( FUNC_Native )
struct UTgLobbyDC_BattlePass_execUSC_PurchaseBattlePass_Parms
{
};

// Function TgClientBase.TgLobbyDC_BattlePass.USC_PurchaseNextLevel
// [0x00020400] ( FUNC_Native )
struct UTgLobbyDC_BattlePass_execUSC_PurchaseNextLevel_Parms
{
	int                                                nQuantity;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgLobbyDC_BattlePass.OnHUDStateChange
// [0x00020400] ( FUNC_Native )
struct UTgLobbyDC_BattlePass_execOnHUDStateChange_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgLobbyDC_BattlePass.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgLobbyDC_BattlePass_execNotifyMapChange_Parms
{
};

// Function TgClientBase.TgLobbyDC_BattlePass.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgLobbyDC_BattlePass_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgLobbyDC_Class.UpdateFreeRotation
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Class_execUpdateFreeRotation_Parms
{
};

// Function TgClientBase.TgLobbyDC_Class.GetSkinByIndex
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Class_execGetSkinByIndex_Parms
{
	struct Fdword                                      nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgLobbyDC_Skin*                             ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgLobbyDC_Class.GetSkinById
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Class_execGetSkinById_Parms
{
	struct Fdword                                      nSkinId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTgLobbyDC_Skin*                             ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgLobbyDC_Class.SetSessionDefaultSkin
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Class_execSetSessionDefaultSkin_Parms
{
	struct Fdword                                      nSkinId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgLobbyDC_Class.SetSelectedByUs
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Class_execSetSelectedByUs_Parms
{
	unsigned long                                      bSelByUs : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgLobbyDC_Class.GetSelectedByUs
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Class_execGetSelectedByUs_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgLobbyDC_Class.SetBanned
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Class_execSetBanned_Parms
{
	unsigned long                                      bIsBanned : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgLobbyDC_Class.GetBanned
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Class_execGetBanned_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgLobbyDC_Class.SetBannable
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Class_execSetBannable_Parms
{
	unsigned long                                      bCanBan : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgLobbyDC_Class.GetBannable
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Class_execGetBannable_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgLobbyDC_Class.SetVisible
// [0x00020400] ( FUNC_Native )
struct UTgLobbyDC_Class_execSetVisible_Parms
{
	unsigned long                                      Visible : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgLobbyDC_Class.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgLobbyDC_Class_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgLobbyDC_Currencies.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgLobbyDC_Currencies_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgLobbyDC_Inventory.USC_CountActiveBoosters
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Inventory_execUSC_CountActiveBoosters_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgLobbyDC_Inventory.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgLobbyDC_Inventory_execNotifyMapChange_Parms
{
};

// Function TgClientBase.TgLobbyDC_Inventory.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgLobbyDC_Inventory_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgLobbyDC_Lobby.usc_OpenSimulmediaPopup
// [0x00020400] ( FUNC_Native )
struct UTgLobbyDC_Lobby_execusc_OpenSimulmediaPopup_Parms
{
};

// Function TgClientBase.TgLobbyDC_Lobby.usc_OpenGifting
// [0x00020400] ( FUNC_Native )
struct UTgLobbyDC_Lobby_execusc_OpenGifting_Parms
{
	struct FString                                     PlayerName;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sPlayerId;                                        		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ConsoleIdString;                                  		// 0x0020 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgLobbyDC_Lobby.OnQueueStateChange
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Lobby_execOnQueueStateChange_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgLobbyDC_Lobby.OnPartyUpdate
// [0x00020400] ( FUNC_Native )
struct UTgLobbyDC_Lobby_execOnPartyUpdate_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgLobbyDC_Lobby.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgLobbyDC_Lobby_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgLobbyDC_Login.RefreshData
// [0x00020400] ( FUNC_Native )
struct UTgLobbyDC_Login_execRefreshData_Parms
{
};

// Function TgClientBase.TgLobbyDC_Login.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgLobbyDC_Login_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgLobbyDC_Match.ConsumeEquipSkinId
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Match_execConsumeEquipSkinId_Parms
{
	struct Fdword                                      nClassId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgLobbyDC_Match.GetEquipSkinId
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Match_execGetEquipSkinId_Parms
{
	struct Fdword                                      nClassId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct Fdword                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgLobbyDC_Match.GetOtherTeam
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Match_execGetOtherTeam_Parms
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UTgLobbyDC_Team*                             ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgLobbyDC_Match.GetFriendTeam
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Match_execGetFriendTeam_Parms
{
	class UTgLobbyDC_Team*                             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgLobbyDC_Match.OnMatchUpdate
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Match_execOnMatchUpdate_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgLobbyDC_Match.GetLocalSelectedClassId
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Match_execGetLocalSelectedClassId_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgLobbyDC_Match.ClearMatchData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Match_execClearMatchData_Parms
{
};

// Function TgClientBase.TgLobbyDC_Match.ClearBonusTimers
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Match_execClearBonusTimers_Parms
{
};

// Function TgClientBase.TgLobbyDC_Match.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgLobbyDC_Match_execNotifyMapChange_Parms
{
};

// Function TgClientBase.TgLobbyDC_Match.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgLobbyDC_Match_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgLobbyDC_Player.IsPlayerMuted
// [0x00020802] ( FUNC_Event )
struct UTgLobbyDC_Player_eventIsPlayerMuted_Parms
{
	struct FUniqueNetId                                ConsoleId;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UOnlineSubsystem*                         OnlineSub;                                        		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function TgClientBase.TgLobbyDC_Player.GetMatchPosition
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Player_execGetMatchPosition_Parms
{
	struct Fdword                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgLobbyDC_Player.UpdateRoleCall
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Player_execUpdateRoleCall_Parms
{
	struct FRoleCallInfo                               rci;                                              		// 0x0000 (0x0010) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function TgClientBase.TgLobbyDC_Player.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgLobbyDC_Player_execNotifyMapChange_Parms
{
};

// Function TgClientBase.TgLobbyDC_Player.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgLobbyDC_Player_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgLobbyDC_PlayerTrade.NotifyMapChange
// [0x00020400] ( FUNC_Native )
struct UTgLobbyDC_PlayerTrade_execNotifyMapChange_Parms
{
};

// Function TgClientBase.TgLobbyDC_PlayerTrade.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgLobbyDC_PlayerTrade_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgLobbyDC_Skin.GetIndirectlyPurchasable
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Skin_execGetIndirectlyPurchasable_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgLobbyDC_Skin.GetSelectedByUs
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Skin_execGetSelectedByUs_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgLobbyDC_Skin.GetAvailable
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Skin_execGetAvailable_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgLobbyDC_Skin.GetSubtype
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Skin_execGetSubtype_Parms
{
	struct Fdword                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgLobbyDC_Skin.GetSkinId
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Skin_execGetSkinId_Parms
{
	struct Fdword                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgLobbyDC_Skin.SetOwned
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Skin_execSetOwned_Parms
{
	unsigned long                                      bOwned : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgLobbyDC_Skin.SetIndirectlyPurchasable
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Skin_execSetIndirectlyPurchasable_Parms
{
	unsigned long                                      bCanIndirectlyPurchase : 1;                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgLobbyDC_Skin.SetPurchasable
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Skin_execSetPurchasable_Parms
{
	unsigned long                                      bCanPurchase : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgLobbyDC_Skin.SetAvailable
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Skin_execSetAvailable_Parms
{
	unsigned long                                      bIsAvail : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgLobbyDC_Skin.SetSelectedByUs
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Skin_execSetSelectedByUs_Parms
{
	unsigned long                                      bSelByUs : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgLobbyDC_Skin.SetVisible
// [0x00020400] ( FUNC_Native )
struct UTgLobbyDC_Skin_execSetVisible_Parms
{
	unsigned long                                      Visible : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgLobbyDC_Skin.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgLobbyDC_Skin_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgLobbyDC_Team.ClearMatchData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Team_execClearMatchData_Parms
{
};

// Function TgClientBase.TgLobbyDC_Team.EndUpdateBans
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Team_execEndUpdateBans_Parms
{
	unsigned long                                      bShowSpectateInfo : 1;                            		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgLobbyDC_Team.UpdateNextBan
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Team_execUpdateNextBan_Parms
{
	struct FPointer                                    pRow;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bShowSpectateInfo : 1;                            		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgLobbyDC_Team.BeginUpdateBans
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Team_execBeginUpdateBans_Parms
{
};

// Function TgClientBase.TgLobbyDC_Team.EndUpdateMembers
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Team_execEndUpdateMembers_Parms
{
};

// Function TgClientBase.TgLobbyDC_Team.UpdateNextMember
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Team_execUpdateNextMember_Parms
{
	struct FPointer                                    pRow;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgLobbyDC_Team.BeginUpdateMembers
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Team_execBeginUpdateMembers_Parms
{
};

// Function TgClientBase.TgLobbyDC_Team.ClearRoleCalls
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Team_execClearRoleCalls_Parms
{
};

// Function TgClientBase.TgLobbyDC_Team.OnMatchMessageIDTag
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Team_execOnMatchMessageIDTag_Parms
{
	struct FPointer                                    pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgLobbyDC_Team.OnPlayerMute
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgLobbyDC_Team_execOnPlayerMute_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgLobbyDC_Team.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgLobbyDC_Team_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchInventory.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGFxMatchInventory_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchInventory.ActivateTeamBooster
// [0x00020400] ( FUNC_Native )
struct UTgGFxMatchInventory_execActivateTeamBooster_Parms
{
	struct Fdword                                      dwItemLootId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct Fdword                                      dwItemSubType;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchInventory.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxMatchInventory_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxMatchInventory.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxMatchInventory_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgDataGroup_Settings.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgDataGroup_Settings_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSettingsDC_Account.usc_ResetEmailResponse
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_Account_execusc_ResetEmailResponse_Parms
{
};

// Function TgClientBase.TgSettingsDC_Account.usc_SetAccountSettings
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_Account_execusc_SetAccountSettings_Parms
{
	unsigned long                                      optInSmiteNewsLetter : 1;                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     sEmail;                                           		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgSettingsDC_Account.PopulateAccountData
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_Account_execPopulateAccountData_Parms
{
};

// Function TgClientBase.TgSettingsDC_Account.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_Account_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSettingsDC_Audio.usc_requestDeviceList
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_Audio_execusc_requestDeviceList_Parms
{
};

// Function TgClientBase.TgSettingsDC_Audio.usc_SetAudioSettings
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_Audio_execusc_SetAudioSettings_Parms
{
	float                                              Master;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              sfx;                                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              music;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              voice;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              matchNotifier;                                    		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      AllPlayerMute : 1;                                		// 0x0014 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      skipSave : 1;                                     		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      MasterMute : 1;                                   		// 0x001C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      SFXMute : 1;                                      		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      MusicMute : 1;                                    		// 0x0024 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      VoiceMute : 1;                                    		// 0x0028 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      MatchNotifierMute : 1;                            		// 0x002C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ChatNotifierMute : 1;                             		// 0x0030 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      LicensedMusicMute : 1;                            		// 0x0034 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     DefaultAudioDevice;                               		// 0x0038 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      VivoxEnabled : 1;                                 		// 0x0048 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              vivoxVol;                                         		// 0x004C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      vivoxVolMute : 1;                                 		// 0x0050 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              vivoxMic;                                         		// 0x0054 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      VivoxMicMute : 1;                                 		// 0x0058 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                VivoxInputType;                                   		// 0x005C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSettingsDC_Audio.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_Audio_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSettingsDC_KeyBinding.OnInputSettingChange
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_KeyBinding_execOnInputSettingChange_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSettingsDC_KeyBinding.OnKeyBindMenuUpdate
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_KeyBinding_execOnKeyBindMenuUpdate_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSettingsDC_KeyBinding.OnKeyDisplayUpdate
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_KeyBinding_execOnKeyDisplayUpdate_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSettingsDC_KeyBinding.usc_SetControllerSettings
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_KeyBinding_execusc_SetControllerSettings_Parms
{
	unsigned long                                      bInvertMouse : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bControllerFeedback : 1;                          		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              fLookSensitivityX;                                		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fLookSensitivityY;                                		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fLookAccelSpeed;                                  		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDeadZoneLeft;                                    		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDeadZoneRight;                                   		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bJumpEnabled : 1;                                 		// 0x001C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bPublicParty : 1;                                 		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bSkipSave : 1;                                    		// 0x0024 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bEnableBasicAttackControllerFeedback : 1;         		// 0x0028 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bEnableAimAssist : 1;                             		// 0x002C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bUseFixedPitchMode : 1;                           		// 0x0030 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgSettingsDC_KeyBinding.PopulateKeybinding
// [0x00024400] ( FUNC_Native )
struct UTgSettingsDC_KeyBinding_execPopulateKeybinding_Parms
{
	int                                                settingtype;                                      		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgSettingsDC_KeyBinding.InitializeBindingData
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_KeyBinding_execInitializeBindingData_Parms
{
};

// Function TgClientBase.TgSettingsDC_KeyBinding.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_KeyBinding_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSettingsDC_Spectator.OnSpecMenuUpdate
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_Spectator_execOnSpecMenuUpdate_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSettingsDC_Spectator.OnSpecKeyDisplayUpdate
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_Spectator_execOnSpecKeyDisplayUpdate_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSettingsDC_Spectator.PopulateKeybinding
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_Spectator_execPopulateKeybinding_Parms
{
};

// Function TgClientBase.TgSettingsDC_Spectator.InitializeBindingData
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_Spectator_execInitializeBindingData_Parms
{
};

// Function TgClientBase.TgSettingsDC_Spectator.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_Spectator_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSettingsDC_UI.usc_SetCrossplaySetting
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_UI_execusc_SetCrossplaySetting_Parms
{
	int                                                newCrossplaySetting;                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSettingsDC_UI.usc_GetClientCrossplaySearchValue
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_UI_execusc_GetClientCrossplaySearchValue_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgSettingsDC_UI.usc_SetUISettings
// [0x00024400] ( FUNC_Native )
struct UTgSettingsDC_UI_execusc_SetUISettings_Parms
{
	struct FString                                     SettingName;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     settingValue;                                     		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                settingtype;                                      		// 0x0020 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgSettingsDC_UI.OnPrivilegeUpdate
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_UI_execOnPrivilegeUpdate_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSettingsDC_UI.OnInputSettingChange
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_UI_execOnInputSettingChange_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSettingsDC_UI.OnLoginSuccess
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_UI_execOnLoginSuccess_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSettingsDC_UI.UpdateUISettings
// [0x00024400] ( FUNC_Native )
struct UTgSettingsDC_UI_execUpdateUISettings_Parms
{
	int                                                settingtype;                                      		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgSettingsDC_UI.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_UI_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSettingsDC_Video.ShowSettingsChangedPopup
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSettingsDC_Video_execShowSettingsChangedPopup_Parms
{
};

// Function TgClientBase.TgSettingsDC_Video.CreateResolutionList
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSettingsDC_Video_execCreateResolutionList_Parms
{
};

// Function TgClientBase.TgSettingsDC_Video.UpdateVideoSettings
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSettingsDC_Video_execUpdateVideoSettings_Parms
{
};

// Function TgClientBase.TgSettingsDC_Video.ViewportResized
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSettingsDC_Video_execViewportResized_Parms
{
};

// Function TgClientBase.TgSettingsDC_Video.usc_SetConsoleSettings
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSettingsDC_Video_execusc_SetConsoleSettings_Parms
{
	float                                              fGamma;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVsync : 1;                                       		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              fSafeFrame;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSettingsDC_Video.usc_SetVsyncValue
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSettingsDC_Video_execusc_SetVsyncValue_Parms
{
	unsigned long                                      bVsync : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgSettingsDC_Video.usc_AutoConfig
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSettingsDC_Video_execusc_AutoConfig_Parms
{
};

// Function TgClientBase.TgSettingsDC_Video.usc_SetGammaValue
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSettingsDC_Video_execusc_SetGammaValue_Parms
{
	float                                              nGamma;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSettingsDC_Video.usc_SetVideoSettings
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgSettingsDC_Video_execusc_SetVideoSettings_Parms
{
	float                                              nWorldDetail;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              nTextureDetail;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              nShadowDetail;                                    		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              nParticleDetail;                                  		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bUseVSync : 1;                                    		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bUseSpecialMatEffects : 1;                        		// 0x0014 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bUseRagdollPhysics : 1;                           		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bFullScreen : 1;                                  		// 0x001C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bBorderless : 1;                                  		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              nResX;                                            		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              nResY;                                            		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nMultiSampleCount;                                		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bD3D11Enabled : 1;                                		// 0x0030 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                nFXAAQuality;                                     		// 0x0034 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nShaderQuality;                                   		// 0x0038 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nResolutionScale;                                 		// 0x003C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgSettingsDC_Video.InitializeData
// [0x00020400] ( FUNC_Native )
struct UTgSettingsDC_Video_execInitializeData_Parms
{
	class UTgDataHandler*                              Handler;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UTgDataChunk*                                parentChunk;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxClanListBase.UpdateApplicationData
// [0x00020802] ( FUNC_Event )
struct UTgGFxClanListBase_eventUpdateApplicationData_Parms
{
};

// Function TgClientBase.TgGFxClanListBase.ASC_UpdateApplicationData
// [0x00020003] ( FUNC_Final )
struct UTgGFxClanListBase_execASC_UpdateApplicationData_Parms
{
};

// Function TgClientBase.TgGFxClanListBase.UpdateClanList
// [0x00020802] ( FUNC_Event )
struct UTgGFxClanListBase_eventUpdateClanList_Parms
{
};

// Function TgClientBase.TgGFxClanListBase.ASC_UpdateClanList
// [0x00020003] ( FUNC_Final )
struct UTgGFxClanListBase_execASC_UpdateClanList_Parms
{
};

// Function TgClientBase.TgGFxClanListBase.USC_ApplyToClan
// [0x00020400] ( FUNC_Native )
struct UTgGFxClanListBase_execUSC_ApplyToClan_Parms
{
	int                                                nClanId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWithMessage : 1;                                 		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGFxClanListBase.USC_SearchClans
// [0x00020400] ( FUNC_Native )
struct UTgGFxClanListBase_execUSC_SearchClans_Parms
{
	struct FString                                     sSearchString;                                    		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nJoinTypeId;                                      		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nRegionId;                                        		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bRecommendedOnly : 1;                             		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGFxClanListBase.FinishLoading
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxClanListBase_eventFinishLoading_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxClanListBase.USC_RequestUpdate
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxClanListBase_execUSC_RequestUpdate_Parms
{
};

// Function TgClientBase.TgGFxClanListBase.SetList
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgGFxClanListBase_execSetList_Parms
{
	class UGFxObject*                                  pArray;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sMessage;                                         		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxClanListBase.OnPlayerRequest
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxClanListBase_execOnPlayerRequest_Parms
{
	class UTgGFxPlayerProvider*                        pSource;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxClanListBase.OnPrivilegeCheck
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxClanListBase_execOnPrivilegeCheck_Parms
{
	unsigned char                                      ePriv;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ePermiss;                                         		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxClanListBase.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxClanListBase_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxClanListBase.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxClanListBase_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxFriendsListView.USC_DeclineAllFriendRequests
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxFriendsListView_execUSC_DeclineAllFriendRequests_Parms
{
};

// Function TgClientBase.TgGFxFriendsListView.FinishLoading
// [0x00024803] ( FUNC_Final | FUNC_Event )
struct UTgGFxFriendsListView_eventFinishLoading_Parms
{
	struct FString                                     Message;                                          		// 0x0000 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxFriendsListView.OnDeclineRequestProgress
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgGFxFriendsListView_execOnDeclineRequestProgress_Parms
{
	struct FTgDeferProgress                            Progress;                                         		// 0x0000 (0x0014) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxFriendsListView.OnServerSearchResults
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxFriendsListView_execOnServerSearchResults_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxFriendsListView.OnLocalSearchResults
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxFriendsListView_execOnLocalSearchResults_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxFriendsListView.OnSearchEmpty
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxFriendsListView_execOnSearchEmpty_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxFriendsListView.OnStartSearch
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxFriendsListView_execOnStartSearch_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxFriendsListView.USC_Search
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgGFxFriendsListView_execUSC_Search_Parms
{
	struct FString                                     sSearch;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bIsLocal : 1;                                     		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxFriendsListView.USC_RequestUpdateList
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxFriendsListView_execUSC_RequestUpdateList_Parms
{
};

// Function TgClientBase.TgGFxFriendsListView.SetList
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgGFxFriendsListView_execSetList_Parms
{
	class UGFxObject*                                  pArray;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sError;                                           		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxFriendsListView.OnPrivilegeCheck
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxFriendsListView_execOnPrivilegeCheck_Parms
{
	unsigned char                                      ePriv;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eLevel;                                           		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxFriendsListView.OnFriendsUpdate
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxFriendsListView_execOnFriendsUpdate_Parms
{
	class UTgEventDataItem*                            pEventBase;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxFriendsListView.OnReceiveFriends
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxFriendsListView_execOnReceiveFriends_Parms
{
	class UTgGFxFriendData*                            pFriends;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxFriendsListView.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxFriendsListView_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxFriendsListView.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxFriendsListView_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxLearnVGS.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxLearnVGS_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxLearnVGS.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxLearnVGS_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPartyInvitePane.OnSearchServer
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPartyInvitePane_execOnSearchServer_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPartyInvitePane.OnSearchLocal
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPartyInvitePane_execOnSearchLocal_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPartyInvitePane.OnSearchEmpty
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPartyInvitePane_execOnSearchEmpty_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPartyInvitePane.OnSearchStart
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPartyInvitePane_execOnSearchStart_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPartyInvitePane.USC_Search
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPartyInvitePane_execUSC_Search_Parms
{
	struct FString                                     sSearch;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxPartyInvitePane.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxPartyInvitePane_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxPartyInvitePane.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxPartyInvitePane_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPartyList.FinishLoading
// [0x00024803] ( FUNC_Final | FUNC_Event )
struct UTgGFxPartyList_eventFinishLoading_Parms
{
	struct FString                                     Message;                                          		// 0x0000 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxPartyList.USC_GetPartiablePlayers
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPartyList_execUSC_GetPartiablePlayers_Parms
{
	class UGFxObject*                                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPartyList.USC_Disband
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPartyList_execUSC_Disband_Parms
{
};

// Function TgClientBase.TgGFxPartyList.USC_KickPlayer
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPartyList_execUSC_KickPlayer_Parms
{
	class UTgGFxPlayerData*                            pGFxPlayer;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPartyList.USC_MakeLeader
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPartyList_execUSC_MakeLeader_Parms
{
	class UTgGFxPlayerData*                            pGFxPlayer;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPartyList.USC_AddPlayer
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPartyList_execUSC_AddPlayer_Parms
{
	class UTgGFxPlayerData*                            pGFxPlayer;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPartyList.OnMctsEvent
// [0x00020400] ( FUNC_Native )
struct UTgGFxPartyList_execOnMctsEvent_Parms
{
	struct FPointer                                    pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPartyList.OnPartyUpdate
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPartyList_execOnPartyUpdate_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPartyList.OnFriendRequest
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPartyList_execOnFriendRequest_Parms
{
	class UTgGFxPlayerProvider*                        pProvider;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPartyList.Repopulate
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPartyList_execRepopulate_Parms
{
};

// Function TgClientBase.TgGFxPartyList.OnPrivilegeCheck
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPartyList_execOnPrivilegeCheck_Parms
{
	unsigned char                                      ePriv;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eLevel;                                           		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPartyList.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxPartyList_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxPartyList.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxPartyList_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxAccountLinking.ShowLinkExistingAccountScreen
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxAccountLinking_eventShowLinkExistingAccountScreen_Parms
{
};

// Function TgClientBase.TgGFxAccountLinking.ShowAccountCreationScreen
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxAccountLinking_eventShowAccountCreationScreen_Parms
{
};

// Function TgClientBase.TgGFxAccountLinking.USC_LinkExistingHiRezAccount
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxAccountLinking_execUSC_LinkExistingHiRezAccount_Parms
{
	struct FString                                     sName;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sPassword;                                        		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxAccountLinking.USC_CreateAndLinkHiRezAccount
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxAccountLinking_execUSC_CreateAndLinkHiRezAccount_Parms
{
	struct FString                                     sName;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sPassword;                                        		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sEmail;                                           		// 0x0020 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ageRequirement : 1;                               		// 0x0030 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGFxAccountLinking.OnPopup
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgGFxAccountLinking_execOnPopup_Parms
{
	class UTgPagePopup*                                pData;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FPopupResponse                              Response;                                         		// 0x0008 (0x0018) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxAccountLinking.OnLinkingError
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxAccountLinking_execOnLinkingError_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxAccountLinking.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxAccountLinking_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxAccountLinking.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxAccountLinking_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxBuyAllPurchaseModal.USC_ShowErrorIfNotEnoughCurrency
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxBuyAllPurchaseModal_execUSC_ShowErrorIfNotEnoughCurrency_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxBuyAllPurchaseModal.USC_PurchaseItem
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxBuyAllPurchaseModal_execUSC_PurchaseItem_Parms
{
};

// Function TgClientBase.TgGFxBuyAllPurchaseModal.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxBuyAllPurchaseModal_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxBuyAllPurchaseModal.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxBuyAllPurchaseModal_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxChatModalBase.ClearTimeouts
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxChatModalBase_execClearTimeouts_Parms
{
};

// Function TgClientBase.TgGFxChatModalBase.OnInfoDelay
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxChatModalBase_execOnInfoDelay_Parms
{
	float                                              nDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxChatModalBase.ReceivePlayerInfo
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxChatModalBase_execReceivePlayerInfo_Parms
{
	struct FPointer                                    pEventBase;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxChatModalBase.SetChannelMembers
// [0x00020802] ( FUNC_Event )
struct UTgGFxChatModalBase_eventSetChannelMembers_Parms
{
	class UGFxObject*                                  Data;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxChatModalBase.MinimizeChat
// [0x00020802] ( FUNC_Event )
struct UTgGFxChatModalBase_eventMinimizeChat_Parms
{
};

// Function TgClientBase.TgGFxChatModalBase.MaximizeChat
// [0x00020802] ( FUNC_Event )
struct UTgGFxChatModalBase_eventMaximizeChat_Parms
{
};

// Function TgClientBase.TgGFxChatModalBase.UpdateChannelMembers
// [0x00020003] ( FUNC_Final )
struct UTgGFxChatModalBase_execUpdateChannelMembers_Parms
{
	class UGFxObject*                                  Obj;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxChatModalBase.OnChatEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxChatModalBase_execOnChatEvent_Parms
{
	class UTgEventDataItem*                            pEventBase;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxChatModalBase.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxChatModalBase_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxChatModalBase.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxChatModalBase_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxExternalLink.USC_GoTolink
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxExternalLink_execUSC_GoTolink_Parms
{
	struct FString                                     sLink;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxExternalLink.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxExternalLink_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxFooterBase.ShowCalloutNotification
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGfxFooterBase_eventShowCalloutNotification_Parms
{
	struct FString                                     sValue;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              fTime;                                            		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxFooterBase.UpdateBoostBtn
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGfxFooterBase_eventUpdateBoostBtn_Parms
{
	int                                                Time;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxFooterBase.ShowSpectateQueued
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGfxFooterBase_eventShowSpectateQueued_Parms
{
	unsigned long                                      bQueued : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGfxFooterBase.OnFriendUpdateTimeout
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxFooterBase_execOnFriendUpdateTimeout_Parms
{
	float                                              nDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxFooterBase.OnFriendUpdate
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxFooterBase_execOnFriendUpdate_Parms
{
	struct FPointer                                    pEventBase;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxFooterBase.OnPopupClosed
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxFooterBase_execOnPopupClosed_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxFooterBase.OnNoMatchFound
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxFooterBase_execOnNoMatchFound_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxFooterBase.OnInputModeChanged
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxFooterBase_execOnInputModeChanged_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxFooterBase.OnNavigationAction
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxFooterBase_execOnNavigationAction_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxFooterBase.OnFocusFooterMain
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxFooterBase_execOnFocusFooterMain_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxFooterBase.RefreshBoosterTimer
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxFooterBase_execRefreshBoosterTimer_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxFooterBase.RefreshDisplayMode
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxFooterBase_execRefreshDisplayMode_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxFooterBase.OnUpdateLogoState
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxFooterBase_execOnUpdateLogoState_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxFooterBase.OnLobbyStateChange
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxFooterBase_execOnLobbyStateChange_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxFooterBase.UpdateCallouts
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxFooterBase_execUpdateCallouts_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxFooterBase.OnSetFooterDisplayMode
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxFooterBase_execOnSetFooterDisplayMode_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxFooterBase.OnUpdatePlayerInfoVisibility
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxFooterBase_execOnUpdatePlayerInfoVisibility_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxFooterBase.OnSpectateQueuedState
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGfxFooterBase_execOnSpectateQueuedState_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxFooterBase.Tick
// [0x00020400] ( FUNC_Native )
struct UTgGfxFooterBase_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxFooterBase.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGfxFooterBase_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGfxFooterBase.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxFooterBase_execUninitialize_Parms
{
};

// Function TgClientBase.TgGfxFooterBase.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGfxFooterBase_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxLoginBase.USC_GetConsoleLoginPrompt
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgGFxLoginBase_execUSC_GetConsoleLoginPrompt_Parms
{
	unsigned long                                      bLoginEnabled : 1;                                		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxLoginBase.USC_SettingsMenuLoaded
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxLoginBase_execUSC_SettingsMenuLoaded_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxLoginBase.USC_CheckServerStatusIsUp
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxLoginBase_execUSC_CheckServerStatusIsUp_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxLoginBase.USC_ShowLinkingPopup
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxLoginBase_execUSC_ShowLinkingPopup_Parms
{
};

// Function TgClientBase.TgGFxLoginBase.USC_CancelAccountCreation
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxLoginBase_execUSC_CancelAccountCreation_Parms
{
};

// Function TgClientBase.TgGFxLoginBase.USC_LoginGoogle
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxLoginBase_execUSC_LoginGoogle_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxLoginBase.USC_LoginFacebook
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxLoginBase_execUSC_LoginFacebook_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxLoginBase.USC_CreateHirezAccount
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxLoginBase_execUSC_CreateHirezAccount_Parms
{
	struct FString                                     sName;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sPassword;                                        		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sEmail;                                           		// 0x0020 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ageRequirement : 1;                               		// 0x0030 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0034 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxLoginBase.USC_Login
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxLoginBase_execUSC_Login_Parms
{
	struct FString                                     sUsername;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sPassword;                                        		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxLoginBase.USC_Reconnect
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxLoginBase_execUSC_Reconnect_Parms
{
};

// Function TgClientBase.TgGFxLoginBase.ShowAccountCreationScreen
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxLoginBase_eventShowAccountCreationScreen_Parms
{
	unsigned long                                      bShowCreateScreen : 1;                            		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bDisableCreateAccountBtn : 1;                     		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGFxLoginBase.SetLoginEnabled
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxLoginBase_eventSetLoginEnabled_Parms
{
	unsigned long                                      bCanLogin : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGFxLoginBase.LoginQueue
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxLoginBase_eventLoginQueue_Parms
{
};

// Function TgClientBase.TgGFxLoginBase.LockOutUser
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxLoginBase_eventLockOutUser_Parms
{
	struct FString                                     sProcessing;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bShowLoading : 1;                                 		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bForceCall : 1;                                   		// 0x0014 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGFxLoginBase.LoginConsole
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxLoginBase_eventLoginConsole_Parms
{
	int                                                nControllerIdx;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxLoginBase.asc_LoginReady
// [0x00024803] ( FUNC_Final | FUNC_Event )
struct UTgGFxLoginBase_eventasc_LoginReady_Parms
{
	int                                                nAuthType;                                        		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgGFxLoginBase.asc_MustAcceptEula
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxLoginBase_eventasc_MustAcceptEula_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxLoginBase.ReloadLoginScreen
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxLoginBase_eventReloadLoginScreen_Parms
{
};

// Function TgClientBase.TgGFxLoginBase.CreateAccountError
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxLoginBase_eventCreateAccountError_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxLoginBase.DefaultLoginError
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxLoginBase_eventDefaultLoginError_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxLoginBase.LoginAccepted
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxLoginBase_eventLoginAccepted_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxLoginBase.GameNotOnAccount
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxLoginBase_eventGameNotOnAccount_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxLoginBase.LoginInvalid
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxLoginBase_eventLoginInvalid_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxLoginBase.AccountSuspend
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxLoginBase_eventAccountSuspend_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxLoginBase.WrongVersion
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxLoginBase_eventWrongVersion_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxLoginBase.NameInvalid
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxLoginBase_eventNameInvalid_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxLoginBase.NameUnavailable
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxLoginBase_eventNameUnavailable_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxLoginBase.NameUnacceptable
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxLoginBase_eventNameUnacceptable_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxLoginBase.AccountNameChange
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxLoginBase_eventAccountNameChange_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxLoginBase.AccountHasNoPlayer
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UTgGFxLoginBase_eventAccountHasNoPlayer_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxLoginBase.OnPopup
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgGFxLoginBase_execOnPopup_Parms
{
	class UTgPagePopup*                                pData;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FPopupResponse                              Response;                                         		// 0x0008 (0x0018) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxLoginBase.ServerUnderMaintenance
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxLoginBase_execServerUnderMaintenance_Parms
{
};

// Function TgClientBase.TgGFxLoginBase.SetLoginReady
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgGFxLoginBase_execSetLoginReady_Parms
{
	int                                                nAuthType;                                        		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function TgClientBase.TgGFxLoginBase.OnServerStatusTimeout
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxLoginBase_execOnServerStatusTimeout_Parms
{
	float                                              nDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxLoginBase.CheckServerStatus
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxLoginBase_execCheckServerStatus_Parms
{
};

// Function TgClientBase.TgGFxLoginBase.OnSceneOpened
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxLoginBase_execOnSceneOpened_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxLoginBase.OnLoginError
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxLoginBase_execOnLoginError_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxLoginBase.OverrideStatusLockout
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxLoginBase_execOverrideStatusLockout_Parms
{
};

// Function TgClientBase.TgGFxLoginBase.MustAcceptEula
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxLoginBase_execMustAcceptEula_Parms
{
	struct FString                                     sError;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxLoginBase.OnInput
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxLoginBase_execOnInput_Parms
{
	struct FPointer                                    pInputEvent;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxLoginBase.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxLoginBase_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxLoginBase.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxLoginBase_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchAutoOptions.USC_SaveOptions
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchAutoOptions_execUSC_SaveOptions_Parms
{
	unsigned long                                      bAutoSkill : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bAutoBuy : 1;                                     		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bAutoFilter : 1;                                  		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bShowGameTips : 1;                                		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bShowRoleGuides : 1;                              		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bShowAllRecommendedBuilds : 1;                    		// 0x0014 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchAutoOptions.USC_RequestOptions
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchAutoOptions_execUSC_RequestOptions_Parms
{
};

// Function TgClientBase.TgGFxMatchAutoOptions.UpdateValues
// [0x00020802] ( FUNC_Event )
struct UTgGFxMatchAutoOptions_eventUpdateValues_Parms
{
	unsigned long                                      bAutoSkill : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bAutoBuy : 1;                                     		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bAutoFilter : 1;                                  		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bShowGameTips : 1;                                		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bShowRoleGuides : 1;                              		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bIsTutorial : 1;                                  		// 0x0014 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bShowAllRecommendedBuilds : 1;                    		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchAutoOptions.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxMatchAutoOptions_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxMatchAutoOptions.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxMatchAutoOptions_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchCharacterConfirm.USC_Confirm
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchCharacterConfirm_execUSC_Confirm_Parms
{
};

// Function TgClientBase.TgGFxMatchCharacterConfirm.GetLocalPlayerBanning
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchCharacterConfirm_execGetLocalPlayerBanning_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxMatchCharacterConfirm.OnUpdate
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchCharacterConfirm_execOnUpdate_Parms
{
	float                                              nDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchCharacterConfirm.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxMatchCharacterConfirm_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxMatchCharacterConfirm.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxMatchCharacterConfirm_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchLobbyShared.USC_ToggleChat
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchLobbyShared_execUSC_ToggleChat_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxMatchLobbyShared.USC_OpenActions
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchLobbyShared_execUSC_OpenActions_Parms
{
};

// Function TgClientBase.TgGFxMatchLobbyShared.USC_PreviewItem
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchLobbyShared_execUSC_PreviewItem_Parms
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nItemType;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxMatchLobbyShared.USC_RequestReroll
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchLobbyShared_execUSC_RequestReroll_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxMatchLobbyShared.USC_CanPurchaseReroll
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchLobbyShared_execUSC_CanPurchaseReroll_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxMatchLobbyShared.USC_LeaveLobby
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchLobbyShared_execUSC_LeaveLobby_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxMatchLobbyShared.USC_LobbyAction
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchLobbyShared_execUSC_LobbyAction_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxMatchLobbyShared.USC_RequestTrade
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchLobbyShared_execUSC_RequestTrade_Parms
{
	int                                                nPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxMatchLobbyShared.USC_SelectEmote
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchLobbyShared_execUSC_SelectEmote_Parms
{
	int                                                nEmoteId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      isAux : 1;                                        		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxMatchLobbyShared.USC_SelectVoice
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchLobbyShared_execUSC_SelectVoice_Parms
{
	int                                                nVoiceIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      isAux : 1;                                        		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxMatchLobbyShared.USC_SelectSkin
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchLobbyShared_execUSC_SelectSkin_Parms
{
	int                                                nSkinId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      isAux : 1;                                        		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxMatchLobbyShared.USC_SelectClass
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchLobbyShared_execUSC_SelectClass_Parms
{
	int                                                nClassId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      isAux : 1;                                        		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxMatchLobbyShared.OpenTeamBoosters
// [0x00020802] ( FUNC_Event )
struct UTgGFxMatchLobbyShared_eventOpenTeamBoosters_Parms
{
};

// Function TgClientBase.TgGFxMatchLobbyShared.NotifyUpdateGuideCallout
// [0x00020802] ( FUNC_Event )
struct UTgGFxMatchLobbyShared_eventNotifyUpdateGuideCallout_Parms
{
	int                                                nCount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchLobbyShared.NotifyUpdateEmoteData
// [0x00020802] ( FUNC_Event )
struct UTgGFxMatchLobbyShared_eventNotifyUpdateEmoteData_Parms
{
	class UGFxObject*                                  pData;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchLobbyShared.NotifyUpdateVoiceData
// [0x00020802] ( FUNC_Event )
struct UTgGFxMatchLobbyShared_eventNotifyUpdateVoiceData_Parms
{
	class UGFxObject*                                  pData;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchLobbyShared.NotifySelectVoice
// [0x00020802] ( FUNC_Event )
struct UTgGFxMatchLobbyShared_eventNotifySelectVoice_Parms
{
	int                                                nVoiceValueId;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchLobbyShared.NotifyRerollsRemaining
// [0x00020802] ( FUNC_Event )
struct UTgGFxMatchLobbyShared_eventNotifyRerollsRemaining_Parms
{
	int                                                nCount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchLobbyShared.NotifyLockIn
// [0x00020802] ( FUNC_Event )
struct UTgGFxMatchLobbyShared_eventNotifyLockIn_Parms
{
	class UGFxObject*                                  Result;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchLobbyShared.NotifySelectClass
// [0x00020802] ( FUNC_Event )
struct UTgGFxMatchLobbyShared_eventNotifySelectClass_Parms
{
	int                                                nProfileId;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchLobbyShared.AttemptIndirectPurchase
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchLobbyShared_execAttemptIndirectPurchase_Parms
{
	struct Fdword                                      nClassId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct Fdword                                      nSkinId;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxMatchLobbyShared.AttemptMatchPopup
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchLobbyShared_execAttemptMatchPopup_Parms
{
};

// Function TgClientBase.TgGFxMatchLobbyShared.GetMatchDC
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchLobbyShared_execGetMatchDC_Parms
{
	class UTgLobbyDC_Match*                            ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxMatchLobbyShared.ClearSkinOverride
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchLobbyShared_execClearSkinOverride_Parms
{
};

// Function TgClientBase.TgGFxMatchLobbyShared.ActionError
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchLobbyShared_execActionError_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxMatchLobbyShared.PlayErrorSound
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchLobbyShared_execPlayErrorSound_Parms
{
};

// Function TgClientBase.TgGFxMatchLobbyShared.SetSkinPreview
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchLobbyShared_execSetSkinPreview_Parms
{
	struct Fdword                                      nSkinId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxMatchLobbyShared.CreateEmoteData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchLobbyShared_execCreateEmoteData_Parms
{
	struct Fdword                                      nBotId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxMatchLobbyShared.CreateVoiceData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchLobbyShared_execCreateVoiceData_Parms
{
	struct Fdword                                      nBotId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxMatchLobbyShared.CreateLockInResult
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchLobbyShared_execCreateLockInResult_Parms
{
	struct Fdword                                      nBotId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxMatchLobbyShared.OnRerollTimeout
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchLobbyShared_execOnRerollTimeout_Parms
{
	float                                              nDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchLobbyShared.SetDemoState
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchLobbyShared_execSetDemoState_Parms
{
	unsigned char                                      eDemoState;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchLobbyShared.OnAcquisition
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchLobbyShared_execOnAcquisition_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchLobbyShared.OnMenuAction
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchLobbyShared_execOnMenuAction_Parms
{
	struct Fdword                                      nAction;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxMatchLobbyShared.OnLeaveLobbyPopup
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchLobbyShared_execOnLeaveLobbyPopup_Parms
{
	class UTgPagePopup*                                pData;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FPopupResponse                              Response;                                         		// 0x0008 (0x0018) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxMatchLobbyShared.OnMctsEvent
// [0x00020400] ( FUNC_Native )
struct UTgGFxMatchLobbyShared_execOnMctsEvent_Parms
{
	struct FPointer                                    pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchLobbyShared.OnUpdateGuideCallout
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchLobbyShared_execOnUpdateGuideCallout_Parms
{
	class UTgEventDataItem*                            pEventBase;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchLobbyShared.OnTeamBooster
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchLobbyShared_execOnTeamBooster_Parms
{
	class UTgEventDataItem*                            pEventBase;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchLobbyShared.OnDemoEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchLobbyShared_execOnDemoEvent_Parms
{
	class UTgEventDataItem*                            pEventBase;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchLobbyShared.OnCancelPurchase
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchLobbyShared_execOnCancelPurchase_Parms
{
	class UTgEventDataItem*                            pEventBase;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchLobbyShared.OnMatchStateChange
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchLobbyShared_execOnMatchStateChange_Parms
{
	class UTgEventDataItem*                            pEventBase;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchLobbyShared.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxMatchLobbyShared_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxMatchLobbyShared.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxMatchLobbyShared_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchRoleCall.USC_CallRole
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchRoleCall_execUSC_CallRole_Parms
{
	int                                                nValueId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchRoleCall.USC_RequestDataProvider
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchRoleCall_execUSC_RequestDataProvider_Parms
{
};

// Function TgClientBase.TgGFxMatchRoleCall.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxMatchRoleCall_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxMatchRoleCall.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxMatchRoleCall_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchTradePopup.USC_RespondToTrade
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchTradePopup_execUSC_RespondToTrade_Parms
{
	unsigned long                                      bAccept : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchTradePopup.RejectTrade
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchTradePopup_execRejectTrade_Parms
{
};

// Function TgClientBase.TgGFxMatchTradePopup.AcceptTrade
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchTradePopup_execAcceptTrade_Parms
{
};

// Function TgClientBase.TgGFxMatchTradePopup.CloseScene
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchTradePopup_execCloseScene_Parms
{
};

// Function TgClientBase.TgGFxMatchTradePopup.OnRoleTradeRequest
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchTradePopup_execOnRoleTradeRequest_Parms
{
	struct FPointer                                    pMarshal;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchTradePopup.OnTradeCancel
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchTradePopup_execOnTradeCancel_Parms
{
	struct FPointer                                    pMarshal;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchTradePopup.OnTradeRequest
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchTradePopup_execOnTradeRequest_Parms
{
	struct FPointer                                    pMarshal;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchTradePopup.OnMctsEvent
// [0x00020400] ( FUNC_Native )
struct UTgGFxMatchTradePopup_execOnMctsEvent_Parms
{
	struct FPointer                                    pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMatchTradePopup.PopulateRoleTradeData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchTradePopup_execPopulateRoleTradeData_Parms
{
	struct FPointer                                    pRequester;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FPointer                                    pUs;                                              		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct Fdword                                      traderRole;                                       		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct Fdword                                      playerRole;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxMatchTradePopup.PopulateTradeData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxMatchTradePopup_execPopulateTradeData_Parms
{
	struct FPointer                                    pRequester;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FPointer                                    pUs;                                              		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxMatchTradePopup.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxMatchTradePopup_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxMatchTradePopup.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxMatchTradePopup_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMorePoints.SetupMorePoints
// [0x00020400] ( FUNC_Native )
struct UTgGFxMorePoints_execSetupMorePoints_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMorePoints.ReceiveGFxData
// [0x00020400] ( FUNC_Native )
struct UTgGFxMorePoints_execReceiveGFxData_Parms
{
	class UGFxObject*                                  pObj;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxMorePoints.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxMorePoints_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxMorePoints.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxMorePoints_execInitialize_Parms
{
	class UTgMoviePlayer*                              pMoviePlayer;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPausedDisplay.OnKeyBindChange
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPausedDisplay_execOnKeyBindChange_Parms
{
	class UTgEventDataItem*                            pEventBase;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPausedDisplay.OnInputIntercept
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPausedDisplay_execOnInputIntercept_Parms
{
	struct FPointer                                    pInputEvent;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPausedDisplay.UpdateBindIntercept
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPausedDisplay_execUpdateBindIntercept_Parms
{
};

// Function TgClientBase.TgGFxPausedDisplay.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxPausedDisplay_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxPausedDisplay.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxPausedDisplay_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPurchaseModalBase.HideMarketplaceVisibility
// [0x00020802] ( FUNC_Event )
struct UTgGFxPurchaseModalBase_eventHideMarketplaceVisibility_Parms
{
};

// Function TgClientBase.TgGFxPurchaseModalBase.SetupLongDescEvent
// [0x00020400] ( FUNC_Native )
struct UTgGFxPurchaseModalBase_execSetupLongDescEvent_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPurchaseModalBase.CloseScreen
// [0x00020802] ( FUNC_Event )
struct UTgGFxPurchaseModalBase_eventCloseScreen_Parms
{
};

// Function TgClientBase.TgGFxPurchaseModalBase.SetupBattlePassPurchaseLevelModal
// [0x00020802] ( FUNC_Event )
struct UTgGFxPurchaseModalBase_eventSetupBattlePassPurchaseLevelModal_Parms
{
	int                                                toLevel;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                bundleQuantity;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPurchaseModalBase.SetupDoubleBundle
// [0x00020802] ( FUNC_Event )
struct UTgGFxPurchaseModalBase_eventSetupDoubleBundle_Parms
{
	class UGFxObject*                                  Data;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  Data2;                                            		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                Location;                                         		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPurchaseModalBase.SetupBundleCompare
// [0x00020802] ( FUNC_Event )
struct UTgGFxPurchaseModalBase_eventSetupBundleCompare_Parms
{
	class UGFxObject*                                  Data;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  Data2;                                            		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPurchaseModalBase.SetupData
// [0x00020802] ( FUNC_Event )
struct UTgGFxPurchaseModalBase_eventSetupData_Parms
{
	class UGFxObject*                                  Data;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                popupType;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPurchaseModalBase.SetupLongDesc
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPurchaseModalBase_execSetupLongDesc_Parms
{
	struct FString                                     sItemName;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sLongDesc;                                        		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sSignedOffer;                                     		// 0x0020 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxPurchaseModalBase.USC_ShowErrorIfNotEnoughCurrency
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPurchaseModalBase_execUSC_ShowErrorIfNotEnoughCurrency_Parms
{
	int                                                nCurrencyType;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nQuantity;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nCouponId;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< class UGFxObject* >                        arrItemDatas;                                     		// 0x000C (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxPurchaseModalBase.USC_CompleteBatchPurchase
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPurchaseModalBase_execUSC_CompleteBatchPurchase_Parms
{
};

// Function TgClientBase.TgGFxPurchaseModalBase.USC_AddBatchPurchaseItem
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPurchaseModalBase_execUSC_AddBatchPurchaseItem_Parms
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nVendorId;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPriceInUI;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                CurrencyType;                                     		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Quantity;                                         		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nCouponId;                                        		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPurchaseModalBase.USC_StartBatchPurchase
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPurchaseModalBase_execUSC_StartBatchPurchase_Parms
{
};

// Function TgClientBase.TgGFxPurchaseModalBase.USC_OnCloseScreen
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPurchaseModalBase_execUSC_OnCloseScreen_Parms
{
};

// Function TgClientBase.TgGFxPurchaseModalBase.USC_CloseLongDesc
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPurchaseModalBase_execUSC_CloseLongDesc_Parms
{
};

// Function TgClientBase.TgGFxPurchaseModalBase.USC_OnClickConfirm
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPurchaseModalBase_execUSC_OnClickConfirm_Parms
{
};

// Function TgClientBase.TgGFxPurchaseModalBase.USC_PurchaseItem
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxPurchaseModalBase_execUSC_PurchaseItem_Parms
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nVendorId;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPriceInUI;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                CurrencyType;                                     		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Quantity;                                         		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nCouponId;                                        		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPurchaseModalBase.OpenOdysseyVoyagePurchaseModal
// [0x00020400] ( FUNC_Native )
struct UTgGFxPurchaseModalBase_execOpenOdysseyVoyagePurchaseModal_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPurchaseModalBase.OpenOdysseyTerritoryPurchaseModal
// [0x00020400] ( FUNC_Native )
struct UTgGFxPurchaseModalBase_execOpenOdysseyTerritoryPurchaseModal_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPurchaseModalBase.OpenBattlePassPurchaseLevelModal
// [0x00020400] ( FUNC_Native )
struct UTgGFxPurchaseModalBase_execOpenBattlePassPurchaseLevelModal_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPurchaseModalBase.OpenBattlePassPurchaseModal
// [0x00020400] ( FUNC_Native )
struct UTgGFxPurchaseModalBase_execOpenBattlePassPurchaseModal_Parms
{
	class UTgDataItemDoublePurchase*                   pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxPurchaseModalBase.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxPurchaseModalBase_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxPurchaseModalBase.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxPurchaseModalBase_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxRecentlyPlayed.FinishLoading
// [0x00024803] ( FUNC_Final | FUNC_Event )
struct UTgGFxRecentlyPlayed_eventFinishLoading_Parms
{
	struct FString                                     Message;                                          		// 0x0000 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxRecentlyPlayed.OnReceivePlayerNames
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxRecentlyPlayed_execOnReceivePlayerNames_Parms
{
	unsigned long                                      bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class UTgPlayerNameManager*                        pManager;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxRecentlyPlayed.OnPrivilegeCheck
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxRecentlyPlayed_execOnPrivilegeCheck_Parms
{
	unsigned char                                      ePriv;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eLevel;                                           		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxRecentlyPlayed.Populate
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxRecentlyPlayed_execPopulate_Parms
{
};

// Function TgClientBase.TgGFxRecentlyPlayed.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxRecentlyPlayed_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxRecentlyPlayed.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxRecentlyPlayed_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxSocialList.USC_TryOpenDevMenu
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxSocialList_execUSC_TryOpenDevMenu_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxSocialList.OnNavigate
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxSocialList_execOnNavigate_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxSocialList.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxSocialList_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxSocialList.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxSocialList_execInitialize_Parms
{
	class UTgMoviePlayer*                              pMP;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxVGSGame.USC_GameOver
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxVGSGame_execUSC_GameOver_Parms
{
	int                                                nCorrect;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nLongestStreak;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nTimeSecs;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nBonusTimeSecs;                                   		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxVGSGame.USC_GetHighScore
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxVGSGame_execUSC_GetHighScore_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxVGSGame.USC_GetNewCombo
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxVGSGame_execUSC_GetNewCombo_Parms
{
	int                                                ElapsedTime;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                maxTime;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxObject*                                  ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxVGSGame.OnQueueChange
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxVGSGame_execOnQueueChange_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxVGSGame.OnGamepadInput
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxVGSGame_execOnGamepadInput_Parms
{
	struct FPointer                                    pInputEvent;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxVGSGame.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxVGSGame_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxVGSGame.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxVGSGame_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxViewerStore.USC_UpdateSelectedItem
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxViewerStore_execUSC_UpdateSelectedItem_Parms
{
	int                                                nLootId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxViewerStore.USC_GoToStream
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxViewerStore_execUSC_GoToStream_Parms
{
};

// Function TgClientBase.TgGFxViewerStore.USC_GoToLinking
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxViewerStore_execUSC_GoToLinking_Parms
{
};

// Function TgClientBase.TgGFxViewerStore.USC_TeamBuy
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxViewerStore_execUSC_TeamBuy_Parms
{
	int                                                nLootId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxViewerStore.USC_RotatorBuy
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxViewerStore_execUSC_RotatorBuy_Parms
{
	int                                                nLootId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxViewerStore.USC_StoreBuy
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxViewerStore_execUSC_StoreBuy_Parms
{
	int                                                nLootId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nQuantity;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxViewerStore.USC_MatchVote
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxViewerStore_execUSC_MatchVote_Parms
{
	int                                                nGroupId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nTeamId;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxViewerStore.SetCameraModel
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxViewerStore_execSetCameraModel_Parms
{
	int                                                nClassId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nSkinId;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxViewerStore.SetCamera
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxViewerStore_execSetCamera_Parms
{
	struct FName                                       nmCameraName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxViewerStore.OnAcquisition
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxViewerStore_execOnAcquisition_Parms
{
	class UTgEventDataItem*                            pEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxViewerStore.OnImageLoad
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxViewerStore_execOnImageLoad_Parms
{
	class UTgEventDataItem*                            pEventBase;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxViewerStore.OnJsonUpdate
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxViewerStore_execOnJsonUpdate_Parms
{
	class UTgEventDataItem*                            pEventBase;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxViewerStore.OnPicksUpdate
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxViewerStore_execOnPicksUpdate_Parms
{
	class UTgEventDataItem*                            pEventBase;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxViewerStore.OnMatchUpdate
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxViewerStore_execOnMatchUpdate_Parms
{
	class UTgEventDataItem*                            pEventBase;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxViewerStore.UpdateFromAvailable
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxViewerStore_execUpdateFromAvailable_Parms
{
};

// Function TgClientBase.TgGFxViewerStore.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxViewerStore_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxViewerStore.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxViewerStore_execInitialize_Parms
{
	class UTgMoviePlayer*                              theMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxStoreDeals.OnAcquisition
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxStoreDeals_execOnAcquisition_Parms
{
	struct FPointer                                    pEventBase;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxStoreDeals.OnInputMode
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxStoreDeals_execOnInputMode_Parms
{
	class UTgEventDataItem*                            pEventBase;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxStoreDeals.OnFocusChange
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxStoreDeals_execOnFocusChange_Parms
{
	struct FGFxEventData                               Data;                                             		// 0x0000 (0x002C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxStoreDeals.OnClickBundle
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxStoreDeals_execOnClickBundle_Parms
{
	struct FGFxEventData                               Data;                                             		// 0x0000 (0x002C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxStoreDeals.OnClickDeal
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxStoreDeals_execOnClickDeal_Parms
{
	struct FGFxEventData                               Data;                                             		// 0x0000 (0x002C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxStoreDeals.OnToggleVisibility
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxStoreDeals_execOnToggleVisibility_Parms
{
	struct FGFxEventData                               Data;                                             		// 0x0000 (0x002C) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxStoreDeals.OnTimer
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxStoreDeals_execOnTimer_Parms
{
	float                                              nDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function TgClientBase.TgGFxStoreDeals.ShowPage
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxStoreDeals_execShowPage_Parms
{
};

// Function TgClientBase.TgGFxStoreDeals.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxStoreDeals_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxStoreDeals.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxStoreDeals_execInitialize_Parms
{
};

// Function TgClientBase.TgGFxVGSShared.OnTextInput
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxVGSShared_execOnTextInput_Parms
{
	unsigned long                                      bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     sText;                                            		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxVGSShared.UpdatePrompts
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxVGSShared_execUpdatePrompts_Parms
{
};

// Function TgClientBase.TgGFxVGSShared.SendVGSChat
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UTgGFxVGSShared_execSendVGSChat_Parms
{
	struct Fdword                                      nChannel;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct Fdword                                      nVgsId;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sCustomMsg;                                       		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function TgClientBase.TgGFxVGSShared.OnInput
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UTgGFxVGSShared_execOnInput_Parms
{
	struct FPointer                                    pInputEvent;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function TgClientBase.TgGFxVGSShared.Uninitialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxVGSShared_execUninitialize_Parms
{
};

// Function TgClientBase.TgGFxVGSShared.Initialize
// [0x00020400] ( FUNC_Native )
struct UTgGFxVGSShared_execInitialize_Parms
{
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif