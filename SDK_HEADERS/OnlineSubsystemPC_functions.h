/*
#############################################################################################
# Smite (v3.24.3804.2) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: OnlineSubsystemPC_functions.h
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

// Function OnlineSubsystemPC.OnlineSubsystemPC.SendPlayerSessionResume
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 MultiplayerCorrelationId       ( CPF_Parm | CPF_NeedCtorLink )
// int                            GameplayModeId                 ( CPF_Parm )
// int                            DifficultyLevelId              ( CPF_Parm )

bool UOnlineSubsystemPC::SendPlayerSessionResume ( unsigned char LocalUserNum, struct FString MultiplayerCorrelationId, int GameplayModeId, int DifficultyLevelId )
{
	static UFunction* pFnSendPlayerSessionResume = NULL;

	if ( ! pFnSendPlayerSessionResume )
		pFnSendPlayerSessionResume = (UFunction*) UObject::GObjObjects()->GetIndex( 136963 );

	UOnlineSubsystemPC_execSendPlayerSessionResume_Parms SendPlayerSessionResume_Parms;
	SendPlayerSessionResume_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SendPlayerSessionResume_Parms.MultiplayerCorrelationId, &MultiplayerCorrelationId, 0x10 );
	SendPlayerSessionResume_Parms.GameplayModeId = GameplayModeId;
	SendPlayerSessionResume_Parms.DifficultyLevelId = DifficultyLevelId;

	this->ProcessEvent ( pFnSendPlayerSessionResume, &SendPlayerSessionResume_Parms, NULL );

	return SendPlayerSessionResume_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SendPlayerSessionPause
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 MultiplayerCorrelationId       ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPC::SendPlayerSessionPause ( unsigned char LocalUserNum, struct FString MultiplayerCorrelationId )
{
	static UFunction* pFnSendPlayerSessionPause = NULL;

	if ( ! pFnSendPlayerSessionPause )
		pFnSendPlayerSessionPause = (UFunction*) UObject::GObjObjects()->GetIndex( 136959 );

	UOnlineSubsystemPC_execSendPlayerSessionPause_Parms SendPlayerSessionPause_Parms;
	SendPlayerSessionPause_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SendPlayerSessionPause_Parms.MultiplayerCorrelationId, &MultiplayerCorrelationId, 0x10 );

	this->ProcessEvent ( pFnSendPlayerSessionPause, &SendPlayerSessionPause_Parms, NULL );

	return SendPlayerSessionPause_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SendPlayerSessionEnd
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 MultiplayerCorrelationId       ( CPF_Parm | CPF_NeedCtorLink )
// int                            GameplayModeId                 ( CPF_Parm )
// int                            DifficultyLevelId              ( CPF_Parm )
// int                            ExitStatusId                   ( CPF_Parm )

bool UOnlineSubsystemPC::SendPlayerSessionEnd ( unsigned char LocalUserNum, struct FString MultiplayerCorrelationId, int GameplayModeId, int DifficultyLevelId, int ExitStatusId )
{
	static UFunction* pFnSendPlayerSessionEnd = NULL;

	if ( ! pFnSendPlayerSessionEnd )
		pFnSendPlayerSessionEnd = (UFunction*) UObject::GObjObjects()->GetIndex( 136952 );

	UOnlineSubsystemPC_execSendPlayerSessionEnd_Parms SendPlayerSessionEnd_Parms;
	SendPlayerSessionEnd_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SendPlayerSessionEnd_Parms.MultiplayerCorrelationId, &MultiplayerCorrelationId, 0x10 );
	SendPlayerSessionEnd_Parms.GameplayModeId = GameplayModeId;
	SendPlayerSessionEnd_Parms.DifficultyLevelId = DifficultyLevelId;
	SendPlayerSessionEnd_Parms.ExitStatusId = ExitStatusId;

	this->ProcessEvent ( pFnSendPlayerSessionEnd, &SendPlayerSessionEnd_Parms, NULL );

	return SendPlayerSessionEnd_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SendPlayerSessionStart
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 MultiplayerCorrelationId       ( CPF_Parm | CPF_NeedCtorLink )
// int                            GameplayModeId                 ( CPF_Parm )
// int                            DifficultyLevelId              ( CPF_Parm )

bool UOnlineSubsystemPC::SendPlayerSessionStart ( unsigned char LocalUserNum, struct FString MultiplayerCorrelationId, int GameplayModeId, int DifficultyLevelId )
{
	static UFunction* pFnSendPlayerSessionStart = NULL;

	if ( ! pFnSendPlayerSessionStart )
		pFnSendPlayerSessionStart = (UFunction*) UObject::GObjObjects()->GetIndex( 136946 );

	UOnlineSubsystemPC_execSendPlayerSessionStart_Parms SendPlayerSessionStart_Parms;
	SendPlayerSessionStart_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SendPlayerSessionStart_Parms.MultiplayerCorrelationId, &MultiplayerCorrelationId, 0x10 );
	SendPlayerSessionStart_Parms.GameplayModeId = GameplayModeId;
	SendPlayerSessionStart_Parms.DifficultyLevelId = DifficultyLevelId;

	this->ProcessEvent ( pFnSendPlayerSessionStart, &SendPlayerSessionStart_Parms, NULL );

	return SendPlayerSessionStart_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.UpdatePlayerMuteSetting
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  PlayerMuteSetting              ( CPF_Parm )

bool UOnlineSubsystemPC::UpdatePlayerMuteSetting ( unsigned long PlayerMuteSetting )
{
	static UFunction* pFnUpdatePlayerMuteSetting = NULL;

	if ( ! pFnUpdatePlayerMuteSetting )
		pFnUpdatePlayerMuteSetting = (UFunction*) UObject::GObjObjects()->GetIndex( 136943 );

	UOnlineSubsystemPC_execUpdatePlayerMuteSetting_Parms UpdatePlayerMuteSetting_Parms;
	UpdatePlayerMuteSetting_Parms.PlayerMuteSetting = PlayerMuteSetting;

	this->ProcessEvent ( pFnUpdatePlayerMuteSetting, &UpdatePlayerMuteSetting_Parms, NULL );

	return UpdatePlayerMuteSetting_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.IsTalkerMuted
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            ConsoleId                      ( CPF_Parm )

bool UOnlineSubsystemPC::IsTalkerMuted ( struct FUniqueNetId ConsoleId )
{
	static UFunction* pFnIsTalkerMuted = NULL;

	if ( ! pFnIsTalkerMuted )
		pFnIsTalkerMuted = (UFunction*) UObject::GObjObjects()->GetIndex( 136940 );

	UOnlineSubsystemPC_execIsTalkerMuted_Parms IsTalkerMuted_Parms;
	memcpy ( &IsTalkerMuted_Parms.ConsoleId, &ConsoleId, 0x8 );

	this->ProcessEvent ( pFnIsTalkerMuted, &IsTalkerMuted_Parms, NULL );

	return IsTalkerMuted_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearGetUserAccountInfoDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::ClearGetUserAccountInfoDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearGetUserAccountInfoDelegate = NULL;

	if ( ! pFnClearGetUserAccountInfoDelegate )
		pFnClearGetUserAccountInfoDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136938 );

	UOnlineSubsystemPC_execClearGetUserAccountInfoDelegate_Parms ClearGetUserAccountInfoDelegate_Parms;
	memcpy ( &ClearGetUserAccountInfoDelegate_Parms.InDelegate, &InDelegate, 0x10 );

	this->ProcessEvent ( pFnClearGetUserAccountInfoDelegate, &ClearGetUserAccountInfoDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddGetUserAccountInfoDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::AddGetUserAccountInfoDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddGetUserAccountInfoDelegate = NULL;

	if ( ! pFnAddGetUserAccountInfoDelegate )
		pFnAddGetUserAccountInfoDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136936 );

	UOnlineSubsystemPC_execAddGetUserAccountInfoDelegate_Parms AddGetUserAccountInfoDelegate_Parms;
	memcpy ( &AddGetUserAccountInfoDelegate_Parms.InDelegate, &InDelegate, 0x10 );

	this->ProcessEvent ( pFnAddGetUserAccountInfoDelegate, &AddGetUserAccountInfoDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetUserAccountInfo
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemPC::GetUserAccountInfo ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetUserAccountInfo = NULL;

	if ( ! pFnGetUserAccountInfo )
		pFnGetUserAccountInfo = (UFunction*) UObject::GObjObjects()->GetIndex( 136933 );

	UOnlineSubsystemPC_execGetUserAccountInfo_Parms GetUserAccountInfo_Parms;
	GetUserAccountInfo_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetUserAccountInfo, &GetUserAccountInfo_Parms, NULL );

	return GetUserAccountInfo_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnUserAccountInfoRetrieved
// [0x00120000] 
// Parameters infos:
// unsigned long                  bSuccessful                    ( CPF_Parm )
// struct FUserAccountInfo        AccountInfo                    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::OnUserAccountInfoRetrieved ( unsigned long bSuccessful, struct FUserAccountInfo AccountInfo )
{
	static UFunction* pFnOnUserAccountInfoRetrieved = NULL;

	if ( ! pFnOnUserAccountInfoRetrieved )
		pFnOnUserAccountInfoRetrieved = (UFunction*) UObject::GObjObjects()->GetIndex( 136158 );

	UOnlineSubsystemPC_execOnUserAccountInfoRetrieved_Parms OnUserAccountInfoRetrieved_Parms;
	OnUserAccountInfoRetrieved_Parms.bSuccessful = bSuccessful;
	memcpy ( &OnUserAccountInfoRetrieved_Parms.AccountInfo, &AccountInfo, 0x50 );

	this->ProcessEvent ( pFnOnUserAccountInfoRetrieved, &OnUserAccountInfoRetrieved_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.RemoveAccountPickerCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::RemoveAccountPickerCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnRemoveAccountPickerCompleteDelegate = NULL;

	if ( ! pFnRemoveAccountPickerCompleteDelegate )
		pFnRemoveAccountPickerCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136929 );

	UOnlineSubsystemPC_execRemoveAccountPickerCompleteDelegate_Parms RemoveAccountPickerCompleteDelegate_Parms;
	memcpy ( &RemoveAccountPickerCompleteDelegate_Parms.InDelegate, &InDelegate, 0x10 );

	this->ProcessEvent ( pFnRemoveAccountPickerCompleteDelegate, &RemoveAccountPickerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddAccountPickerCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::AddAccountPickerCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddAccountPickerCompleteDelegate = NULL;

	if ( ! pFnAddAccountPickerCompleteDelegate )
		pFnAddAccountPickerCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136927 );

	UOnlineSubsystemPC_execAddAccountPickerCompleteDelegate_Parms AddAccountPickerCompleteDelegate_Parms;
	memcpy ( &AddAccountPickerCompleteDelegate_Parms.InDelegate, &InDelegate, 0x10 );

	this->ProcessEvent ( pFnAddAccountPickerCompleteDelegate, &AddAccountPickerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnAccountPickerComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bForceLogin                    ( CPF_Parm )

void UOnlineSubsystemPC::OnAccountPickerComplete ( unsigned long bForceLogin )
{
	static UFunction* pFnOnAccountPickerComplete = NULL;

	if ( ! pFnOnAccountPickerComplete )
		pFnOnAccountPickerComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 136160 );

	UOnlineSubsystemPC_execOnAccountPickerComplete_Parms OnAccountPickerComplete_Parms;
	OnAccountPickerComplete_Parms.bForceLogin = bForceLogin;

	this->ProcessEvent ( pFnOnAccountPickerComplete, &OnAccountPickerComplete_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearFilterTextDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         FilterTextDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::ClearFilterTextDelegate ( struct FScriptDelegate FilterTextDelegate )
{
	static UFunction* pFnClearFilterTextDelegate = NULL;

	if ( ! pFnClearFilterTextDelegate )
		pFnClearFilterTextDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136924 );

	UOnlineSubsystemPC_execClearFilterTextDelegate_Parms ClearFilterTextDelegate_Parms;
	memcpy ( &ClearFilterTextDelegate_Parms.FilterTextDelegate, &FilterTextDelegate, 0x10 );

	this->ProcessEvent ( pFnClearFilterTextDelegate, &ClearFilterTextDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFilterTextDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         FilterTextDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::AddFilterTextDelegate ( struct FScriptDelegate FilterTextDelegate )
{
	static UFunction* pFnAddFilterTextDelegate = NULL;

	if ( ! pFnAddFilterTextDelegate )
		pFnAddFilterTextDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136922 );

	UOnlineSubsystemPC_execAddFilterTextDelegate_Parms AddFilterTextDelegate_Parms;
	memcpy ( &AddFilterTextDelegate_Parms.FilterTextDelegate, &FilterTextDelegate, 0x10 );

	this->ProcessEvent ( pFnAddFilterTextDelegate, &AddFilterTextDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnFilterText
// [0x00120000] 
// Parameters infos:
// struct FString                 OriginalText                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 FilteredText                   ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bCensorCompletely              ( CPF_Parm )

void UOnlineSubsystemPC::OnFilterText ( struct FString OriginalText, struct FString FilteredText, unsigned long bCensorCompletely )
{
	static UFunction* pFnOnFilterText = NULL;

	if ( ! pFnOnFilterText )
		pFnOnFilterText = (UFunction*) UObject::GObjObjects()->GetIndex( 136156 );

	UOnlineSubsystemPC_execOnFilterText_Parms OnFilterText_Parms;
	memcpy ( &OnFilterText_Parms.OriginalText, &OriginalText, 0x10 );
	memcpy ( &OnFilterText_Parms.FilteredText, &FilteredText, 0x10 );
	OnFilterText_Parms.bCensorCompletely = bCensorCompletely;

	this->ProcessEvent ( pFnOnFilterText, &OnFilterText_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CheckFilterText
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Text                           ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPC::CheckFilterText ( struct FString Text )
{
	static UFunction* pFnCheckFilterText = NULL;

	if ( ! pFnCheckFilterText )
		pFnCheckFilterText = (UFunction*) UObject::GObjObjects()->GetIndex( 136916 );

	UOnlineSubsystemPC_execCheckFilterText_Parms CheckFilterText_Parms;
	memcpy ( &CheckFilterText_Parms.Text, &Text, 0x10 );

	pFnCheckFilterText->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCheckFilterText, &CheckFilterText_Parms, NULL );

	pFnCheckFilterText->FunctionFlags |= 0x400;

	return CheckFilterText_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearPrivilegeCheckedForUsersByUniqueNetIdsDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         PrivilegeDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::ClearPrivilegeCheckedForUsersByUniqueNetIdsDelegate ( struct FScriptDelegate PrivilegeDelegate )
{
	static UFunction* pFnClearPrivilegeCheckedForUsersByUniqueNetIdsDelegate = NULL;

	if ( ! pFnClearPrivilegeCheckedForUsersByUniqueNetIdsDelegate )
		pFnClearPrivilegeCheckedForUsersByUniqueNetIdsDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136914 );

	UOnlineSubsystemPC_execClearPrivilegeCheckedForUsersByUniqueNetIdsDelegate_Parms ClearPrivilegeCheckedForUsersByUniqueNetIdsDelegate_Parms;
	memcpy ( &ClearPrivilegeCheckedForUsersByUniqueNetIdsDelegate_Parms.PrivilegeDelegate, &PrivilegeDelegate, 0x10 );

	this->ProcessEvent ( pFnClearPrivilegeCheckedForUsersByUniqueNetIdsDelegate, &ClearPrivilegeCheckedForUsersByUniqueNetIdsDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddPrivilegeCheckedForUsersByUniqueNetIdsDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         PrivilegeDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::AddPrivilegeCheckedForUsersByUniqueNetIdsDelegate ( struct FScriptDelegate PrivilegeDelegate )
{
	static UFunction* pFnAddPrivilegeCheckedForUsersByUniqueNetIdsDelegate = NULL;

	if ( ! pFnAddPrivilegeCheckedForUsersByUniqueNetIdsDelegate )
		pFnAddPrivilegeCheckedForUsersByUniqueNetIdsDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136912 );

	UOnlineSubsystemPC_execAddPrivilegeCheckedForUsersByUniqueNetIdsDelegate_Parms AddPrivilegeCheckedForUsersByUniqueNetIdsDelegate_Parms;
	memcpy ( &AddPrivilegeCheckedForUsersByUniqueNetIdsDelegate_Parms.PrivilegeDelegate, &PrivilegeDelegate, 0x10 );

	this->ProcessEvent ( pFnAddPrivilegeCheckedForUsersByUniqueNetIdsDelegate, &AddPrivilegeCheckedForUsersByUniqueNetIdsDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnPrivilegeCheckedForUsersByUniqueNetIds
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  Privilege                      ( CPF_Parm )
// TArray< struct FPermissionsResultByUniqueNetId > Results                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::OnPrivilegeCheckedForUsersByUniqueNetIds ( unsigned char LocalUserNum, unsigned char Privilege, TArray< struct FPermissionsResultByUniqueNetId > Results )
{
	static UFunction* pFnOnPrivilegeCheckedForUsersByUniqueNetIds = NULL;

	if ( ! pFnOnPrivilegeCheckedForUsersByUniqueNetIds )
		pFnOnPrivilegeCheckedForUsersByUniqueNetIds = (UFunction*) UObject::GObjObjects()->GetIndex( 136153 );

	UOnlineSubsystemPC_execOnPrivilegeCheckedForUsersByUniqueNetIds_Parms OnPrivilegeCheckedForUsersByUniqueNetIds_Parms;
	OnPrivilegeCheckedForUsersByUniqueNetIds_Parms.LocalUserNum = LocalUserNum;
	OnPrivilegeCheckedForUsersByUniqueNetIds_Parms.Privilege = Privilege;
	memcpy ( &OnPrivilegeCheckedForUsersByUniqueNetIds_Parms.Results, &Results, 0x10 );

	this->ProcessEvent ( pFnOnPrivilegeCheckedForUsersByUniqueNetIds, &OnPrivilegeCheckedForUsersByUniqueNetIds_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearPrivilegeCheckedForUsersDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         PrivilegeDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::ClearPrivilegeCheckedForUsersDelegate ( struct FScriptDelegate PrivilegeDelegate )
{
	static UFunction* pFnClearPrivilegeCheckedForUsersDelegate = NULL;

	if ( ! pFnClearPrivilegeCheckedForUsersDelegate )
		pFnClearPrivilegeCheckedForUsersDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136906 );

	UOnlineSubsystemPC_execClearPrivilegeCheckedForUsersDelegate_Parms ClearPrivilegeCheckedForUsersDelegate_Parms;
	memcpy ( &ClearPrivilegeCheckedForUsersDelegate_Parms.PrivilegeDelegate, &PrivilegeDelegate, 0x10 );

	this->ProcessEvent ( pFnClearPrivilegeCheckedForUsersDelegate, &ClearPrivilegeCheckedForUsersDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddPrivilegeCheckedForUsersDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         PrivilegeDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::AddPrivilegeCheckedForUsersDelegate ( struct FScriptDelegate PrivilegeDelegate )
{
	static UFunction* pFnAddPrivilegeCheckedForUsersDelegate = NULL;

	if ( ! pFnAddPrivilegeCheckedForUsersDelegate )
		pFnAddPrivilegeCheckedForUsersDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136904 );

	UOnlineSubsystemPC_execAddPrivilegeCheckedForUsersDelegate_Parms AddPrivilegeCheckedForUsersDelegate_Parms;
	memcpy ( &AddPrivilegeCheckedForUsersDelegate_Parms.PrivilegeDelegate, &PrivilegeDelegate, 0x10 );

	this->ProcessEvent ( pFnAddPrivilegeCheckedForUsersDelegate, &AddPrivilegeCheckedForUsersDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnPrivilegeCheckedForUsers
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  Privilege                      ( CPF_Parm )
// TArray< struct FPermissionsResult > Results                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::OnPrivilegeCheckedForUsers ( unsigned char LocalUserNum, unsigned char Privilege, TArray< struct FPermissionsResult > Results )
{
	static UFunction* pFnOnPrivilegeCheckedForUsers = NULL;

	if ( ! pFnOnPrivilegeCheckedForUsers )
		pFnOnPrivilegeCheckedForUsers = (UFunction*) UObject::GObjObjects()->GetIndex( 136150 );

	UOnlineSubsystemPC_execOnPrivilegeCheckedForUsers_Parms OnPrivilegeCheckedForUsers_Parms;
	OnPrivilegeCheckedForUsers_Parms.LocalUserNum = LocalUserNum;
	OnPrivilegeCheckedForUsers_Parms.Privilege = Privilege;
	memcpy ( &OnPrivilegeCheckedForUsers_Parms.Results, &Results, 0x10 );

	this->ProcessEvent ( pFnOnPrivilegeCheckedForUsers, &OnPrivilegeCheckedForUsers_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanPlayOnlineWithUsersByUniqueNetIds
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FUniqueNetId >  Users                          ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPC::CanPlayOnlineWithUsersByUniqueNetIds ( unsigned char LocalUserNum, TArray< struct FUniqueNetId > Users )
{
	static UFunction* pFnCanPlayOnlineWithUsersByUniqueNetIds = NULL;

	if ( ! pFnCanPlayOnlineWithUsersByUniqueNetIds )
		pFnCanPlayOnlineWithUsersByUniqueNetIds = (UFunction*) UObject::GObjObjects()->GetIndex( 136895 );

	UOnlineSubsystemPC_execCanPlayOnlineWithUsersByUniqueNetIds_Parms CanPlayOnlineWithUsersByUniqueNetIds_Parms;
	CanPlayOnlineWithUsersByUniqueNetIds_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &CanPlayOnlineWithUsersByUniqueNetIds_Parms.Users, &Users, 0x10 );

	pFnCanPlayOnlineWithUsersByUniqueNetIds->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanPlayOnlineWithUsersByUniqueNetIds, &CanPlayOnlineWithUsersByUniqueNetIds_Parms, NULL );

	pFnCanPlayOnlineWithUsersByUniqueNetIds->FunctionFlags |= 0x400;

	return CanPlayOnlineWithUsersByUniqueNetIds_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanPlayOnlineWithUsers
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FSessionMemberInfo > Users                          ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPC::CanPlayOnlineWithUsers ( unsigned char LocalUserNum, TArray< struct FSessionMemberInfo > Users )
{
	static UFunction* pFnCanPlayOnlineWithUsers = NULL;

	if ( ! pFnCanPlayOnlineWithUsers )
		pFnCanPlayOnlineWithUsers = (UFunction*) UObject::GObjObjects()->GetIndex( 136890 );

	UOnlineSubsystemPC_execCanPlayOnlineWithUsers_Parms CanPlayOnlineWithUsers_Parms;
	CanPlayOnlineWithUsers_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &CanPlayOnlineWithUsers_Parms.Users, &Users, 0x10 );

	pFnCanPlayOnlineWithUsers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanPlayOnlineWithUsers, &CanPlayOnlineWithUsers_Parms, NULL );

	pFnCanPlayOnlineWithUsers->FunctionFlags |= 0x400;

	return CanPlayOnlineWithUsers_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanCommunicateTextWithUsersByUniqueNetIds
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FUniqueNetId >  Users                          ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPC::CanCommunicateTextWithUsersByUniqueNetIds ( unsigned char LocalUserNum, TArray< struct FUniqueNetId > Users )
{
	static UFunction* pFnCanCommunicateTextWithUsersByUniqueNetIds = NULL;

	if ( ! pFnCanCommunicateTextWithUsersByUniqueNetIds )
		pFnCanCommunicateTextWithUsersByUniqueNetIds = (UFunction*) UObject::GObjObjects()->GetIndex( 136885 );

	UOnlineSubsystemPC_execCanCommunicateTextWithUsersByUniqueNetIds_Parms CanCommunicateTextWithUsersByUniqueNetIds_Parms;
	CanCommunicateTextWithUsersByUniqueNetIds_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &CanCommunicateTextWithUsersByUniqueNetIds_Parms.Users, &Users, 0x10 );

	pFnCanCommunicateTextWithUsersByUniqueNetIds->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanCommunicateTextWithUsersByUniqueNetIds, &CanCommunicateTextWithUsersByUniqueNetIds_Parms, NULL );

	pFnCanCommunicateTextWithUsersByUniqueNetIds->FunctionFlags |= 0x400;

	return CanCommunicateTextWithUsersByUniqueNetIds_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanCommunicateTextWithUsers
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FSessionMemberInfo > Users                          ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPC::CanCommunicateTextWithUsers ( unsigned char LocalUserNum, TArray< struct FSessionMemberInfo > Users )
{
	static UFunction* pFnCanCommunicateTextWithUsers = NULL;

	if ( ! pFnCanCommunicateTextWithUsers )
		pFnCanCommunicateTextWithUsers = (UFunction*) UObject::GObjObjects()->GetIndex( 136880 );

	UOnlineSubsystemPC_execCanCommunicateTextWithUsers_Parms CanCommunicateTextWithUsers_Parms;
	CanCommunicateTextWithUsers_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &CanCommunicateTextWithUsers_Parms.Users, &Users, 0x10 );

	pFnCanCommunicateTextWithUsers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanCommunicateTextWithUsers, &CanCommunicateTextWithUsers_Parms, NULL );

	pFnCanCommunicateTextWithUsers->FunctionFlags |= 0x400;

	return CanCommunicateTextWithUsers_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanCommunicateVoiceWithUsersByUniqueNetIds
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FUniqueNetId >  Users                          ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPC::CanCommunicateVoiceWithUsersByUniqueNetIds ( unsigned char LocalUserNum, TArray< struct FUniqueNetId > Users )
{
	static UFunction* pFnCanCommunicateVoiceWithUsersByUniqueNetIds = NULL;

	if ( ! pFnCanCommunicateVoiceWithUsersByUniqueNetIds )
		pFnCanCommunicateVoiceWithUsersByUniqueNetIds = (UFunction*) UObject::GObjObjects()->GetIndex( 136875 );

	UOnlineSubsystemPC_execCanCommunicateVoiceWithUsersByUniqueNetIds_Parms CanCommunicateVoiceWithUsersByUniqueNetIds_Parms;
	CanCommunicateVoiceWithUsersByUniqueNetIds_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &CanCommunicateVoiceWithUsersByUniqueNetIds_Parms.Users, &Users, 0x10 );

	this->ProcessEvent ( pFnCanCommunicateVoiceWithUsersByUniqueNetIds, &CanCommunicateVoiceWithUsersByUniqueNetIds_Parms, NULL );

	return CanCommunicateVoiceWithUsersByUniqueNetIds_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanCommunicateVoiceWithUsers
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FSessionMemberInfo > Users                          ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPC::CanCommunicateVoiceWithUsers ( unsigned char LocalUserNum, TArray< struct FSessionMemberInfo > Users )
{
	static UFunction* pFnCanCommunicateVoiceWithUsers = NULL;

	if ( ! pFnCanCommunicateVoiceWithUsers )
		pFnCanCommunicateVoiceWithUsers = (UFunction*) UObject::GObjObjects()->GetIndex( 136870 );

	UOnlineSubsystemPC_execCanCommunicateVoiceWithUsers_Parms CanCommunicateVoiceWithUsers_Parms;
	CanCommunicateVoiceWithUsers_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &CanCommunicateVoiceWithUsers_Parms.Users, &Users, 0x10 );

	this->ProcessEvent ( pFnCanCommunicateVoiceWithUsers, &CanCommunicateVoiceWithUsers_Parms, NULL );

	return CanCommunicateVoiceWithUsers_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CheckForGameInviteOnLaunch
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::CheckForGameInviteOnLaunch ( )
{
	static UFunction* pFnCheckForGameInviteOnLaunch = NULL;

	if ( ! pFnCheckForGameInviteOnLaunch )
		pFnCheckForGameInviteOnLaunch = (UFunction*) UObject::GObjObjects()->GetIndex( 136869 );

	UOnlineSubsystemPC_execCheckForGameInviteOnLaunch_Parms CheckForGameInviteOnLaunch_Parms;

	this->ProcessEvent ( pFnCheckForGameInviteOnLaunch, &CheckForGameInviteOnLaunch_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetControllerIdFromNetId
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// int                            ControllerId                   ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemPC::GetControllerIdFromNetId ( struct FUniqueNetId PlayerID, int* ControllerId )
{
	static UFunction* pFnGetControllerIdFromNetId = NULL;

	if ( ! pFnGetControllerIdFromNetId )
		pFnGetControllerIdFromNetId = (UFunction*) UObject::GObjObjects()->GetIndex( 136865 );

	UOnlineSubsystemPC_execGetControllerIdFromNetId_Parms GetControllerIdFromNetId_Parms;
	memcpy ( &GetControllerIdFromNetId_Parms.PlayerID, &PlayerID, 0x8 );

	this->ProcessEvent ( pFnGetControllerIdFromNetId, &GetControllerIdFromNetId_Parms, NULL );

	if ( ControllerId )
		*ControllerId = GetControllerIdFromNetId_Parms.ControllerId;

	return GetControllerIdFromNetId_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CacheLoggedInGamepad
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::CacheLoggedInGamepad ( )
{
	static UFunction* pFnCacheLoggedInGamepad = NULL;

	if ( ! pFnCacheLoggedInGamepad )
		pFnCacheLoggedInGamepad = (UFunction*) UObject::GObjObjects()->GetIndex( 136864 );

	UOnlineSubsystemPC_execCacheLoggedInGamepad_Parms CacheLoggedInGamepad_Parms;

	this->ProcessEvent ( pFnCacheLoggedInGamepad, &CacheLoggedInGamepad_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.UnsubscribeToStatisticEvent
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerNetId                    ( CPF_Parm )
// struct FName                   StatName                       ( CPF_Parm )

void UOnlineSubsystemPC::UnsubscribeToStatisticEvent ( unsigned char LocalUserNum, struct FUniqueNetId PlayerNetId, struct FName StatName )
{
	static UFunction* pFnUnsubscribeToStatisticEvent = NULL;

	if ( ! pFnUnsubscribeToStatisticEvent )
		pFnUnsubscribeToStatisticEvent = (UFunction*) UObject::GObjObjects()->GetIndex( 136860 );

	UOnlineSubsystemPC_execUnsubscribeToStatisticEvent_Parms UnsubscribeToStatisticEvent_Parms;
	UnsubscribeToStatisticEvent_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &UnsubscribeToStatisticEvent_Parms.PlayerNetId, &PlayerNetId, 0x8 );
	memcpy ( &UnsubscribeToStatisticEvent_Parms.StatName, &StatName, 0x8 );

	this->ProcessEvent ( pFnUnsubscribeToStatisticEvent, &UnsubscribeToStatisticEvent_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SubscribeToStatisticEvent
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerNetId                    ( CPF_Parm )
// struct FName                   StatName                       ( CPF_Parm )
// struct FScriptDelegate         EventDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::SubscribeToStatisticEvent ( unsigned char LocalUserNum, struct FUniqueNetId PlayerNetId, struct FName StatName, struct FScriptDelegate EventDelegate )
{
	static UFunction* pFnSubscribeToStatisticEvent = NULL;

	if ( ! pFnSubscribeToStatisticEvent )
		pFnSubscribeToStatisticEvent = (UFunction*) UObject::GObjObjects()->GetIndex( 136855 );

	UOnlineSubsystemPC_execSubscribeToStatisticEvent_Parms SubscribeToStatisticEvent_Parms;
	SubscribeToStatisticEvent_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SubscribeToStatisticEvent_Parms.PlayerNetId, &PlayerNetId, 0x8 );
	memcpy ( &SubscribeToStatisticEvent_Parms.StatName, &StatName, 0x8 );
	memcpy ( &SubscribeToStatisticEvent_Parms.EventDelegate, &EventDelegate, 0x10 );

	this->ProcessEvent ( pFnSubscribeToStatisticEvent, &SubscribeToStatisticEvent_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnStatisticChanged
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            PlayerNetId                    ( CPF_Parm )
// struct FName                   StatName                       ( CPF_Parm )
// struct FString                 NewStatValue                   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::OnStatisticChanged ( struct FUniqueNetId PlayerNetId, struct FName StatName, struct FString NewStatValue )
{
	static UFunction* pFnOnStatisticChanged = NULL;

	if ( ! pFnOnStatisticChanged )
		pFnOnStatisticChanged = (UFunction*) UObject::GObjObjects()->GetIndex( 136165 );

	UOnlineSubsystemPC_execOnStatisticChanged_Parms OnStatisticChanged_Parms;
	memcpy ( &OnStatisticChanged_Parms.PlayerNetId, &PlayerNetId, 0x8 );
	memcpy ( &OnStatisticChanged_Parms.StatName, &StatName, 0x8 );
	memcpy ( &OnStatisticChanged_Parms.NewStatValue, &NewStatValue, 0x10 );

	this->ProcessEvent ( pFnOnStatisticChanged, &OnStatisticChanged_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearAchievements
// [0x00024000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_OptionalParm | CPF_Parm )

void UOnlineSubsystemPC::ClearAchievements ( unsigned char LocalUserNum, int TitleId )
{
	static UFunction* pFnClearAchievements = NULL;

	if ( ! pFnClearAchievements )
		pFnClearAchievements = (UFunction*) UObject::GObjObjects()->GetIndex( 136849 );

	UOnlineSubsystemPC_execClearAchievements_Parms ClearAchievements_Parms;
	ClearAchievements_Parms.LocalUserNum = LocalUserNum;
	ClearAchievements_Parms.TitleId = TitleId;

	this->ProcessEvent ( pFnClearAchievements, &ClearAchievements_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetAchievements
// [0x00424000] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FAchievementDetails > Achievements                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char UOnlineSubsystemPC::GetAchievements ( unsigned char LocalUserNum, int TitleId, TArray< struct FAchievementDetails >* Achievements )
{
	static UFunction* pFnGetAchievements = NULL;

	if ( ! pFnGetAchievements )
		pFnGetAchievements = (UFunction*) UObject::GObjObjects()->GetIndex( 136843 );

	UOnlineSubsystemPC_execGetAchievements_Parms GetAchievements_Parms;
	GetAchievements_Parms.LocalUserNum = LocalUserNum;
	GetAchievements_Parms.TitleId = TitleId;

	this->ProcessEvent ( pFnGetAchievements, &GetAchievements_Parms, NULL );

	if ( Achievements )
		memcpy ( Achievements, &GetAchievements_Parms.Achievements, 0x10 );

	return GetAchievements_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadAchievementsCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadAchievementsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::ClearReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate )
{
	static UFunction* pFnClearReadAchievementsCompleteDelegate = NULL;

	if ( ! pFnClearReadAchievementsCompleteDelegate )
		pFnClearReadAchievementsCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136840 );

	UOnlineSubsystemPC_execClearReadAchievementsCompleteDelegate_Parms ClearReadAchievementsCompleteDelegate_Parms;
	ClearReadAchievementsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadAchievementsCompleteDelegate_Parms.ReadAchievementsCompleteDelegate, &ReadAchievementsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReadAchievementsCompleteDelegate, &ClearReadAchievementsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadAchievementsCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadAchievementsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::AddReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate )
{
	static UFunction* pFnAddReadAchievementsCompleteDelegate = NULL;

	if ( ! pFnAddReadAchievementsCompleteDelegate )
		pFnAddReadAchievementsCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136837 );

	UOnlineSubsystemPC_execAddReadAchievementsCompleteDelegate_Parms AddReadAchievementsCompleteDelegate_Parms;
	AddReadAchievementsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadAchievementsCompleteDelegate_Parms.ReadAchievementsCompleteDelegate, &ReadAchievementsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReadAchievementsCompleteDelegate, &AddReadAchievementsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadAchievementsComplete
// [0x00120000] 
// Parameters infos:
// int                            TitleId                        ( CPF_Parm )

void UOnlineSubsystemPC::OnReadAchievementsComplete ( int TitleId )
{
	static UFunction* pFnOnReadAchievementsComplete = NULL;

	if ( ! pFnOnReadAchievementsComplete )
		pFnOnReadAchievementsComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 136167 );

	UOnlineSubsystemPC_execOnReadAchievementsComplete_Parms OnReadAchievementsComplete_Parms;
	OnReadAchievementsComplete_Parms.TitleId = TitleId;

	this->ProcessEvent ( pFnOnReadAchievementsComplete, &OnReadAchievementsComplete_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadAchievements
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bShouldReadText                ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bShouldReadImages              ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemPC::ReadAchievements ( unsigned char LocalUserNum, int TitleId, unsigned long bShouldReadText, unsigned long bShouldReadImages )
{
	static UFunction* pFnReadAchievements = NULL;

	if ( ! pFnReadAchievements )
		pFnReadAchievements = (UFunction*) UObject::GObjObjects()->GetIndex( 136830 );

	UOnlineSubsystemPC_execReadAchievements_Parms ReadAchievements_Parms;
	ReadAchievements_Parms.LocalUserNum = LocalUserNum;
	ReadAchievements_Parms.TitleId = TitleId;
	ReadAchievements_Parms.bShouldReadText = bShouldReadText;
	ReadAchievements_Parms.bShouldReadImages = bShouldReadImages;

	this->ProcessEvent ( pFnReadAchievements, &ReadAchievements_Parms, NULL );

	return ReadAchievements_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearUnlockAchievementCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         UnlockAchievementCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::ClearUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate )
{
	static UFunction* pFnClearUnlockAchievementCompleteDelegate = NULL;

	if ( ! pFnClearUnlockAchievementCompleteDelegate )
		pFnClearUnlockAchievementCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136827 );

	UOnlineSubsystemPC_execClearUnlockAchievementCompleteDelegate_Parms ClearUnlockAchievementCompleteDelegate_Parms;
	ClearUnlockAchievementCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearUnlockAchievementCompleteDelegate_Parms.UnlockAchievementCompleteDelegate, &UnlockAchievementCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearUnlockAchievementCompleteDelegate, &ClearUnlockAchievementCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddUnlockAchievementCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         UnlockAchievementCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::AddUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate )
{
	static UFunction* pFnAddUnlockAchievementCompleteDelegate = NULL;

	if ( ! pFnAddUnlockAchievementCompleteDelegate )
		pFnAddUnlockAchievementCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136824 );

	UOnlineSubsystemPC_execAddUnlockAchievementCompleteDelegate_Parms AddUnlockAchievementCompleteDelegate_Parms;
	AddUnlockAchievementCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddUnlockAchievementCompleteDelegate_Parms.UnlockAchievementCompleteDelegate, &UnlockAchievementCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddUnlockAchievementCompleteDelegate, &AddUnlockAchievementCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnUnlockAchievementComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPC::OnUnlockAchievementComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnUnlockAchievementComplete = NULL;

	if ( ! pFnOnUnlockAchievementComplete )
		pFnOnUnlockAchievementComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 136169 );

	UOnlineSubsystemPC_execOnUnlockAchievementComplete_Parms OnUnlockAchievementComplete_Parms;
	OnUnlockAchievementComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnUnlockAchievementComplete, &OnUnlockAchievementComplete_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.UnlockAchievement
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            AchievementId                  ( CPF_Parm )
// float                          PercentComplete                ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemPC::UnlockAchievement ( unsigned char LocalUserNum, int AchievementId, float PercentComplete )
{
	static UFunction* pFnUnlockAchievement = NULL;

	if ( ! pFnUnlockAchievement )
		pFnUnlockAchievement = (UFunction*) UObject::GObjObjects()->GetIndex( 136818 );

	UOnlineSubsystemPC_execUnlockAchievement_Parms UnlockAchievement_Parms;
	UnlockAchievement_Parms.LocalUserNum = LocalUserNum;
	UnlockAchievement_Parms.AchievementId = AchievementId;
	UnlockAchievement_Parms.PercentComplete = PercentComplete;

	this->ProcessEvent ( pFnUnlockAchievement, &UnlockAchievement_Parms, NULL );

	return UnlockAchievement_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.DeleteMessage
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            MessageIndex                   ( CPF_Parm )

bool UOnlineSubsystemPC::DeleteMessage ( unsigned char LocalUserNum, int MessageIndex )
{
	static UFunction* pFnDeleteMessage = NULL;

	if ( ! pFnDeleteMessage )
		pFnDeleteMessage = (UFunction*) UObject::GObjObjects()->GetIndex( 136814 );

	UOnlineSubsystemPC_execDeleteMessage_Parms DeleteMessage_Parms;
	DeleteMessage_Parms.LocalUserNum = LocalUserNum;
	DeleteMessage_Parms.MessageIndex = MessageIndex;

	this->ProcessEvent ( pFnDeleteMessage, &DeleteMessage_Parms, NULL );

	return DeleteMessage_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearFriendMessageReceivedDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         MessageDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::ClearFriendMessageReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate )
{
	static UFunction* pFnClearFriendMessageReceivedDelegate = NULL;

	if ( ! pFnClearFriendMessageReceivedDelegate )
		pFnClearFriendMessageReceivedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136811 );

	UOnlineSubsystemPC_execClearFriendMessageReceivedDelegate_Parms ClearFriendMessageReceivedDelegate_Parms;
	ClearFriendMessageReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearFriendMessageReceivedDelegate_Parms.MessageDelegate, &MessageDelegate, 0x10 );

	this->ProcessEvent ( pFnClearFriendMessageReceivedDelegate, &ClearFriendMessageReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFriendMessageReceivedDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         MessageDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::AddFriendMessageReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate )
{
	static UFunction* pFnAddFriendMessageReceivedDelegate = NULL;

	if ( ! pFnAddFriendMessageReceivedDelegate )
		pFnAddFriendMessageReceivedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136808 );

	UOnlineSubsystemPC_execAddFriendMessageReceivedDelegate_Parms AddFriendMessageReceivedDelegate_Parms;
	AddFriendMessageReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriendMessageReceivedDelegate_Parms.MessageDelegate, &MessageDelegate, 0x10 );

	this->ProcessEvent ( pFnAddFriendMessageReceivedDelegate, &AddFriendMessageReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnFriendMessageReceived
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            SendingPlayer                  ( CPF_Parm )
// struct FString                 SendingNick                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::OnFriendMessageReceived ( unsigned char LocalUserNum, struct FUniqueNetId SendingPlayer, struct FString SendingNick, struct FString Message )
{
	static UFunction* pFnOnFriendMessageReceived = NULL;

	if ( ! pFnOnFriendMessageReceived )
		pFnOnFriendMessageReceived = (UFunction*) UObject::GObjObjects()->GetIndex( 136171 );

	UOnlineSubsystemPC_execOnFriendMessageReceived_Parms OnFriendMessageReceived_Parms;
	OnFriendMessageReceived_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OnFriendMessageReceived_Parms.SendingPlayer, &SendingPlayer, 0x8 );
	memcpy ( &OnFriendMessageReceived_Parms.SendingNick, &SendingNick, 0x10 );
	memcpy ( &OnFriendMessageReceived_Parms.Message, &Message, 0x10 );

	this->ProcessEvent ( pFnOnFriendMessageReceived, &OnFriendMessageReceived_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetFriendMessages
// [0x00420000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FOnlineFriendMessage > FriendMessages                 ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::GetFriendMessages ( unsigned char LocalUserNum, TArray< struct FOnlineFriendMessage >* FriendMessages )
{
	static UFunction* pFnGetFriendMessages = NULL;

	if ( ! pFnGetFriendMessages )
		pFnGetFriendMessages = (UFunction*) UObject::GObjObjects()->GetIndex( 136800 );

	UOnlineSubsystemPC_execGetFriendMessages_Parms GetFriendMessages_Parms;
	GetFriendMessages_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetFriendMessages, &GetFriendMessages_Parms, NULL );

	if ( FriendMessages )
		memcpy ( FriendMessages, &GetFriendMessages_Parms.FriendMessages, 0x10 );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearJoinFriendGameCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::ClearJoinFriendGameCompleteDelegate ( struct FScriptDelegate JoinFriendGameCompleteDelegate )
{
	static UFunction* pFnClearJoinFriendGameCompleteDelegate = NULL;

	if ( ! pFnClearJoinFriendGameCompleteDelegate )
		pFnClearJoinFriendGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136798 );

	UOnlineSubsystemPC_execClearJoinFriendGameCompleteDelegate_Parms ClearJoinFriendGameCompleteDelegate_Parms;
	memcpy ( &ClearJoinFriendGameCompleteDelegate_Parms.JoinFriendGameCompleteDelegate, &JoinFriendGameCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearJoinFriendGameCompleteDelegate, &ClearJoinFriendGameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddJoinFriendGameCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::AddJoinFriendGameCompleteDelegate ( struct FScriptDelegate JoinFriendGameCompleteDelegate )
{
	static UFunction* pFnAddJoinFriendGameCompleteDelegate = NULL;

	if ( ! pFnAddJoinFriendGameCompleteDelegate )
		pFnAddJoinFriendGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136796 );

	UOnlineSubsystemPC_execAddJoinFriendGameCompleteDelegate_Parms AddJoinFriendGameCompleteDelegate_Parms;
	memcpy ( &AddJoinFriendGameCompleteDelegate_Parms.JoinFriendGameCompleteDelegate, &JoinFriendGameCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddJoinFriendGameCompleteDelegate, &AddJoinFriendGameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnJoinFriendGameComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPC::OnJoinFriendGameComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnJoinFriendGameComplete = NULL;

	if ( ! pFnOnJoinFriendGameComplete )
		pFnOnJoinFriendGameComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 136173 );

	UOnlineSubsystemPC_execOnJoinFriendGameComplete_Parms OnJoinFriendGameComplete_Parms;
	OnJoinFriendGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnJoinFriendGameComplete, &OnJoinFriendGameComplete_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.JoinFriendGame
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            Friend                         ( CPF_Parm )

bool UOnlineSubsystemPC::JoinFriendGame ( unsigned char LocalUserNum, struct FUniqueNetId Friend )
{
	static UFunction* pFnJoinFriendGame = NULL;

	if ( ! pFnJoinFriendGame )
		pFnJoinFriendGame = (UFunction*) UObject::GObjObjects()->GetIndex( 136791 );

	UOnlineSubsystemPC_execJoinFriendGame_Parms JoinFriendGame_Parms;
	JoinFriendGame_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &JoinFriendGame_Parms.Friend, &Friend, 0x8 );

	this->ProcessEvent ( pFnJoinFriendGame, &JoinFriendGame_Parms, NULL );

	return JoinFriendGame_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReceivedGameInviteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReceivedGameInviteDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::ClearReceivedGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate )
{
	static UFunction* pFnClearReceivedGameInviteDelegate = NULL;

	if ( ! pFnClearReceivedGameInviteDelegate )
		pFnClearReceivedGameInviteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136788 );

	UOnlineSubsystemPC_execClearReceivedGameInviteDelegate_Parms ClearReceivedGameInviteDelegate_Parms;
	ClearReceivedGameInviteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReceivedGameInviteDelegate_Parms.ReceivedGameInviteDelegate, &ReceivedGameInviteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReceivedGameInviteDelegate, &ClearReceivedGameInviteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReceivedGameInviteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReceivedGameInviteDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::AddReceivedGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate )
{
	static UFunction* pFnAddReceivedGameInviteDelegate = NULL;

	if ( ! pFnAddReceivedGameInviteDelegate )
		pFnAddReceivedGameInviteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136785 );

	UOnlineSubsystemPC_execAddReceivedGameInviteDelegate_Parms AddReceivedGameInviteDelegate_Parms;
	AddReceivedGameInviteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReceivedGameInviteDelegate_Parms.ReceivedGameInviteDelegate, &ReceivedGameInviteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReceivedGameInviteDelegate, &AddReceivedGameInviteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReceivedGameInvite
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 InviterName                    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::OnReceivedGameInvite ( unsigned char LocalUserNum, struct FString InviterName )
{
	static UFunction* pFnOnReceivedGameInvite = NULL;

	if ( ! pFnOnReceivedGameInvite )
		pFnOnReceivedGameInvite = (UFunction*) UObject::GObjObjects()->GetIndex( 136175 );

	UOnlineSubsystemPC_execOnReceivedGameInvite_Parms OnReceivedGameInvite_Parms;
	OnReceivedGameInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OnReceivedGameInvite_Parms.InviterName, &InviterName, 0x10 );

	this->ProcessEvent ( pFnOnReceivedGameInvite, &OnReceivedGameInvite_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SendGameInviteToFriends
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// TArray< struct FUniqueNetId >  Friends                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Text                           ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPC::SendGameInviteToFriends ( unsigned char LocalUserNum, struct FName SessionName, TArray< struct FUniqueNetId > Friends, struct FString Text )
{
	static UFunction* pFnSendGameInviteToFriends = NULL;

	if ( ! pFnSendGameInviteToFriends )
		pFnSendGameInviteToFriends = (UFunction*) UObject::GObjObjects()->GetIndex( 136776 );

	UOnlineSubsystemPC_execSendGameInviteToFriends_Parms SendGameInviteToFriends_Parms;
	SendGameInviteToFriends_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SendGameInviteToFriends_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &SendGameInviteToFriends_Parms.Friends, &Friends, 0x10 );
	memcpy ( &SendGameInviteToFriends_Parms.Text, &Text, 0x10 );

	this->ProcessEvent ( pFnSendGameInviteToFriends, &SendGameInviteToFriends_Parms, NULL );

	return SendGameInviteToFriends_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SendGameInviteToFriend
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            Friend                         ( CPF_Parm )
// struct FString                 Text                           ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPC::SendGameInviteToFriend ( unsigned char LocalUserNum, struct FName SessionName, struct FUniqueNetId Friend, struct FString Text )
{
	static UFunction* pFnSendGameInviteToFriend = NULL;

	if ( ! pFnSendGameInviteToFriend )
		pFnSendGameInviteToFriend = (UFunction*) UObject::GObjObjects()->GetIndex( 136770 );

	UOnlineSubsystemPC_execSendGameInviteToFriend_Parms SendGameInviteToFriend_Parms;
	SendGameInviteToFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SendGameInviteToFriend_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &SendGameInviteToFriend_Parms.Friend, &Friend, 0x8 );
	memcpy ( &SendGameInviteToFriend_Parms.Text, &Text, 0x10 );

	this->ProcessEvent ( pFnSendGameInviteToFriend, &SendGameInviteToFriend_Parms, NULL );

	return SendGameInviteToFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SendMessageToFriend
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            Friend                         ( CPF_Parm )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPC::SendMessageToFriend ( unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Message )
{
	static UFunction* pFnSendMessageToFriend = NULL;

	if ( ! pFnSendMessageToFriend )
		pFnSendMessageToFriend = (UFunction*) UObject::GObjObjects()->GetIndex( 136765 );

	UOnlineSubsystemPC_execSendMessageToFriend_Parms SendMessageToFriend_Parms;
	SendMessageToFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SendMessageToFriend_Parms.Friend, &Friend, 0x8 );
	memcpy ( &SendMessageToFriend_Parms.Message, &Message, 0x10 );

	this->ProcessEvent ( pFnSendMessageToFriend, &SendMessageToFriend_Parms, NULL );

	return SendMessageToFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearFriendInviteReceivedDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InviteDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::ClearFriendInviteReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate )
{
	static UFunction* pFnClearFriendInviteReceivedDelegate = NULL;

	if ( ! pFnClearFriendInviteReceivedDelegate )
		pFnClearFriendInviteReceivedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136762 );

	UOnlineSubsystemPC_execClearFriendInviteReceivedDelegate_Parms ClearFriendInviteReceivedDelegate_Parms;
	ClearFriendInviteReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearFriendInviteReceivedDelegate_Parms.InviteDelegate, &InviteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearFriendInviteReceivedDelegate, &ClearFriendInviteReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFriendInviteReceivedDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InviteDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::AddFriendInviteReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate )
{
	static UFunction* pFnAddFriendInviteReceivedDelegate = NULL;

	if ( ! pFnAddFriendInviteReceivedDelegate )
		pFnAddFriendInviteReceivedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136759 );

	UOnlineSubsystemPC_execAddFriendInviteReceivedDelegate_Parms AddFriendInviteReceivedDelegate_Parms;
	AddFriendInviteReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriendInviteReceivedDelegate_Parms.InviteDelegate, &InviteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddFriendInviteReceivedDelegate, &AddFriendInviteReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnFriendInviteReceived
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            RequestingPlayer               ( CPF_Parm )
// struct FString                 RequestingNick                 ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::OnFriendInviteReceived ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer, struct FString RequestingNick, struct FString Message )
{
	static UFunction* pFnOnFriendInviteReceived = NULL;

	if ( ! pFnOnFriendInviteReceived )
		pFnOnFriendInviteReceived = (UFunction*) UObject::GObjObjects()->GetIndex( 136177 );

	UOnlineSubsystemPC_execOnFriendInviteReceived_Parms OnFriendInviteReceived_Parms;
	OnFriendInviteReceived_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OnFriendInviteReceived_Parms.RequestingPlayer, &RequestingPlayer, 0x8 );
	memcpy ( &OnFriendInviteReceived_Parms.RequestingNick, &RequestingNick, 0x10 );
	memcpy ( &OnFriendInviteReceived_Parms.Message, &Message, 0x10 );

	this->ProcessEvent ( pFnOnFriendInviteReceived, &OnFriendInviteReceived_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.RemoveFriend
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            FormerFriend                   ( CPF_Parm )

bool UOnlineSubsystemPC::RemoveFriend ( unsigned char LocalUserNum, struct FUniqueNetId FormerFriend )
{
	static UFunction* pFnRemoveFriend = NULL;

	if ( ! pFnRemoveFriend )
		pFnRemoveFriend = (UFunction*) UObject::GObjObjects()->GetIndex( 136751 );

	UOnlineSubsystemPC_execRemoveFriend_Parms RemoveFriend_Parms;
	RemoveFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &RemoveFriend_Parms.FormerFriend, &FormerFriend, 0x8 );

	this->ProcessEvent ( pFnRemoveFriend, &RemoveFriend_Parms, NULL );

	return RemoveFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.DenyFriendInvite
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            RequestingPlayer               ( CPF_Parm )

bool UOnlineSubsystemPC::DenyFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer )
{
	static UFunction* pFnDenyFriendInvite = NULL;

	if ( ! pFnDenyFriendInvite )
		pFnDenyFriendInvite = (UFunction*) UObject::GObjObjects()->GetIndex( 136747 );

	UOnlineSubsystemPC_execDenyFriendInvite_Parms DenyFriendInvite_Parms;
	DenyFriendInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &DenyFriendInvite_Parms.RequestingPlayer, &RequestingPlayer, 0x8 );

	this->ProcessEvent ( pFnDenyFriendInvite, &DenyFriendInvite_Parms, NULL );

	return DenyFriendInvite_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AcceptFriendInvite
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            RequestingPlayer               ( CPF_Parm )

bool UOnlineSubsystemPC::AcceptFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer )
{
	static UFunction* pFnAcceptFriendInvite = NULL;

	if ( ! pFnAcceptFriendInvite )
		pFnAcceptFriendInvite = (UFunction*) UObject::GObjObjects()->GetIndex( 136743 );

	UOnlineSubsystemPC_execAcceptFriendInvite_Parms AcceptFriendInvite_Parms;
	AcceptFriendInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AcceptFriendInvite_Parms.RequestingPlayer, &RequestingPlayer, 0x8 );

	this->ProcessEvent ( pFnAcceptFriendInvite, &AcceptFriendInvite_Parms, NULL );

	return AcceptFriendInvite_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearAddFriendByNameCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         FriendDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::ClearAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate )
{
	static UFunction* pFnClearAddFriendByNameCompleteDelegate = NULL;

	if ( ! pFnClearAddFriendByNameCompleteDelegate )
		pFnClearAddFriendByNameCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136740 );

	UOnlineSubsystemPC_execClearAddFriendByNameCompleteDelegate_Parms ClearAddFriendByNameCompleteDelegate_Parms;
	ClearAddFriendByNameCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearAddFriendByNameCompleteDelegate_Parms.FriendDelegate, &FriendDelegate, 0x10 );

	this->ProcessEvent ( pFnClearAddFriendByNameCompleteDelegate, &ClearAddFriendByNameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddAddFriendByNameCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         FriendDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::AddAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate )
{
	static UFunction* pFnAddAddFriendByNameCompleteDelegate = NULL;

	if ( ! pFnAddAddFriendByNameCompleteDelegate )
		pFnAddAddFriendByNameCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136737 );

	UOnlineSubsystemPC_execAddAddFriendByNameCompleteDelegate_Parms AddAddFriendByNameCompleteDelegate_Parms;
	AddAddFriendByNameCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddAddFriendByNameCompleteDelegate_Parms.FriendDelegate, &FriendDelegate, 0x10 );

	this->ProcessEvent ( pFnAddAddFriendByNameCompleteDelegate, &AddAddFriendByNameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnAddFriendByNameComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPC::OnAddFriendByNameComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnAddFriendByNameComplete = NULL;

	if ( ! pFnOnAddFriendByNameComplete )
		pFnOnAddFriendByNameComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 136179 );

	UOnlineSubsystemPC_execOnAddFriendByNameComplete_Parms OnAddFriendByNameComplete_Parms;
	OnAddFriendByNameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnAddFriendByNameComplete, &OnAddFriendByNameComplete_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFriendByName
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 FriendName                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPC::AddFriendByName ( unsigned char LocalUserNum, struct FString FriendName, struct FString Message )
{
	static UFunction* pFnAddFriendByName = NULL;

	if ( ! pFnAddFriendByName )
		pFnAddFriendByName = (UFunction*) UObject::GObjObjects()->GetIndex( 136731 );

	UOnlineSubsystemPC_execAddFriendByName_Parms AddFriendByName_Parms;
	AddFriendByName_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriendByName_Parms.FriendName, &FriendName, 0x10 );
	memcpy ( &AddFriendByName_Parms.Message, &Message, 0x10 );

	this->ProcessEvent ( pFnAddFriendByName, &AddFriendByName_Parms, NULL );

	return AddFriendByName_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFriend
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            NewFriend                      ( CPF_Parm )
// struct FString                 Message                        ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPC::AddFriend ( unsigned char LocalUserNum, struct FUniqueNetId NewFriend, struct FString Message )
{
	static UFunction* pFnAddFriend = NULL;

	if ( ! pFnAddFriend )
		pFnAddFriend = (UFunction*) UObject::GObjObjects()->GetIndex( 136726 );

	UOnlineSubsystemPC_execAddFriend_Parms AddFriend_Parms;
	AddFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriend_Parms.NewFriend, &NewFriend, 0x8 );
	memcpy ( &AddFriend_Parms.Message, &Message, 0x10 );

	this->ProcessEvent ( pFnAddFriend, &AddFriend_Parms, NULL );

	return AddFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearWritePlayerStorageCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::ClearWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate )
{
	static UFunction* pFnClearWritePlayerStorageCompleteDelegate = NULL;

	if ( ! pFnClearWritePlayerStorageCompleteDelegate )
		pFnClearWritePlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136723 );

	UOnlineSubsystemPC_execClearWritePlayerStorageCompleteDelegate_Parms ClearWritePlayerStorageCompleteDelegate_Parms;
	ClearWritePlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearWritePlayerStorageCompleteDelegate_Parms.WritePlayerStorageCompleteDelegate, &WritePlayerStorageCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearWritePlayerStorageCompleteDelegate, &ClearWritePlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.WritePlayerStorage
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlinePlayerStorage*    PlayerStorage                  ( CPF_Parm )
// int                            DeviceID                       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemPC::WritePlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID )
{
	static UFunction* pFnWritePlayerStorage = NULL;

	if ( ! pFnWritePlayerStorage )
		pFnWritePlayerStorage = (UFunction*) UObject::GObjObjects()->GetIndex( 136718 );

	UOnlineSubsystemPC_execWritePlayerStorage_Parms WritePlayerStorage_Parms;
	WritePlayerStorage_Parms.LocalUserNum = LocalUserNum;
	WritePlayerStorage_Parms.PlayerStorage = PlayerStorage;
	WritePlayerStorage_Parms.DeviceID = DeviceID;

	this->ProcessEvent ( pFnWritePlayerStorage, &WritePlayerStorage_Parms, NULL );

	return WritePlayerStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetPlayerStorage
// [0x00020002] 
// Parameters infos:
// class UOnlinePlayerStorage*    ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

class UOnlinePlayerStorage* UOnlineSubsystemPC::GetPlayerStorage ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetPlayerStorage = NULL;

	if ( ! pFnGetPlayerStorage )
		pFnGetPlayerStorage = (UFunction*) UObject::GObjObjects()->GetIndex( 136715 );

	UOnlineSubsystemPC_execGetPlayerStorage_Parms GetPlayerStorage_Parms;
	GetPlayerStorage_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetPlayerStorage, &GetPlayerStorage_Parms, NULL );

	return GetPlayerStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadPlayerStorageCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::ClearReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate )
{
	static UFunction* pFnClearReadPlayerStorageCompleteDelegate = NULL;

	if ( ! pFnClearReadPlayerStorageCompleteDelegate )
		pFnClearReadPlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136712 );

	UOnlineSubsystemPC_execClearReadPlayerStorageCompleteDelegate_Parms ClearReadPlayerStorageCompleteDelegate_Parms;
	ClearReadPlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadPlayerStorageCompleteDelegate_Parms.ReadPlayerStorageCompleteDelegate, &ReadPlayerStorageCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReadPlayerStorageCompleteDelegate, &ClearReadPlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadPlayerStorageCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::AddReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate )
{
	static UFunction* pFnAddReadPlayerStorageCompleteDelegate = NULL;

	if ( ! pFnAddReadPlayerStorageCompleteDelegate )
		pFnAddReadPlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136709 );

	UOnlineSubsystemPC_execAddReadPlayerStorageCompleteDelegate_Parms AddReadPlayerStorageCompleteDelegate_Parms;
	AddReadPlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadPlayerStorageCompleteDelegate_Parms.ReadPlayerStorageCompleteDelegate, &ReadPlayerStorageCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReadPlayerStorageCompleteDelegate, &AddReadPlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadPlayerStorageComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPC::OnReadPlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadPlayerStorageComplete = NULL;

	if ( ! pFnOnReadPlayerStorageComplete )
		pFnOnReadPlayerStorageComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 136181 );

	UOnlineSubsystemPC_execOnReadPlayerStorageComplete_Parms OnReadPlayerStorageComplete_Parms;
	OnReadPlayerStorageComplete_Parms.LocalUserNum = LocalUserNum;
	OnReadPlayerStorageComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadPlayerStorageComplete, &OnReadPlayerStorageComplete_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadPlayerStorage
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlinePlayerStorage*    PlayerStorage                  ( CPF_Parm )
// int                            DeviceID                       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemPC::ReadPlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID )
{
	static UFunction* pFnReadPlayerStorage = NULL;

	if ( ! pFnReadPlayerStorage )
		pFnReadPlayerStorage = (UFunction*) UObject::GObjObjects()->GetIndex( 136702 );

	UOnlineSubsystemPC_execReadPlayerStorage_Parms ReadPlayerStorage_Parms;
	ReadPlayerStorage_Parms.LocalUserNum = LocalUserNum;
	ReadPlayerStorage_Parms.PlayerStorage = PlayerStorage;
	ReadPlayerStorage_Parms.DeviceID = DeviceID;

	this->ProcessEvent ( pFnReadPlayerStorage, &ReadPlayerStorage_Parms, NULL );

	return ReadPlayerStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadPlayerStorageForNetIdCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::ClearReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate )
{
	static UFunction* pFnClearReadPlayerStorageForNetIdCompleteDelegate = NULL;

	if ( ! pFnClearReadPlayerStorageForNetIdCompleteDelegate )
		pFnClearReadPlayerStorageForNetIdCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136699 );

	UOnlineSubsystemPC_execClearReadPlayerStorageForNetIdCompleteDelegate_Parms ClearReadPlayerStorageForNetIdCompleteDelegate_Parms;
	memcpy ( &ClearReadPlayerStorageForNetIdCompleteDelegate_Parms.NetId, &NetId, 0x8 );
	memcpy ( &ClearReadPlayerStorageForNetIdCompleteDelegate_Parms.ReadPlayerStorageForNetIdCompleteDelegate, &ReadPlayerStorageForNetIdCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReadPlayerStorageForNetIdCompleteDelegate, &ClearReadPlayerStorageForNetIdCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadPlayerStorageForNetId
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// class UOnlinePlayerStorage*    PlayerStorage                  ( CPF_Parm )

bool UOnlineSubsystemPC::ReadPlayerStorageForNetId ( unsigned char LocalUserNum, struct FUniqueNetId NetId, class UOnlinePlayerStorage* PlayerStorage )
{
	static UFunction* pFnReadPlayerStorageForNetId = NULL;

	if ( ! pFnReadPlayerStorageForNetId )
		pFnReadPlayerStorageForNetId = (UFunction*) UObject::GObjObjects()->GetIndex( 136694 );

	UOnlineSubsystemPC_execReadPlayerStorageForNetId_Parms ReadPlayerStorageForNetId_Parms;
	ReadPlayerStorageForNetId_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ReadPlayerStorageForNetId_Parms.NetId, &NetId, 0x8 );
	ReadPlayerStorageForNetId_Parms.PlayerStorage = PlayerStorage;

	this->ProcessEvent ( pFnReadPlayerStorageForNetId, &ReadPlayerStorageForNetId_Parms, NULL );

	return ReadPlayerStorageForNetId_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadPlayerStorageForNetIdCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::AddReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate )
{
	static UFunction* pFnAddReadPlayerStorageForNetIdCompleteDelegate = NULL;

	if ( ! pFnAddReadPlayerStorageForNetIdCompleteDelegate )
		pFnAddReadPlayerStorageForNetIdCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136691 );

	UOnlineSubsystemPC_execAddReadPlayerStorageForNetIdCompleteDelegate_Parms AddReadPlayerStorageForNetIdCompleteDelegate_Parms;
	memcpy ( &AddReadPlayerStorageForNetIdCompleteDelegate_Parms.NetId, &NetId, 0x8 );
	memcpy ( &AddReadPlayerStorageForNetIdCompleteDelegate_Parms.ReadPlayerStorageForNetIdCompleteDelegate, &ReadPlayerStorageForNetIdCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReadPlayerStorageForNetIdCompleteDelegate, &AddReadPlayerStorageForNetIdCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadPlayerStorageForNetIdComplete
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPC::OnReadPlayerStorageForNetIdComplete ( struct FUniqueNetId NetId, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadPlayerStorageForNetIdComplete = NULL;

	if ( ! pFnOnReadPlayerStorageForNetIdComplete )
		pFnOnReadPlayerStorageForNetIdComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 136183 );

	UOnlineSubsystemPC_execOnReadPlayerStorageForNetIdComplete_Parms OnReadPlayerStorageForNetIdComplete_Parms;
	memcpy ( &OnReadPlayerStorageForNetIdComplete_Parms.NetId, &NetId, 0x8 );
	OnReadPlayerStorageForNetIdComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadPlayerStorageForNetIdComplete, &OnReadPlayerStorageForNetIdComplete_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddWritePlayerStorageCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::AddWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate )
{
	static UFunction* pFnAddWritePlayerStorageCompleteDelegate = NULL;

	if ( ! pFnAddWritePlayerStorageCompleteDelegate )
		pFnAddWritePlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136686 );

	UOnlineSubsystemPC_execAddWritePlayerStorageCompleteDelegate_Parms AddWritePlayerStorageCompleteDelegate_Parms;
	AddWritePlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddWritePlayerStorageCompleteDelegate_Parms.WritePlayerStorageCompleteDelegate, &WritePlayerStorageCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddWritePlayerStorageCompleteDelegate, &AddWritePlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnWritePlayerStorageComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPC::OnWritePlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnWritePlayerStorageComplete = NULL;

	if ( ! pFnOnWritePlayerStorageComplete )
		pFnOnWritePlayerStorageComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 136185 );

	UOnlineSubsystemPC_execOnWritePlayerStorageComplete_Parms OnWritePlayerStorageComplete_Parms;
	OnWritePlayerStorageComplete_Parms.LocalUserNum = LocalUserNum;
	OnWritePlayerStorageComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnWritePlayerStorageComplete, &OnWritePlayerStorageComplete_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetKeyboardInputResults
// [0x00420000] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned char                  bWasCanceled                   ( CPF_Parm | CPF_OutParm )

struct FString UOnlineSubsystemPC::GetKeyboardInputResults ( unsigned char* bWasCanceled )
{
	static UFunction* pFnGetKeyboardInputResults = NULL;

	if ( ! pFnGetKeyboardInputResults )
		pFnGetKeyboardInputResults = (UFunction*) UObject::GObjObjects()->GetIndex( 136681 );

	UOnlineSubsystemPC_execGetKeyboardInputResults_Parms GetKeyboardInputResults_Parms;

	this->ProcessEvent ( pFnGetKeyboardInputResults, &GetKeyboardInputResults_Parms, NULL );

	if ( bWasCanceled )
		*bWasCanceled = GetKeyboardInputResults_Parms.bWasCanceled;

	return GetKeyboardInputResults_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearKeyboardInputDoneDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InputDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::ClearKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate )
{
	static UFunction* pFnClearKeyboardInputDoneDelegate = NULL;

	if ( ! pFnClearKeyboardInputDoneDelegate )
		pFnClearKeyboardInputDoneDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136679 );

	UOnlineSubsystemPC_execClearKeyboardInputDoneDelegate_Parms ClearKeyboardInputDoneDelegate_Parms;
	memcpy ( &ClearKeyboardInputDoneDelegate_Parms.InputDelegate, &InputDelegate, 0x10 );

	this->ProcessEvent ( pFnClearKeyboardInputDoneDelegate, &ClearKeyboardInputDoneDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddKeyboardInputDoneDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InputDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::AddKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate )
{
	static UFunction* pFnAddKeyboardInputDoneDelegate = NULL;

	if ( ! pFnAddKeyboardInputDoneDelegate )
		pFnAddKeyboardInputDoneDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136677 );

	UOnlineSubsystemPC_execAddKeyboardInputDoneDelegate_Parms AddKeyboardInputDoneDelegate_Parms;
	memcpy ( &AddKeyboardInputDoneDelegate_Parms.InputDelegate, &InputDelegate, 0x10 );

	this->ProcessEvent ( pFnAddKeyboardInputDoneDelegate, &AddKeyboardInputDoneDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnKeyboardInputComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPC::OnKeyboardInputComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnKeyboardInputComplete = NULL;

	if ( ! pFnOnKeyboardInputComplete )
		pFnOnKeyboardInputComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 136187 );

	UOnlineSubsystemPC_execOnKeyboardInputComplete_Parms OnKeyboardInputComplete_Parms;
	OnKeyboardInputComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnKeyboardInputComplete, &OnKeyboardInputComplete_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.HideKeyboardUI
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemPC::HideKeyboardUI ( unsigned char LocalUserNum )
{
	static UFunction* pFnHideKeyboardUI = NULL;

	if ( ! pFnHideKeyboardUI )
		pFnHideKeyboardUI = (UFunction*) UObject::GObjObjects()->GetIndex( 136673 );

	UOnlineSubsystemPC_execHideKeyboardUI_Parms HideKeyboardUI_Parms;
	HideKeyboardUI_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnHideKeyboardUI, &HideKeyboardUI_Parms, NULL );

	return HideKeyboardUI_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ShowKeyboardUI
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 TitleText                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 DescriptionText                ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bIsPassword                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bShouldValidate                ( CPF_OptionalParm | CPF_Parm )
// struct FString                 DefaultText                    ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// int                            MaxResultLength                ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemPC::ShowKeyboardUI ( unsigned char LocalUserNum, struct FString TitleText, struct FString DescriptionText, unsigned long bIsPassword, unsigned long bShouldValidate, struct FString DefaultText, int MaxResultLength )
{
	static UFunction* pFnShowKeyboardUI = NULL;

	if ( ! pFnShowKeyboardUI )
		pFnShowKeyboardUI = (UFunction*) UObject::GObjObjects()->GetIndex( 136664 );

	UOnlineSubsystemPC_execShowKeyboardUI_Parms ShowKeyboardUI_Parms;
	ShowKeyboardUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowKeyboardUI_Parms.TitleText, &TitleText, 0x10 );
	memcpy ( &ShowKeyboardUI_Parms.DescriptionText, &DescriptionText, 0x10 );
	ShowKeyboardUI_Parms.bIsPassword = bIsPassword;
	ShowKeyboardUI_Parms.bShouldValidate = bShouldValidate;
	memcpy ( &ShowKeyboardUI_Parms.DefaultText, &DefaultText, 0x10 );
	ShowKeyboardUI_Parms.MaxResultLength = MaxResultLength;

	this->ProcessEvent ( pFnShowKeyboardUI, &ShowKeyboardUI_Parms, NULL );

	return ShowKeyboardUI_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SetOnlineStatus
// [0x00024000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 StatusString                   ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  PlayerActive                   ( CPF_OptionalParm | CPF_Parm )

void UOnlineSubsystemPC::SetOnlineStatus ( unsigned char LocalUserNum, struct FString StatusString, unsigned long PlayerActive )
{
	static UFunction* pFnSetOnlineStatus = NULL;

	if ( ! pFnSetOnlineStatus )
		pFnSetOnlineStatus = (UFunction*) UObject::GObjObjects()->GetIndex( 136660 );

	UOnlineSubsystemPC_execSetOnlineStatus_Parms SetOnlineStatus_Parms;
	SetOnlineStatus_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SetOnlineStatus_Parms.StatusString, &StatusString, 0x10 );
	SetOnlineStatus_Parms.PlayerActive = PlayerActive;

	this->ProcessEvent ( pFnSetOnlineStatus, &SetOnlineStatus_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearStorageDeviceChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         StorageDeviceChangeDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::ClearStorageDeviceChangeDelegate ( struct FScriptDelegate StorageDeviceChangeDelegate )
{
	static UFunction* pFnClearStorageDeviceChangeDelegate = NULL;

	if ( ! pFnClearStorageDeviceChangeDelegate )
		pFnClearStorageDeviceChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136658 );

	UOnlineSubsystemPC_execClearStorageDeviceChangeDelegate_Parms ClearStorageDeviceChangeDelegate_Parms;
	memcpy ( &ClearStorageDeviceChangeDelegate_Parms.StorageDeviceChangeDelegate, &StorageDeviceChangeDelegate, 0x10 );

	this->ProcessEvent ( pFnClearStorageDeviceChangeDelegate, &ClearStorageDeviceChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddStorageDeviceChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         StorageDeviceChangeDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::AddStorageDeviceChangeDelegate ( struct FScriptDelegate StorageDeviceChangeDelegate )
{
	static UFunction* pFnAddStorageDeviceChangeDelegate = NULL;

	if ( ! pFnAddStorageDeviceChangeDelegate )
		pFnAddStorageDeviceChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136656 );

	UOnlineSubsystemPC_execAddStorageDeviceChangeDelegate_Parms AddStorageDeviceChangeDelegate_Parms;
	memcpy ( &AddStorageDeviceChangeDelegate_Parms.StorageDeviceChangeDelegate, &StorageDeviceChangeDelegate, 0x10 );

	this->ProcessEvent ( pFnAddStorageDeviceChangeDelegate, &AddStorageDeviceChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnStorageDeviceChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPC::OnStorageDeviceChange ( )
{
	static UFunction* pFnOnStorageDeviceChange = NULL;

	if ( ! pFnOnStorageDeviceChange )
		pFnOnStorageDeviceChange = (UFunction*) UObject::GObjObjects()->GetIndex( 136189 );

	UOnlineSubsystemPC_execOnStorageDeviceChange_Parms OnStorageDeviceChange_Parms;

	this->ProcessEvent ( pFnOnStorageDeviceChange, &OnStorageDeviceChange_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetLocale
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UOnlineSubsystemPC::GetLocale ( )
{
	static UFunction* pFnGetLocale = NULL;

	if ( ! pFnGetLocale )
		pFnGetLocale = (UFunction*) UObject::GObjObjects()->GetIndex( 136654 );

	UOnlineSubsystemPC_execGetLocale_Parms GetLocale_Parms;

	this->ProcessEvent ( pFnGetLocale, &GetLocale_Parms, NULL );

	return GetLocale_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetNATType
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UOnlineSubsystemPC::GetNATType ( )
{
	static UFunction* pFnGetNATType = NULL;

	if ( ! pFnGetNATType )
		pFnGetNATType = (UFunction*) UObject::GObjObjects()->GetIndex( 136652 );

	UOnlineSubsystemPC_execGetNATType_Parms GetNATType_Parms;

	this->ProcessEvent ( pFnGetNATType, &GetNATType_Parms, NULL );

	return GetNATType_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearConnectionStatusChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ConnectionStatusDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::ClearConnectionStatusChangeDelegate ( struct FScriptDelegate ConnectionStatusDelegate )
{
	static UFunction* pFnClearConnectionStatusChangeDelegate = NULL;

	if ( ! pFnClearConnectionStatusChangeDelegate )
		pFnClearConnectionStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136650 );

	UOnlineSubsystemPC_execClearConnectionStatusChangeDelegate_Parms ClearConnectionStatusChangeDelegate_Parms;
	memcpy ( &ClearConnectionStatusChangeDelegate_Parms.ConnectionStatusDelegate, &ConnectionStatusDelegate, 0x10 );

	this->ProcessEvent ( pFnClearConnectionStatusChangeDelegate, &ClearConnectionStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddConnectionStatusChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ConnectionStatusDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::AddConnectionStatusChangeDelegate ( struct FScriptDelegate ConnectionStatusDelegate )
{
	static UFunction* pFnAddConnectionStatusChangeDelegate = NULL;

	if ( ! pFnAddConnectionStatusChangeDelegate )
		pFnAddConnectionStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136648 );

	UOnlineSubsystemPC_execAddConnectionStatusChangeDelegate_Parms AddConnectionStatusChangeDelegate_Parms;
	memcpy ( &AddConnectionStatusChangeDelegate_Parms.ConnectionStatusDelegate, &ConnectionStatusDelegate, 0x10 );

	this->ProcessEvent ( pFnAddConnectionStatusChangeDelegate, &AddConnectionStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnConnectionStatusChange
// [0x00120000] 
// Parameters infos:
// unsigned char                  ConnectionStatus               ( CPF_Parm )

void UOnlineSubsystemPC::OnConnectionStatusChange ( unsigned char ConnectionStatus )
{
	static UFunction* pFnOnConnectionStatusChange = NULL;

	if ( ! pFnOnConnectionStatusChange )
		pFnOnConnectionStatusChange = (UFunction*) UObject::GObjObjects()->GetIndex( 136191 );

	UOnlineSubsystemPC_execOnConnectionStatusChange_Parms OnConnectionStatusChange_Parms;
	OnConnectionStatusChange_Parms.ConnectionStatus = ConnectionStatus;

	this->ProcessEvent ( pFnOnConnectionStatusChange, &OnConnectionStatusChange_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetCurrentConnectionStatus
// [0x00020000] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UOnlineSubsystemPC::GetCurrentConnectionStatus ( )
{
	static UFunction* pFnGetCurrentConnectionStatus = NULL;

	if ( ! pFnGetCurrentConnectionStatus )
		pFnGetCurrentConnectionStatus = (UFunction*) UObject::GObjObjects()->GetIndex( 136645 );

	UOnlineSubsystemPC_execGetCurrentConnectionStatus_Parms GetCurrentConnectionStatus_Parms;

	this->ProcessEvent ( pFnGetCurrentConnectionStatus, &GetCurrentConnectionStatus_Parms, NULL );

	return GetCurrentConnectionStatus_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.IsControllerConnected
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerId                   ( CPF_Parm )

bool UOnlineSubsystemPC::IsControllerConnected ( int ControllerId )
{
	static UFunction* pFnIsControllerConnected = NULL;

	if ( ! pFnIsControllerConnected )
		pFnIsControllerConnected = (UFunction*) UObject::GObjObjects()->GetIndex( 136642 );

	UOnlineSubsystemPC_execIsControllerConnected_Parms IsControllerConnected_Parms;
	IsControllerConnected_Parms.ControllerId = ControllerId;

	this->ProcessEvent ( pFnIsControllerConnected, &IsControllerConnected_Parms, NULL );

	return IsControllerConnected_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearControllerChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ControllerChangeDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::ClearControllerChangeDelegate ( struct FScriptDelegate ControllerChangeDelegate )
{
	static UFunction* pFnClearControllerChangeDelegate = NULL;

	if ( ! pFnClearControllerChangeDelegate )
		pFnClearControllerChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136640 );

	UOnlineSubsystemPC_execClearControllerChangeDelegate_Parms ClearControllerChangeDelegate_Parms;
	memcpy ( &ClearControllerChangeDelegate_Parms.ControllerChangeDelegate, &ControllerChangeDelegate, 0x10 );

	this->ProcessEvent ( pFnClearControllerChangeDelegate, &ClearControllerChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddControllerChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ControllerChangeDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::AddControllerChangeDelegate ( struct FScriptDelegate ControllerChangeDelegate )
{
	static UFunction* pFnAddControllerChangeDelegate = NULL;

	if ( ! pFnAddControllerChangeDelegate )
		pFnAddControllerChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136638 );

	UOnlineSubsystemPC_execAddControllerChangeDelegate_Parms AddControllerChangeDelegate_Parms;
	memcpy ( &AddControllerChangeDelegate_Parms.ControllerChangeDelegate, &ControllerChangeDelegate, 0x10 );

	this->ProcessEvent ( pFnAddControllerChangeDelegate, &AddControllerChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnControllerChange
// [0x00120000] 
// Parameters infos:
// int                            ControllerId                   ( CPF_Parm )
// unsigned long                  bIsConnected                   ( CPF_Parm )
// unsigned long                  bPauseGame                     ( CPF_Parm )

void UOnlineSubsystemPC::OnControllerChange ( int ControllerId, unsigned long bIsConnected, unsigned long bPauseGame )
{
	static UFunction* pFnOnControllerChange = NULL;

	if ( ! pFnOnControllerChange )
		pFnOnControllerChange = (UFunction*) UObject::GObjObjects()->GetIndex( 136193 );

	UOnlineSubsystemPC_execOnControllerChange_Parms OnControllerChange_Parms;
	OnControllerChange_Parms.ControllerId = ControllerId;
	OnControllerChange_Parms.bIsConnected = bIsConnected;
	OnControllerChange_Parms.bPauseGame = bPauseGame;

	this->ProcessEvent ( pFnOnControllerChange, &OnControllerChange_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SetNetworkNotificationPosition
// [0x00020000] 
// Parameters infos:
// unsigned char                  NewPos                         ( CPF_Parm )

void UOnlineSubsystemPC::SetNetworkNotificationPosition ( unsigned char NewPos )
{
	static UFunction* pFnSetNetworkNotificationPosition = NULL;

	if ( ! pFnSetNetworkNotificationPosition )
		pFnSetNetworkNotificationPosition = (UFunction*) UObject::GObjObjects()->GetIndex( 136633 );

	UOnlineSubsystemPC_execSetNetworkNotificationPosition_Parms SetNetworkNotificationPosition_Parms;
	SetNetworkNotificationPosition_Parms.NewPos = NewPos;

	this->ProcessEvent ( pFnSetNetworkNotificationPosition, &SetNetworkNotificationPosition_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetNetworkNotificationPosition
// [0x00020000] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UOnlineSubsystemPC::GetNetworkNotificationPosition ( )
{
	static UFunction* pFnGetNetworkNotificationPosition = NULL;

	if ( ! pFnGetNetworkNotificationPosition )
		pFnGetNetworkNotificationPosition = (UFunction*) UObject::GObjObjects()->GetIndex( 136631 );

	UOnlineSubsystemPC_execGetNetworkNotificationPosition_Parms GetNetworkNotificationPosition_Parms;

	this->ProcessEvent ( pFnGetNetworkNotificationPosition, &GetNetworkNotificationPosition_Parms, NULL );

	return GetNetworkNotificationPosition_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearExternalUIChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ExternalUIDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::ClearExternalUIChangeDelegate ( struct FScriptDelegate ExternalUIDelegate )
{
	static UFunction* pFnClearExternalUIChangeDelegate = NULL;

	if ( ! pFnClearExternalUIChangeDelegate )
		pFnClearExternalUIChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136629 );

	UOnlineSubsystemPC_execClearExternalUIChangeDelegate_Parms ClearExternalUIChangeDelegate_Parms;
	memcpy ( &ClearExternalUIChangeDelegate_Parms.ExternalUIDelegate, &ExternalUIDelegate, 0x10 );

	this->ProcessEvent ( pFnClearExternalUIChangeDelegate, &ClearExternalUIChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddExternalUIChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ExternalUIDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::AddExternalUIChangeDelegate ( struct FScriptDelegate ExternalUIDelegate )
{
	static UFunction* pFnAddExternalUIChangeDelegate = NULL;

	if ( ! pFnAddExternalUIChangeDelegate )
		pFnAddExternalUIChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136627 );

	UOnlineSubsystemPC_execAddExternalUIChangeDelegate_Parms AddExternalUIChangeDelegate_Parms;
	memcpy ( &AddExternalUIChangeDelegate_Parms.ExternalUIDelegate, &ExternalUIDelegate, 0x10 );

	this->ProcessEvent ( pFnAddExternalUIChangeDelegate, &AddExternalUIChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnExternalUIChange
// [0x00120000] 
// Parameters infos:
// unsigned long                  bIsOpening                     ( CPF_Parm )

void UOnlineSubsystemPC::OnExternalUIChange ( unsigned long bIsOpening )
{
	static UFunction* pFnOnExternalUIChange = NULL;

	if ( ! pFnOnExternalUIChange )
		pFnOnExternalUIChange = (UFunction*) UObject::GObjObjects()->GetIndex( 136195 );

	UOnlineSubsystemPC_execOnExternalUIChange_Parms OnExternalUIChange_Parms;
	OnExternalUIChange_Parms.bIsOpening = bIsOpening;

	this->ProcessEvent ( pFnOnExternalUIChange, &OnExternalUIChange_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLinkStatusChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         LinkStatusDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::ClearLinkStatusChangeDelegate ( struct FScriptDelegate LinkStatusDelegate )
{
	static UFunction* pFnClearLinkStatusChangeDelegate = NULL;

	if ( ! pFnClearLinkStatusChangeDelegate )
		pFnClearLinkStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136624 );

	UOnlineSubsystemPC_execClearLinkStatusChangeDelegate_Parms ClearLinkStatusChangeDelegate_Parms;
	memcpy ( &ClearLinkStatusChangeDelegate_Parms.LinkStatusDelegate, &LinkStatusDelegate, 0x10 );

	this->ProcessEvent ( pFnClearLinkStatusChangeDelegate, &ClearLinkStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddLinkStatusChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         LinkStatusDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::AddLinkStatusChangeDelegate ( struct FScriptDelegate LinkStatusDelegate )
{
	static UFunction* pFnAddLinkStatusChangeDelegate = NULL;

	if ( ! pFnAddLinkStatusChangeDelegate )
		pFnAddLinkStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136622 );

	UOnlineSubsystemPC_execAddLinkStatusChangeDelegate_Parms AddLinkStatusChangeDelegate_Parms;
	memcpy ( &AddLinkStatusChangeDelegate_Parms.LinkStatusDelegate, &LinkStatusDelegate, 0x10 );

	this->ProcessEvent ( pFnAddLinkStatusChangeDelegate, &AddLinkStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnLinkStatusChange
// [0x00120000] 
// Parameters infos:
// unsigned long                  bIsConnected                   ( CPF_Parm )

void UOnlineSubsystemPC::OnLinkStatusChange ( unsigned long bIsConnected )
{
	static UFunction* pFnOnLinkStatusChange = NULL;

	if ( ! pFnOnLinkStatusChange )
		pFnOnLinkStatusChange = (UFunction*) UObject::GObjObjects()->GetIndex( 136197 );

	UOnlineSubsystemPC_execOnLinkStatusChange_Parms OnLinkStatusChange_Parms;
	OnLinkStatusChange_Parms.bIsConnected = bIsConnected;

	this->ProcessEvent ( pFnOnLinkStatusChange, &OnLinkStatusChange_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.HasLinkConnection
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemPC::HasLinkConnection ( )
{
	static UFunction* pFnHasLinkConnection = NULL;

	if ( ! pFnHasLinkConnection )
		pFnHasLinkConnection = (UFunction*) UObject::GObjObjects()->GetIndex( 136619 );

	UOnlineSubsystemPC_execHasLinkConnection_Parms HasLinkConnection_Parms;

	this->ProcessEvent ( pFnHasLinkConnection, &HasLinkConnection_Parms, NULL );

	return HasLinkConnection_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetPlayerNicknameFromIndex
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            UserIndex                      ( CPF_Parm )

struct FString UOnlineSubsystemPC::eventGetPlayerNicknameFromIndex ( int UserIndex )
{
	static UFunction* pFnGetPlayerNicknameFromIndex = NULL;

	if ( ! pFnGetPlayerNicknameFromIndex )
		pFnGetPlayerNicknameFromIndex = (UFunction*) UObject::GObjObjects()->GetIndex( 136616 );

	UOnlineSubsystemPC_eventGetPlayerNicknameFromIndex_Parms GetPlayerNicknameFromIndex_Parms;
	GetPlayerNicknameFromIndex_Parms.UserIndex = UserIndex;

	this->ProcessEvent ( pFnGetPlayerNicknameFromIndex, &GetPlayerNicknameFromIndex_Parms, NULL );

	return GetPlayerNicknameFromIndex_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CalcAggregateSkill
// [0x00420000] 
// Parameters infos:
// TArray< struct FDouble >       Mus                            ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FDouble >       Sigmas                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FDouble                 OutAggregateMu                 ( CPF_Parm | CPF_OutParm )
// struct FDouble                 OutAggregateSigma              ( CPF_Parm | CPF_OutParm )

void UOnlineSubsystemPC::CalcAggregateSkill ( TArray< struct FDouble > Mus, TArray< struct FDouble > Sigmas, struct FDouble* OutAggregateMu, struct FDouble* OutAggregateSigma )
{
	static UFunction* pFnCalcAggregateSkill = NULL;

	if ( ! pFnCalcAggregateSkill )
		pFnCalcAggregateSkill = (UFunction*) UObject::GObjObjects()->GetIndex( 136609 );

	UOnlineSubsystemPC_execCalcAggregateSkill_Parms CalcAggregateSkill_Parms;
	memcpy ( &CalcAggregateSkill_Parms.Mus, &Mus, 0x10 );
	memcpy ( &CalcAggregateSkill_Parms.Sigmas, &Sigmas, 0x10 );

	this->ProcessEvent ( pFnCalcAggregateSkill, &CalcAggregateSkill_Parms, NULL );

	if ( OutAggregateMu )
		memcpy ( OutAggregateMu, &CalcAggregateSkill_Parms.OutAggregateMu, 0x8 );

	if ( OutAggregateSigma )
		memcpy ( OutAggregateSigma, &CalcAggregateSkill_Parms.OutAggregateSigma, 0x8 );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.RegisterStatGuid
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// struct FString                 ClientStatGuid                 ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemPC::RegisterStatGuid ( struct FUniqueNetId PlayerID, struct FString* ClientStatGuid )
{
	static UFunction* pFnRegisterStatGuid = NULL;

	if ( ! pFnRegisterStatGuid )
		pFnRegisterStatGuid = (UFunction*) UObject::GObjObjects()->GetIndex( 136605 );

	UOnlineSubsystemPC_execRegisterStatGuid_Parms RegisterStatGuid_Parms;
	memcpy ( &RegisterStatGuid_Parms.PlayerID, &PlayerID, 0x8 );

	this->ProcessEvent ( pFnRegisterStatGuid, &RegisterStatGuid_Parms, NULL );

	if ( ClientStatGuid )
		memcpy ( ClientStatGuid, &RegisterStatGuid_Parms.ClientStatGuid, 0x10 );

	return RegisterStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetClientStatGuid
// [0x00020000] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UOnlineSubsystemPC::GetClientStatGuid ( )
{
	static UFunction* pFnGetClientStatGuid = NULL;

	if ( ! pFnGetClientStatGuid )
		pFnGetClientStatGuid = (UFunction*) UObject::GObjObjects()->GetIndex( 136603 );

	UOnlineSubsystemPC_execGetClientStatGuid_Parms GetClientStatGuid_Parms;

	this->ProcessEvent ( pFnGetClientStatGuid, &GetClientStatGuid_Parms, NULL );

	return GetClientStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearRegisterHostStatGuidCompleteDelegateDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::ClearRegisterHostStatGuidCompleteDelegateDelegate ( struct FScriptDelegate RegisterHostStatGuidCompleteDelegate )
{
	static UFunction* pFnClearRegisterHostStatGuidCompleteDelegateDelegate = NULL;

	if ( ! pFnClearRegisterHostStatGuidCompleteDelegateDelegate )
		pFnClearRegisterHostStatGuidCompleteDelegateDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136601 );

	UOnlineSubsystemPC_execClearRegisterHostStatGuidCompleteDelegateDelegate_Parms ClearRegisterHostStatGuidCompleteDelegateDelegate_Parms;
	memcpy ( &ClearRegisterHostStatGuidCompleteDelegateDelegate_Parms.RegisterHostStatGuidCompleteDelegate, &RegisterHostStatGuidCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearRegisterHostStatGuidCompleteDelegateDelegate, &ClearRegisterHostStatGuidCompleteDelegateDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddRegisterHostStatGuidCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::AddRegisterHostStatGuidCompleteDelegate ( struct FScriptDelegate RegisterHostStatGuidCompleteDelegate )
{
	static UFunction* pFnAddRegisterHostStatGuidCompleteDelegate = NULL;

	if ( ! pFnAddRegisterHostStatGuidCompleteDelegate )
		pFnAddRegisterHostStatGuidCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136599 );

	UOnlineSubsystemPC_execAddRegisterHostStatGuidCompleteDelegate_Parms AddRegisterHostStatGuidCompleteDelegate_Parms;
	memcpy ( &AddRegisterHostStatGuidCompleteDelegate_Parms.RegisterHostStatGuidCompleteDelegate, &RegisterHostStatGuidCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddRegisterHostStatGuidCompleteDelegate, &AddRegisterHostStatGuidCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnRegisterHostStatGuidComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPC::OnRegisterHostStatGuidComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnRegisterHostStatGuidComplete = NULL;

	if ( ! pFnOnRegisterHostStatGuidComplete )
		pFnOnRegisterHostStatGuidComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 136199 );

	UOnlineSubsystemPC_execOnRegisterHostStatGuidComplete_Parms OnRegisterHostStatGuidComplete_Parms;
	OnRegisterHostStatGuidComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnRegisterHostStatGuidComplete, &OnRegisterHostStatGuidComplete_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.RegisterHostStatGuid
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 HostStatGuid                   ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemPC::RegisterHostStatGuid ( struct FString* HostStatGuid )
{
	static UFunction* pFnRegisterHostStatGuid = NULL;

	if ( ! pFnRegisterHostStatGuid )
		pFnRegisterHostStatGuid = (UFunction*) UObject::GObjObjects()->GetIndex( 136595 );

	UOnlineSubsystemPC_execRegisterHostStatGuid_Parms RegisterHostStatGuid_Parms;

	this->ProcessEvent ( pFnRegisterHostStatGuid, &RegisterHostStatGuid_Parms, NULL );

	if ( HostStatGuid )
		memcpy ( HostStatGuid, &RegisterHostStatGuid_Parms.HostStatGuid, 0x10 );

	return RegisterHostStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetHostStatGuid
// [0x00020000] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UOnlineSubsystemPC::GetHostStatGuid ( )
{
	static UFunction* pFnGetHostStatGuid = NULL;

	if ( ! pFnGetHostStatGuid )
		pFnGetHostStatGuid = (UFunction*) UObject::GObjObjects()->GetIndex( 136593 );

	UOnlineSubsystemPC_execGetHostStatGuid_Parms GetHostStatGuid_Parms;

	this->ProcessEvent ( pFnGetHostStatGuid, &GetHostStatGuid_Parms, NULL );

	return GetHostStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.WriteOnlinePlayerScores
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// int                            LeaderboardId                  ( CPF_Parm )
// TArray< struct FOnlinePlayerScore > PlayerScores                   ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemPC::WriteOnlinePlayerScores ( struct FName SessionName, int LeaderboardId, TArray< struct FOnlinePlayerScore >* PlayerScores )
{
	static UFunction* pFnWriteOnlinePlayerScores = NULL;

	if ( ! pFnWriteOnlinePlayerScores )
		pFnWriteOnlinePlayerScores = (UFunction*) UObject::GObjObjects()->GetIndex( 136587 );

	UOnlineSubsystemPC_execWriteOnlinePlayerScores_Parms WriteOnlinePlayerScores_Parms;
	memcpy ( &WriteOnlinePlayerScores_Parms.SessionName, &SessionName, 0x8 );
	WriteOnlinePlayerScores_Parms.LeaderboardId = LeaderboardId;

	this->ProcessEvent ( pFnWriteOnlinePlayerScores, &WriteOnlinePlayerScores_Parms, NULL );

	if ( PlayerScores )
		memcpy ( PlayerScores, &WriteOnlinePlayerScores_Parms.PlayerScores, 0x10 );

	return WriteOnlinePlayerScores_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearFlushOnlineStatsCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::ClearFlushOnlineStatsCompleteDelegate ( struct FScriptDelegate FlushOnlineStatsCompleteDelegate )
{
	static UFunction* pFnClearFlushOnlineStatsCompleteDelegate = NULL;

	if ( ! pFnClearFlushOnlineStatsCompleteDelegate )
		pFnClearFlushOnlineStatsCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136585 );

	UOnlineSubsystemPC_execClearFlushOnlineStatsCompleteDelegate_Parms ClearFlushOnlineStatsCompleteDelegate_Parms;
	memcpy ( &ClearFlushOnlineStatsCompleteDelegate_Parms.FlushOnlineStatsCompleteDelegate, &FlushOnlineStatsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearFlushOnlineStatsCompleteDelegate, &ClearFlushOnlineStatsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFlushOnlineStatsCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::AddFlushOnlineStatsCompleteDelegate ( struct FScriptDelegate FlushOnlineStatsCompleteDelegate )
{
	static UFunction* pFnAddFlushOnlineStatsCompleteDelegate = NULL;

	if ( ! pFnAddFlushOnlineStatsCompleteDelegate )
		pFnAddFlushOnlineStatsCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136583 );

	UOnlineSubsystemPC_execAddFlushOnlineStatsCompleteDelegate_Parms AddFlushOnlineStatsCompleteDelegate_Parms;
	memcpy ( &AddFlushOnlineStatsCompleteDelegate_Parms.FlushOnlineStatsCompleteDelegate, &FlushOnlineStatsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddFlushOnlineStatsCompleteDelegate, &AddFlushOnlineStatsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnFlushOnlineStatsComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPC::OnFlushOnlineStatsComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnFlushOnlineStatsComplete = NULL;

	if ( ! pFnOnFlushOnlineStatsComplete )
		pFnOnFlushOnlineStatsComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 136201 );

	UOnlineSubsystemPC_execOnFlushOnlineStatsComplete_Parms OnFlushOnlineStatsComplete_Parms;
	memcpy ( &OnFlushOnlineStatsComplete_Parms.SessionName, &SessionName, 0x8 );
	OnFlushOnlineStatsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnFlushOnlineStatsComplete, &OnFlushOnlineStatsComplete_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.FlushOnlineStats
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineSubsystemPC::FlushOnlineStats ( struct FName SessionName )
{
	static UFunction* pFnFlushOnlineStats = NULL;

	if ( ! pFnFlushOnlineStats )
		pFnFlushOnlineStats = (UFunction*) UObject::GObjObjects()->GetIndex( 136578 );

	UOnlineSubsystemPC_execFlushOnlineStats_Parms FlushOnlineStats_Parms;
	memcpy ( &FlushOnlineStats_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnFlushOnlineStats, &FlushOnlineStats_Parms, NULL );

	return FlushOnlineStats_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.WriteOnlineStats
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            Player                         ( CPF_Parm )
// class UOnlineStatsWrite*       StatsWrite                     ( CPF_Parm )

bool UOnlineSubsystemPC::WriteOnlineStats ( struct FName SessionName, struct FUniqueNetId Player, class UOnlineStatsWrite* StatsWrite )
{
	static UFunction* pFnWriteOnlineStats = NULL;

	if ( ! pFnWriteOnlineStats )
		pFnWriteOnlineStats = (UFunction*) UObject::GObjObjects()->GetIndex( 136573 );

	UOnlineSubsystemPC_execWriteOnlineStats_Parms WriteOnlineStats_Parms;
	memcpy ( &WriteOnlineStats_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &WriteOnlineStats_Parms.Player, &Player, 0x8 );
	WriteOnlineStats_Parms.StatsWrite = StatsWrite;

	this->ProcessEvent ( pFnWriteOnlineStats, &WriteOnlineStats_Parms, NULL );

	return WriteOnlineStats_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.FreeStats
// [0x00020000] 
// Parameters infos:
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )

void UOnlineSubsystemPC::FreeStats ( class UOnlineStatsRead* StatsRead )
{
	static UFunction* pFnFreeStats = NULL;

	if ( ! pFnFreeStats )
		pFnFreeStats = (UFunction*) UObject::GObjObjects()->GetIndex( 136571 );

	UOnlineSubsystemPC_execFreeStats_Parms FreeStats_Parms;
	FreeStats_Parms.StatsRead = StatsRead;

	this->ProcessEvent ( pFnFreeStats, &FreeStats_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadOnlineStatsCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::ClearReadOnlineStatsCompleteDelegate ( struct FScriptDelegate ReadOnlineStatsCompleteDelegate )
{
	static UFunction* pFnClearReadOnlineStatsCompleteDelegate = NULL;

	if ( ! pFnClearReadOnlineStatsCompleteDelegate )
		pFnClearReadOnlineStatsCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136569 );

	UOnlineSubsystemPC_execClearReadOnlineStatsCompleteDelegate_Parms ClearReadOnlineStatsCompleteDelegate_Parms;
	memcpy ( &ClearReadOnlineStatsCompleteDelegate_Parms.ReadOnlineStatsCompleteDelegate, &ReadOnlineStatsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReadOnlineStatsCompleteDelegate, &ClearReadOnlineStatsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadOnlineStatsCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::AddReadOnlineStatsCompleteDelegate ( struct FScriptDelegate ReadOnlineStatsCompleteDelegate )
{
	static UFunction* pFnAddReadOnlineStatsCompleteDelegate = NULL;

	if ( ! pFnAddReadOnlineStatsCompleteDelegate )
		pFnAddReadOnlineStatsCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136567 );

	UOnlineSubsystemPC_execAddReadOnlineStatsCompleteDelegate_Parms AddReadOnlineStatsCompleteDelegate_Parms;
	memcpy ( &AddReadOnlineStatsCompleteDelegate_Parms.ReadOnlineStatsCompleteDelegate, &ReadOnlineStatsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReadOnlineStatsCompleteDelegate, &AddReadOnlineStatsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadOnlineStatsByRankAroundPlayer
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )
// int                            NumRows                        ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemPC::ReadOnlineStatsByRankAroundPlayer ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows )
{
	static UFunction* pFnReadOnlineStatsByRankAroundPlayer = NULL;

	if ( ! pFnReadOnlineStatsByRankAroundPlayer )
		pFnReadOnlineStatsByRankAroundPlayer = (UFunction*) UObject::GObjObjects()->GetIndex( 136562 );

	UOnlineSubsystemPC_execReadOnlineStatsByRankAroundPlayer_Parms ReadOnlineStatsByRankAroundPlayer_Parms;
	ReadOnlineStatsByRankAroundPlayer_Parms.LocalUserNum = LocalUserNum;
	ReadOnlineStatsByRankAroundPlayer_Parms.StatsRead = StatsRead;
	ReadOnlineStatsByRankAroundPlayer_Parms.NumRows = NumRows;

	this->ProcessEvent ( pFnReadOnlineStatsByRankAroundPlayer, &ReadOnlineStatsByRankAroundPlayer_Parms, NULL );

	return ReadOnlineStatsByRankAroundPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadOnlineStatsByRank
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )
// int                            StartIndex                     ( CPF_OptionalParm | CPF_Parm )
// int                            NumToRead                      ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemPC::ReadOnlineStatsByRank ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead )
{
	static UFunction* pFnReadOnlineStatsByRank = NULL;

	if ( ! pFnReadOnlineStatsByRank )
		pFnReadOnlineStatsByRank = (UFunction*) UObject::GObjObjects()->GetIndex( 136556 );

	UOnlineSubsystemPC_execReadOnlineStatsByRank_Parms ReadOnlineStatsByRank_Parms;
	ReadOnlineStatsByRank_Parms.LocalUserNum = LocalUserNum;
	ReadOnlineStatsByRank_Parms.StatsRead = StatsRead;
	ReadOnlineStatsByRank_Parms.StartIndex = StartIndex;
	ReadOnlineStatsByRank_Parms.NumToRead = NumToRead;

	this->ProcessEvent ( pFnReadOnlineStatsByRank, &ReadOnlineStatsByRank_Parms, NULL );

	return ReadOnlineStatsByRank_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadOnlineStatForFriends
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )
// unsigned long                  FavoriteFriendsOnly            ( CPF_OptionalParm | CPF_Parm )
// int                            NumToRead                      ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemPC::ReadOnlineStatForFriends ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, unsigned long FavoriteFriendsOnly, int NumToRead )
{
	static UFunction* pFnReadOnlineStatForFriends = NULL;

	if ( ! pFnReadOnlineStatForFriends )
		pFnReadOnlineStatForFriends = (UFunction*) UObject::GObjObjects()->GetIndex( 136550 );

	UOnlineSubsystemPC_execReadOnlineStatForFriends_Parms ReadOnlineStatForFriends_Parms;
	ReadOnlineStatForFriends_Parms.LocalUserNum = LocalUserNum;
	ReadOnlineStatForFriends_Parms.StatsRead = StatsRead;
	ReadOnlineStatForFriends_Parms.FavoriteFriendsOnly = FavoriteFriendsOnly;
	ReadOnlineStatForFriends_Parms.NumToRead = NumToRead;

	this->ProcessEvent ( pFnReadOnlineStatForFriends, &ReadOnlineStatForFriends_Parms, NULL );

	return ReadOnlineStatForFriends_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadOnlineStats
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )
// TArray< struct FUniqueNetId >  Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemPC::ReadOnlineStats ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, TArray< struct FUniqueNetId >* Players )
{
	static UFunction* pFnReadOnlineStats = NULL;

	if ( ! pFnReadOnlineStats )
		pFnReadOnlineStats = (UFunction*) UObject::GObjObjects()->GetIndex( 136544 );

	UOnlineSubsystemPC_execReadOnlineStats_Parms ReadOnlineStats_Parms;
	ReadOnlineStats_Parms.LocalUserNum = LocalUserNum;
	ReadOnlineStats_Parms.StatsRead = StatsRead;

	this->ProcessEvent ( pFnReadOnlineStats, &ReadOnlineStats_Parms, NULL );

	if ( Players )
		memcpy ( Players, &ReadOnlineStats_Parms.Players, 0x10 );

	return ReadOnlineStats_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadOnlineStatsForPlayer
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )

bool UOnlineSubsystemPC::ReadOnlineStatsForPlayer ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead )
{
	static UFunction* pFnReadOnlineStatsForPlayer = NULL;

	if ( ! pFnReadOnlineStatsForPlayer )
		pFnReadOnlineStatsForPlayer = (UFunction*) UObject::GObjObjects()->GetIndex( 136540 );

	UOnlineSubsystemPC_execReadOnlineStatsForPlayer_Parms ReadOnlineStatsForPlayer_Parms;
	ReadOnlineStatsForPlayer_Parms.LocalUserNum = LocalUserNum;
	ReadOnlineStatsForPlayer_Parms.StatsRead = StatsRead;

	this->ProcessEvent ( pFnReadOnlineStatsForPlayer, &ReadOnlineStatsForPlayer_Parms, NULL );

	return ReadOnlineStatsForPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadOnlineStatsComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPC::OnReadOnlineStatsComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadOnlineStatsComplete = NULL;

	if ( ! pFnOnReadOnlineStatsComplete )
		pFnOnReadOnlineStatsComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 136203 );

	UOnlineSubsystemPC_execOnReadOnlineStatsComplete_Parms OnReadOnlineStatsComplete_Parms;
	OnReadOnlineStatsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadOnlineStatsComplete, &OnReadOnlineStatsComplete_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetFriendsList
// [0x00424000] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            Count                          ( CPF_OptionalParm | CPF_Parm )
// int                            StartingAt                     ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FOnlineFriend > Friends                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char UOnlineSubsystemPC::GetFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt, TArray< struct FOnlineFriend >* Friends )
{
	static UFunction* pFnGetFriendsList = NULL;

	if ( ! pFnGetFriendsList )
		pFnGetFriendsList = (UFunction*) UObject::GObjObjects()->GetIndex( 136532 );

	UOnlineSubsystemPC_execGetFriendsList_Parms GetFriendsList_Parms;
	GetFriendsList_Parms.LocalUserNum = LocalUserNum;
	GetFriendsList_Parms.Count = Count;
	GetFriendsList_Parms.StartingAt = StartingAt;

	this->ProcessEvent ( pFnGetFriendsList, &GetFriendsList_Parms, NULL );

	if ( Friends )
		memcpy ( Friends, &GetFriendsList_Parms.Friends, 0x10 );

	return GetFriendsList_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadFriendsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadFriendsCompleteDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::ClearReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate )
{
	static UFunction* pFnClearReadFriendsCompleteDelegate = NULL;

	if ( ! pFnClearReadFriendsCompleteDelegate )
		pFnClearReadFriendsCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136528 );

	UOnlineSubsystemPC_execClearReadFriendsCompleteDelegate_Parms ClearReadFriendsCompleteDelegate_Parms;
	ClearReadFriendsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadFriendsCompleteDelegate_Parms.ReadFriendsCompleteDelegate, &ReadFriendsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReadFriendsCompleteDelegate, &ClearReadFriendsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadFriendsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadFriendsCompleteDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::AddReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate )
{
	static UFunction* pFnAddReadFriendsCompleteDelegate = NULL;

	if ( ! pFnAddReadFriendsCompleteDelegate )
		pFnAddReadFriendsCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136525 );

	UOnlineSubsystemPC_execAddReadFriendsCompleteDelegate_Parms AddReadFriendsCompleteDelegate_Parms;
	AddReadFriendsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadFriendsCompleteDelegate_Parms.ReadFriendsCompleteDelegate, &ReadFriendsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReadFriendsCompleteDelegate, &AddReadFriendsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadFriendsList
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            Count                          ( CPF_OptionalParm | CPF_Parm )
// int                            StartingAt                     ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemPC::ReadFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt )
{
	static UFunction* pFnReadFriendsList = NULL;

	if ( ! pFnReadFriendsList )
		pFnReadFriendsList = (UFunction*) UObject::GObjObjects()->GetIndex( 136518 );

	UOnlineSubsystemPC_execReadFriendsList_Parms ReadFriendsList_Parms;
	ReadFriendsList_Parms.LocalUserNum = LocalUserNum;
	ReadFriendsList_Parms.Count = Count;
	ReadFriendsList_Parms.StartingAt = StartingAt;

	this->ProcessEvent ( pFnReadFriendsList, &ReadFriendsList_Parms, NULL );

	return ReadFriendsList_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadFriendsComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPC::OnReadFriendsComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadFriendsComplete = NULL;

	if ( ! pFnOnReadFriendsComplete )
		pFnOnReadFriendsComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 136138 );

	UOnlineSubsystemPC_execOnReadFriendsComplete_Parms OnReadFriendsComplete_Parms;
	OnReadFriendsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadFriendsComplete, &OnReadFriendsComplete_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLoginStatusChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         LoginStatusDelegate            ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemPC::ClearLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum )
{
	static UFunction* pFnClearLoginStatusChangeDelegate = NULL;

	if ( ! pFnClearLoginStatusChangeDelegate )
		pFnClearLoginStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136514 );

	UOnlineSubsystemPC_execClearLoginStatusChangeDelegate_Parms ClearLoginStatusChangeDelegate_Parms;
	memcpy ( &ClearLoginStatusChangeDelegate_Parms.LoginStatusDelegate, &LoginStatusDelegate, 0x10 );
	ClearLoginStatusChangeDelegate_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnClearLoginStatusChangeDelegate, &ClearLoginStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddLoginStatusChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         LoginStatusDelegate            ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemPC::AddLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum )
{
	static UFunction* pFnAddLoginStatusChangeDelegate = NULL;

	if ( ! pFnAddLoginStatusChangeDelegate )
		pFnAddLoginStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136511 );

	UOnlineSubsystemPC_execAddLoginStatusChangeDelegate_Parms AddLoginStatusChangeDelegate_Parms;
	memcpy ( &AddLoginStatusChangeDelegate_Parms.LoginStatusDelegate, &LoginStatusDelegate, 0x10 );
	AddLoginStatusChangeDelegate_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnAddLoginStatusChangeDelegate, &AddLoginStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnLoginStatusChange
// [0x00120000] 
// Parameters infos:
// unsigned char                  NewStatus                      ( CPF_Parm )
// struct FUniqueNetId            NewId                          ( CPF_Parm )

void UOnlineSubsystemPC::OnLoginStatusChange ( unsigned char NewStatus, struct FUniqueNetId NewId )
{
	static UFunction* pFnOnLoginStatusChange = NULL;

	if ( ! pFnOnLoginStatusChange )
		pFnOnLoginStatusChange = (UFunction*) UObject::GObjObjects()->GetIndex( 136206 );

	UOnlineSubsystemPC_execOnLoginStatusChange_Parms OnLoginStatusChange_Parms;
	OnLoginStatusChange_Parms.NewStatus = NewStatus;
	memcpy ( &OnLoginStatusChange_Parms.NewId, &NewId, 0x8 );

	this->ProcessEvent ( pFnOnLoginStatusChange, &OnLoginStatusChange_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearWriteProfileSettingsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::ClearWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate )
{
	static UFunction* pFnClearWriteProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnClearWriteProfileSettingsCompleteDelegate )
		pFnClearWriteProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136505 );

	UOnlineSubsystemPC_execClearWriteProfileSettingsCompleteDelegate_Parms ClearWriteProfileSettingsCompleteDelegate_Parms;
	ClearWriteProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearWriteProfileSettingsCompleteDelegate_Parms.WriteProfileSettingsCompleteDelegate, &WriteProfileSettingsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearWriteProfileSettingsCompleteDelegate, &ClearWriteProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddWriteProfileSettingsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::AddWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate )
{
	static UFunction* pFnAddWriteProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnAddWriteProfileSettingsCompleteDelegate )
		pFnAddWriteProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136502 );

	UOnlineSubsystemPC_execAddWriteProfileSettingsCompleteDelegate_Parms AddWriteProfileSettingsCompleteDelegate_Parms;
	AddWriteProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddWriteProfileSettingsCompleteDelegate_Parms.WriteProfileSettingsCompleteDelegate, &WriteProfileSettingsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddWriteProfileSettingsCompleteDelegate, &AddWriteProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnWriteProfileSettingsComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPC::OnWriteProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnWriteProfileSettingsComplete = NULL;

	if ( ! pFnOnWriteProfileSettingsComplete )
		pFnOnWriteProfileSettingsComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 136135 );

	UOnlineSubsystemPC_execOnWriteProfileSettingsComplete_Parms OnWriteProfileSettingsComplete_Parms;
	OnWriteProfileSettingsComplete_Parms.LocalUserNum = LocalUserNum;
	OnWriteProfileSettingsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnWriteProfileSettingsComplete, &OnWriteProfileSettingsComplete_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.WriteProfileSettings
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineProfileSettings*  ProfileSettings                ( CPF_Parm )

bool UOnlineSubsystemPC::WriteProfileSettings ( unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings )
{
	static UFunction* pFnWriteProfileSettings = NULL;

	if ( ! pFnWriteProfileSettings )
		pFnWriteProfileSettings = (UFunction*) UObject::GObjObjects()->GetIndex( 136496 );

	UOnlineSubsystemPC_execWriteProfileSettings_Parms WriteProfileSettings_Parms;
	WriteProfileSettings_Parms.LocalUserNum = LocalUserNum;
	WriteProfileSettings_Parms.ProfileSettings = ProfileSettings;

	pFnWriteProfileSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWriteProfileSettings, &WriteProfileSettings_Parms, NULL );

	pFnWriteProfileSettings->FunctionFlags |= 0x400;

	return WriteProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetProfileSettings
// [0x00020002] 
// Parameters infos:
// class UOnlineProfileSettings*  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

class UOnlineProfileSettings* UOnlineSubsystemPC::GetProfileSettings ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetProfileSettings = NULL;

	if ( ! pFnGetProfileSettings )
		pFnGetProfileSettings = (UFunction*) UObject::GObjObjects()->GetIndex( 136493 );

	UOnlineSubsystemPC_execGetProfileSettings_Parms GetProfileSettings_Parms;
	GetProfileSettings_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetProfileSettings, &GetProfileSettings_Parms, NULL );

	return GetProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadProfileSettingsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::ClearReadProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate )
{
	static UFunction* pFnClearReadProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnClearReadProfileSettingsCompleteDelegate )
		pFnClearReadProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136489 );

	UOnlineSubsystemPC_execClearReadProfileSettingsCompleteDelegate_Parms ClearReadProfileSettingsCompleteDelegate_Parms;
	ClearReadProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadProfileSettingsCompleteDelegate_Parms.ReadProfileSettingsCompleteDelegate, &ReadProfileSettingsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReadProfileSettingsCompleteDelegate, &ClearReadProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadProfileSettingsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::AddReadProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate )
{
	static UFunction* pFnAddReadProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnAddReadProfileSettingsCompleteDelegate )
		pFnAddReadProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136486 );

	UOnlineSubsystemPC_execAddReadProfileSettingsCompleteDelegate_Parms AddReadProfileSettingsCompleteDelegate_Parms;
	AddReadProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadProfileSettingsCompleteDelegate_Parms.ReadProfileSettingsCompleteDelegate, &ReadProfileSettingsCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReadProfileSettingsCompleteDelegate, &AddReadProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadProfileSettingsComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPC::OnReadProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadProfileSettingsComplete = NULL;

	if ( ! pFnOnReadProfileSettingsComplete )
		pFnOnReadProfileSettingsComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 136132 );

	UOnlineSubsystemPC_execOnReadProfileSettingsComplete_Parms OnReadProfileSettingsComplete_Parms;
	OnReadProfileSettingsComplete_Parms.LocalUserNum = LocalUserNum;
	OnReadProfileSettingsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadProfileSettingsComplete, &OnReadProfileSettingsComplete_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadProfileSettings
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineProfileSettings*  ProfileSettings                ( CPF_Parm )

bool UOnlineSubsystemPC::ReadProfileSettings ( unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings )
{
	static UFunction* pFnReadProfileSettings = NULL;

	if ( ! pFnReadProfileSettings )
		pFnReadProfileSettings = (UFunction*) UObject::GObjObjects()->GetIndex( 136480 );

	UOnlineSubsystemPC_execReadProfileSettings_Parms ReadProfileSettings_Parms;
	ReadProfileSettings_Parms.LocalUserNum = LocalUserNum;
	ReadProfileSettings_Parms.ProfileSettings = ProfileSettings;

	pFnReadProfileSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadProfileSettings, &ReadProfileSettings_Parms, NULL );

	pFnReadProfileSettings->FunctionFlags |= 0x400;

	return ReadProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearFriendsChangeDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         FriendsDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::ClearFriendsChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate )
{
	static UFunction* pFnClearFriendsChangeDelegate = NULL;

	if ( ! pFnClearFriendsChangeDelegate )
		pFnClearFriendsChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136476 );

	UOnlineSubsystemPC_execClearFriendsChangeDelegate_Parms ClearFriendsChangeDelegate_Parms;
	ClearFriendsChangeDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearFriendsChangeDelegate_Parms.FriendsDelegate, &FriendsDelegate, 0x10 );

	this->ProcessEvent ( pFnClearFriendsChangeDelegate, &ClearFriendsChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFriendsChangeDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         FriendsDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::AddFriendsChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate )
{
	static UFunction* pFnAddFriendsChangeDelegate = NULL;

	if ( ! pFnAddFriendsChangeDelegate )
		pFnAddFriendsChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136473 );

	UOnlineSubsystemPC_execAddFriendsChangeDelegate_Parms AddFriendsChangeDelegate_Parms;
	AddFriendsChangeDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriendsChangeDelegate_Parms.FriendsDelegate, &FriendsDelegate, 0x10 );

	this->ProcessEvent ( pFnAddFriendsChangeDelegate, &AddFriendsChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearMutingChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         MutingDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::ClearMutingChangeDelegate ( struct FScriptDelegate MutingDelegate )
{
	static UFunction* pFnClearMutingChangeDelegate = NULL;

	if ( ! pFnClearMutingChangeDelegate )
		pFnClearMutingChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136470 );

	UOnlineSubsystemPC_execClearMutingChangeDelegate_Parms ClearMutingChangeDelegate_Parms;
	memcpy ( &ClearMutingChangeDelegate_Parms.MutingDelegate, &MutingDelegate, 0x10 );

	this->ProcessEvent ( pFnClearMutingChangeDelegate, &ClearMutingChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddMutingChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         MutingDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::AddMutingChangeDelegate ( struct FScriptDelegate MutingDelegate )
{
	static UFunction* pFnAddMutingChangeDelegate = NULL;

	if ( ! pFnAddMutingChangeDelegate )
		pFnAddMutingChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136468 );

	UOnlineSubsystemPC_execAddMutingChangeDelegate_Parms AddMutingChangeDelegate_Parms;
	memcpy ( &AddMutingChangeDelegate_Parms.MutingDelegate, &MutingDelegate, 0x10 );

	this->ProcessEvent ( pFnAddMutingChangeDelegate, &AddMutingChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.IsGuestLogin
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemPC::IsGuestLogin ( unsigned char LocalUserNum )
{
	static UFunction* pFnIsGuestLogin = NULL;

	if ( ! pFnIsGuestLogin )
		pFnIsGuestLogin = (UFunction*) UObject::GObjObjects()->GetIndex( 136465 );

	UOnlineSubsystemPC_execIsGuestLogin_Parms IsGuestLogin_Parms;
	IsGuestLogin_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnIsGuestLogin, &IsGuestLogin_Parms, NULL );

	return IsGuestLogin_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.IsLocalLogin
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemPC::IsLocalLogin ( unsigned char LocalUserNum )
{
	static UFunction* pFnIsLocalLogin = NULL;

	if ( ! pFnIsLocalLogin )
		pFnIsLocalLogin = (UFunction*) UObject::GObjObjects()->GetIndex( 136462 );

	UOnlineSubsystemPC_execIsLocalLogin_Parms IsLocalLogin_Parms;
	IsLocalLogin_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnIsLocalLogin, &IsLocalLogin_Parms, NULL );

	return IsLocalLogin_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearCurrentUserChangedDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         CurrentUserDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::ClearCurrentUserChangedDelegate ( struct FScriptDelegate CurrentUserDelegate )
{
	static UFunction* pFnClearCurrentUserChangedDelegate = NULL;

	if ( ! pFnClearCurrentUserChangedDelegate )
		pFnClearCurrentUserChangedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136460 );

	UOnlineSubsystemPC_execClearCurrentUserChangedDelegate_Parms ClearCurrentUserChangedDelegate_Parms;
	memcpy ( &ClearCurrentUserChangedDelegate_Parms.CurrentUserDelegate, &CurrentUserDelegate, 0x10 );

	this->ProcessEvent ( pFnClearCurrentUserChangedDelegate, &ClearCurrentUserChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddCurrentUserChangedDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         CurrentUserDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::AddCurrentUserChangedDelegate ( struct FScriptDelegate CurrentUserDelegate )
{
	static UFunction* pFnAddCurrentUserChangedDelegate = NULL;

	if ( ! pFnAddCurrentUserChangedDelegate )
		pFnAddCurrentUserChangedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136458 );

	UOnlineSubsystemPC_execAddCurrentUserChangedDelegate_Parms AddCurrentUserChangedDelegate_Parms;
	memcpy ( &AddCurrentUserChangedDelegate_Parms.CurrentUserDelegate, &CurrentUserDelegate, 0x10 );

	this->ProcessEvent ( pFnAddCurrentUserChangedDelegate, &AddCurrentUserChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLoginCancelledDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         CancelledDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::ClearLoginCancelledDelegate ( struct FScriptDelegate CancelledDelegate )
{
	static UFunction* pFnClearLoginCancelledDelegate = NULL;

	if ( ! pFnClearLoginCancelledDelegate )
		pFnClearLoginCancelledDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136456 );

	UOnlineSubsystemPC_execClearLoginCancelledDelegate_Parms ClearLoginCancelledDelegate_Parms;
	memcpy ( &ClearLoginCancelledDelegate_Parms.CancelledDelegate, &CancelledDelegate, 0x10 );

	this->ProcessEvent ( pFnClearLoginCancelledDelegate, &ClearLoginCancelledDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddLoginCancelledDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         CancelledDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::AddLoginCancelledDelegate ( struct FScriptDelegate CancelledDelegate )
{
	static UFunction* pFnAddLoginCancelledDelegate = NULL;

	if ( ! pFnAddLoginCancelledDelegate )
		pFnAddLoginCancelledDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136454 );

	UOnlineSubsystemPC_execAddLoginCancelledDelegate_Parms AddLoginCancelledDelegate_Parms;
	memcpy ( &AddLoginCancelledDelegate_Parms.CancelledDelegate, &CancelledDelegate, 0x10 );

	this->ProcessEvent ( pFnAddLoginCancelledDelegate, &AddLoginCancelledDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLoginChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         LoginDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::ClearLoginChangeDelegate ( struct FScriptDelegate LoginDelegate )
{
	static UFunction* pFnClearLoginChangeDelegate = NULL;

	if ( ! pFnClearLoginChangeDelegate )
		pFnClearLoginChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136452 );

	UOnlineSubsystemPC_execClearLoginChangeDelegate_Parms ClearLoginChangeDelegate_Parms;
	memcpy ( &ClearLoginChangeDelegate_Parms.LoginDelegate, &LoginDelegate, 0x10 );

	this->ProcessEvent ( pFnClearLoginChangeDelegate, &ClearLoginChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddLoginChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         LoginDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::AddLoginChangeDelegate ( struct FScriptDelegate LoginDelegate )
{
	static UFunction* pFnAddLoginChangeDelegate = NULL;

	if ( ! pFnAddLoginChangeDelegate )
		pFnAddLoginChangeDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136450 );

	UOnlineSubsystemPC_execAddLoginChangeDelegate_Parms AddLoginChangeDelegate_Parms;
	memcpy ( &AddLoginChangeDelegate_Parms.LoginDelegate, &LoginDelegate, 0x10 );

	this->ProcessEvent ( pFnAddLoginChangeDelegate, &AddLoginChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ShowFriendsUI
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemPC::ShowFriendsUI ( unsigned char LocalUserNum )
{
	static UFunction* pFnShowFriendsUI = NULL;

	if ( ! pFnShowFriendsUI )
		pFnShowFriendsUI = (UFunction*) UObject::GObjObjects()->GetIndex( 136447 );

	UOnlineSubsystemPC_execShowFriendsUI_Parms ShowFriendsUI_Parms;
	ShowFriendsUI_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnShowFriendsUI, &ShowFriendsUI_Parms, NULL );

	return ShowFriendsUI_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.IsMuted
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemPC::IsMuted ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnIsMuted = NULL;

	if ( ! pFnIsMuted )
		pFnIsMuted = (UFunction*) UObject::GObjObjects()->GetIndex( 136443 );

	UOnlineSubsystemPC_execIsMuted_Parms IsMuted_Parms;
	IsMuted_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &IsMuted_Parms.PlayerID, &PlayerID, 0x8 );

	this->ProcessEvent ( pFnIsMuted, &IsMuted_Parms, NULL );

	return IsMuted_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AreAnyFriends
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FFriendsQuery > Query                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemPC::AreAnyFriends ( unsigned char LocalUserNum, TArray< struct FFriendsQuery >* Query )
{
	static UFunction* pFnAreAnyFriends = NULL;

	if ( ! pFnAreAnyFriends )
		pFnAreAnyFriends = (UFunction*) UObject::GObjObjects()->GetIndex( 136438 );

	UOnlineSubsystemPC_execAreAnyFriends_Parms AreAnyFriends_Parms;
	AreAnyFriends_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnAreAnyFriends, &AreAnyFriends_Parms, NULL );

	if ( Query )
		memcpy ( Query, &AreAnyFriends_Parms.Query, 0x10 );

	return AreAnyFriends_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.IsFriend
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemPC::IsFriend ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnIsFriend = NULL;

	if ( ! pFnIsFriend )
		pFnIsFriend = (UFunction*) UObject::GObjObjects()->GetIndex( 136434 );

	UOnlineSubsystemPC_execIsFriend_Parms IsFriend_Parms;
	IsFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &IsFriend_Parms.PlayerID, &PlayerID, 0x8 );

	this->ProcessEvent ( pFnIsFriend, &IsFriend_Parms, NULL );

	return IsFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanUploadFitnessData
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemPC::CanUploadFitnessData ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanUploadFitnessData = NULL;

	if ( ! pFnCanUploadFitnessData )
		pFnCanUploadFitnessData = (UFunction*) UObject::GObjObjects()->GetIndex( 136428 );

	UOnlineSubsystemPC_execCanUploadFitnessData_Parms CanUploadFitnessData_Parms;
	CanUploadFitnessData_Parms.LocalUserNum = LocalUserNum;
	CanUploadFitnessData_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanUploadFitnessData_Parms.Reason, &Reason, 0x10 );

	this->ProcessEvent ( pFnCanUploadFitnessData, &CanUploadFitnessData_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanUploadFitnessData_Parms.PrivilegeLevelHint;

	return CanUploadFitnessData_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanShareKinectContent
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemPC::CanShareKinectContent ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanShareKinectContent = NULL;

	if ( ! pFnCanShareKinectContent )
		pFnCanShareKinectContent = (UFunction*) UObject::GObjObjects()->GetIndex( 136422 );

	UOnlineSubsystemPC_execCanShareKinectContent_Parms CanShareKinectContent_Parms;
	CanShareKinectContent_Parms.LocalUserNum = LocalUserNum;
	CanShareKinectContent_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanShareKinectContent_Parms.Reason, &Reason, 0x10 );

	this->ProcessEvent ( pFnCanShareKinectContent, &CanShareKinectContent_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanShareKinectContent_Parms.PrivilegeLevelHint;

	return CanShareKinectContent_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanShareWithSocialNetwork
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemPC::CanShareWithSocialNetwork ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanShareWithSocialNetwork = NULL;

	if ( ! pFnCanShareWithSocialNetwork )
		pFnCanShareWithSocialNetwork = (UFunction*) UObject::GObjObjects()->GetIndex( 136416 );

	UOnlineSubsystemPC_execCanShareWithSocialNetwork_Parms CanShareWithSocialNetwork_Parms;
	CanShareWithSocialNetwork_Parms.LocalUserNum = LocalUserNum;
	CanShareWithSocialNetwork_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanShareWithSocialNetwork_Parms.Reason, &Reason, 0x10 );

	this->ProcessEvent ( pFnCanShareWithSocialNetwork, &CanShareWithSocialNetwork_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanShareWithSocialNetwork_Parms.PrivilegeLevelHint;

	return CanShareWithSocialNetwork_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanBrowseInternet
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemPC::CanBrowseInternet ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanBrowseInternet = NULL;

	if ( ! pFnCanBrowseInternet )
		pFnCanBrowseInternet = (UFunction*) UObject::GObjObjects()->GetIndex( 136410 );

	UOnlineSubsystemPC_execCanBrowseInternet_Parms CanBrowseInternet_Parms;
	CanBrowseInternet_Parms.LocalUserNum = LocalUserNum;
	CanBrowseInternet_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanBrowseInternet_Parms.Reason, &Reason, 0x10 );

	this->ProcessEvent ( pFnCanBrowseInternet, &CanBrowseInternet_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanBrowseInternet_Parms.PrivilegeLevelHint;

	return CanBrowseInternet_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanAccessPremiumVideoContent
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemPC::CanAccessPremiumVideoContent ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanAccessPremiumVideoContent = NULL;

	if ( ! pFnCanAccessPremiumVideoContent )
		pFnCanAccessPremiumVideoContent = (UFunction*) UObject::GObjObjects()->GetIndex( 136404 );

	UOnlineSubsystemPC_execCanAccessPremiumVideoContent_Parms CanAccessPremiumVideoContent_Parms;
	CanAccessPremiumVideoContent_Parms.LocalUserNum = LocalUserNum;
	CanAccessPremiumVideoContent_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanAccessPremiumVideoContent_Parms.Reason, &Reason, 0x10 );

	this->ProcessEvent ( pFnCanAccessPremiumVideoContent, &CanAccessPremiumVideoContent_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanAccessPremiumVideoContent_Parms.PrivilegeLevelHint;

	return CanAccessPremiumVideoContent_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanAccessPremiumContent
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemPC::CanAccessPremiumContent ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanAccessPremiumContent = NULL;

	if ( ! pFnCanAccessPremiumContent )
		pFnCanAccessPremiumContent = (UFunction*) UObject::GObjObjects()->GetIndex( 136398 );

	UOnlineSubsystemPC_execCanAccessPremiumContent_Parms CanAccessPremiumContent_Parms;
	CanAccessPremiumContent_Parms.LocalUserNum = LocalUserNum;
	CanAccessPremiumContent_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanAccessPremiumContent_Parms.Reason, &Reason, 0x10 );

	this->ProcessEvent ( pFnCanAccessPremiumContent, &CanAccessPremiumContent_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanAccessPremiumContent_Parms.PrivilegeLevelHint;

	return CanAccessPremiumContent_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanUseCloudStorage
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemPC::CanUseCloudStorage ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanUseCloudStorage = NULL;

	if ( ! pFnCanUseCloudStorage )
		pFnCanUseCloudStorage = (UFunction*) UObject::GObjObjects()->GetIndex( 136392 );

	UOnlineSubsystemPC_execCanUseCloudStorage_Parms CanUseCloudStorage_Parms;
	CanUseCloudStorage_Parms.LocalUserNum = LocalUserNum;
	CanUseCloudStorage_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanUseCloudStorage_Parms.Reason, &Reason, 0x10 );

	this->ProcessEvent ( pFnCanUseCloudStorage, &CanUseCloudStorage_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanUseCloudStorage_Parms.PrivilegeLevelHint;

	return CanUseCloudStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanRecordDVRClips
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemPC::CanRecordDVRClips ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanRecordDVRClips = NULL;

	if ( ! pFnCanRecordDVRClips )
		pFnCanRecordDVRClips = (UFunction*) UObject::GObjObjects()->GetIndex( 136386 );

	UOnlineSubsystemPC_execCanRecordDVRClips_Parms CanRecordDVRClips_Parms;
	CanRecordDVRClips_Parms.LocalUserNum = LocalUserNum;
	CanRecordDVRClips_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanRecordDVRClips_Parms.Reason, &Reason, 0x10 );

	this->ProcessEvent ( pFnCanRecordDVRClips, &CanRecordDVRClips_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanRecordDVRClips_Parms.PrivilegeLevelHint;

	return CanRecordDVRClips_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanShowPresenceInformation
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemPC::CanShowPresenceInformation ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanShowPresenceInformation = NULL;

	if ( ! pFnCanShowPresenceInformation )
		pFnCanShowPresenceInformation = (UFunction*) UObject::GObjObjects()->GetIndex( 136380 );

	UOnlineSubsystemPC_execCanShowPresenceInformation_Parms CanShowPresenceInformation_Parms;
	CanShowPresenceInformation_Parms.LocalUserNum = LocalUserNum;
	CanShowPresenceInformation_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanShowPresenceInformation_Parms.Reason, &Reason, 0x10 );

	this->ProcessEvent ( pFnCanShowPresenceInformation, &CanShowPresenceInformation_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanShowPresenceInformation_Parms.PrivilegeLevelHint;

	return CanShowPresenceInformation_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanViewPlayerProfiles
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemPC::CanViewPlayerProfiles ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanViewPlayerProfiles = NULL;

	if ( ! pFnCanViewPlayerProfiles )
		pFnCanViewPlayerProfiles = (UFunction*) UObject::GObjObjects()->GetIndex( 136374 );

	UOnlineSubsystemPC_execCanViewPlayerProfiles_Parms CanViewPlayerProfiles_Parms;
	CanViewPlayerProfiles_Parms.LocalUserNum = LocalUserNum;
	CanViewPlayerProfiles_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanViewPlayerProfiles_Parms.Reason, &Reason, 0x10 );

	this->ProcessEvent ( pFnCanViewPlayerProfiles, &CanViewPlayerProfiles_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanViewPlayerProfiles_Parms.PrivilegeLevelHint;

	return CanViewPlayerProfiles_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanPurchaseContent
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemPC::CanPurchaseContent ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanPurchaseContent = NULL;

	if ( ! pFnCanPurchaseContent )
		pFnCanPurchaseContent = (UFunction*) UObject::GObjObjects()->GetIndex( 136368 );

	UOnlineSubsystemPC_execCanPurchaseContent_Parms CanPurchaseContent_Parms;
	CanPurchaseContent_Parms.LocalUserNum = LocalUserNum;
	CanPurchaseContent_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanPurchaseContent_Parms.Reason, &Reason, 0x10 );

	this->ProcessEvent ( pFnCanPurchaseContent, &CanPurchaseContent_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanPurchaseContent_Parms.PrivilegeLevelHint;

	return CanPurchaseContent_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanShareUserCreatedContent
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemPC::CanShareUserCreatedContent ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanShareUserCreatedContent = NULL;

	if ( ! pFnCanShareUserCreatedContent )
		pFnCanShareUserCreatedContent = (UFunction*) UObject::GObjObjects()->GetIndex( 136361 );

	UOnlineSubsystemPC_execCanShareUserCreatedContent_Parms CanShareUserCreatedContent_Parms;
	CanShareUserCreatedContent_Parms.LocalUserNum = LocalUserNum;
	CanShareUserCreatedContent_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanShareUserCreatedContent_Parms.Reason, &Reason, 0x10 );

	this->ProcessEvent ( pFnCanShareUserCreatedContent, &CanShareUserCreatedContent_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanShareUserCreatedContent_Parms.PrivilegeLevelHint;

	return CanShareUserCreatedContent_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanMultiplayerCrossPlay
// [0x00424002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemPC::CanMultiplayerCrossPlay ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanMultiplayerCrossPlay = NULL;

	if ( ! pFnCanMultiplayerCrossPlay )
		pFnCanMultiplayerCrossPlay = (UFunction*) UObject::GObjObjects()->GetIndex( 136367 );

	UOnlineSubsystemPC_execCanMultiplayerCrossPlay_Parms CanMultiplayerCrossPlay_Parms;
	CanMultiplayerCrossPlay_Parms.LocalUserNum = LocalUserNum;
	CanMultiplayerCrossPlay_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanMultiplayerCrossPlay_Parms.Reason, &Reason, 0x10 );

	this->ProcessEvent ( pFnCanMultiplayerCrossPlay, &CanMultiplayerCrossPlay_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanMultiplayerCrossPlay_Parms.PrivilegeLevelHint;

	return CanMultiplayerCrossPlay_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanCommunicateVoice
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemPC::CanCommunicateVoice ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanCommunicateVoice = NULL;

	if ( ! pFnCanCommunicateVoice )
		pFnCanCommunicateVoice = (UFunction*) UObject::GObjObjects()->GetIndex( 136355 );

	UOnlineSubsystemPC_execCanCommunicateVoice_Parms CanCommunicateVoice_Parms;
	CanCommunicateVoice_Parms.LocalUserNum = LocalUserNum;
	CanCommunicateVoice_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanCommunicateVoice_Parms.Reason, &Reason, 0x10 );

	this->ProcessEvent ( pFnCanCommunicateVoice, &CanCommunicateVoice_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanCommunicateVoice_Parms.PrivilegeLevelHint;

	return CanCommunicateVoice_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanCommunicateVideo
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemPC::CanCommunicateVideo ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanCommunicateVideo = NULL;

	if ( ! pFnCanCommunicateVideo )
		pFnCanCommunicateVideo = (UFunction*) UObject::GObjObjects()->GetIndex( 136349 );

	UOnlineSubsystemPC_execCanCommunicateVideo_Parms CanCommunicateVideo_Parms;
	CanCommunicateVideo_Parms.LocalUserNum = LocalUserNum;
	CanCommunicateVideo_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanCommunicateVideo_Parms.Reason, &Reason, 0x10 );

	this->ProcessEvent ( pFnCanCommunicateVideo, &CanCommunicateVideo_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanCommunicateVideo_Parms.PrivilegeLevelHint;

	return CanCommunicateVideo_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanCommunicateText
// [0x00424400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemPC::CanCommunicateText ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanCommunicateText = NULL;

	if ( ! pFnCanCommunicateText )
		pFnCanCommunicateText = (UFunction*) UObject::GObjObjects()->GetIndex( 136343 );

	UOnlineSubsystemPC_execCanCommunicateText_Parms CanCommunicateText_Parms;
	CanCommunicateText_Parms.LocalUserNum = LocalUserNum;
	CanCommunicateText_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanCommunicateText_Parms.Reason, &Reason, 0x10 );

	pFnCanCommunicateText->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanCommunicateText, &CanCommunicateText_Parms, NULL );

	pFnCanCommunicateText->FunctionFlags |= 0x400;

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanCommunicateText_Parms.PrivilegeLevelHint;

	return CanCommunicateText_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanPlayOnline
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAttemptToResolve              ( CPF_OptionalParm | CPF_Parm )
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemPC::CanPlayOnline ( unsigned char LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanPlayOnline = NULL;

	if ( ! pFnCanPlayOnline )
		pFnCanPlayOnline = (UFunction*) UObject::GObjObjects()->GetIndex( 136337 );

	UOnlineSubsystemPC_execCanPlayOnline_Parms CanPlayOnline_Parms;
	CanPlayOnline_Parms.LocalUserNum = LocalUserNum;
	CanPlayOnline_Parms.bAttemptToResolve = bAttemptToResolve;
	memcpy ( &CanPlayOnline_Parms.Reason, &Reason, 0x10 );

	this->ProcessEvent ( pFnCanPlayOnline, &CanPlayOnline_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanPlayOnline_Parms.PrivilegeLevelHint;

	return CanPlayOnline_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearPrivilegeLevelCheckedDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         PrivilegeDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::ClearPrivilegeLevelCheckedDelegate ( struct FScriptDelegate PrivilegeDelegate )
{
	static UFunction* pFnClearPrivilegeLevelCheckedDelegate = NULL;

	if ( ! pFnClearPrivilegeLevelCheckedDelegate )
		pFnClearPrivilegeLevelCheckedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136335 );

	UOnlineSubsystemPC_execClearPrivilegeLevelCheckedDelegate_Parms ClearPrivilegeLevelCheckedDelegate_Parms;
	memcpy ( &ClearPrivilegeLevelCheckedDelegate_Parms.PrivilegeDelegate, &PrivilegeDelegate, 0x10 );

	this->ProcessEvent ( pFnClearPrivilegeLevelCheckedDelegate, &ClearPrivilegeLevelCheckedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddPrivilegeLevelCheckedDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         PrivilegeDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::AddPrivilegeLevelCheckedDelegate ( struct FScriptDelegate PrivilegeDelegate )
{
	static UFunction* pFnAddPrivilegeLevelCheckedDelegate = NULL;

	if ( ! pFnAddPrivilegeLevelCheckedDelegate )
		pFnAddPrivilegeLevelCheckedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136333 );

	UOnlineSubsystemPC_execAddPrivilegeLevelCheckedDelegate_Parms AddPrivilegeLevelCheckedDelegate_Parms;
	memcpy ( &AddPrivilegeLevelCheckedDelegate_Parms.PrivilegeDelegate, &PrivilegeDelegate, 0x10 );

	this->ProcessEvent ( pFnAddPrivilegeLevelCheckedDelegate, &AddPrivilegeLevelCheckedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnPrivilegeLevelChecked
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  Privilege                      ( CPF_Parm )
// unsigned char                  PrivilegeLevel                 ( CPF_Parm )
// unsigned long                  bDiffersFromHint               ( CPF_Parm )

void UOnlineSubsystemPC::OnPrivilegeLevelChecked ( unsigned char LocalUserNum, unsigned char Privilege, unsigned char PrivilegeLevel, unsigned long bDiffersFromHint )
{
	static UFunction* pFnOnPrivilegeLevelChecked = NULL;

	if ( ! pFnOnPrivilegeLevelChecked )
		pFnOnPrivilegeLevelChecked = (UFunction*) UObject::GObjObjects()->GetIndex( 136210 );

	UOnlineSubsystemPC_execOnPrivilegeLevelChecked_Parms OnPrivilegeLevelChecked_Parms;
	OnPrivilegeLevelChecked_Parms.LocalUserNum = LocalUserNum;
	OnPrivilegeLevelChecked_Parms.Privilege = Privilege;
	OnPrivilegeLevelChecked_Parms.PrivilegeLevel = PrivilegeLevel;
	OnPrivilegeLevelChecked_Parms.bDiffersFromHint = bDiffersFromHint;

	this->ProcessEvent ( pFnOnPrivilegeLevelChecked, &OnPrivilegeLevelChecked_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetPlayerNickname
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

struct FString UOnlineSubsystemPC::GetPlayerNickname ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetPlayerNickname = NULL;

	if ( ! pFnGetPlayerNickname )
		pFnGetPlayerNickname = (UFunction*) UObject::GObjObjects()->GetIndex( 136326 );

	UOnlineSubsystemPC_execGetPlayerNickname_Parms GetPlayerNickname_Parms;
	GetPlayerNickname_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetPlayerNickname, &GetPlayerNickname_Parms, NULL );

	return GetPlayerNickname_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetUniquePlayerId
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemPC::GetUniquePlayerId ( unsigned char LocalUserNum, struct FUniqueNetId* PlayerID )
{
	static UFunction* pFnGetUniquePlayerId = NULL;

	if ( ! pFnGetUniquePlayerId )
		pFnGetUniquePlayerId = (UFunction*) UObject::GObjObjects()->GetIndex( 136322 );

	UOnlineSubsystemPC_execGetUniquePlayerId_Parms GetUniquePlayerId_Parms;
	GetUniquePlayerId_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetUniquePlayerId, &GetUniquePlayerId_Parms, NULL );

	if ( PlayerID )
		memcpy ( PlayerID, &GetUniquePlayerId_Parms.PlayerID, 0x8 );

	return GetUniquePlayerId_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetLoginStatus
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemPC::GetLoginStatus ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetLoginStatus = NULL;

	if ( ! pFnGetLoginStatus )
		pFnGetLoginStatus = (UFunction*) UObject::GObjObjects()->GetIndex( 136319 );

	UOnlineSubsystemPC_execGetLoginStatus_Parms GetLoginStatus_Parms;
	GetLoginStatus_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetLoginStatus, &GetLoginStatus_Parms, NULL );

	return GetLoginStatus_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLogoutCompletedDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         LogoutDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::ClearLogoutCompletedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate )
{
	static UFunction* pFnClearLogoutCompletedDelegate = NULL;

	if ( ! pFnClearLogoutCompletedDelegate )
		pFnClearLogoutCompletedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136316 );

	UOnlineSubsystemPC_execClearLogoutCompletedDelegate_Parms ClearLogoutCompletedDelegate_Parms;
	ClearLogoutCompletedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearLogoutCompletedDelegate_Parms.LogoutDelegate, &LogoutDelegate, 0x10 );

	this->ProcessEvent ( pFnClearLogoutCompletedDelegate, &ClearLogoutCompletedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddLogoutCompletedDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         LogoutDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::AddLogoutCompletedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate )
{
	static UFunction* pFnAddLogoutCompletedDelegate = NULL;

	if ( ! pFnAddLogoutCompletedDelegate )
		pFnAddLogoutCompletedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136313 );

	UOnlineSubsystemPC_execAddLogoutCompletedDelegate_Parms AddLogoutCompletedDelegate_Parms;
	AddLogoutCompletedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddLogoutCompletedDelegate_Parms.LogoutDelegate, &LogoutDelegate, 0x10 );

	this->ProcessEvent ( pFnAddLogoutCompletedDelegate, &AddLogoutCompletedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnLogoutCompleted
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPC::OnLogoutCompleted ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnLogoutCompleted = NULL;

	if ( ! pFnOnLogoutCompleted )
		pFnOnLogoutCompleted = (UFunction*) UObject::GObjObjects()->GetIndex( 136212 );

	UOnlineSubsystemPC_execOnLogoutCompleted_Parms OnLogoutCompleted_Parms;
	OnLogoutCompleted_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnLogoutCompleted, &OnLogoutCompleted_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.Logout
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemPC::Logout ( unsigned char LocalUserNum )
{
	static UFunction* pFnLogout = NULL;

	if ( ! pFnLogout )
		pFnLogout = (UFunction*) UObject::GObjObjects()->GetIndex( 136309 );

	UOnlineSubsystemPC_execLogout_Parms Logout_Parms;
	Logout_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnLogout, &Logout_Parms, NULL );

	return Logout_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.PairUserAndControllerAtIndex
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  PlayerIndex                    ( CPF_Parm )
// unsigned char                  ControllerIndex                ( CPF_Parm )
// int                            PairIndex                      ( CPF_Parm )

bool UOnlineSubsystemPC::PairUserAndControllerAtIndex ( unsigned char PlayerIndex, unsigned char ControllerIndex, int PairIndex )
{
	static UFunction* pFnPairUserAndControllerAtIndex = NULL;

	if ( ! pFnPairUserAndControllerAtIndex )
		pFnPairUserAndControllerAtIndex = (UFunction*) UObject::GObjObjects()->GetIndex( 136304 );

	UOnlineSubsystemPC_execPairUserAndControllerAtIndex_Parms PairUserAndControllerAtIndex_Parms;
	PairUserAndControllerAtIndex_Parms.PlayerIndex = PlayerIndex;
	PairUserAndControllerAtIndex_Parms.ControllerIndex = ControllerIndex;
	PairUserAndControllerAtIndex_Parms.PairIndex = PairIndex;

	this->ProcessEvent ( pFnPairUserAndControllerAtIndex, &PairUserAndControllerAtIndex_Parms, NULL );

	return PairUserAndControllerAtIndex_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearSystemUserContrllerPairingChangedDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         PairingChangeDelegate          ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::ClearSystemUserContrllerPairingChangedDelegate ( struct FScriptDelegate PairingChangeDelegate )
{
	static UFunction* pFnClearSystemUserContrllerPairingChangedDelegate = NULL;

	if ( ! pFnClearSystemUserContrllerPairingChangedDelegate )
		pFnClearSystemUserContrllerPairingChangedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136302 );

	UOnlineSubsystemPC_execClearSystemUserContrllerPairingChangedDelegate_Parms ClearSystemUserContrllerPairingChangedDelegate_Parms;
	memcpy ( &ClearSystemUserContrllerPairingChangedDelegate_Parms.PairingChangeDelegate, &PairingChangeDelegate, 0x10 );

	this->ProcessEvent ( pFnClearSystemUserContrllerPairingChangedDelegate, &ClearSystemUserContrllerPairingChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddSystemUserContrllerPairingChangedDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         PairingChangeDelegate          ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::AddSystemUserContrllerPairingChangedDelegate ( struct FScriptDelegate PairingChangeDelegate )
{
	static UFunction* pFnAddSystemUserContrllerPairingChangedDelegate = NULL;

	if ( ! pFnAddSystemUserContrllerPairingChangedDelegate )
		pFnAddSystemUserContrllerPairingChangedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136300 );

	UOnlineSubsystemPC_execAddSystemUserContrllerPairingChangedDelegate_Parms AddSystemUserContrllerPairingChangedDelegate_Parms;
	memcpy ( &AddSystemUserContrllerPairingChangedDelegate_Parms.PairingChangeDelegate, &PairingChangeDelegate, 0x10 );

	this->ProcessEvent ( pFnAddSystemUserContrllerPairingChangedDelegate, &AddSystemUserContrllerPairingChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnSystemUserControllerPairingChanged
// [0x00120000] 
// Parameters infos:
// int                            NewLocalUserNum                ( CPF_Parm )
// int                            PreviousLocalUserNum           ( CPF_Parm )

void UOnlineSubsystemPC::OnSystemUserControllerPairingChanged ( int NewLocalUserNum, int PreviousLocalUserNum )
{
	static UFunction* pFnOnSystemUserControllerPairingChanged = NULL;

	if ( ! pFnOnSystemUserControllerPairingChanged )
		pFnOnSystemUserControllerPairingChanged = (UFunction*) UObject::GObjObjects()->GetIndex( 136214 );

	UOnlineSubsystemPC_execOnSystemUserControllerPairingChanged_Parms OnSystemUserControllerPairingChanged_Parms;
	OnSystemUserControllerPairingChanged_Parms.NewLocalUserNum = NewLocalUserNum;
	OnSystemUserControllerPairingChanged_Parms.PreviousLocalUserNum = PreviousLocalUserNum;

	this->ProcessEvent ( pFnOnSystemUserControllerPairingChanged, &OnSystemUserControllerPairingChanged_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLoginFailedDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         LoginDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::ClearLoginFailedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LoginDelegate )
{
	static UFunction* pFnClearLoginFailedDelegate = NULL;

	if ( ! pFnClearLoginFailedDelegate )
		pFnClearLoginFailedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136295 );

	UOnlineSubsystemPC_execClearLoginFailedDelegate_Parms ClearLoginFailedDelegate_Parms;
	ClearLoginFailedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearLoginFailedDelegate_Parms.LoginDelegate, &LoginDelegate, 0x10 );

	this->ProcessEvent ( pFnClearLoginFailedDelegate, &ClearLoginFailedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddLoginFailedDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         LoginDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::AddLoginFailedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LoginDelegate )
{
	static UFunction* pFnAddLoginFailedDelegate = NULL;

	if ( ! pFnAddLoginFailedDelegate )
		pFnAddLoginFailedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136292 );

	UOnlineSubsystemPC_execAddLoginFailedDelegate_Parms AddLoginFailedDelegate_Parms;
	AddLoginFailedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddLoginFailedDelegate_Parms.LoginDelegate, &LoginDelegate, 0x10 );

	this->ProcessEvent ( pFnAddLoginFailedDelegate, &AddLoginFailedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnLoginFailed
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  ErrorCode                      ( CPF_Parm )

void UOnlineSubsystemPC::OnLoginFailed ( unsigned char LocalUserNum, unsigned char ErrorCode )
{
	static UFunction* pFnOnLoginFailed = NULL;

	if ( ! pFnOnLoginFailed )
		pFnOnLoginFailed = (UFunction*) UObject::GObjObjects()->GetIndex( 136216 );

	UOnlineSubsystemPC_execOnLoginFailed_Parms OnLoginFailed_Parms;
	OnLoginFailed_Parms.LocalUserNum = LocalUserNum;
	OnLoginFailed_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent ( pFnOnLoginFailed, &OnLoginFailed_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AutoLogin
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemPC::AutoLogin ( )
{
	static UFunction* pFnAutoLogin = NULL;

	if ( ! pFnAutoLogin )
		pFnAutoLogin = (UFunction*) UObject::GObjObjects()->GetIndex( 136288 );

	UOnlineSubsystemPC_execAutoLogin_Parms AutoLogin_Parms;

	this->ProcessEvent ( pFnAutoLogin, &AutoLogin_Parms, NULL );

	return AutoLogin_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.Login
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 LoginName                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWantsLocalOnly                ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemPC::Login ( unsigned char LocalUserNum, struct FString LoginName, struct FString Password, unsigned long bWantsLocalOnly )
{
	static UFunction* pFnLogin = NULL;

	if ( ! pFnLogin )
		pFnLogin = (UFunction*) UObject::GObjObjects()->GetIndex( 136282 );

	UOnlineSubsystemPC_execLogin_Parms Login_Parms;
	Login_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &Login_Parms.LoginName, &LoginName, 0x10 );
	memcpy ( &Login_Parms.Password, &Password, 0x10 );
	Login_Parms.bWantsLocalOnly = bWantsLocalOnly;

	this->ProcessEvent ( pFnLogin, &Login_Parms, NULL );

	return Login_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.IsAccountPickerOpen
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemPC::IsAccountPickerOpen ( )
{
	static UFunction* pFnIsAccountPickerOpen = NULL;

	if ( ! pFnIsAccountPickerOpen )
		pFnIsAccountPickerOpen = (UFunction*) UObject::GObjObjects()->GetIndex( 136280 );

	UOnlineSubsystemPC_execIsAccountPickerOpen_Parms IsAccountPickerOpen_Parms;

	this->ProcessEvent ( pFnIsAccountPickerOpen, &IsAccountPickerOpen_Parms, NULL );

	return IsAccountPickerOpen_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ShowLoginUI
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bForceLogin                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bShowOnlineOnly                ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemPC::ShowLoginUI ( unsigned char LocalUserNum, unsigned long bForceLogin, unsigned long bShowOnlineOnly )
{
	static UFunction* pFnShowLoginUI = NULL;

	if ( ! pFnShowLoginUI )
		pFnShowLoginUI = (UFunction*) UObject::GObjObjects()->GetIndex( 136275 );

	UOnlineSubsystemPC_execShowLoginUI_Parms ShowLoginUI_Parms;
	ShowLoginUI_Parms.LocalUserNum = LocalUserNum;
	ShowLoginUI_Parms.bForceLogin = bForceLogin;
	ShowLoginUI_Parms.bShowOnlineOnly = bShowOnlineOnly;

	this->ProcessEvent ( pFnShowLoginUI, &ShowLoginUI_Parms, NULL );

	return ShowLoginUI_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnFriendsChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPC::OnFriendsChange ( )
{
	static UFunction* pFnOnFriendsChange = NULL;

	if ( ! pFnOnFriendsChange )
		pFnOnFriendsChange = (UFunction*) UObject::GObjObjects()->GetIndex( 136141 );

	UOnlineSubsystemPC_execOnFriendsChange_Parms OnFriendsChange_Parms;

	this->ProcessEvent ( pFnOnFriendsChange, &OnFriendsChange_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetTitleFileState
// [0x00020000] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

unsigned char UOnlineSubsystemPC::GetTitleFileState ( struct FString Filename )
{
	static UFunction* pFnGetTitleFileState = NULL;

	if ( ! pFnGetTitleFileState )
		pFnGetTitleFileState = (UFunction*) UObject::GObjObjects()->GetIndex( 136272 );

	UOnlineSubsystemPC_execGetTitleFileState_Parms GetTitleFileState_Parms;
	memcpy ( &GetTitleFileState_Parms.Filename, &Filename, 0x10 );

	this->ProcessEvent ( pFnGetTitleFileState, &GetTitleFileState_Parms, NULL );

	return GetTitleFileState_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetTitleFileContents
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        FileContents                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemPC::GetTitleFileContents ( struct FString Filename, TArray< unsigned char >* FileContents )
{
	static UFunction* pFnGetTitleFileContents = NULL;

	if ( ! pFnGetTitleFileContents )
		pFnGetTitleFileContents = (UFunction*) UObject::GObjObjects()->GetIndex( 136267 );

	UOnlineSubsystemPC_execGetTitleFileContents_Parms GetTitleFileContents_Parms;
	memcpy ( &GetTitleFileContents_Parms.Filename, &Filename, 0x10 );

	this->ProcessEvent ( pFnGetTitleFileContents, &GetTitleFileContents_Parms, NULL );

	if ( FileContents )
		memcpy ( FileContents, &GetTitleFileContents_Parms.FileContents, 0x10 );

	return GetTitleFileContents_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadTitleFileCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::ClearReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate )
{
	static UFunction* pFnClearReadTitleFileCompleteDelegate = NULL;

	if ( ! pFnClearReadTitleFileCompleteDelegate )
		pFnClearReadTitleFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136265 );

	UOnlineSubsystemPC_execClearReadTitleFileCompleteDelegate_Parms ClearReadTitleFileCompleteDelegate_Parms;
	memcpy ( &ClearReadTitleFileCompleteDelegate_Parms.ReadTitleFileCompleteDelegate, &ReadTitleFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReadTitleFileCompleteDelegate, &ClearReadTitleFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadTitleFileCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::AddReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate )
{
	static UFunction* pFnAddReadTitleFileCompleteDelegate = NULL;

	if ( ! pFnAddReadTitleFileCompleteDelegate )
		pFnAddReadTitleFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136263 );

	UOnlineSubsystemPC_execAddReadTitleFileCompleteDelegate_Parms AddReadTitleFileCompleteDelegate_Parms;
	memcpy ( &AddReadTitleFileCompleteDelegate_Parms.ReadTitleFileCompleteDelegate, &ReadTitleFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReadTitleFileCompleteDelegate, &AddReadTitleFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadTitleFile
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 FileToRead                     ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPC::ReadTitleFile ( struct FString FileToRead )
{
	static UFunction* pFnReadTitleFile = NULL;

	if ( ! pFnReadTitleFile )
		pFnReadTitleFile = (UFunction*) UObject::GObjObjects()->GetIndex( 136260 );

	UOnlineSubsystemPC_execReadTitleFile_Parms ReadTitleFile_Parms;
	memcpy ( &ReadTitleFile_Parms.FileToRead, &FileToRead, 0x10 );

	this->ProcessEvent ( pFnReadTitleFile, &ReadTitleFile_Parms, NULL );

	return ReadTitleFile_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadTitleFileComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::OnReadTitleFileComplete ( unsigned long bWasSuccessful, struct FString Filename )
{
	static UFunction* pFnOnReadTitleFileComplete = NULL;

	if ( ! pFnOnReadTitleFileComplete )
		pFnOnReadTitleFileComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 136219 );

	UOnlineSubsystemPC_execOnReadTitleFileComplete_Parms OnReadTitleFileComplete_Parms;
	OnReadTitleFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnReadTitleFileComplete_Parms.Filename, &Filename, 0x10 );

	this->ProcessEvent ( pFnOnReadTitleFileComplete, &OnReadTitleFileComplete_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnMutingChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPC::OnMutingChange ( )
{
	static UFunction* pFnOnMutingChange = NULL;

	if ( ! pFnOnMutingChange )
		pFnOnMutingChange = (UFunction*) UObject::GObjObjects()->GetIndex( 136144 );

	UOnlineSubsystemPC_execOnMutingChange_Parms OnMutingChange_Parms;

	this->ProcessEvent ( pFnOnMutingChange, &OnMutingChange_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearURLTokenRetrievedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         tsrDelegate                    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::ClearURLTokenRetrievedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate tsrDelegate )
{
	static UFunction* pFnClearURLTokenRetrievedDelegate = NULL;

	if ( ! pFnClearURLTokenRetrievedDelegate )
		pFnClearURLTokenRetrievedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136254 );

	UOnlineSubsystemPC_execClearURLTokenRetrievedDelegate_Parms ClearURLTokenRetrievedDelegate_Parms;
	ClearURLTokenRetrievedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearURLTokenRetrievedDelegate_Parms.tsrDelegate, &tsrDelegate, 0x10 );

	this->ProcessEvent ( pFnClearURLTokenRetrievedDelegate, &ClearURLTokenRetrievedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddURLTokenRetrievedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         tsrDelegate                    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::AddURLTokenRetrievedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate tsrDelegate )
{
	static UFunction* pFnAddURLTokenRetrievedDelegate = NULL;

	if ( ! pFnAddURLTokenRetrievedDelegate )
		pFnAddURLTokenRetrievedDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 136251 );

	UOnlineSubsystemPC_execAddURLTokenRetrievedDelegate_Parms AddURLTokenRetrievedDelegate_Parms;
	AddURLTokenRetrievedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddURLTokenRetrievedDelegate_Parms.tsrDelegate, &tsrDelegate, 0x10 );

	this->ProcessEvent ( pFnAddURLTokenRetrievedDelegate, &AddURLTokenRetrievedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetTokenAndSignatureForURL
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 URL                            ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPC::GetTokenAndSignatureForURL ( unsigned char LocalUserNum, struct FString URL )
{
	static UFunction* pFnGetTokenAndSignatureForURL = NULL;

	if ( ! pFnGetTokenAndSignatureForURL )
		pFnGetTokenAndSignatureForURL = (UFunction*) UObject::GObjObjects()->GetIndex( 136247 );

	UOnlineSubsystemPC_execGetTokenAndSignatureForURL_Parms GetTokenAndSignatureForURL_Parms;
	GetTokenAndSignatureForURL_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &GetTokenAndSignatureForURL_Parms.URL, &URL, 0x10 );

	pFnGetTokenAndSignatureForURL->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTokenAndSignatureForURL, &GetTokenAndSignatureForURL_Parms, NULL );

	pFnGetTokenAndSignatureForURL->FunctionFlags |= 0x400;

	return GetTokenAndSignatureForURL_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnTokenAndSignatureRetrieved
// [0x00120000] 
// Parameters infos:
// unsigned long                  bSuccess                       ( CPF_Parm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 URL                            ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Token                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 AuthToken                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Signature                      ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::OnTokenAndSignatureRetrieved ( unsigned long bSuccess, unsigned char LocalUserNum, struct FString URL, struct FString Token, struct FString AuthToken, struct FString Signature )
{
	static UFunction* pFnOnTokenAndSignatureRetrieved = NULL;

	if ( ! pFnOnTokenAndSignatureRetrieved )
		pFnOnTokenAndSignatureRetrieved = (UFunction*) UObject::GObjObjects()->GetIndex( 136147 );

	UOnlineSubsystemPC_execOnTokenAndSignatureRetrieved_Parms OnTokenAndSignatureRetrieved_Parms;
	OnTokenAndSignatureRetrieved_Parms.bSuccess = bSuccess;
	OnTokenAndSignatureRetrieved_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OnTokenAndSignatureRetrieved_Parms.URL, &URL, 0x10 );
	memcpy ( &OnTokenAndSignatureRetrieved_Parms.Token, &Token, 0x10 );
	memcpy ( &OnTokenAndSignatureRetrieved_Parms.AuthToken, &AuthToken, 0x10 );
	memcpy ( &OnTokenAndSignatureRetrieved_Parms.Signature, &Signature, 0x10 );

	this->ProcessEvent ( pFnOnTokenAndSignatureRetrieved, &OnTokenAndSignatureRetrieved_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnCurrentUserChanged
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 CurrentUser                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 LoggedInUser                   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPC::OnCurrentUserChanged ( unsigned char LocalUserNum, struct FString CurrentUser, struct FString LoggedInUser )
{
	static UFunction* pFnOnCurrentUserChanged = NULL;

	if ( ! pFnOnCurrentUserChanged )
		pFnOnCurrentUserChanged = (UFunction*) UObject::GObjObjects()->GetIndex( 136223 );

	UOnlineSubsystemPC_execOnCurrentUserChanged_Parms OnCurrentUserChanged_Parms;
	OnCurrentUserChanged_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OnCurrentUserChanged_Parms.CurrentUser, &CurrentUser, 0x10 );
	memcpy ( &OnCurrentUserChanged_Parms.LoggedInUser, &LoggedInUser, 0x10 );

	this->ProcessEvent ( pFnOnCurrentUserChanged, &OnCurrentUserChanged_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnLoginCancelled
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPC::OnLoginCancelled ( )
{
	static UFunction* pFnOnLoginCancelled = NULL;

	if ( ! pFnOnLoginCancelled )
		pFnOnLoginCancelled = (UFunction*) UObject::GObjObjects()->GetIndex( 136225 );

	UOnlineSubsystemPC_execOnLoginCancelled_Parms OnLoginCancelled_Parms;

	this->ProcessEvent ( pFnOnLoginCancelled, &OnLoginCancelled_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnLoginChange
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemPC::OnLoginChange ( unsigned char LocalUserNum )
{
	static UFunction* pFnOnLoginChange = NULL;

	if ( ! pFnOnLoginChange )
		pFnOnLoginChange = (UFunction*) UObject::GObjObjects()->GetIndex( 136227 );

	UOnlineSubsystemPC_execOnLoginChange_Parms OnLoginChange_Parms;
	OnLoginChange_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnOnLoginChange, &OnLoginChange_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.Init
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemPC::eventInit ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->GetIndex( 136235 );

	UOnlineSubsystemPC_eventInit_Parms Init_Parms;

	pFnInit->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );

	pFnInit->FunctionFlags |= 0x400;

	return Init_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.UnmuteAll
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineVoiceInterfacePC::UnmuteAll ( unsigned char LocalUserNum )
{
	static UFunction* pFnUnmuteAll = NULL;

	if ( ! pFnUnmuteAll )
		pFnUnmuteAll = (UFunction*) UObject::GObjObjects()->GetIndex( 137084 );

	UOnlineVoiceInterfacePC_execUnmuteAll_Parms UnmuteAll_Parms;
	UnmuteAll_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnUnmuteAll, &UnmuteAll_Parms, NULL );

	return UnmuteAll_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.MuteAll
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAllowFriends                  ( CPF_Parm )

bool UOnlineVoiceInterfacePC::MuteAll ( unsigned char LocalUserNum, unsigned long bAllowFriends )
{
	static UFunction* pFnMuteAll = NULL;

	if ( ! pFnMuteAll )
		pFnMuteAll = (UFunction*) UObject::GObjObjects()->GetIndex( 137080 );

	UOnlineVoiceInterfacePC_execMuteAll_Parms MuteAll_Parms;
	MuteAll_Parms.LocalUserNum = LocalUserNum;
	MuteAll_Parms.bAllowFriends = bAllowFriends;

	this->ProcessEvent ( pFnMuteAll, &MuteAll_Parms, NULL );

	return MuteAll_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.SetSpeechRecognitionObject
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class USpeechRecognition*      SpeechRecogObj                 ( CPF_Parm )

bool UOnlineVoiceInterfacePC::SetSpeechRecognitionObject ( unsigned char LocalUserNum, class USpeechRecognition* SpeechRecogObj )
{
	static UFunction* pFnSetSpeechRecognitionObject = NULL;

	if ( ! pFnSetSpeechRecognitionObject )
		pFnSetSpeechRecognitionObject = (UFunction*) UObject::GObjObjects()->GetIndex( 137076 );

	UOnlineVoiceInterfacePC_execSetSpeechRecognitionObject_Parms SetSpeechRecognitionObject_Parms;
	SetSpeechRecognitionObject_Parms.LocalUserNum = LocalUserNum;
	SetSpeechRecognitionObject_Parms.SpeechRecogObj = SpeechRecogObj;

	pFnSetSpeechRecognitionObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetSpeechRecognitionObject, &SetSpeechRecognitionObject_Parms, NULL );

	pFnSetSpeechRecognitionObject->FunctionFlags |= 0x400;

	return SetSpeechRecognitionObject_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.SelectVocabulary
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            VocabularyId                   ( CPF_Parm )

bool UOnlineVoiceInterfacePC::SelectVocabulary ( unsigned char LocalUserNum, int VocabularyId )
{
	static UFunction* pFnSelectVocabulary = NULL;

	if ( ! pFnSelectVocabulary )
		pFnSelectVocabulary = (UFunction*) UObject::GObjObjects()->GetIndex( 137072 );

	UOnlineVoiceInterfacePC_execSelectVocabulary_Parms SelectVocabulary_Parms;
	SelectVocabulary_Parms.LocalUserNum = LocalUserNum;
	SelectVocabulary_Parms.VocabularyId = VocabularyId;

	pFnSelectVocabulary->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSelectVocabulary, &SelectVocabulary_Parms, NULL );

	pFnSelectVocabulary->FunctionFlags |= 0x400;

	return SelectVocabulary_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.ClearRecognitionCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         RecognitionDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineVoiceInterfacePC::ClearRecognitionCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate RecognitionDelegate )
{
	static UFunction* pFnClearRecognitionCompleteDelegate = NULL;

	if ( ! pFnClearRecognitionCompleteDelegate )
		pFnClearRecognitionCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 137068 );

	UOnlineVoiceInterfacePC_execClearRecognitionCompleteDelegate_Parms ClearRecognitionCompleteDelegate_Parms;
	ClearRecognitionCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearRecognitionCompleteDelegate_Parms.RecognitionDelegate, &RecognitionDelegate, 0x10 );

	this->ProcessEvent ( pFnClearRecognitionCompleteDelegate, &ClearRecognitionCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.AddRecognitionCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         RecognitionDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineVoiceInterfacePC::AddRecognitionCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate RecognitionDelegate )
{
	static UFunction* pFnAddRecognitionCompleteDelegate = NULL;

	if ( ! pFnAddRecognitionCompleteDelegate )
		pFnAddRecognitionCompleteDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 137065 );

	UOnlineVoiceInterfacePC_execAddRecognitionCompleteDelegate_Parms AddRecognitionCompleteDelegate_Parms;
	AddRecognitionCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddRecognitionCompleteDelegate_Parms.RecognitionDelegate, &RecognitionDelegate, 0x10 );

	this->ProcessEvent ( pFnAddRecognitionCompleteDelegate, &AddRecognitionCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.OnRecognitionComplete
// [0x00120000] 
// Parameters infos:

void UOnlineVoiceInterfacePC::OnRecognitionComplete ( )
{
	static UFunction* pFnOnRecognitionComplete = NULL;

	if ( ! pFnOnRecognitionComplete )
		pFnOnRecognitionComplete = (UFunction*) UObject::GObjObjects()->GetIndex( 136981 );

	UOnlineVoiceInterfacePC_execOnRecognitionComplete_Parms OnRecognitionComplete_Parms;

	this->ProcessEvent ( pFnOnRecognitionComplete, &OnRecognitionComplete_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.GetRecognitionResults
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FSpeechRecognizedWord > Words                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineVoiceInterfacePC::GetRecognitionResults ( unsigned char LocalUserNum, TArray< struct FSpeechRecognizedWord >* Words )
{
	static UFunction* pFnGetRecognitionResults = NULL;

	if ( ! pFnGetRecognitionResults )
		pFnGetRecognitionResults = (UFunction*) UObject::GObjObjects()->GetIndex( 137060 );

	UOnlineVoiceInterfacePC_execGetRecognitionResults_Parms GetRecognitionResults_Parms;
	GetRecognitionResults_Parms.LocalUserNum = LocalUserNum;

	pFnGetRecognitionResults->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetRecognitionResults, &GetRecognitionResults_Parms, NULL );

	pFnGetRecognitionResults->FunctionFlags |= 0x400;

	if ( Words )
		memcpy ( Words, &GetRecognitionResults_Parms.Words, 0x10 );

	return GetRecognitionResults_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.StopSpeechRecognition
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineVoiceInterfacePC::StopSpeechRecognition ( unsigned char LocalUserNum )
{
	static UFunction* pFnStopSpeechRecognition = NULL;

	if ( ! pFnStopSpeechRecognition )
		pFnStopSpeechRecognition = (UFunction*) UObject::GObjObjects()->GetIndex( 137057 );

	UOnlineVoiceInterfacePC_execStopSpeechRecognition_Parms StopSpeechRecognition_Parms;
	StopSpeechRecognition_Parms.LocalUserNum = LocalUserNum;

	pFnStopSpeechRecognition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopSpeechRecognition, &StopSpeechRecognition_Parms, NULL );

	pFnStopSpeechRecognition->FunctionFlags |= 0x400;

	return StopSpeechRecognition_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.StartSpeechRecognition
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineVoiceInterfacePC::StartSpeechRecognition ( unsigned char LocalUserNum )
{
	static UFunction* pFnStartSpeechRecognition = NULL;

	if ( ! pFnStartSpeechRecognition )
		pFnStartSpeechRecognition = (UFunction*) UObject::GObjObjects()->GetIndex( 137054 );

	UOnlineVoiceInterfacePC_execStartSpeechRecognition_Parms StartSpeechRecognition_Parms;
	StartSpeechRecognition_Parms.LocalUserNum = LocalUserNum;

	pFnStartSpeechRecognition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStartSpeechRecognition, &StartSpeechRecognition_Parms, NULL );

	pFnStartSpeechRecognition->FunctionFlags |= 0x400;

	return StartSpeechRecognition_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.StopNetworkedVoice
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineVoiceInterfacePC::StopNetworkedVoice ( unsigned char LocalUserNum )
{
	static UFunction* pFnStopNetworkedVoice = NULL;

	if ( ! pFnStopNetworkedVoice )
		pFnStopNetworkedVoice = (UFunction*) UObject::GObjObjects()->GetIndex( 137052 );

	UOnlineVoiceInterfacePC_execStopNetworkedVoice_Parms StopNetworkedVoice_Parms;
	StopNetworkedVoice_Parms.LocalUserNum = LocalUserNum;

	pFnStopNetworkedVoice->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopNetworkedVoice, &StopNetworkedVoice_Parms, NULL );

	pFnStopNetworkedVoice->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.StartNetworkedVoice
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineVoiceInterfacePC::StartNetworkedVoice ( unsigned char LocalUserNum )
{
	static UFunction* pFnStartNetworkedVoice = NULL;

	if ( ! pFnStartNetworkedVoice )
		pFnStartNetworkedVoice = (UFunction*) UObject::GObjObjects()->GetIndex( 137050 );

	UOnlineVoiceInterfacePC_execStartNetworkedVoice_Parms StartNetworkedVoice_Parms;
	StartNetworkedVoice_Parms.LocalUserNum = LocalUserNum;

	pFnStartNetworkedVoice->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStartNetworkedVoice, &StartNetworkedVoice_Parms, NULL );

	pFnStartNetworkedVoice->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.ClearPlayerTalkingDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         TalkerDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineVoiceInterfacePC::ClearPlayerTalkingDelegate ( struct FScriptDelegate TalkerDelegate )
{
	static UFunction* pFnClearPlayerTalkingDelegate = NULL;

	if ( ! pFnClearPlayerTalkingDelegate )
		pFnClearPlayerTalkingDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 137047 );

	UOnlineVoiceInterfacePC_execClearPlayerTalkingDelegate_Parms ClearPlayerTalkingDelegate_Parms;
	memcpy ( &ClearPlayerTalkingDelegate_Parms.TalkerDelegate, &TalkerDelegate, 0x10 );

	this->ProcessEvent ( pFnClearPlayerTalkingDelegate, &ClearPlayerTalkingDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.AddPlayerTalkingDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         TalkerDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineVoiceInterfacePC::AddPlayerTalkingDelegate ( struct FScriptDelegate TalkerDelegate )
{
	static UFunction* pFnAddPlayerTalkingDelegate = NULL;

	if ( ! pFnAddPlayerTalkingDelegate )
		pFnAddPlayerTalkingDelegate = (UFunction*) UObject::GObjObjects()->GetIndex( 137044 );

	UOnlineVoiceInterfacePC_execAddPlayerTalkingDelegate_Parms AddPlayerTalkingDelegate_Parms;
	memcpy ( &AddPlayerTalkingDelegate_Parms.TalkerDelegate, &TalkerDelegate, 0x10 );

	this->ProcessEvent ( pFnAddPlayerTalkingDelegate, &AddPlayerTalkingDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.OnPlayerTalkingStateChange
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            Player                         ( CPF_Parm )
// unsigned long                  bIsTalking                     ( CPF_Parm )

void UOnlineVoiceInterfacePC::OnPlayerTalkingStateChange ( struct FUniqueNetId Player, unsigned long bIsTalking )
{
	static UFunction* pFnOnPlayerTalkingStateChange = NULL;

	if ( ! pFnOnPlayerTalkingStateChange )
		pFnOnPlayerTalkingStateChange = (UFunction*) UObject::GObjObjects()->GetIndex( 136984 );

	UOnlineVoiceInterfacePC_execOnPlayerTalkingStateChange_Parms OnPlayerTalkingStateChange_Parms;
	memcpy ( &OnPlayerTalkingStateChange_Parms.Player, &Player, 0x8 );
	OnPlayerTalkingStateChange_Parms.bIsTalking = bIsTalking;

	this->ProcessEvent ( pFnOnPlayerTalkingStateChange, &OnPlayerTalkingStateChange_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.IsTalkerMuted
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            ConsoleId                      ( CPF_Parm )

bool UOnlineVoiceInterfacePC::IsTalkerMuted ( struct FUniqueNetId ConsoleId )
{
	static UFunction* pFnIsTalkerMuted = NULL;

	if ( ! pFnIsTalkerMuted )
		pFnIsTalkerMuted = (UFunction*) UObject::GObjObjects()->GetIndex( 137039 );

	UOnlineVoiceInterfacePC_execIsTalkerMuted_Parms IsTalkerMuted_Parms;
	memcpy ( &IsTalkerMuted_Parms.ConsoleId, &ConsoleId, 0x8 );

	this->ProcessEvent ( pFnIsTalkerMuted, &IsTalkerMuted_Parms, NULL );

	return IsTalkerMuted_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.UnmuteRemoteTalker
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bIsSystemWide                  ( CPF_OptionalParm | CPF_Parm )

bool UOnlineVoiceInterfacePC::UnmuteRemoteTalker ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide )
{
	static UFunction* pFnUnmuteRemoteTalker = NULL;

	if ( ! pFnUnmuteRemoteTalker )
		pFnUnmuteRemoteTalker = (UFunction*) UObject::GObjObjects()->GetIndex( 137034 );

	UOnlineVoiceInterfacePC_execUnmuteRemoteTalker_Parms UnmuteRemoteTalker_Parms;
	UnmuteRemoteTalker_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &UnmuteRemoteTalker_Parms.PlayerID, &PlayerID, 0x8 );
	UnmuteRemoteTalker_Parms.bIsSystemWide = bIsSystemWide;

	pFnUnmuteRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnmuteRemoteTalker, &UnmuteRemoteTalker_Parms, NULL );

	pFnUnmuteRemoteTalker->FunctionFlags |= 0x400;

	return UnmuteRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.MuteRemoteTalker
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bIsSystemWide                  ( CPF_OptionalParm | CPF_Parm )

bool UOnlineVoiceInterfacePC::MuteRemoteTalker ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide )
{
	static UFunction* pFnMuteRemoteTalker = NULL;

	if ( ! pFnMuteRemoteTalker )
		pFnMuteRemoteTalker = (UFunction*) UObject::GObjObjects()->GetIndex( 137029 );

	UOnlineVoiceInterfacePC_execMuteRemoteTalker_Parms MuteRemoteTalker_Parms;
	MuteRemoteTalker_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &MuteRemoteTalker_Parms.PlayerID, &PlayerID, 0x8 );
	MuteRemoteTalker_Parms.bIsSystemWide = bIsSystemWide;

	pFnMuteRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMuteRemoteTalker, &MuteRemoteTalker_Parms, NULL );

	pFnMuteRemoteTalker->FunctionFlags |= 0x400;

	return MuteRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.UpdatePlayerMuteSetting
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  PlayerMuteSetting              ( CPF_Parm )

bool UOnlineVoiceInterfacePC::UpdatePlayerMuteSetting ( unsigned long PlayerMuteSetting )
{
	static UFunction* pFnUpdatePlayerMuteSetting = NULL;

	if ( ! pFnUpdatePlayerMuteSetting )
		pFnUpdatePlayerMuteSetting = (UFunction*) UObject::GObjObjects()->GetIndex( 137026 );

	UOnlineVoiceInterfacePC_execUpdatePlayerMuteSetting_Parms UpdatePlayerMuteSetting_Parms;
	UpdatePlayerMuteSetting_Parms.PlayerMuteSetting = PlayerMuteSetting;

	this->ProcessEvent ( pFnUpdatePlayerMuteSetting, &UpdatePlayerMuteSetting_Parms, NULL );

	return UpdatePlayerMuteSetting_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.SetRemoteTalkerPriority
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// int                            Priority                       ( CPF_Parm )

bool UOnlineVoiceInterfacePC::SetRemoteTalkerPriority ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, int Priority )
{
	static UFunction* pFnSetRemoteTalkerPriority = NULL;

	if ( ! pFnSetRemoteTalkerPriority )
		pFnSetRemoteTalkerPriority = (UFunction*) UObject::GObjObjects()->GetIndex( 137021 );

	UOnlineVoiceInterfacePC_execSetRemoteTalkerPriority_Parms SetRemoteTalkerPriority_Parms;
	SetRemoteTalkerPriority_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SetRemoteTalkerPriority_Parms.PlayerID, &PlayerID, 0x8 );
	SetRemoteTalkerPriority_Parms.Priority = Priority;

	pFnSetRemoteTalkerPriority->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetRemoteTalkerPriority, &SetRemoteTalkerPriority_Parms, NULL );

	pFnSetRemoteTalkerPriority->FunctionFlags |= 0x400;

	return SetRemoteTalkerPriority_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.IsHeadsetPresent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineVoiceInterfacePC::IsHeadsetPresent ( unsigned char LocalUserNum )
{
	static UFunction* pFnIsHeadsetPresent = NULL;

	if ( ! pFnIsHeadsetPresent )
		pFnIsHeadsetPresent = (UFunction*) UObject::GObjObjects()->GetIndex( 137018 );

	UOnlineVoiceInterfacePC_execIsHeadsetPresent_Parms IsHeadsetPresent_Parms;
	IsHeadsetPresent_Parms.LocalUserNum = LocalUserNum;

	pFnIsHeadsetPresent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsHeadsetPresent, &IsHeadsetPresent_Parms, NULL );

	pFnIsHeadsetPresent->FunctionFlags |= 0x400;

	return IsHeadsetPresent_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.IsRemotePlayerTalking
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineVoiceInterfacePC::IsRemotePlayerTalking ( struct FUniqueNetId PlayerID )
{
	static UFunction* pFnIsRemotePlayerTalking = NULL;

	if ( ! pFnIsRemotePlayerTalking )
		pFnIsRemotePlayerTalking = (UFunction*) UObject::GObjObjects()->GetIndex( 137015 );

	UOnlineVoiceInterfacePC_execIsRemotePlayerTalking_Parms IsRemotePlayerTalking_Parms;
	memcpy ( &IsRemotePlayerTalking_Parms.PlayerID, &PlayerID, 0x8 );

	pFnIsRemotePlayerTalking->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsRemotePlayerTalking, &IsRemotePlayerTalking_Parms, NULL );

	pFnIsRemotePlayerTalking->FunctionFlags |= 0x400;

	return IsRemotePlayerTalking_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.IsLocalPlayerTalking
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineVoiceInterfacePC::IsLocalPlayerTalking ( unsigned char LocalUserNum )
{
	static UFunction* pFnIsLocalPlayerTalking = NULL;

	if ( ! pFnIsLocalPlayerTalking )
		pFnIsLocalPlayerTalking = (UFunction*) UObject::GObjObjects()->GetIndex( 137012 );

	UOnlineVoiceInterfacePC_execIsLocalPlayerTalking_Parms IsLocalPlayerTalking_Parms;
	IsLocalPlayerTalking_Parms.LocalUserNum = LocalUserNum;

	pFnIsLocalPlayerTalking->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsLocalPlayerTalking, &IsLocalPlayerTalking_Parms, NULL );

	pFnIsLocalPlayerTalking->FunctionFlags |= 0x400;

	return IsLocalPlayerTalking_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.UnregisterRemoteTalker
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineVoiceInterfacePC::UnregisterRemoteTalker ( struct FUniqueNetId PlayerID )
{
	static UFunction* pFnUnregisterRemoteTalker = NULL;

	if ( ! pFnUnregisterRemoteTalker )
		pFnUnregisterRemoteTalker = (UFunction*) UObject::GObjObjects()->GetIndex( 137009 );

	UOnlineVoiceInterfacePC_execUnregisterRemoteTalker_Parms UnregisterRemoteTalker_Parms;
	memcpy ( &UnregisterRemoteTalker_Parms.PlayerID, &PlayerID, 0x8 );

	pFnUnregisterRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterRemoteTalker, &UnregisterRemoteTalker_Parms, NULL );

	pFnUnregisterRemoteTalker->FunctionFlags |= 0x400;

	return UnregisterRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.RegisterRemoteTalker
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineVoiceInterfacePC::RegisterRemoteTalker ( struct FUniqueNetId PlayerID )
{
	static UFunction* pFnRegisterRemoteTalker = NULL;

	if ( ! pFnRegisterRemoteTalker )
		pFnRegisterRemoteTalker = (UFunction*) UObject::GObjObjects()->GetIndex( 137006 );

	UOnlineVoiceInterfacePC_execRegisterRemoteTalker_Parms RegisterRemoteTalker_Parms;
	memcpy ( &RegisterRemoteTalker_Parms.PlayerID, &PlayerID, 0x8 );

	pFnRegisterRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterRemoteTalker, &RegisterRemoteTalker_Parms, NULL );

	pFnRegisterRemoteTalker->FunctionFlags |= 0x400;

	return RegisterRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.UnregisterLocalTalker
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  ChannelIndex                   ( CPF_OptionalParm | CPF_Parm )

bool UOnlineVoiceInterfacePC::UnregisterLocalTalker ( unsigned char LocalUserNum, unsigned char ChannelIndex )
{
	static UFunction* pFnUnregisterLocalTalker = NULL;

	if ( ! pFnUnregisterLocalTalker )
		pFnUnregisterLocalTalker = (UFunction*) UObject::GObjObjects()->GetIndex( 137002 );

	UOnlineVoiceInterfacePC_execUnregisterLocalTalker_Parms UnregisterLocalTalker_Parms;
	UnregisterLocalTalker_Parms.LocalUserNum = LocalUserNum;
	UnregisterLocalTalker_Parms.ChannelIndex = ChannelIndex;

	pFnUnregisterLocalTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterLocalTalker, &UnregisterLocalTalker_Parms, NULL );

	pFnUnregisterLocalTalker->FunctionFlags |= 0x400;

	return UnregisterLocalTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemPC.OnlineVoiceInterfacePC.RegisterLocalTalker
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  ChannelIndex                   ( CPF_OptionalParm | CPF_Parm )

bool UOnlineVoiceInterfacePC::RegisterLocalTalker ( unsigned char LocalUserNum, unsigned char ChannelIndex )
{
	static UFunction* pFnRegisterLocalTalker = NULL;

	if ( ! pFnRegisterLocalTalker )
		pFnRegisterLocalTalker = (UFunction*) UObject::GObjObjects()->GetIndex( 136998 );

	UOnlineVoiceInterfacePC_execRegisterLocalTalker_Parms RegisterLocalTalker_Parms;
	RegisterLocalTalker_Parms.LocalUserNum = LocalUserNum;
	RegisterLocalTalker_Parms.ChannelIndex = ChannelIndex;

	pFnRegisterLocalTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterLocalTalker, &RegisterLocalTalker_Parms, NULL );

	pFnRegisterLocalTalker->FunctionFlags |= 0x400;

	return RegisterLocalTalker_Parms.ReturnValue;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif