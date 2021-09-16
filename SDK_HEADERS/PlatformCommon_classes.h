/*
#############################################################################################
# Smite (v3.24.3804.2) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: PlatformCommon_classes.h
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

#define CONST_BROWSER_SURFACE_ID                                 1
#define CONST_MAX_SIMULTANEOUS_DOWNLOADS                         8
#define CONST_TIME_OUT                                           30.f
#define CONST_PICTURE_IN_PICTURE_BASE_WIDTH                      1920.0f
#define CONST_PICTURE_IN_PICTURE_BASE_HEIGHT                     1080.0f
#define CONST_m_nMinDisplayLookSensitivity                       1.0
#define CONST_m_nMaxDisplayLookSensitivity                       100.0
#define CONST_MAX_POSITION_HISTORY_FRAMES                        30
#define CONST_GC_OS_TYPE_BELOW_XP                                10300
#define CONST_GC_OS_TYPE_XP                                      10301
#define CONST_GC_OS_TYPE_VISTA                                   10303
#define CONST_GC_OS_TYPE_WIN7                                    10305
#define CONST_GC_OS_TYPE_WIN8                                    10307

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum PlatformCommon.PComOpenBroadcaster.EPComOpenBroadcasterState
/*enum EPComOpenBroadcasterState
{
	POBS_Idle                                          = 0,
	POBS_WaitingForFacebookWebBrowserLoaded            = 1,
	POBS_WaitingForFacebookNewPublishFlow              = 2,
	POBS_FacebookNewPublishError                       = 3,
	POBS_WaitingForFacebookLogin                       = 4,
	POBS_WaitingForFacebookPublish                     = 5,
	POBS_FacebookPublishFinished                       = 6,
	POBS_Streaming                                     = 7,
	POBS_Quitting                                      = 8,
	POBS_MAX                                           = 9
};*/

// Enum PlatformCommon.PComImageDownloader.EPComImageDownloadState
/*enum EPComImageDownloadState
{
	TIDS_NotStarted                                    = 0,
	TIDS_Downloading                                   = 1,
	TIDS_Succeeded                                     = 2,
	TIDS_Failed                                        = 3,
	TIDS_MAX                                           = 4
};*/

// Enum PlatformCommon.PComPerformanceCaptureBase.EPComPerformanceCaptureState
/*enum EPComPerformanceCaptureState
{
	PPCS_WaitingToStart                                = 0,
	PPCS_MoveToNode                                    = 1,
	PPCS_StartBasicStats                               = 2,
	PPCS_StopBasicStats                                = 3,
	PPCS_StartCycleStats                               = 4,
	PPCS_StopCycleStats                                = 5,
	PPCS_SaveAndExit                                   = 6,
	PPCS_LoadCharacters                                = 7,
	PPCS_LoadCharactersOnly                            = 8,
	PPCS_DestroyPawns                                  = 9,
	PPCS_MAX                                           = 10
};*/

// Enum PlatformCommon.PComStructures.CMTargetType
/*enum CMTargetType
{
	CMTT_Pawn                                          = 0,
	CMTT_Deployable                                    = 1,
	CMTT_Destructible                                  = 2,
	CMTT_Projectile                                    = 3,
	CMTT_MAX                                           = 4
};*/

// Enum PlatformCommon.PComSupportCommands.GC_ALERT_PRIORITY
/*enum GC_ALERT_PRIORITY
{
	GC_APT_MINIMAL                                     = 0,
	GC_APT_NORMAL                                      = 1,
	GC_APT_HIGH                                        = 2,
	GC_APT_CRITICAL                                    = 3,
	GC_APT_MAX                                         = 4
};*/

// Enum PlatformCommon.PComSupportCommands.GC_CHAT_CHANNEL
/*enum GC_CHAT_CHANNEL
{
	GC_CC_GLOBAL                                       = 0,
	GC_CC_CLAN                                         = 1,
	GC_CC_INSTANCE                                     = 2,
	GC_CC_LOCAL_TEAM                                   = 3,
	GC_CC_PARTY                                        = 4,
	GC_CC_CITY                                         = 5,
	GC_CC_PERSONAL                                     = 6,
	GC_CC_PRIVATE                                      = 7,
	GC_CC_EOM_LOBBY                                    = 8,
	GC_CC_SYSTEM                                       = 9,
	GC_CC_TRADE                                        = 10,
	GC_CC_LFG                                          = 11,
	GC_CC_LFG01                                        = 12,
	GC_CC_HELP                                         = 13,
	GC_CC_VOIP_NEWS                                    = 14,
	GC_CC_GM                                           = 15,
	GC_CC_VIP                                          = 16,
	GC_CC_LFG02                                        = 17,
	GC_CC_COUNT                                        = 18,
	GC_CC_VOIP_ECHO                                    = 19,
	GC_CC_VOIP_CONF                                    = 20,
	GC_CC_COMBAT                                       = 21,
	GC_CC_EMOTE                                        = 22,
	GC_CC_INVALID                                      = 23,
	GC_CC_LAST                                         = 24,
	GC_CC_MAX                                          = 25
};*/

// Enum PlatformCommon.PComSupportCommands.GC_STEAM_TXN_TYPES
/*enum GC_STEAM_TXN_TYPES
{
	GC_STT_INVALID                                     = 0,
	GC_STT_GETUSERINFO                                 = 1,
	GC_STT_INIT                                        = 2,
	GC_STT_FINALIZE                                    = 3,
	GC_STT_DECLINE                                     = 4,
	GC_STT_MAX                                         = 5
};*/

// Enum PlatformCommon.PComVideoPlayer.EPComVideoPlayerError
/*enum EPComVideoPlayerError
{
	PVPE_NoError                                       = 0,
	PVPE_CannotOpenVideo                               = 1,
	PVPE_StreamingProblem                              = 2,
	PVPE_Unknown                                       = 3,
	PVPE_MAX                                           = 4
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class PlatformCommon.PComBrowserInteraction
// 0x0008 (0x00B8 - 0x00B0)
class UPComBrowserInteraction : public UInteraction
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                     		// 0x00B0 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1471 );

		return pClassPointer;
	};

};

UClass* UPComBrowserInteraction::pClassPointer = NULL;

// Class PlatformCommon.PComBrowserManager
// 0x0000 (0x0060 - 0x0060)
class UPComBrowserManager : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1472 );

		return pClassPointer;
	};

	void OpenURL ( struct FString URL, unsigned long bShowNavButtons, unsigned long bSetFocus );
};

UClass* UPComBrowserManager::pClassPointer = NULL;

// Class PlatformCommon.PComCheatManager
// 0x0000 (0x00A0 - 0x00A0)
class UPComCheatManager : public UGameCheatManager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1473 );

		return pClassPointer;
	};

};

UClass* UPComCheatManager::pClassPointer = NULL;

// Class PlatformCommon.PComGameEngine
// 0x0008 (0x0AB0 - 0x0AA8)
class UPComGameEngine : public UGameEngine
{
public:
	struct FPointer                                    pOutgoingMarshal;                                 		// 0x0AA8 (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1474 );

		return pClassPointer;
	};

	bool HandlePlayerCommandInput ( struct FString FSCommand, class APlayerController* PC );
	void SendGameRequest ( struct FString fsRequest );
	void SendCtrlRequest ( struct FString fsRequest );
	void SendMarshalAll ( unsigned long bLowPriority );
	void SendMarshal ( struct FUniqueNetId qwPlayerId, unsigned long bLowPriority );
	void ClearMarshal ( );
	bool SetFieldString ( int nToken, struct FString StrValue );
	bool SetFieldFloat ( int nToken, float FloatValue );
	bool SetFieldInt ( int nToken, int IntValue );
	bool SetFunction ( int nFunction );
};

UClass* UPComGameEngine::pClassPointer = NULL;

// Class PlatformCommon.PComGameViewportClient
// 0x001C (0x01C4 - 0x01A8)
class UPComGameViewportClient : public UGameViewportClient
{
public:
	class UPComOpenBroadcaster*                        OpenBroadcaster;                                  		// 0x01A8 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UPComInputLightingEffect*                    InputLightingEffect;                              		// 0x01B0 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bUseDynamicResolutionScaler : 1;                  		// 0x01B8 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	struct FPointer                                    DynamicResolutionScaler;                          		// 0x01BC (0x0008) [0x0000000000003000]              ( CPF_Native | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1475 );

		return pClassPointer;
	};

	bool eventInit ( struct FString* OutError );
	void StartFacebookStreaming ( );
	void StopRTMPStreaming ( );
	void StartRTMPStreaming ( struct FString InServer, struct FString InKey );
	void SetRTMPSettings ( unsigned long bAllowWebcam, unsigned long bAllowMicrophone, unsigned long bAllowDesktopAudio );
	void CheckGameSettingsVersion ( );
	void HandleGameSettingsMigration ( int OldGameSettingsVersion );
	int GetCurrentGameSettingsVersion ( );
	void InitDynamicResolutionScaler ( );
};

UClass* UPComGameViewportClient::pClassPointer = NULL;

// Class PlatformCommon.PComImageDownloader
// 0x0020 (0x0080 - 0x0060)
class UPComImageDownloader : public UObject
{
public:
	TArray< struct FPComImageDownload >                DownloadImages;                                   		// 0x0060 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnPComImageDownloaded__Delegate;                		// 0x0070 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0074 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1476 );

		return pClassPointer;
	};

	void SetPComImageDownloadedDelegate ( struct FScriptDelegate PComImageDownloadedDelegate );
	void OnPComImageDownloaded ( struct FPComImageDownload CachedEntry );
};

UClass* UPComImageDownloader::pClassPointer = NULL;

// Class PlatformCommon.PComInputLightingEffect
// 0x0080 (0x00E0 - 0x0060)
class UPComInputLightingEffect : public UObject
{
public:
	unsigned long                                      bAllowLogitechSdk : 1;                            		// 0x0060 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned long                                      bLogitechSdkInitialized : 1;                      		// 0x0060 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bLatchedSystemSettingsSdkAllowed : 1;             		// 0x0060 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	TArray< struct FPComInputLightingPreset >          Presets;                                          		// 0x0064 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FMap_Mirror                                 PresetsMap;                                       		// 0x0074 (0x0048) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	TArray< struct FPComActiveInputLightingPreset >    ActivePresets;                                    		// 0x00BC (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FLinearColor                                BlendFromColor;                                   		// 0x00CC (0x0010) [0x0000000000002000]              ( CPF_Transient )
	float                                              BlendPercent;                                     		// 0x00DC (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1477 );

		return pClassPointer;
	};

	bool IsLogitechSdkVersionValid ( );
	void SetCurrentTime ( struct FName InPresetName, float CurrentTime );
	void StopPreset ( struct FName InPresetName );
	void PlayPreset ( struct FName InPresetName, unsigned long bUseOverrideStartTime, float OverrideStartTime );
	void DisableSystem ( );
	void TryEnableSystem ( );
};

UClass* UPComInputLightingEffect::pClassPointer = NULL;

// Class PlatformCommon.PComJsonHandler
// 0x0068 (0x00C8 - 0x0060)
class UPComJsonHandler : public UObject
{
public:
	class UPComImageDownloader*                        m_pImageDownloader;                               		// 0x0060 (0x0008) [0x0000000000000000]              
	struct FPointer                                    m_pCallbackObject;                                		// 0x0068 (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FString                                     m_strUrl;                                         		// 0x0070 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_strDownloadDir;                                 		// 0x0080 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_strLocalDir;                                    		// 0x0090 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_strJson;                                        		// 0x00A0 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_strName;                                        		// 0x00B0 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FPointer                                    m_pHttp;                                          		// 0x00C0 (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1478 );

		return pClassPointer;
	};

	void OnImageDownloaded ( struct FPComImageDownload CachedEntry );
};

UClass* UPComJsonHandler::pClassPointer = NULL;

// Class PlatformCommon.PComOpenBroadcaster
// 0x0088 (0x00E8 - 0x0060)
class UPComOpenBroadcaster : public UObject
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                     		// 0x0060 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FString                                     FacebookAppId;                                    		// 0x0068 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     FacebookApprovedDomain;                           		// 0x0078 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     FacebookLiveUrl;                                  		// 0x0088 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	unsigned char                                      CurrentState;                                     		// 0x0098 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	struct FPComOpenBroadcasterSettings                CurrentSettings;                                  		// 0x009C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FPointer                                    StreamerProcessHandle;                            		// 0x00A0 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __PreloadWebBrowser__Delegate;                    		// 0x00A8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00AC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __IsWebBrowserLoaded__Delegate;                   		// 0x00B8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00BC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OpenWebBrowser__Delegate;                       		// 0x00C8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x00CC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __CloseWebBrowser__Delegate;                      		// 0x00D8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x00DC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1479 );

		return pClassPointer;
	};

	class UWebRequest* eventDecodeFacebookRTMPUrl ( struct FString InRequest );
	void Tick ( );
	void ForceStopStreaming ( );
	void StopStreaming ( );
	void StartRTMPStreaming ( struct FString InServer, struct FString InKey );
	void StartFacebookStreaming ( );
	void QueueFacebookStreaming ( );
	void SetStreamSettings ( struct FPComOpenBroadcasterSettings* InSettings );
	bool IsStreaming ( );
	void CloseWebBrowser ( );
	void OpenWebBrowser ( struct FString URL );
	bool IsWebBrowserLoaded ( );
	void PreloadWebBrowser ( );
};

UClass* UPComOpenBroadcaster::pClassPointer = NULL;

// Class PlatformCommon.PComPerformanceCaptureBase
// 0x007C (0x00DC - 0x0060)
class UPComPerformanceCaptureBase : public UObject
{
public:
	TArray< struct FName >                             StatsToCollect;                                   		// 0x0060 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FArray_Mirror                               StatIds;                                          		// 0x0070 (0x0010) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	TArray< unsigned char >                            StatTypes;                                        		// 0x0080 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              FOV;                                              		// 0x0090 (0x0004) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FPComPerformanceCaptureProfile >    Profiles;                                         		// 0x0094 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPComPerformanceCaptureProfile              FallbackProfile;                                  		// 0x00A4 (0x001C) [0x0000000000004000]              ( CPF_Config )
	struct FPComPerformanceCaptureProfile              ActiveProfile;                                    		// 0x00C0 (0x001C) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1480 );

		return pClassPointer;
	};

	void CreateFileAndExit ( struct FString FileNameWithExtension, struct FString FileContents, struct FString SubfolderName );
	void GetPerfStats ( TArray< struct FPComPerformanceCaptureStat > PerfStats, struct FString* FileContents );
	void GetStatsToCollect ( struct FString* FileContents );
	void GetMapNameAndTime ( struct FString* MapNameStr, struct FString* FormattedDate, struct FString* FormattedTime );
	void StopCycleStats ( TArray< struct FPComPerformanceCaptureStat >* PerfStats );
	void GetPerformanceData ( TArray< struct FPComPerformanceCaptureStat >* PerfStats );
	void EnableStatNotify ( );
	void EnableNonCycleStats ( );
	void MoveCamera ( class APlayerController* PlayerController, class AActor* Node );
	void InitializePerformanceCaptureSettings ( );
};

UClass* UPComPerformanceCaptureBase::pClassPointer = NULL;

// Class PlatformCommon.PComPerformanceCaptureGame
// 0x002C (0x04D8 - 0x04AC)
class APComPerformanceCaptureGame : public AGameInfo
{
public:
	class UPComPerformanceCaptureBase*                 BasePerformanceCapture;                           		// 0x04AC (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      CurrentCaptureState;                              		// 0x04B4 (0x0001) [0x0000000000000000]              
	TArray< class APComPerformanceCaptureNode* >       NodesToCapture;                                   		// 0x04B8 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FPComPerformanceCaptureStatsPerNode > StatsPerNode;                                     		// 0x04C8 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1481 );

		return pClassPointer;
	};

	void DoNextAction ( );
	void CollectNodes ( );
	void eventPostBeginPlay ( );
};

UClass* APComPerformanceCaptureGame::pClassPointer = NULL;

// Class PlatformCommon.PComPerformanceCaptureNode
// 0x0014 (0x0274 - 0x0260)
class APComPerformanceCaptureNode : public AActor
{
public:
	struct FString                                     ExecCommand;                                      		// 0x0260 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              DelayBeforeCapture;                               		// 0x0270 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1482 );

		return pClassPointer;
	};

};

UClass* APComPerformanceCaptureNode::pClassPointer = NULL;

// Class PlatformCommon.PComPictureInPicture
// 0x003C (0x009C - 0x0060)
class UPComPictureInPicture : public UObject
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                     		// 0x0060 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class UPComPictureInPictureScene*                  Scene;                                            		// 0x0068 (0x0008) [0x0000000000000000]              
	class UTextureRenderTarget2D*                      RenderTargetToUse;                                		// 0x0070 (0x0008) [0x0000000000000000]              
	TArray< struct FPComPipViewDesc >                  ViewDescs;                                        		// 0x0078 (0x0010) [0x0000000000101000]              ( CPF_Native )
	unsigned long                                      bEnableDebugRendering : 1;                        		// 0x0088 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector2D                                   CurrentOffset;                                    		// 0x008C (0x0008) [0x0000000000000000]              
	struct FVector2D                                   CurrentScaling;                                   		// 0x0094 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1483 );

		return pClassPointer;
	};

	void TestPictureInPicture ( );
	void DebugRender ( class UCanvas* Canvas );
	bool IsViewDescReady ( struct FPComPipViewDesc* ViewDesc );
	bool IsViewReady ( struct FName ViewName );
	void RequestRender ( struct FName ViewName );
	void RemoveView ( struct FName ViewName );
	void AddView ( struct FPComPipViewDesc* InViewDesc );
	void Tick ( );
	void InitializeRenderTarget ( );
};

UClass* UPComPictureInPicture::pClassPointer = NULL;

// Class PlatformCommon.PComPictureInPictureScene
// 0x0048 (0x00A8 - 0x0060)
class UPComPictureInPictureScene : public UObject
{
public:
	float                                              SkyBrightness;                                    		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      SkyColor;                                         		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LightBrightness;                                  		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAlwaysAllowAudioPlayback : 1;                    		// 0x006C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bForceAllUsedMipsResident : 1;                    		// 0x006C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	struct FPointer                                    Scene;                                            		// 0x0070 (0x0008) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	TArray< class UActorComponent* >                   Components;                                       		// 0x0078 (0x0010) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	class UDirectionalLightComponent*                  DirectionalLight;                                 		// 0x0088 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UDirectionalLightComponent*                  DirectionalBounceLight;                           		// 0x0090 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USkyLightComponent*                          SkyLight;                                         		// 0x0098 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class ULineBatchComponent*                         LineBatcher;                                      		// 0x00A0 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1484 );

		return pClassPointer;
	};

	void SetSkyColor ( struct FColor* InSkyColor );
	void SetSkyBrightness ( float InSkyBrightness );
	void SetBounceLightColor ( struct FColor* LightColor );
	void SetBounceLightBrightness ( float InLightBrightness );
	void SetBounceLightDirection ( struct FRotator* InLightDir );
	void EnableDirectionalBounceLight ( unsigned long bInEnableBoundLight, float InBounceLightBrightness, struct FRotator BounceLightDir );
	void SetLightColor ( struct FColor* LightColor );
	void SetLightBrightness ( float InLightBrightness );
	void SetLightDirection ( struct FRotator* InLightDir );
	struct FRotator GetLightDirection ( );
	void RemoveComponent ( class UActorComponent* Component );
	void AddComponent ( class UActorComponent* Component, struct FMatrix* LocalToWorld );
	void InitScene ( );
};

UClass* UPComPictureInPictureScene::pClassPointer = NULL;

// Class PlatformCommon.PComPlayerController
// 0x005C (0x07B4 - 0x0758)
class APComPlayerController : public AGamePlayerController
{
public:
	struct FUniqueNetId                                m_LastPendingPartyInviteId;                       		// 0x0758 (0x0008) [0x0000000000000000]              
	unsigned long                                      m_bPartySessionJoinInProgress : 1;                		// 0x0760 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bPartySessionCreateInProgress : 1;              		// 0x0760 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bPartyDestroyInProgress : 1;                    		// 0x0760 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bQuittingToMainMenu : 1;                        		// 0x0760 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      m_bHasAcknowledgedPawn : 1;                       		// 0x0760 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	unsigned long                                      m_bKeepLoggedIn : 1;                              		// 0x0760 (0x0004) [0x0000000000044000] [0x00000020] ( CPF_Config | CPF_GlobalConfig )
	struct Fdword                                      m_dwPendingPartyId;                               		// 0x0764 (0x0004) [0x0000000000000000]              
	int                                                m_nMaxPartyPublicConnections;                     		// 0x0768 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FOnlineGameSearchResult                     m_PendingInviteResult;                            		// 0x076C (0x0010) [0x0000000000000000]              
	struct FName                                       PartySessionName;                                 		// 0x077C (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       GameSessionName;                                  		// 0x0784 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct Fdword                                      m_dwLastLoginPortalId;                            		// 0x078C (0x0004) [0x0000000000044000]              ( CPF_Config | CPF_GlobalConfig )
	struct Fdword                                      m_dwLastLoginAccountId;                           		// 0x0790 (0x0004) [0x0000000000044000]              ( CPF_Config | CPF_GlobalConfig )
	struct FString                                     m_sLastLoginAccessToken;                          		// 0x0794 (0x0010) [0x0000000000444000]              ( CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink )
	struct FString                                     m_sLastLoginAccessTokenExpiration;                		// 0x07A4 (0x0010) [0x0000000000444000]              ( CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1485 );

		return pClassPointer;
	};

	void PlayTestInputLightingEffect ( struct FName InPresetName );
	void SetCurrentTimeForInputLightingEffect ( struct FName InPresetName, float InCurrentTime );
	void StopInputLightingEffect ( struct FName InPresetName );
	void PlayInputLightingEffect ( struct FName InPresetName, unsigned long bUseOverrideStartTime, float OverrideStartTime );
	void eventClientPlayInputLightingEffect ( struct FName InPresetName, unsigned long bUseOverrideStartTime, float OverrideStartTime );
	bool TryAutoLogin ( );
	void eventTryAutoLoginDelayed ( );
	void eventSetAsNewPartyHost ( );
	void eventToggleGameSessionInvitesAllowed ( unsigned long bAllowed );
	void eventTogglePartySessionInvitesAllowed ( unsigned long bAllowed );
	void eventUpdateMCTSWithNewPartyInfo ( );
	bool eventIsHostOfParty ( );
	void OnPeoplePickerComplete ( unsigned long bWasSuccessful, TArray< struct FOnlineFriend > PeoplePicked );
	void OnReadFriendsListComplete ( unsigned long bWasSuccessful );
	bool ShowPeoplePickerUI ( );
	void JoinCustomMatchForInviteDelay ( );
	void eventJoinCustomMatchFromInvite ( );
	void OnJoinSessionForReceivedInviteComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	void OnPrivilegeCheckForGameSessionJoin ( unsigned char LocalUserNum, unsigned char Privilege, unsigned char PrivilegeLevel, unsigned long bDiffersFromHint );
	void OnPrivilegeLevelCheckedCompleteForPartyJoin ( unsigned char LocalUserNum, unsigned char Privilege, unsigned char PrivilegeLevel, unsigned long bDiffersFromHint );
	void OnGameDestroyedForPartyJoin ( struct FName SessionName, unsigned long bWasSuccessful );
	void OnAlternatePrivilegeLevelCheckedComplete ( unsigned char LocalUserNum, unsigned char Privilege, unsigned char PrivilegeLevel, unsigned long bDiffersFromHint );
	void OnGameInviteAccepted ( struct FOnlineGameSearchResult* InviteResult );
	void eventJoinPartySession ( unsigned char* PartySessionGuid );
	void eventOnPartySessionDestroyed ( struct FName SessionName, unsigned long bWasSuccessful );
	void DestroyPartySession ( );
	bool eventInvitePlayerToParty ( struct FUniqueNetId InPlayerId );
	bool eventInvitePlayerToPartyByName ( struct FString InPlayerName );
	void OnCreatePartySessionComplete ( struct FName SessionName, unsigned long bSuccessful );
	void CreatePartySession ( );
	void eventUnregisterP2PEnemiesForCustomMatch ( TArray< struct FUniqueNetId > EnemyIds );
	void OnGetVoicePermissionsForUsersComplete ( unsigned char LocalUserNum, unsigned char Privilege, TArray< struct FPermissionsResult > Results );
	void OnGetSessionMemberInfoComplete ( TArray< struct FSessionMemberInfo > SessionListInfo, unsigned long bWasSuccessful );
	void OnGetUserConnectionInfoComplete ( TArray< struct FSessionMemberInfo > SessionListInfo, unsigned long bWasSuccessful );
	TArray< struct FString > GetUserNamesForPS4P2PConnections ( );
	void CloseConnectionsToInvalidPeers ( TArray< struct FSessionMemberInfo > SessionListInfo );
	void EstablishPeers ( );
	void eventLostP2PConnection ( struct FUniqueNetId UniqueId );
	void eventGetControllerIdFromNetId ( struct FUniqueNetId PlayerID, int* ControllerId );
	void eventPairLoggedInUserAndCurrentController ( );
	bool IsInGame ( );
	bool IsPackageInstalled ( );
	void OnMultiplayerSessionChange ( struct FName SessionName, struct FSessionUpdateInfo SessionChanges );
	bool eventCheckFilterText ( struct FString Text );
	bool eventCanPlayOnlineWithUsersByUniqueNetIds ( unsigned char LocalUserNum, TArray< struct FUniqueNetId > Users );
	bool eventCanCommunicateTextWithUsersByUniqueNetIds ( unsigned char LocalUserNum, TArray< struct FUniqueNetId > Users );
	bool eventCanCommunicateText ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint );
	void OnTextFilterApplied ( struct FString OriginalText, struct FString FilteredText, unsigned long bCensorCompletely );
	void RequestUpdateFriendsList ( unsigned long bForceRequest );
	void UpdateMctsWithFriends ( unsigned long bWasSuccessful );
	void OnContentPurchaseResponse ( unsigned long bAuthorized, struct FQWord qwOrderId );
	void OnPrivilegeCheckedForUsersByUniqueNetIds ( unsigned char LocalUserNum, unsigned char Privilege, TArray< struct FPermissionsResultByUniqueNetId > Results );
	void OnPrivilegeLevelChecked ( unsigned char LocalUserNum, unsigned char Privilege, unsigned char PrivilegeLevel, unsigned long bDiffersFromHint );
	void eventClearOnlineDelegates ( );
	void eventRegisterOnlineDelegates ( );
	void ClientRestablishP2PConnections ( );
	void ServerReEstablishP2PConnections ( );
	bool IsReconnect ( );
	void eventRestablishVoiceForReconnect ( );
	void OnJoinOnlineGameCompleteForReceivedSessionInfo ( struct FName SessionName, unsigned long bWasSuccessful );
	void eventReceiveSessionInfo ( unsigned char* PlatformSpecificInfo, unsigned char ConsoleType );
	void OnCreateOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	void ChooseThisControllerForSessionScout ( unsigned long bCustomMatch, int MaxPlayers, unsigned long bPrivate, TArray< struct FUniqueNetId >* ReservedMembers );
	void OnDestroyOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	void OnEndOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	void FinishQuitToMainMenu ( );
	bool CleanupOnlineSubsystemSession ( unsigned long bWasFromMenu );
	void eventQuitToMainMenu ( );
	void ServerAcknowledgePossession ( class APawn* P );
	void AcknowledgePossession ( class APawn* P );
	void LeaveMatchQueue ( );
	void UpdatePartyUI ( );
	void TryOpenPartyUI ( );
	void ShowCustomGameDisallowedPopup ( );
	void ShowPackageNotInstalledForPartyInviteWarning ( );
	void ShowPartyNoLongerAvailableWarning ( );
	void ShowPartyFullWarning ( unsigned long bPartySession );
	void ShowUnableToReadFriendsListWarning ( );
	void ShowNoFriendsForPartyInviteWarning ( );
	void ShowControllerDisconnectedWarning ( );
	bool ShouldPartySessionsBePublic ( );
	bool IsLiveSpectate ( );
	void CreateOrJoinPartySession ( );
	bool ArePartySessionInvitesAllowed ( );
	void UpdateMCTSSession ( struct FString SessionGuid, unsigned long bIsHost );
	void BlockPartySceneInput ( unsigned long bBlockInput );
	void FilterFriendListForPeoplePicker ( TArray< struct FOnlineFriend >* FriendList, TArray< struct FSessionMemberInfo >* SessionMemberList );
	void ShowPrivilegeMessageAndDeclineInvite ( );
	void ConnectToPeers ( TArray< struct FSessionMemberInfo >* SessionListInfo );
	void TryJoinSession ( );
	void MCTSSetSessionId ( unsigned char* PlatformSpecificInfo );
	bool IsInCustomMatch ( );
	void SendSessionEnd ( );
	void SendSessionStart ( int GameModeId );
	void OnRemoteTalkerStatusChange ( struct FUniqueNetId RemoteNetId, unsigned long bIsTalking );
	void OnCurrentUserChanged ( unsigned char LocalUserNum, struct FString CurrentUser, struct FString LoggedInUser );
	void OnConnectionStatusChange ( unsigned char ConnectionStatus );
	void OnLoginStatusChange ( unsigned char NewStatus, struct FUniqueNetId NewId );
	void OnMarketplaceItemPurchased ( );
	unsigned char eventGetPlayerDLCLicenses ( TArray< struct FOnlineContent >* ContentList );
	void OnReadPlayerMarketplaceInventoryComplete ( );
	void PlayerReceivedURLTokenAndSignatureForPortalInventory ( unsigned long bSuccess, unsigned char LocalUserNum, struct FString URL, struct FString Token, struct FString AuthToken, struct FString Signature );
	void eventProcessPortalInventoryWithAuthToken ( );
	void DumpStoreCatalog ( unsigned char MediaType );
	void DumpConumables ( );
	void DumpDurables ( );
	void DumpGameProducts ( );
	void OnReadAdditionalProductDetailsComplete ( unsigned char MediaType );
	void OnReadAvailableProductsComplete ( unsigned char MediaType );
	void eventRefreshStoreData ( );
	bool eventIsLoggedIntoOSS ( );
	bool eventShowConsoleLoginUI ( int ControllerId, unsigned long bForceLoginAfter );
	void eventCacheLoggedInGamepad ( );
	void PlayerReceivedTokenForLogin ( unsigned long bSuccess );
	void PlayerReceivedURLTokenAndSignatureForLogin ( unsigned long bSuccess, unsigned char LocalUserNum, struct FString URL, struct FString Token, struct FString AuthToken, struct FString Signature );
	void eventGetOSSTokenAndSignatureForLogin ( );
	struct FString GetTokenURL ( );
	void BeginLogin ( );
	void PlayerRetrievedOSSInventory ( TArray< struct FMarketplaceInventoryItem >* Items );
	void SetFakeServerTime ( int Month, int Day, int Year );
	void ValidateCreatedPartySession ( );
	void UpdateClientAuthToken ( struct FString Token );
	void UpdateClientToken ( struct FString Token );
	void ChallengeJoin ( int nMatchId, struct FString fsName, struct FString fsPassword );
	void ChallengeCreate ( int nQueue, struct FString fsName, struct FString fsPassword );
	void UpdateDatacenterPing ( );
	void TestVideoPlayer ( );
	void AddCheats ( );
	void ClientAddCheats ( );
};

UClass* APComPlayerController::pClassPointer = NULL;

// Class PlatformCommon.PComPlayerInput
// 0x006C (0x0340 - 0x02D4)
class UPComPlayerInput : public UPlayerInput
{
public:
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x02D4 (0x0048) UNKNOWN PROPERTY: MapProperty PlatformCommon.PComPlayerInput.m_KeyBindingMap
	unsigned long                                      c_bDirty : 1;                                     		// 0x031C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      c_bUseServerBindings : 1;                         		// 0x031C (0x0004) [0x0000000000004000] [0x00000002] ( CPF_Config )
	unsigned long                                      c_bJumpEnabled : 1;                               		// 0x031C (0x0004) [0x0000000000004000] [0x00000004] ( CPF_Config )
	unsigned long                                      m_bAllowSaveServerBindings : 1;                   		// 0x031C (0x0004) [0x0000000000000000] [0x00000008] 
	struct FString                                     c_sCurrentProfile;                                		// 0x0320 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	int                                                m_nKeybindConfigSet;                              		// 0x0330 (0x0004) [0x0000000000000000]              
	float                                              m_nMinLookSensitivity;                            		// 0x0334 (0x0004) [0x0000000000000000]              
	float                                              m_nMaxLookSensitivity;                            		// 0x0338 (0x0004) [0x0000000000000000]              
	int                                                m_RecCastMode;                                    		// 0x033C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1486 );

		return pClassPointer;
	};

	void Jump ( );
	void UnbindCommand ( struct FString Command, int nAlternate );
	void SetBindExtended ( struct FString ExtendedBinding, struct FString Command, unsigned long bStoreToServer );
	void UnbindCommandAllExtended ( struct FString Command, unsigned long bStoreToServer );
	void UnbindCommandAll ( struct FString Command );
	void eventUnbindCommandFromServer ( struct FString Command );
	void UnbindKey ( struct FName* BindName );
	void SetCommandBind ( struct FString Command, int nAlternate, struct FString ExtendedBinding, unsigned long bStoreToServer, unsigned long bStoreToINI );
	void eventSetCommandBindFromServer ( struct FString Command, int nAlternate, struct FString ExtendedBinding );
	void eventSetBindFromServer ( struct FString BindName, struct FString Command );
	void SetBind ( struct FString Command, struct FName* BindName );
	float eventGetDisplayLookSensitivityY ( );
	float eventGetDisplayLookSensitivity ( );
	void SetAimAcceleration ( float fLookAccel );
	void SetLookSensitivity ( float fSensitivity, float fSensitivityY );
	void SetMouseInput ( unsigned long bInvert, unsigned long bSmooth, float fSensitivity );
	void SetDirty ( );
	void ReadMouseSettings ( );
	void StoreMouseSettings ( );
	struct FKeyBind GetKeybindWithCurrentModifiers ( struct FName* Key );
	struct FString GetBind ( struct FName* Key, struct FKeyBind* ModifierKeyBind );
	struct FString KeybindToExtendedString ( struct FKeyBind* Bind );
	struct FKeyBind ExtendedStringToKeybind ( struct FString Str, struct FString Cmd );
	struct FKeyBind GetBindFromCommand ( struct FString Cmd, int nAlternate );
	int GetBindExtended ( struct FString Str, unsigned long bExactMatch, struct FKeyBind* Bind );
	struct FString GetStorageStringForCommand ( struct FString Command );
	void InitKeyBindingsMap ( );
	void ReadBindings ( );
	void StoreBinding ( struct FString BindName, struct FString Command, struct FString OldCommand );
	void ResetKeysToDefault ( struct FString PresetName, unsigned long isForceSetKey );
	void StoreKeysToDefault ( );
	int ConvertCommandToProperty ( struct FString* Command );
};

UClass* UPComPlayerInput::pClassPointer = NULL;

// Class PlatformCommon.PComPlayerProfile
// 0x00A0 (0x0134 - 0x0094)
class UPComPlayerProfile : public UOnlinePlayerStorage
{
public:
	int                                                Rank;                                             		// 0x0094 (0x0004) [0x0000000000000000]              
	int                                                Kills;                                            		// 0x0098 (0x0004) [0x0000000000000000]              
	int                                                Deaths;                                           		// 0x009C (0x0004) [0x0000000000000000]              
	int                                                Assists;                                          		// 0x00A0 (0x0004) [0x0000000000000000]              
	int                                                XpLevel;                                          		// 0x00A4 (0x0004) [0x0000000000000000]              
	int                                                HZPoints;                                         		// 0x00A8 (0x0004) [0x0000000000000000]              
	int                                                XPPoints;                                         		// 0x00AC (0x0004) [0x0000000000000000]              
	int                                                AssistPoints;                                     		// 0x00B0 (0x0004) [0x0000000000000000]              
	int                                                AverageScore;                                     		// 0x00B4 (0x0004) [0x0000000000000000]              
	int                                                BoostHoursRemaining;                              		// 0x00B8 (0x0004) [0x0000000000000000]              
	int                                                InfoMask;                                         		// 0x00BC (0x0004) [0x0000000000000000]              
	int                                                TimePlayed;                                       		// 0x00C0 (0x0004) [0x0000000000000000]              
	int                                                TotalAccolades;                                   		// 0x00C4 (0x0004) [0x0000000000000000]              
	int                                                FastestSki;                                       		// 0x00C8 (0x0004) [0x0000000000000000]              
	int                                                FlagGrabs;                                        		// 0x00CC (0x0004) [0x0000000000000000]              
	int                                                FlagCaps;                                         		// 0x00D0 (0x0004) [0x0000000000000000]              
	int                                                GensDestroyed;                                    		// 0x00D4 (0x0004) [0x0000000000000000]              
	int                                                ObjsDestroyed;                                    		// 0x00D8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bVIP : 1;                                         		// 0x00DC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bBoost : 1;                                       		// 0x00DC (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                PlayerID;                                         		// 0x00E0 (0x0004) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x00E4 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FBadgeStruct >                      Badges;                                           		// 0x00F4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FBadgeStruct >                      TopBadges;                                        		// 0x0104 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPropertyPair >                     ClassTimePlayed;                                  		// 0x0114 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FAccoladeStruct >                   Accolades;                                        		// 0x0124 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1487 );

		return pClassPointer;
	};

};

UClass* UPComPlayerProfile::pClassPointer = NULL;

// Class PlatformCommon.PComPositionHistoryComponent
// 0x0003 (0x0088 - 0x0085)
class UPComPositionHistoryComponent : public UActorComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1488 );

		return pClassPointer;
	};

};

UClass* UPComPositionHistoryComponent::pClassPointer = NULL;

// Class PlatformCommon.PComPositionHistoryServerComponent
// 0x05A7 (0x062C - 0x0085)
class UPComPositionHistoryServerComponent : public UActorComponent
{
public:
	int                                                CurrentIndex;                                     		// 0x0088 (0x0004) [0x0000000000000000]              
	float                                              ServerTimeStamps[ 0x1E ];                         		// 0x008C (0x0078) [0x0000000000000000]              
	float                                              ClientTimeStamps[ 0x1E ];                         		// 0x0104 (0x0078) [0x0000000000000000]              
	struct FVector                                     Positions[ 0x1E ];                                		// 0x017C (0x0168) [0x0000000000000000]              
	struct FVector                                     Velocities[ 0x1E ];                               		// 0x02E4 (0x0168) [0x0000000000000000]              
	struct FRotator                                    Rotations[ 0x1E ];                                		// 0x044C (0x0168) [0x0000000000000000]              
	unsigned char                                      bJustTeleported[ 0x1E ];                          		// 0x05B4 (0x001E) [0x0000000000000000]              
	unsigned char                                      bCollideActors[ 0x1E ];                           		// 0x05D2 (0x001E) [0x0000000000000000]              
	unsigned char                                      bBlockActors[ 0x1E ];                             		// 0x05F0 (0x001E) [0x0000000000000000]              
	unsigned char                                      Physics[ 0x1E ];                                  		// 0x060E (0x001E) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1489 );

		return pClassPointer;
	};

	bool IsInSphere ( float RewindTime, struct FVector LocationToCheck, float RadiusToCheck, struct FPComPositionHistoryData* PastDataUsed );
	bool IsOverlapping ( float RewindTime, struct FVector LocationToCheck, float RadiusToCheck, struct FPComPositionHistoryData* PastDataUsed );
	struct FPComPositionHistoryData GetPastData ( float RewindTime, unsigned long bUseClientTimeStamps );
	void RecordData ( );
};

UClass* UPComPositionHistoryServerComponent::pClassPointer = NULL;

// Class PlatformCommon.PComRepInfo_Game
// 0x0020 (0x02E8 - 0x02C8)
class APComRepInfo_Game : public AGameReplicationInfo
{
public:
	class UPComMusicThemePlayer*                       m_MusicThemePlayer;                               		// 0x02C8 (0x0008) [0x0000000000000000]              
	class UClass*                                      m_MusicThemePlayerClass;                          		// 0x02D0 (0x0008) [0x0000000000000000]              
	struct FString                                     m_MusicThemePlayerClassName;                      		// 0x02D8 (0x0010) [0x0000000000444000]              ( CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1490 );

		return pClassPointer;
	};

	void CreateMusicThemePlayer ( );
	void PostBeginPlay ( );
	void PlayMusicEvent ( struct FName EventName );
};

UClass* APComRepInfo_Game::pClassPointer = NULL;

// Class PlatformCommon.PComStructures
// 0x0000 (0x0060 - 0x0060)
class UPComStructures : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1491 );

		return pClassPointer;
	};

};

UClass* UPComStructures::pClassPointer = NULL;

// Class PlatformCommon.PComSupportCommands
// 0x0010 (0x0070 - 0x0060)
class UPComSupportCommands : public UObject
{
public:
	class APComPlayerController*                       PC;                                               		// 0x0060 (0x0008) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class AWorldInfo*                                  WorldInfo;                                        		// 0x0068 (0x0008) [0x0000000000002002]              ( CPF_Const | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1492 );

		return pClassPointer;
	};

	void scLogTickFlags ( int nFlags, unsigned long bSet );
	void scPerfAlwaysRelevantLimit ( int feet );
	void scGPerfServerFlags ( int Flags, int alternate1, int alternate2 );
	void scPerfPhysThreshold ( float thresh1, float thesh2 );
	void scPerfTickRate ( int tickHz, int altTickHz );
	void scPerfDebugRelevMode ( int Mode );
	void scPerfDebugSkip ( int skips );
	void scPerfDebugFeet ( int feet );
	void scDemoStop ( );
	void scDemoRec ( struct FString sCommand );
	void scTimer ( struct FString sCommand );
	void scTime ( int nSeconds );
	void scScore ( int nTeam, int nCount );
	void scEndGame ( struct FString Reason );
	void scStartGame ( struct FString Reason );
	void scLogMark ( struct FString Comment );
	void scLog ( struct FString LogName, unsigned long bEnabled );
	void gmmf ( );
	void SetLogServerTickStatsFlags ( int Flags, unsigned long bSet );
	void GPerfDebugPhysicsThreshold ( float fThresh1, float fThresh2 );
	void GPerfDebugTickRate ( int tickHz, int altTickHz );
	void GPerfAllRelevantLimit ( int feet );
	void GPerfServerFlags ( int Flags, int alternate1, int alternate2 );
	void GPerfDebugRelevMode ( int Mode );
	void GPerfDebugSkips ( int skips );
	void GPerfDebugFeet ( int feet );
	void gmDiag ( int Code, int Route );
	void gmC ( struct FString sCommand );
	void gmCommand ( struct FString sCommand );
	void gmMatchLobbyResume ( );
	void gmMatchLobbyPause ( );
	void gmMatchNext ( int nMapId );
	void gmMatchForce ( int nQueueId );
};

UClass* UPComSupportCommands::pClassPointer = NULL;

// Class PlatformCommon.PComUIManagerBase
// 0x0024 (0x0084 - 0x0060)
class UPComUIManagerBase : public UObject
{
public:
	unsigned long                                      m_bDebugDraw : 1;                                 		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bLocalLoad : 1;                                 		// 0x0060 (0x0004) [0x0000000000000000] [0x00000002] 
	TArray< struct FManagerImage >                     m_cachedImages;                                   		// 0x0064 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_strJson;                                        		// 0x0074 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1493 );

		return pClassPointer;
	};

	void eventDebugDraw ( class UCanvas* Canvas );
};

UClass* UPComUIManagerBase::pClassPointer = NULL;

// Class PlatformCommon.PComUtilityFunctions
// 0x0000 (0x0060 - 0x0060)
class UPComUtilityFunctions : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1494 );

		return pClassPointer;
	};

	float GetGDeltaTime ( );
	bool IsAWithStop ( class UObject* InObject, class UClass* SomeBase, class UClass* StopAtBase );
	struct FVector FakeNetSerialize ( struct FVector* InVector );
};

UClass* UPComUtilityFunctions::pClassPointer = NULL;

// Class PlatformCommon.PComVideoPlayer
// 0x0074 (0x02D4 - 0x0260)
class APComVideoPlayer : public AActor
{
public:
	struct FString                                     VideoURL;                                         		// 0x0260 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                Width;                                            		// 0x0270 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Height;                                           		// 0x0274 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Volume;                                           		// 0x0278 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAutoResize : 1;                                  		// 0x027C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bConstrainAspectRatio : 1;                        		// 0x027C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bDebugRender : 1;                                 		// 0x027C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bVideoFinished : 1;                               		// 0x027C (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bOnVideoFinishedIssued : 1;                       		// 0x027C (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	unsigned long                                      bHasMinorStreamingProblem : 1;                    		// 0x027C (0x0004) [0x0000000000002000] [0x00000020] ( CPF_Transient )
	float                                              ConstrainedAspectRatio;                           		// 0x0280 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FPointer                                    Resource;                                         		// 0x0284 (0x0008) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	class UTextureRenderTarget2D*                      RenderTargetToUse;                                		// 0x028C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UTextureRenderTarget2D*                      TextureCopyForStreamingProblem;                   		// 0x0294 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              TimeSinceMinorStreamingProblem;                   		// 0x029C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterial*                                   StreamingProblemMaterial;                         		// 0x02A0 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      CurrentErrorState;                                		// 0x02A8 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      RenderThreadErrorState;                           		// 0x02A9 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	class UTexture2D*                                  BlackTexture;                                     		// 0x02AC (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __OnVideoFinished__Delegate;                      		// 0x02B4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x02B8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnVideoError__Delegate;                         		// 0x02C4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x02C8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1495 );

		return pClassPointer;
	};

	void DestroyMe ( );
	void TestOnVideoError ( class APComVideoPlayer* VideoPlayer, unsigned char ErrorCode );
	void TestVideoPlayer ( class AActor* SpawningActor, struct FString InURL );
	void StopVideoSession ( );
	void Initialize ( );
	void NativePostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir );
	void OnVideoError ( class APComVideoPlayer* VideoPlayer, unsigned char ErrorCode );
	void OnVideoFinished ( );
};

UClass* APComVideoPlayer::pClassPointer = NULL;

// Class PlatformCommon.SearFiles
// 0x0000 (0x00B4 - 0x00B4)
class USearFiles : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1496 );

		return pClassPointer;
	};

};

UClass* USearFiles::pClassPointer = NULL;

// Class PlatformCommon.PComMusicTheme
// 0x003C (0x009C - 0x0060)
class UPComMusicTheme : public UObject
{
public:
	struct FMusicTrackStruct                           DefaultTrack;                                     		// 0x0060 (0x002C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FMusicEvent >                       MusicEvents;                                      		// 0x008C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1497 );

		return pClassPointer;
	};

};

UClass* UPComMusicTheme::pClassPointer = NULL;

// Class PlatformCommon.PComMusicThemeFactory
// 0x0000 (0x00A8 - 0x00A8)
class UPComMusicThemeFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1498 );

		return pClassPointer;
	};

};

UClass* UPComMusicThemeFactory::pClassPointer = NULL;

// Class PlatformCommon.PComMusicThemePlayer
// 0x006C (0x00CC - 0x0060)
class UPComMusicThemePlayer : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0060 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FString                                     MusicThemePath;                                   		// 0x0068 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UPComMusicTheme*                             MusicTheme;                                       		// 0x0078 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UAudioComponent*                             MusicComp;                                        		// 0x0080 (0x0008) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	class APComMusicThemeSyncActor*                    MusicSyncActor;                                   		// 0x0088 (0x0008) [0x0000000000000000]              
	struct FName                                       LastMusicEvent;                                   		// 0x0090 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FMusicTrackStruct                           CurrentMusicTrack;                                		// 0x0098 (0x002C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              CurrentMusicTrackStartTime;                       		// 0x00C4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CurrentMusicTrackDuration;                        		// 0x00C8 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1499 );

		return pClassPointer;
	};

	void UpdateReplicatedMusicEvent ( struct FName EventName );
	void UpdateMusicTrack ( struct FMusicTrackStruct NewMusicTrack, float fDuration );
	void StopMusic ( );
	void PlayMusicEvent ( struct FName EventName );
	void PlayDefaultMusic ( );
	void OnThemeLoaded ( );
	void LoadTheme ( struct FString themepath );
	struct FString GetDefaultThemePath ( );
	void LoadDefaultTheme ( );
	void Init ( );
};

UClass* UPComMusicThemePlayer::pClassPointer = NULL;

// Class PlatformCommon.PComMusicThemeSyncActor
// 0x0008 (0x0268 - 0x0260)
class APComMusicThemeSyncActor : public AActor
{
public:
	struct FName                                       m_ReplicatedMusicEvent;                           		// 0x0260 (0x0008) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1500 );

		return pClassPointer;
	};

	void eventReplicatedEvent ( struct FName VarName );
	void UpdateMusicEventClient ( struct FName EventName );
	void UpdateMusicEvent ( struct FName EventName );
};

UClass* APComMusicThemeSyncActor::pClassPointer = NULL;

// Class PlatformCommon.PComSeqAct_PlayMusicEvent
// 0x0008 (0x0110 - 0x0108)
class UPComSeqAct_PlayMusicEvent : public USequenceAction
{
public:
	struct FName                                       EventName;                                        		// 0x0108 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1501 );

		return pClassPointer;
	};

};

UClass* UPComSeqAct_PlayMusicEvent::pClassPointer = NULL;

// Class PlatformCommon.PComNetDriver
// 0x0024 (0x024C - 0x0228)
class UPComNetDriver : public UTcpNetDriver
{
public:
	unsigned char                                      UnknownData00[ 0x24 ];                            		// 0x0228 (0x0024) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1502 );

		return pClassPointer;
	};

};

UClass* UPComNetDriver::pClassPointer = NULL;

// Class PlatformCommon.PComNetConn
// 0x0088 (0xB1B8 - 0xB130)
class UPComNetConn : public UTcpipConnection
{
public:
	unsigned char                                      UnknownData00[ 0x88 ];                            		// 0xB130 (0x0088) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1503 );

		return pClassPointer;
	};

};

UClass* UPComNetConn::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif