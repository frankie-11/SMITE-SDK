/*
#############################################################################################
# Smite (v3.24.3804.2) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: Vivox_functions.h
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

// Function Vivox.VivoxOSSConnectors.OnGameChatBlockedChanged
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bIsActive                      ( CPF_Parm )

void UVivoxOSSConnectors::OnGameChatBlockedChanged ( unsigned long bIsActive )
{
	static UFunction* pFnOnGameChatBlockedChanged = NULL;

	if ( ! pFnOnGameChatBlockedChanged )
		pFnOnGameChatBlockedChanged = (UFunction*) UObject::GObjObjects()->GetIndex( 134115 );

	UVivoxOSSConnectors_execOnGameChatBlockedChanged_Parms OnGameChatBlockedChanged_Parms;
	OnGameChatBlockedChanged_Parms.bIsActive = bIsActive;

	pFnOnGameChatBlockedChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnGameChatBlockedChanged, &OnGameChatBlockedChanged_Parms, NULL );

	pFnOnGameChatBlockedChanged->FunctionFlags |= 0x400;
};

// Function Vivox.VivoxOSSConnectors.IsGameChatBlocked
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UVivoxOSSConnectors::eventIsGameChatBlocked ( )
{
	static UFunction* pFnIsGameChatBlocked = NULL;

	if ( ! pFnIsGameChatBlocked )
		pFnIsGameChatBlocked = (UFunction*) UObject::GObjObjects()->GetIndex( 134113 );

	UVivoxOSSConnectors_eventIsGameChatBlocked_Parms IsGameChatBlocked_Parms;

	this->ProcessEvent ( pFnIsGameChatBlocked, &IsGameChatBlocked_Parms, NULL );

	return IsGameChatBlocked_Parms.ReturnValue;
};

// Function Vivox.VivoxOSSConnectors.SignalGameChatStopping
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UVivoxOSSConnectors::eventSignalGameChatStopping ( )
{
	static UFunction* pFnSignalGameChatStopping = NULL;

	if ( ! pFnSignalGameChatStopping )
		pFnSignalGameChatStopping = (UFunction*) UObject::GObjObjects()->GetIndex( 134112 );

	UVivoxOSSConnectors_eventSignalGameChatStopping_Parms SignalGameChatStopping_Parms;

	this->ProcessEvent ( pFnSignalGameChatStopping, &SignalGameChatStopping_Parms, NULL );
};

// Function Vivox.VivoxOSSConnectors.SignalGameChatAttempting
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UVivoxOSSConnectors::eventSignalGameChatAttempting ( )
{
	static UFunction* pFnSignalGameChatAttempting = NULL;

	if ( ! pFnSignalGameChatAttempting )
		pFnSignalGameChatAttempting = (UFunction*) UObject::GObjObjects()->GetIndex( 134111 );

	UVivoxOSSConnectors_eventSignalGameChatAttempting_Parms SignalGameChatAttempting_Parms;

	this->ProcessEvent ( pFnSignalGameChatAttempting, &SignalGameChatAttempting_Parms, NULL );
};

// Function Vivox.VivoxOSSConnectors.OnPrivilegeCheckedForUsersByUniqueNetIds
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  Privilege                      ( CPF_Parm )
// TArray< struct FPermissionsResultByUniqueNetId > Results                        ( CPF_Parm | CPF_NeedCtorLink )

void UVivoxOSSConnectors::OnPrivilegeCheckedForUsersByUniqueNetIds ( unsigned char LocalUserNum, unsigned char Privilege, TArray< struct FPermissionsResultByUniqueNetId > Results )
{
	static UFunction* pFnOnPrivilegeCheckedForUsersByUniqueNetIds = NULL;

	if ( ! pFnOnPrivilegeCheckedForUsersByUniqueNetIds )
		pFnOnPrivilegeCheckedForUsersByUniqueNetIds = (UFunction*) UObject::GObjObjects()->GetIndex( 134106 );

	UVivoxOSSConnectors_execOnPrivilegeCheckedForUsersByUniqueNetIds_Parms OnPrivilegeCheckedForUsersByUniqueNetIds_Parms;
	OnPrivilegeCheckedForUsersByUniqueNetIds_Parms.LocalUserNum = LocalUserNum;
	OnPrivilegeCheckedForUsersByUniqueNetIds_Parms.Privilege = Privilege;
	memcpy ( &OnPrivilegeCheckedForUsersByUniqueNetIds_Parms.Results, &Results, 0x10 );

	pFnOnPrivilegeCheckedForUsersByUniqueNetIds->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnPrivilegeCheckedForUsersByUniqueNetIds, &OnPrivilegeCheckedForUsersByUniqueNetIds_Parms, NULL );

	pFnOnPrivilegeCheckedForUsersByUniqueNetIds->FunctionFlags |= 0x400;
};

// Function Vivox.VivoxOSSConnectors.CanCommunicateVoiceWithUsersByUniqueNetIds
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< struct FUniqueNetId >  Users                          ( CPF_Parm | CPF_NeedCtorLink )

bool UVivoxOSSConnectors::eventCanCommunicateVoiceWithUsersByUniqueNetIds ( TArray< struct FUniqueNetId > Users )
{
	static UFunction* pFnCanCommunicateVoiceWithUsersByUniqueNetIds = NULL;

	if ( ! pFnCanCommunicateVoiceWithUsersByUniqueNetIds )
		pFnCanCommunicateVoiceWithUsersByUniqueNetIds = (UFunction*) UObject::GObjObjects()->GetIndex( 134102 );

	UVivoxOSSConnectors_eventCanCommunicateVoiceWithUsersByUniqueNetIds_Parms CanCommunicateVoiceWithUsersByUniqueNetIds_Parms;
	memcpy ( &CanCommunicateVoiceWithUsersByUniqueNetIds_Parms.Users, &Users, 0x10 );

	this->ProcessEvent ( pFnCanCommunicateVoiceWithUsersByUniqueNetIds, &CanCommunicateVoiceWithUsersByUniqueNetIds_Parms, NULL );

	return CanCommunicateVoiceWithUsersByUniqueNetIds_Parms.ReturnValue;
};

// Function Vivox.VivoxOSSConnectors.OnPrivilegeLevelChecked
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ChannelJoinCount               ( CPF_Parm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  Privilege                      ( CPF_Parm )
// unsigned char                  PrivilegeLevel                 ( CPF_Parm )
// unsigned long                  bDiffersFromHint               ( CPF_Parm )

bool UVivoxOSSConnectors::OnPrivilegeLevelChecked ( int ChannelJoinCount, unsigned char LocalUserNum, unsigned char Privilege, unsigned char PrivilegeLevel, unsigned long bDiffersFromHint )
{
	static UFunction* pFnOnPrivilegeLevelChecked = NULL;

	if ( ! pFnOnPrivilegeLevelChecked )
		pFnOnPrivilegeLevelChecked = (UFunction*) UObject::GObjObjects()->GetIndex( 134082 );

	UVivoxOSSConnectors_execOnPrivilegeLevelChecked_Parms OnPrivilegeLevelChecked_Parms;
	OnPrivilegeLevelChecked_Parms.ChannelJoinCount = ChannelJoinCount;
	OnPrivilegeLevelChecked_Parms.LocalUserNum = LocalUserNum;
	OnPrivilegeLevelChecked_Parms.Privilege = Privilege;
	OnPrivilegeLevelChecked_Parms.PrivilegeLevel = PrivilegeLevel;
	OnPrivilegeLevelChecked_Parms.bDiffersFromHint = bDiffersFromHint;

	pFnOnPrivilegeLevelChecked->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnPrivilegeLevelChecked, &OnPrivilegeLevelChecked_Parms, NULL );

	pFnOnPrivilegeLevelChecked->FunctionFlags |= 0x400;

	return OnPrivilegeLevelChecked_Parms.ReturnValue;
};

// Function Vivox.VivoxOSSConnectors.CanCommunicateVoice
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ChannelJoinCount               ( CPF_Parm )
// unsigned char                  PrivilegeLevelHint             ( CPF_Parm | CPF_OutParm )

bool UVivoxOSSConnectors::eventCanCommunicateVoice ( int ChannelJoinCount, unsigned char* PrivilegeLevelHint )
{
	static UFunction* pFnCanCommunicateVoice = NULL;

	if ( ! pFnCanCommunicateVoice )
		pFnCanCommunicateVoice = (UFunction*) UObject::GObjObjects()->GetIndex( 134092 );

	UVivoxOSSConnectors_eventCanCommunicateVoice_Parms CanCommunicateVoice_Parms;
	CanCommunicateVoice_Parms.ChannelJoinCount = ChannelJoinCount;

	this->ProcessEvent ( pFnCanCommunicateVoice, &CanCommunicateVoice_Parms, NULL );

	if ( PrivilegeLevelHint )
		*PrivilegeLevelHint = CanCommunicateVoice_Parms.PrivilegeLevelHint;

	return CanCommunicateVoice_Parms.ReturnValue;
};

// Function Vivox.VivoxOSSConnectors.RemoveClosure
// [0x00020002] 
// Parameters infos:
// class UVivoxClosure*           Closure                        ( CPF_Parm )

void UVivoxOSSConnectors::RemoveClosure ( class UVivoxClosure* Closure )
{
	static UFunction* pFnRemoveClosure = NULL;

	if ( ! pFnRemoveClosure )
		pFnRemoveClosure = (UFunction*) UObject::GObjObjects()->GetIndex( 134090 );

	UVivoxOSSConnectors_execRemoveClosure_Parms RemoveClosure_Parms;
	RemoveClosure_Parms.Closure = Closure;

	this->ProcessEvent ( pFnRemoveClosure, &RemoveClosure_Parms, NULL );
};

// Function Vivox.VivoxOSSConnectors.RegisterOnlineDelegates
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UVivoxOSSConnectors::eventRegisterOnlineDelegates ( )
{
	static UFunction* pFnRegisterOnlineDelegates = NULL;

	if ( ! pFnRegisterOnlineDelegates )
		pFnRegisterOnlineDelegates = (UFunction*) UObject::GObjObjects()->GetIndex( 134089 );

	UVivoxOSSConnectors_eventRegisterOnlineDelegates_Parms RegisterOnlineDelegates_Parms;

	this->ProcessEvent ( pFnRegisterOnlineDelegates, &RegisterOnlineDelegates_Parms, NULL );
};

// Function Vivox.VivoxClosure.ClearOnlineDelegates
// [0x00020000] 
// Parameters infos:

void UVivoxClosure::ClearOnlineDelegates ( )
{
	static UFunction* pFnClearOnlineDelegates = NULL;

	if ( ! pFnClearOnlineDelegates )
		pFnClearOnlineDelegates = (UFunction*) UObject::GObjObjects()->GetIndex( 134067 );

	UVivoxClosure_execClearOnlineDelegates_Parms ClearOnlineDelegates_Parms;

	this->ProcessEvent ( pFnClearOnlineDelegates, &ClearOnlineDelegates_Parms, NULL );
};

// Function Vivox.VivoxClosure.RegisterOnlineDelegates
// [0x00020002] 
// Parameters infos:
// class UOnlineSubsystem*        OnlineSub                      ( CPF_Parm )

void UVivoxClosure::RegisterOnlineDelegates ( class UOnlineSubsystem* OnlineSub )
{
	static UFunction* pFnRegisterOnlineDelegates = NULL;

	if ( ! pFnRegisterOnlineDelegates )
		pFnRegisterOnlineDelegates = (UFunction*) UObject::GObjObjects()->GetIndex( 134065 );

	UVivoxClosure_execRegisterOnlineDelegates_Parms RegisterOnlineDelegates_Parms;
	RegisterOnlineDelegates_Parms.OnlineSub = OnlineSub;

	this->ProcessEvent ( pFnRegisterOnlineDelegates, &RegisterOnlineDelegates_Parms, NULL );
};

// Function Vivox.VivoxClosure.Init
// [0x00080002] 
// Parameters infos:
// class UVivoxOSSConnectors*     ParamConnector                 ( CPF_Parm )

void UVivoxClosure::Init ( class UVivoxOSSConnectors* ParamConnector )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->GetIndex( 134063 );

	UVivoxClosure_execInit_Parms Init_Parms;
	Init_Parms.ParamConnector = ParamConnector;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function Vivox.VivoxClosureOnPrivilegeLevelChecked.OnPrivilegeLevelChecked
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  Privilege                      ( CPF_Parm )
// unsigned char                  PrivilegeLevel                 ( CPF_Parm )
// unsigned long                  bDiffersFromHint               ( CPF_Parm )

void UVivoxClosureOnPrivilegeLevelChecked::OnPrivilegeLevelChecked ( unsigned char LocalUserNum, unsigned char Privilege, unsigned char PrivilegeLevel, unsigned long bDiffersFromHint )
{
	static UFunction* pFnOnPrivilegeLevelChecked = NULL;

	if ( ! pFnOnPrivilegeLevelChecked )
		pFnOnPrivilegeLevelChecked = (UFunction*) UObject::GObjObjects()->GetIndex( 134077 );

	UVivoxClosureOnPrivilegeLevelChecked_execOnPrivilegeLevelChecked_Parms OnPrivilegeLevelChecked_Parms;
	OnPrivilegeLevelChecked_Parms.LocalUserNum = LocalUserNum;
	OnPrivilegeLevelChecked_Parms.Privilege = Privilege;
	OnPrivilegeLevelChecked_Parms.PrivilegeLevel = PrivilegeLevel;
	OnPrivilegeLevelChecked_Parms.bDiffersFromHint = bDiffersFromHint;

	this->ProcessEvent ( pFnOnPrivilegeLevelChecked, &OnPrivilegeLevelChecked_Parms, NULL );
};

// Function Vivox.VivoxClosureOnPrivilegeLevelChecked.ClearOnlineDelegates
// [0x00020002] 
// Parameters infos:

void UVivoxClosureOnPrivilegeLevelChecked::ClearOnlineDelegates ( )
{
	static UFunction* pFnClearOnlineDelegates = NULL;

	if ( ! pFnClearOnlineDelegates )
		pFnClearOnlineDelegates = (UFunction*) UObject::GObjObjects()->GetIndex( 134076 );

	UVivoxClosureOnPrivilegeLevelChecked_execClearOnlineDelegates_Parms ClearOnlineDelegates_Parms;

	this->ProcessEvent ( pFnClearOnlineDelegates, &ClearOnlineDelegates_Parms, NULL );
};

// Function Vivox.VivoxClosureOnPrivilegeLevelChecked.RegisterOnlineDelegates
// [0x00020002] 
// Parameters infos:
// class UOnlineSubsystem*        OnlineSub                      ( CPF_Parm )

void UVivoxClosureOnPrivilegeLevelChecked::RegisterOnlineDelegates ( class UOnlineSubsystem* OnlineSub )
{
	static UFunction* pFnRegisterOnlineDelegates = NULL;

	if ( ! pFnRegisterOnlineDelegates )
		pFnRegisterOnlineDelegates = (UFunction*) UObject::GObjObjects()->GetIndex( 134074 );

	UVivoxClosureOnPrivilegeLevelChecked_execRegisterOnlineDelegates_Parms RegisterOnlineDelegates_Parms;
	RegisterOnlineDelegates_Parms.OnlineSub = OnlineSub;

	this->ProcessEvent ( pFnRegisterOnlineDelegates, &RegisterOnlineDelegates_Parms, NULL );
};

// Function Vivox.VivoxClosureOnPrivilegeLevelChecked.InitClosure
// [0x00020002] 
// Parameters infos:
// int                            ChannelJoinCount               ( CPF_Parm )
// class UVivoxOSSConnectors*     Connector                      ( CPF_Parm )

void UVivoxClosureOnPrivilegeLevelChecked::InitClosure ( int ChannelJoinCount, class UVivoxOSSConnectors* Connector )
{
	static UFunction* pFnInitClosure = NULL;

	if ( ! pFnInitClosure )
		pFnInitClosure = (UFunction*) UObject::GObjObjects()->GetIndex( 134071 );

	UVivoxClosureOnPrivilegeLevelChecked_execInitClosure_Parms InitClosure_Parms;
	InitClosure_Parms.ChannelJoinCount = ChannelJoinCount;
	InitClosure_Parms.Connector = Connector;

	this->ProcessEvent ( pFnInitClosure, &InitClosure_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif