/*
#############################################################################################
# Smite (v3.24.3804.2) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: PlatformCommon_functions.h
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

// Function PlatformCommon.PComBrowserManager.OpenURL
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// struct FString                 URL                            ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bShowNavButtons                ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bSetFocus                      ( CPF_OptionalParm | CPF_Parm )

void UPComBrowserManager::OpenURL ( struct FString URL, unsigned long bShowNavButtons, unsigned long bSetFocus )
{
	static UFunction* pFnOpenURL = NULL;

	if ( ! pFnOpenURL )
		pFnOpenURL = (UFunction*) UObject::GObjObjects()->GetIndex( 45385 );

	UPComBrowserManager_execOpenURL_Parms OpenURL_Parms;
	memcpy ( &OpenURL_Parms.URL, &URL, 0x10 );
	OpenURL_Parms.bShowNavButtons = bShowNavButtons;
	OpenURL_Parms.bSetFocus = bSetFocus;

	pFnOpenURL->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenURL, &OpenURL_Parms, NULL );

	pFnOpenURL->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComGameEngine.HandlePlayerCommandInput
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 FSCommand                      ( CPF_Parm | CPF_NeedCtorLink )
// class APlayerController*       PC                             ( CPF_OptionalParm | CPF_Parm )

bool UPComGameEngine::HandlePlayerCommandInput ( struct FString FSCommand, class APlayerController* PC )
{
	static UFunction* pFnHandlePlayerCommandInput = NULL;

	if ( ! pFnHandlePlayerCommandInput )
		pFnHandlePlayerCommandInput = (UFunction*) UObject::GObjObjects()->GetIndex( 45415 );

	UPComGameEngine_execHandlePlayerCommandInput_Parms HandlePlayerCommandInput_Parms;
	memcpy ( &HandlePlayerCommandInput_Parms.FSCommand, &FSCommand, 0x10 );
	HandlePlayerCommandInput_Parms.PC = PC;

	pFnHandlePlayerCommandInput->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHandlePlayerCommandInput, &HandlePlayerCommandInput_Parms, NULL );

	pFnHandlePlayerCommandInput->FunctionFlags |= 0x400;

	return HandlePlayerCommandInput_Parms.ReturnValue;
};

// Function PlatformCommon.PComGameEngine.SendGameRequest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 fsRequest                      ( CPF_Parm | CPF_NeedCtorLink )

void UPComGameEngine::SendGameRequest ( struct FString fsRequest )
{
	static UFunction* pFnSendGameRequest = NULL;

	if ( ! pFnSendGameRequest )
		pFnSendGameRequest = (UFunction*) UObject::GObjObjects()->GetIndex( 45413 );

	UPComGameEngine_execSendGameRequest_Parms SendGameRequest_Parms;
	memcpy ( &SendGameRequest_Parms.fsRequest, &fsRequest, 0x10 );

	pFnSendGameRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendGameRequest, &SendGameRequest_Parms, NULL );

	pFnSendGameRequest->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComGameEngine.SendCtrlRequest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 fsRequest                      ( CPF_Parm | CPF_NeedCtorLink )

void UPComGameEngine::SendCtrlRequest ( struct FString fsRequest )
{
	static UFunction* pFnSendCtrlRequest = NULL;

	if ( ! pFnSendCtrlRequest )
		pFnSendCtrlRequest = (UFunction*) UObject::GObjObjects()->GetIndex( 45411 );

	UPComGameEngine_execSendCtrlRequest_Parms SendCtrlRequest_Parms;
	memcpy ( &SendCtrlRequest_Parms.fsRequest, &fsRequest, 0x10 );

	pFnSendCtrlRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendCtrlRequest, &SendCtrlRequest_Parms, NULL );

	pFnSendCtrlRequest->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComGameEngine.SendMarshalAll
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bLowPriority                   ( CPF_Parm )

void UPComGameEngine::SendMarshalAll ( unsigned long bLowPriority )
{
	static UFunction* pFnSendMarshalAll = NULL;

	if ( ! pFnSendMarshalAll )
		pFnSendMarshalAll = (UFunction*) UObject::GObjObjects()->GetIndex( 45409 );

	UPComGameEngine_execSendMarshalAll_Parms SendMarshalAll_Parms;
	SendMarshalAll_Parms.bLowPriority = bLowPriority;

	pFnSendMarshalAll->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendMarshalAll, &SendMarshalAll_Parms, NULL );

	pFnSendMarshalAll->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComGameEngine.SendMarshal
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FUniqueNetId            qwPlayerId                     ( CPF_Parm )
// unsigned long                  bLowPriority                   ( CPF_Parm )

void UPComGameEngine::SendMarshal ( struct FUniqueNetId qwPlayerId, unsigned long bLowPriority )
{
	static UFunction* pFnSendMarshal = NULL;

	if ( ! pFnSendMarshal )
		pFnSendMarshal = (UFunction*) UObject::GObjObjects()->GetIndex( 45406 );

	UPComGameEngine_execSendMarshal_Parms SendMarshal_Parms;
	memcpy ( &SendMarshal_Parms.qwPlayerId, &qwPlayerId, 0x8 );
	SendMarshal_Parms.bLowPriority = bLowPriority;

	pFnSendMarshal->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendMarshal, &SendMarshal_Parms, NULL );

	pFnSendMarshal->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComGameEngine.ClearMarshal
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPComGameEngine::ClearMarshal ( )
{
	static UFunction* pFnClearMarshal = NULL;

	if ( ! pFnClearMarshal )
		pFnClearMarshal = (UFunction*) UObject::GObjObjects()->GetIndex( 45405 );

	UPComGameEngine_execClearMarshal_Parms ClearMarshal_Parms;

	pFnClearMarshal->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearMarshal, &ClearMarshal_Parms, NULL );

	pFnClearMarshal->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComGameEngine.SetFieldString
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nToken                         ( CPF_Parm )
// struct FString                 StrValue                       ( CPF_Parm | CPF_NeedCtorLink )

bool UPComGameEngine::SetFieldString ( int nToken, struct FString StrValue )
{
	static UFunction* pFnSetFieldString = NULL;

	if ( ! pFnSetFieldString )
		pFnSetFieldString = (UFunction*) UObject::GObjObjects()->GetIndex( 45401 );

	UPComGameEngine_execSetFieldString_Parms SetFieldString_Parms;
	SetFieldString_Parms.nToken = nToken;
	memcpy ( &SetFieldString_Parms.StrValue, &StrValue, 0x10 );

	pFnSetFieldString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFieldString, &SetFieldString_Parms, NULL );

	pFnSetFieldString->FunctionFlags |= 0x400;

	return SetFieldString_Parms.ReturnValue;
};

// Function PlatformCommon.PComGameEngine.SetFieldFloat
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nToken                         ( CPF_Parm )
// float                          FloatValue                     ( CPF_Parm )

bool UPComGameEngine::SetFieldFloat ( int nToken, float FloatValue )
{
	static UFunction* pFnSetFieldFloat = NULL;

	if ( ! pFnSetFieldFloat )
		pFnSetFieldFloat = (UFunction*) UObject::GObjObjects()->GetIndex( 45397 );

	UPComGameEngine_execSetFieldFloat_Parms SetFieldFloat_Parms;
	SetFieldFloat_Parms.nToken = nToken;
	SetFieldFloat_Parms.FloatValue = FloatValue;

	pFnSetFieldFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFieldFloat, &SetFieldFloat_Parms, NULL );

	pFnSetFieldFloat->FunctionFlags |= 0x400;

	return SetFieldFloat_Parms.ReturnValue;
};

// Function PlatformCommon.PComGameEngine.SetFieldInt
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nToken                         ( CPF_Parm )
// int                            IntValue                       ( CPF_Parm )

bool UPComGameEngine::SetFieldInt ( int nToken, int IntValue )
{
	static UFunction* pFnSetFieldInt = NULL;

	if ( ! pFnSetFieldInt )
		pFnSetFieldInt = (UFunction*) UObject::GObjObjects()->GetIndex( 45393 );

	UPComGameEngine_execSetFieldInt_Parms SetFieldInt_Parms;
	SetFieldInt_Parms.nToken = nToken;
	SetFieldInt_Parms.IntValue = IntValue;

	pFnSetFieldInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFieldInt, &SetFieldInt_Parms, NULL );

	pFnSetFieldInt->FunctionFlags |= 0x400;

	return SetFieldInt_Parms.ReturnValue;
};

// Function PlatformCommon.PComGameEngine.SetFunction
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nFunction                      ( CPF_Parm )

bool UPComGameEngine::SetFunction ( int nFunction )
{
	static UFunction* pFnSetFunction = NULL;

	if ( ! pFnSetFunction )
		pFnSetFunction = (UFunction*) UObject::GObjObjects()->GetIndex( 45390 );

	UPComGameEngine_execSetFunction_Parms SetFunction_Parms;
	SetFunction_Parms.nFunction = nFunction;

	pFnSetFunction->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFunction, &SetFunction_Parms, NULL );

	pFnSetFunction->FunctionFlags |= 0x400;

	return SetFunction_Parms.ReturnValue;
};

// Function PlatformCommon.PComGameViewportClient.Init
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 OutError                       ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UPComGameViewportClient::eventInit ( struct FString* OutError )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->GetIndex( 45477 );

	UPComGameViewportClient_eventInit_Parms Init_Parms;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );

	if ( OutError )
		memcpy ( OutError, &Init_Parms.OutError, 0x10 );

	return Init_Parms.ReturnValue;
};

// Function PlatformCommon.PComGameViewportClient.StartFacebookStreaming
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UPComGameViewportClient::StartFacebookStreaming ( )
{
	static UFunction* pFnStartFacebookStreaming = NULL;

	if ( ! pFnStartFacebookStreaming )
		pFnStartFacebookStreaming = (UFunction*) UObject::GObjObjects()->GetIndex( 45476 );

	UPComGameViewportClient_execStartFacebookStreaming_Parms StartFacebookStreaming_Parms;

	this->ProcessEvent ( pFnStartFacebookStreaming, &StartFacebookStreaming_Parms, NULL );
};

// Function PlatformCommon.PComGameViewportClient.StopRTMPStreaming
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UPComGameViewportClient::StopRTMPStreaming ( )
{
	static UFunction* pFnStopRTMPStreaming = NULL;

	if ( ! pFnStopRTMPStreaming )
		pFnStopRTMPStreaming = (UFunction*) UObject::GObjObjects()->GetIndex( 45475 );

	UPComGameViewportClient_execStopRTMPStreaming_Parms StopRTMPStreaming_Parms;

	this->ProcessEvent ( pFnStopRTMPStreaming, &StopRTMPStreaming_Parms, NULL );
};

// Function PlatformCommon.PComGameViewportClient.StartRTMPStreaming
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 InServer                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 InKey                          ( CPF_Parm | CPF_NeedCtorLink )

void UPComGameViewportClient::StartRTMPStreaming ( struct FString InServer, struct FString InKey )
{
	static UFunction* pFnStartRTMPStreaming = NULL;

	if ( ! pFnStartRTMPStreaming )
		pFnStartRTMPStreaming = (UFunction*) UObject::GObjObjects()->GetIndex( 45472 );

	UPComGameViewportClient_execStartRTMPStreaming_Parms StartRTMPStreaming_Parms;
	memcpy ( &StartRTMPStreaming_Parms.InServer, &InServer, 0x10 );
	memcpy ( &StartRTMPStreaming_Parms.InKey, &InKey, 0x10 );

	this->ProcessEvent ( pFnStartRTMPStreaming, &StartRTMPStreaming_Parms, NULL );
};

// Function PlatformCommon.PComGameViewportClient.SetRTMPSettings
// [0x00820202] ( FUNC_Exec )
// Parameters infos:
// unsigned long                  bAllowWebcam                   ( CPF_Parm )
// unsigned long                  bAllowMicrophone               ( CPF_Parm )
// unsigned long                  bAllowDesktopAudio             ( CPF_Parm )

void UPComGameViewportClient::SetRTMPSettings ( unsigned long bAllowWebcam, unsigned long bAllowMicrophone, unsigned long bAllowDesktopAudio )
{
	static UFunction* pFnSetRTMPSettings = NULL;

	if ( ! pFnSetRTMPSettings )
		pFnSetRTMPSettings = (UFunction*) UObject::GObjObjects()->GetIndex( 45467 );

	UPComGameViewportClient_execSetRTMPSettings_Parms SetRTMPSettings_Parms;
	SetRTMPSettings_Parms.bAllowWebcam = bAllowWebcam;
	SetRTMPSettings_Parms.bAllowMicrophone = bAllowMicrophone;
	SetRTMPSettings_Parms.bAllowDesktopAudio = bAllowDesktopAudio;

	this->ProcessEvent ( pFnSetRTMPSettings, &SetRTMPSettings_Parms, NULL );
};

// Function PlatformCommon.PComGameViewportClient.CheckGameSettingsVersion
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UPComGameViewportClient::CheckGameSettingsVersion ( )
{
	static UFunction* pFnCheckGameSettingsVersion = NULL;

	if ( ! pFnCheckGameSettingsVersion )
		pFnCheckGameSettingsVersion = (UFunction*) UObject::GObjObjects()->GetIndex( 45466 );

	UPComGameViewportClient_execCheckGameSettingsVersion_Parms CheckGameSettingsVersion_Parms;

	pFnCheckGameSettingsVersion->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCheckGameSettingsVersion, &CheckGameSettingsVersion_Parms, NULL );

	pFnCheckGameSettingsVersion->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComGameViewportClient.HandleGameSettingsMigration
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            OldGameSettingsVersion         ( CPF_Parm )

void UPComGameViewportClient::HandleGameSettingsMigration ( int OldGameSettingsVersion )
{
	static UFunction* pFnHandleGameSettingsMigration = NULL;

	if ( ! pFnHandleGameSettingsMigration )
		pFnHandleGameSettingsMigration = (UFunction*) UObject::GObjObjects()->GetIndex( 45464 );

	UPComGameViewportClient_execHandleGameSettingsMigration_Parms HandleGameSettingsMigration_Parms;
	HandleGameSettingsMigration_Parms.OldGameSettingsVersion = OldGameSettingsVersion;

	pFnHandleGameSettingsMigration->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHandleGameSettingsMigration, &HandleGameSettingsMigration_Parms, NULL );

	pFnHandleGameSettingsMigration->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComGameViewportClient.GetCurrentGameSettingsVersion
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UPComGameViewportClient::GetCurrentGameSettingsVersion ( )
{
	static UFunction* pFnGetCurrentGameSettingsVersion = NULL;

	if ( ! pFnGetCurrentGameSettingsVersion )
		pFnGetCurrentGameSettingsVersion = (UFunction*) UObject::GObjObjects()->GetIndex( 45462 );

	UPComGameViewportClient_execGetCurrentGameSettingsVersion_Parms GetCurrentGameSettingsVersion_Parms;

	pFnGetCurrentGameSettingsVersion->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetCurrentGameSettingsVersion, &GetCurrentGameSettingsVersion_Parms, NULL );

	pFnGetCurrentGameSettingsVersion->FunctionFlags |= 0x400;

	return GetCurrentGameSettingsVersion_Parms.ReturnValue;
};

// Function PlatformCommon.PComGameViewportClient.InitDynamicResolutionScaler
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UPComGameViewportClient::InitDynamicResolutionScaler ( )
{
	static UFunction* pFnInitDynamicResolutionScaler = NULL;

	if ( ! pFnInitDynamicResolutionScaler )
		pFnInitDynamicResolutionScaler = (UFunction*) UObject::GObjObjects()->GetIndex( 45461 );

	UPComGameViewportClient_execInitDynamicResolutionScaler_Parms InitDynamicResolutionScaler_Parms;

	pFnInitDynamicResolutionScaler->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitDynamicResolutionScaler, &InitDynamicResolutionScaler_Parms, NULL );

	pFnInitDynamicResolutionScaler->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComImageDownloader.SetPComImageDownloadedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         PComImageDownloadedDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UPComImageDownloader::SetPComImageDownloadedDelegate ( struct FScriptDelegate PComImageDownloadedDelegate )
{
	static UFunction* pFnSetPComImageDownloadedDelegate = NULL;

	if ( ! pFnSetPComImageDownloadedDelegate )
		pFnSetPComImageDownloadedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 45496 );

	UPComImageDownloader_execSetPComImageDownloadedDelegate_Parms SetPComImageDownloadedDelegate_Parms;
	memcpy ( &SetPComImageDownloadedDelegate_Parms.PComImageDownloadedDelegate, &PComImageDownloadedDelegate, 0x10 );

	this->ProcessEvent ( pFnSetPComImageDownloadedDelegate, &SetPComImageDownloadedDelegate_Parms, NULL );
};

// Function PlatformCommon.PComImageDownloader.OnPComImageDownloaded
// [0x00120000] 
// Parameters infos:
// struct FPComImageDownload      CachedEntry                    ( CPF_Parm | CPF_NeedCtorLink )

void UPComImageDownloader::OnPComImageDownloaded ( struct FPComImageDownload CachedEntry )
{
	static UFunction* pFnOnPComImageDownloaded = NULL;

	if ( ! pFnOnPComImageDownloaded )
		pFnOnPComImageDownloaded = (UFunction*) UObject::GObjObjects()->GetIndex( 45492 );

	UPComImageDownloader_execOnPComImageDownloaded_Parms OnPComImageDownloaded_Parms;
	memcpy ( &OnPComImageDownloaded_Parms.CachedEntry, &CachedEntry, 0x40 );

	this->ProcessEvent ( pFnOnPComImageDownloaded, &OnPComImageDownloaded_Parms, NULL );
};

// Function PlatformCommon.PComInputLightingEffect.IsLogitechSdkVersionValid
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UPComInputLightingEffect::IsLogitechSdkVersionValid ( )
{
	static UFunction* pFnIsLogitechSdkVersionValid = NULL;

	if ( ! pFnIsLogitechSdkVersionValid )
		pFnIsLogitechSdkVersionValid = (UFunction*) UObject::GObjObjects()->GetIndex( 45531 );

	UPComInputLightingEffect_execIsLogitechSdkVersionValid_Parms IsLogitechSdkVersionValid_Parms;

	pFnIsLogitechSdkVersionValid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsLogitechSdkVersionValid, &IsLogitechSdkVersionValid_Parms, NULL );

	pFnIsLogitechSdkVersionValid->FunctionFlags |= 0x400;

	return IsLogitechSdkVersionValid_Parms.ReturnValue;
};

// Function PlatformCommon.PComInputLightingEffect.SetCurrentTime
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   InPresetName                   ( CPF_Parm )
// float                          CurrentTime                    ( CPF_Parm )

void UPComInputLightingEffect::SetCurrentTime ( struct FName InPresetName, float CurrentTime )
{
	static UFunction* pFnSetCurrentTime = NULL;

	if ( ! pFnSetCurrentTime )
		pFnSetCurrentTime = (UFunction*) UObject::GObjObjects()->GetIndex( 45528 );

	UPComInputLightingEffect_execSetCurrentTime_Parms SetCurrentTime_Parms;
	memcpy ( &SetCurrentTime_Parms.InPresetName, &InPresetName, 0x8 );
	SetCurrentTime_Parms.CurrentTime = CurrentTime;

	pFnSetCurrentTime->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetCurrentTime, &SetCurrentTime_Parms, NULL );

	pFnSetCurrentTime->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComInputLightingEffect.StopPreset
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   InPresetName                   ( CPF_Parm )

void UPComInputLightingEffect::StopPreset ( struct FName InPresetName )
{
	static UFunction* pFnStopPreset = NULL;

	if ( ! pFnStopPreset )
		pFnStopPreset = (UFunction*) UObject::GObjObjects()->GetIndex( 45526 );

	UPComInputLightingEffect_execStopPreset_Parms StopPreset_Parms;
	memcpy ( &StopPreset_Parms.InPresetName, &InPresetName, 0x8 );

	pFnStopPreset->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopPreset, &StopPreset_Parms, NULL );

	pFnStopPreset->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComInputLightingEffect.PlayPreset
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// struct FName                   InPresetName                   ( CPF_Parm )
// unsigned long                  bUseOverrideStartTime          ( CPF_OptionalParm | CPF_Parm )
// float                          OverrideStartTime              ( CPF_OptionalParm | CPF_Parm )

void UPComInputLightingEffect::PlayPreset ( struct FName InPresetName, unsigned long bUseOverrideStartTime, float OverrideStartTime )
{
	static UFunction* pFnPlayPreset = NULL;

	if ( ! pFnPlayPreset )
		pFnPlayPreset = (UFunction*) UObject::GObjObjects()->GetIndex( 45522 );

	UPComInputLightingEffect_execPlayPreset_Parms PlayPreset_Parms;
	memcpy ( &PlayPreset_Parms.InPresetName, &InPresetName, 0x8 );
	PlayPreset_Parms.bUseOverrideStartTime = bUseOverrideStartTime;
	PlayPreset_Parms.OverrideStartTime = OverrideStartTime;

	pFnPlayPreset->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayPreset, &PlayPreset_Parms, NULL );

	pFnPlayPreset->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComInputLightingEffect.DisableSystem
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPComInputLightingEffect::DisableSystem ( )
{
	static UFunction* pFnDisableSystem = NULL;

	if ( ! pFnDisableSystem )
		pFnDisableSystem = (UFunction*) UObject::GObjObjects()->GetIndex( 45521 );

	UPComInputLightingEffect_execDisableSystem_Parms DisableSystem_Parms;

	pFnDisableSystem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDisableSystem, &DisableSystem_Parms, NULL );

	pFnDisableSystem->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComInputLightingEffect.TryEnableSystem
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPComInputLightingEffect::TryEnableSystem ( )
{
	static UFunction* pFnTryEnableSystem = NULL;

	if ( ! pFnTryEnableSystem )
		pFnTryEnableSystem = (UFunction*) UObject::GObjObjects()->GetIndex( 45520 );

	UPComInputLightingEffect_execTryEnableSystem_Parms TryEnableSystem_Parms;

	pFnTryEnableSystem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTryEnableSystem, &TryEnableSystem_Parms, NULL );

	pFnTryEnableSystem->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComJsonHandler.OnImageDownloaded
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FPComImageDownload      CachedEntry                    ( CPF_Parm | CPF_NeedCtorLink )

void UPComJsonHandler::OnImageDownloaded ( struct FPComImageDownload CachedEntry )
{
	static UFunction* pFnOnImageDownloaded = NULL;

	if ( ! pFnOnImageDownloaded )
		pFnOnImageDownloaded = (UFunction*) UObject::GObjObjects()->GetIndex( 45541 );

	UPComJsonHandler_execOnImageDownloaded_Parms OnImageDownloaded_Parms;
	memcpy ( &OnImageDownloaded_Parms.CachedEntry, &CachedEntry, 0x40 );

	pFnOnImageDownloaded->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnImageDownloaded, &OnImageDownloaded_Parms, NULL );

	pFnOnImageDownloaded->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComOpenBroadcaster.DecodeFacebookRTMPUrl
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UWebRequest*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 InRequest                      ( CPF_Parm | CPF_NeedCtorLink )

class UWebRequest* UPComOpenBroadcaster::eventDecodeFacebookRTMPUrl ( struct FString InRequest )
{
	static UFunction* pFnDecodeFacebookRTMPUrl = NULL;

	if ( ! pFnDecodeFacebookRTMPUrl )
		pFnDecodeFacebookRTMPUrl = (UFunction*) UObject::GObjObjects()->GetIndex( 45443 );

	UPComOpenBroadcaster_eventDecodeFacebookRTMPUrl_Parms DecodeFacebookRTMPUrl_Parms;
	memcpy ( &DecodeFacebookRTMPUrl_Parms.InRequest, &InRequest, 0x10 );

	this->ProcessEvent ( pFnDecodeFacebookRTMPUrl, &DecodeFacebookRTMPUrl_Parms, NULL );

	return DecodeFacebookRTMPUrl_Parms.ReturnValue;
};

// Function PlatformCommon.PComOpenBroadcaster.Tick
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UPComOpenBroadcaster::Tick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->GetIndex( 45442 );

	UPComOpenBroadcaster_execTick_Parms Tick_Parms;

	pFnTick->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );

	pFnTick->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComOpenBroadcaster.ForceStopStreaming
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPComOpenBroadcaster::ForceStopStreaming ( )
{
	static UFunction* pFnForceStopStreaming = NULL;

	if ( ! pFnForceStopStreaming )
		pFnForceStopStreaming = (UFunction*) UObject::GObjObjects()->GetIndex( 45441 );

	UPComOpenBroadcaster_execForceStopStreaming_Parms ForceStopStreaming_Parms;

	pFnForceStopStreaming->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnForceStopStreaming, &ForceStopStreaming_Parms, NULL );

	pFnForceStopStreaming->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComOpenBroadcaster.StopStreaming
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPComOpenBroadcaster::StopStreaming ( )
{
	static UFunction* pFnStopStreaming = NULL;

	if ( ! pFnStopStreaming )
		pFnStopStreaming = (UFunction*) UObject::GObjObjects()->GetIndex( 45440 );

	UPComOpenBroadcaster_execStopStreaming_Parms StopStreaming_Parms;

	pFnStopStreaming->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopStreaming, &StopStreaming_Parms, NULL );

	pFnStopStreaming->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComOpenBroadcaster.StartRTMPStreaming
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 InServer                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 InKey                          ( CPF_Parm | CPF_NeedCtorLink )

void UPComOpenBroadcaster::StartRTMPStreaming ( struct FString InServer, struct FString InKey )
{
	static UFunction* pFnStartRTMPStreaming = NULL;

	if ( ! pFnStartRTMPStreaming )
		pFnStartRTMPStreaming = (UFunction*) UObject::GObjObjects()->GetIndex( 45437 );

	UPComOpenBroadcaster_execStartRTMPStreaming_Parms StartRTMPStreaming_Parms;
	memcpy ( &StartRTMPStreaming_Parms.InServer, &InServer, 0x10 );
	memcpy ( &StartRTMPStreaming_Parms.InKey, &InKey, 0x10 );

	pFnStartRTMPStreaming->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStartRTMPStreaming, &StartRTMPStreaming_Parms, NULL );

	pFnStartRTMPStreaming->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComOpenBroadcaster.StartFacebookStreaming
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPComOpenBroadcaster::StartFacebookStreaming ( )
{
	static UFunction* pFnStartFacebookStreaming = NULL;

	if ( ! pFnStartFacebookStreaming )
		pFnStartFacebookStreaming = (UFunction*) UObject::GObjObjects()->GetIndex( 45436 );

	UPComOpenBroadcaster_execStartFacebookStreaming_Parms StartFacebookStreaming_Parms;

	pFnStartFacebookStreaming->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStartFacebookStreaming, &StartFacebookStreaming_Parms, NULL );

	pFnStartFacebookStreaming->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComOpenBroadcaster.QueueFacebookStreaming
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPComOpenBroadcaster::QueueFacebookStreaming ( )
{
	static UFunction* pFnQueueFacebookStreaming = NULL;

	if ( ! pFnQueueFacebookStreaming )
		pFnQueueFacebookStreaming = (UFunction*) UObject::GObjObjects()->GetIndex( 45435 );

	UPComOpenBroadcaster_execQueueFacebookStreaming_Parms QueueFacebookStreaming_Parms;

	pFnQueueFacebookStreaming->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnQueueFacebookStreaming, &QueueFacebookStreaming_Parms, NULL );

	pFnQueueFacebookStreaming->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComOpenBroadcaster.SetStreamSettings
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// struct FPComOpenBroadcasterSettings InSettings                     ( CPF_Const | CPF_Parm | CPF_OutParm )

void UPComOpenBroadcaster::SetStreamSettings ( struct FPComOpenBroadcasterSettings* InSettings )
{
	static UFunction* pFnSetStreamSettings = NULL;

	if ( ! pFnSetStreamSettings )
		pFnSetStreamSettings = (UFunction*) UObject::GObjObjects()->GetIndex( 45428 );

	UPComOpenBroadcaster_execSetStreamSettings_Parms SetStreamSettings_Parms;

	pFnSetStreamSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetStreamSettings, &SetStreamSettings_Parms, NULL );

	pFnSetStreamSettings->FunctionFlags |= 0x400;

	if ( InSettings )
		memcpy ( InSettings, &SetStreamSettings_Parms.InSettings, 0x4 );
};

// Function PlatformCommon.PComOpenBroadcaster.IsStreaming
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UPComOpenBroadcaster::IsStreaming ( )
{
	static UFunction* pFnIsStreaming = NULL;

	if ( ! pFnIsStreaming )
		pFnIsStreaming = (UFunction*) UObject::GObjObjects()->GetIndex( 45426 );

	UPComOpenBroadcaster_execIsStreaming_Parms IsStreaming_Parms;

	pFnIsStreaming->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsStreaming, &IsStreaming_Parms, NULL );

	pFnIsStreaming->FunctionFlags |= 0x400;

	return IsStreaming_Parms.ReturnValue;
};

// Function PlatformCommon.PComOpenBroadcaster.CloseWebBrowser
// [0x00120000] 
// Parameters infos:

void UPComOpenBroadcaster::CloseWebBrowser ( )
{
	static UFunction* pFnCloseWebBrowser = NULL;

	if ( ! pFnCloseWebBrowser )
		pFnCloseWebBrowser = (UFunction*) UObject::GObjObjects()->GetIndex( 45425 );

	UPComOpenBroadcaster_execCloseWebBrowser_Parms CloseWebBrowser_Parms;

	this->ProcessEvent ( pFnCloseWebBrowser, &CloseWebBrowser_Parms, NULL );
};

// Function PlatformCommon.PComOpenBroadcaster.OpenWebBrowser
// [0x00120000] 
// Parameters infos:
// struct FString                 URL                            ( CPF_Parm | CPF_NeedCtorLink )

void UPComOpenBroadcaster::OpenWebBrowser ( struct FString URL )
{
	static UFunction* pFnOpenWebBrowser = NULL;

	if ( ! pFnOpenWebBrowser )
		pFnOpenWebBrowser = (UFunction*) UObject::GObjObjects()->GetIndex( 45423 );

	UPComOpenBroadcaster_execOpenWebBrowser_Parms OpenWebBrowser_Parms;
	memcpy ( &OpenWebBrowser_Parms.URL, &URL, 0x10 );

	this->ProcessEvent ( pFnOpenWebBrowser, &OpenWebBrowser_Parms, NULL );
};

// Function PlatformCommon.PComOpenBroadcaster.IsWebBrowserLoaded
// [0x00120000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UPComOpenBroadcaster::IsWebBrowserLoaded ( )
{
	static UFunction* pFnIsWebBrowserLoaded = NULL;

	if ( ! pFnIsWebBrowserLoaded )
		pFnIsWebBrowserLoaded = (UFunction*) UObject::GObjObjects()->GetIndex( 45421 );

	UPComOpenBroadcaster_execIsWebBrowserLoaded_Parms IsWebBrowserLoaded_Parms;

	this->ProcessEvent ( pFnIsWebBrowserLoaded, &IsWebBrowserLoaded_Parms, NULL );

	return IsWebBrowserLoaded_Parms.ReturnValue;
};

// Function PlatformCommon.PComOpenBroadcaster.PreloadWebBrowser
// [0x00120000] 
// Parameters infos:

void UPComOpenBroadcaster::PreloadWebBrowser ( )
{
	static UFunction* pFnPreloadWebBrowser = NULL;

	if ( ! pFnPreloadWebBrowser )
		pFnPreloadWebBrowser = (UFunction*) UObject::GObjObjects()->GetIndex( 45419 );

	UPComOpenBroadcaster_execPreloadWebBrowser_Parms PreloadWebBrowser_Parms;

	this->ProcessEvent ( pFnPreloadWebBrowser, &PreloadWebBrowser_Parms, NULL );
};

// Function PlatformCommon.PComPerformanceCaptureBase.CreateFileAndExit
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 FileNameWithExtension          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 FileContents                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SubfolderName                  ( CPF_Parm | CPF_NeedCtorLink )

void UPComPerformanceCaptureBase::CreateFileAndExit ( struct FString FileNameWithExtension, struct FString FileContents, struct FString SubfolderName )
{
	static UFunction* pFnCreateFileAndExit = NULL;

	if ( ! pFnCreateFileAndExit )
		pFnCreateFileAndExit = (UFunction*) UObject::GObjObjects()->GetIndex( 45638 );

	UPComPerformanceCaptureBase_execCreateFileAndExit_Parms CreateFileAndExit_Parms;
	memcpy ( &CreateFileAndExit_Parms.FileNameWithExtension, &FileNameWithExtension, 0x10 );
	memcpy ( &CreateFileAndExit_Parms.FileContents, &FileContents, 0x10 );
	memcpy ( &CreateFileAndExit_Parms.SubfolderName, &SubfolderName, 0x10 );

	pFnCreateFileAndExit->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateFileAndExit, &CreateFileAndExit_Parms, NULL );

	pFnCreateFileAndExit->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPerformanceCaptureBase.GetPerfStats
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// TArray< struct FPComPerformanceCaptureStat > PerfStats                      ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
// struct FString                 FileContents                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UPComPerformanceCaptureBase::GetPerfStats ( TArray< struct FPComPerformanceCaptureStat > PerfStats, struct FString* FileContents )
{
	static UFunction* pFnGetPerfStats = NULL;

	if ( ! pFnGetPerfStats )
		pFnGetPerfStats = (UFunction*) UObject::GObjObjects()->GetIndex( 45634 );

	UPComPerformanceCaptureBase_execGetPerfStats_Parms GetPerfStats_Parms;
	memcpy ( &GetPerfStats_Parms.PerfStats, &PerfStats, 0x10 );

	pFnGetPerfStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPerfStats, &GetPerfStats_Parms, NULL );

	pFnGetPerfStats->FunctionFlags |= 0x400;

	if ( FileContents )
		memcpy ( FileContents, &GetPerfStats_Parms.FileContents, 0x10 );
};

// Function PlatformCommon.PComPerformanceCaptureBase.GetStatsToCollect
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 FileContents                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UPComPerformanceCaptureBase::GetStatsToCollect ( struct FString* FileContents )
{
	static UFunction* pFnGetStatsToCollect = NULL;

	if ( ! pFnGetStatsToCollect )
		pFnGetStatsToCollect = (UFunction*) UObject::GObjObjects()->GetIndex( 45632 );

	UPComPerformanceCaptureBase_execGetStatsToCollect_Parms GetStatsToCollect_Parms;

	pFnGetStatsToCollect->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetStatsToCollect, &GetStatsToCollect_Parms, NULL );

	pFnGetStatsToCollect->FunctionFlags |= 0x400;

	if ( FileContents )
		memcpy ( FileContents, &GetStatsToCollect_Parms.FileContents, 0x10 );
};

// Function PlatformCommon.PComPerformanceCaptureBase.GetMapNameAndTime
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 MapNameStr                     ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// struct FString                 FormattedDate                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// struct FString                 FormattedTime                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UPComPerformanceCaptureBase::GetMapNameAndTime ( struct FString* MapNameStr, struct FString* FormattedDate, struct FString* FormattedTime )
{
	static UFunction* pFnGetMapNameAndTime = NULL;

	if ( ! pFnGetMapNameAndTime )
		pFnGetMapNameAndTime = (UFunction*) UObject::GObjObjects()->GetIndex( 45628 );

	UPComPerformanceCaptureBase_execGetMapNameAndTime_Parms GetMapNameAndTime_Parms;

	pFnGetMapNameAndTime->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetMapNameAndTime, &GetMapNameAndTime_Parms, NULL );

	pFnGetMapNameAndTime->FunctionFlags |= 0x400;

	if ( MapNameStr )
		memcpy ( MapNameStr, &GetMapNameAndTime_Parms.MapNameStr, 0x10 );

	if ( FormattedDate )
		memcpy ( FormattedDate, &GetMapNameAndTime_Parms.FormattedDate, 0x10 );

	if ( FormattedTime )
		memcpy ( FormattedTime, &GetMapNameAndTime_Parms.FormattedTime, 0x10 );
};

// Function PlatformCommon.PComPerformanceCaptureBase.StopCycleStats
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// TArray< struct FPComPerformanceCaptureStat > PerfStats                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UPComPerformanceCaptureBase::StopCycleStats ( TArray< struct FPComPerformanceCaptureStat >* PerfStats )
{
	static UFunction* pFnStopCycleStats = NULL;

	if ( ! pFnStopCycleStats )
		pFnStopCycleStats = (UFunction*) UObject::GObjObjects()->GetIndex( 45625 );

	UPComPerformanceCaptureBase_execStopCycleStats_Parms StopCycleStats_Parms;

	pFnStopCycleStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopCycleStats, &StopCycleStats_Parms, NULL );

	pFnStopCycleStats->FunctionFlags |= 0x400;

	if ( PerfStats )
		memcpy ( PerfStats, &StopCycleStats_Parms.PerfStats, 0x10 );
};

// Function PlatformCommon.PComPerformanceCaptureBase.GetPerformanceData
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// TArray< struct FPComPerformanceCaptureStat > PerfStats                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UPComPerformanceCaptureBase::GetPerformanceData ( TArray< struct FPComPerformanceCaptureStat >* PerfStats )
{
	static UFunction* pFnGetPerformanceData = NULL;

	if ( ! pFnGetPerformanceData )
		pFnGetPerformanceData = (UFunction*) UObject::GObjObjects()->GetIndex( 45622 );

	UPComPerformanceCaptureBase_execGetPerformanceData_Parms GetPerformanceData_Parms;

	pFnGetPerformanceData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPerformanceData, &GetPerformanceData_Parms, NULL );

	pFnGetPerformanceData->FunctionFlags |= 0x400;

	if ( PerfStats )
		memcpy ( PerfStats, &GetPerformanceData_Parms.PerfStats, 0x10 );
};

// Function PlatformCommon.PComPerformanceCaptureBase.EnableStatNotify
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UPComPerformanceCaptureBase::EnableStatNotify ( )
{
	static UFunction* pFnEnableStatNotify = NULL;

	if ( ! pFnEnableStatNotify )
		pFnEnableStatNotify = (UFunction*) UObject::GObjObjects()->GetIndex( 45621 );

	UPComPerformanceCaptureBase_execEnableStatNotify_Parms EnableStatNotify_Parms;

	pFnEnableStatNotify->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEnableStatNotify, &EnableStatNotify_Parms, NULL );

	pFnEnableStatNotify->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPerformanceCaptureBase.EnableNonCycleStats
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UPComPerformanceCaptureBase::EnableNonCycleStats ( )
{
	static UFunction* pFnEnableNonCycleStats = NULL;

	if ( ! pFnEnableNonCycleStats )
		pFnEnableNonCycleStats = (UFunction*) UObject::GObjObjects()->GetIndex( 45620 );

	UPComPerformanceCaptureBase_execEnableNonCycleStats_Parms EnableNonCycleStats_Parms;

	pFnEnableNonCycleStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEnableNonCycleStats, &EnableNonCycleStats_Parms, NULL );

	pFnEnableNonCycleStats->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPerformanceCaptureBase.MoveCamera
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class APlayerController*       PlayerController               ( CPF_Parm )
// class AActor*                  Node                           ( CPF_Parm )

void UPComPerformanceCaptureBase::MoveCamera ( class APlayerController* PlayerController, class AActor* Node )
{
	static UFunction* pFnMoveCamera = NULL;

	if ( ! pFnMoveCamera )
		pFnMoveCamera = (UFunction*) UObject::GObjObjects()->GetIndex( 45617 );

	UPComPerformanceCaptureBase_execMoveCamera_Parms MoveCamera_Parms;
	MoveCamera_Parms.PlayerController = PlayerController;
	MoveCamera_Parms.Node = Node;

	pFnMoveCamera->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMoveCamera, &MoveCamera_Parms, NULL );

	pFnMoveCamera->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPerformanceCaptureBase.InitializePerformanceCaptureSettings
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UPComPerformanceCaptureBase::InitializePerformanceCaptureSettings ( )
{
	static UFunction* pFnInitializePerformanceCaptureSettings = NULL;

	if ( ! pFnInitializePerformanceCaptureSettings )
		pFnInitializePerformanceCaptureSettings = (UFunction*) UObject::GObjObjects()->GetIndex( 45616 );

	UPComPerformanceCaptureBase_execInitializePerformanceCaptureSettings_Parms InitializePerformanceCaptureSettings_Parms;

	pFnInitializePerformanceCaptureSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializePerformanceCaptureSettings, &InitializePerformanceCaptureSettings_Parms, NULL );

	pFnInitializePerformanceCaptureSettings->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPerformanceCaptureGame.DoNextAction
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void APComPerformanceCaptureGame::DoNextAction ( )
{
	static UFunction* pFnDoNextAction = NULL;

	if ( ! pFnDoNextAction )
		pFnDoNextAction = (UFunction*) UObject::GObjObjects()->GetIndex( 45654 );

	APComPerformanceCaptureGame_execDoNextAction_Parms DoNextAction_Parms;

	pFnDoNextAction->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDoNextAction, &DoNextAction_Parms, NULL );

	pFnDoNextAction->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPerformanceCaptureGame.CollectNodes
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void APComPerformanceCaptureGame::CollectNodes ( )
{
	static UFunction* pFnCollectNodes = NULL;

	if ( ! pFnCollectNodes )
		pFnCollectNodes = (UFunction*) UObject::GObjObjects()->GetIndex( 45653 );

	APComPerformanceCaptureGame_execCollectNodes_Parms CollectNodes_Parms;

	pFnCollectNodes->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCollectNodes, &CollectNodes_Parms, NULL );

	pFnCollectNodes->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPerformanceCaptureGame.PostBeginPlay
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void APComPerformanceCaptureGame::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->GetIndex( 45652 );

	APComPerformanceCaptureGame_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function PlatformCommon.PComPictureInPicture.TestPictureInPicture
// [0x00820002] 
// Parameters infos:

void UPComPictureInPicture::TestPictureInPicture ( )
{
	static UFunction* pFnTestPictureInPicture = NULL;

	if ( ! pFnTestPictureInPicture )
		pFnTestPictureInPicture = (UFunction*) UObject::GObjObjects()->GetIndex( 45698 );

	UPComPictureInPicture_execTestPictureInPicture_Parms TestPictureInPicture_Parms;

	this->ProcessEvent ( pFnTestPictureInPicture, &TestPictureInPicture_Parms, NULL );
};

// Function PlatformCommon.PComPictureInPicture.DebugRender
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )

void UPComPictureInPicture::DebugRender ( class UCanvas* Canvas )
{
	static UFunction* pFnDebugRender = NULL;

	if ( ! pFnDebugRender )
		pFnDebugRender = (UFunction*) UObject::GObjObjects()->GetIndex( 45696 );

	UPComPictureInPicture_execDebugRender_Parms DebugRender_Parms;
	DebugRender_Parms.Canvas = Canvas;

	pFnDebugRender->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDebugRender, &DebugRender_Parms, NULL );

	pFnDebugRender->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPictureInPicture.IsViewDescReady
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FPComPipViewDesc        ViewDesc                       ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UPComPictureInPicture::IsViewDescReady ( struct FPComPipViewDesc* ViewDesc )
{
	static UFunction* pFnIsViewDescReady = NULL;

	if ( ! pFnIsViewDescReady )
		pFnIsViewDescReady = (UFunction*) UObject::GObjObjects()->GetIndex( 45693 );

	UPComPictureInPicture_execIsViewDescReady_Parms IsViewDescReady_Parms;

	pFnIsViewDescReady->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsViewDescReady, &IsViewDescReady_Parms, NULL );

	pFnIsViewDescReady->FunctionFlags |= 0x400;

	if ( ViewDesc )
		memcpy ( ViewDesc, &IsViewDescReady_Parms.ViewDesc, 0x1E4 );

	return IsViewDescReady_Parms.ReturnValue;
};

// Function PlatformCommon.PComPictureInPicture.IsViewReady
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   ViewName                       ( CPF_Parm )

bool UPComPictureInPicture::IsViewReady ( struct FName ViewName )
{
	static UFunction* pFnIsViewReady = NULL;

	if ( ! pFnIsViewReady )
		pFnIsViewReady = (UFunction*) UObject::GObjObjects()->GetIndex( 45690 );

	UPComPictureInPicture_execIsViewReady_Parms IsViewReady_Parms;
	memcpy ( &IsViewReady_Parms.ViewName, &ViewName, 0x8 );

	pFnIsViewReady->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsViewReady, &IsViewReady_Parms, NULL );

	pFnIsViewReady->FunctionFlags |= 0x400;

	return IsViewReady_Parms.ReturnValue;
};

// Function PlatformCommon.PComPictureInPicture.RequestRender
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FName                   ViewName                       ( CPF_Parm )

void UPComPictureInPicture::RequestRender ( struct FName ViewName )
{
	static UFunction* pFnRequestRender = NULL;

	if ( ! pFnRequestRender )
		pFnRequestRender = (UFunction*) UObject::GObjObjects()->GetIndex( 45688 );

	UPComPictureInPicture_execRequestRender_Parms RequestRender_Parms;
	memcpy ( &RequestRender_Parms.ViewName, &ViewName, 0x8 );

	pFnRequestRender->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRequestRender, &RequestRender_Parms, NULL );

	pFnRequestRender->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPictureInPicture.RemoveView
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FName                   ViewName                       ( CPF_Parm )

void UPComPictureInPicture::RemoveView ( struct FName ViewName )
{
	static UFunction* pFnRemoveView = NULL;

	if ( ! pFnRemoveView )
		pFnRemoveView = (UFunction*) UObject::GObjObjects()->GetIndex( 45686 );

	UPComPictureInPicture_execRemoveView_Parms RemoveView_Parms;
	memcpy ( &RemoveView_Parms.ViewName, &ViewName, 0x8 );

	pFnRemoveView->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRemoveView, &RemoveView_Parms, NULL );

	pFnRemoveView->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPictureInPicture.AddView
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FPComPipViewDesc        InViewDesc                     ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UPComPictureInPicture::AddView ( struct FPComPipViewDesc* InViewDesc )
{
	static UFunction* pFnAddView = NULL;

	if ( ! pFnAddView )
		pFnAddView = (UFunction*) UObject::GObjObjects()->GetIndex( 45684 );

	UPComPictureInPicture_execAddView_Parms AddView_Parms;

	pFnAddView->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddView, &AddView_Parms, NULL );

	pFnAddView->FunctionFlags |= 0x400;

	if ( InViewDesc )
		memcpy ( InViewDesc, &AddView_Parms.InViewDesc, 0x1E4 );
};

// Function PlatformCommon.PComPictureInPicture.Tick
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UPComPictureInPicture::Tick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->GetIndex( 45683 );

	UPComPictureInPicture_execTick_Parms Tick_Parms;

	pFnTick->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );

	pFnTick->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPictureInPicture.InitializeRenderTarget
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UPComPictureInPicture::InitializeRenderTarget ( )
{
	static UFunction* pFnInitializeRenderTarget = NULL;

	if ( ! pFnInitializeRenderTarget )
		pFnInitializeRenderTarget = (UFunction*) UObject::GObjObjects()->GetIndex( 45682 );

	UPComPictureInPicture_execInitializeRenderTarget_Parms InitializeRenderTarget_Parms;

	pFnInitializeRenderTarget->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeRenderTarget, &InitializeRenderTarget_Parms, NULL );

	pFnInitializeRenderTarget->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPictureInPictureScene.SetSkyColor
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// struct FColor                  InSkyColor                     ( CPF_Const | CPF_Parm | CPF_OutParm )

void UPComPictureInPictureScene::SetSkyColor ( struct FColor* InSkyColor )
{
	static UFunction* pFnSetSkyColor = NULL;

	if ( ! pFnSetSkyColor )
		pFnSetSkyColor = (UFunction*) UObject::GObjObjects()->GetIndex( 45741 );

	UPComPictureInPictureScene_execSetSkyColor_Parms SetSkyColor_Parms;

	pFnSetSkyColor->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetSkyColor, &SetSkyColor_Parms, NULL );

	pFnSetSkyColor->FunctionFlags |= 0x400;

	if ( InSkyColor )
		memcpy ( InSkyColor, &SetSkyColor_Parms.InSkyColor, 0x4 );
};

// Function PlatformCommon.PComPictureInPictureScene.SetSkyBrightness
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          InSkyBrightness                ( CPF_Parm )

void UPComPictureInPictureScene::SetSkyBrightness ( float InSkyBrightness )
{
	static UFunction* pFnSetSkyBrightness = NULL;

	if ( ! pFnSetSkyBrightness )
		pFnSetSkyBrightness = (UFunction*) UObject::GObjObjects()->GetIndex( 45739 );

	UPComPictureInPictureScene_execSetSkyBrightness_Parms SetSkyBrightness_Parms;
	SetSkyBrightness_Parms.InSkyBrightness = InSkyBrightness;

	pFnSetSkyBrightness->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetSkyBrightness, &SetSkyBrightness_Parms, NULL );

	pFnSetSkyBrightness->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPictureInPictureScene.SetBounceLightColor
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// struct FColor                  LightColor                     ( CPF_Const | CPF_Parm | CPF_OutParm )

void UPComPictureInPictureScene::SetBounceLightColor ( struct FColor* LightColor )
{
	static UFunction* pFnSetBounceLightColor = NULL;

	if ( ! pFnSetBounceLightColor )
		pFnSetBounceLightColor = (UFunction*) UObject::GObjObjects()->GetIndex( 45737 );

	UPComPictureInPictureScene_execSetBounceLightColor_Parms SetBounceLightColor_Parms;

	pFnSetBounceLightColor->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetBounceLightColor, &SetBounceLightColor_Parms, NULL );

	pFnSetBounceLightColor->FunctionFlags |= 0x400;

	if ( LightColor )
		memcpy ( LightColor, &SetBounceLightColor_Parms.LightColor, 0x4 );
};

// Function PlatformCommon.PComPictureInPictureScene.SetBounceLightBrightness
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          InLightBrightness              ( CPF_Parm )

void UPComPictureInPictureScene::SetBounceLightBrightness ( float InLightBrightness )
{
	static UFunction* pFnSetBounceLightBrightness = NULL;

	if ( ! pFnSetBounceLightBrightness )
		pFnSetBounceLightBrightness = (UFunction*) UObject::GObjObjects()->GetIndex( 45735 );

	UPComPictureInPictureScene_execSetBounceLightBrightness_Parms SetBounceLightBrightness_Parms;
	SetBounceLightBrightness_Parms.InLightBrightness = InLightBrightness;

	pFnSetBounceLightBrightness->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetBounceLightBrightness, &SetBounceLightBrightness_Parms, NULL );

	pFnSetBounceLightBrightness->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPictureInPictureScene.SetBounceLightDirection
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// struct FRotator                InLightDir                     ( CPF_Const | CPF_Parm | CPF_OutParm )

void UPComPictureInPictureScene::SetBounceLightDirection ( struct FRotator* InLightDir )
{
	static UFunction* pFnSetBounceLightDirection = NULL;

	if ( ! pFnSetBounceLightDirection )
		pFnSetBounceLightDirection = (UFunction*) UObject::GObjObjects()->GetIndex( 45733 );

	UPComPictureInPictureScene_execSetBounceLightDirection_Parms SetBounceLightDirection_Parms;

	pFnSetBounceLightDirection->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetBounceLightDirection, &SetBounceLightDirection_Parms, NULL );

	pFnSetBounceLightDirection->FunctionFlags |= 0x400;

	if ( InLightDir )
		memcpy ( InLightDir, &SetBounceLightDirection_Parms.InLightDir, 0xC );
};

// Function PlatformCommon.PComPictureInPictureScene.EnableDirectionalBounceLight
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bInEnableBoundLight            ( CPF_Parm )
// float                          InBounceLightBrightness        ( CPF_OptionalParm | CPF_Parm )
// struct FRotator                BounceLightDir                 ( CPF_OptionalParm | CPF_Parm )

void UPComPictureInPictureScene::EnableDirectionalBounceLight ( unsigned long bInEnableBoundLight, float InBounceLightBrightness, struct FRotator BounceLightDir )
{
	static UFunction* pFnEnableDirectionalBounceLight = NULL;

	if ( ! pFnEnableDirectionalBounceLight )
		pFnEnableDirectionalBounceLight = (UFunction*) UObject::GObjObjects()->GetIndex( 45729 );

	UPComPictureInPictureScene_execEnableDirectionalBounceLight_Parms EnableDirectionalBounceLight_Parms;
	EnableDirectionalBounceLight_Parms.bInEnableBoundLight = bInEnableBoundLight;
	EnableDirectionalBounceLight_Parms.InBounceLightBrightness = InBounceLightBrightness;
	memcpy ( &EnableDirectionalBounceLight_Parms.BounceLightDir, &BounceLightDir, 0xC );

	pFnEnableDirectionalBounceLight->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEnableDirectionalBounceLight, &EnableDirectionalBounceLight_Parms, NULL );

	pFnEnableDirectionalBounceLight->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPictureInPictureScene.SetLightColor
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// struct FColor                  LightColor                     ( CPF_Const | CPF_Parm | CPF_OutParm )

void UPComPictureInPictureScene::SetLightColor ( struct FColor* LightColor )
{
	static UFunction* pFnSetLightColor = NULL;

	if ( ! pFnSetLightColor )
		pFnSetLightColor = (UFunction*) UObject::GObjObjects()->GetIndex( 45727 );

	UPComPictureInPictureScene_execSetLightColor_Parms SetLightColor_Parms;

	pFnSetLightColor->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetLightColor, &SetLightColor_Parms, NULL );

	pFnSetLightColor->FunctionFlags |= 0x400;

	if ( LightColor )
		memcpy ( LightColor, &SetLightColor_Parms.LightColor, 0x4 );
};

// Function PlatformCommon.PComPictureInPictureScene.SetLightBrightness
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          InLightBrightness              ( CPF_Parm )

void UPComPictureInPictureScene::SetLightBrightness ( float InLightBrightness )
{
	static UFunction* pFnSetLightBrightness = NULL;

	if ( ! pFnSetLightBrightness )
		pFnSetLightBrightness = (UFunction*) UObject::GObjObjects()->GetIndex( 45725 );

	UPComPictureInPictureScene_execSetLightBrightness_Parms SetLightBrightness_Parms;
	SetLightBrightness_Parms.InLightBrightness = InLightBrightness;

	pFnSetLightBrightness->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetLightBrightness, &SetLightBrightness_Parms, NULL );

	pFnSetLightBrightness->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPictureInPictureScene.SetLightDirection
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// struct FRotator                InLightDir                     ( CPF_Const | CPF_Parm | CPF_OutParm )

void UPComPictureInPictureScene::SetLightDirection ( struct FRotator* InLightDir )
{
	static UFunction* pFnSetLightDirection = NULL;

	if ( ! pFnSetLightDirection )
		pFnSetLightDirection = (UFunction*) UObject::GObjObjects()->GetIndex( 45723 );

	UPComPictureInPictureScene_execSetLightDirection_Parms SetLightDirection_Parms;

	pFnSetLightDirection->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetLightDirection, &SetLightDirection_Parms, NULL );

	pFnSetLightDirection->FunctionFlags |= 0x400;

	if ( InLightDir )
		memcpy ( InLightDir, &SetLightDirection_Parms.InLightDir, 0xC );
};

// Function PlatformCommon.PComPictureInPictureScene.GetLightDirection
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FRotator UPComPictureInPictureScene::GetLightDirection ( )
{
	static UFunction* pFnGetLightDirection = NULL;

	if ( ! pFnGetLightDirection )
		pFnGetLightDirection = (UFunction*) UObject::GObjObjects()->GetIndex( 45721 );

	UPComPictureInPictureScene_execGetLightDirection_Parms GetLightDirection_Parms;

	pFnGetLightDirection->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLightDirection, &GetLightDirection_Parms, NULL );

	pFnGetLightDirection->FunctionFlags |= 0x400;

	return GetLightDirection_Parms.ReturnValue;
};

// Function PlatformCommon.PComPictureInPictureScene.RemoveComponent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UActorComponent*         Component                      ( CPF_Parm | CPF_EditInline )

void UPComPictureInPictureScene::RemoveComponent ( class UActorComponent* Component )
{
	static UFunction* pFnRemoveComponent = NULL;

	if ( ! pFnRemoveComponent )
		pFnRemoveComponent = (UFunction*) UObject::GObjObjects()->GetIndex( 45719 );

	UPComPictureInPictureScene_execRemoveComponent_Parms RemoveComponent_Parms;
	RemoveComponent_Parms.Component = Component;

	pFnRemoveComponent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRemoveComponent, &RemoveComponent_Parms, NULL );

	pFnRemoveComponent->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPictureInPictureScene.AddComponent
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// class UActorComponent*         Component                      ( CPF_Parm | CPF_EditInline )
// struct FMatrix                 LocalToWorld                   ( CPF_Const | CPF_Parm | CPF_OutParm )

void UPComPictureInPictureScene::AddComponent ( class UActorComponent* Component, struct FMatrix* LocalToWorld )
{
	static UFunction* pFnAddComponent = NULL;

	if ( ! pFnAddComponent )
		pFnAddComponent = (UFunction*) UObject::GObjObjects()->GetIndex( 45716 );

	UPComPictureInPictureScene_execAddComponent_Parms AddComponent_Parms;
	AddComponent_Parms.Component = Component;

	pFnAddComponent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddComponent, &AddComponent_Parms, NULL );

	pFnAddComponent->FunctionFlags |= 0x400;

	if ( LocalToWorld )
		memcpy ( LocalToWorld, &AddComponent_Parms.LocalToWorld, 0x40 );
};

// Function PlatformCommon.PComPictureInPictureScene.InitScene
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPComPictureInPictureScene::InitScene ( )
{
	static UFunction* pFnInitScene = NULL;

	if ( ! pFnInitScene )
		pFnInitScene = (UFunction*) UObject::GObjObjects()->GetIndex( 45715 );

	UPComPictureInPictureScene_execInitScene_Parms InitScene_Parms;

	pFnInitScene->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitScene, &InitScene_Parms, NULL );

	pFnInitScene->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.PlayTestInputLightingEffect
// [0x00020A02] ( FUNC_Exec | FUNC_Event )
// Parameters infos:
// struct FName                   InPresetName                   ( CPF_Parm )

void APComPlayerController::PlayTestInputLightingEffect ( struct FName InPresetName )
{
	static UFunction* pFnPlayTestInputLightingEffect = NULL;

	if ( ! pFnPlayTestInputLightingEffect )
		pFnPlayTestInputLightingEffect = (UFunction*) UObject::GObjObjects()->GetIndex( 46131 );

	APComPlayerController_execPlayTestInputLightingEffect_Parms PlayTestInputLightingEffect_Parms;
	memcpy ( &PlayTestInputLightingEffect_Parms.InPresetName, &InPresetName, 0x8 );

	this->ProcessEvent ( pFnPlayTestInputLightingEffect, &PlayTestInputLightingEffect_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.SetCurrentTimeForInputLightingEffect
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   InPresetName                   ( CPF_Parm )
// float                          InCurrentTime                  ( CPF_Parm )

void APComPlayerController::SetCurrentTimeForInputLightingEffect ( struct FName InPresetName, float InCurrentTime )
{
	static UFunction* pFnSetCurrentTimeForInputLightingEffect = NULL;

	if ( ! pFnSetCurrentTimeForInputLightingEffect )
		pFnSetCurrentTimeForInputLightingEffect = (UFunction*) UObject::GObjObjects()->GetIndex( 46128 );

	APComPlayerController_execSetCurrentTimeForInputLightingEffect_Parms SetCurrentTimeForInputLightingEffect_Parms;
	memcpy ( &SetCurrentTimeForInputLightingEffect_Parms.InPresetName, &InPresetName, 0x8 );
	SetCurrentTimeForInputLightingEffect_Parms.InCurrentTime = InCurrentTime;

	pFnSetCurrentTimeForInputLightingEffect->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetCurrentTimeForInputLightingEffect, &SetCurrentTimeForInputLightingEffect_Parms, NULL );

	pFnSetCurrentTimeForInputLightingEffect->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.StopInputLightingEffect
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   InPresetName                   ( CPF_Parm )

void APComPlayerController::StopInputLightingEffect ( struct FName InPresetName )
{
	static UFunction* pFnStopInputLightingEffect = NULL;

	if ( ! pFnStopInputLightingEffect )
		pFnStopInputLightingEffect = (UFunction*) UObject::GObjObjects()->GetIndex( 46126 );

	APComPlayerController_execStopInputLightingEffect_Parms StopInputLightingEffect_Parms;
	memcpy ( &StopInputLightingEffect_Parms.InPresetName, &InPresetName, 0x8 );

	pFnStopInputLightingEffect->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopInputLightingEffect, &StopInputLightingEffect_Parms, NULL );

	pFnStopInputLightingEffect->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.PlayInputLightingEffect
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// struct FName                   InPresetName                   ( CPF_Parm )
// unsigned long                  bUseOverrideStartTime          ( CPF_OptionalParm | CPF_Parm )
// float                          OverrideStartTime              ( CPF_OptionalParm | CPF_Parm )

void APComPlayerController::PlayInputLightingEffect ( struct FName InPresetName, unsigned long bUseOverrideStartTime, float OverrideStartTime )
{
	static UFunction* pFnPlayInputLightingEffect = NULL;

	if ( ! pFnPlayInputLightingEffect )
		pFnPlayInputLightingEffect = (UFunction*) UObject::GObjObjects()->GetIndex( 46122 );

	APComPlayerController_execPlayInputLightingEffect_Parms PlayInputLightingEffect_Parms;
	memcpy ( &PlayInputLightingEffect_Parms.InPresetName, &InPresetName, 0x8 );
	PlayInputLightingEffect_Parms.bUseOverrideStartTime = bUseOverrideStartTime;
	PlayInputLightingEffect_Parms.OverrideStartTime = OverrideStartTime;

	pFnPlayInputLightingEffect->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayInputLightingEffect, &PlayInputLightingEffect_Parms, NULL );

	pFnPlayInputLightingEffect->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.ClientPlayInputLightingEffect
// [0x010249C2] ( FUNC_Event )
// Parameters infos:
// struct FName                   InPresetName                   ( CPF_Parm )
// unsigned long                  bUseOverrideStartTime          ( CPF_OptionalParm | CPF_Parm )
// float                          OverrideStartTime              ( CPF_OptionalParm | CPF_Parm )

void APComPlayerController::eventClientPlayInputLightingEffect ( struct FName InPresetName, unsigned long bUseOverrideStartTime, float OverrideStartTime )
{
	static UFunction* pFnClientPlayInputLightingEffect = NULL;

	if ( ! pFnClientPlayInputLightingEffect )
		pFnClientPlayInputLightingEffect = (UFunction*) UObject::GObjObjects()->GetIndex( 46118 );

	APComPlayerController_eventClientPlayInputLightingEffect_Parms ClientPlayInputLightingEffect_Parms;
	memcpy ( &ClientPlayInputLightingEffect_Parms.InPresetName, &InPresetName, 0x8 );
	ClientPlayInputLightingEffect_Parms.bUseOverrideStartTime = bUseOverrideStartTime;
	ClientPlayInputLightingEffect_Parms.OverrideStartTime = OverrideStartTime;

	this->ProcessEvent ( pFnClientPlayInputLightingEffect, &ClientPlayInputLightingEffect_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.TryAutoLogin
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool APComPlayerController::TryAutoLogin ( )
{
	static UFunction* pFnTryAutoLogin = NULL;

	if ( ! pFnTryAutoLogin )
		pFnTryAutoLogin = (UFunction*) UObject::GObjObjects()->GetIndex( 46116 );

	APComPlayerController_execTryAutoLogin_Parms TryAutoLogin_Parms;

	pFnTryAutoLogin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTryAutoLogin, &TryAutoLogin_Parms, NULL );

	pFnTryAutoLogin->FunctionFlags |= 0x400;

	return TryAutoLogin_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerController.TryAutoLoginDelayed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void APComPlayerController::eventTryAutoLoginDelayed ( )
{
	static UFunction* pFnTryAutoLoginDelayed = NULL;

	if ( ! pFnTryAutoLoginDelayed )
		pFnTryAutoLoginDelayed = (UFunction*) UObject::GObjObjects()->GetIndex( 46115 );

	APComPlayerController_eventTryAutoLoginDelayed_Parms TryAutoLoginDelayed_Parms;

	this->ProcessEvent ( pFnTryAutoLoginDelayed, &TryAutoLoginDelayed_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.SetAsNewPartyHost
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void APComPlayerController::eventSetAsNewPartyHost ( )
{
	static UFunction* pFnSetAsNewPartyHost = NULL;

	if ( ! pFnSetAsNewPartyHost )
		pFnSetAsNewPartyHost = (UFunction*) UObject::GObjObjects()->GetIndex( 46113 );

	APComPlayerController_eventSetAsNewPartyHost_Parms SetAsNewPartyHost_Parms;

	this->ProcessEvent ( pFnSetAsNewPartyHost, &SetAsNewPartyHost_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.ToggleGameSessionInvitesAllowed
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bAllowed                       ( CPF_Parm )

void APComPlayerController::eventToggleGameSessionInvitesAllowed ( unsigned long bAllowed )
{
	static UFunction* pFnToggleGameSessionInvitesAllowed = NULL;

	if ( ! pFnToggleGameSessionInvitesAllowed )
		pFnToggleGameSessionInvitesAllowed = (UFunction*) UObject::GObjObjects()->GetIndex( 46110 );

	APComPlayerController_eventToggleGameSessionInvitesAllowed_Parms ToggleGameSessionInvitesAllowed_Parms;
	ToggleGameSessionInvitesAllowed_Parms.bAllowed = bAllowed;

	this->ProcessEvent ( pFnToggleGameSessionInvitesAllowed, &ToggleGameSessionInvitesAllowed_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.TogglePartySessionInvitesAllowed
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bAllowed                       ( CPF_Parm )

void APComPlayerController::eventTogglePartySessionInvitesAllowed ( unsigned long bAllowed )
{
	static UFunction* pFnTogglePartySessionInvitesAllowed = NULL;

	if ( ! pFnTogglePartySessionInvitesAllowed )
		pFnTogglePartySessionInvitesAllowed = (UFunction*) UObject::GObjObjects()->GetIndex( 46106 );

	APComPlayerController_eventTogglePartySessionInvitesAllowed_Parms TogglePartySessionInvitesAllowed_Parms;
	TogglePartySessionInvitesAllowed_Parms.bAllowed = bAllowed;

	this->ProcessEvent ( pFnTogglePartySessionInvitesAllowed, &TogglePartySessionInvitesAllowed_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.UpdateMCTSWithNewPartyInfo
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void APComPlayerController::eventUpdateMCTSWithNewPartyInfo ( )
{
	static UFunction* pFnUpdateMCTSWithNewPartyInfo = NULL;

	if ( ! pFnUpdateMCTSWithNewPartyInfo )
		pFnUpdateMCTSWithNewPartyInfo = (UFunction*) UObject::GObjObjects()->GetIndex( 46102 );

	APComPlayerController_eventUpdateMCTSWithNewPartyInfo_Parms UpdateMCTSWithNewPartyInfo_Parms;

	this->ProcessEvent ( pFnUpdateMCTSWithNewPartyInfo, &UpdateMCTSWithNewPartyInfo_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.IsHostOfParty
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool APComPlayerController::eventIsHostOfParty ( )
{
	static UFunction* pFnIsHostOfParty = NULL;

	if ( ! pFnIsHostOfParty )
		pFnIsHostOfParty = (UFunction*) UObject::GObjObjects()->GetIndex( 46100 );

	APComPlayerController_eventIsHostOfParty_Parms IsHostOfParty_Parms;

	this->ProcessEvent ( pFnIsHostOfParty, &IsHostOfParty_Parms, NULL );

	return IsHostOfParty_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerController.OnPeoplePickerComplete
// [0x00820002] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// TArray< struct FOnlineFriend > PeoplePicked                   ( CPF_Parm | CPF_NeedCtorLink )

void APComPlayerController::OnPeoplePickerComplete ( unsigned long bWasSuccessful, TArray< struct FOnlineFriend > PeoplePicked )
{
	static UFunction* pFnOnPeoplePickerComplete = NULL;

	if ( ! pFnOnPeoplePickerComplete )
		pFnOnPeoplePickerComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 46094 );

	APComPlayerController_execOnPeoplePickerComplete_Parms OnPeoplePickerComplete_Parms;
	OnPeoplePickerComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnPeoplePickerComplete_Parms.PeoplePicked, &PeoplePicked, 0x10 );

	this->ProcessEvent ( pFnOnPeoplePickerComplete, &OnPeoplePickerComplete_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.OnReadFriendsListComplete
// [0x00020002] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void APComPlayerController::OnReadFriendsListComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadFriendsListComplete = NULL;

	if ( ! pFnOnReadFriendsListComplete )
		pFnOnReadFriendsListComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 46085 );

	APComPlayerController_execOnReadFriendsListComplete_Parms OnReadFriendsListComplete_Parms;
	OnReadFriendsListComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadFriendsListComplete, &OnReadFriendsListComplete_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.ShowPeoplePickerUI
// [0x00020B02] ( FUNC_Exec | FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool APComPlayerController::ShowPeoplePickerUI ( )
{
	static UFunction* pFnShowPeoplePickerUI = NULL;

	if ( ! pFnShowPeoplePickerUI )
		pFnShowPeoplePickerUI = (UFunction*) UObject::GObjObjects()->GetIndex( 46077 );

	APComPlayerController_execShowPeoplePickerUI_Parms ShowPeoplePickerUI_Parms;

	this->ProcessEvent ( pFnShowPeoplePickerUI, &ShowPeoplePickerUI_Parms, NULL );

	return ShowPeoplePickerUI_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerController.JoinCustomMatchForInviteDelay
// [0x00020002] 
// Parameters infos:

void APComPlayerController::JoinCustomMatchForInviteDelay ( )
{
	static UFunction* pFnJoinCustomMatchForInviteDelay = NULL;

	if ( ! pFnJoinCustomMatchForInviteDelay )
		pFnJoinCustomMatchForInviteDelay = (UFunction*) UObject::GObjObjects()->GetIndex( 46075 );

	APComPlayerController_execJoinCustomMatchForInviteDelay_Parms JoinCustomMatchForInviteDelay_Parms;

	this->ProcessEvent ( pFnJoinCustomMatchForInviteDelay, &JoinCustomMatchForInviteDelay_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.JoinCustomMatchFromInvite
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void APComPlayerController::eventJoinCustomMatchFromInvite ( )
{
	static UFunction* pFnJoinCustomMatchFromInvite = NULL;

	if ( ! pFnJoinCustomMatchFromInvite )
		pFnJoinCustomMatchFromInvite = (UFunction*) UObject::GObjObjects()->GetIndex( 46074 );

	APComPlayerController_eventJoinCustomMatchFromInvite_Parms JoinCustomMatchFromInvite_Parms;

	this->ProcessEvent ( pFnJoinCustomMatchFromInvite, &JoinCustomMatchFromInvite_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.OnJoinSessionForReceivedInviteComplete
// [0x00020102] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void APComPlayerController::OnJoinSessionForReceivedInviteComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnJoinSessionForReceivedInviteComplete = NULL;

	if ( ! pFnOnJoinSessionForReceivedInviteComplete )
		pFnOnJoinSessionForReceivedInviteComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 46071 );

	APComPlayerController_execOnJoinSessionForReceivedInviteComplete_Parms OnJoinSessionForReceivedInviteComplete_Parms;
	memcpy ( &OnJoinSessionForReceivedInviteComplete_Parms.SessionName, &SessionName, 0x8 );
	OnJoinSessionForReceivedInviteComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnJoinSessionForReceivedInviteComplete, &OnJoinSessionForReceivedInviteComplete_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.OnPrivilegeCheckForGameSessionJoin
// [0x00820102] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  Privilege                      ( CPF_Parm )
// unsigned char                  PrivilegeLevel                 ( CPF_Parm )
// unsigned long                  bDiffersFromHint               ( CPF_Parm )

void APComPlayerController::OnPrivilegeCheckForGameSessionJoin ( unsigned char LocalUserNum, unsigned char Privilege, unsigned char PrivilegeLevel, unsigned long bDiffersFromHint )
{
	static UFunction* pFnOnPrivilegeCheckForGameSessionJoin = NULL;

	if ( ! pFnOnPrivilegeCheckForGameSessionJoin )
		pFnOnPrivilegeCheckForGameSessionJoin = (UFunction*) UObject::GObjObjects()->GetIndex( 46065 );

	APComPlayerController_execOnPrivilegeCheckForGameSessionJoin_Parms OnPrivilegeCheckForGameSessionJoin_Parms;
	OnPrivilegeCheckForGameSessionJoin_Parms.LocalUserNum = LocalUserNum;
	OnPrivilegeCheckForGameSessionJoin_Parms.Privilege = Privilege;
	OnPrivilegeCheckForGameSessionJoin_Parms.PrivilegeLevel = PrivilegeLevel;
	OnPrivilegeCheckForGameSessionJoin_Parms.bDiffersFromHint = bDiffersFromHint;

	this->ProcessEvent ( pFnOnPrivilegeCheckForGameSessionJoin, &OnPrivilegeCheckForGameSessionJoin_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.OnPrivilegeLevelCheckedCompleteForPartyJoin
// [0x00820102] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  Privilege                      ( CPF_Parm )
// unsigned char                  PrivilegeLevel                 ( CPF_Parm )
// unsigned long                  bDiffersFromHint               ( CPF_Parm )

void APComPlayerController::OnPrivilegeLevelCheckedCompleteForPartyJoin ( unsigned char LocalUserNum, unsigned char Privilege, unsigned char PrivilegeLevel, unsigned long bDiffersFromHint )
{
	static UFunction* pFnOnPrivilegeLevelCheckedCompleteForPartyJoin = NULL;

	if ( ! pFnOnPrivilegeLevelCheckedCompleteForPartyJoin )
		pFnOnPrivilegeLevelCheckedCompleteForPartyJoin = (UFunction*) UObject::GObjObjects()->GetIndex( 46059 );

	APComPlayerController_execOnPrivilegeLevelCheckedCompleteForPartyJoin_Parms OnPrivilegeLevelCheckedCompleteForPartyJoin_Parms;
	OnPrivilegeLevelCheckedCompleteForPartyJoin_Parms.LocalUserNum = LocalUserNum;
	OnPrivilegeLevelCheckedCompleteForPartyJoin_Parms.Privilege = Privilege;
	OnPrivilegeLevelCheckedCompleteForPartyJoin_Parms.PrivilegeLevel = PrivilegeLevel;
	OnPrivilegeLevelCheckedCompleteForPartyJoin_Parms.bDiffersFromHint = bDiffersFromHint;

	this->ProcessEvent ( pFnOnPrivilegeLevelCheckedCompleteForPartyJoin, &OnPrivilegeLevelCheckedCompleteForPartyJoin_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.OnGameDestroyedForPartyJoin
// [0x00020102] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void APComPlayerController::OnGameDestroyedForPartyJoin ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnGameDestroyedForPartyJoin = NULL;

	if ( ! pFnOnGameDestroyedForPartyJoin )
		pFnOnGameDestroyedForPartyJoin = (UFunction*) UObject::GObjObjects()->GetIndex( 46054 );

	APComPlayerController_execOnGameDestroyedForPartyJoin_Parms OnGameDestroyedForPartyJoin_Parms;
	memcpy ( &OnGameDestroyedForPartyJoin_Parms.SessionName, &SessionName, 0x8 );
	OnGameDestroyedForPartyJoin_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnGameDestroyedForPartyJoin, &OnGameDestroyedForPartyJoin_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.OnAlternatePrivilegeLevelCheckedComplete
// [0x00020102] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  Privilege                      ( CPF_Parm )
// unsigned char                  PrivilegeLevel                 ( CPF_Parm )
// unsigned long                  bDiffersFromHint               ( CPF_Parm )

void APComPlayerController::OnAlternatePrivilegeLevelCheckedComplete ( unsigned char LocalUserNum, unsigned char Privilege, unsigned char PrivilegeLevel, unsigned long bDiffersFromHint )
{
	static UFunction* pFnOnAlternatePrivilegeLevelCheckedComplete = NULL;

	if ( ! pFnOnAlternatePrivilegeLevelCheckedComplete )
		pFnOnAlternatePrivilegeLevelCheckedComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 46049 );

	APComPlayerController_execOnAlternatePrivilegeLevelCheckedComplete_Parms OnAlternatePrivilegeLevelCheckedComplete_Parms;
	OnAlternatePrivilegeLevelCheckedComplete_Parms.LocalUserNum = LocalUserNum;
	OnAlternatePrivilegeLevelCheckedComplete_Parms.Privilege = Privilege;
	OnAlternatePrivilegeLevelCheckedComplete_Parms.PrivilegeLevel = PrivilegeLevel;
	OnAlternatePrivilegeLevelCheckedComplete_Parms.bDiffersFromHint = bDiffersFromHint;

	this->ProcessEvent ( pFnOnAlternatePrivilegeLevelCheckedComplete, &OnAlternatePrivilegeLevelCheckedComplete_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.OnGameInviteAccepted
// [0x00420102] 
// Parameters infos:
// struct FOnlineGameSearchResult InviteResult                   ( CPF_Const | CPF_Parm | CPF_OutParm )

void APComPlayerController::OnGameInviteAccepted ( struct FOnlineGameSearchResult* InviteResult )
{
	static UFunction* pFnOnGameInviteAccepted = NULL;

	if ( ! pFnOnGameInviteAccepted )
		pFnOnGameInviteAccepted = (UFunction*) UObject::GObjObjects()->GetIndex( 46042 );

	APComPlayerController_execOnGameInviteAccepted_Parms OnGameInviteAccepted_Parms;

	this->ProcessEvent ( pFnOnGameInviteAccepted, &OnGameInviteAccepted_Parms, NULL );

	if ( InviteResult )
		memcpy ( InviteResult, &OnGameInviteAccepted_Parms.InviteResult, 0x10 );
};

// Function PlatformCommon.PComPlayerController.JoinPartySession
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned char                  PartySessionGuid               ( CPF_Parm )

void APComPlayerController::eventJoinPartySession ( unsigned char* PartySessionGuid )
{
	static UFunction* pFnJoinPartySession = NULL;

	if ( ! pFnJoinPartySession )
		pFnJoinPartySession = (UFunction*) UObject::GObjObjects()->GetIndex( 46039 );

	APComPlayerController_eventJoinPartySession_Parms JoinPartySession_Parms;
	memcpy ( &JoinPartySession_Parms.PartySessionGuid, &PartySessionGuid, 0x50 );

	this->ProcessEvent ( pFnJoinPartySession, &JoinPartySession_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.OnPartySessionDestroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void APComPlayerController::eventOnPartySessionDestroyed ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnPartySessionDestroyed = NULL;

	if ( ! pFnOnPartySessionDestroyed )
		pFnOnPartySessionDestroyed = (UFunction*) UObject::GObjObjects()->GetIndex( 46036 );

	APComPlayerController_eventOnPartySessionDestroyed_Parms OnPartySessionDestroyed_Parms;
	memcpy ( &OnPartySessionDestroyed_Parms.SessionName, &SessionName, 0x8 );
	OnPartySessionDestroyed_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnPartySessionDestroyed, &OnPartySessionDestroyed_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.DestroyPartySession
// [0x00020B02] ( FUNC_Exec | FUNC_Event )
// Parameters infos:

void APComPlayerController::DestroyPartySession ( )
{
	static UFunction* pFnDestroyPartySession = NULL;

	if ( ! pFnDestroyPartySession )
		pFnDestroyPartySession = (UFunction*) UObject::GObjObjects()->GetIndex( 46035 );

	APComPlayerController_execDestroyPartySession_Parms DestroyPartySession_Parms;

	this->ProcessEvent ( pFnDestroyPartySession, &DestroyPartySession_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.InvitePlayerToParty
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            InPlayerId                     ( CPF_Parm )

bool APComPlayerController::eventInvitePlayerToParty ( struct FUniqueNetId InPlayerId )
{
	static UFunction* pFnInvitePlayerToParty = NULL;

	if ( ! pFnInvitePlayerToParty )
		pFnInvitePlayerToParty = (UFunction*) UObject::GObjObjects()->GetIndex( 46032 );

	APComPlayerController_eventInvitePlayerToParty_Parms InvitePlayerToParty_Parms;
	memcpy ( &InvitePlayerToParty_Parms.InPlayerId, &InPlayerId, 0x8 );

	this->ProcessEvent ( pFnInvitePlayerToParty, &InvitePlayerToParty_Parms, NULL );

	return InvitePlayerToParty_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerController.InvitePlayerToPartyByName
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 InPlayerName                   ( CPF_Parm | CPF_NeedCtorLink )

bool APComPlayerController::eventInvitePlayerToPartyByName ( struct FString InPlayerName )
{
	static UFunction* pFnInvitePlayerToPartyByName = NULL;

	if ( ! pFnInvitePlayerToPartyByName )
		pFnInvitePlayerToPartyByName = (UFunction*) UObject::GObjObjects()->GetIndex( 46028 );

	APComPlayerController_eventInvitePlayerToPartyByName_Parms InvitePlayerToPartyByName_Parms;
	memcpy ( &InvitePlayerToPartyByName_Parms.InPlayerName, &InPlayerName, 0x10 );

	this->ProcessEvent ( pFnInvitePlayerToPartyByName, &InvitePlayerToPartyByName_Parms, NULL );

	return InvitePlayerToPartyByName_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerController.OnCreatePartySessionComplete
// [0x00020102] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bSuccessful                    ( CPF_Parm )

void APComPlayerController::OnCreatePartySessionComplete ( struct FName SessionName, unsigned long bSuccessful )
{
	static UFunction* pFnOnCreatePartySessionComplete = NULL;

	if ( ! pFnOnCreatePartySessionComplete )
		pFnOnCreatePartySessionComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 46025 );

	APComPlayerController_execOnCreatePartySessionComplete_Parms OnCreatePartySessionComplete_Parms;
	memcpy ( &OnCreatePartySessionComplete_Parms.SessionName, &SessionName, 0x8 );
	OnCreatePartySessionComplete_Parms.bSuccessful = bSuccessful;

	this->ProcessEvent ( pFnOnCreatePartySessionComplete, &OnCreatePartySessionComplete_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.CreatePartySession
// [0x00020B02] ( FUNC_Exec | FUNC_Event )
// Parameters infos:

void APComPlayerController::CreatePartySession ( )
{
	static UFunction* pFnCreatePartySession = NULL;

	if ( ! pFnCreatePartySession )
		pFnCreatePartySession = (UFunction*) UObject::GObjObjects()->GetIndex( 46023 );

	APComPlayerController_execCreatePartySession_Parms CreatePartySession_Parms;

	this->ProcessEvent ( pFnCreatePartySession, &CreatePartySession_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.UnregisterP2PEnemiesForCustomMatch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// TArray< struct FUniqueNetId >  EnemyIds                       ( CPF_Parm | CPF_NeedCtorLink )

void APComPlayerController::eventUnregisterP2PEnemiesForCustomMatch ( TArray< struct FUniqueNetId > EnemyIds )
{
	static UFunction* pFnUnregisterP2PEnemiesForCustomMatch = NULL;

	if ( ! pFnUnregisterP2PEnemiesForCustomMatch )
		pFnUnregisterP2PEnemiesForCustomMatch = (UFunction*) UObject::GObjObjects()->GetIndex( 46019 );

	APComPlayerController_eventUnregisterP2PEnemiesForCustomMatch_Parms UnregisterP2PEnemiesForCustomMatch_Parms;
	memcpy ( &UnregisterP2PEnemiesForCustomMatch_Parms.EnemyIds, &EnemyIds, 0x10 );

	this->ProcessEvent ( pFnUnregisterP2PEnemiesForCustomMatch, &UnregisterP2PEnemiesForCustomMatch_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.OnGetVoicePermissionsForUsersComplete
// [0x00020102] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  Privilege                      ( CPF_Parm )
// TArray< struct FPermissionsResult > Results                        ( CPF_Parm | CPF_NeedCtorLink )

void APComPlayerController::OnGetVoicePermissionsForUsersComplete ( unsigned char LocalUserNum, unsigned char Privilege, TArray< struct FPermissionsResult > Results )
{
	static UFunction* pFnOnGetVoicePermissionsForUsersComplete = NULL;

	if ( ! pFnOnGetVoicePermissionsForUsersComplete )
		pFnOnGetVoicePermissionsForUsersComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 46011 );

	APComPlayerController_execOnGetVoicePermissionsForUsersComplete_Parms OnGetVoicePermissionsForUsersComplete_Parms;
	OnGetVoicePermissionsForUsersComplete_Parms.LocalUserNum = LocalUserNum;
	OnGetVoicePermissionsForUsersComplete_Parms.Privilege = Privilege;
	memcpy ( &OnGetVoicePermissionsForUsersComplete_Parms.Results, &Results, 0x10 );

	this->ProcessEvent ( pFnOnGetVoicePermissionsForUsersComplete, &OnGetVoicePermissionsForUsersComplete_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.OnGetSessionMemberInfoComplete
// [0x00020102] 
// Parameters infos:
// TArray< struct FSessionMemberInfo > SessionListInfo                ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void APComPlayerController::OnGetSessionMemberInfoComplete ( TArray< struct FSessionMemberInfo > SessionListInfo, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnGetSessionMemberInfoComplete = NULL;

	if ( ! pFnOnGetSessionMemberInfoComplete )
		pFnOnGetSessionMemberInfoComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 46007 );

	APComPlayerController_execOnGetSessionMemberInfoComplete_Parms OnGetSessionMemberInfoComplete_Parms;
	memcpy ( &OnGetSessionMemberInfoComplete_Parms.SessionListInfo, &SessionListInfo, 0x10 );
	OnGetSessionMemberInfoComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnGetSessionMemberInfoComplete, &OnGetSessionMemberInfoComplete_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.OnGetUserConnectionInfoComplete
// [0x00020102] 
// Parameters infos:
// TArray< struct FSessionMemberInfo > SessionListInfo                ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void APComPlayerController::OnGetUserConnectionInfoComplete ( TArray< struct FSessionMemberInfo > SessionListInfo, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnGetUserConnectionInfoComplete = NULL;

	if ( ! pFnOnGetUserConnectionInfoComplete )
		pFnOnGetUserConnectionInfoComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 46003 );

	APComPlayerController_execOnGetUserConnectionInfoComplete_Parms OnGetUserConnectionInfoComplete_Parms;
	memcpy ( &OnGetUserConnectionInfoComplete_Parms.SessionListInfo, &SessionListInfo, 0x10 );
	OnGetUserConnectionInfoComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnGetUserConnectionInfoComplete, &OnGetUserConnectionInfoComplete_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.GetUserNamesForPS4P2PConnections
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// TArray< struct FString >       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

TArray< struct FString > APComPlayerController::GetUserNamesForPS4P2PConnections ( )
{
	static UFunction* pFnGetUserNamesForPS4P2PConnections = NULL;

	if ( ! pFnGetUserNamesForPS4P2PConnections )
		pFnGetUserNamesForPS4P2PConnections = (UFunction*) UObject::GObjObjects()->GetIndex( 46000 );

	APComPlayerController_execGetUserNamesForPS4P2PConnections_Parms GetUserNamesForPS4P2PConnections_Parms;

	pFnGetUserNamesForPS4P2PConnections->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetUserNamesForPS4P2PConnections, &GetUserNamesForPS4P2PConnections_Parms, NULL );

	pFnGetUserNamesForPS4P2PConnections->FunctionFlags |= 0x400;

	return GetUserNamesForPS4P2PConnections_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerController.CloseConnectionsToInvalidPeers
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// TArray< struct FSessionMemberInfo > SessionListInfo                ( CPF_Parm | CPF_NeedCtorLink )

void APComPlayerController::CloseConnectionsToInvalidPeers ( TArray< struct FSessionMemberInfo > SessionListInfo )
{
	static UFunction* pFnCloseConnectionsToInvalidPeers = NULL;

	if ( ! pFnCloseConnectionsToInvalidPeers )
		pFnCloseConnectionsToInvalidPeers = (UFunction*) UObject::GObjObjects()->GetIndex( 45997 );

	APComPlayerController_execCloseConnectionsToInvalidPeers_Parms CloseConnectionsToInvalidPeers_Parms;
	memcpy ( &CloseConnectionsToInvalidPeers_Parms.SessionListInfo, &SessionListInfo, 0x10 );

	pFnCloseConnectionsToInvalidPeers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCloseConnectionsToInvalidPeers, &CloseConnectionsToInvalidPeers_Parms, NULL );

	pFnCloseConnectionsToInvalidPeers->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.EstablishPeers
// [0x00020B02] ( FUNC_Exec | FUNC_Event )
// Parameters infos:

void APComPlayerController::EstablishPeers ( )
{
	static UFunction* pFnEstablishPeers = NULL;

	if ( ! pFnEstablishPeers )
		pFnEstablishPeers = (UFunction*) UObject::GObjObjects()->GetIndex( 45996 );

	APComPlayerController_execEstablishPeers_Parms EstablishPeers_Parms;

	this->ProcessEvent ( pFnEstablishPeers, &EstablishPeers_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.LostP2PConnection
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FUniqueNetId            UniqueId                       ( CPF_Parm )

void APComPlayerController::eventLostP2PConnection ( struct FUniqueNetId UniqueId )
{
	static UFunction* pFnLostP2PConnection = NULL;

	if ( ! pFnLostP2PConnection )
		pFnLostP2PConnection = (UFunction*) UObject::GObjObjects()->GetIndex( 45994 );

	APComPlayerController_eventLostP2PConnection_Parms LostP2PConnection_Parms;
	memcpy ( &LostP2PConnection_Parms.UniqueId, &UniqueId, 0x8 );

	this->ProcessEvent ( pFnLostP2PConnection, &LostP2PConnection_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.GetControllerIdFromNetId
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// int                            ControllerId                   ( CPF_Parm | CPF_OutParm )

void APComPlayerController::eventGetControllerIdFromNetId ( struct FUniqueNetId PlayerID, int* ControllerId )
{
	static UFunction* pFnGetControllerIdFromNetId = NULL;

	if ( ! pFnGetControllerIdFromNetId )
		pFnGetControllerIdFromNetId = (UFunction*) UObject::GObjObjects()->GetIndex( 45991 );

	APComPlayerController_eventGetControllerIdFromNetId_Parms GetControllerIdFromNetId_Parms;
	memcpy ( &GetControllerIdFromNetId_Parms.PlayerID, &PlayerID, 0x8 );

	this->ProcessEvent ( pFnGetControllerIdFromNetId, &GetControllerIdFromNetId_Parms, NULL );

	if ( ControllerId )
		*ControllerId = GetControllerIdFromNetId_Parms.ControllerId;
};

// Function PlatformCommon.PComPlayerController.PairLoggedInUserAndCurrentController
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void APComPlayerController::eventPairLoggedInUserAndCurrentController ( )
{
	static UFunction* pFnPairLoggedInUserAndCurrentController = NULL;

	if ( ! pFnPairLoggedInUserAndCurrentController )
		pFnPairLoggedInUserAndCurrentController = (UFunction*) UObject::GObjObjects()->GetIndex( 45988 );

	APComPlayerController_eventPairLoggedInUserAndCurrentController_Parms PairLoggedInUserAndCurrentController_Parms;

	this->ProcessEvent ( pFnPairLoggedInUserAndCurrentController, &PairLoggedInUserAndCurrentController_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.IsInGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool APComPlayerController::IsInGame ( )
{
	static UFunction* pFnIsInGame = NULL;

	if ( ! pFnIsInGame )
		pFnIsInGame = (UFunction*) UObject::GObjObjects()->GetIndex( 45986 );

	APComPlayerController_execIsInGame_Parms IsInGame_Parms;

	pFnIsInGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsInGame, &IsInGame_Parms, NULL );

	pFnIsInGame->FunctionFlags |= 0x400;

	return IsInGame_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerController.IsPackageInstalled
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool APComPlayerController::IsPackageInstalled ( )
{
	static UFunction* pFnIsPackageInstalled = NULL;

	if ( ! pFnIsPackageInstalled )
		pFnIsPackageInstalled = (UFunction*) UObject::GObjObjects()->GetIndex( 45984 );

	APComPlayerController_execIsPackageInstalled_Parms IsPackageInstalled_Parms;

	pFnIsPackageInstalled->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsPackageInstalled, &IsPackageInstalled_Parms, NULL );

	pFnIsPackageInstalled->FunctionFlags |= 0x400;

	return IsPackageInstalled_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerController.OnMultiplayerSessionChange
// [0x00020002] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// struct FSessionUpdateInfo      SessionChanges                 ( CPF_Parm | CPF_NeedCtorLink )

void APComPlayerController::OnMultiplayerSessionChange ( struct FName SessionName, struct FSessionUpdateInfo SessionChanges )
{
	static UFunction* pFnOnMultiplayerSessionChange = NULL;

	if ( ! pFnOnMultiplayerSessionChange )
		pFnOnMultiplayerSessionChange = (UFunction*) UObject::GObjObjects()->GetIndex( 45976 );

	APComPlayerController_execOnMultiplayerSessionChange_Parms OnMultiplayerSessionChange_Parms;
	memcpy ( &OnMultiplayerSessionChange_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &OnMultiplayerSessionChange_Parms.SessionChanges, &SessionChanges, 0x24 );

	this->ProcessEvent ( pFnOnMultiplayerSessionChange, &OnMultiplayerSessionChange_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.CheckFilterText
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Text                           ( CPF_Parm | CPF_NeedCtorLink )

bool APComPlayerController::eventCheckFilterText ( struct FString Text )
{
	static UFunction* pFnCheckFilterText = NULL;

	if ( ! pFnCheckFilterText )
		pFnCheckFilterText = (UFunction*) UObject::GObjObjects()->GetIndex( 45973 );

	APComPlayerController_eventCheckFilterText_Parms CheckFilterText_Parms;
	memcpy ( &CheckFilterText_Parms.Text, &Text, 0x10 );

	this->ProcessEvent ( pFnCheckFilterText, &CheckFilterText_Parms, NULL );

	return CheckFilterText_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerController.CanPlayOnlineWithUsersByUniqueNetIds
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FUniqueNetId >  Users                          ( CPF_Parm | CPF_NeedCtorLink )

bool APComPlayerController::eventCanPlayOnlineWithUsersByUniqueNetIds ( unsigned char LocalUserNum, TArray< struct FUniqueNetId > Users )
{
	static UFunction* pFnCanPlayOnlineWithUsersByUniqueNetIds = NULL;

	if ( ! pFnCanPlayOnlineWithUsersByUniqueNetIds )
		pFnCanPlayOnlineWithUsersByUniqueNetIds = (UFunction*) UObject::GObjObjects()->GetIndex( 45968 );

	APComPlayerController_eventCanPlayOnlineWithUsersByUniqueNetIds_Parms CanPlayOnlineWithUsersByUniqueNetIds_Parms;
	CanPlayOnlineWithUsersByUniqueNetIds_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &CanPlayOnlineWithUsersByUniqueNetIds_Parms.Users, &Users, 0x10 );

	this->ProcessEvent ( pFnCanPlayOnlineWithUsersByUniqueNetIds, &CanPlayOnlineWithUsersByUniqueNetIds_Parms, NULL );

	return CanPlayOnlineWithUsersByUniqueNetIds_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerController.CanCommunicateTextWithUsersByUniqueNetIds
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FUniqueNetId >  Users                          ( CPF_Parm | CPF_NeedCtorLink )

bool APComPlayerController::eventCanCommunicateTextWithUsersByUniqueNetIds ( unsigned char LocalUserNum, TArray< struct FUniqueNetId > Users )
{
	static UFunction* pFnCanCommunicateTextWithUsersByUniqueNetIds = NULL;

	if ( ! pFnCanCommunicateTextWithUsersByUniqueNetIds )
		pFnCanCommunicateTextWithUsersByUniqueNetIds = (UFunction*) UObject::GObjObjects()->GetIndex( 45963 );

	APComPlayerController_eventCanCommunicateTextWithUsersByUniqueNetIds_Parms CanCommunicateTextWithUsersByUniqueNetIds_Parms;
	CanCommunicateTextWithUsersByUniqueNetIds_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &CanCommunicateTextWithUsersByUniqueNetIds_Parms.Users, &Users, 0x10 );

	this->ProcessEvent ( pFnCanCommunicateTextWithUsersByUniqueNetIds, &CanCommunicateTextWithUsersByUniqueNetIds_Parms, NULL );

	return CanCommunicateTextWithUsersByUniqueNetIds_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerController.CanCommunicateText
// [0x00424802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool APComPlayerController::eventCanCommunicateText ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanCommunicateText = NULL;

	if ( ! pFnCanCommunicateText )
		pFnCanCommunicateText = (UFunction*) UObject::GObjObjects()->GetIndex( 45957 );

	APComPlayerController_eventCanCommunicateText_Parms CanCommunicateText_Parms;
	CanCommunicateText_Parms.LocalUserNum = LocalUserNum;
	CanCommunicateText_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanCommunicateText_Parms.Reason, &Reason, 0x10 );

	this->ProcessEvent ( pFnCanCommunicateText, &CanCommunicateText_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanCommunicateText_Parms.PrivilegeLevelHint;

	return CanCommunicateText_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerController.OnTextFilterApplied
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 OriginalText                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 FilteredText                   ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bCensorCompletely              ( CPF_Parm )

void APComPlayerController::OnTextFilterApplied ( struct FString OriginalText, struct FString FilteredText, unsigned long bCensorCompletely )
{
	static UFunction* pFnOnTextFilterApplied = NULL;

	if ( ! pFnOnTextFilterApplied )
		pFnOnTextFilterApplied = (UFunction*) UObject::GObjObjects()->GetIndex( 45953 );

	APComPlayerController_execOnTextFilterApplied_Parms OnTextFilterApplied_Parms;
	memcpy ( &OnTextFilterApplied_Parms.OriginalText, &OriginalText, 0x10 );
	memcpy ( &OnTextFilterApplied_Parms.FilteredText, &FilteredText, 0x10 );
	OnTextFilterApplied_Parms.bCensorCompletely = bCensorCompletely;

	pFnOnTextFilterApplied->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnTextFilterApplied, &OnTextFilterApplied_Parms, NULL );

	pFnOnTextFilterApplied->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.RequestUpdateFriendsList
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bForceRequest                  ( CPF_OptionalParm | CPF_Parm )

void APComPlayerController::RequestUpdateFriendsList ( unsigned long bForceRequest )
{
	static UFunction* pFnRequestUpdateFriendsList = NULL;

	if ( ! pFnRequestUpdateFriendsList )
		pFnRequestUpdateFriendsList = (UFunction*) UObject::GObjObjects()->GetIndex( 45951 );

	APComPlayerController_execRequestUpdateFriendsList_Parms RequestUpdateFriendsList_Parms;
	RequestUpdateFriendsList_Parms.bForceRequest = bForceRequest;

	pFnRequestUpdateFriendsList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRequestUpdateFriendsList, &RequestUpdateFriendsList_Parms, NULL );

	pFnRequestUpdateFriendsList->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.UpdateMctsWithFriends
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void APComPlayerController::UpdateMctsWithFriends ( unsigned long bWasSuccessful )
{
	static UFunction* pFnUpdateMctsWithFriends = NULL;

	if ( ! pFnUpdateMctsWithFriends )
		pFnUpdateMctsWithFriends = (UFunction*) UObject::GObjObjects()->GetIndex( 45949 );

	APComPlayerController_execUpdateMctsWithFriends_Parms UpdateMctsWithFriends_Parms;
	UpdateMctsWithFriends_Parms.bWasSuccessful = bWasSuccessful;

	pFnUpdateMctsWithFriends->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateMctsWithFriends, &UpdateMctsWithFriends_Parms, NULL );

	pFnUpdateMctsWithFriends->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.OnContentPurchaseResponse
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bAuthorized                    ( CPF_Parm )
// struct FQWord                  qwOrderId                      ( CPF_Parm )

void APComPlayerController::OnContentPurchaseResponse ( unsigned long bAuthorized, struct FQWord qwOrderId )
{
	static UFunction* pFnOnContentPurchaseResponse = NULL;

	if ( ! pFnOnContentPurchaseResponse )
		pFnOnContentPurchaseResponse = (UFunction*) UObject::GObjObjects()->GetIndex( 45946 );

	APComPlayerController_execOnContentPurchaseResponse_Parms OnContentPurchaseResponse_Parms;
	OnContentPurchaseResponse_Parms.bAuthorized = bAuthorized;
	memcpy ( &OnContentPurchaseResponse_Parms.qwOrderId, &qwOrderId, 0x8 );

	pFnOnContentPurchaseResponse->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnContentPurchaseResponse, &OnContentPurchaseResponse_Parms, NULL );

	pFnOnContentPurchaseResponse->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.OnPrivilegeCheckedForUsersByUniqueNetIds
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  Privilege                      ( CPF_Parm )
// TArray< struct FPermissionsResultByUniqueNetId > Results                        ( CPF_Parm | CPF_NeedCtorLink )

void APComPlayerController::OnPrivilegeCheckedForUsersByUniqueNetIds ( unsigned char LocalUserNum, unsigned char Privilege, TArray< struct FPermissionsResultByUniqueNetId > Results )
{
	static UFunction* pFnOnPrivilegeCheckedForUsersByUniqueNetIds = NULL;

	if ( ! pFnOnPrivilegeCheckedForUsersByUniqueNetIds )
		pFnOnPrivilegeCheckedForUsersByUniqueNetIds = (UFunction*) UObject::GObjObjects()->GetIndex( 45941 );

	APComPlayerController_execOnPrivilegeCheckedForUsersByUniqueNetIds_Parms OnPrivilegeCheckedForUsersByUniqueNetIds_Parms;
	OnPrivilegeCheckedForUsersByUniqueNetIds_Parms.LocalUserNum = LocalUserNum;
	OnPrivilegeCheckedForUsersByUniqueNetIds_Parms.Privilege = Privilege;
	memcpy ( &OnPrivilegeCheckedForUsersByUniqueNetIds_Parms.Results, &Results, 0x10 );

	pFnOnPrivilegeCheckedForUsersByUniqueNetIds->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnPrivilegeCheckedForUsersByUniqueNetIds, &OnPrivilegeCheckedForUsersByUniqueNetIds_Parms, NULL );

	pFnOnPrivilegeCheckedForUsersByUniqueNetIds->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.OnPrivilegeLevelChecked
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  Privilege                      ( CPF_Parm )
// unsigned char                  PrivilegeLevel                 ( CPF_Parm )
// unsigned long                  bDiffersFromHint               ( CPF_Parm )

void APComPlayerController::OnPrivilegeLevelChecked ( unsigned char LocalUserNum, unsigned char Privilege, unsigned char PrivilegeLevel, unsigned long bDiffersFromHint )
{
	static UFunction* pFnOnPrivilegeLevelChecked = NULL;

	if ( ! pFnOnPrivilegeLevelChecked )
		pFnOnPrivilegeLevelChecked = (UFunction*) UObject::GObjObjects()->GetIndex( 45936 );

	APComPlayerController_execOnPrivilegeLevelChecked_Parms OnPrivilegeLevelChecked_Parms;
	OnPrivilegeLevelChecked_Parms.LocalUserNum = LocalUserNum;
	OnPrivilegeLevelChecked_Parms.Privilege = Privilege;
	OnPrivilegeLevelChecked_Parms.PrivilegeLevel = PrivilegeLevel;
	OnPrivilegeLevelChecked_Parms.bDiffersFromHint = bDiffersFromHint;

	pFnOnPrivilegeLevelChecked->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnPrivilegeLevelChecked, &OnPrivilegeLevelChecked_Parms, NULL );

	pFnOnPrivilegeLevelChecked->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.ClearOnlineDelegates
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void APComPlayerController::eventClearOnlineDelegates ( )
{
	static UFunction* pFnClearOnlineDelegates = NULL;

	if ( ! pFnClearOnlineDelegates )
		pFnClearOnlineDelegates = (UFunction*) UObject::GObjObjects()->GetIndex( 45933 );

	APComPlayerController_eventClearOnlineDelegates_Parms ClearOnlineDelegates_Parms;

	this->ProcessEvent ( pFnClearOnlineDelegates, &ClearOnlineDelegates_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.RegisterOnlineDelegates
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void APComPlayerController::eventRegisterOnlineDelegates ( )
{
	static UFunction* pFnRegisterOnlineDelegates = NULL;

	if ( ! pFnRegisterOnlineDelegates )
		pFnRegisterOnlineDelegates = (UFunction*) UObject::GObjObjects()->GetIndex( 45930 );

	APComPlayerController_eventRegisterOnlineDelegates_Parms RegisterOnlineDelegates_Parms;

	this->ProcessEvent ( pFnRegisterOnlineDelegates, &RegisterOnlineDelegates_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.ClientRestablishP2PConnections
// [0x010201C2] 
// Parameters infos:

void APComPlayerController::ClientRestablishP2PConnections ( )
{
	static UFunction* pFnClientRestablishP2PConnections = NULL;

	if ( ! pFnClientRestablishP2PConnections )
		pFnClientRestablishP2PConnections = (UFunction*) UObject::GObjObjects()->GetIndex( 45929 );

	APComPlayerController_execClientRestablishP2PConnections_Parms ClientRestablishP2PConnections_Parms;

	this->ProcessEvent ( pFnClientRestablishP2PConnections, &ClientRestablishP2PConnections_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.ServerReEstablishP2PConnections
// [0x002200C2] 
// Parameters infos:

void APComPlayerController::ServerReEstablishP2PConnections ( )
{
	static UFunction* pFnServerReEstablishP2PConnections = NULL;

	if ( ! pFnServerReEstablishP2PConnections )
		pFnServerReEstablishP2PConnections = (UFunction*) UObject::GObjObjects()->GetIndex( 45927 );

	APComPlayerController_execServerReEstablishP2PConnections_Parms ServerReEstablishP2PConnections_Parms;

	this->ProcessEvent ( pFnServerReEstablishP2PConnections, &ServerReEstablishP2PConnections_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.IsReconnect
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool APComPlayerController::IsReconnect ( )
{
	static UFunction* pFnIsReconnect = NULL;

	if ( ! pFnIsReconnect )
		pFnIsReconnect = (UFunction*) UObject::GObjObjects()->GetIndex( 45925 );

	APComPlayerController_execIsReconnect_Parms IsReconnect_Parms;

	pFnIsReconnect->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsReconnect, &IsReconnect_Parms, NULL );

	pFnIsReconnect->FunctionFlags |= 0x400;

	return IsReconnect_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerController.RestablishVoiceForReconnect
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void APComPlayerController::eventRestablishVoiceForReconnect ( )
{
	static UFunction* pFnRestablishVoiceForReconnect = NULL;

	if ( ! pFnRestablishVoiceForReconnect )
		pFnRestablishVoiceForReconnect = (UFunction*) UObject::GObjObjects()->GetIndex( 45924 );

	APComPlayerController_eventRestablishVoiceForReconnect_Parms RestablishVoiceForReconnect_Parms;

	this->ProcessEvent ( pFnRestablishVoiceForReconnect, &RestablishVoiceForReconnect_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.OnJoinOnlineGameCompleteForReceivedSessionInfo
// [0x00020102] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void APComPlayerController::OnJoinOnlineGameCompleteForReceivedSessionInfo ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnJoinOnlineGameCompleteForReceivedSessionInfo = NULL;

	if ( ! pFnOnJoinOnlineGameCompleteForReceivedSessionInfo )
		pFnOnJoinOnlineGameCompleteForReceivedSessionInfo = (UFunction*) UObject::GObjObjects()->GetIndex( 45920 );

	APComPlayerController_execOnJoinOnlineGameCompleteForReceivedSessionInfo_Parms OnJoinOnlineGameCompleteForReceivedSessionInfo_Parms;
	memcpy ( &OnJoinOnlineGameCompleteForReceivedSessionInfo_Parms.SessionName, &SessionName, 0x8 );
	OnJoinOnlineGameCompleteForReceivedSessionInfo_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnJoinOnlineGameCompleteForReceivedSessionInfo, &OnJoinOnlineGameCompleteForReceivedSessionInfo_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.ReceiveSessionInfo
// [0x010209C2] ( FUNC_Event )
// Parameters infos:
// unsigned char                  PlatformSpecificInfo           ( CPF_Parm )
// unsigned char                  ConsoleType                    ( CPF_Parm )

void APComPlayerController::eventReceiveSessionInfo ( unsigned char* PlatformSpecificInfo, unsigned char ConsoleType )
{
	static UFunction* pFnReceiveSessionInfo = NULL;

	if ( ! pFnReceiveSessionInfo )
		pFnReceiveSessionInfo = (UFunction*) UObject::GObjObjects()->GetIndex( 45916 );

	APComPlayerController_eventReceiveSessionInfo_Parms ReceiveSessionInfo_Parms;
	memcpy ( &ReceiveSessionInfo_Parms.PlatformSpecificInfo, &PlatformSpecificInfo, 0x50 );
	ReceiveSessionInfo_Parms.ConsoleType = ConsoleType;

	this->ProcessEvent ( pFnReceiveSessionInfo, &ReceiveSessionInfo_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.OnCreateOnlineGameComplete
// [0x00020102] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void APComPlayerController::OnCreateOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnCreateOnlineGameComplete = NULL;

	if ( ! pFnOnCreateOnlineGameComplete )
		pFnOnCreateOnlineGameComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 45911 );

	APComPlayerController_execOnCreateOnlineGameComplete_Parms OnCreateOnlineGameComplete_Parms;
	memcpy ( &OnCreateOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnCreateOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnCreateOnlineGameComplete, &OnCreateOnlineGameComplete_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.ChooseThisControllerForSessionScout
// [0x00424A02] ( FUNC_Exec | FUNC_Event )
// Parameters infos:
// unsigned long                  bCustomMatch                   ( CPF_Parm )
// int                            MaxPlayers                     ( CPF_Parm )
// unsigned long                  bPrivate                       ( CPF_Parm )
// TArray< struct FUniqueNetId >  ReservedMembers                ( CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void APComPlayerController::ChooseThisControllerForSessionScout ( unsigned long bCustomMatch, int MaxPlayers, unsigned long bPrivate, TArray< struct FUniqueNetId >* ReservedMembers )
{
	static UFunction* pFnChooseThisControllerForSessionScout = NULL;

	if ( ! pFnChooseThisControllerForSessionScout )
		pFnChooseThisControllerForSessionScout = (UFunction*) UObject::GObjObjects()->GetIndex( 45904 );

	APComPlayerController_execChooseThisControllerForSessionScout_Parms ChooseThisControllerForSessionScout_Parms;
	ChooseThisControllerForSessionScout_Parms.bCustomMatch = bCustomMatch;
	ChooseThisControllerForSessionScout_Parms.MaxPlayers = MaxPlayers;
	ChooseThisControllerForSessionScout_Parms.bPrivate = bPrivate;

	this->ProcessEvent ( pFnChooseThisControllerForSessionScout, &ChooseThisControllerForSessionScout_Parms, NULL );

	if ( ReservedMembers )
		memcpy ( ReservedMembers, &ChooseThisControllerForSessionScout_Parms.ReservedMembers, 0x10 );
};

// Function PlatformCommon.PComPlayerController.OnDestroyOnlineGameComplete
// [0x00020002] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void APComPlayerController::OnDestroyOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnDestroyOnlineGameComplete = NULL;

	if ( ! pFnOnDestroyOnlineGameComplete )
		pFnOnDestroyOnlineGameComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 45901 );

	APComPlayerController_execOnDestroyOnlineGameComplete_Parms OnDestroyOnlineGameComplete_Parms;
	memcpy ( &OnDestroyOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnDestroyOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnDestroyOnlineGameComplete, &OnDestroyOnlineGameComplete_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.OnEndOnlineGameComplete
// [0x00020002] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void APComPlayerController::OnEndOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnEndOnlineGameComplete = NULL;

	if ( ! pFnOnEndOnlineGameComplete )
		pFnOnEndOnlineGameComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 45898 );

	APComPlayerController_execOnEndOnlineGameComplete_Parms OnEndOnlineGameComplete_Parms;
	memcpy ( &OnEndOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnEndOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnEndOnlineGameComplete, &OnEndOnlineGameComplete_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.FinishQuitToMainMenu
// [0x00020002] 
// Parameters infos:

void APComPlayerController::FinishQuitToMainMenu ( )
{
	static UFunction* pFnFinishQuitToMainMenu = NULL;

	if ( ! pFnFinishQuitToMainMenu )
		pFnFinishQuitToMainMenu = (UFunction*) UObject::GObjObjects()->GetIndex( 45897 );

	APComPlayerController_execFinishQuitToMainMenu_Parms FinishQuitToMainMenu_Parms;

	this->ProcessEvent ( pFnFinishQuitToMainMenu, &FinishQuitToMainMenu_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.CleanupOnlineSubsystemSession
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bWasFromMenu                   ( CPF_Parm )

bool APComPlayerController::CleanupOnlineSubsystemSession ( unsigned long bWasFromMenu )
{
	static UFunction* pFnCleanupOnlineSubsystemSession = NULL;

	if ( ! pFnCleanupOnlineSubsystemSession )
		pFnCleanupOnlineSubsystemSession = (UFunction*) UObject::GObjObjects()->GetIndex( 45894 );

	APComPlayerController_execCleanupOnlineSubsystemSession_Parms CleanupOnlineSubsystemSession_Parms;
	CleanupOnlineSubsystemSession_Parms.bWasFromMenu = bWasFromMenu;

	this->ProcessEvent ( pFnCleanupOnlineSubsystemSession, &CleanupOnlineSubsystemSession_Parms, NULL );

	return CleanupOnlineSubsystemSession_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerController.QuitToMainMenu
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void APComPlayerController::eventQuitToMainMenu ( )
{
	static UFunction* pFnQuitToMainMenu = NULL;

	if ( ! pFnQuitToMainMenu )
		pFnQuitToMainMenu = (UFunction*) UObject::GObjObjects()->GetIndex( 45893 );

	APComPlayerController_eventQuitToMainMenu_Parms QuitToMainMenu_Parms;

	this->ProcessEvent ( pFnQuitToMainMenu, &QuitToMainMenu_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.ServerAcknowledgePossession
// [0x002200C2] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )

void APComPlayerController::ServerAcknowledgePossession ( class APawn* P )
{
	static UFunction* pFnServerAcknowledgePossession = NULL;

	if ( ! pFnServerAcknowledgePossession )
		pFnServerAcknowledgePossession = (UFunction*) UObject::GObjObjects()->GetIndex( 45891 );

	APComPlayerController_execServerAcknowledgePossession_Parms ServerAcknowledgePossession_Parms;
	ServerAcknowledgePossession_Parms.P = P;

	this->ProcessEvent ( pFnServerAcknowledgePossession, &ServerAcknowledgePossession_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.AcknowledgePossession
// [0x00020002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )

void APComPlayerController::AcknowledgePossession ( class APawn* P )
{
	static UFunction* pFnAcknowledgePossession = NULL;

	if ( ! pFnAcknowledgePossession )
		pFnAcknowledgePossession = (UFunction*) UObject::GObjObjects()->GetIndex( 45889 );

	APComPlayerController_execAcknowledgePossession_Parms AcknowledgePossession_Parms;
	AcknowledgePossession_Parms.P = P;

	this->ProcessEvent ( pFnAcknowledgePossession, &AcknowledgePossession_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.LeaveMatchQueue
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void APComPlayerController::LeaveMatchQueue ( )
{
	static UFunction* pFnLeaveMatchQueue = NULL;

	if ( ! pFnLeaveMatchQueue )
		pFnLeaveMatchQueue = (UFunction*) UObject::GObjObjects()->GetIndex( 45888 );

	APComPlayerController_execLeaveMatchQueue_Parms LeaveMatchQueue_Parms;

	pFnLeaveMatchQueue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLeaveMatchQueue, &LeaveMatchQueue_Parms, NULL );

	pFnLeaveMatchQueue->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.UpdatePartyUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void APComPlayerController::UpdatePartyUI ( )
{
	static UFunction* pFnUpdatePartyUI = NULL;

	if ( ! pFnUpdatePartyUI )
		pFnUpdatePartyUI = (UFunction*) UObject::GObjObjects()->GetIndex( 45887 );

	APComPlayerController_execUpdatePartyUI_Parms UpdatePartyUI_Parms;

	pFnUpdatePartyUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdatePartyUI, &UpdatePartyUI_Parms, NULL );

	pFnUpdatePartyUI->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.TryOpenPartyUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void APComPlayerController::TryOpenPartyUI ( )
{
	static UFunction* pFnTryOpenPartyUI = NULL;

	if ( ! pFnTryOpenPartyUI )
		pFnTryOpenPartyUI = (UFunction*) UObject::GObjObjects()->GetIndex( 45886 );

	APComPlayerController_execTryOpenPartyUI_Parms TryOpenPartyUI_Parms;

	pFnTryOpenPartyUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTryOpenPartyUI, &TryOpenPartyUI_Parms, NULL );

	pFnTryOpenPartyUI->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.ShowCustomGameDisallowedPopup
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void APComPlayerController::ShowCustomGameDisallowedPopup ( )
{
	static UFunction* pFnShowCustomGameDisallowedPopup = NULL;

	if ( ! pFnShowCustomGameDisallowedPopup )
		pFnShowCustomGameDisallowedPopup = (UFunction*) UObject::GObjObjects()->GetIndex( 45885 );

	APComPlayerController_execShowCustomGameDisallowedPopup_Parms ShowCustomGameDisallowedPopup_Parms;

	pFnShowCustomGameDisallowedPopup->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowCustomGameDisallowedPopup, &ShowCustomGameDisallowedPopup_Parms, NULL );

	pFnShowCustomGameDisallowedPopup->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.ShowPackageNotInstalledForPartyInviteWarning
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void APComPlayerController::ShowPackageNotInstalledForPartyInviteWarning ( )
{
	static UFunction* pFnShowPackageNotInstalledForPartyInviteWarning = NULL;

	if ( ! pFnShowPackageNotInstalledForPartyInviteWarning )
		pFnShowPackageNotInstalledForPartyInviteWarning = (UFunction*) UObject::GObjObjects()->GetIndex( 45884 );

	APComPlayerController_execShowPackageNotInstalledForPartyInviteWarning_Parms ShowPackageNotInstalledForPartyInviteWarning_Parms;

	pFnShowPackageNotInstalledForPartyInviteWarning->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowPackageNotInstalledForPartyInviteWarning, &ShowPackageNotInstalledForPartyInviteWarning_Parms, NULL );

	pFnShowPackageNotInstalledForPartyInviteWarning->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.ShowPartyNoLongerAvailableWarning
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void APComPlayerController::ShowPartyNoLongerAvailableWarning ( )
{
	static UFunction* pFnShowPartyNoLongerAvailableWarning = NULL;

	if ( ! pFnShowPartyNoLongerAvailableWarning )
		pFnShowPartyNoLongerAvailableWarning = (UFunction*) UObject::GObjObjects()->GetIndex( 45883 );

	APComPlayerController_execShowPartyNoLongerAvailableWarning_Parms ShowPartyNoLongerAvailableWarning_Parms;

	pFnShowPartyNoLongerAvailableWarning->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowPartyNoLongerAvailableWarning, &ShowPartyNoLongerAvailableWarning_Parms, NULL );

	pFnShowPartyNoLongerAvailableWarning->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.ShowPartyFullWarning
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bPartySession                  ( CPF_Parm )

void APComPlayerController::ShowPartyFullWarning ( unsigned long bPartySession )
{
	static UFunction* pFnShowPartyFullWarning = NULL;

	if ( ! pFnShowPartyFullWarning )
		pFnShowPartyFullWarning = (UFunction*) UObject::GObjObjects()->GetIndex( 45881 );

	APComPlayerController_execShowPartyFullWarning_Parms ShowPartyFullWarning_Parms;
	ShowPartyFullWarning_Parms.bPartySession = bPartySession;

	pFnShowPartyFullWarning->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowPartyFullWarning, &ShowPartyFullWarning_Parms, NULL );

	pFnShowPartyFullWarning->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.ShowUnableToReadFriendsListWarning
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void APComPlayerController::ShowUnableToReadFriendsListWarning ( )
{
	static UFunction* pFnShowUnableToReadFriendsListWarning = NULL;

	if ( ! pFnShowUnableToReadFriendsListWarning )
		pFnShowUnableToReadFriendsListWarning = (UFunction*) UObject::GObjObjects()->GetIndex( 45880 );

	APComPlayerController_execShowUnableToReadFriendsListWarning_Parms ShowUnableToReadFriendsListWarning_Parms;

	pFnShowUnableToReadFriendsListWarning->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowUnableToReadFriendsListWarning, &ShowUnableToReadFriendsListWarning_Parms, NULL );

	pFnShowUnableToReadFriendsListWarning->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.ShowNoFriendsForPartyInviteWarning
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void APComPlayerController::ShowNoFriendsForPartyInviteWarning ( )
{
	static UFunction* pFnShowNoFriendsForPartyInviteWarning = NULL;

	if ( ! pFnShowNoFriendsForPartyInviteWarning )
		pFnShowNoFriendsForPartyInviteWarning = (UFunction*) UObject::GObjObjects()->GetIndex( 45879 );

	APComPlayerController_execShowNoFriendsForPartyInviteWarning_Parms ShowNoFriendsForPartyInviteWarning_Parms;

	pFnShowNoFriendsForPartyInviteWarning->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowNoFriendsForPartyInviteWarning, &ShowNoFriendsForPartyInviteWarning_Parms, NULL );

	pFnShowNoFriendsForPartyInviteWarning->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.ShowControllerDisconnectedWarning
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void APComPlayerController::ShowControllerDisconnectedWarning ( )
{
	static UFunction* pFnShowControllerDisconnectedWarning = NULL;

	if ( ! pFnShowControllerDisconnectedWarning )
		pFnShowControllerDisconnectedWarning = (UFunction*) UObject::GObjObjects()->GetIndex( 45878 );

	APComPlayerController_execShowControllerDisconnectedWarning_Parms ShowControllerDisconnectedWarning_Parms;

	pFnShowControllerDisconnectedWarning->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowControllerDisconnectedWarning, &ShowControllerDisconnectedWarning_Parms, NULL );

	pFnShowControllerDisconnectedWarning->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.ShouldPartySessionsBePublic
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool APComPlayerController::ShouldPartySessionsBePublic ( )
{
	static UFunction* pFnShouldPartySessionsBePublic = NULL;

	if ( ! pFnShouldPartySessionsBePublic )
		pFnShouldPartySessionsBePublic = (UFunction*) UObject::GObjObjects()->GetIndex( 45876 );

	APComPlayerController_execShouldPartySessionsBePublic_Parms ShouldPartySessionsBePublic_Parms;

	this->ProcessEvent ( pFnShouldPartySessionsBePublic, &ShouldPartySessionsBePublic_Parms, NULL );

	return ShouldPartySessionsBePublic_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerController.IsLiveSpectate
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool APComPlayerController::IsLiveSpectate ( )
{
	static UFunction* pFnIsLiveSpectate = NULL;

	if ( ! pFnIsLiveSpectate )
		pFnIsLiveSpectate = (UFunction*) UObject::GObjObjects()->GetIndex( 45874 );

	APComPlayerController_execIsLiveSpectate_Parms IsLiveSpectate_Parms;

	pFnIsLiveSpectate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsLiveSpectate, &IsLiveSpectate_Parms, NULL );

	pFnIsLiveSpectate->FunctionFlags |= 0x400;

	return IsLiveSpectate_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerController.CreateOrJoinPartySession
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void APComPlayerController::CreateOrJoinPartySession ( )
{
	static UFunction* pFnCreateOrJoinPartySession = NULL;

	if ( ! pFnCreateOrJoinPartySession )
		pFnCreateOrJoinPartySession = (UFunction*) UObject::GObjObjects()->GetIndex( 45873 );

	APComPlayerController_execCreateOrJoinPartySession_Parms CreateOrJoinPartySession_Parms;

	pFnCreateOrJoinPartySession->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateOrJoinPartySession, &CreateOrJoinPartySession_Parms, NULL );

	pFnCreateOrJoinPartySession->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.ArePartySessionInvitesAllowed
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool APComPlayerController::ArePartySessionInvitesAllowed ( )
{
	static UFunction* pFnArePartySessionInvitesAllowed = NULL;

	if ( ! pFnArePartySessionInvitesAllowed )
		pFnArePartySessionInvitesAllowed = (UFunction*) UObject::GObjObjects()->GetIndex( 45871 );

	APComPlayerController_execArePartySessionInvitesAllowed_Parms ArePartySessionInvitesAllowed_Parms;

	pFnArePartySessionInvitesAllowed->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnArePartySessionInvitesAllowed, &ArePartySessionInvitesAllowed_Parms, NULL );

	pFnArePartySessionInvitesAllowed->FunctionFlags |= 0x400;

	return ArePartySessionInvitesAllowed_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerController.UpdateMCTSSession
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// struct FString                 SessionGuid                    ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bIsHost                        ( CPF_Parm )

void APComPlayerController::UpdateMCTSSession ( struct FString SessionGuid, unsigned long bIsHost )
{
	static UFunction* pFnUpdateMCTSSession = NULL;

	if ( ! pFnUpdateMCTSSession )
		pFnUpdateMCTSSession = (UFunction*) UObject::GObjObjects()->GetIndex( 45868 );

	APComPlayerController_execUpdateMCTSSession_Parms UpdateMCTSSession_Parms;
	memcpy ( &UpdateMCTSSession_Parms.SessionGuid, &SessionGuid, 0x10 );
	UpdateMCTSSession_Parms.bIsHost = bIsHost;

	pFnUpdateMCTSSession->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateMCTSSession, &UpdateMCTSSession_Parms, NULL );

	pFnUpdateMCTSSession->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.BlockPartySceneInput
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bBlockInput                    ( CPF_Parm )

void APComPlayerController::BlockPartySceneInput ( unsigned long bBlockInput )
{
	static UFunction* pFnBlockPartySceneInput = NULL;

	if ( ! pFnBlockPartySceneInput )
		pFnBlockPartySceneInput = (UFunction*) UObject::GObjObjects()->GetIndex( 45866 );

	APComPlayerController_execBlockPartySceneInput_Parms BlockPartySceneInput_Parms;
	BlockPartySceneInput_Parms.bBlockInput = bBlockInput;

	pFnBlockPartySceneInput->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBlockPartySceneInput, &BlockPartySceneInput_Parms, NULL );

	pFnBlockPartySceneInput->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.FilterFriendListForPeoplePicker
// [0x00420500] ( FUNC_Native )
// Parameters infos:
// TArray< struct FOnlineFriend > FriendList                     ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< struct FSessionMemberInfo > SessionMemberList              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void APComPlayerController::FilterFriendListForPeoplePicker ( TArray< struct FOnlineFriend >* FriendList, TArray< struct FSessionMemberInfo >* SessionMemberList )
{
	static UFunction* pFnFilterFriendListForPeoplePicker = NULL;

	if ( ! pFnFilterFriendListForPeoplePicker )
		pFnFilterFriendListForPeoplePicker = (UFunction*) UObject::GObjObjects()->GetIndex( 45861 );

	APComPlayerController_execFilterFriendListForPeoplePicker_Parms FilterFriendListForPeoplePicker_Parms;

	pFnFilterFriendListForPeoplePicker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFilterFriendListForPeoplePicker, &FilterFriendListForPeoplePicker_Parms, NULL );

	pFnFilterFriendListForPeoplePicker->FunctionFlags |= 0x400;

	if ( FriendList )
		memcpy ( FriendList, &FilterFriendListForPeoplePicker_Parms.FriendList, 0x10 );

	if ( SessionMemberList )
		memcpy ( SessionMemberList, &FilterFriendListForPeoplePicker_Parms.SessionMemberList, 0x10 );
};

// Function PlatformCommon.PComPlayerController.ShowPrivilegeMessageAndDeclineInvite
// [0x00020500] ( FUNC_Native )
// Parameters infos:

void APComPlayerController::ShowPrivilegeMessageAndDeclineInvite ( )
{
	static UFunction* pFnShowPrivilegeMessageAndDeclineInvite = NULL;

	if ( ! pFnShowPrivilegeMessageAndDeclineInvite )
		pFnShowPrivilegeMessageAndDeclineInvite = (UFunction*) UObject::GObjObjects()->GetIndex( 45860 );

	APComPlayerController_execShowPrivilegeMessageAndDeclineInvite_Parms ShowPrivilegeMessageAndDeclineInvite_Parms;

	pFnShowPrivilegeMessageAndDeclineInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowPrivilegeMessageAndDeclineInvite, &ShowPrivilegeMessageAndDeclineInvite_Parms, NULL );

	pFnShowPrivilegeMessageAndDeclineInvite->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.ConnectToPeers
// [0x00420500] ( FUNC_Native )
// Parameters infos:
// TArray< struct FSessionMemberInfo > SessionListInfo                ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void APComPlayerController::ConnectToPeers ( TArray< struct FSessionMemberInfo >* SessionListInfo )
{
	static UFunction* pFnConnectToPeers = NULL;

	if ( ! pFnConnectToPeers )
		pFnConnectToPeers = (UFunction*) UObject::GObjObjects()->GetIndex( 45857 );

	APComPlayerController_execConnectToPeers_Parms ConnectToPeers_Parms;

	pFnConnectToPeers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnConnectToPeers, &ConnectToPeers_Parms, NULL );

	pFnConnectToPeers->FunctionFlags |= 0x400;

	if ( SessionListInfo )
		memcpy ( SessionListInfo, &ConnectToPeers_Parms.SessionListInfo, 0x10 );
};

// Function PlatformCommon.PComPlayerController.TryJoinSession
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void APComPlayerController::TryJoinSession ( )
{
	static UFunction* pFnTryJoinSession = NULL;

	if ( ! pFnTryJoinSession )
		pFnTryJoinSession = (UFunction*) UObject::GObjObjects()->GetIndex( 45856 );

	APComPlayerController_execTryJoinSession_Parms TryJoinSession_Parms;

	pFnTryJoinSession->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTryJoinSession, &TryJoinSession_Parms, NULL );

	pFnTryJoinSession->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.MCTSSetSessionId
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  PlatformSpecificInfo           ( CPF_Parm )

void APComPlayerController::MCTSSetSessionId ( unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnMCTSSetSessionId = NULL;

	if ( ! pFnMCTSSetSessionId )
		pFnMCTSSetSessionId = (UFunction*) UObject::GObjObjects()->GetIndex( 45854 );

	APComPlayerController_execMCTSSetSessionId_Parms MCTSSetSessionId_Parms;
	memcpy ( &MCTSSetSessionId_Parms.PlatformSpecificInfo, &PlatformSpecificInfo, 0x50 );

	pFnMCTSSetSessionId->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMCTSSetSessionId, &MCTSSetSessionId_Parms, NULL );

	pFnMCTSSetSessionId->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.IsInCustomMatch
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool APComPlayerController::IsInCustomMatch ( )
{
	static UFunction* pFnIsInCustomMatch = NULL;

	if ( ! pFnIsInCustomMatch )
		pFnIsInCustomMatch = (UFunction*) UObject::GObjObjects()->GetIndex( 45852 );

	APComPlayerController_execIsInCustomMatch_Parms IsInCustomMatch_Parms;

	pFnIsInCustomMatch->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsInCustomMatch, &IsInCustomMatch_Parms, NULL );

	pFnIsInCustomMatch->FunctionFlags |= 0x400;

	return IsInCustomMatch_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerController.SendSessionEnd
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void APComPlayerController::SendSessionEnd ( )
{
	static UFunction* pFnSendSessionEnd = NULL;

	if ( ! pFnSendSessionEnd )
		pFnSendSessionEnd = (UFunction*) UObject::GObjObjects()->GetIndex( 45851 );

	APComPlayerController_execSendSessionEnd_Parms SendSessionEnd_Parms;

	pFnSendSessionEnd->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendSessionEnd, &SendSessionEnd_Parms, NULL );

	pFnSendSessionEnd->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.SendSessionStart
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            GameModeId                     ( CPF_Parm )

void APComPlayerController::SendSessionStart ( int GameModeId )
{
	static UFunction* pFnSendSessionStart = NULL;

	if ( ! pFnSendSessionStart )
		pFnSendSessionStart = (UFunction*) UObject::GObjObjects()->GetIndex( 45849 );

	APComPlayerController_execSendSessionStart_Parms SendSessionStart_Parms;
	SendSessionStart_Parms.GameModeId = GameModeId;

	pFnSendSessionStart->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendSessionStart, &SendSessionStart_Parms, NULL );

	pFnSendSessionStart->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.OnRemoteTalkerStatusChange
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FUniqueNetId            RemoteNetId                    ( CPF_Parm )
// unsigned long                  bIsTalking                     ( CPF_Parm )

void APComPlayerController::OnRemoteTalkerStatusChange ( struct FUniqueNetId RemoteNetId, unsigned long bIsTalking )
{
	static UFunction* pFnOnRemoteTalkerStatusChange = NULL;

	if ( ! pFnOnRemoteTalkerStatusChange )
		pFnOnRemoteTalkerStatusChange = (UFunction*) UObject::GObjObjects()->GetIndex( 45846 );

	APComPlayerController_execOnRemoteTalkerStatusChange_Parms OnRemoteTalkerStatusChange_Parms;
	memcpy ( &OnRemoteTalkerStatusChange_Parms.RemoteNetId, &RemoteNetId, 0x8 );
	OnRemoteTalkerStatusChange_Parms.bIsTalking = bIsTalking;

	pFnOnRemoteTalkerStatusChange->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnRemoteTalkerStatusChange, &OnRemoteTalkerStatusChange_Parms, NULL );

	pFnOnRemoteTalkerStatusChange->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.OnCurrentUserChanged
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 CurrentUser                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 LoggedInUser                   ( CPF_Parm | CPF_NeedCtorLink )

void APComPlayerController::OnCurrentUserChanged ( unsigned char LocalUserNum, struct FString CurrentUser, struct FString LoggedInUser )
{
	static UFunction* pFnOnCurrentUserChanged = NULL;

	if ( ! pFnOnCurrentUserChanged )
		pFnOnCurrentUserChanged = (UFunction*) UObject::GObjObjects()->GetIndex( 45842 );

	APComPlayerController_execOnCurrentUserChanged_Parms OnCurrentUserChanged_Parms;
	OnCurrentUserChanged_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OnCurrentUserChanged_Parms.CurrentUser, &CurrentUser, 0x10 );
	memcpy ( &OnCurrentUserChanged_Parms.LoggedInUser, &LoggedInUser, 0x10 );

	pFnOnCurrentUserChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnCurrentUserChanged, &OnCurrentUserChanged_Parms, NULL );

	pFnOnCurrentUserChanged->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.OnConnectionStatusChange
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ConnectionStatus               ( CPF_Parm )

void APComPlayerController::OnConnectionStatusChange ( unsigned char ConnectionStatus )
{
	static UFunction* pFnOnConnectionStatusChange = NULL;

	if ( ! pFnOnConnectionStatusChange )
		pFnOnConnectionStatusChange = (UFunction*) UObject::GObjObjects()->GetIndex( 45840 );

	APComPlayerController_execOnConnectionStatusChange_Parms OnConnectionStatusChange_Parms;
	OnConnectionStatusChange_Parms.ConnectionStatus = ConnectionStatus;

	pFnOnConnectionStatusChange->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnConnectionStatusChange, &OnConnectionStatusChange_Parms, NULL );

	pFnOnConnectionStatusChange->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.OnLoginStatusChange
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  NewStatus                      ( CPF_Parm )
// struct FUniqueNetId            NewId                          ( CPF_Parm )

void APComPlayerController::OnLoginStatusChange ( unsigned char NewStatus, struct FUniqueNetId NewId )
{
	static UFunction* pFnOnLoginStatusChange = NULL;

	if ( ! pFnOnLoginStatusChange )
		pFnOnLoginStatusChange = (UFunction*) UObject::GObjObjects()->GetIndex( 45837 );

	APComPlayerController_execOnLoginStatusChange_Parms OnLoginStatusChange_Parms;
	OnLoginStatusChange_Parms.NewStatus = NewStatus;
	memcpy ( &OnLoginStatusChange_Parms.NewId, &NewId, 0x8 );

	pFnOnLoginStatusChange->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnLoginStatusChange, &OnLoginStatusChange_Parms, NULL );

	pFnOnLoginStatusChange->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.OnMarketplaceItemPurchased
// [0x00020102] 
// Parameters infos:

void APComPlayerController::OnMarketplaceItemPurchased ( )
{
	static UFunction* pFnOnMarketplaceItemPurchased = NULL;

	if ( ! pFnOnMarketplaceItemPurchased )
		pFnOnMarketplaceItemPurchased = (UFunction*) UObject::GObjObjects()->GetIndex( 45836 );

	APComPlayerController_execOnMarketplaceItemPurchased_Parms OnMarketplaceItemPurchased_Parms;

	this->ProcessEvent ( pFnOnMarketplaceItemPurchased, &OnMarketplaceItemPurchased_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.GetPlayerDLCLicenses
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< struct FOnlineContent > ContentList                    ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char APComPlayerController::eventGetPlayerDLCLicenses ( TArray< struct FOnlineContent >* ContentList )
{
	static UFunction* pFnGetPlayerDLCLicenses = NULL;

	if ( ! pFnGetPlayerDLCLicenses )
		pFnGetPlayerDLCLicenses = (UFunction*) UObject::GObjObjects()->GetIndex( 45832 );

	APComPlayerController_eventGetPlayerDLCLicenses_Parms GetPlayerDLCLicenses_Parms;

	this->ProcessEvent ( pFnGetPlayerDLCLicenses, &GetPlayerDLCLicenses_Parms, NULL );

	if ( ContentList )
		memcpy ( ContentList, &GetPlayerDLCLicenses_Parms.ContentList, 0x10 );

	return GetPlayerDLCLicenses_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerController.OnReadPlayerMarketplaceInventoryComplete
// [0x00020002] 
// Parameters infos:

void APComPlayerController::OnReadPlayerMarketplaceInventoryComplete ( )
{
	static UFunction* pFnOnReadPlayerMarketplaceInventoryComplete = NULL;

	if ( ! pFnOnReadPlayerMarketplaceInventoryComplete )
		pFnOnReadPlayerMarketplaceInventoryComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 45829 );

	APComPlayerController_execOnReadPlayerMarketplaceInventoryComplete_Parms OnReadPlayerMarketplaceInventoryComplete_Parms;

	this->ProcessEvent ( pFnOnReadPlayerMarketplaceInventoryComplete, &OnReadPlayerMarketplaceInventoryComplete_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.PlayerReceivedURLTokenAndSignatureForPortalInventory
// [0x00020002] 
// Parameters infos:
// unsigned long                  bSuccess                       ( CPF_Parm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 URL                            ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Token                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 AuthToken                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Signature                      ( CPF_Parm | CPF_NeedCtorLink )

void APComPlayerController::PlayerReceivedURLTokenAndSignatureForPortalInventory ( unsigned long bSuccess, unsigned char LocalUserNum, struct FString URL, struct FString Token, struct FString AuthToken, struct FString Signature )
{
	static UFunction* pFnPlayerReceivedURLTokenAndSignatureForPortalInventory = NULL;

	if ( ! pFnPlayerReceivedURLTokenAndSignatureForPortalInventory )
		pFnPlayerReceivedURLTokenAndSignatureForPortalInventory = (UFunction*) UObject::GObjObjects()->GetIndex( 45822 );

	APComPlayerController_execPlayerReceivedURLTokenAndSignatureForPortalInventory_Parms PlayerReceivedURLTokenAndSignatureForPortalInventory_Parms;
	PlayerReceivedURLTokenAndSignatureForPortalInventory_Parms.bSuccess = bSuccess;
	PlayerReceivedURLTokenAndSignatureForPortalInventory_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &PlayerReceivedURLTokenAndSignatureForPortalInventory_Parms.URL, &URL, 0x10 );
	memcpy ( &PlayerReceivedURLTokenAndSignatureForPortalInventory_Parms.Token, &Token, 0x10 );
	memcpy ( &PlayerReceivedURLTokenAndSignatureForPortalInventory_Parms.AuthToken, &AuthToken, 0x10 );
	memcpy ( &PlayerReceivedURLTokenAndSignatureForPortalInventory_Parms.Signature, &Signature, 0x10 );

	this->ProcessEvent ( pFnPlayerReceivedURLTokenAndSignatureForPortalInventory, &PlayerReceivedURLTokenAndSignatureForPortalInventory_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.ProcessPortalInventoryWithAuthToken
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void APComPlayerController::eventProcessPortalInventoryWithAuthToken ( )
{
	static UFunction* pFnProcessPortalInventoryWithAuthToken = NULL;

	if ( ! pFnProcessPortalInventoryWithAuthToken )
		pFnProcessPortalInventoryWithAuthToken = (UFunction*) UObject::GObjObjects()->GetIndex( 45821 );

	APComPlayerController_eventProcessPortalInventoryWithAuthToken_Parms ProcessPortalInventoryWithAuthToken_Parms;

	this->ProcessEvent ( pFnProcessPortalInventoryWithAuthToken, &ProcessPortalInventoryWithAuthToken_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.DumpStoreCatalog
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// unsigned char                  MediaType                      ( CPF_Parm )

void APComPlayerController::DumpStoreCatalog ( unsigned char MediaType )
{
	static UFunction* pFnDumpStoreCatalog = NULL;

	if ( ! pFnDumpStoreCatalog )
		pFnDumpStoreCatalog = (UFunction*) UObject::GObjObjects()->GetIndex( 45814 );

	APComPlayerController_execDumpStoreCatalog_Parms DumpStoreCatalog_Parms;
	DumpStoreCatalog_Parms.MediaType = MediaType;

	this->ProcessEvent ( pFnDumpStoreCatalog, &DumpStoreCatalog_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.DumpConumables
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void APComPlayerController::DumpConumables ( )
{
	static UFunction* pFnDumpConumables = NULL;

	if ( ! pFnDumpConumables )
		pFnDumpConumables = (UFunction*) UObject::GObjObjects()->GetIndex( 45813 );

	APComPlayerController_execDumpConumables_Parms DumpConumables_Parms;

	this->ProcessEvent ( pFnDumpConumables, &DumpConumables_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.DumpDurables
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void APComPlayerController::DumpDurables ( )
{
	static UFunction* pFnDumpDurables = NULL;

	if ( ! pFnDumpDurables )
		pFnDumpDurables = (UFunction*) UObject::GObjObjects()->GetIndex( 45812 );

	APComPlayerController_execDumpDurables_Parms DumpDurables_Parms;

	this->ProcessEvent ( pFnDumpDurables, &DumpDurables_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.DumpGameProducts
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void APComPlayerController::DumpGameProducts ( )
{
	static UFunction* pFnDumpGameProducts = NULL;

	if ( ! pFnDumpGameProducts )
		pFnDumpGameProducts = (UFunction*) UObject::GObjObjects()->GetIndex( 45811 );

	APComPlayerController_execDumpGameProducts_Parms DumpGameProducts_Parms;

	this->ProcessEvent ( pFnDumpGameProducts, &DumpGameProducts_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.OnReadAdditionalProductDetailsComplete
// [0x00020002] 
// Parameters infos:
// unsigned char                  MediaType                      ( CPF_Parm )

void APComPlayerController::OnReadAdditionalProductDetailsComplete ( unsigned char MediaType )
{
	static UFunction* pFnOnReadAdditionalProductDetailsComplete = NULL;

	if ( ! pFnOnReadAdditionalProductDetailsComplete )
		pFnOnReadAdditionalProductDetailsComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 45808 );

	APComPlayerController_execOnReadAdditionalProductDetailsComplete_Parms OnReadAdditionalProductDetailsComplete_Parms;
	OnReadAdditionalProductDetailsComplete_Parms.MediaType = MediaType;

	this->ProcessEvent ( pFnOnReadAdditionalProductDetailsComplete, &OnReadAdditionalProductDetailsComplete_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.OnReadAvailableProductsComplete
// [0x00020002] 
// Parameters infos:
// unsigned char                  MediaType                      ( CPF_Parm )

void APComPlayerController::OnReadAvailableProductsComplete ( unsigned char MediaType )
{
	static UFunction* pFnOnReadAvailableProductsComplete = NULL;

	if ( ! pFnOnReadAvailableProductsComplete )
		pFnOnReadAvailableProductsComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 45806 );

	APComPlayerController_execOnReadAvailableProductsComplete_Parms OnReadAvailableProductsComplete_Parms;
	OnReadAvailableProductsComplete_Parms.MediaType = MediaType;

	this->ProcessEvent ( pFnOnReadAvailableProductsComplete, &OnReadAvailableProductsComplete_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.RefreshStoreData
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void APComPlayerController::eventRefreshStoreData ( )
{
	static UFunction* pFnRefreshStoreData = NULL;

	if ( ! pFnRefreshStoreData )
		pFnRefreshStoreData = (UFunction*) UObject::GObjObjects()->GetIndex( 45804 );

	APComPlayerController_eventRefreshStoreData_Parms RefreshStoreData_Parms;

	this->ProcessEvent ( pFnRefreshStoreData, &RefreshStoreData_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.IsLoggedIntoOSS
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool APComPlayerController::eventIsLoggedIntoOSS ( )
{
	static UFunction* pFnIsLoggedIntoOSS = NULL;

	if ( ! pFnIsLoggedIntoOSS )
		pFnIsLoggedIntoOSS = (UFunction*) UObject::GObjObjects()->GetIndex( 45802 );

	APComPlayerController_eventIsLoggedIntoOSS_Parms IsLoggedIntoOSS_Parms;

	this->ProcessEvent ( pFnIsLoggedIntoOSS, &IsLoggedIntoOSS_Parms, NULL );

	return IsLoggedIntoOSS_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerController.ShowConsoleLoginUI
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerId                   ( CPF_Parm )
// unsigned long                  bForceLoginAfter               ( CPF_OptionalParm | CPF_Parm )

bool APComPlayerController::eventShowConsoleLoginUI ( int ControllerId, unsigned long bForceLoginAfter )
{
	static UFunction* pFnShowConsoleLoginUI = NULL;

	if ( ! pFnShowConsoleLoginUI )
		pFnShowConsoleLoginUI = (UFunction*) UObject::GObjObjects()->GetIndex( 45798 );

	APComPlayerController_eventShowConsoleLoginUI_Parms ShowConsoleLoginUI_Parms;
	ShowConsoleLoginUI_Parms.ControllerId = ControllerId;
	ShowConsoleLoginUI_Parms.bForceLoginAfter = bForceLoginAfter;

	this->ProcessEvent ( pFnShowConsoleLoginUI, &ShowConsoleLoginUI_Parms, NULL );

	return ShowConsoleLoginUI_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerController.CacheLoggedInGamepad
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void APComPlayerController::eventCacheLoggedInGamepad ( )
{
	static UFunction* pFnCacheLoggedInGamepad = NULL;

	if ( ! pFnCacheLoggedInGamepad )
		pFnCacheLoggedInGamepad = (UFunction*) UObject::GObjObjects()->GetIndex( 45797 );

	APComPlayerController_eventCacheLoggedInGamepad_Parms CacheLoggedInGamepad_Parms;

	this->ProcessEvent ( pFnCacheLoggedInGamepad, &CacheLoggedInGamepad_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.PlayerReceivedTokenForLogin
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bSuccess                       ( CPF_Parm )

void APComPlayerController::PlayerReceivedTokenForLogin ( unsigned long bSuccess )
{
	static UFunction* pFnPlayerReceivedTokenForLogin = NULL;

	if ( ! pFnPlayerReceivedTokenForLogin )
		pFnPlayerReceivedTokenForLogin = (UFunction*) UObject::GObjObjects()->GetIndex( 45795 );

	APComPlayerController_execPlayerReceivedTokenForLogin_Parms PlayerReceivedTokenForLogin_Parms;
	PlayerReceivedTokenForLogin_Parms.bSuccess = bSuccess;

	pFnPlayerReceivedTokenForLogin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayerReceivedTokenForLogin, &PlayerReceivedTokenForLogin_Parms, NULL );

	pFnPlayerReceivedTokenForLogin->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.PlayerReceivedURLTokenAndSignatureForLogin
// [0x00020002] 
// Parameters infos:
// unsigned long                  bSuccess                       ( CPF_Parm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 URL                            ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Token                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 AuthToken                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Signature                      ( CPF_Parm | CPF_NeedCtorLink )

void APComPlayerController::PlayerReceivedURLTokenAndSignatureForLogin ( unsigned long bSuccess, unsigned char LocalUserNum, struct FString URL, struct FString Token, struct FString AuthToken, struct FString Signature )
{
	static UFunction* pFnPlayerReceivedURLTokenAndSignatureForLogin = NULL;

	if ( ! pFnPlayerReceivedURLTokenAndSignatureForLogin )
		pFnPlayerReceivedURLTokenAndSignatureForLogin = (UFunction*) UObject::GObjObjects()->GetIndex( 45788 );

	APComPlayerController_execPlayerReceivedURLTokenAndSignatureForLogin_Parms PlayerReceivedURLTokenAndSignatureForLogin_Parms;
	PlayerReceivedURLTokenAndSignatureForLogin_Parms.bSuccess = bSuccess;
	PlayerReceivedURLTokenAndSignatureForLogin_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &PlayerReceivedURLTokenAndSignatureForLogin_Parms.URL, &URL, 0x10 );
	memcpy ( &PlayerReceivedURLTokenAndSignatureForLogin_Parms.Token, &Token, 0x10 );
	memcpy ( &PlayerReceivedURLTokenAndSignatureForLogin_Parms.AuthToken, &AuthToken, 0x10 );
	memcpy ( &PlayerReceivedURLTokenAndSignatureForLogin_Parms.Signature, &Signature, 0x10 );

	this->ProcessEvent ( pFnPlayerReceivedURLTokenAndSignatureForLogin, &PlayerReceivedURLTokenAndSignatureForLogin_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.GetOSSTokenAndSignatureForLogin
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void APComPlayerController::eventGetOSSTokenAndSignatureForLogin ( )
{
	static UFunction* pFnGetOSSTokenAndSignatureForLogin = NULL;

	if ( ! pFnGetOSSTokenAndSignatureForLogin )
		pFnGetOSSTokenAndSignatureForLogin = (UFunction*) UObject::GObjObjects()->GetIndex( 45786 );

	APComPlayerController_eventGetOSSTokenAndSignatureForLogin_Parms GetOSSTokenAndSignatureForLogin_Parms;

	this->ProcessEvent ( pFnGetOSSTokenAndSignatureForLogin, &GetOSSTokenAndSignatureForLogin_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.GetTokenURL
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString APComPlayerController::GetTokenURL ( )
{
	static UFunction* pFnGetTokenURL = NULL;

	if ( ! pFnGetTokenURL )
		pFnGetTokenURL = (UFunction*) UObject::GObjObjects()->GetIndex( 45784 );

	APComPlayerController_execGetTokenURL_Parms GetTokenURL_Parms;

	pFnGetTokenURL->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTokenURL, &GetTokenURL_Parms, NULL );

	pFnGetTokenURL->FunctionFlags |= 0x400;

	return GetTokenURL_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerController.BeginLogin
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void APComPlayerController::BeginLogin ( )
{
	static UFunction* pFnBeginLogin = NULL;

	if ( ! pFnBeginLogin )
		pFnBeginLogin = (UFunction*) UObject::GObjObjects()->GetIndex( 45783 );

	APComPlayerController_execBeginLogin_Parms BeginLogin_Parms;

	pFnBeginLogin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBeginLogin, &BeginLogin_Parms, NULL );

	pFnBeginLogin->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.PlayerRetrievedOSSInventory
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// TArray< struct FMarketplaceInventoryItem > Items                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void APComPlayerController::PlayerRetrievedOSSInventory ( TArray< struct FMarketplaceInventoryItem >* Items )
{
	static UFunction* pFnPlayerRetrievedOSSInventory = NULL;

	if ( ! pFnPlayerRetrievedOSSInventory )
		pFnPlayerRetrievedOSSInventory = (UFunction*) UObject::GObjObjects()->GetIndex( 45780 );

	APComPlayerController_execPlayerRetrievedOSSInventory_Parms PlayerRetrievedOSSInventory_Parms;

	pFnPlayerRetrievedOSSInventory->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayerRetrievedOSSInventory, &PlayerRetrievedOSSInventory_Parms, NULL );

	pFnPlayerRetrievedOSSInventory->FunctionFlags |= 0x400;

	if ( Items )
		memcpy ( Items, &PlayerRetrievedOSSInventory_Parms.Items, 0x10 );
};

// Function PlatformCommon.PComPlayerController.SetFakeServerTime
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            Month                          ( CPF_Parm )
// int                            Day                            ( CPF_Parm )
// int                            Year                           ( CPF_Parm )

void APComPlayerController::SetFakeServerTime ( int Month, int Day, int Year )
{
	static UFunction* pFnSetFakeServerTime = NULL;

	if ( ! pFnSetFakeServerTime )
		pFnSetFakeServerTime = (UFunction*) UObject::GObjObjects()->GetIndex( 45776 );

	APComPlayerController_execSetFakeServerTime_Parms SetFakeServerTime_Parms;
	SetFakeServerTime_Parms.Month = Month;
	SetFakeServerTime_Parms.Day = Day;
	SetFakeServerTime_Parms.Year = Year;

	pFnSetFakeServerTime->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFakeServerTime, &SetFakeServerTime_Parms, NULL );

	pFnSetFakeServerTime->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.ValidateCreatedPartySession
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void APComPlayerController::ValidateCreatedPartySession ( )
{
	static UFunction* pFnValidateCreatedPartySession = NULL;

	if ( ! pFnValidateCreatedPartySession )
		pFnValidateCreatedPartySession = (UFunction*) UObject::GObjObjects()->GetIndex( 45775 );

	APComPlayerController_execValidateCreatedPartySession_Parms ValidateCreatedPartySession_Parms;

	pFnValidateCreatedPartySession->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnValidateCreatedPartySession, &ValidateCreatedPartySession_Parms, NULL );

	pFnValidateCreatedPartySession->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.UpdateClientAuthToken
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Token                          ( CPF_Parm | CPF_NeedCtorLink )

void APComPlayerController::UpdateClientAuthToken ( struct FString Token )
{
	static UFunction* pFnUpdateClientAuthToken = NULL;

	if ( ! pFnUpdateClientAuthToken )
		pFnUpdateClientAuthToken = (UFunction*) UObject::GObjObjects()->GetIndex( 45773 );

	APComPlayerController_execUpdateClientAuthToken_Parms UpdateClientAuthToken_Parms;
	memcpy ( &UpdateClientAuthToken_Parms.Token, &Token, 0x10 );

	pFnUpdateClientAuthToken->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateClientAuthToken, &UpdateClientAuthToken_Parms, NULL );

	pFnUpdateClientAuthToken->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.UpdateClientToken
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Token                          ( CPF_Parm | CPF_NeedCtorLink )

void APComPlayerController::UpdateClientToken ( struct FString Token )
{
	static UFunction* pFnUpdateClientToken = NULL;

	if ( ! pFnUpdateClientToken )
		pFnUpdateClientToken = (UFunction*) UObject::GObjObjects()->GetIndex( 45771 );

	APComPlayerController_execUpdateClientToken_Parms UpdateClientToken_Parms;
	memcpy ( &UpdateClientToken_Parms.Token, &Token, 0x10 );

	pFnUpdateClientToken->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateClientToken, &UpdateClientToken_Parms, NULL );

	pFnUpdateClientToken->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.ChallengeJoin
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nMatchId                       ( CPF_Parm )
// struct FString                 fsName                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 fsPassword                     ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void APComPlayerController::ChallengeJoin ( int nMatchId, struct FString fsName, struct FString fsPassword )
{
	static UFunction* pFnChallengeJoin = NULL;

	if ( ! pFnChallengeJoin )
		pFnChallengeJoin = (UFunction*) UObject::GObjObjects()->GetIndex( 45767 );

	APComPlayerController_execChallengeJoin_Parms ChallengeJoin_Parms;
	ChallengeJoin_Parms.nMatchId = nMatchId;
	memcpy ( &ChallengeJoin_Parms.fsName, &fsName, 0x10 );
	memcpy ( &ChallengeJoin_Parms.fsPassword, &fsPassword, 0x10 );

	pFnChallengeJoin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnChallengeJoin, &ChallengeJoin_Parms, NULL );

	pFnChallengeJoin->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.ChallengeCreate
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nQueue                         ( CPF_Parm )
// struct FString                 fsName                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 fsPassword                     ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void APComPlayerController::ChallengeCreate ( int nQueue, struct FString fsName, struct FString fsPassword )
{
	static UFunction* pFnChallengeCreate = NULL;

	if ( ! pFnChallengeCreate )
		pFnChallengeCreate = (UFunction*) UObject::GObjObjects()->GetIndex( 45763 );

	APComPlayerController_execChallengeCreate_Parms ChallengeCreate_Parms;
	ChallengeCreate_Parms.nQueue = nQueue;
	memcpy ( &ChallengeCreate_Parms.fsName, &fsName, 0x10 );
	memcpy ( &ChallengeCreate_Parms.fsPassword, &fsPassword, 0x10 );

	pFnChallengeCreate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnChallengeCreate, &ChallengeCreate_Parms, NULL );

	pFnChallengeCreate->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.UpdateDatacenterPing
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void APComPlayerController::UpdateDatacenterPing ( )
{
	static UFunction* pFnUpdateDatacenterPing = NULL;

	if ( ! pFnUpdateDatacenterPing )
		pFnUpdateDatacenterPing = (UFunction*) UObject::GObjObjects()->GetIndex( 45762 );

	APComPlayerController_execUpdateDatacenterPing_Parms UpdateDatacenterPing_Parms;

	pFnUpdateDatacenterPing->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateDatacenterPing, &UpdateDatacenterPing_Parms, NULL );

	pFnUpdateDatacenterPing->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerController.TestVideoPlayer
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void APComPlayerController::TestVideoPlayer ( )
{
	static UFunction* pFnTestVideoPlayer = NULL;

	if ( ! pFnTestVideoPlayer )
		pFnTestVideoPlayer = (UFunction*) UObject::GObjObjects()->GetIndex( 45761 );

	APComPlayerController_execTestVideoPlayer_Parms TestVideoPlayer_Parms;

	this->ProcessEvent ( pFnTestVideoPlayer, &TestVideoPlayer_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.AddCheats
// [0x00020102] 
// Parameters infos:

void APComPlayerController::AddCheats ( )
{
	static UFunction* pFnAddCheats = NULL;

	if ( ! pFnAddCheats )
		pFnAddCheats = (UFunction*) UObject::GObjObjects()->GetIndex( 45760 );

	APComPlayerController_execAddCheats_Parms AddCheats_Parms;

	this->ProcessEvent ( pFnAddCheats, &AddCheats_Parms, NULL );
};

// Function PlatformCommon.PComPlayerController.ClientAddCheats
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void APComPlayerController::ClientAddCheats ( )
{
	static UFunction* pFnClientAddCheats = NULL;

	if ( ! pFnClientAddCheats )
		pFnClientAddCheats = (UFunction*) UObject::GObjObjects()->GetIndex( 45759 );

	APComPlayerController_execClientAddCheats_Parms ClientAddCheats_Parms;

	pFnClientAddCheats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClientAddCheats, &ClientAddCheats_Parms, NULL );

	pFnClientAddCheats->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerInput.Jump
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UPComPlayerInput::Jump ( )
{
	static UFunction* pFnJump = NULL;

	if ( ! pFnJump )
		pFnJump = (UFunction*) UObject::GObjObjects()->GetIndex( 46245 );

	UPComPlayerInput_execJump_Parms Jump_Parms;

	this->ProcessEvent ( pFnJump, &Jump_Parms, NULL );
};

// Function PlatformCommon.PComPlayerInput.UnbindCommand
// [0x00824202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 Command                        ( CPF_Parm | CPF_NeedCtorLink )
// int                            nAlternate                     ( CPF_OptionalParm | CPF_Parm )

void UPComPlayerInput::UnbindCommand ( struct FString Command, int nAlternate )
{
	static UFunction* pFnUnbindCommand = NULL;

	if ( ! pFnUnbindCommand )
		pFnUnbindCommand = (UFunction*) UObject::GObjObjects()->GetIndex( 46241 );

	UPComPlayerInput_execUnbindCommand_Parms UnbindCommand_Parms;
	memcpy ( &UnbindCommand_Parms.Command, &Command, 0x10 );
	UnbindCommand_Parms.nAlternate = nAlternate;

	this->ProcessEvent ( pFnUnbindCommand, &UnbindCommand_Parms, NULL );
};

// Function PlatformCommon.PComPlayerInput.SetBindExtended
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ExtendedBinding                ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Command                        ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bStoreToServer                 ( CPF_Parm )

void UPComPlayerInput::SetBindExtended ( struct FString ExtendedBinding, struct FString Command, unsigned long bStoreToServer )
{
	static UFunction* pFnSetBindExtended = NULL;

	if ( ! pFnSetBindExtended )
		pFnSetBindExtended = (UFunction*) UObject::GObjObjects()->GetIndex( 46237 );

	UPComPlayerInput_execSetBindExtended_Parms SetBindExtended_Parms;
	memcpy ( &SetBindExtended_Parms.ExtendedBinding, &ExtendedBinding, 0x10 );
	memcpy ( &SetBindExtended_Parms.Command, &Command, 0x10 );
	SetBindExtended_Parms.bStoreToServer = bStoreToServer;

	pFnSetBindExtended->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetBindExtended, &SetBindExtended_Parms, NULL );

	pFnSetBindExtended->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerInput.UnbindCommandAllExtended
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Command                        ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bStoreToServer                 ( CPF_Parm )

void UPComPlayerInput::UnbindCommandAllExtended ( struct FString Command, unsigned long bStoreToServer )
{
	static UFunction* pFnUnbindCommandAllExtended = NULL;

	if ( ! pFnUnbindCommandAllExtended )
		pFnUnbindCommandAllExtended = (UFunction*) UObject::GObjObjects()->GetIndex( 46234 );

	UPComPlayerInput_execUnbindCommandAllExtended_Parms UnbindCommandAllExtended_Parms;
	memcpy ( &UnbindCommandAllExtended_Parms.Command, &Command, 0x10 );
	UnbindCommandAllExtended_Parms.bStoreToServer = bStoreToServer;

	pFnUnbindCommandAllExtended->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnbindCommandAllExtended, &UnbindCommandAllExtended_Parms, NULL );

	pFnUnbindCommandAllExtended->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerInput.UnbindCommandAll
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 Command                        ( CPF_Parm | CPF_NeedCtorLink )

void UPComPlayerInput::UnbindCommandAll ( struct FString Command )
{
	static UFunction* pFnUnbindCommandAll = NULL;

	if ( ! pFnUnbindCommandAll )
		pFnUnbindCommandAll = (UFunction*) UObject::GObjObjects()->GetIndex( 46232 );

	UPComPlayerInput_execUnbindCommandAll_Parms UnbindCommandAll_Parms;
	memcpy ( &UnbindCommandAll_Parms.Command, &Command, 0x10 );

	this->ProcessEvent ( pFnUnbindCommandAll, &UnbindCommandAll_Parms, NULL );
};

// Function PlatformCommon.PComPlayerInput.UnbindCommandFromServer
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FString                 Command                        ( CPF_Parm | CPF_NeedCtorLink )

void UPComPlayerInput::eventUnbindCommandFromServer ( struct FString Command )
{
	static UFunction* pFnUnbindCommandFromServer = NULL;

	if ( ! pFnUnbindCommandFromServer )
		pFnUnbindCommandFromServer = (UFunction*) UObject::GObjObjects()->GetIndex( 46230 );

	UPComPlayerInput_eventUnbindCommandFromServer_Parms UnbindCommandFromServer_Parms;
	memcpy ( &UnbindCommandFromServer_Parms.Command, &Command, 0x10 );

	this->ProcessEvent ( pFnUnbindCommandFromServer, &UnbindCommandFromServer_Parms, NULL );
};

// Function PlatformCommon.PComPlayerInput.UnbindKey
// [0x00420202] ( FUNC_Exec )
// Parameters infos:
// struct FName                   BindName                       ( CPF_Const | CPF_Parm | CPF_OutParm )

void UPComPlayerInput::UnbindKey ( struct FName* BindName )
{
	static UFunction* pFnUnbindKey = NULL;

	if ( ! pFnUnbindKey )
		pFnUnbindKey = (UFunction*) UObject::GObjObjects()->GetIndex( 46228 );

	UPComPlayerInput_execUnbindKey_Parms UnbindKey_Parms;

	this->ProcessEvent ( pFnUnbindKey, &UnbindKey_Parms, NULL );

	if ( BindName )
		memcpy ( BindName, &UnbindKey_Parms.BindName, 0x8 );
};

// Function PlatformCommon.PComPlayerInput.SetCommandBind
// [0x00824002] 
// Parameters infos:
// struct FString                 Command                        ( CPF_Parm | CPF_NeedCtorLink )
// int                            nAlternate                     ( CPF_Parm )
// struct FString                 ExtendedBinding                ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bStoreToServer                 ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bStoreToINI                    ( CPF_OptionalParm | CPF_Parm )

void UPComPlayerInput::SetCommandBind ( struct FString Command, int nAlternate, struct FString ExtendedBinding, unsigned long bStoreToServer, unsigned long bStoreToINI )
{
	static UFunction* pFnSetCommandBind = NULL;

	if ( ! pFnSetCommandBind )
		pFnSetCommandBind = (UFunction*) UObject::GObjObjects()->GetIndex( 46217 );

	UPComPlayerInput_execSetCommandBind_Parms SetCommandBind_Parms;
	memcpy ( &SetCommandBind_Parms.Command, &Command, 0x10 );
	SetCommandBind_Parms.nAlternate = nAlternate;
	memcpy ( &SetCommandBind_Parms.ExtendedBinding, &ExtendedBinding, 0x10 );
	SetCommandBind_Parms.bStoreToServer = bStoreToServer;
	SetCommandBind_Parms.bStoreToINI = bStoreToINI;

	this->ProcessEvent ( pFnSetCommandBind, &SetCommandBind_Parms, NULL );
};

// Function PlatformCommon.PComPlayerInput.SetCommandBindFromServer
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FString                 Command                        ( CPF_Parm | CPF_NeedCtorLink )
// int                            nAlternate                     ( CPF_Parm )
// struct FString                 ExtendedBinding                ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )

void UPComPlayerInput::eventSetCommandBindFromServer ( struct FString Command, int nAlternate, struct FString ExtendedBinding )
{
	static UFunction* pFnSetCommandBindFromServer = NULL;

	if ( ! pFnSetCommandBindFromServer )
		pFnSetCommandBindFromServer = (UFunction*) UObject::GObjObjects()->GetIndex( 46213 );

	UPComPlayerInput_eventSetCommandBindFromServer_Parms SetCommandBindFromServer_Parms;
	memcpy ( &SetCommandBindFromServer_Parms.Command, &Command, 0x10 );
	SetCommandBindFromServer_Parms.nAlternate = nAlternate;
	memcpy ( &SetCommandBindFromServer_Parms.ExtendedBinding, &ExtendedBinding, 0x10 );

	this->ProcessEvent ( pFnSetCommandBindFromServer, &SetCommandBindFromServer_Parms, NULL );
};

// Function PlatformCommon.PComPlayerInput.SetBindFromServer
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FString                 BindName                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Command                        ( CPF_Parm | CPF_NeedCtorLink )

void UPComPlayerInput::eventSetBindFromServer ( struct FString BindName, struct FString Command )
{
	static UFunction* pFnSetBindFromServer = NULL;

	if ( ! pFnSetBindFromServer )
		pFnSetBindFromServer = (UFunction*) UObject::GObjObjects()->GetIndex( 46210 );

	UPComPlayerInput_eventSetBindFromServer_Parms SetBindFromServer_Parms;
	memcpy ( &SetBindFromServer_Parms.BindName, &BindName, 0x10 );
	memcpy ( &SetBindFromServer_Parms.Command, &Command, 0x10 );

	this->ProcessEvent ( pFnSetBindFromServer, &SetBindFromServer_Parms, NULL );
};

// Function PlatformCommon.PComPlayerInput.SetBind
// [0x00420202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 Command                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FName                   BindName                       ( CPF_Const | CPF_Parm | CPF_OutParm )

void UPComPlayerInput::SetBind ( struct FString Command, struct FName* BindName )
{
	static UFunction* pFnSetBind = NULL;

	if ( ! pFnSetBind )
		pFnSetBind = (UFunction*) UObject::GObjObjects()->GetIndex( 46207 );

	UPComPlayerInput_execSetBind_Parms SetBind_Parms;
	memcpy ( &SetBind_Parms.Command, &Command, 0x10 );

	this->ProcessEvent ( pFnSetBind, &SetBind_Parms, NULL );

	if ( BindName )
		memcpy ( BindName, &SetBind_Parms.BindName, 0x8 );
};

// Function PlatformCommon.PComPlayerInput.GetDisplayLookSensitivityY
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UPComPlayerInput::eventGetDisplayLookSensitivityY ( )
{
	static UFunction* pFnGetDisplayLookSensitivityY = NULL;

	if ( ! pFnGetDisplayLookSensitivityY )
		pFnGetDisplayLookSensitivityY = (UFunction*) UObject::GObjObjects()->GetIndex( 46204 );

	UPComPlayerInput_eventGetDisplayLookSensitivityY_Parms GetDisplayLookSensitivityY_Parms;

	this->ProcessEvent ( pFnGetDisplayLookSensitivityY, &GetDisplayLookSensitivityY_Parms, NULL );

	return GetDisplayLookSensitivityY_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerInput.GetDisplayLookSensitivity
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UPComPlayerInput::eventGetDisplayLookSensitivity ( )
{
	static UFunction* pFnGetDisplayLookSensitivity = NULL;

	if ( ! pFnGetDisplayLookSensitivity )
		pFnGetDisplayLookSensitivity = (UFunction*) UObject::GObjObjects()->GetIndex( 46201 );

	UPComPlayerInput_eventGetDisplayLookSensitivity_Parms GetDisplayLookSensitivity_Parms;

	this->ProcessEvent ( pFnGetDisplayLookSensitivity, &GetDisplayLookSensitivity_Parms, NULL );

	return GetDisplayLookSensitivity_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerInput.SetAimAcceleration
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// float                          fLookAccel                     ( CPF_Parm )

void UPComPlayerInput::SetAimAcceleration ( float fLookAccel )
{
	static UFunction* pFnSetAimAcceleration = NULL;

	if ( ! pFnSetAimAcceleration )
		pFnSetAimAcceleration = (UFunction*) UObject::GObjObjects()->GetIndex( 46199 );

	UPComPlayerInput_execSetAimAcceleration_Parms SetAimAcceleration_Parms;
	SetAimAcceleration_Parms.fLookAccel = fLookAccel;

	this->ProcessEvent ( pFnSetAimAcceleration, &SetAimAcceleration_Parms, NULL );
};

// Function PlatformCommon.PComPlayerInput.SetLookSensitivity
// [0x00024202] ( FUNC_Exec )
// Parameters infos:
// float                          fSensitivity                   ( CPF_Parm )
// float                          fSensitivityY                  ( CPF_OptionalParm | CPF_Parm )

void UPComPlayerInput::SetLookSensitivity ( float fSensitivity, float fSensitivityY )
{
	static UFunction* pFnSetLookSensitivity = NULL;

	if ( ! pFnSetLookSensitivity )
		pFnSetLookSensitivity = (UFunction*) UObject::GObjObjects()->GetIndex( 46195 );

	UPComPlayerInput_execSetLookSensitivity_Parms SetLookSensitivity_Parms;
	SetLookSensitivity_Parms.fSensitivity = fSensitivity;
	SetLookSensitivity_Parms.fSensitivityY = fSensitivityY;

	this->ProcessEvent ( pFnSetLookSensitivity, &SetLookSensitivity_Parms, NULL );
};

// Function PlatformCommon.PComPlayerInput.SetMouseInput
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// unsigned long                  bInvert                        ( CPF_Parm )
// unsigned long                  bSmooth                        ( CPF_Parm )
// float                          fSensitivity                   ( CPF_Parm )

void UPComPlayerInput::SetMouseInput ( unsigned long bInvert, unsigned long bSmooth, float fSensitivity )
{
	static UFunction* pFnSetMouseInput = NULL;

	if ( ! pFnSetMouseInput )
		pFnSetMouseInput = (UFunction*) UObject::GObjObjects()->GetIndex( 46191 );

	UPComPlayerInput_execSetMouseInput_Parms SetMouseInput_Parms;
	SetMouseInput_Parms.bInvert = bInvert;
	SetMouseInput_Parms.bSmooth = bSmooth;
	SetMouseInput_Parms.fSensitivity = fSensitivity;

	this->ProcessEvent ( pFnSetMouseInput, &SetMouseInput_Parms, NULL );
};

// Function PlatformCommon.PComPlayerInput.SetDirty
// [0x00020102] 
// Parameters infos:

void UPComPlayerInput::SetDirty ( )
{
	static UFunction* pFnSetDirty = NULL;

	if ( ! pFnSetDirty )
		pFnSetDirty = (UFunction*) UObject::GObjObjects()->GetIndex( 46190 );

	UPComPlayerInput_execSetDirty_Parms SetDirty_Parms;

	this->ProcessEvent ( pFnSetDirty, &SetDirty_Parms, NULL );
};

// Function PlatformCommon.PComPlayerInput.ReadMouseSettings
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPComPlayerInput::ReadMouseSettings ( )
{
	static UFunction* pFnReadMouseSettings = NULL;

	if ( ! pFnReadMouseSettings )
		pFnReadMouseSettings = (UFunction*) UObject::GObjObjects()->GetIndex( 46189 );

	UPComPlayerInput_execReadMouseSettings_Parms ReadMouseSettings_Parms;

	pFnReadMouseSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadMouseSettings, &ReadMouseSettings_Parms, NULL );

	pFnReadMouseSettings->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerInput.StoreMouseSettings
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPComPlayerInput::StoreMouseSettings ( )
{
	static UFunction* pFnStoreMouseSettings = NULL;

	if ( ! pFnStoreMouseSettings )
		pFnStoreMouseSettings = (UFunction*) UObject::GObjObjects()->GetIndex( 46188 );

	UPComPlayerInput_execStoreMouseSettings_Parms StoreMouseSettings_Parms;

	pFnStoreMouseSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStoreMouseSettings, &StoreMouseSettings_Parms, NULL );

	pFnStoreMouseSettings->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerInput.GetKeybindWithCurrentModifiers
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// struct FKeyBind                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FName                   Key                            ( CPF_Const | CPF_Parm | CPF_OutParm )

struct FKeyBind UPComPlayerInput::GetKeybindWithCurrentModifiers ( struct FName* Key )
{
	static UFunction* pFnGetKeybindWithCurrentModifiers = NULL;

	if ( ! pFnGetKeybindWithCurrentModifiers )
		pFnGetKeybindWithCurrentModifiers = (UFunction*) UObject::GObjObjects()->GetIndex( 46185 );

	UPComPlayerInput_execGetKeybindWithCurrentModifiers_Parms GetKeybindWithCurrentModifiers_Parms;

	pFnGetKeybindWithCurrentModifiers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetKeybindWithCurrentModifiers, &GetKeybindWithCurrentModifiers_Parms, NULL );

	pFnGetKeybindWithCurrentModifiers->FunctionFlags |= 0x400;

	if ( Key )
		memcpy ( Key, &GetKeybindWithCurrentModifiers_Parms.Key, 0x8 );

	return GetKeybindWithCurrentModifiers_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerInput.GetBind
// [0x00424400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FName                   Key                            ( CPF_Const | CPF_Parm | CPF_OutParm )
// struct FKeyBind                ModifierKeyBind                ( CPF_Const | CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

struct FString UPComPlayerInput::GetBind ( struct FName* Key, struct FKeyBind* ModifierKeyBind )
{
	static UFunction* pFnGetBind = NULL;

	if ( ! pFnGetBind )
		pFnGetBind = (UFunction*) UObject::GObjObjects()->GetIndex( 46181 );

	UPComPlayerInput_execGetBind_Parms GetBind_Parms;

	pFnGetBind->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBind, &GetBind_Parms, NULL );

	pFnGetBind->FunctionFlags |= 0x400;

	if ( Key )
		memcpy ( Key, &GetBind_Parms.Key, 0x8 );

	if ( ModifierKeyBind )
		memcpy ( ModifierKeyBind, &GetBind_Parms.ModifierKeyBind, 0x1C );

	return GetBind_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerInput.KeybindToExtendedString
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FKeyBind                Bind                           ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

struct FString UPComPlayerInput::KeybindToExtendedString ( struct FKeyBind* Bind )
{
	static UFunction* pFnKeybindToExtendedString = NULL;

	if ( ! pFnKeybindToExtendedString )
		pFnKeybindToExtendedString = (UFunction*) UObject::GObjObjects()->GetIndex( 46178 );

	UPComPlayerInput_execKeybindToExtendedString_Parms KeybindToExtendedString_Parms;

	pFnKeybindToExtendedString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnKeybindToExtendedString, &KeybindToExtendedString_Parms, NULL );

	pFnKeybindToExtendedString->FunctionFlags |= 0x400;

	if ( Bind )
		memcpy ( Bind, &KeybindToExtendedString_Parms.Bind, 0x1C );

	return KeybindToExtendedString_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerInput.ExtendedStringToKeybind
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FKeyBind                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Str                            ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Cmd                            ( CPF_Parm | CPF_NeedCtorLink )

struct FKeyBind UPComPlayerInput::ExtendedStringToKeybind ( struct FString Str, struct FString Cmd )
{
	static UFunction* pFnExtendedStringToKeybind = NULL;

	if ( ! pFnExtendedStringToKeybind )
		pFnExtendedStringToKeybind = (UFunction*) UObject::GObjObjects()->GetIndex( 46174 );

	UPComPlayerInput_execExtendedStringToKeybind_Parms ExtendedStringToKeybind_Parms;
	memcpy ( &ExtendedStringToKeybind_Parms.Str, &Str, 0x10 );
	memcpy ( &ExtendedStringToKeybind_Parms.Cmd, &Cmd, 0x10 );

	pFnExtendedStringToKeybind->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnExtendedStringToKeybind, &ExtendedStringToKeybind_Parms, NULL );

	pFnExtendedStringToKeybind->FunctionFlags |= 0x400;

	return ExtendedStringToKeybind_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerInput.GetBindFromCommand
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// struct FKeyBind                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Cmd                            ( CPF_Parm | CPF_NeedCtorLink )
// int                            nAlternate                     ( CPF_OptionalParm | CPF_Parm )

struct FKeyBind UPComPlayerInput::GetBindFromCommand ( struct FString Cmd, int nAlternate )
{
	static UFunction* pFnGetBindFromCommand = NULL;

	if ( ! pFnGetBindFromCommand )
		pFnGetBindFromCommand = (UFunction*) UObject::GObjObjects()->GetIndex( 46170 );

	UPComPlayerInput_execGetBindFromCommand_Parms GetBindFromCommand_Parms;
	memcpy ( &GetBindFromCommand_Parms.Cmd, &Cmd, 0x10 );
	GetBindFromCommand_Parms.nAlternate = nAlternate;

	pFnGetBindFromCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBindFromCommand, &GetBindFromCommand_Parms, NULL );

	pFnGetBindFromCommand->FunctionFlags |= 0x400;

	return GetBindFromCommand_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerInput.GetBindExtended
// [0x00424400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Str                            ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bExactMatch                    ( CPF_OptionalParm | CPF_Parm )
// struct FKeyBind                Bind                           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

int UPComPlayerInput::GetBindExtended ( struct FString Str, unsigned long bExactMatch, struct FKeyBind* Bind )
{
	static UFunction* pFnGetBindExtended = NULL;

	if ( ! pFnGetBindExtended )
		pFnGetBindExtended = (UFunction*) UObject::GObjObjects()->GetIndex( 46165 );

	UPComPlayerInput_execGetBindExtended_Parms GetBindExtended_Parms;
	memcpy ( &GetBindExtended_Parms.Str, &Str, 0x10 );
	GetBindExtended_Parms.bExactMatch = bExactMatch;

	pFnGetBindExtended->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBindExtended, &GetBindExtended_Parms, NULL );

	pFnGetBindExtended->FunctionFlags |= 0x400;

	if ( Bind )
		memcpy ( Bind, &GetBindExtended_Parms.Bind, 0x1C );

	return GetBindExtended_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerInput.GetStorageStringForCommand
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Command                        ( CPF_Parm | CPF_NeedCtorLink )

struct FString UPComPlayerInput::GetStorageStringForCommand ( struct FString Command )
{
	static UFunction* pFnGetStorageStringForCommand = NULL;

	if ( ! pFnGetStorageStringForCommand )
		pFnGetStorageStringForCommand = (UFunction*) UObject::GObjObjects()->GetIndex( 46162 );

	UPComPlayerInput_execGetStorageStringForCommand_Parms GetStorageStringForCommand_Parms;
	memcpy ( &GetStorageStringForCommand_Parms.Command, &Command, 0x10 );

	pFnGetStorageStringForCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetStorageStringForCommand, &GetStorageStringForCommand_Parms, NULL );

	pFnGetStorageStringForCommand->FunctionFlags |= 0x400;

	return GetStorageStringForCommand_Parms.ReturnValue;
};

// Function PlatformCommon.PComPlayerInput.InitKeyBindingsMap
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPComPlayerInput::InitKeyBindingsMap ( )
{
	static UFunction* pFnInitKeyBindingsMap = NULL;

	if ( ! pFnInitKeyBindingsMap )
		pFnInitKeyBindingsMap = (UFunction*) UObject::GObjObjects()->GetIndex( 46161 );

	UPComPlayerInput_execInitKeyBindingsMap_Parms InitKeyBindingsMap_Parms;

	pFnInitKeyBindingsMap->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitKeyBindingsMap, &InitKeyBindingsMap_Parms, NULL );

	pFnInitKeyBindingsMap->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerInput.ReadBindings
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPComPlayerInput::ReadBindings ( )
{
	static UFunction* pFnReadBindings = NULL;

	if ( ! pFnReadBindings )
		pFnReadBindings = (UFunction*) UObject::GObjObjects()->GetIndex( 46160 );

	UPComPlayerInput_execReadBindings_Parms ReadBindings_Parms;

	pFnReadBindings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadBindings, &ReadBindings_Parms, NULL );

	pFnReadBindings->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerInput.StoreBinding
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 BindName                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Command                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 OldCommand                     ( CPF_Parm | CPF_NeedCtorLink )

void UPComPlayerInput::StoreBinding ( struct FString BindName, struct FString Command, struct FString OldCommand )
{
	static UFunction* pFnStoreBinding = NULL;

	if ( ! pFnStoreBinding )
		pFnStoreBinding = (UFunction*) UObject::GObjObjects()->GetIndex( 46156 );

	UPComPlayerInput_execStoreBinding_Parms StoreBinding_Parms;
	memcpy ( &StoreBinding_Parms.BindName, &BindName, 0x10 );
	memcpy ( &StoreBinding_Parms.Command, &Command, 0x10 );
	memcpy ( &StoreBinding_Parms.OldCommand, &OldCommand, 0x10 );

	pFnStoreBinding->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStoreBinding, &StoreBinding_Parms, NULL );

	pFnStoreBinding->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerInput.ResetKeysToDefault
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// struct FString                 PresetName                     ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  isForceSetKey                  ( CPF_OptionalParm | CPF_Parm )

void UPComPlayerInput::ResetKeysToDefault ( struct FString PresetName, unsigned long isForceSetKey )
{
	static UFunction* pFnResetKeysToDefault = NULL;

	if ( ! pFnResetKeysToDefault )
		pFnResetKeysToDefault = (UFunction*) UObject::GObjObjects()->GetIndex( 46153 );

	UPComPlayerInput_execResetKeysToDefault_Parms ResetKeysToDefault_Parms;
	memcpy ( &ResetKeysToDefault_Parms.PresetName, &PresetName, 0x10 );
	ResetKeysToDefault_Parms.isForceSetKey = isForceSetKey;

	pFnResetKeysToDefault->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnResetKeysToDefault, &ResetKeysToDefault_Parms, NULL );

	pFnResetKeysToDefault->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerInput.StoreKeysToDefault
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UPComPlayerInput::StoreKeysToDefault ( )
{
	static UFunction* pFnStoreKeysToDefault = NULL;

	if ( ! pFnStoreKeysToDefault )
		pFnStoreKeysToDefault = (UFunction*) UObject::GObjObjects()->GetIndex( 46152 );

	UPComPlayerInput_execStoreKeysToDefault_Parms StoreKeysToDefault_Parms;

	pFnStoreKeysToDefault->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStoreKeysToDefault, &StoreKeysToDefault_Parms, NULL );

	pFnStoreKeysToDefault->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComPlayerInput.ConvertCommandToProperty
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Command                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

int UPComPlayerInput::ConvertCommandToProperty ( struct FString* Command )
{
	static UFunction* pFnConvertCommandToProperty = NULL;

	if ( ! pFnConvertCommandToProperty )
		pFnConvertCommandToProperty = (UFunction*) UObject::GObjObjects()->GetIndex( 46149 );

	UPComPlayerInput_execConvertCommandToProperty_Parms ConvertCommandToProperty_Parms;

	pFnConvertCommandToProperty->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnConvertCommandToProperty, &ConvertCommandToProperty_Parms, NULL );

	pFnConvertCommandToProperty->FunctionFlags |= 0x400;

	if ( Command )
		memcpy ( Command, &ConvertCommandToProperty_Parms.Command, 0x10 );

	return ConvertCommandToProperty_Parms.ReturnValue;
};

// Function PlatformCommon.PComPositionHistoryServerComponent.IsInSphere
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          RewindTime                     ( CPF_Parm )
// struct FVector                 LocationToCheck                ( CPF_Parm )
// float                          RadiusToCheck                  ( CPF_Parm )
// struct FPComPositionHistoryData PastDataUsed                   ( CPF_Parm | CPF_OutParm )

bool UPComPositionHistoryServerComponent::IsInSphere ( float RewindTime, struct FVector LocationToCheck, float RadiusToCheck, struct FPComPositionHistoryData* PastDataUsed )
{
	static UFunction* pFnIsInSphere = NULL;

	if ( ! pFnIsInSphere )
		pFnIsInSphere = (UFunction*) UObject::GObjObjects()->GetIndex( 46324 );

	UPComPositionHistoryServerComponent_execIsInSphere_Parms IsInSphere_Parms;
	IsInSphere_Parms.RewindTime = RewindTime;
	memcpy ( &IsInSphere_Parms.LocationToCheck, &LocationToCheck, 0xC );
	IsInSphere_Parms.RadiusToCheck = RadiusToCheck;

	pFnIsInSphere->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsInSphere, &IsInSphere_Parms, NULL );

	pFnIsInSphere->FunctionFlags |= 0x400;

	if ( PastDataUsed )
		memcpy ( PastDataUsed, &IsInSphere_Parms.PastDataUsed, 0x2C );

	return IsInSphere_Parms.ReturnValue;
};

// Function PlatformCommon.PComPositionHistoryServerComponent.IsOverlapping
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          RewindTime                     ( CPF_Parm )
// struct FVector                 LocationToCheck                ( CPF_Parm )
// float                          RadiusToCheck                  ( CPF_Parm )
// struct FPComPositionHistoryData PastDataUsed                   ( CPF_Parm | CPF_OutParm )

bool UPComPositionHistoryServerComponent::IsOverlapping ( float RewindTime, struct FVector LocationToCheck, float RadiusToCheck, struct FPComPositionHistoryData* PastDataUsed )
{
	static UFunction* pFnIsOverlapping = NULL;

	if ( ! pFnIsOverlapping )
		pFnIsOverlapping = (UFunction*) UObject::GObjObjects()->GetIndex( 46318 );

	UPComPositionHistoryServerComponent_execIsOverlapping_Parms IsOverlapping_Parms;
	IsOverlapping_Parms.RewindTime = RewindTime;
	memcpy ( &IsOverlapping_Parms.LocationToCheck, &LocationToCheck, 0xC );
	IsOverlapping_Parms.RadiusToCheck = RadiusToCheck;

	pFnIsOverlapping->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsOverlapping, &IsOverlapping_Parms, NULL );

	pFnIsOverlapping->FunctionFlags |= 0x400;

	if ( PastDataUsed )
		memcpy ( PastDataUsed, &IsOverlapping_Parms.PastDataUsed, 0x2C );

	return IsOverlapping_Parms.ReturnValue;
};

// Function PlatformCommon.PComPositionHistoryServerComponent.GetPastData
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FPComPositionHistoryData ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          RewindTime                     ( CPF_Parm )
// unsigned long                  bUseClientTimeStamps           ( CPF_OptionalParm | CPF_Parm )

struct FPComPositionHistoryData UPComPositionHistoryServerComponent::GetPastData ( float RewindTime, unsigned long bUseClientTimeStamps )
{
	static UFunction* pFnGetPastData = NULL;

	if ( ! pFnGetPastData )
		pFnGetPastData = (UFunction*) UObject::GObjObjects()->GetIndex( 46314 );

	UPComPositionHistoryServerComponent_execGetPastData_Parms GetPastData_Parms;
	GetPastData_Parms.RewindTime = RewindTime;
	GetPastData_Parms.bUseClientTimeStamps = bUseClientTimeStamps;

	pFnGetPastData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPastData, &GetPastData_Parms, NULL );

	pFnGetPastData->FunctionFlags |= 0x400;

	return GetPastData_Parms.ReturnValue;
};

// Function PlatformCommon.PComPositionHistoryServerComponent.RecordData
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UPComPositionHistoryServerComponent::RecordData ( )
{
	static UFunction* pFnRecordData = NULL;

	if ( ! pFnRecordData )
		pFnRecordData = (UFunction*) UObject::GObjObjects()->GetIndex( 46313 );

	UPComPositionHistoryServerComponent_execRecordData_Parms RecordData_Parms;

	pFnRecordData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRecordData, &RecordData_Parms, NULL );

	pFnRecordData->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComRepInfo_Game.CreateMusicThemePlayer
// [0x00020102] 
// Parameters infos:

void APComRepInfo_Game::CreateMusicThemePlayer ( )
{
	static UFunction* pFnCreateMusicThemePlayer = NULL;

	if ( ! pFnCreateMusicThemePlayer )
		pFnCreateMusicThemePlayer = (UFunction*) UObject::GObjObjects()->GetIndex( 46336 );

	APComRepInfo_Game_execCreateMusicThemePlayer_Parms CreateMusicThemePlayer_Parms;

	this->ProcessEvent ( pFnCreateMusicThemePlayer, &CreateMusicThemePlayer_Parms, NULL );
};

// Function PlatformCommon.PComRepInfo_Game.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void APComRepInfo_Game::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->GetIndex( 46335 );

	APComRepInfo_Game_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function PlatformCommon.PComRepInfo_Game.PlayMusicEvent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   EventName                      ( CPF_Const | CPF_Parm )

void APComRepInfo_Game::PlayMusicEvent ( struct FName EventName )
{
	static UFunction* pFnPlayMusicEvent = NULL;

	if ( ! pFnPlayMusicEvent )
		pFnPlayMusicEvent = (UFunction*) UObject::GObjObjects()->GetIndex( 46333 );

	APComRepInfo_Game_execPlayMusicEvent_Parms PlayMusicEvent_Parms;
	memcpy ( &PlayMusicEvent_Parms.EventName, &EventName, 0x8 );

	pFnPlayMusicEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayMusicEvent, &PlayMusicEvent_Parms, NULL );

	pFnPlayMusicEvent->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComSupportCommands.scLogTickFlags
// [0x40024202] ( FUNC_Exec )
// Parameters infos:
// int                            nFlags                         ( CPF_Parm )
// unsigned long                  bSet                           ( CPF_OptionalParm | CPF_Parm )

void UPComSupportCommands::scLogTickFlags ( int nFlags, unsigned long bSet )
{
	static UFunction* pFnscLogTickFlags = NULL;

	if ( ! pFnscLogTickFlags )
		pFnscLogTickFlags = (UFunction*) UObject::GObjObjects()->GetIndex( 46442 );

	UPComSupportCommands_execscLogTickFlags_Parms scLogTickFlags_Parms;
	scLogTickFlags_Parms.nFlags = nFlags;
	scLogTickFlags_Parms.bSet = bSet;

	this->ProcessEvent ( pFnscLogTickFlags, &scLogTickFlags_Parms, NULL );
};

// Function PlatformCommon.PComSupportCommands.scPerfAlwaysRelevantLimit
// [0x40020202] ( FUNC_Exec )
// Parameters infos:
// int                            feet                           ( CPF_Parm )

void UPComSupportCommands::scPerfAlwaysRelevantLimit ( int feet )
{
	static UFunction* pFnscPerfAlwaysRelevantLimit = NULL;

	if ( ! pFnscPerfAlwaysRelevantLimit )
		pFnscPerfAlwaysRelevantLimit = (UFunction*) UObject::GObjObjects()->GetIndex( 46440 );

	UPComSupportCommands_execscPerfAlwaysRelevantLimit_Parms scPerfAlwaysRelevantLimit_Parms;
	scPerfAlwaysRelevantLimit_Parms.feet = feet;

	this->ProcessEvent ( pFnscPerfAlwaysRelevantLimit, &scPerfAlwaysRelevantLimit_Parms, NULL );
};

// Function PlatformCommon.PComSupportCommands.scGPerfServerFlags
// [0x40020202] ( FUNC_Exec )
// Parameters infos:
// int                            Flags                          ( CPF_Parm )
// int                            alternate1                     ( CPF_Parm )
// int                            alternate2                     ( CPF_Parm )

void UPComSupportCommands::scGPerfServerFlags ( int Flags, int alternate1, int alternate2 )
{
	static UFunction* pFnscGPerfServerFlags = NULL;

	if ( ! pFnscGPerfServerFlags )
		pFnscGPerfServerFlags = (UFunction*) UObject::GObjObjects()->GetIndex( 46436 );

	UPComSupportCommands_execscGPerfServerFlags_Parms scGPerfServerFlags_Parms;
	scGPerfServerFlags_Parms.Flags = Flags;
	scGPerfServerFlags_Parms.alternate1 = alternate1;
	scGPerfServerFlags_Parms.alternate2 = alternate2;

	this->ProcessEvent ( pFnscGPerfServerFlags, &scGPerfServerFlags_Parms, NULL );
};

// Function PlatformCommon.PComSupportCommands.scPerfPhysThreshold
// [0x40020202] ( FUNC_Exec )
// Parameters infos:
// float                          thresh1                        ( CPF_Parm )
// float                          thesh2                         ( CPF_Parm )

void UPComSupportCommands::scPerfPhysThreshold ( float thresh1, float thesh2 )
{
	static UFunction* pFnscPerfPhysThreshold = NULL;

	if ( ! pFnscPerfPhysThreshold )
		pFnscPerfPhysThreshold = (UFunction*) UObject::GObjObjects()->GetIndex( 46433 );

	UPComSupportCommands_execscPerfPhysThreshold_Parms scPerfPhysThreshold_Parms;
	scPerfPhysThreshold_Parms.thresh1 = thresh1;
	scPerfPhysThreshold_Parms.thesh2 = thesh2;

	this->ProcessEvent ( pFnscPerfPhysThreshold, &scPerfPhysThreshold_Parms, NULL );
};

// Function PlatformCommon.PComSupportCommands.scPerfTickRate
// [0x40020202] ( FUNC_Exec )
// Parameters infos:
// int                            tickHz                         ( CPF_Parm )
// int                            altTickHz                      ( CPF_Parm )

void UPComSupportCommands::scPerfTickRate ( int tickHz, int altTickHz )
{
	static UFunction* pFnscPerfTickRate = NULL;

	if ( ! pFnscPerfTickRate )
		pFnscPerfTickRate = (UFunction*) UObject::GObjObjects()->GetIndex( 46430 );

	UPComSupportCommands_execscPerfTickRate_Parms scPerfTickRate_Parms;
	scPerfTickRate_Parms.tickHz = tickHz;
	scPerfTickRate_Parms.altTickHz = altTickHz;

	this->ProcessEvent ( pFnscPerfTickRate, &scPerfTickRate_Parms, NULL );
};

// Function PlatformCommon.PComSupportCommands.scPerfDebugRelevMode
// [0x40020202] ( FUNC_Exec )
// Parameters infos:
// int                            Mode                           ( CPF_Parm )

void UPComSupportCommands::scPerfDebugRelevMode ( int Mode )
{
	static UFunction* pFnscPerfDebugRelevMode = NULL;

	if ( ! pFnscPerfDebugRelevMode )
		pFnscPerfDebugRelevMode = (UFunction*) UObject::GObjObjects()->GetIndex( 46428 );

	UPComSupportCommands_execscPerfDebugRelevMode_Parms scPerfDebugRelevMode_Parms;
	scPerfDebugRelevMode_Parms.Mode = Mode;

	this->ProcessEvent ( pFnscPerfDebugRelevMode, &scPerfDebugRelevMode_Parms, NULL );
};

// Function PlatformCommon.PComSupportCommands.scPerfDebugSkip
// [0x40020202] ( FUNC_Exec )
// Parameters infos:
// int                            skips                          ( CPF_Parm )

void UPComSupportCommands::scPerfDebugSkip ( int skips )
{
	static UFunction* pFnscPerfDebugSkip = NULL;

	if ( ! pFnscPerfDebugSkip )
		pFnscPerfDebugSkip = (UFunction*) UObject::GObjObjects()->GetIndex( 46426 );

	UPComSupportCommands_execscPerfDebugSkip_Parms scPerfDebugSkip_Parms;
	scPerfDebugSkip_Parms.skips = skips;

	this->ProcessEvent ( pFnscPerfDebugSkip, &scPerfDebugSkip_Parms, NULL );
};

// Function PlatformCommon.PComSupportCommands.scPerfDebugFeet
// [0x40020202] ( FUNC_Exec )
// Parameters infos:
// int                            feet                           ( CPF_Parm )

void UPComSupportCommands::scPerfDebugFeet ( int feet )
{
	static UFunction* pFnscPerfDebugFeet = NULL;

	if ( ! pFnscPerfDebugFeet )
		pFnscPerfDebugFeet = (UFunction*) UObject::GObjObjects()->GetIndex( 46424 );

	UPComSupportCommands_execscPerfDebugFeet_Parms scPerfDebugFeet_Parms;
	scPerfDebugFeet_Parms.feet = feet;

	this->ProcessEvent ( pFnscPerfDebugFeet, &scPerfDebugFeet_Parms, NULL );
};

// Function PlatformCommon.PComSupportCommands.scDemoStop
// [0x40020202] ( FUNC_Exec )
// Parameters infos:

void UPComSupportCommands::scDemoStop ( )
{
	static UFunction* pFnscDemoStop = NULL;

	if ( ! pFnscDemoStop )
		pFnscDemoStop = (UFunction*) UObject::GObjObjects()->GetIndex( 46423 );

	UPComSupportCommands_execscDemoStop_Parms scDemoStop_Parms;

	this->ProcessEvent ( pFnscDemoStop, &scDemoStop_Parms, NULL );
};

// Function PlatformCommon.PComSupportCommands.scDemoRec
// [0x40020202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 sCommand                       ( CPF_Parm | CPF_NeedCtorLink )

void UPComSupportCommands::scDemoRec ( struct FString sCommand )
{
	static UFunction* pFnscDemoRec = NULL;

	if ( ! pFnscDemoRec )
		pFnscDemoRec = (UFunction*) UObject::GObjObjects()->GetIndex( 46421 );

	UPComSupportCommands_execscDemoRec_Parms scDemoRec_Parms;
	memcpy ( &scDemoRec_Parms.sCommand, &sCommand, 0x10 );

	this->ProcessEvent ( pFnscDemoRec, &scDemoRec_Parms, NULL );
};

// Function PlatformCommon.PComSupportCommands.scTimer
// [0x40020202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 sCommand                       ( CPF_Parm | CPF_NeedCtorLink )

void UPComSupportCommands::scTimer ( struct FString sCommand )
{
	static UFunction* pFnscTimer = NULL;

	if ( ! pFnscTimer )
		pFnscTimer = (UFunction*) UObject::GObjObjects()->GetIndex( 46418 );

	UPComSupportCommands_execscTimer_Parms scTimer_Parms;
	memcpy ( &scTimer_Parms.sCommand, &sCommand, 0x10 );

	this->ProcessEvent ( pFnscTimer, &scTimer_Parms, NULL );
};

// Function PlatformCommon.PComSupportCommands.scTime
// [0x40020202] ( FUNC_Exec )
// Parameters infos:
// int                            nSeconds                       ( CPF_Parm )

void UPComSupportCommands::scTime ( int nSeconds )
{
	static UFunction* pFnscTime = NULL;

	if ( ! pFnscTime )
		pFnscTime = (UFunction*) UObject::GObjObjects()->GetIndex( 46415 );

	UPComSupportCommands_execscTime_Parms scTime_Parms;
	scTime_Parms.nSeconds = nSeconds;

	this->ProcessEvent ( pFnscTime, &scTime_Parms, NULL );
};

// Function PlatformCommon.PComSupportCommands.scScore
// [0x40024202] ( FUNC_Exec )
// Parameters infos:
// int                            nTeam                          ( CPF_Parm )
// int                            nCount                         ( CPF_OptionalParm | CPF_Parm )

void UPComSupportCommands::scScore ( int nTeam, int nCount )
{
	static UFunction* pFnscScore = NULL;

	if ( ! pFnscScore )
		pFnscScore = (UFunction*) UObject::GObjObjects()->GetIndex( 46411 );

	UPComSupportCommands_execscScore_Parms scScore_Parms;
	scScore_Parms.nTeam = nTeam;
	scScore_Parms.nCount = nCount;

	this->ProcessEvent ( pFnscScore, &scScore_Parms, NULL );
};

// Function PlatformCommon.PComSupportCommands.scEndGame
// [0x40024202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void UPComSupportCommands::scEndGame ( struct FString Reason )
{
	static UFunction* pFnscEndGame = NULL;

	if ( ! pFnscEndGame )
		pFnscEndGame = (UFunction*) UObject::GObjObjects()->GetIndex( 46408 );

	UPComSupportCommands_execscEndGame_Parms scEndGame_Parms;
	memcpy ( &scEndGame_Parms.Reason, &Reason, 0x10 );

	this->ProcessEvent ( pFnscEndGame, &scEndGame_Parms, NULL );
};

// Function PlatformCommon.PComSupportCommands.scStartGame
// [0x40024202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void UPComSupportCommands::scStartGame ( struct FString Reason )
{
	static UFunction* pFnscStartGame = NULL;

	if ( ! pFnscStartGame )
		pFnscStartGame = (UFunction*) UObject::GObjObjects()->GetIndex( 46405 );

	UPComSupportCommands_execscStartGame_Parms scStartGame_Parms;
	memcpy ( &scStartGame_Parms.Reason, &Reason, 0x10 );

	this->ProcessEvent ( pFnscStartGame, &scStartGame_Parms, NULL );
};

// Function PlatformCommon.PComSupportCommands.scLogMark
// [0x40020202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 Comment                        ( CPF_Parm | CPF_NeedCtorLink )

void UPComSupportCommands::scLogMark ( struct FString Comment )
{
	static UFunction* pFnscLogMark = NULL;

	if ( ! pFnscLogMark )
		pFnscLogMark = (UFunction*) UObject::GObjObjects()->GetIndex( 46403 );

	UPComSupportCommands_execscLogMark_Parms scLogMark_Parms;
	memcpy ( &scLogMark_Parms.Comment, &Comment, 0x10 );

	this->ProcessEvent ( pFnscLogMark, &scLogMark_Parms, NULL );
};

// Function PlatformCommon.PComSupportCommands.scLog
// [0x40024202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 LogName                        ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bEnabled                       ( CPF_OptionalParm | CPF_Parm )

void UPComSupportCommands::scLog ( struct FString LogName, unsigned long bEnabled )
{
	static UFunction* pFnscLog = NULL;

	if ( ! pFnscLog )
		pFnscLog = (UFunction*) UObject::GObjObjects()->GetIndex( 46399 );

	UPComSupportCommands_execscLog_Parms scLog_Parms;
	memcpy ( &scLog_Parms.LogName, &LogName, 0x10 );
	scLog_Parms.bEnabled = bEnabled;

	this->ProcessEvent ( pFnscLog, &scLog_Parms, NULL );
};

// Function PlatformCommon.PComSupportCommands.gmmf
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UPComSupportCommands::gmmf ( )
{
	static UFunction* pFngmmf = NULL;

	if ( ! pFngmmf )
		pFngmmf = (UFunction*) UObject::GObjObjects()->GetIndex( 46398 );

	UPComSupportCommands_execgmmf_Parms gmmf_Parms;

	this->ProcessEvent ( pFngmmf, &gmmf_Parms, NULL );
};

// Function PlatformCommon.PComSupportCommands.SetLogServerTickStatsFlags
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            Flags                          ( CPF_Parm )
// unsigned long                  bSet                           ( CPF_Parm )

void UPComSupportCommands::SetLogServerTickStatsFlags ( int Flags, unsigned long bSet )
{
	static UFunction* pFnSetLogServerTickStatsFlags = NULL;

	if ( ! pFnSetLogServerTickStatsFlags )
		pFnSetLogServerTickStatsFlags = (UFunction*) UObject::GObjObjects()->GetIndex( 46395 );

	UPComSupportCommands_execSetLogServerTickStatsFlags_Parms SetLogServerTickStatsFlags_Parms;
	SetLogServerTickStatsFlags_Parms.Flags = Flags;
	SetLogServerTickStatsFlags_Parms.bSet = bSet;

	pFnSetLogServerTickStatsFlags->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetLogServerTickStatsFlags, &SetLogServerTickStatsFlags_Parms, NULL );

	pFnSetLogServerTickStatsFlags->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComSupportCommands.GPerfDebugPhysicsThreshold
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          fThresh1                       ( CPF_Parm )
// float                          fThresh2                       ( CPF_Parm )

void UPComSupportCommands::GPerfDebugPhysicsThreshold ( float fThresh1, float fThresh2 )
{
	static UFunction* pFnGPerfDebugPhysicsThreshold = NULL;

	if ( ! pFnGPerfDebugPhysicsThreshold )
		pFnGPerfDebugPhysicsThreshold = (UFunction*) UObject::GObjObjects()->GetIndex( 46392 );

	UPComSupportCommands_execGPerfDebugPhysicsThreshold_Parms GPerfDebugPhysicsThreshold_Parms;
	GPerfDebugPhysicsThreshold_Parms.fThresh1 = fThresh1;
	GPerfDebugPhysicsThreshold_Parms.fThresh2 = fThresh2;

	pFnGPerfDebugPhysicsThreshold->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGPerfDebugPhysicsThreshold, &GPerfDebugPhysicsThreshold_Parms, NULL );

	pFnGPerfDebugPhysicsThreshold->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComSupportCommands.GPerfDebugTickRate
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            tickHz                         ( CPF_Parm )
// int                            altTickHz                      ( CPF_Parm )

void UPComSupportCommands::GPerfDebugTickRate ( int tickHz, int altTickHz )
{
	static UFunction* pFnGPerfDebugTickRate = NULL;

	if ( ! pFnGPerfDebugTickRate )
		pFnGPerfDebugTickRate = (UFunction*) UObject::GObjObjects()->GetIndex( 46389 );

	UPComSupportCommands_execGPerfDebugTickRate_Parms GPerfDebugTickRate_Parms;
	GPerfDebugTickRate_Parms.tickHz = tickHz;
	GPerfDebugTickRate_Parms.altTickHz = altTickHz;

	pFnGPerfDebugTickRate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGPerfDebugTickRate, &GPerfDebugTickRate_Parms, NULL );

	pFnGPerfDebugTickRate->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComSupportCommands.GPerfAllRelevantLimit
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            feet                           ( CPF_Parm )

void UPComSupportCommands::GPerfAllRelevantLimit ( int feet )
{
	static UFunction* pFnGPerfAllRelevantLimit = NULL;

	if ( ! pFnGPerfAllRelevantLimit )
		pFnGPerfAllRelevantLimit = (UFunction*) UObject::GObjObjects()->GetIndex( 46387 );

	UPComSupportCommands_execGPerfAllRelevantLimit_Parms GPerfAllRelevantLimit_Parms;
	GPerfAllRelevantLimit_Parms.feet = feet;

	pFnGPerfAllRelevantLimit->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGPerfAllRelevantLimit, &GPerfAllRelevantLimit_Parms, NULL );

	pFnGPerfAllRelevantLimit->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComSupportCommands.GPerfServerFlags
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            Flags                          ( CPF_Parm )
// int                            alternate1                     ( CPF_Parm )
// int                            alternate2                     ( CPF_Parm )

void UPComSupportCommands::GPerfServerFlags ( int Flags, int alternate1, int alternate2 )
{
	static UFunction* pFnGPerfServerFlags = NULL;

	if ( ! pFnGPerfServerFlags )
		pFnGPerfServerFlags = (UFunction*) UObject::GObjObjects()->GetIndex( 46383 );

	UPComSupportCommands_execGPerfServerFlags_Parms GPerfServerFlags_Parms;
	GPerfServerFlags_Parms.Flags = Flags;
	GPerfServerFlags_Parms.alternate1 = alternate1;
	GPerfServerFlags_Parms.alternate2 = alternate2;

	pFnGPerfServerFlags->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGPerfServerFlags, &GPerfServerFlags_Parms, NULL );

	pFnGPerfServerFlags->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComSupportCommands.GPerfDebugRelevMode
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            Mode                           ( CPF_Parm )

void UPComSupportCommands::GPerfDebugRelevMode ( int Mode )
{
	static UFunction* pFnGPerfDebugRelevMode = NULL;

	if ( ! pFnGPerfDebugRelevMode )
		pFnGPerfDebugRelevMode = (UFunction*) UObject::GObjObjects()->GetIndex( 46381 );

	UPComSupportCommands_execGPerfDebugRelevMode_Parms GPerfDebugRelevMode_Parms;
	GPerfDebugRelevMode_Parms.Mode = Mode;

	pFnGPerfDebugRelevMode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGPerfDebugRelevMode, &GPerfDebugRelevMode_Parms, NULL );

	pFnGPerfDebugRelevMode->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComSupportCommands.GPerfDebugSkips
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            skips                          ( CPF_Parm )

void UPComSupportCommands::GPerfDebugSkips ( int skips )
{
	static UFunction* pFnGPerfDebugSkips = NULL;

	if ( ! pFnGPerfDebugSkips )
		pFnGPerfDebugSkips = (UFunction*) UObject::GObjObjects()->GetIndex( 46379 );

	UPComSupportCommands_execGPerfDebugSkips_Parms GPerfDebugSkips_Parms;
	GPerfDebugSkips_Parms.skips = skips;

	pFnGPerfDebugSkips->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGPerfDebugSkips, &GPerfDebugSkips_Parms, NULL );

	pFnGPerfDebugSkips->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComSupportCommands.GPerfDebugFeet
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            feet                           ( CPF_Parm )

void UPComSupportCommands::GPerfDebugFeet ( int feet )
{
	static UFunction* pFnGPerfDebugFeet = NULL;

	if ( ! pFnGPerfDebugFeet )
		pFnGPerfDebugFeet = (UFunction*) UObject::GObjObjects()->GetIndex( 46377 );

	UPComSupportCommands_execGPerfDebugFeet_Parms GPerfDebugFeet_Parms;
	GPerfDebugFeet_Parms.feet = feet;

	pFnGPerfDebugFeet->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGPerfDebugFeet, &GPerfDebugFeet_Parms, NULL );

	pFnGPerfDebugFeet->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComSupportCommands.gmDiag
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            Code                           ( CPF_Parm )
// int                            Route                          ( CPF_Parm )

void UPComSupportCommands::gmDiag ( int Code, int Route )
{
	static UFunction* pFngmDiag = NULL;

	if ( ! pFngmDiag )
		pFngmDiag = (UFunction*) UObject::GObjObjects()->GetIndex( 46374 );

	UPComSupportCommands_execgmDiag_Parms gmDiag_Parms;
	gmDiag_Parms.Code = Code;
	gmDiag_Parms.Route = Route;

	pFngmDiag->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFngmDiag, &gmDiag_Parms, NULL );

	pFngmDiag->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComSupportCommands.gmC
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 sCommand                       ( CPF_Parm | CPF_NeedCtorLink )

void UPComSupportCommands::gmC ( struct FString sCommand )
{
	static UFunction* pFngmC = NULL;

	if ( ! pFngmC )
		pFngmC = (UFunction*) UObject::GObjObjects()->GetIndex( 46372 );

	UPComSupportCommands_execgmC_Parms gmC_Parms;
	memcpy ( &gmC_Parms.sCommand, &sCommand, 0x10 );

	pFngmC->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFngmC, &gmC_Parms, NULL );

	pFngmC->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComSupportCommands.gmCommand
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 sCommand                       ( CPF_Parm | CPF_NeedCtorLink )

void UPComSupportCommands::gmCommand ( struct FString sCommand )
{
	static UFunction* pFngmCommand = NULL;

	if ( ! pFngmCommand )
		pFngmCommand = (UFunction*) UObject::GObjObjects()->GetIndex( 46370 );

	UPComSupportCommands_execgmCommand_Parms gmCommand_Parms;
	memcpy ( &gmCommand_Parms.sCommand, &sCommand, 0x10 );

	pFngmCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFngmCommand, &gmCommand_Parms, NULL );

	pFngmCommand->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComSupportCommands.gmMatchLobbyResume
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UPComSupportCommands::gmMatchLobbyResume ( )
{
	static UFunction* pFngmMatchLobbyResume = NULL;

	if ( ! pFngmMatchLobbyResume )
		pFngmMatchLobbyResume = (UFunction*) UObject::GObjObjects()->GetIndex( 46369 );

	UPComSupportCommands_execgmMatchLobbyResume_Parms gmMatchLobbyResume_Parms;

	pFngmMatchLobbyResume->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFngmMatchLobbyResume, &gmMatchLobbyResume_Parms, NULL );

	pFngmMatchLobbyResume->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComSupportCommands.gmMatchLobbyPause
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UPComSupportCommands::gmMatchLobbyPause ( )
{
	static UFunction* pFngmMatchLobbyPause = NULL;

	if ( ! pFngmMatchLobbyPause )
		pFngmMatchLobbyPause = (UFunction*) UObject::GObjObjects()->GetIndex( 46368 );

	UPComSupportCommands_execgmMatchLobbyPause_Parms gmMatchLobbyPause_Parms;

	pFngmMatchLobbyPause->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFngmMatchLobbyPause, &gmMatchLobbyPause_Parms, NULL );

	pFngmMatchLobbyPause->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComSupportCommands.gmMatchNext
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nMapId                         ( CPF_Parm )

void UPComSupportCommands::gmMatchNext ( int nMapId )
{
	static UFunction* pFngmMatchNext = NULL;

	if ( ! pFngmMatchNext )
		pFngmMatchNext = (UFunction*) UObject::GObjObjects()->GetIndex( 46366 );

	UPComSupportCommands_execgmMatchNext_Parms gmMatchNext_Parms;
	gmMatchNext_Parms.nMapId = nMapId;

	pFngmMatchNext->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFngmMatchNext, &gmMatchNext_Parms, NULL );

	pFngmMatchNext->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComSupportCommands.gmMatchForce
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nQueueId                       ( CPF_OptionalParm | CPF_Parm )

void UPComSupportCommands::gmMatchForce ( int nQueueId )
{
	static UFunction* pFngmMatchForce = NULL;

	if ( ! pFngmMatchForce )
		pFngmMatchForce = (UFunction*) UObject::GObjObjects()->GetIndex( 46364 );

	UPComSupportCommands_execgmMatchForce_Parms gmMatchForce_Parms;
	gmMatchForce_Parms.nQueueId = nQueueId;

	pFngmMatchForce->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFngmMatchForce, &gmMatchForce_Parms, NULL );

	pFngmMatchForce->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComUIManagerBase.DebugDraw
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )

void UPComUIManagerBase::eventDebugDraw ( class UCanvas* Canvas )
{
	static UFunction* pFnDebugDraw = NULL;

	if ( ! pFnDebugDraw )
		pFnDebugDraw = (UFunction*) UObject::GObjObjects()->GetIndex( 46453 );

	UPComUIManagerBase_eventDebugDraw_Parms DebugDraw_Parms;
	DebugDraw_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnDebugDraw, &DebugDraw_Parms, NULL );
};

// Function PlatformCommon.PComUtilityFunctions.GetGDeltaTime
// [0x00022400] ( FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UPComUtilityFunctions::GetGDeltaTime ( )
{
	static UFunction* pFnGetGDeltaTime = NULL;

	if ( ! pFnGetGDeltaTime )
		pFnGetGDeltaTime = (UFunction*) UObject::GObjObjects()->GetIndex( 46466 );

	UPComUtilityFunctions_execGetGDeltaTime_Parms GetGDeltaTime_Parms;

	pFnGetGDeltaTime->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetGDeltaTime, &GetGDeltaTime_Parms, NULL );

	pFnGetGDeltaTime->FunctionFlags |= 0x400;

	return GetGDeltaTime_Parms.ReturnValue;
};

// Function PlatformCommon.PComUtilityFunctions.IsAWithStop
// [0x00022400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UObject*                 InObject                       ( CPF_Parm )
// class UClass*                  SomeBase                       ( CPF_Const | CPF_Parm )
// class UClass*                  StopAtBase                     ( CPF_Const | CPF_Parm )

bool UPComUtilityFunctions::IsAWithStop ( class UObject* InObject, class UClass* SomeBase, class UClass* StopAtBase )
{
	static UFunction* pFnIsAWithStop = NULL;

	if ( ! pFnIsAWithStop )
		pFnIsAWithStop = (UFunction*) UObject::GObjObjects()->GetIndex( 46461 );

	UPComUtilityFunctions_execIsAWithStop_Parms IsAWithStop_Parms;
	IsAWithStop_Parms.InObject = InObject;
	IsAWithStop_Parms.SomeBase = SomeBase;
	IsAWithStop_Parms.StopAtBase = StopAtBase;

	pFnIsAWithStop->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsAWithStop, &IsAWithStop_Parms, NULL );

	pFnIsAWithStop->FunctionFlags |= 0x400;

	return IsAWithStop_Parms.ReturnValue;
};

// Function PlatformCommon.PComUtilityFunctions.FakeNetSerialize
// [0x00422400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 InVector                       ( CPF_Const | CPF_Parm | CPF_OutParm )

struct FVector UPComUtilityFunctions::FakeNetSerialize ( struct FVector* InVector )
{
	static UFunction* pFnFakeNetSerialize = NULL;

	if ( ! pFnFakeNetSerialize )
		pFnFakeNetSerialize = (UFunction*) UObject::GObjObjects()->GetIndex( 46458 );

	UPComUtilityFunctions_execFakeNetSerialize_Parms FakeNetSerialize_Parms;

	pFnFakeNetSerialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFakeNetSerialize, &FakeNetSerialize_Parms, NULL );

	pFnFakeNetSerialize->FunctionFlags |= 0x400;

	if ( InVector )
		memcpy ( InVector, &FakeNetSerialize_Parms.InVector, 0xC );

	return FakeNetSerialize_Parms.ReturnValue;
};

// Function PlatformCommon.PComVideoPlayer.DestroyMe
// [0x00020002] 
// Parameters infos:

void APComVideoPlayer::DestroyMe ( )
{
	static UFunction* pFnDestroyMe = NULL;

	if ( ! pFnDestroyMe )
		pFnDestroyMe = (UFunction*) UObject::GObjObjects()->GetIndex( 46508 );

	APComVideoPlayer_execDestroyMe_Parms DestroyMe_Parms;

	this->ProcessEvent ( pFnDestroyMe, &DestroyMe_Parms, NULL );
};

// Function PlatformCommon.PComVideoPlayer.TestOnVideoError
// [0x00020002] 
// Parameters infos:
// class APComVideoPlayer*        VideoPlayer                    ( CPF_Parm )
// unsigned char                  ErrorCode                      ( CPF_Parm )

void APComVideoPlayer::TestOnVideoError ( class APComVideoPlayer* VideoPlayer, unsigned char ErrorCode )
{
	static UFunction* pFnTestOnVideoError = NULL;

	if ( ! pFnTestOnVideoError )
		pFnTestOnVideoError = (UFunction*) UObject::GObjObjects()->GetIndex( 46505 );

	APComVideoPlayer_execTestOnVideoError_Parms TestOnVideoError_Parms;
	TestOnVideoError_Parms.VideoPlayer = VideoPlayer;
	TestOnVideoError_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent ( pFnTestOnVideoError, &TestOnVideoError_Parms, NULL );
};

// Function PlatformCommon.PComVideoPlayer.TestVideoPlayer
// [0x00026002] 
// Parameters infos:
// class AActor*                  SpawningActor                  ( CPF_Parm )
// struct FString                 InURL                          ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void APComVideoPlayer::TestVideoPlayer ( class AActor* SpawningActor, struct FString InURL )
{
	static UFunction* pFnTestVideoPlayer = NULL;

	if ( ! pFnTestVideoPlayer )
		pFnTestVideoPlayer = (UFunction*) UObject::GObjObjects()->GetIndex( 46501 );

	APComVideoPlayer_execTestVideoPlayer_Parms TestVideoPlayer_Parms;
	TestVideoPlayer_Parms.SpawningActor = SpawningActor;
	memcpy ( &TestVideoPlayer_Parms.InURL, &InURL, 0x10 );

	this->ProcessEvent ( pFnTestVideoPlayer, &TestVideoPlayer_Parms, NULL );
};

// Function PlatformCommon.PComVideoPlayer.StopVideoSession
// [0x00020500] ( FUNC_Native )
// Parameters infos:

void APComVideoPlayer::StopVideoSession ( )
{
	static UFunction* pFnStopVideoSession = NULL;

	if ( ! pFnStopVideoSession )
		pFnStopVideoSession = (UFunction*) UObject::GObjObjects()->GetIndex( 46500 );

	APComVideoPlayer_execStopVideoSession_Parms StopVideoSession_Parms;

	pFnStopVideoSession->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopVideoSession, &StopVideoSession_Parms, NULL );

	pFnStopVideoSession->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComVideoPlayer.Initialize
// [0x00020500] ( FUNC_Native )
// Parameters infos:

void APComVideoPlayer::Initialize ( )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->GetIndex( 46499 );

	APComVideoPlayer_execInitialize_Parms Initialize_Parms;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComVideoPlayer.NativePostRenderFor
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )
// struct FVector                 CameraPosition                 ( CPF_Parm )
// struct FVector                 CameraDir                      ( CPF_Parm )

void APComVideoPlayer::NativePostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir )
{
	static UFunction* pFnNativePostRenderFor = NULL;

	if ( ! pFnNativePostRenderFor )
		pFnNativePostRenderFor = (UFunction*) UObject::GObjObjects()->GetIndex( 46494 );

	APComVideoPlayer_execNativePostRenderFor_Parms NativePostRenderFor_Parms;
	NativePostRenderFor_Parms.PC = PC;
	NativePostRenderFor_Parms.Canvas = Canvas;
	memcpy ( &NativePostRenderFor_Parms.CameraPosition, &CameraPosition, 0xC );
	memcpy ( &NativePostRenderFor_Parms.CameraDir, &CameraDir, 0xC );

	pFnNativePostRenderFor->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNativePostRenderFor, &NativePostRenderFor_Parms, NULL );

	pFnNativePostRenderFor->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComVideoPlayer.OnVideoError
// [0x00120000] 
// Parameters infos:
// class APComVideoPlayer*        VideoPlayer                    ( CPF_Parm )
// unsigned char                  ErrorCode                      ( CPF_Parm )

void APComVideoPlayer::OnVideoError ( class APComVideoPlayer* VideoPlayer, unsigned char ErrorCode )
{
	static UFunction* pFnOnVideoError = NULL;

	if ( ! pFnOnVideoError )
		pFnOnVideoError = (UFunction*) UObject::GObjObjects()->GetIndex( 46470 );

	APComVideoPlayer_execOnVideoError_Parms OnVideoError_Parms;
	OnVideoError_Parms.VideoPlayer = VideoPlayer;
	OnVideoError_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent ( pFnOnVideoError, &OnVideoError_Parms, NULL );
};

// Function PlatformCommon.PComVideoPlayer.OnVideoFinished
// [0x00120000] 
// Parameters infos:

void APComVideoPlayer::OnVideoFinished ( )
{
	static UFunction* pFnOnVideoFinished = NULL;

	if ( ! pFnOnVideoFinished )
		pFnOnVideoFinished = (UFunction*) UObject::GObjObjects()->GetIndex( 46472 );

	APComVideoPlayer_execOnVideoFinished_Parms OnVideoFinished_Parms;

	this->ProcessEvent ( pFnOnVideoFinished, &OnVideoFinished_Parms, NULL );
};

// Function PlatformCommon.PComMusicThemePlayer.UpdateReplicatedMusicEvent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   EventName                      ( CPF_Const | CPF_Parm )

void UPComMusicThemePlayer::UpdateReplicatedMusicEvent ( struct FName EventName )
{
	static UFunction* pFnUpdateReplicatedMusicEvent = NULL;

	if ( ! pFnUpdateReplicatedMusicEvent )
		pFnUpdateReplicatedMusicEvent = (UFunction*) UObject::GObjObjects()->GetIndex( 45573 );

	UPComMusicThemePlayer_execUpdateReplicatedMusicEvent_Parms UpdateReplicatedMusicEvent_Parms;
	memcpy ( &UpdateReplicatedMusicEvent_Parms.EventName, &EventName, 0x8 );

	pFnUpdateReplicatedMusicEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateReplicatedMusicEvent, &UpdateReplicatedMusicEvent_Parms, NULL );

	pFnUpdateReplicatedMusicEvent->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComMusicThemePlayer.UpdateMusicTrack
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// struct FMusicTrackStruct       NewMusicTrack                  ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
// float                          fDuration                      ( CPF_Const | CPF_OptionalParm | CPF_Parm )

void UPComMusicThemePlayer::UpdateMusicTrack ( struct FMusicTrackStruct NewMusicTrack, float fDuration )
{
	static UFunction* pFnUpdateMusicTrack = NULL;

	if ( ! pFnUpdateMusicTrack )
		pFnUpdateMusicTrack = (UFunction*) UObject::GObjObjects()->GetIndex( 45570 );

	UPComMusicThemePlayer_execUpdateMusicTrack_Parms UpdateMusicTrack_Parms;
	memcpy ( &UpdateMusicTrack_Parms.NewMusicTrack, &NewMusicTrack, 0x2C );
	UpdateMusicTrack_Parms.fDuration = fDuration;

	pFnUpdateMusicTrack->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateMusicTrack, &UpdateMusicTrack_Parms, NULL );

	pFnUpdateMusicTrack->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComMusicThemePlayer.StopMusic
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPComMusicThemePlayer::StopMusic ( )
{
	static UFunction* pFnStopMusic = NULL;

	if ( ! pFnStopMusic )
		pFnStopMusic = (UFunction*) UObject::GObjObjects()->GetIndex( 45569 );

	UPComMusicThemePlayer_execStopMusic_Parms StopMusic_Parms;

	pFnStopMusic->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopMusic, &StopMusic_Parms, NULL );

	pFnStopMusic->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComMusicThemePlayer.PlayMusicEvent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   EventName                      ( CPF_Const | CPF_Parm )

void UPComMusicThemePlayer::PlayMusicEvent ( struct FName EventName )
{
	static UFunction* pFnPlayMusicEvent = NULL;

	if ( ! pFnPlayMusicEvent )
		pFnPlayMusicEvent = (UFunction*) UObject::GObjObjects()->GetIndex( 45567 );

	UPComMusicThemePlayer_execPlayMusicEvent_Parms PlayMusicEvent_Parms;
	memcpy ( &PlayMusicEvent_Parms.EventName, &EventName, 0x8 );

	pFnPlayMusicEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayMusicEvent, &PlayMusicEvent_Parms, NULL );

	pFnPlayMusicEvent->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComMusicThemePlayer.PlayDefaultMusic
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPComMusicThemePlayer::PlayDefaultMusic ( )
{
	static UFunction* pFnPlayDefaultMusic = NULL;

	if ( ! pFnPlayDefaultMusic )
		pFnPlayDefaultMusic = (UFunction*) UObject::GObjObjects()->GetIndex( 45566 );

	UPComMusicThemePlayer_execPlayDefaultMusic_Parms PlayDefaultMusic_Parms;

	pFnPlayDefaultMusic->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayDefaultMusic, &PlayDefaultMusic_Parms, NULL );

	pFnPlayDefaultMusic->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComMusicThemePlayer.OnThemeLoaded
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPComMusicThemePlayer::OnThemeLoaded ( )
{
	static UFunction* pFnOnThemeLoaded = NULL;

	if ( ! pFnOnThemeLoaded )
		pFnOnThemeLoaded = (UFunction*) UObject::GObjObjects()->GetIndex( 45565 );

	UPComMusicThemePlayer_execOnThemeLoaded_Parms OnThemeLoaded_Parms;

	pFnOnThemeLoaded->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnThemeLoaded, &OnThemeLoaded_Parms, NULL );

	pFnOnThemeLoaded->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComMusicThemePlayer.LoadTheme
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 themepath                      ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )

void UPComMusicThemePlayer::LoadTheme ( struct FString themepath )
{
	static UFunction* pFnLoadTheme = NULL;

	if ( ! pFnLoadTheme )
		pFnLoadTheme = (UFunction*) UObject::GObjObjects()->GetIndex( 45563 );

	UPComMusicThemePlayer_execLoadTheme_Parms LoadTheme_Parms;
	memcpy ( &LoadTheme_Parms.themepath, &themepath, 0x10 );

	pFnLoadTheme->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLoadTheme, &LoadTheme_Parms, NULL );

	pFnLoadTheme->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComMusicThemePlayer.GetDefaultThemePath
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UPComMusicThemePlayer::GetDefaultThemePath ( )
{
	static UFunction* pFnGetDefaultThemePath = NULL;

	if ( ! pFnGetDefaultThemePath )
		pFnGetDefaultThemePath = (UFunction*) UObject::GObjObjects()->GetIndex( 45561 );

	UPComMusicThemePlayer_execGetDefaultThemePath_Parms GetDefaultThemePath_Parms;

	pFnGetDefaultThemePath->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDefaultThemePath, &GetDefaultThemePath_Parms, NULL );

	pFnGetDefaultThemePath->FunctionFlags |= 0x400;

	return GetDefaultThemePath_Parms.ReturnValue;
};

// Function PlatformCommon.PComMusicThemePlayer.LoadDefaultTheme
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPComMusicThemePlayer::LoadDefaultTheme ( )
{
	static UFunction* pFnLoadDefaultTheme = NULL;

	if ( ! pFnLoadDefaultTheme )
		pFnLoadDefaultTheme = (UFunction*) UObject::GObjObjects()->GetIndex( 45560 );

	UPComMusicThemePlayer_execLoadDefaultTheme_Parms LoadDefaultTheme_Parms;

	pFnLoadDefaultTheme->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLoadDefaultTheme, &LoadDefaultTheme_Parms, NULL );

	pFnLoadDefaultTheme->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComMusicThemePlayer.Init
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPComMusicThemePlayer::Init ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->GetIndex( 45559 );

	UPComMusicThemePlayer_execInit_Parms Init_Parms;

	pFnInit->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );

	pFnInit->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComMusicThemeSyncActor.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void APComMusicThemeSyncActor::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->GetIndex( 45580 );

	APComMusicThemeSyncActor_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function PlatformCommon.PComMusicThemeSyncActor.UpdateMusicEventClient
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   EventName                      ( CPF_Parm )

void APComMusicThemeSyncActor::UpdateMusicEventClient ( struct FName EventName )
{
	static UFunction* pFnUpdateMusicEventClient = NULL;

	if ( ! pFnUpdateMusicEventClient )
		pFnUpdateMusicEventClient = (UFunction*) UObject::GObjObjects()->GetIndex( 45578 );

	APComMusicThemeSyncActor_execUpdateMusicEventClient_Parms UpdateMusicEventClient_Parms;
	memcpy ( &UpdateMusicEventClient_Parms.EventName, &EventName, 0x8 );

	pFnUpdateMusicEventClient->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateMusicEventClient, &UpdateMusicEventClient_Parms, NULL );

	pFnUpdateMusicEventClient->FunctionFlags |= 0x400;
};

// Function PlatformCommon.PComMusicThemeSyncActor.UpdateMusicEvent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   EventName                      ( CPF_Parm )

void APComMusicThemeSyncActor::UpdateMusicEvent ( struct FName EventName )
{
	static UFunction* pFnUpdateMusicEvent = NULL;

	if ( ! pFnUpdateMusicEvent )
		pFnUpdateMusicEvent = (UFunction*) UObject::GObjObjects()->GetIndex( 45576 );

	APComMusicThemeSyncActor_execUpdateMusicEvent_Parms UpdateMusicEvent_Parms;
	memcpy ( &UpdateMusicEvent_Parms.EventName, &EventName, 0x8 );

	pFnUpdateMusicEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateMusicEvent, &UpdateMusicEvent_Parms, NULL );

	pFnUpdateMusicEvent->FunctionFlags |= 0x400;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif