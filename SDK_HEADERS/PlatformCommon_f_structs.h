/*
#############################################################################################
# Smite (v3.24.3804.2) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: PlatformCommon_f_structs.h
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

// Function PlatformCommon.PComBrowserManager.OpenURL
// [0x00024400] ( FUNC_Native )
struct UPComBrowserManager_execOpenURL_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bShowNavButtons : 1;                              		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bSetFocus : 1;                                    		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function PlatformCommon.PComGameEngine.HandlePlayerCommandInput
// [0x00024400] ( FUNC_Native )
struct UPComGameEngine_execHandlePlayerCommandInput_Parms
{
	struct FString                                     FSCommand;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class APlayerController*                           PC;                                               		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlatformCommon.PComGameEngine.SendGameRequest
// [0x00020400] ( FUNC_Native )
struct UPComGameEngine_execSendGameRequest_Parms
{
	struct FString                                     fsRequest;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComGameEngine.SendCtrlRequest
// [0x00020400] ( FUNC_Native )
struct UPComGameEngine_execSendCtrlRequest_Parms
{
	struct FString                                     fsRequest;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComGameEngine.SendMarshalAll
// [0x00020400] ( FUNC_Native )
struct UPComGameEngine_execSendMarshalAll_Parms
{
	unsigned long                                      bLowPriority : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function PlatformCommon.PComGameEngine.SendMarshal
// [0x00020400] ( FUNC_Native )
struct UPComGameEngine_execSendMarshal_Parms
{
	struct FUniqueNetId                                qwPlayerId;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bLowPriority : 1;                                 		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function PlatformCommon.PComGameEngine.ClearMarshal
// [0x00020400] ( FUNC_Native )
struct UPComGameEngine_execClearMarshal_Parms
{
};

// Function PlatformCommon.PComGameEngine.SetFieldString
// [0x00020400] ( FUNC_Native )
struct UPComGameEngine_execSetFieldString_Parms
{
	int                                                nToken;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     StrValue;                                         		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlatformCommon.PComGameEngine.SetFieldFloat
// [0x00020400] ( FUNC_Native )
struct UPComGameEngine_execSetFieldFloat_Parms
{
	int                                                nToken;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              FloatValue;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlatformCommon.PComGameEngine.SetFieldInt
// [0x00020400] ( FUNC_Native )
struct UPComGameEngine_execSetFieldInt_Parms
{
	int                                                nToken;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                IntValue;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlatformCommon.PComGameEngine.SetFunction
// [0x00020400] ( FUNC_Native )
struct UPComGameEngine_execSetFunction_Parms
{
	int                                                nFunction;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlatformCommon.PComGameViewportClient.Init
// [0x00420802] ( FUNC_Event )
struct UPComGameViewportClient_eventInit_Parms
{
	struct FString                                     OutError;                                         		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlatformCommon.PComGameViewportClient.StartFacebookStreaming
// [0x00020202] ( FUNC_Exec )
struct UPComGameViewportClient_execStartFacebookStreaming_Parms
{
};

// Function PlatformCommon.PComGameViewportClient.StopRTMPStreaming
// [0x00020202] ( FUNC_Exec )
struct UPComGameViewportClient_execStopRTMPStreaming_Parms
{
};

// Function PlatformCommon.PComGameViewportClient.StartRTMPStreaming
// [0x00020202] ( FUNC_Exec )
struct UPComGameViewportClient_execStartRTMPStreaming_Parms
{
	struct FString                                     InServer;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     InKey;                                            		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComGameViewportClient.SetRTMPSettings
// [0x00820202] ( FUNC_Exec )
struct UPComGameViewportClient_execSetRTMPSettings_Parms
{
	unsigned long                                      bAllowWebcam : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bAllowMicrophone : 1;                             		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bAllowDesktopAudio : 1;                           		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// struct FPComOpenBroadcasterSettings             NewSettings;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function PlatformCommon.PComGameViewportClient.CheckGameSettingsVersion
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPComGameViewportClient_execCheckGameSettingsVersion_Parms
{
};

// Function PlatformCommon.PComGameViewportClient.HandleGameSettingsMigration
// [0x00020400] ( FUNC_Native )
struct UPComGameViewportClient_execHandleGameSettingsMigration_Parms
{
	int                                                OldGameSettingsVersion;                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComGameViewportClient.GetCurrentGameSettingsVersion
// [0x00020400] ( FUNC_Native )
struct UPComGameViewportClient_execGetCurrentGameSettingsVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlatformCommon.PComGameViewportClient.InitDynamicResolutionScaler
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPComGameViewportClient_execInitDynamicResolutionScaler_Parms
{
};

// Function PlatformCommon.PComImageDownloader.SetPComImageDownloadedDelegate
// [0x00020002] 
struct UPComImageDownloader_execSetPComImageDownloadedDelegate_Parms
{
	struct FScriptDelegate                             PComImageDownloadedDelegate;                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComImageDownloader.OnPComImageDownloaded
// [0x00120000] 
struct UPComImageDownloader_execOnPComImageDownloaded_Parms
{
	struct FPComImageDownload                          CachedEntry;                                      		// 0x0000 (0x0040) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComInputLightingEffect.IsLogitechSdkVersionValid
// [0x00020400] ( FUNC_Native )
struct UPComInputLightingEffect_execIsLogitechSdkVersionValid_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlatformCommon.PComInputLightingEffect.SetCurrentTime
// [0x00020400] ( FUNC_Native )
struct UPComInputLightingEffect_execSetCurrentTime_Parms
{
	struct FName                                       InPresetName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              CurrentTime;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComInputLightingEffect.StopPreset
// [0x00020400] ( FUNC_Native )
struct UPComInputLightingEffect_execStopPreset_Parms
{
	struct FName                                       InPresetName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComInputLightingEffect.PlayPreset
// [0x00024400] ( FUNC_Native )
struct UPComInputLightingEffect_execPlayPreset_Parms
{
	struct FName                                       InPresetName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bUseOverrideStartTime : 1;                        		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              OverrideStartTime;                                		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function PlatformCommon.PComInputLightingEffect.DisableSystem
// [0x00020400] ( FUNC_Native )
struct UPComInputLightingEffect_execDisableSystem_Parms
{
};

// Function PlatformCommon.PComInputLightingEffect.TryEnableSystem
// [0x00020400] ( FUNC_Native )
struct UPComInputLightingEffect_execTryEnableSystem_Parms
{
};

// Function PlatformCommon.PComJsonHandler.OnImageDownloaded
// [0x00020400] ( FUNC_Native )
struct UPComJsonHandler_execOnImageDownloaded_Parms
{
	struct FPComImageDownload                          CachedEntry;                                      		// 0x0000 (0x0040) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComOpenBroadcaster.DecodeFacebookRTMPUrl
// [0x00020902] ( FUNC_Event )
struct UPComOpenBroadcaster_eventDecodeFacebookRTMPUrl_Parms
{
	struct FString                                     InRequest;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UWebRequest*                                 ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UWebRequest*                              WebRequest;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function PlatformCommon.PComOpenBroadcaster.Tick
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPComOpenBroadcaster_execTick_Parms
{
};

// Function PlatformCommon.PComOpenBroadcaster.ForceStopStreaming
// [0x00020400] ( FUNC_Native )
struct UPComOpenBroadcaster_execForceStopStreaming_Parms
{
};

// Function PlatformCommon.PComOpenBroadcaster.StopStreaming
// [0x00020400] ( FUNC_Native )
struct UPComOpenBroadcaster_execStopStreaming_Parms
{
};

// Function PlatformCommon.PComOpenBroadcaster.StartRTMPStreaming
// [0x00020400] ( FUNC_Native )
struct UPComOpenBroadcaster_execStartRTMPStreaming_Parms
{
	struct FString                                     InServer;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     InKey;                                            		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComOpenBroadcaster.StartFacebookStreaming
// [0x00020400] ( FUNC_Native )
struct UPComOpenBroadcaster_execStartFacebookStreaming_Parms
{
};

// Function PlatformCommon.PComOpenBroadcaster.QueueFacebookStreaming
// [0x00020400] ( FUNC_Native )
struct UPComOpenBroadcaster_execQueueFacebookStreaming_Parms
{
};

// Function PlatformCommon.PComOpenBroadcaster.SetStreamSettings
// [0x00420400] ( FUNC_Native )
struct UPComOpenBroadcaster_execSetStreamSettings_Parms
{
	struct FPComOpenBroadcasterSettings                InSettings;                                       		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function PlatformCommon.PComOpenBroadcaster.IsStreaming
// [0x00020400] ( FUNC_Native )
struct UPComOpenBroadcaster_execIsStreaming_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlatformCommon.PComOpenBroadcaster.CloseWebBrowser
// [0x00120000] 
struct UPComOpenBroadcaster_execCloseWebBrowser_Parms
{
};

// Function PlatformCommon.PComOpenBroadcaster.OpenWebBrowser
// [0x00120000] 
struct UPComOpenBroadcaster_execOpenWebBrowser_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComOpenBroadcaster.IsWebBrowserLoaded
// [0x00120000] 
struct UPComOpenBroadcaster_execIsWebBrowserLoaded_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlatformCommon.PComOpenBroadcaster.PreloadWebBrowser
// [0x00120000] 
struct UPComOpenBroadcaster_execPreloadWebBrowser_Parms
{
};

// Function PlatformCommon.PComPerformanceCaptureBase.CreateFileAndExit
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPComPerformanceCaptureBase_execCreateFileAndExit_Parms
{
	struct FString                                     FileNameWithExtension;                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     FileContents;                                     		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     SubfolderName;                                    		// 0x0020 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPerformanceCaptureBase.GetPerfStats
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UPComPerformanceCaptureBase_execGetPerfStats_Parms
{
	TArray< struct FPComPerformanceCaptureStat >       PerfStats;                                        		// 0x0000 (0x0010) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     FileContents;                                     		// 0x0010 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPerformanceCaptureBase.GetStatsToCollect
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UPComPerformanceCaptureBase_execGetStatsToCollect_Parms
{
	struct FString                                     FileContents;                                     		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPerformanceCaptureBase.GetMapNameAndTime
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UPComPerformanceCaptureBase_execGetMapNameAndTime_Parms
{
	struct FString                                     MapNameStr;                                       		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     FormattedDate;                                    		// 0x0010 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     FormattedTime;                                    		// 0x0020 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPerformanceCaptureBase.StopCycleStats
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UPComPerformanceCaptureBase_execStopCycleStats_Parms
{
	TArray< struct FPComPerformanceCaptureStat >       PerfStats;                                        		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPerformanceCaptureBase.GetPerformanceData
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UPComPerformanceCaptureBase_execGetPerformanceData_Parms
{
	TArray< struct FPComPerformanceCaptureStat >       PerfStats;                                        		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPerformanceCaptureBase.EnableStatNotify
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPComPerformanceCaptureBase_execEnableStatNotify_Parms
{
};

// Function PlatformCommon.PComPerformanceCaptureBase.EnableNonCycleStats
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPComPerformanceCaptureBase_execEnableNonCycleStats_Parms
{
};

// Function PlatformCommon.PComPerformanceCaptureBase.MoveCamera
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPComPerformanceCaptureBase_execMoveCamera_Parms
{
	class APlayerController*                           PlayerController;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Node;                                             		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComPerformanceCaptureBase.InitializePerformanceCaptureSettings
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPComPerformanceCaptureBase_execInitializePerformanceCaptureSettings_Parms
{
};

// Function PlatformCommon.PComPerformanceCaptureGame.DoNextAction
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APComPerformanceCaptureGame_execDoNextAction_Parms
{
};

// Function PlatformCommon.PComPerformanceCaptureGame.CollectNodes
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APComPerformanceCaptureGame_execCollectNodes_Parms
{
};

// Function PlatformCommon.PComPerformanceCaptureGame.PostBeginPlay
// [0x00020802] ( FUNC_Event )
struct APComPerformanceCaptureGame_eventPostBeginPlay_Parms
{
};

// Function PlatformCommon.PComPictureInPicture.TestPictureInPicture
// [0x00820002] 
struct UPComPictureInPicture_execTestPictureInPicture_Parms
{
	// class AWorldInfo*                               WorldInfo;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// class APlayerController*                        PlayerController;                                 		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ULocalPlayer*                             LocalPlayer;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
	// struct FPComPipViewDesc                         ViewDesc;                                         		// 0x0018 (0x01E4) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPictureInPicture.DebugRender
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPComPictureInPicture_execDebugRender_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComPictureInPicture.IsViewDescReady
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UPComPictureInPicture_execIsViewDescReady_Parms
{
	struct FPComPipViewDesc                            ViewDesc;                                         		// 0x0000 (0x01E4) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x01E4 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlatformCommon.PComPictureInPicture.IsViewReady
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPComPictureInPicture_execIsViewReady_Parms
{
	struct FName                                       ViewName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlatformCommon.PComPictureInPicture.RequestRender
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPComPictureInPicture_execRequestRender_Parms
{
	struct FName                                       ViewName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComPictureInPicture.RemoveView
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPComPictureInPicture_execRemoveView_Parms
{
	struct FName                                       ViewName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComPictureInPicture.AddView
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UPComPictureInPicture_execAddView_Parms
{
	struct FPComPipViewDesc                            InViewDesc;                                       		// 0x0000 (0x01E4) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPictureInPicture.Tick
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPComPictureInPicture_execTick_Parms
{
};

// Function PlatformCommon.PComPictureInPicture.InitializeRenderTarget
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPComPictureInPicture_execInitializeRenderTarget_Parms
{
};

// Function PlatformCommon.PComPictureInPictureScene.SetSkyColor
// [0x00420400] ( FUNC_Native )
struct UPComPictureInPictureScene_execSetSkyColor_Parms
{
	struct FColor                                      InSkyColor;                                       		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function PlatformCommon.PComPictureInPictureScene.SetSkyBrightness
// [0x00020400] ( FUNC_Native )
struct UPComPictureInPictureScene_execSetSkyBrightness_Parms
{
	float                                              InSkyBrightness;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComPictureInPictureScene.SetBounceLightColor
// [0x00420400] ( FUNC_Native )
struct UPComPictureInPictureScene_execSetBounceLightColor_Parms
{
	struct FColor                                      LightColor;                                       		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function PlatformCommon.PComPictureInPictureScene.SetBounceLightBrightness
// [0x00020400] ( FUNC_Native )
struct UPComPictureInPictureScene_execSetBounceLightBrightness_Parms
{
	float                                              InLightBrightness;                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComPictureInPictureScene.SetBounceLightDirection
// [0x00420400] ( FUNC_Native )
struct UPComPictureInPictureScene_execSetBounceLightDirection_Parms
{
	struct FRotator                                    InLightDir;                                       		// 0x0000 (0x000C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function PlatformCommon.PComPictureInPictureScene.EnableDirectionalBounceLight
// [0x00024400] ( FUNC_Native )
struct UPComPictureInPictureScene_execEnableDirectionalBounceLight_Parms
{
	unsigned long                                      bInEnableBoundLight : 1;                          		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              InBounceLightBrightness;                          		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    BounceLightDir;                                   		// 0x0008 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function PlatformCommon.PComPictureInPictureScene.SetLightColor
// [0x00420400] ( FUNC_Native )
struct UPComPictureInPictureScene_execSetLightColor_Parms
{
	struct FColor                                      LightColor;                                       		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function PlatformCommon.PComPictureInPictureScene.SetLightBrightness
// [0x00020400] ( FUNC_Native )
struct UPComPictureInPictureScene_execSetLightBrightness_Parms
{
	float                                              InLightBrightness;                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComPictureInPictureScene.SetLightDirection
// [0x00420400] ( FUNC_Native )
struct UPComPictureInPictureScene_execSetLightDirection_Parms
{
	struct FRotator                                    InLightDir;                                       		// 0x0000 (0x000C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function PlatformCommon.PComPictureInPictureScene.GetLightDirection
// [0x00020400] ( FUNC_Native )
struct UPComPictureInPictureScene_execGetLightDirection_Parms
{
	struct FRotator                                    ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlatformCommon.PComPictureInPictureScene.RemoveComponent
// [0x00020400] ( FUNC_Native )
struct UPComPictureInPictureScene_execRemoveComponent_Parms
{
	class UActorComponent*                             Component;                                        		// 0x0000 (0x0008) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function PlatformCommon.PComPictureInPictureScene.AddComponent
// [0x00420400] ( FUNC_Native )
struct UPComPictureInPictureScene_execAddComponent_Parms
{
	class UActorComponent*                             Component;                                        		// 0x0000 (0x0008) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FMatrix                                     LocalToWorld;                                     		// 0x0010 (0x0040) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function PlatformCommon.PComPictureInPictureScene.InitScene
// [0x00020400] ( FUNC_Native )
struct UPComPictureInPictureScene_execInitScene_Parms
{
};

// Function PlatformCommon.PComPlayerController.PlayTestInputLightingEffect
// [0x00020A02] ( FUNC_Exec | FUNC_Event )
struct APComPlayerController_execPlayTestInputLightingEffect_Parms
{
	struct FName                                       InPresetName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComPlayerController.SetCurrentTimeForInputLightingEffect
// [0x00020400] ( FUNC_Native )
struct APComPlayerController_execSetCurrentTimeForInputLightingEffect_Parms
{
	struct FName                                       InPresetName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              InCurrentTime;                                    		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComPlayerController.StopInputLightingEffect
// [0x00020400] ( FUNC_Native )
struct APComPlayerController_execStopInputLightingEffect_Parms
{
	struct FName                                       InPresetName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComPlayerController.PlayInputLightingEffect
// [0x00024400] ( FUNC_Native )
struct APComPlayerController_execPlayInputLightingEffect_Parms
{
	struct FName                                       InPresetName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bUseOverrideStartTime : 1;                        		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              OverrideStartTime;                                		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function PlatformCommon.PComPlayerController.ClientPlayInputLightingEffect
// [0x010249C2] ( FUNC_Event )
struct APComPlayerController_eventClientPlayInputLightingEffect_Parms
{
	struct FName                                       InPresetName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bUseOverrideStartTime : 1;                        		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              OverrideStartTime;                                		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function PlatformCommon.PComPlayerController.TryAutoLogin
// [0x00020400] ( FUNC_Native )
struct APComPlayerController_execTryAutoLogin_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlatformCommon.PComPlayerController.TryAutoLoginDelayed
// [0x00020802] ( FUNC_Event )
struct APComPlayerController_eventTryAutoLoginDelayed_Parms
{
};

// Function PlatformCommon.PComPlayerController.SetAsNewPartyHost
// [0x00020902] ( FUNC_Event )
struct APComPlayerController_eventSetAsNewPartyHost_Parms
{
	// class UOnlineGameSettings*                      GS;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function PlatformCommon.PComPlayerController.ToggleGameSessionInvitesAllowed
// [0x00020902] ( FUNC_Event )
struct APComPlayerController_eventToggleGameSessionInvitesAllowed_Parms
{
	unsigned long                                      bAllowed : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UOnlineGameSettings*                      GS;                                               		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function PlatformCommon.PComPlayerController.TogglePartySessionInvitesAllowed
// [0x00020902] ( FUNC_Event )
struct APComPlayerController_eventTogglePartySessionInvitesAllowed_Parms
{
	unsigned long                                      bAllowed : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UOnlineGameSettings*                      GS;                                               		// 0x0004 (0x0008) [0x0000000000000000]              
	// unsigned long                                   bInCustomQueue : 1;                               		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function PlatformCommon.PComPlayerController.UpdateMCTSWithNewPartyInfo
// [0x00020902] ( FUNC_Event )
struct APComPlayerController_eventUpdateMCTSWithNewPartyInfo_Parms
{
	// class UOnlineGameSettings*                      GS;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// unsigned long                                   bIsHost : 1;                                      		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  SessionGuid;                                      		// 0x000C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPlayerController.IsHostOfParty
// [0x00020902] ( FUNC_Event )
struct APComPlayerController_eventIsHostOfParty_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlatformCommon.PComPlayerController.OnPeoplePickerComplete
// [0x00820002] 
struct APComPlayerController_execOnPeoplePickerComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	TArray< struct FOnlineFriend >                     PeoplePicked;                                     		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FUniqueNetId                             ZeroId;                                           		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function PlatformCommon.PComPlayerController.OnReadFriendsListComplete
// [0x00020002] 
struct APComPlayerController_execOnReadFriendsListComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// TArray< struct FOnlineFriend >                  FriendsList;                                      		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned char                                   LocalUserNum;                                     		// 0x0014 (0x0001) [0x0000000000000000]              
	// struct FString                                  PeoplePickerText;                                 		// 0x0018 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             OpenPartySlots;                                   		// 0x0028 (0x0004) [0x0000000000000000]              
	// TArray< struct FSessionMemberInfo >             SessionMemberList;                                		// 0x002C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPlayerController.ShowPeoplePickerUI
// [0x00020B02] ( FUNC_Exec | FUNC_Event )
struct APComPlayerController_execShowPeoplePickerUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned char                                   LocalUserNum;                                     		// 0x0004 (0x0001) [0x0000000000000000]              
	// TArray< struct FSessionMemberInfo >             SessionMemberList;                                		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             OpenPartySlots;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	// TArray< struct FOnlineFriend >                  FriendsList;                                      		// 0x001C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPlayerController.JoinCustomMatchForInviteDelay
// [0x00020002] 
struct APComPlayerController_execJoinCustomMatchForInviteDelay_Parms
{
	// class UOnlineGameSettings*                      GS;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function PlatformCommon.PComPlayerController.JoinCustomMatchFromInvite
// [0x00020802] ( FUNC_Event )
struct APComPlayerController_eventJoinCustomMatchFromInvite_Parms
{
};

// Function PlatformCommon.PComPlayerController.OnJoinSessionForReceivedInviteComplete
// [0x00020102] 
struct APComPlayerController_execOnJoinSessionForReceivedInviteComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function PlatformCommon.PComPlayerController.OnPrivilegeCheckForGameSessionJoin
// [0x00820102] 
struct APComPlayerController_execOnPrivilegeCheckForGameSessionJoin_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Privilege;                                        		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PrivilegeLevel;                                   		// 0x0002 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDiffersFromHint : 1;                             		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// struct FOnlineGameSearchResult                  EmptyResult;                                      		// 0x0008 (0x0010) [0x0000000000000000]              
};

// Function PlatformCommon.PComPlayerController.OnPrivilegeLevelCheckedCompleteForPartyJoin
// [0x00820102] 
struct APComPlayerController_execOnPrivilegeLevelCheckedCompleteForPartyJoin_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Privilege;                                        		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PrivilegeLevel;                                   		// 0x0002 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDiffersFromHint : 1;                             		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// struct FOnlineGameSearchResult                  EmptyResult;                                      		// 0x0008 (0x0010) [0x0000000000000000]              
};

// Function PlatformCommon.PComPlayerController.OnGameDestroyedForPartyJoin
// [0x00020102] 
struct APComPlayerController_execOnGameDestroyedForPartyJoin_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// unsigned char                                   Hint;                                             		// 0x000C (0x0001) [0x0000000000000000]              
	// int                                             InvitedPlayerControllerId;                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function PlatformCommon.PComPlayerController.OnAlternatePrivilegeLevelCheckedComplete
// [0x00020102] 
struct APComPlayerController_execOnAlternatePrivilegeLevelCheckedComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Privilege;                                        		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PrivilegeLevel;                                   		// 0x0002 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDiffersFromHint : 1;                             		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function PlatformCommon.PComPlayerController.OnGameInviteAccepted
// [0x00420102] 
struct APComPlayerController_execOnGameInviteAccepted_Parms
{
	struct FOnlineGameSearchResult                     InviteResult;                                     		// 0x0000 (0x0010) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	// unsigned long                                   bPartySession : 1;                                		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FName                                    SessionName;                                      		// 0x0014 (0x0008) [0x0000000000000000]              
	// class UOnlineGameSettings*                      GS;                                               		// 0x001C (0x0008) [0x0000000000000000]              
	// unsigned char                                   Hint;                                             		// 0x0024 (0x0001) [0x0000000000000000]              
	// int                                             InvitedPlayerControllerId;                        		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function PlatformCommon.PComPlayerController.JoinPartySession
// [0x00020802] ( FUNC_Event )
struct APComPlayerController_eventJoinPartySession_Parms
{
	unsigned char                                      PartySessionGuid[ 0x50 ];                         		// 0x0000 (0x0050) [0x0000000000000080]              ( CPF_Parm )
	// class UOnlineGameSearch*                        NewGameSearch;                                    		// 0x0050 (0x0008) [0x0000000000000000]              
};

// Function PlatformCommon.PComPlayerController.OnPartySessionDestroyed
// [0x00020902] ( FUNC_Event )
struct APComPlayerController_eventOnPartySessionDestroyed_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function PlatformCommon.PComPlayerController.DestroyPartySession
// [0x00020B02] ( FUNC_Exec | FUNC_Event )
struct APComPlayerController_execDestroyPartySession_Parms
{
};

// Function PlatformCommon.PComPlayerController.InvitePlayerToParty
// [0x00020802] ( FUNC_Event )
struct APComPlayerController_eventInvitePlayerToParty_Parms
{
	struct FUniqueNetId                                InPlayerId;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlatformCommon.PComPlayerController.InvitePlayerToPartyByName
// [0x00820802] ( FUNC_Event )
struct APComPlayerController_eventInvitePlayerToPartyByName_Parms
{
	struct FString                                     InPlayerName;                                     		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FUniqueNetId                             IgnoredId;                                        		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function PlatformCommon.PComPlayerController.OnCreatePartySessionComplete
// [0x00020102] 
struct APComPlayerController_execOnCreatePartySessionComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSuccessful : 1;                                  		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function PlatformCommon.PComPlayerController.CreatePartySession
// [0x00020B02] ( FUNC_Exec | FUNC_Event )
struct APComPlayerController_execCreatePartySession_Parms
{
	// class UOnlineGameSettings*                      NewGameSettings;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function PlatformCommon.PComPlayerController.UnregisterP2PEnemiesForCustomMatch
// [0x00020802] ( FUNC_Event )
struct APComPlayerController_eventUnregisterP2PEnemiesForCustomMatch_Parms
{
	TArray< struct FUniqueNetId >                      EnemyIds;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function PlatformCommon.PComPlayerController.OnGetVoicePermissionsForUsersComplete
// [0x00020102] 
struct APComPlayerController_execOnGetVoicePermissionsForUsersComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Privilege;                                        		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPermissionsResult >                Results;                                          		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// TArray< struct FSessionMemberInfo >             SessionListInfo;                                  		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function PlatformCommon.PComPlayerController.OnGetSessionMemberInfoComplete
// [0x00020102] 
struct APComPlayerController_execOnGetSessionMemberInfoComplete_Parms
{
	TArray< struct FSessionMemberInfo >                SessionListInfo;                                  		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function PlatformCommon.PComPlayerController.OnGetUserConnectionInfoComplete
// [0x00020102] 
struct APComPlayerController_execOnGetUserConnectionInfoComplete_Parms
{
	TArray< struct FSessionMemberInfo >                SessionListInfo;                                  		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function PlatformCommon.PComPlayerController.GetUserNamesForPS4P2PConnections
// [0x00020500] ( FUNC_Native )
struct APComPlayerController_execGetUserNamesForPS4P2PConnections_Parms
{
	TArray< struct FString >                           ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPlayerController.CloseConnectionsToInvalidPeers
// [0x00020500] ( FUNC_Native )
struct APComPlayerController_execCloseConnectionsToInvalidPeers_Parms
{
	TArray< struct FSessionMemberInfo >                SessionListInfo;                                  		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPlayerController.EstablishPeers
// [0x00020B02] ( FUNC_Exec | FUNC_Event )
struct APComPlayerController_execEstablishPeers_Parms
{
};

// Function PlatformCommon.PComPlayerController.LostP2PConnection
// [0x00020902] ( FUNC_Event )
struct APComPlayerController_eventLostP2PConnection_Parms
{
	struct FUniqueNetId                                UniqueId;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComPlayerController.GetControllerIdFromNetId
// [0x00420802] ( FUNC_Event )
struct APComPlayerController_eventGetControllerIdFromNetId_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ControllerId;                                     		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function PlatformCommon.PComPlayerController.PairLoggedInUserAndCurrentController
// [0x00020802] ( FUNC_Event )
struct APComPlayerController_eventPairLoggedInUserAndCurrentController_Parms
{
	// class ULocalPlayer*                             LP;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             LoggedInPlayerIndex;                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function PlatformCommon.PComPlayerController.IsInGame
// [0x00020400] ( FUNC_Native )
struct APComPlayerController_execIsInGame_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlatformCommon.PComPlayerController.IsPackageInstalled
// [0x00020400] ( FUNC_Native )
struct APComPlayerController_execIsPackageInstalled_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlatformCommon.PComPlayerController.OnMultiplayerSessionChange
// [0x00020002] 
struct APComPlayerController_execOnMultiplayerSessionChange_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FSessionUpdateInfo                          SessionChanges;                                   		// 0x0008 (0x0024) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// TArray< struct FSessionMemberInfo >             JoinedMembers;                                    		// 0x002C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x003C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bRecreateSession : 1;                             		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UOnlineGameSettings*                      GS;                                               		// 0x0044 (0x0008) [0x0000000000000000]              
};

// Function PlatformCommon.PComPlayerController.CheckFilterText
// [0x00020802] ( FUNC_Event )
struct APComPlayerController_eventCheckFilterText_Parms
{
	struct FString                                     Text;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlatformCommon.PComPlayerController.CanPlayOnlineWithUsersByUniqueNetIds
// [0x00020802] ( FUNC_Event )
struct APComPlayerController_eventCanPlayOnlineWithUsersByUniqueNetIds_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FUniqueNetId >                      Users;                                            		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlatformCommon.PComPlayerController.CanCommunicateTextWithUsersByUniqueNetIds
// [0x00020802] ( FUNC_Event )
struct APComPlayerController_eventCanCommunicateTextWithUsersByUniqueNetIds_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FUniqueNetId >                      Users;                                            		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlatformCommon.PComPlayerController.CanCommunicateText
// [0x00424802] ( FUNC_Event )
struct APComPlayerController_eventCanCommunicateText_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlatformCommon.PComPlayerController.OnTextFilterApplied
// [0x00020400] ( FUNC_Native )
struct APComPlayerController_execOnTextFilterApplied_Parms
{
	struct FString                                     OriginalText;                                     		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     FilteredText;                                     		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bCensorCompletely : 1;                            		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function PlatformCommon.PComPlayerController.RequestUpdateFriendsList
// [0x00024400] ( FUNC_Native )
struct APComPlayerController_execRequestUpdateFriendsList_Parms
{
	unsigned long                                      bForceRequest : 1;                                		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function PlatformCommon.PComPlayerController.UpdateMctsWithFriends
// [0x00020400] ( FUNC_Native )
struct APComPlayerController_execUpdateMctsWithFriends_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function PlatformCommon.PComPlayerController.OnContentPurchaseResponse
// [0x00020400] ( FUNC_Native )
struct APComPlayerController_execOnContentPurchaseResponse_Parms
{
	unsigned long                                      bAuthorized : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FQWord                                      qwOrderId;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComPlayerController.OnPrivilegeCheckedForUsersByUniqueNetIds
// [0x00020400] ( FUNC_Native )
struct APComPlayerController_execOnPrivilegeCheckedForUsersByUniqueNetIds_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Privilege;                                        		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPermissionsResultByUniqueNetId >   Results;                                          		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPlayerController.OnPrivilegeLevelChecked
// [0x00020400] ( FUNC_Native )
struct APComPlayerController_execOnPrivilegeLevelChecked_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Privilege;                                        		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PrivilegeLevel;                                   		// 0x0002 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDiffersFromHint : 1;                             		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function PlatformCommon.PComPlayerController.ClearOnlineDelegates
// [0x00020802] ( FUNC_Event )
struct APComPlayerController_eventClearOnlineDelegates_Parms
{
	// class ULocalPlayer*                             LP;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function PlatformCommon.PComPlayerController.RegisterOnlineDelegates
// [0x00020802] ( FUNC_Event )
struct APComPlayerController_eventRegisterOnlineDelegates_Parms
{
	// class ULocalPlayer*                             LP;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function PlatformCommon.PComPlayerController.ClientRestablishP2PConnections
// [0x010201C2] 
struct APComPlayerController_execClientRestablishP2PConnections_Parms
{
};

// Function PlatformCommon.PComPlayerController.ServerReEstablishP2PConnections
// [0x002200C2] 
struct APComPlayerController_execServerReEstablishP2PConnections_Parms
{
	// class APComPlayerController*                    PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function PlatformCommon.PComPlayerController.IsReconnect
// [0x00020500] ( FUNC_Native )
struct APComPlayerController_execIsReconnect_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlatformCommon.PComPlayerController.RestablishVoiceForReconnect
// [0x00020902] ( FUNC_Event )
struct APComPlayerController_eventRestablishVoiceForReconnect_Parms
{
};

// Function PlatformCommon.PComPlayerController.OnJoinOnlineGameCompleteForReceivedSessionInfo
// [0x00020102] 
struct APComPlayerController_execOnJoinOnlineGameCompleteForReceivedSessionInfo_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UOnlineGameSettings*                      GS;                                               		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function PlatformCommon.PComPlayerController.ReceiveSessionInfo
// [0x010209C2] ( FUNC_Event )
struct APComPlayerController_eventReceiveSessionInfo_Parms
{
	unsigned char                                      PlatformSpecificInfo[ 0x50 ];                     		// 0x0000 (0x0050) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ConsoleType;                                      		// 0x0050 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class UOnlineGameSearch*                        NewGameSearch;                                    		// 0x0054 (0x0008) [0x0000000000000000]              
};

// Function PlatformCommon.PComPlayerController.OnCreateOnlineGameComplete
// [0x00020102] 
struct APComPlayerController_execOnCreateOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// unsigned char                                   PlatformSpecificInfo[ 0x50 ];                     		// 0x000C (0x0050) [0x0000000000000000]              
	// unsigned char                                   ConsoleType;                                      		// 0x005C (0x0001) [0x0000000000000000]              
};

// Function PlatformCommon.PComPlayerController.ChooseThisControllerForSessionScout
// [0x00424A02] ( FUNC_Exec | FUNC_Event )
struct APComPlayerController_execChooseThisControllerForSessionScout_Parms
{
	unsigned long                                      bCustomMatch : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                MaxPlayers;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bPrivate : 1;                                     		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	TArray< struct FUniqueNetId >                      ReservedMembers;                                  		// 0x000C (0x0010) [0x0000000000400190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// class UOnlineGameSettings*                      NewGameSettings;                                  		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function PlatformCommon.PComPlayerController.OnDestroyOnlineGameComplete
// [0x00020002] 
struct APComPlayerController_execOnDestroyOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function PlatformCommon.PComPlayerController.OnEndOnlineGameComplete
// [0x00020002] 
struct APComPlayerController_execOnEndOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function PlatformCommon.PComPlayerController.FinishQuitToMainMenu
// [0x00020002] 
struct APComPlayerController_execFinishQuitToMainMenu_Parms
{
};

// Function PlatformCommon.PComPlayerController.CleanupOnlineSubsystemSession
// [0x00020002] 
struct APComPlayerController_execCleanupOnlineSubsystemSession_Parms
{
	unsigned long                                      bWasFromMenu : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlatformCommon.PComPlayerController.QuitToMainMenu
// [0x00020902] ( FUNC_Event )
struct APComPlayerController_eventQuitToMainMenu_Parms
{
};

// Function PlatformCommon.PComPlayerController.ServerAcknowledgePossession
// [0x002200C2] 
struct APComPlayerController_execServerAcknowledgePossession_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComPlayerController.AcknowledgePossession
// [0x00020002] 
struct APComPlayerController_execAcknowledgePossession_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComPlayerController.LeaveMatchQueue
// [0x00020400] ( FUNC_Native )
struct APComPlayerController_execLeaveMatchQueue_Parms
{
};

// Function PlatformCommon.PComPlayerController.UpdatePartyUI
// [0x00020400] ( FUNC_Native )
struct APComPlayerController_execUpdatePartyUI_Parms
{
};

// Function PlatformCommon.PComPlayerController.TryOpenPartyUI
// [0x00020400] ( FUNC_Native )
struct APComPlayerController_execTryOpenPartyUI_Parms
{
};

// Function PlatformCommon.PComPlayerController.ShowCustomGameDisallowedPopup
// [0x00020400] ( FUNC_Native )
struct APComPlayerController_execShowCustomGameDisallowedPopup_Parms
{
};

// Function PlatformCommon.PComPlayerController.ShowPackageNotInstalledForPartyInviteWarning
// [0x00020400] ( FUNC_Native )
struct APComPlayerController_execShowPackageNotInstalledForPartyInviteWarning_Parms
{
};

// Function PlatformCommon.PComPlayerController.ShowPartyNoLongerAvailableWarning
// [0x00020400] ( FUNC_Native )
struct APComPlayerController_execShowPartyNoLongerAvailableWarning_Parms
{
};

// Function PlatformCommon.PComPlayerController.ShowPartyFullWarning
// [0x00020400] ( FUNC_Native )
struct APComPlayerController_execShowPartyFullWarning_Parms
{
	unsigned long                                      bPartySession : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function PlatformCommon.PComPlayerController.ShowUnableToReadFriendsListWarning
// [0x00020400] ( FUNC_Native )
struct APComPlayerController_execShowUnableToReadFriendsListWarning_Parms
{
};

// Function PlatformCommon.PComPlayerController.ShowNoFriendsForPartyInviteWarning
// [0x00020400] ( FUNC_Native )
struct APComPlayerController_execShowNoFriendsForPartyInviteWarning_Parms
{
};

// Function PlatformCommon.PComPlayerController.ShowControllerDisconnectedWarning
// [0x00020400] ( FUNC_Native )
struct APComPlayerController_execShowControllerDisconnectedWarning_Parms
{
};

// Function PlatformCommon.PComPlayerController.ShouldPartySessionsBePublic
// [0x00020002] 
struct APComPlayerController_execShouldPartySessionsBePublic_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlatformCommon.PComPlayerController.IsLiveSpectate
// [0x00020400] ( FUNC_Native )
struct APComPlayerController_execIsLiveSpectate_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlatformCommon.PComPlayerController.CreateOrJoinPartySession
// [0x00020400] ( FUNC_Native )
struct APComPlayerController_execCreateOrJoinPartySession_Parms
{
};

// Function PlatformCommon.PComPlayerController.ArePartySessionInvitesAllowed
// [0x00020400] ( FUNC_Native )
struct APComPlayerController_execArePartySessionInvitesAllowed_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlatformCommon.PComPlayerController.UpdateMCTSSession
// [0x00020500] ( FUNC_Native )
struct APComPlayerController_execUpdateMCTSSession_Parms
{
	struct FString                                     SessionGuid;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bIsHost : 1;                                      		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function PlatformCommon.PComPlayerController.BlockPartySceneInput
// [0x00020400] ( FUNC_Native )
struct APComPlayerController_execBlockPartySceneInput_Parms
{
	unsigned long                                      bBlockInput : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function PlatformCommon.PComPlayerController.FilterFriendListForPeoplePicker
// [0x00420500] ( FUNC_Native )
struct APComPlayerController_execFilterFriendListForPeoplePicker_Parms
{
	TArray< struct FOnlineFriend >                     FriendList;                                       		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	TArray< struct FSessionMemberInfo >                SessionMemberList;                                		// 0x0010 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPlayerController.ShowPrivilegeMessageAndDeclineInvite
// [0x00020500] ( FUNC_Native )
struct APComPlayerController_execShowPrivilegeMessageAndDeclineInvite_Parms
{
};

// Function PlatformCommon.PComPlayerController.ConnectToPeers
// [0x00420500] ( FUNC_Native )
struct APComPlayerController_execConnectToPeers_Parms
{
	TArray< struct FSessionMemberInfo >                SessionListInfo;                                  		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPlayerController.TryJoinSession
// [0x00020400] ( FUNC_Native )
struct APComPlayerController_execTryJoinSession_Parms
{
};

// Function PlatformCommon.PComPlayerController.MCTSSetSessionId
// [0x00020400] ( FUNC_Native )
struct APComPlayerController_execMCTSSetSessionId_Parms
{
	unsigned char                                      PlatformSpecificInfo[ 0x50 ];                     		// 0x0000 (0x0050) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComPlayerController.IsInCustomMatch
// [0x00020500] ( FUNC_Native )
struct APComPlayerController_execIsInCustomMatch_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlatformCommon.PComPlayerController.SendSessionEnd
// [0x00020400] ( FUNC_Native )
struct APComPlayerController_execSendSessionEnd_Parms
{
};

// Function PlatformCommon.PComPlayerController.SendSessionStart
// [0x00020400] ( FUNC_Native )
struct APComPlayerController_execSendSessionStart_Parms
{
	int                                                GameModeId;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComPlayerController.OnRemoteTalkerStatusChange
// [0x00020400] ( FUNC_Native )
struct APComPlayerController_execOnRemoteTalkerStatusChange_Parms
{
	struct FUniqueNetId                                RemoteNetId;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsTalking : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function PlatformCommon.PComPlayerController.OnCurrentUserChanged
// [0x00020400] ( FUNC_Native )
struct APComPlayerController_execOnCurrentUserChanged_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     CurrentUser;                                      		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     LoggedInUser;                                     		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPlayerController.OnConnectionStatusChange
// [0x00020400] ( FUNC_Native )
struct APComPlayerController_execOnConnectionStatusChange_Parms
{
	unsigned char                                      ConnectionStatus;                                 		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComPlayerController.OnLoginStatusChange
// [0x00020400] ( FUNC_Native )
struct APComPlayerController_execOnLoginStatusChange_Parms
{
	unsigned char                                      NewStatus;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                NewId;                                            		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComPlayerController.OnMarketplaceItemPurchased
// [0x00020102] 
struct APComPlayerController_execOnMarketplaceItemPurchased_Parms
{
};

// Function PlatformCommon.PComPlayerController.GetPlayerDLCLicenses
// [0x00420802] ( FUNC_Event )
struct APComPlayerController_eventGetPlayerDLCLicenses_Parms
{
	TArray< struct FOnlineContent >                    ContentList;                                      		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned char                                      ReturnValue;                                      		// 0x0010 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlatformCommon.PComPlayerController.OnReadPlayerMarketplaceInventoryComplete
// [0x00020002] 
struct APComPlayerController_execOnReadPlayerMarketplaceInventoryComplete_Parms
{
	// TArray< struct FMarketplaceInventoryItem >      Items;                                            		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPlayerController.PlayerReceivedURLTokenAndSignatureForPortalInventory
// [0x00020002] 
struct APComPlayerController_execPlayerReceivedURLTokenAndSignatureForPortalInventory_Parms
{
	unsigned long                                      bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned char                                      LocalUserNum;                                     		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     URL;                                              		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Token;                                            		// 0x0018 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     AuthToken;                                        		// 0x0028 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Signature;                                        		// 0x0038 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPlayerController.ProcessPortalInventoryWithAuthToken
// [0x00020802] ( FUNC_Event )
struct APComPlayerController_eventProcessPortalInventoryWithAuthToken_Parms
{
};

// Function PlatformCommon.PComPlayerController.DumpStoreCatalog
// [0x00020202] ( FUNC_Exec )
struct APComPlayerController_execDumpStoreCatalog_Parms
{
	unsigned char                                      MediaType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             K;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// TArray< struct FMarketplaceProductDetails >     AvailableProducts;                                		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPlayerController.DumpConumables
// [0x00020202] ( FUNC_Exec )
struct APComPlayerController_execDumpConumables_Parms
{
};

// Function PlatformCommon.PComPlayerController.DumpDurables
// [0x00020202] ( FUNC_Exec )
struct APComPlayerController_execDumpDurables_Parms
{
};

// Function PlatformCommon.PComPlayerController.DumpGameProducts
// [0x00020202] ( FUNC_Exec )
struct APComPlayerController_execDumpGameProducts_Parms
{
};

// Function PlatformCommon.PComPlayerController.OnReadAdditionalProductDetailsComplete
// [0x00020002] 
struct APComPlayerController_execOnReadAdditionalProductDetailsComplete_Parms
{
	unsigned char                                      MediaType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// unsigned char                                   NextMediaType;                                    		// 0x0001 (0x0001) [0x0000000000000000]              
};

// Function PlatformCommon.PComPlayerController.OnReadAvailableProductsComplete
// [0x00020002] 
struct APComPlayerController_execOnReadAvailableProductsComplete_Parms
{
	unsigned char                                      MediaType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComPlayerController.RefreshStoreData
// [0x00020802] ( FUNC_Event )
struct APComPlayerController_eventRefreshStoreData_Parms
{
	// unsigned char                                   MediaType;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function PlatformCommon.PComPlayerController.IsLoggedIntoOSS
// [0x00020802] ( FUNC_Event )
struct APComPlayerController_eventIsLoggedIntoOSS_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlatformCommon.PComPlayerController.ShowConsoleLoginUI
// [0x00024802] ( FUNC_Event )
struct APComPlayerController_eventShowConsoleLoginUI_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForceLoginAfter : 1;                             		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlatformCommon.PComPlayerController.CacheLoggedInGamepad
// [0x00020802] ( FUNC_Event )
struct APComPlayerController_eventCacheLoggedInGamepad_Parms
{
};

// Function PlatformCommon.PComPlayerController.PlayerReceivedTokenForLogin
// [0x00020400] ( FUNC_Native )
struct APComPlayerController_execPlayerReceivedTokenForLogin_Parms
{
	unsigned long                                      bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function PlatformCommon.PComPlayerController.PlayerReceivedURLTokenAndSignatureForLogin
// [0x00020002] 
struct APComPlayerController_execPlayerReceivedURLTokenAndSignatureForLogin_Parms
{
	unsigned long                                      bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned char                                      LocalUserNum;                                     		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     URL;                                              		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Token;                                            		// 0x0018 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     AuthToken;                                        		// 0x0028 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Signature;                                        		// 0x0038 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPlayerController.GetOSSTokenAndSignatureForLogin
// [0x00020802] ( FUNC_Event )
struct APComPlayerController_eventGetOSSTokenAndSignatureForLogin_Parms
{
	// int                                             ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function PlatformCommon.PComPlayerController.GetTokenURL
// [0x00020400] ( FUNC_Native )
struct APComPlayerController_execGetTokenURL_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPlayerController.BeginLogin
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct APComPlayerController_execBeginLogin_Parms
{
};

// Function PlatformCommon.PComPlayerController.PlayerRetrievedOSSInventory
// [0x00420400] ( FUNC_Native )
struct APComPlayerController_execPlayerRetrievedOSSInventory_Parms
{
	TArray< struct FMarketplaceInventoryItem >         Items;                                            		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPlayerController.SetFakeServerTime
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct APComPlayerController_execSetFakeServerTime_Parms
{
	int                                                Month;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Day;                                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Year;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComPlayerController.ValidateCreatedPartySession
// [0x00020400] ( FUNC_Native )
struct APComPlayerController_execValidateCreatedPartySession_Parms
{
};

// Function PlatformCommon.PComPlayerController.UpdateClientAuthToken
// [0x00020400] ( FUNC_Native )
struct APComPlayerController_execUpdateClientAuthToken_Parms
{
	struct FString                                     Token;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPlayerController.UpdateClientToken
// [0x00020400] ( FUNC_Native )
struct APComPlayerController_execUpdateClientToken_Parms
{
	struct FString                                     Token;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPlayerController.ChallengeJoin
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct APComPlayerController_execChallengeJoin_Parms
{
	int                                                nMatchId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     fsName;                                           		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     fsPassword;                                       		// 0x0014 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPlayerController.ChallengeCreate
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct APComPlayerController_execChallengeCreate_Parms
{
	int                                                nQueue;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     fsName;                                           		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     fsPassword;                                       		// 0x0014 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPlayerController.UpdateDatacenterPing
// [0x00020400] ( FUNC_Native )
struct APComPlayerController_execUpdateDatacenterPing_Parms
{
};

// Function PlatformCommon.PComPlayerController.TestVideoPlayer
// [0x00020202] ( FUNC_Exec )
struct APComPlayerController_execTestVideoPlayer_Parms
{
};

// Function PlatformCommon.PComPlayerController.AddCheats
// [0x00020102] 
struct APComPlayerController_execAddCheats_Parms
{
};

// Function PlatformCommon.PComPlayerController.ClientAddCheats
// [0x00020400] ( FUNC_Native )
struct APComPlayerController_execClientAddCheats_Parms
{
};

// Function PlatformCommon.PComPlayerInput.Jump
// [0x00020202] ( FUNC_Exec )
struct UPComPlayerInput_execJump_Parms
{
};

// Function PlatformCommon.PComPlayerInput.UnbindCommand
// [0x00824202] ( FUNC_Exec )
struct UPComPlayerInput_execUnbindCommand_Parms
{
	struct FString                                     Command;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nAlternate;                                       		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FKeyBind                                 Binding;                                          		// 0x0014 (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPlayerInput.SetBindExtended
// [0x00020400] ( FUNC_Native )
struct UPComPlayerInput_execSetBindExtended_Parms
{
	struct FString                                     ExtendedBinding;                                  		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Command;                                          		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bStoreToServer : 1;                               		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function PlatformCommon.PComPlayerInput.UnbindCommandAllExtended
// [0x00020400] ( FUNC_Native )
struct UPComPlayerInput_execUnbindCommandAllExtended_Parms
{
	struct FString                                     Command;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bStoreToServer : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function PlatformCommon.PComPlayerInput.UnbindCommandAll
// [0x00020202] ( FUNC_Exec )
struct UPComPlayerInput_execUnbindCommandAll_Parms
{
	struct FString                                     Command;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPlayerInput.UnbindCommandFromServer
// [0x00020802] ( FUNC_Event )
struct UPComPlayerInput_eventUnbindCommandFromServer_Parms
{
	struct FString                                     Command;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPlayerInput.UnbindKey
// [0x00420202] ( FUNC_Exec )
struct UPComPlayerInput_execUnbindKey_Parms
{
	struct FName                                       BindName;                                         		// 0x0000 (0x0008) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function PlatformCommon.PComPlayerInput.SetCommandBind
// [0x00824002] 
struct UPComPlayerInput_execSetCommandBind_Parms
{
	struct FString                                     Command;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nAlternate;                                       		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ExtendedBinding;                                  		// 0x0014 (0x0010) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bStoreToServer : 1;                               		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bStoreToINI : 1;                                  		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// struct FKeyBind                                 oldCommandBinding;                                		// 0x002C (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FKeyBind                                 oldKeyBinding;                                    		// 0x0048 (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FKeyBind                                 newBinding;                                       		// 0x0064 (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             nOldIndex;                                        		// 0x0080 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bKeyWasPreviouslyBound : 1;                       		// 0x0084 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function PlatformCommon.PComPlayerInput.SetCommandBindFromServer
// [0x00020802] ( FUNC_Event )
struct UPComPlayerInput_eventSetCommandBindFromServer_Parms
{
	struct FString                                     Command;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nAlternate;                                       		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ExtendedBinding;                                  		// 0x0014 (0x0010) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPlayerInput.SetBindFromServer
// [0x00020802] ( FUNC_Event )
struct UPComPlayerInput_eventSetBindFromServer_Parms
{
	struct FString                                     BindName;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Command;                                          		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPlayerInput.SetBind
// [0x00420202] ( FUNC_Exec )
struct UPComPlayerInput_execSetBind_Parms
{
	struct FName                                       BindName;                                         		// 0x0000 (0x0008) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	struct FString                                     Command;                                          		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPlayerInput.GetDisplayLookSensitivityY
// [0x00020802] ( FUNC_Event )
struct UPComPlayerInput_eventGetDisplayLookSensitivityY_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           LookSensitivityIncrement;                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function PlatformCommon.PComPlayerInput.GetDisplayLookSensitivity
// [0x00020802] ( FUNC_Event )
struct UPComPlayerInput_eventGetDisplayLookSensitivity_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           LookSensitivityIncrement;                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function PlatformCommon.PComPlayerInput.SetAimAcceleration
// [0x00020202] ( FUNC_Exec )
struct UPComPlayerInput_execSetAimAcceleration_Parms
{
	float                                              fLookAccel;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComPlayerInput.SetLookSensitivity
// [0x00024202] ( FUNC_Exec )
struct UPComPlayerInput_execSetLookSensitivity_Parms
{
	float                                              fSensitivity;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fSensitivityY;                                    		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// float                                           LookSensitivityIncrement;                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function PlatformCommon.PComPlayerInput.SetMouseInput
// [0x00020202] ( FUNC_Exec )
struct UPComPlayerInput_execSetMouseInput_Parms
{
	unsigned long                                      bInvert : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bSmooth : 1;                                      		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              fSensitivity;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComPlayerInput.SetDirty
// [0x00020102] 
struct UPComPlayerInput_execSetDirty_Parms
{
};

// Function PlatformCommon.PComPlayerInput.ReadMouseSettings
// [0x00020400] ( FUNC_Native )
struct UPComPlayerInput_execReadMouseSettings_Parms
{
};

// Function PlatformCommon.PComPlayerInput.StoreMouseSettings
// [0x00020400] ( FUNC_Native )
struct UPComPlayerInput_execStoreMouseSettings_Parms
{
};

// Function PlatformCommon.PComPlayerInput.GetKeybindWithCurrentModifiers
// [0x00420400] ( FUNC_Native )
struct UPComPlayerInput_execGetKeybindWithCurrentModifiers_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	struct FKeyBind                                    ReturnValue;                                      		// 0x0008 (0x001C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPlayerInput.GetBind
// [0x00424400] ( FUNC_Native )
struct UPComPlayerInput_execGetBind_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	struct FKeyBind                                    ModifierKeyBind;                                  		// 0x0008 (0x001C) [0x0000000000400192]              ( CPF_Const | CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x0024 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPlayerInput.KeybindToExtendedString
// [0x00420400] ( FUNC_Native )
struct UPComPlayerInput_execKeybindToExtendedString_Parms
{
	struct FKeyBind                                    Bind;                                             		// 0x0000 (0x001C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x001C (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPlayerInput.ExtendedStringToKeybind
// [0x00020400] ( FUNC_Native )
struct UPComPlayerInput_execExtendedStringToKeybind_Parms
{
	struct FString                                     Str;                                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Cmd;                                              		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FKeyBind                                    ReturnValue;                                      		// 0x0020 (0x001C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPlayerInput.GetBindFromCommand
// [0x00024400] ( FUNC_Native )
struct UPComPlayerInput_execGetBindFromCommand_Parms
{
	struct FString                                     Cmd;                                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nAlternate;                                       		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FKeyBind                                    ReturnValue;                                      		// 0x0014 (0x001C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPlayerInput.GetBindExtended
// [0x00424400] ( FUNC_Native )
struct UPComPlayerInput_execGetBindExtended_Parms
{
	struct FString                                     Str;                                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FKeyBind                                    Bind;                                             		// 0x0010 (0x001C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      bExactMatch : 1;                                  		// 0x002C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0030 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlatformCommon.PComPlayerInput.GetStorageStringForCommand
// [0x00020400] ( FUNC_Native )
struct UPComPlayerInput_execGetStorageStringForCommand_Parms
{
	struct FString                                     Command;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPlayerInput.InitKeyBindingsMap
// [0x00020400] ( FUNC_Native )
struct UPComPlayerInput_execInitKeyBindingsMap_Parms
{
};

// Function PlatformCommon.PComPlayerInput.ReadBindings
// [0x00020400] ( FUNC_Native )
struct UPComPlayerInput_execReadBindings_Parms
{
};

// Function PlatformCommon.PComPlayerInput.StoreBinding
// [0x00020400] ( FUNC_Native )
struct UPComPlayerInput_execStoreBinding_Parms
{
	struct FString                                     BindName;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Command;                                          		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     OldCommand;                                       		// 0x0020 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComPlayerInput.ResetKeysToDefault
// [0x00024400] ( FUNC_Native )
struct UPComPlayerInput_execResetKeysToDefault_Parms
{
	struct FString                                     PresetName;                                       		// 0x0000 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      isForceSetKey : 1;                                		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function PlatformCommon.PComPlayerInput.StoreKeysToDefault
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPComPlayerInput_execStoreKeysToDefault_Parms
{
};

// Function PlatformCommon.PComPlayerInput.ConvertCommandToProperty
// [0x00420400] ( FUNC_Native )
struct UPComPlayerInput_execConvertCommandToProperty_Parms
{
	struct FString                                     Command;                                          		// 0x0000 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlatformCommon.PComPositionHistoryServerComponent.IsInSphere
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UPComPositionHistoryServerComponent_execIsInSphere_Parms
{
	float                                              RewindTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     LocationToCheck;                                  		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              RadiusToCheck;                                    		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FPComPositionHistoryData                    PastDataUsed;                                     		// 0x0014 (0x002C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0040 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlatformCommon.PComPositionHistoryServerComponent.IsOverlapping
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UPComPositionHistoryServerComponent_execIsOverlapping_Parms
{
	float                                              RewindTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     LocationToCheck;                                  		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              RadiusToCheck;                                    		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FPComPositionHistoryData                    PastDataUsed;                                     		// 0x0014 (0x002C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0040 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlatformCommon.PComPositionHistoryServerComponent.GetPastData
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UPComPositionHistoryServerComponent_execGetPastData_Parms
{
	float                                              RewindTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bUseClientTimeStamps : 1;                         		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FPComPositionHistoryData                    ReturnValue;                                      		// 0x0008 (0x002C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlatformCommon.PComPositionHistoryServerComponent.RecordData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPComPositionHistoryServerComponent_execRecordData_Parms
{
};

// Function PlatformCommon.PComRepInfo_Game.CreateMusicThemePlayer
// [0x00020102] 
struct APComRepInfo_Game_execCreateMusicThemePlayer_Parms
{
};

// Function PlatformCommon.PComRepInfo_Game.PostBeginPlay
// [0x00020102] 
struct APComRepInfo_Game_execPostBeginPlay_Parms
{
};

// Function PlatformCommon.PComRepInfo_Game.PlayMusicEvent
// [0x00020400] ( FUNC_Native )
struct APComRepInfo_Game_execPlayMusicEvent_Parms
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
};

// Function PlatformCommon.PComSupportCommands.scLogTickFlags
// [0x40024202] ( FUNC_Exec )
struct UPComSupportCommands_execscLogTickFlags_Parms
{
	int                                                nFlags;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSet : 1;                                         		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function PlatformCommon.PComSupportCommands.scPerfAlwaysRelevantLimit
// [0x40020202] ( FUNC_Exec )
struct UPComSupportCommands_execscPerfAlwaysRelevantLimit_Parms
{
	int                                                feet;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComSupportCommands.scGPerfServerFlags
// [0x40020202] ( FUNC_Exec )
struct UPComSupportCommands_execscGPerfServerFlags_Parms
{
	int                                                Flags;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                alternate1;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                alternate2;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComSupportCommands.scPerfPhysThreshold
// [0x40020202] ( FUNC_Exec )
struct UPComSupportCommands_execscPerfPhysThreshold_Parms
{
	float                                              thresh1;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              thesh2;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComSupportCommands.scPerfTickRate
// [0x40020202] ( FUNC_Exec )
struct UPComSupportCommands_execscPerfTickRate_Parms
{
	int                                                tickHz;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                altTickHz;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComSupportCommands.scPerfDebugRelevMode
// [0x40020202] ( FUNC_Exec )
struct UPComSupportCommands_execscPerfDebugRelevMode_Parms
{
	int                                                Mode;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComSupportCommands.scPerfDebugSkip
// [0x40020202] ( FUNC_Exec )
struct UPComSupportCommands_execscPerfDebugSkip_Parms
{
	int                                                skips;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComSupportCommands.scPerfDebugFeet
// [0x40020202] ( FUNC_Exec )
struct UPComSupportCommands_execscPerfDebugFeet_Parms
{
	int                                                feet;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComSupportCommands.scDemoStop
// [0x40020202] ( FUNC_Exec )
struct UPComSupportCommands_execscDemoStop_Parms
{
};

// Function PlatformCommon.PComSupportCommands.scDemoRec
// [0x40020202] ( FUNC_Exec )
struct UPComSupportCommands_execscDemoRec_Parms
{
	struct FString                                     sCommand;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComSupportCommands.scTimer
// [0x40020202] ( FUNC_Exec )
struct UPComSupportCommands_execscTimer_Parms
{
	struct FString                                     sCommand;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class AFrameworkGame*                           Game;                                             		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function PlatformCommon.PComSupportCommands.scTime
// [0x40020202] ( FUNC_Exec )
struct UPComSupportCommands_execscTime_Parms
{
	int                                                nSeconds;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AFrameworkGame*                           Game;                                             		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function PlatformCommon.PComSupportCommands.scScore
// [0x40024202] ( FUNC_Exec )
struct UPComSupportCommands_execscScore_Parms
{
	int                                                nTeam;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nCount;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class AFrameworkGame*                           Game;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function PlatformCommon.PComSupportCommands.scEndGame
// [0x40024202] ( FUNC_Exec )
struct UPComSupportCommands_execscEndGame_Parms
{
	struct FString                                     Reason;                                           		// 0x0000 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	// class AFrameworkGame*                           Game;                                             		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function PlatformCommon.PComSupportCommands.scStartGame
// [0x40024202] ( FUNC_Exec )
struct UPComSupportCommands_execscStartGame_Parms
{
	struct FString                                     Reason;                                           		// 0x0000 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	// class AFrameworkGame*                           Game;                                             		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function PlatformCommon.PComSupportCommands.scLogMark
// [0x40020202] ( FUNC_Exec )
struct UPComSupportCommands_execscLogMark_Parms
{
	struct FString                                     Comment;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComSupportCommands.scLog
// [0x40024202] ( FUNC_Exec )
struct UPComSupportCommands_execscLog_Parms
{
	struct FString                                     LogName;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bEnabled : 1;                                     		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// struct FString                                  Prefix;                                           		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function PlatformCommon.PComSupportCommands.gmmf
// [0x00020202] ( FUNC_Exec )
struct UPComSupportCommands_execgmmf_Parms
{
};

// Function PlatformCommon.PComSupportCommands.SetLogServerTickStatsFlags
// [0x00020400] ( FUNC_Native )
struct UPComSupportCommands_execSetLogServerTickStatsFlags_Parms
{
	int                                                Flags;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSet : 1;                                         		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function PlatformCommon.PComSupportCommands.GPerfDebugPhysicsThreshold
// [0x00020400] ( FUNC_Native )
struct UPComSupportCommands_execGPerfDebugPhysicsThreshold_Parms
{
	float                                              fThresh1;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fThresh2;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComSupportCommands.GPerfDebugTickRate
// [0x00020400] ( FUNC_Native )
struct UPComSupportCommands_execGPerfDebugTickRate_Parms
{
	int                                                tickHz;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                altTickHz;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComSupportCommands.GPerfAllRelevantLimit
// [0x00020400] ( FUNC_Native )
struct UPComSupportCommands_execGPerfAllRelevantLimit_Parms
{
	int                                                feet;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComSupportCommands.GPerfServerFlags
// [0x00020400] ( FUNC_Native )
struct UPComSupportCommands_execGPerfServerFlags_Parms
{
	int                                                Flags;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                alternate1;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                alternate2;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComSupportCommands.GPerfDebugRelevMode
// [0x00020400] ( FUNC_Native )
struct UPComSupportCommands_execGPerfDebugRelevMode_Parms
{
	int                                                Mode;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComSupportCommands.GPerfDebugSkips
// [0x00020400] ( FUNC_Native )
struct UPComSupportCommands_execGPerfDebugSkips_Parms
{
	int                                                skips;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComSupportCommands.GPerfDebugFeet
// [0x00020400] ( FUNC_Native )
struct UPComSupportCommands_execGPerfDebugFeet_Parms
{
	int                                                feet;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComSupportCommands.gmDiag
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPComSupportCommands_execgmDiag_Parms
{
	int                                                Code;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Route;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComSupportCommands.gmC
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPComSupportCommands_execgmC_Parms
{
	struct FString                                     sCommand;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComSupportCommands.gmCommand
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPComSupportCommands_execgmCommand_Parms
{
	struct FString                                     sCommand;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComSupportCommands.gmMatchLobbyResume
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPComSupportCommands_execgmMatchLobbyResume_Parms
{
};

// Function PlatformCommon.PComSupportCommands.gmMatchLobbyPause
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPComSupportCommands_execgmMatchLobbyPause_Parms
{
};

// Function PlatformCommon.PComSupportCommands.gmMatchNext
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UPComSupportCommands_execgmMatchNext_Parms
{
	int                                                nMapId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComSupportCommands.gmMatchForce
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct UPComSupportCommands_execgmMatchForce_Parms
{
	int                                                nQueueId;                                         		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function PlatformCommon.PComUIManagerBase.DebugDraw
// [0x00020802] ( FUNC_Event )
struct UPComUIManagerBase_eventDebugDraw_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// float                                           PosX;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           PosY;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function PlatformCommon.PComUtilityFunctions.GetGDeltaTime
// [0x00022400] ( FUNC_Native )
struct UPComUtilityFunctions_execGetGDeltaTime_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlatformCommon.PComUtilityFunctions.IsAWithStop
// [0x00022400] ( FUNC_Native )
struct UPComUtilityFunctions_execIsAWithStop_Parms
{
	class UObject*                                     InObject;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      SomeBase;                                         		// 0x0008 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	class UClass*                                      StopAtBase;                                       		// 0x0010 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlatformCommon.PComUtilityFunctions.FakeNetSerialize
// [0x00422400] ( FUNC_Native )
struct UPComUtilityFunctions_execFakeNetSerialize_Parms
{
	struct FVector                                     InVector;                                         		// 0x0000 (0x000C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlatformCommon.PComVideoPlayer.DestroyMe
// [0x00020002] 
struct APComVideoPlayer_execDestroyMe_Parms
{
};

// Function PlatformCommon.PComVideoPlayer.TestOnVideoError
// [0x00020002] 
struct APComVideoPlayer_execTestOnVideoError_Parms
{
	class APComVideoPlayer*                            VideoPlayer;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ErrorCode;                                        		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComVideoPlayer.TestVideoPlayer
// [0x00026002] 
struct APComVideoPlayer_execTestVideoPlayer_Parms
{
	class AActor*                                      SpawningActor;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     InURL;                                            		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	// class APComVideoPlayer*                         PComVideoPlayer;                                  		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function PlatformCommon.PComVideoPlayer.StopVideoSession
// [0x00020500] ( FUNC_Native )
struct APComVideoPlayer_execStopVideoSession_Parms
{
};

// Function PlatformCommon.PComVideoPlayer.Initialize
// [0x00020500] ( FUNC_Native )
struct APComVideoPlayer_execInitialize_Parms
{
};

// Function PlatformCommon.PComVideoPlayer.NativePostRenderFor
// [0x00020500] ( FUNC_Native )
struct APComVideoPlayer_execNativePostRenderFor_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraPosition;                                   		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraDir;                                        		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComVideoPlayer.OnVideoError
// [0x00120000] 
struct APComVideoPlayer_execOnVideoError_Parms
{
	class APComVideoPlayer*                            VideoPlayer;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ErrorCode;                                        		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComVideoPlayer.OnVideoFinished
// [0x00120000] 
struct APComVideoPlayer_execOnVideoFinished_Parms
{
};

// Function PlatformCommon.PComMusicThemePlayer.UpdateReplicatedMusicEvent
// [0x00020400] ( FUNC_Native )
struct UPComMusicThemePlayer_execUpdateReplicatedMusicEvent_Parms
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
};

// Function PlatformCommon.PComMusicThemePlayer.UpdateMusicTrack
// [0x00024400] ( FUNC_Native )
struct UPComMusicThemePlayer_execUpdateMusicTrack_Parms
{
	struct FMusicTrackStruct                           NewMusicTrack;                                    		// 0x0000 (0x002C) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
	float                                              fDuration;                                        		// 0x002C (0x0004) [0x0000000000000092]              ( CPF_Const | CPF_OptionalParm | CPF_Parm )
};

// Function PlatformCommon.PComMusicThemePlayer.StopMusic
// [0x00020400] ( FUNC_Native )
struct UPComMusicThemePlayer_execStopMusic_Parms
{
};

// Function PlatformCommon.PComMusicThemePlayer.PlayMusicEvent
// [0x00020400] ( FUNC_Native )
struct UPComMusicThemePlayer_execPlayMusicEvent_Parms
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
};

// Function PlatformCommon.PComMusicThemePlayer.PlayDefaultMusic
// [0x00020400] ( FUNC_Native )
struct UPComMusicThemePlayer_execPlayDefaultMusic_Parms
{
};

// Function PlatformCommon.PComMusicThemePlayer.OnThemeLoaded
// [0x00020400] ( FUNC_Native )
struct UPComMusicThemePlayer_execOnThemeLoaded_Parms
{
};

// Function PlatformCommon.PComMusicThemePlayer.LoadTheme
// [0x00020400] ( FUNC_Native )
struct UPComMusicThemePlayer_execLoadTheme_Parms
{
	struct FString                                     themepath;                                        		// 0x0000 (0x0010) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComMusicThemePlayer.GetDefaultThemePath
// [0x00020400] ( FUNC_Native )
struct UPComMusicThemePlayer_execGetDefaultThemePath_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function PlatformCommon.PComMusicThemePlayer.LoadDefaultTheme
// [0x00020400] ( FUNC_Native )
struct UPComMusicThemePlayer_execLoadDefaultTheme_Parms
{
};

// Function PlatformCommon.PComMusicThemePlayer.Init
// [0x00020400] ( FUNC_Native )
struct UPComMusicThemePlayer_execInit_Parms
{
};

// Function PlatformCommon.PComMusicThemeSyncActor.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct APComMusicThemeSyncActor_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComMusicThemeSyncActor.UpdateMusicEventClient
// [0x00020400] ( FUNC_Native )
struct APComMusicThemeSyncActor_execUpdateMusicEventClient_Parms
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlatformCommon.PComMusicThemeSyncActor.UpdateMusicEvent
// [0x00020400] ( FUNC_Native )
struct APComMusicThemeSyncActor_execUpdateMusicEvent_Parms
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif