/*
#############################################################################################
# Smite (v3.24.3804.2) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: TgClientBase_structs.h
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
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct TgClientBase.TgGameUIDispatcher.GameEventListener
// 0x0014
struct FGameEventListener
{
	int                                                nEventId;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class UObject*                                     pScope;                                           		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FName                                       nmCallback;                                       		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgAcquisitionManager.EventAssociation
// 0x000C
struct FEventAssociation
{
	int                                                nEventId;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nEventChapter;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsReward : 1;                                    		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgClientBase.TgPlayerNameManager.TgPlayerId
// 0x0024
struct FTgPlayerId
{
	struct FUniqueNetId                                m_UserId;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     m_sAltId;                                         		// 0x0008 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct Fdword                                      m_nType;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FQWord                                      m_nPlayerId;                                      		// 0x001C (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgAcquisitionManager.SmiteAcquisition
// 0x0060
struct FSmiteAcquisition
{
	int                                                nSourceId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nFailureMsgId;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	struct Fdword                                      nItemId;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	struct Fdword                                      nLootId;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	struct Fdword                                      nLootTableId;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nRecipeItemType;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nItemType;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nSubItemType;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                nEventFlags;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                nFillQuantity;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                nLootQuantity;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                nTotalQuantity;                                   		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      bSuccess : 1;                                     		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bQuietFailures : 1;                               		// 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FTgPlayerId                                 nGiftPlayerId;                                    		// 0x0034 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FQWord                                      qwCustomData;                                     		// 0x0058 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgAcquisitionManager.UIQueuedAcquisition
// 0x0080
struct FUIQueuedAcquisition
{
	int                                                nType;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nSubType;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FEventAssociation                           EventAssociation;                                 		// 0x0008 (0x000C) [0x0000000000000000]              
	int                                                nQuantity;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  pObject;                                          		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FSmiteAcquisition                           Acquisition;                                      		// 0x0020 (0x0060) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgPlayerNameManager.TgProfileDelegatesBuffer
// 0x0020
struct FTgProfileDelegatesBuffer
{
	TArray< struct FString >                           arrIdList;                                        		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   arrDelegates;                                     		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgPlayerNameManager.TgPidIndexPair
// 0x0008
struct FTgPidIndexPair
{
	struct Fdword                                      nPid;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nIndex;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgPlayerNameManager.TgUserId
// 0x000C
struct FTgUserId
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FQWord                                      Uid;                                              		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgPlayerNameManager.TgUidIndexPair
// 0x0010
struct FTgUidIndexPair
{
	struct FTgUserId                                   Uid;                                              		// 0x0000 (0x000C) [0x0000000000000000]              
	int                                                nIndex;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgPlayerNameManager.TgPlayerNameMap
// 0x003C
struct FTgPlayerNameMap
{
	TArray< struct FTgPidIndexPair >                   arrPidLookup;                                     		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FTgUidIndexPair >                   arrUidLookup;                                     		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           arrNames;                                         		// 0x0020 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                nSortedPid;                                       		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                nSortedUid;                                       		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                nSortedNames;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgChangeHudSectionEvent.TgHudSectionInfo
// 0x0040
struct FTgHudSectionInfo
{
	struct FString                                     sSection;                                         		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sDockObj;                                         		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	float                                              nPercentX;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              nPercentY;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              nScale;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              nDockX;                                           		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              nDockY;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              nDockObjX;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              nDockObjY;                                        		// 0x0038 (0x0004) [0x0000000000000000]              
	unsigned long                                      bOutX : 1;                                        		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOutY : 1;                                        		// 0x003C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct TgClientBase.TgGFxObject.Rect
// 0x0010
struct FRect
{
	struct FVector2D                                   vecMin;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   vecMax;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGFxObject.GFxEventData
// 0x002C
struct FGFxEventData
{
	class UGFxObject*                                  _this;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  Target;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       Type;                                             		// 0x0010 (0x0008) [0x0000000000000000]              
	int                                                Data;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                mouseIndex;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                Button;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                Index;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                lastIndex;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgDataChunk.DataField
// 0x0050
struct FDataField
{
	struct FPointer                                    FieldName;                                        		// 0x0000 (0x0008) [0x0000000000001000]              ( CPF_Native )
	int                                                nNameLen;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FASValue                                    Value;                                            		// 0x000C (0x0020) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FASValue                                    Last;                                             		// 0x002C (0x0020) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bDirty : 1;                                       		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgClientBase.TgDataChunk.TgDataFieldHandle
// 0x0004
struct FTgDataFieldHandle
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgClientHUD.SceneInfo
// 0x0018
struct FSceneInfo
{
	unsigned long                                      bWorkInProgress : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                nUIType;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     sPath;                                            		// 0x0008 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgDataHandler.TgChunkUpdateQueue
// 0x0011
struct FTgChunkUpdateQueue
{
	TArray< class UTgDataChunk* >                      arrChunks;                                        		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      fUpdateDelay;                                     		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgDeferredTask.TgDeferProgress
// 0x0014
struct FTgDeferProgress
{
	float                                              nProgress;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     sStepLabel;                                       		// 0x0004 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgIntervalManager.TgIntervalHandle
// 0x0010
struct FTgIntervalHandle
{
	struct FQWord                                      nId;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTgIntervalManager*                          pOwner;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgIntervalManager.TgIntervalEntry
// 0x0028
struct FTgIntervalEntry
{
	int                                                nLoopValue;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nRepeatStep;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	struct Fdword                                      nDuration;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FQWord                                      nTime;                                            		// 0x000C (0x0008) [0x0000000000000000]              
	struct FScriptDelegate                             delCallback;                                      		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0018 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned long                                      bRemove : 1;                                      		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgClientBase.TgDeferManager.TgDeferTaskData
// 0x001C
struct FTgDeferTaskData
{
	class UTgDeferredTask*                             pTask;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FTgDeferProgress                            LastProgress;                                     		// 0x0008 (0x0014) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgDeferManager.TgDeferEntry
// 0x0034
struct FTgDeferEntry
{
	struct FTgDeferTaskData                            Task;                                             		// 0x0000 (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             delCallback;                                      		// 0x001C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0020 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class UClass*                                      pOwnerClass;                                      		// 0x002C (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgMoviePlayer.TgPurchaseRequest
// 0x0028
struct FTgPurchaseRequest
{
	int                                                nLootTableItemId;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nVendorId;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nPriceInUI;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nCurrencyType;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nQuantity;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nLocationId;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nCouponId;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nGiftPlayerId;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                nGiftMsgIndex;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsAnonGift : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgClientBase.TgMoviePlayer.TgLobbyStates
// 0x0010
struct FTgLobbyStates
{
	int                                                GameState;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                LobbyState;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                QueueState;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                HudState;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgMoviePlayer.SysCounterData
// 0x0008
struct FSysCounterData
{
	int                                                CounterId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                CounterCount;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgMoviePlayer.WidgetBinding
// 0x0010
struct FWidgetBinding
{
	struct FName                                       m_WidgetName;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  m_Widget;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgMoviePlayer.PendingChatMessage
// 0x0020
struct FPendingChatMessage
{
	struct FString                                     m_sRecipient;                                     		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sMsg;                                           		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgMoviePlayer.UIChangeStruct
// 0x0010
struct FUIChangeStruct
{
	class AActor*                                      refActor;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      uiEvent;                                          		// 0x0008 (0x0001) [0x0000000000000000]              
	int                                                subType;                                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgMoviePlayer.LastMatchMember
// 0x0028
struct FLastMatchMember
{
	int                                                nBotId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FTgPlayerId                                 pid;                                              		// 0x0004 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgMoviePlayer.LastPartiedMember
// 0x0014
struct FLastPartiedMember
{
	int                                                m_playerId;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_playerName;                                     		// 0x0004 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgMoviePlayer.CardTextureWidget
// 0x0058
struct FCardTextureWidget
{
	class UGFxObject*                                  Widget;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                nItemId;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nUniqueId;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              X;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              Y;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              fWidth;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              fHeight;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              fTimeSinceCreation;                               		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLoaded : 1;                                      		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     sCardMIC;                                         		// 0x0028 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sTexture;                                         		// 0x0038 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UMaterialInstanceConstant*                   cardMIC;                                          		// 0x0048 (0x0008) [0x0000000000000000]              
	class UTexture2D*                                  Texture;                                          		// 0x0050 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgMoviePlayer.LeaderboardOpenData
// 0x0018
struct FLeaderboardOpenData
{
	struct FString                                     sName;                                            		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                nValue;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nOption;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgMoviePlayer.InputSensitiveComponent
// 0x0014
struct FInputSensitiveComponent
{
	class UObject*                                     pOwner;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  pObj;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
	unsigned long                                      bGamepad : 1;                                     		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgClientBase.TgMoviePlayer.RecentlyInvitedPlayers
// 0x002C
struct FRecentlyInvitedPlayers
{
	struct FTgPlayerId                                 pid;                                              		// 0x0000 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FQWord                                      nTimeSecs;                                        		// 0x0024 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgMoviePlayer.IntStringPair
// 0x0014
struct FIntStringPair
{
	int                                                nNumber;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     sString;                                          		// 0x0004 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgMoviePlayer.NavParams
// 0x0024
struct FNavParams
{
	unsigned char                                      eNavId;                                           		// 0x0000 (0x0001) [0x0000000000000000]              
	struct Fdword                                      eEventId;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      eReturnToNavId;                                   		// 0x0008 (0x0001) [0x0000000000000000]              
	struct Fdword                                      eReturnToEventId;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	class UTgDataItem*                                 pNavData;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
	class UTgDataItem*                                 pReturnToData;                                    		// 0x0018 (0x0008) [0x0000000000000000]              
	unsigned long                                      bForce : 1;                                       		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgClientBase.TgMoviePlayer.TgReferralEntry
// 0x0030
struct FTgReferralEntry
{
	struct FTgPlayerId                                 pid;                                              		// 0x0000 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgGFxPlayerData*                            pPlayerData;                                      		// 0x0024 (0x0008) [0x0000000000000000]              
	int                                                externalReferralId;                               		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgMoviePlayer.TgNavProperties
// 0x0009
struct FTgNavProperties
{
	unsigned char                                      eNavId;                                           		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned long                                      bIsPopup : 1;                                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bManuallySetsCamera : 1;                          		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      eCameraTarget;                                    		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgMoviePlayer.TgReportPlayer
// 0x0044
struct FTgReportPlayer
{
	struct Fdword                                      nReasonCode;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct Fdword                                      nPlayerCount;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	struct Fdword                                      nReporterTaskForce;                               		// 0x0008 (0x0004) [0x0000000000000000]              
	struct Fdword                                      nReportedPlayerTaskForce;                         		// 0x000C (0x0004) [0x0000000000000000]              
	struct FTgPlayerId                                 pidToReport;                                      		// 0x0010 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sReason;                                          		// 0x0034 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgPagePopup.PopupResponse
// 0x0018
struct FPopupResponse
{
	unsigned long                                      m_bHandled : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                nResponse;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           arrInputs;                                        		// 0x0008 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgEsportsManager.TgEsportsEventTeam
// 0x0010
struct FTgEsportsEventTeam
{
	struct Fdword                                      nEventTeamId;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	struct Fdword                                      nTeamId;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FPointer                                    pEvent;                                           		// 0x0008 (0x0008) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct TgClientBase.TgEsportsManager.TgEsportsEvent
// 0x0034
struct FTgEsportsEvent
{
	struct Fdword                                      nEventId;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     sName;                                            		// 0x0004 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct Fdword                                      nEventType;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FQWord                                      nStartDate;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	TArray< struct FTgEsportsEventTeam >               arrEventTeams;                                    		// 0x0020 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct Fdword                                      nTourneyPickEventTeamId;                          		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgEsportsManager.TgEsportsMatch
// 0x0038
struct FTgEsportsMatch
{
	struct Fdword                                      nMatchId;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FPointer                                    pGroup;                                           		// 0x0004 (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct Fdword                                      nEventTypeValue;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	struct Fdword                                      nRoundTypeValue;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	struct Fdword                                      nWinnerId;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FQWord                                      nStartDate;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FQWord                                      nEndDate;                                         		// 0x0020 (0x0008) [0x0000000000000000]              
	struct FString                                     sUrl;                                             		// 0x0028 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgEsportsManager.TgEsportsMatchGroup
// 0x004C
struct FTgEsportsMatchGroup
{
	struct Fdword                                      nSeasonId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct Fdword                                      nEventId;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	struct Fdword                                      nGroupId;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FQWord                                      nStartDate;                                       		// 0x000C (0x0008) [0x0000000000000000]              
	struct FQWord                                      nEndDate;                                         		// 0x0014 (0x0008) [0x0000000000000000]              
	struct Fdword                                      nVotedFor;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	struct Fdword                                      nNextMatchId;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	struct Fdword                                      arrTeams[ 0x2 ];                                  		// 0x0024 (0x0008) [0x0000000000000000]              
	struct Fdword                                      arrScores[ 0x2 ];                                 		// 0x002C (0x0008) [0x0000000000000000]              
	struct Fdword                                      arrGlobalPickCounts[ 0x2 ];                       		// 0x0034 (0x0008) [0x0000000000000000]              
	TArray< struct FTgEsportsMatch >                   arrMatches;                                       		// 0x003C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgEsportsManager.TgEsportsWinBreakdown
// 0x0008
struct FTgEsportsWinBreakdown
{
	struct Fdword                                      nTeamId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct Fdword                                      nWins;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgEsportsManager.TgEsportsStats
// 0x002C
struct FTgEsportsStats
{
	struct Fdword                                      nSeasonId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct Fdword                                      nTeamId;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	struct Fdword                                      nMatchCount;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	struct Fdword                                      nWins;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	struct Fdword                                      nLosses;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	struct Fdword                                      nWinLossPercentage;                               		// 0x0014 (0x0004) [0x0000000000000000]              
	TArray< struct FTgEsportsWinBreakdown >            arrWinsBreakdown;                                 		// 0x0018 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct Fdword                                      nRank;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgEsportsManager.TgEsportsIconHandle
// 0x0010
struct FTgEsportsIconHandle
{
	struct FString                                     sId;                                              		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgEsportsManager.TgEsportsTeam
// 0x0094
struct FTgEsportsTeam
{
	struct Fdword                                      nTeamId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct Fdword                                      nSortOrder;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	struct Fdword                                      nRank;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	struct Fdword                                      nWinLossPercentage;                               		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     sColor;                                           		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sName;                                            		// 0x0020 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sShortName;                                       		// 0x0030 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sTagLine;                                         		// 0x0040 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sLeagueTag;                                       		// 0x0050 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FTgEsportsIconHandle                        Icon;                                             		// 0x0060 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FTgEsportsIconHandle                        Banner;                                           		// 0x0070 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsActive : 1;                                    		// 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSwcTeam : 1;                                     		// 0x0080 (0x0004) [0x0000000000000000] [0x00000002] 
	TArray< struct Fdword >                            arrPurchaseLTIs;                                  		// 0x0084 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgEsportsManager.TgLocalizationRef
// 0x0030
struct FTgLocalizationRef
{
	struct FString                                     sKey;                                             		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sSection;                                         		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sPackage;                                         		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgEsportsManager.TgEsportsTeamConfig
// 0x0078
struct FTgEsportsTeamConfig
{
	int                                                nTeamId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     sColor;                                           		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sIcon;                                            		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FTgLocalizationRef                          locTagLine;                                       		// 0x0024 (0x0030) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      arrTeamItems;                                     		// 0x0054 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sLeagueTag;                                       		// 0x0064 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bSwcTeam : 1;                                     		// 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgClientBase.TgEsportsManager.TgEsportsRosterMember
// 0x0024
struct FTgEsportsRosterMember
{
	struct FString                                     sName;                                            		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sPosition;                                        		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bLeader : 1;                                      		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgClientBase.TgEsportsManager.TgEsportsRosterTeams
// 0x0014
struct FTgEsportsRosterTeams
{
	int                                                nTeamId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FTgEsportsRosterMember >            Members;                                          		// 0x0004 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgEsportsManager.TgEsportsFeaturedPanelData
// 0x0040
struct FTgEsportsFeaturedPanelData
{
	struct FString                                     sLargeText;                                       		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sSmallText;                                       		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sImagePath;                                       		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sId;                                              		// 0x0030 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgGameDC_Chat.QueueMessage
// 0x0030
struct FQueueMessage
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Priority;                                         		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned long                                      bHasPlayedSound : 1;                              		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                VoicePackId;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                VoiceBotId;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                VoiceSkinId;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FString                                     VoicePackCustomSuffix;                            		// 0x0018 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class USoundCue*                                   SoundCue;                                         		// 0x0028 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGameDC_Chat.MessageToken
// 0x001C
struct FMessageToken
{
	int                                                msgId;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                MsgIdRed;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                MsgIdBlue;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     Token;                                            		// 0x000C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgGameDC_Game.TgGameDCGameHandles
// 0x0054
struct FTgGameDCGameHandles
{
	struct FTgDataFieldHandle                          ActivePointA;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          ActivePointB;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          ActivePointC;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          CapturePercentA;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          CapturePercentB;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          CapturePercentC;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          DescriptionString;                                		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          EnemyTaskForceCount;                              		// 0x001C (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          EomMessageId;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          FogGrowTime;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          FogNextPhase;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          GameTimerState;                                   		// 0x002C (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          GameType;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          MapBackgroundTexture;                             		// 0x0034 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          OnPoint;                                          		// 0x0038 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          PauseTaskForce;                                   		// 0x003C (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          PauseType;                                        		// 0x0040 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          PauseDuration;                                    		// 0x0044 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          RoundNumber;                                      		// 0x0048 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          RoundTitle;                                       		// 0x004C (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          ShowObjectives;                                   		// 0x0050 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGameDC_Player.TgGameDC_PlayerEffectEntry
// 0x0011
struct FTgGameDC_PlayerEffectEntry
{
	class UGFxObject*                                  EffectObject;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              TimeRemaining;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nEffectGroupId;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      byNumStacks;                                      		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGameDC_Player.TgGameDC_DeviceEntry
// 0x0020
struct FTgGameDC_DeviceEntry
{
	class UGFxObject*                                  DeviceObject;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                CurrentDeviceId;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Cooldown;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              CooldownMax;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                DeviceCount;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned char                                      DeviceTier;                                       		// 0x0018 (0x0001) [0x0000000000000000]              
	unsigned long                                      bIsDeviceReady : 1;                               		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgClientBase.TgGameDC_LocalPlayer.TgGameDCPlayerHandles
// 0x0030
struct FTgGameDCPlayerHandles
{
	struct FTgDataFieldHandle                          AutoPurchase;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          AutoSkill;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          CourierCurrency;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          CourierItemId;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          CourierPhase;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          CourierTransactionType;                           		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          MostPopularItemsSize;                             		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          SpectatorVisibilityMode;                          		// 0x001C (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          nTaskForce;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          TutorialActivesDisabled;                          		// 0x0024 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          TutorialSkillsDisabled;                           		// 0x0028 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          TutorialStoreDisabled;                            		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGameDC_LocalPlayer.TgGameDCPlayerData
// 0x0004
struct FTgGameDCPlayerData
{
	unsigned long                                      bDisableSkills : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDisableActives : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDisableStore : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct TgClientBase.TgGameDC_PlayerVitals.TgDCPlayerVitalsHandles
// 0x0080
struct FTgDCPlayerVitalsHandles
{
	struct FTgDataFieldHandle                          Accuracy;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          AltReticule;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          AuxiliaryPool;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          AuxiliaryPoolMax;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          AuxiliaryPoolType;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          BuybackAmount;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          CapPercent;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          CapPercentMax;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          Currency;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          CurrentLevel;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          CurrentXP;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          DevicePointsAvail;                                		// 0x002C (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          Heading;                                          		// 0x0030 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          Health;                                           		// 0x0034 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          HealthMax;                                        		// 0x0038 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          IsPlayerInVolume;                                 		// 0x003C (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          NextLevel;                                        		// 0x0040 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          nPassiveData1;                                    		// 0x0044 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          bPassiveData1;                                    		// 0x0048 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          sPassiveData1;                                    		// 0x004C (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          nPassiveData2;                                    		// 0x0050 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          fPassiveData1;                                    		// 0x0054 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          PowerPool;                                        		// 0x0058 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          PowerPoolMax;                                     		// 0x005C (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          PowerPoolType;                                    		// 0x0060 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          PowerPoolUsing;                                   		// 0x0064 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          ReticleModifierPercent;                           		// 0x0068 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          Shield;                                           		// 0x006C (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          ShieldMax;                                        		// 0x0070 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          StatPoints;                                       		// 0x0074 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          TurretTarget;                                     		// 0x0078 (0x0004) [0x0000000000000000]              
	struct FTgDataFieldHandle                          XpPercent;                                        		// 0x007C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGameHUD.TgMuteReportTracking
// 0x0030
struct FTgMuteReportTracking
{
	struct FTgIntervalHandle                           delayHandle;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
	TArray< struct FTgPlayerId >                       pendingPlayers;                                   		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FTgPlayerId >                       mutedPlayers;                                     		// 0x0020 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgGameHUDOverlay.DamageInfoData
// 0x0028
struct FDamageInfoData
{
	int                                                nSourceId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nTargetId;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                dwSourceItemId;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned long                                      bLocalSource : 1;                                 		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              fValue;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FString                                     displayStr;                                       		// 0x0018 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgGameHUDOverlay.ClipPoolItem
// 0x0010
struct FClipPoolItem
{
	class UGFxObject*                                  sctClip;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              fLastUsedTime;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nPoolIdx;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGameHUDOverlay.ClipPool
// 0x0010
struct FClipPool
{
	TArray< struct FClipPoolItem >                     clips;                                            		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgGameHUDOverlay.OverlayTag
// 0x0168
struct FOverlayTag
{
	float                                              fLastMarkTime;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fDistance;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fCurrentScale;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bEnemy : 1;                                       		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bMarked : 1;                                      		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bHidden : 1;                                      		// 0x000C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bSctUsable : 1;                                   		// 0x000C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned char                                      eOverlayType;                                     		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned char                                      eOverlayOffscreenIndicator;                       		// 0x0011 (0x0001) [0x0000000000000000]              
	int                                                nActorId;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nPrevDepth;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nPrevHealth;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                nPrevMaxHealth;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                nPrevPower;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                nPrevMaxPower;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                nPrevShield;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                nPrevMaxShield;                                   		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                nPrevLevel;                                       		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                nPrevStunCat;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
	struct FString                                     sPrevName;                                        		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      bPrevPassiveActive;                               		// 0x004C (0x0001) [0x0000000000000000]              
	unsigned char                                      bPrevPassiveSlotActive[ 0x8 ];                    		// 0x004D (0x0008) [0x0000000000000000]              
	float                                              fPrevNameplateAlpha;                              		// 0x0058 (0x0004) [0x0000000000000000]              
	unsigned long                                      bPrevNameplateVisible : 1;                        		// 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              fPrevHardCCRemainingSecs;                         		// 0x0060 (0x0004) [0x0000000000000000]              
	float                                              fPrevHardCCLengthSecs;                            		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                nPrevImmunityTypeId;                              		// 0x0068 (0x0004) [0x0000000000000000]              
	int                                                nProfileId;                                       		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                nMaxHealth;                                       		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                nMaxPower;                                        		// 0x0074 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  containerClip;                                    		// 0x0078 (0x0008) [0x0000000000000000]              
	TArray< struct FClipPool >                         Pools;                                            		// 0x0080 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  nameplateClip;                                    		// 0x0090 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  arrowClip;                                        		// 0x0098 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  playerBarClip;                                    		// 0x00A0 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  nameClip;                                         		// 0x00A8 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  nameClip2;                                        		// 0x00B0 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  nameBGClip;                                       		// 0x00B8 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  distanceClip;                                     		// 0x00C0 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  levelClip;                                        		// 0x00C8 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  levelClip2;                                       		// 0x00D0 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  targetedClip;                                     		// 0x00D8 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  objectiveLabelClip;                               		// 0x00E0 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  passiveHolderClip;                                		// 0x00E8 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  passiveHolderEffectsList;                         		// 0x00F0 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  teamIconClip;                                     		// 0x00F8 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  winningClip;                                      		// 0x0100 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  healthLabelClip;                                  		// 0x0108 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  lifespanBarClip;                                  		// 0x0110 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  lifespanBarScaleClip;                             		// 0x0118 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  effectClip;                                       		// 0x0120 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  effectBarClip;                                    		// 0x0128 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  effectBarScaleClip;                               		// 0x0130 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  immunityClip;                                     		// 0x0138 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  portraitLoaderClip;                               		// 0x0140 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  portraitDeadClip;                                 		// 0x0148 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  sctClip;                                          		// 0x0150 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  sctCritClip;                                      		// 0x0158 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  offscreenIndicatorClip;                           		// 0x0160 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGameHUDOverlay.DamageInfoQueue
// 0x0014
struct FDamageInfoQueue
{
	TArray< struct FDamageInfoData >                   damageInfos;                                      		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	float                                              lastUpdate;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGfxBuyAllModalBase.BuyAllSectionData
// 0x0030
struct FBuyAllSectionData
{
	struct FString                                     SectionName;                                      		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     SectionSubtext;                                   		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FPointer >                          SectionItems;                                     		// 0x0020 (0x0010) [0x0000000000101000]              ( CPF_Native )
};

// ScriptStruct TgClientBase.TgGFxDataProviderBase.RequestASCallback
// 0x002C
struct FRequestASCallback
{
	class UGFxObject*                                  pScope;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     sCallback;                                        		// 0x0008 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      eType;                                            		// 0x0018 (0x0001) [0x0000000000000000]              
	class UGFxObject*                                  pObj;                                             		// 0x001C (0x0008) [0x0000000000000000]              
	int                                                nIndex;                                           		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                nEndIndex;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGfxEventSceneBase.BuyAllLinkage
// 0x0050
struct FBuyAllLinkage
{
	struct FString                                     sOverviewLinkage;                                 		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sListHeaderLinkage;                               		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sListDividerLinkage;                              		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sListItemLinkage;                                 		// 0x0030 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sScrollBarLinkage;                                		// 0x0040 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgGfxEventSceneBase.QuestGoal
// 0x0068
struct FQuestGoal
{
	struct FString                                     sName;                                            		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sDescription;                                     		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sTitle;                                           		// 0x0020 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bCompleted : 1;                                   		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                nName;                                            		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                nDescription;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                nCompletedType;                                   		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                nGoalId;                                          		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                nRewardItemId;                                    		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                nRewardQuantity;                                  		// 0x0048 (0x0004) [0x0000000000000000]              
	TArray< int >                                      nPrecursorGoalId;                                 		// 0x004C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                nDisplayIndex;                                    		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                nQuestProgress;                                   		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                nQuestGoal;                                       		// 0x0064 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGFxFriendSearchProvider.TgSearchResults
// 0x003C
struct FTgSearchResults
{
	TArray< class UTgGFxPlayerData* >                  arrLocal;                                         		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< class UTgGFxPlayerData* >                  arrOnline;                                        		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< class UTgGFxPlayerData* >                  arrLocalWip;                                      		// 0x0020 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                nLocalIndex;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                nLocalMax;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHasOnline : 1;                                   		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgClientBase.TgGfxGameInputInterceptor.TgInputInterceptReg
// 0x0014
struct FTgInputInterceptReg
{
	unsigned long                                      bActive : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FScriptDelegate                             delCallback;                                      		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0008 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
};

// ScriptStruct TgClientBase.TgLandingPanelManagerBase.LandingPanelEventInfoEntry
// 0x0020
struct FLandingPanelEventInfoEntry
{
	struct FString                                     sHeader;                                          		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sDesc;                                            		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgLandingPanelManagerBase.LandingPanelEventInfoData
// 0x0020
struct FLandingPanelEventInfoData
{
	struct FString                                     backgroundArtPath;                                		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FLandingPanelEventInfoEntry >       eventInfoEntries;                                 		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgLandingPanelManagerBase.SceneModelData
// 0x0040
struct FSceneModelData
{
	struct FString                                     sDesc;                                            		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sData;                                            		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sData2;                                           		// 0x0020 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      eCameraDistance;                                  		// 0x0030 (0x0001) [0x0000000000000000]              
	int                                                nSkinId;                                          		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                nType;                                            		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                nLocationId;                                      		// 0x003C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgLandingPanelManagerBase.StreamTimeData
// 0x0050
struct FStreamTimeData
{
	struct FString                                     sId;                                              		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sStartTime;                                       		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sEndTime;                                         		// 0x0020 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sStreamURL;                                       		// 0x0030 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sLinkURL;                                         		// 0x0040 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgLandingPanelManagerBase.PatchOverviewData
// 0x0080
struct FPatchOverviewData
{
	struct FString                                     sId;                                              		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sTitle;                                           		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sHeader0;                                         		// 0x0020 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sHeader1;                                         		// 0x0030 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sHeader2;                                         		// 0x0040 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sDescription0;                                    		// 0x0050 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sDescription1;                                    		// 0x0060 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sDescription2;                                    		// 0x0070 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgLandingPanelManagerBase.LoginBlockerData
// 0x0068
struct FLoginBlockerData
{
	struct FString                                     sId;                                              		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sTitle;                                           		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sDescription;                                     		// 0x0020 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sButtonText;                                      		// 0x0030 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sActionId;                                        		// 0x0040 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sActionId2;                                       		// 0x0050 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                nType;                                            		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                nLocationId;                                      		// 0x0064 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGFxHomeMenuScreen.HomeMenuItem
// 0x0049
struct FHomeMenuItem
{
	int                                                nActionId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nActionDataId;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     sLabel;                                           		// 0x0008 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sMenuTooltip;                                     		// 0x0018 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sImagePath;                                       		// 0x0028 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sButtonType;                                      		// 0x0038 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      SpecialCallout;                                   		// 0x0048 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGfxHudChatBase.TgChatMessage
// 0x0024
struct FTgChatMessage
{
	struct FString                                     sSender;                                          		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sMessage;                                         		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsVGS : 1;                                       		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgClientBase.TgGfxLoadoutsBase.GFxLoadoutItem
// 0x0020
struct FGFxLoadoutItem
{
	class UTgGFxObject*                                pObj;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                IconLoader;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                Tag;                                              		// 0x0010 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                Favorite;                                         		// 0x0018 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGfxLoadoutsBase.GfxEquippedLoadoutItem
// 0x0050
struct FGfxEquippedLoadoutItem
{
	class UTgGFxObject*                                pObj;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                Background;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FGFxLoadoutItem                             LoadoutItem;                                      		// 0x0010 (0x0020) [0x0000000000000000]              
	class UTgGFxObject*                                TitleTF;                                          		// 0x0030 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                ItemTF;                                           		// 0x0038 (0x0008) [0x0000000000000000]              
	struct FString                                     sTitle;                                           		// 0x0040 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgGFxNativeWidget.TgCustomAStoUCBind
// 0x0018
struct FTgCustomAStoUCBind
{
	struct FString                                     as;                                               		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FName                                       UC;                                               		// 0x0010 (0x0008) [0x0000000000100000]              
};

// ScriptStruct TgClientBase.TgGFxNativeWidget.InputDetails
// 0x0020
struct FInputDetails
{
	struct FName                                       Type;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                Code;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FName                                       Value;                                            		// 0x000C (0x0008) [0x0000000000000000]              
	struct FName                                       NavEquivalent;                                    		// 0x0014 (0x0008) [0x0000000000000000]              
	int                                                ControllerIdx;                                    		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGFxNativeWidget.GFxTweenMax
// 0x0028
struct FGFxTweenMax
{
	class UGFxObject*                                  pFromOptions;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  pToOptions;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  pActiveOptions;                                   		// 0x0010 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  pTarget;                                          		// 0x0018 (0x0008) [0x0000000000000000]              
	float                                              nDuration;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              nDelay;                                           		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGFxNativeWidget.GFxTween
// 0x0008
struct FGFxTween
{
	class UGFxObject*                                  m_pTween;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGfxMainMenu.TgMainMenuBtn
// 0x002C
struct FTgMainMenuBtn
{
	struct Fdword                                      nAction;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     sLabel;                                           		// 0x0004 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             delCallback;                                      		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0018 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class UTgDataItem*                                 pData;                                            		// 0x0024 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGfxMainMenu.TgMenuDisplayBtn
// 0x0010
struct FTgMenuDisplayBtn
{
	class UTgGFxObject*                                _this;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                Count;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGfxMainMenu.TgMainMenuPanel
// 0x0020
struct FTgMainMenuPanel
{
	class UTgGFxObject*                                _this;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                bg;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
	TArray< struct FTgMenuDisplayBtn >                 Btn;                                              		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgGfxMassInviteBase.OpenInvite
// 0x0018
struct FOpenInvite
{
	struct FString                                     Name;                                             		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                IconId;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	struct Fdword                                      OIPlayerId;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGfxMassInviteBase.FriendRow
// 0x0028
struct FFriendRow
{
	class UTgGFxObject*                                Object;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                AvatarLoader;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                PlayerName;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                PlayerStatus;                                     		// 0x0018 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                InviteBtn;                                        		// 0x0020 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGfxMassInviteBase.InviteRow
// 0x0020
struct FInviteRow
{
	class UTgGFxObject*                                Object;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                PlayerName;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                PlayerIcon;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                RemoveBtn;                                        		// 0x0018 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGFxMatchInvitation.TgPendingCustomInvite
// 0x0044
struct FTgPendingCustomInvite
{
	struct Fdword                                      nId;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FUniqueNetId                                platId;                                           		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FString                                     sInviterName;                                     		// 0x000C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sGameName;                                        		// 0x001C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct Fdword                                      nPlayerCount;                                     		// 0x002C (0x0004) [0x0000000000000000]              
	struct Fdword                                      nPlayersPerSide;                                  		// 0x0030 (0x0004) [0x0000000000000000]              
	struct Fdword                                      nQueueId;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
	struct Fdword                                      nMatchId;                                         		// 0x0038 (0x0004) [0x0000000000000000]              
	struct Fdword                                      nIconId;                                          		// 0x003C (0x0004) [0x0000000000000000]              
	struct Fdword                                      nPickMethod;                                      		// 0x0040 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGFxNameDisplayManager.TgPlayerNameWidgetBind
// 0x0010
struct FTgPlayerNameWidgetBind
{
	class UTgGFxPlayerNameWidget*                      pWidget;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       nmWidgetPath;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGFxNameDisplayManager.TgWidgetNameRequest
// 0x002C
struct FTgWidgetNameRequest
{
	class UTgGFxPlayerNameWidget*                      pWidget;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FTgPlayerId                                 pid;                                              		// 0x0008 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgGFxPlay.PlayQueueData
// 0x0008
struct FPlayQueueData
{
	int                                                queueId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                matchCount;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGFxPlay.TutorialVideoQueue
// 0x000C
struct FTutorialVideoQueue
{
	int                                                nGameMode;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nGameType;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nStreamId;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGFxPlayerGenerator.TgGenPlayerData
// 0x0014
struct FTgGenPlayerData
{
	unsigned char                                      fRefFlags;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FQWord                                      nLastUpdate;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	class UTgGFxPlayerData*                            pData;                                            		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGFxPlayerGenerator.TgIndexUidPair
// 0x0010
struct FTgIndexUidPair
{
	struct FTgUserId                                   Uid;                                              		// 0x0000 (0x000C) [0x0000000000000000]              
	int                                                nIndex;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGFxPlayerGenerator.TgGenUidLookup
// 0x0014
struct FTgGenUidLookup
{
	TArray< struct FTgIndexUidPair >                   arrPairs;                                         		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                nSorted;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGFxPlayerGenerator.TgIndexPidPair
// 0x0008
struct FTgIndexPidPair
{
	struct Fdword                                      nPid;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nIndex;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGFxPlayerGenerator.TgGenPidLookup
// 0x0014
struct FTgGenPidLookup
{
	TArray< struct FTgIndexPidPair >                   arrPairs;                                         		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                nSorted;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGfxProfileReferral.ReferLevelRewardData
// 0x0010
struct FReferLevelRewardData
{
	int                                                LRD_Level;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                LRD_Reward;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                LRD_RewardType;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                LRD_Boost;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGfxProfileReferral.ReferPlayedRewardData
// 0x0010
struct FReferPlayedRewardData
{
	int                                                PRD_Played;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PRD_Reward;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                PRD_RewardType;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                PRD_Boost;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGfxPurchaseGems.ProductInfo
// 0x0078
struct FProductInfo
{
	struct FString                                     PIProductID;                                      		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PIProductName;                                    		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PIProductDescription;                             		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PIProductImage;                                   		// 0x0030 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PIDisplayListPrice;                               		// 0x0040 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PIDisplayPrice;                                   		// 0x0050 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              PIListPrice;                                      		// 0x0060 (0x0004) [0x0000000000000000]              
	float                                              PIPrice;                                          		// 0x0064 (0x0004) [0x0000000000000000]              
	struct FString                                     PISignedOffer;                                    		// 0x0068 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgGfxPurchaseGems.ProductImageInfo
// 0x0030
struct FProductImageInfo
{
	struct FString                                     ProductName;                                      		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     XBProductId;                                      		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ProductImagePath;                                 		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgGfxSovereigntyVendorStore.ItemMovieClip
// 0x0018
struct FItemMovieClip
{
	class UTgGFxObject*                                rootClip;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                iconClip;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                priceTF;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgVendorData.ItemFilter
// 0x0030
struct FItemFilter
{
	int                                                nMask;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nAltMask;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bPrimaryCategory : 1;                             		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bExpandable : 1;                                  		// 0x0008 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bConsoleLocalized : 1;                            		// 0x0008 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	struct FString                                     sLabel;                                           		// 0x000C (0x0010) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bChecked : 1;                                     		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDisabled : 1;                                    		// 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bExpanded : 1;                                    		// 0x001C (0x0004) [0x0000000000000000] [0x00000004] 
	class UTgGFxObject*                                pObj;                                             		// 0x0020 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                pBox;                                             		// 0x0028 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgVendorData.DisplayItem
// 0x0078
struct FDisplayItem
{
	class UTgGFxObject*                                pObj;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                Icon;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                NameTF;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                DescTF;                                           		// 0x0018 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                CostTF;                                           		// 0x0020 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                Cost1TF;                                          		// 0x0028 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                Cost2TF;                                          		// 0x0030 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                Cost3TF;                                          		// 0x0038 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                Quantity;                                         		// 0x0040 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                OwnedIcon;                                        		// 0x0048 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                LockedIcon;                                       		// 0x0050 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                LockedFrame;                                      		// 0x0058 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                TierBtnBG;                                        		// 0x0060 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                RelicBorder;                                      		// 0x0068 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                RarityBorder;                                     		// 0x0070 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgVendorData.ItemCategory
// 0x0028
struct FItemCategory
{
	int                                                CategoryId;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ItemCount;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Items[ 0x4 ];                                     		// 0x0008 (0x0010) [0x0000000000000000]              
	int                                                Quantities[ 0x4 ];                                		// 0x0018 (0x0010) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgVendorData.ItemData
// 0x00A8
struct FItemData
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nTier;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nType;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nIcon;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nCost;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nCostA;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nCostB;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nCostC;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                nLevel;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                nSubType;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                nMaxStacks;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                nDeviceType;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                nSortOrder;                                       		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                nItemSubType;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                nClassRestriction;                                		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                nClassRestrictionClassId;                         		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                nItemStoreType;                                   		// 0x0040 (0x0004) [0x0000000000000000]              
	unsigned long                                      bAura : 1;                                        		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bStack : 1;                                       		// 0x0044 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bOwned : 1;                                       		// 0x0044 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bLocked : 1;                                      		// 0x0044 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bUnique : 1;                                      		// 0x0044 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bIsHidden : 1;                                    		// 0x0044 (0x0004) [0x0000000000000000] [0x00000020] 
	struct FString                                     sName;                                            		// 0x0048 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sNameINT;                                         		// 0x0058 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sDesc;                                            		// 0x0068 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      nEffects;                                         		// 0x0078 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      nParents;                                         		// 0x0088 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      nChildren;                                        		// 0x0098 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgGFxStoreDeals.TgStoreDealObtainLabel
// 0x0018
struct FTgStoreDealObtainLabel
{
	class UTgGFxObject*                                _this;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                gfxTextField;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                gfxBackground;                                    		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGFxStoreDeals.TgStoreCard
// 0x0028
struct FTgStoreCard
{
	class UTgGFxObject*                                _this;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                gfxCard;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FTgStoreDealObtainLabel                     gfxBanner;                                        		// 0x0010 (0x0018) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGFxStoreDeals.TgStoreDealPrice
// 0x0008
struct FTgStoreDealPrice
{
	class UTgGFxObject*                                _this;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGFxStoreDeals.TgStoreDealButton
// 0x005C
struct FTgStoreDealButton
{
	class UTgGFxObject*                                _this;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FTgStoreCard                                gfxCard;                                          		// 0x0008 (0x0028) [0x0000000000000000]              
	class UTgGFxObject*                                gfxTextField;                                     		// 0x0030 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                gfxTextField2;                                    		// 0x0038 (0x0008) [0x0000000000000000]              
	struct FTgStoreDealPrice                           gfxPriceBanner;                                   		// 0x0040 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                gfxOwnedPip;                                      		// 0x0048 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                gfxOwnedLabel;                                    		// 0x0050 (0x0008) [0x0000000000000000]              
	struct Fdword                                      nLootId;                                          		// 0x0058 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGFxStoreDeals.TgStoreDealEmptyLabel
// 0x0010
struct FTgStoreDealEmptyLabel
{
	class UTgGFxObject*                                _this;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                gfxTextField;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGFxStoreDeals.TgStoreDealOriginalPrice
// 0x0018
struct FTgStoreDealOriginalPrice
{
	class UTgGFxObject*                                _this;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                textField;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                currencyIcon;                                     		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGFxStoreDeals.TgStoreDailyBundle
// 0x002C
struct FTgStoreDailyBundle
{
	class UTgGFxObject*                                _this;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct FTgStoreCard >                      arrCard;                                          		// 0x0008 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class UTgGFxObject*                                gfxSaleBanner;                                    		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FTgStoreDealPrice                           gfxPriceBanner;                                   		// 0x0020 (0x0008) [0x0000000000000000]              
	struct Fdword                                      nLootId;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGFxStoreDeals.TgStoreDealBundles
// 0x0040
struct FTgStoreDealBundles
{
	class UTgGFxObject*                                _this;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct FTgStoreDailyBundle >               arrBundle;                                        		// 0x0008 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FTgStoreDealEmptyLabel >            arrEmptyLabel;                                    		// 0x0018 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FTgStoreDealEmptyLabel                      gfxEmptyLabelFull;                                		// 0x0028 (0x0010) [0x0000000000000000]              
	class UTgGFxObject*                                gfxLabel;                                         		// 0x0038 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGFxStoreShared.TgStoreTab
// 0x0020
struct FTgStoreTab
{
	struct Fdword                                      nId;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct Fdword                                      fFilterFlags;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	struct Fdword                                      nItemType;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     sLabel;                                           		// 0x000C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bActive : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgClientBase.TgGfxStoreViewer.TgStoreItemData
// 0x0014
struct FTgStoreItemData
{
	struct Fdword                                      nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct Fdword                                      nLootId;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	struct Fdword                                      nVendorId;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  pGFxObject;                                       		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGfxVendorStoreV2_Console.StoreItemCategory
// 0x0218
struct FStoreItemCategory
{
	int                                                nCategoryId;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Items[ 0x40 ];                                    		// 0x0004 (0x0100) [0x0000000000000000]              
	int                                                Quantities[ 0x40 ];                               		// 0x0104 (0x0100) [0x0000000000000000]              
	int                                                nLength;                                          		// 0x0204 (0x0004) [0x0000000000000000]              
	struct FString                                     sCategoryName;                                    		// 0x0208 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgGfxVendorStoreV2_Console.StoreTierDisplay
// 0x0058
struct FStoreTierDisplay
{
	class UTgGFxObject*                                pObj;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                Icon;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                CostTF;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                OwnedIcon;                                        		// 0x0018 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                DisabledCover;                                    		// 0x0020 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                RelicBorder;                                      		// 0x0028 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                RelicDisabledOverlay;                             		// 0x0030 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                LockedIcon;                                       		// 0x0038 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                LockedFrame;                                      		// 0x0040 (0x0008) [0x0000000000000000]              
	unsigned long                                      bIsVisible : 1;                                   		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                nItemId;                                          		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                nParentItemId;                                    		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                nChildItemId;                                     		// 0x0054 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGfxVendorStoreV2_Console.StoreItemDisplay
// 0x0078
struct FStoreItemDisplay
{
	class UTgGFxObject*                                pDisplay;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                pIconStack;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                pCountTF;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                pTierIcon1;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                pTierIcon2;                                       		// 0x0020 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                pTierIcon3;                                       		// 0x0028 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                pOwnedHighlight;                                  		// 0x0030 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                pCompletedHighlight;                              		// 0x0038 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                pRelicBorder;                                     		// 0x0040 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                pRelicDisabledOverlay;                            		// 0x0048 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                pLockedIcon;                                      		// 0x0050 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                pLockedFrame;                                     		// 0x0058 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                pRarityBorder;                                    		// 0x0060 (0x0008) [0x0000000000000000]              
	int                                                nItemId;                                          		// 0x0068 (0x0004) [0x0000000000000000]              
	int                                                nItemTier;                                        		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                nNextCurrencyCheck;                               		// 0x0070 (0x0004) [0x0000000000000000]              
	unsigned long                                      bVisible : 1;                                     		// 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgClientBase.TgGfxVendorStoreV2_Console.StoreStatDisplay
// 0x0034
struct FStoreStatDisplay
{
	class UTgGFxObject*                                LabelTF;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                GreenBar;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                ValueTF;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                MaxTF;                                            		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FString                                     sTitleLabel;                                      		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              fStatValue;                                       		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGFxVGSGame.VGSGameData
// 0x0024
struct FVGSGameData
{
	int                                                nVgsId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     sLabel;                                           		// 0x0004 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           arrCombo;                                         		// 0x0014 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgGFxVGSShared.VGSPrompt
// 0x0018
struct FVGSPrompt
{
	class UTgGFxObject*                                _this;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                Prompt;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                Label;                                            		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGFxViewerStore.TgEsportsGFxObject
// 0x000C
struct FTgEsportsGFxObject
{
	struct Fdword                                      nId;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  pObject;                                          		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGFxViewerStore.TgEsportsDataLists
// 0x0070
struct FTgEsportsDataLists
{
	class UGFxObject*                                  _this;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  pGFxTeams;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  pGFxEvents;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  pGFxSchedule;                                     		// 0x0018 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  pGFxAccumulativeStats;                            		// 0x0020 (0x0008) [0x0000000000000000]              
	TArray< struct FTgEsportsGFxObject >               arrTeams;                                         		// 0x0028 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FTgEsportsGFxObject >               arrEvents;                                        		// 0x0038 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FTgEsportsGFxObject >               arrSchedule;                                      		// 0x0048 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< class UGFxObject* >                        arrAccumulativeStats;                             		// 0x0058 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                nVoteWindowMinutesStart;                          		// 0x0068 (0x0004) [0x0000000000000000]              
	int                                                nVoteWindowMinutesEnd;                            		// 0x006C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgGFxViewerStore.TgEsportsData
// 0x0080
struct FTgEsportsData
{
	class UGFxObject*                                  _this;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  pAboutInfo;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FTgEsportsDataLists                         Lists;                                            		// 0x0010 (0x0070) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgInputDataEvent.TgInputWrapper
// 0x0008
struct FTgInputWrapper
{
	struct FPointer                                    m_pInputEvent;                                    		// 0x0000 (0x0008) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct TgClientBase.TgLeagueDC_Leaderboard.UpdatedPlayerInfo
// 0x0014
struct FUpdatedPlayerInfo
{
	struct Fdword                                      PlayerID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x0004 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgLeagueDC_Leaderboard.PlayerIdPointer
// 0x000C
struct FPlayerIdPointer
{
	struct Fdword                                      PlayerID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FPointer                                    playerObj;                                        		// 0x0004 (0x0008) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct TgClientBase.TgLobbyDC_Class.TgRestrictedSkinUpdate
// 0x0008
struct FTgRestrictedSkinUpdate
{
	unsigned char                                      fUpdate;                                          		// 0x0000 (0x0001) [0x0000000000000000]              
	struct Fdword                                      nSkinId;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgLobbyDC_Currencies.TgDCCurrency
// 0x0020
struct FTgDCCurrency
{
	struct FString                                     sCurrencyName;                                    		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct Fdword                                      nCurrencyId;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	struct Fdword                                      nValue;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  pObject;                                          		// 0x0018 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgLobbyDC_Inventory.TgBoosterEntry
// 0x0020
struct FTgBoosterEntry
{
	class UGFxObject*                                  pData;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	struct Fdword                                      nId;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	struct Fdword                                      nLootId;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	struct Fdword                                      nSubType;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	struct Fdword                                      nUsedBy;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nInvCount;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              nMultiplier;                                      		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgLobbyDC_Match.TgClassUpdateInfo
// 0x000C
struct FTgClassUpdateInfo
{
	unsigned char                                      fUpdate;                                          		// 0x0000 (0x0001) [0x0000000000000000]              
	class UTgLobbyDC_Class*                            pClass;                                           		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgLobbyDC_Match.TgLobbyClassLookup
// 0x0008
struct FTgLobbyClassLookup
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct Fdword                                      nClassId;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgLobbyDC_Player.RoleCallInfo
// 0x0010
struct FRoleCallInfo
{
	int                                                nValueId;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nIndex;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FQWord                                      nTimestamp;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgLobbyDC_Team.TgIncomingBan
// 0x0008
struct FTgIncomingBan
{
	struct Fdword                                      nClassId;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct Fdword                                      nIndex;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgLobbyHUDBase.LobbyTransitionPlayer
// 0x0104
struct FLobbyTransitionPlayer
{
	struct FString                                     sPlayerName;                                      		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct Fdword                                      nPlayerId;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nClassId;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nSkinId;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nTaskForce;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                nWins;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                nPlayerKills;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                nAssists;                                         		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                nFrameId;                                         		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                nMasteryLevel;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                nAvatarId;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                nHideGodStats;                                    		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                nCharXpCount;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                nCharXpLevel;                                     		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                nXpCount;                                         		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                nXpLevel;                                         		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                nSkinObtainedDay;                                 		// 0x004C (0x0004) [0x0000000000000000]              
	struct FString                                     sFLevel;                                          		// 0x0050 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sTeam1;                                           		// 0x0060 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sTeam2;                                           		// 0x0070 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sDateTime;                                        		// 0x0080 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sFantasyPoints;                                   		// 0x0090 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      isAI : 1;                                         		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      hasSeasonTicket : 1;                              		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     sOdyPoints;                                       		// 0x00A4 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sClassName;                                       		// 0x00B4 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sClassIconTexture;                                		// 0x00C4 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sClassIconMIC;                                    		// 0x00D4 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sBorderMIC;                                       		// 0x00E4 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sSkinName;                                        		// 0x00F4 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgLobbyHUDBase.LobbyTransitionData
// 0x1450
struct FLobbyTransitionData
{
	struct FLobbyTransitionPlayer                      FriendlyTeam[ 0x5 ];                              		// 0x0000 (0x0514) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FLobbyTransitionPlayer                      EnemyTeam[ 0x5 ];                                 		// 0x0514 (0x0514) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FLobbyTransitionPlayer                      ThirdTeam[ 0x5 ];                                 		// 0x0A28 (0x0514) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FLobbyTransitionPlayer                      FourthTeam[ 0x5 ];                                		// 0x0F3C (0x0514) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgLoginEvent.TgLoginEventData
// 0x0014
struct FTgLoginEventData
{
	int                                                nSystemMessage;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     sMessage;                                         		// 0x0004 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgMiniMap.LayerIndex
// 0x0010
struct FLayerIndex
{
	TArray< int >                                      Entries;                                          		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgMiniMap.FogMaskData
// 0x0030
struct FFogMaskData
{
	int                                                nSize;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nMapDrawLocationX;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nMapDrawLocationY;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLocationChanged : 1;                             		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bVisionRangeChanged : 1;                          		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	struct FBitArray_Mirror                            m_MaskPoints;                                     		// 0x0010 (0x0020) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
};

// ScriptStruct TgClientBase.TgMiniMap.MiniMapEntity
// 0x00AC
struct FMiniMapEntity
{
	struct FVector                                     vLocation;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	unsigned char                                      eType;                                            		// 0x000C (0x0001) [0x0000000000000000]              
	int                                                nSubType;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nProfileId;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned char                                      Team;                                             		// 0x0018 (0x0001) [0x0000000000000000]              
	int                                                nVisionRange;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsDead : 1;                                      		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	class AReplicationInfo*                            RepInfo;                                          		// 0x0024 (0x0008) [0x0000000000000000]              
	int                                                GenericState;                                     		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsLocal : 1;                                     		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      eIconLayerOverride;                               		// 0x0034 (0x0001) [0x0000000000000000]              
	int                                                nIdx;                                             		// 0x0038 (0x0004) [0x0000000000000000]              
	unsigned long                                      bMarked : 1;                                      		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bVisibleOnMap : 1;                                		// 0x003C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bValidTarget : 1;                                 		// 0x003C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bHovered : 1;                                     		// 0x003C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bFlashHighlight : 1;                              		// 0x003C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bFlashRecall : 1;                                 		// 0x003C (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bVisible : 1;                                     		// 0x003C (0x0004) [0x0000000000000000] [0x00000040] 
	float                                              fAlpha;                                           		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              fHealthPCT;                                       		// 0x0044 (0x0004) [0x0000000000000000]              
	float                                              fTimerPCT;                                        		// 0x0048 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   MIC;                                              		// 0x004C (0x0008) [0x0000000000000000]              
	unsigned long                                      bHasNoIcon : 1;                                   		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                nDrawSize;                                        		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                nHitSize;                                         		// 0x005C (0x0004) [0x0000000000000000]              
	struct FVector                                     vRect;                                            		// 0x0060 (0x000C) [0x0000000000000000]              
	float                                              fBlinkSpeed;                                      		// 0x006C (0x0004) [0x0000000000000000]              
	struct Fdword                                      nLayeredBuffEffects;                              		// 0x0070 (0x0004) [0x0000000000000000]              
	struct FFogMaskData                                FogMaskData;                                      		// 0x0074 (0x0030) [0x0000000000000000]              
	class UClass*                                      BotPawnClass;                                     		// 0x00A4 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgMiniMap.MiniMapPingInfo
// 0x0048
struct FMiniMapPingInfo
{
	float                                              fServerStartTime;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fClientStartTime;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	class ATgRepInfo_Player*                           pingedPri;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FVector                                     vPingedLoc;                                       		// 0x0010 (0x000C) [0x0000000000000000]              
	unsigned long                                      bIsPinging : 1;                                   		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      eType;                                            		// 0x0020 (0x0001) [0x0000000000000000]              
	int                                                nIconSize;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   pingMIC;                                          		// 0x0028 (0x0008) [0x0000000000000000]              
	class ATgRepInfo_Player*                           sourcePRI;                                        		// 0x0030 (0x0008) [0x0000000000000000]              
	int                                                SourceIndex;                                      		// 0x0038 (0x0004) [0x0000000000000000]              
	struct FVector                                     vSourceWorldLocation;                             		// 0x003C (0x000C) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgMiniMap.BuffMonsterMIC
// 0x0018
struct FBuffMonsterMIC
{
	class UMaterialInstanceConstant*                   SpawnedMIC;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   DroppedMIC;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   TimerMIC;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgPlayerNameProcessor.WORD
// 0x0002
struct FWORD
{
	unsigned char                                      A;                                                		// 0x0000 (0x0001) [0x0000000000001001]              ( CPF_Edit | CPF_Native )
	unsigned char                                      B;                                                		// 0x0001 (0x0001) [0x0000000000001001]              ( CPF_Edit | CPF_Native )
};

// ScriptStruct TgClientBase.TgPlayerNameProcessor.TgPlatRequestInfo
// 0x0020
struct FTgPlatRequestInfo
{
	unsigned char                                      eStage;                                           		// 0x0000 (0x0001) [0x0000000000000000]              
	struct Fdword                                      nGroupId;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     sUserId;                                          		// 0x0008 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FQWord                                      nStepTime;                                        		// 0x0018 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgPlayerNameProcessor.TgIdRequestInfo
// 0x0014
struct FTgIdRequestInfo
{
	unsigned char                                      eStage;                                           		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      fMode;                                            		// 0x0001 (0x0001) [0x0000000000000000]              
	struct Fdword                                      nGroupId;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	struct Fdword                                      nId;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FQWord                                      nStepTime;                                        		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgPlayerNameProcessor.TgNameFilterInfo
// 0x0030
struct FTgNameFilterInfo
{
	unsigned char                                      eStage;                                           		// 0x0000 (0x0001) [0x0000000000000000]              
	struct Fdword                                      nGroupId;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FQWord                                      nStepTime;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	TArray< struct Fdword >                            arrPids;                                          		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sName;                                            		// 0x0020 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgPlayerNameProcessor.TgGroupInfo
// 0x0028
struct FTgGroupInfo
{
	struct Fdword                                      nGroupId;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FWORD                                       nTotal;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FWORD                                       nStagePlatform;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FWORD                                       nStageMcts;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	struct FWORD                                       nStageMctsFail;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FWORD                                       nStageFilter;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FWORD                                       nStageComplete;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned char                                      nRetries;                                         		// 0x001C (0x0001) [0x0000000000000000]              
	struct FQWord                                      nLastRetry;                                       		// 0x0020 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgPlayerNameProcessor.TgDelegateInfo
// 0x0030
struct FTgDelegateInfo
{
	TArray< struct Fdword >                            arrGroupIds;                                      		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct Fdword >                            arrFailedIds;                                     		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             delCallback;                                      		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0024 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
};

// ScriptStruct TgClientBase.TgPlayerNameProcessor.TgQueuedDelegate
// 0x0014
struct FTgQueuedDelegate
{
	struct FScriptDelegate                             delCallback;                                      		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0004 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	int                                                nCount;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgPlayerNameProcessor.TgDeadGroup
// 0x0008
struct FTgDeadGroup
{
	struct Fdword                                      nGroupId;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nCount;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgPlayerNameProcessor.TgNameReqSystemInfo
// 0x0040
struct FTgNameReqSystemInfo
{
	int                                                nLastDelegate;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	struct Fdword                                      nActiveGroupId;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nGroupCount;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FQWord                                      nLastCleanup;                                     		// 0x000C (0x0008) [0x0000000000000000]              
	struct FQWord                                      nLastProcess;                                     		// 0x0014 (0x0008) [0x0000000000000000]              
	struct FQWord                                      nNextMcts;                                        		// 0x001C (0x0008) [0x0000000000000000]              
	struct FQWord                                      nNextPlatform;                                    		// 0x0024 (0x0008) [0x0000000000000000]              
	int                                                nCleanupPid;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                nCleanupUid;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                nCleanupFilter;                                   		// 0x0034 (0x0004) [0x0000000000000000]              
	struct FPointer                                    pOwner;                                           		// 0x0038 (0x0008) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct TgClientBase.TgPlayerNameProcessor.TgPidQueuedReq
// 0x0005
struct FTgPidQueuedReq
{
	struct Fdword                                      nPid;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      fMode;                                            		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgPlayerNameProcessor.TgPidPage
// 0x1010
struct FTgPidPage
{
	struct FTgPidQueuedReq                             arrData[ 0x200 ];                                 		// 0x0000 (0x1000) [0x0000000000000000]              
	struct FPointer                                    pNext;                                            		// 0x1000 (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FWORD                                       nCount;                                           		// 0x1008 (0x0004) [0x0000000000000000]              
	struct FWORD                                       nOffset;                                          		// 0x100C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgPlayerNameProcessor.TgPidQueue
// 0x0014
struct FTgPidQueue
{
	struct FPointer                                    pHead;                                            		// 0x0000 (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    pTail;                                            		// 0x0008 (0x0008) [0x0000000000001000]              ( CPF_Native )
	int                                                nPageCount;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgPlayerNameProcessor.TgUidPage
// 0x2010
struct FTgUidPage
{
	struct FString                                     arrData[ 0x200 ];                                 		// 0x0000 (0x2000) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FPointer                                    pNext;                                            		// 0x2000 (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FWORD                                       nCount;                                           		// 0x2008 (0x0004) [0x0000000000000000]              
	struct FWORD                                       nOffset;                                          		// 0x200C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgPlayerNameProcessor.TgUidQueue
// 0x0014
struct FTgUidQueue
{
	struct FPointer                                    pHead;                                            		// 0x0000 (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    pTail;                                            		// 0x0008 (0x0008) [0x0000000000001000]              ( CPF_Native )
	int                                                nPageCount;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgPlayerNameProcessor.TgMctsIncomingInfo
// 0x0020
struct FTgMctsIncomingInfo
{
	struct Fdword                                      nId;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FTgUserId                                   Uid;                                              		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FString                                     sName;                                            		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgPlayerNameProcessor.TgNameRequestBuffer
// 0x0108
struct FTgNameRequestBuffer
{
	TArray< struct FTgPlatRequestInfo >                arrPlatReqs;                                      		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FTgIdRequestInfo >                  arrMctsReqs;                                      		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FTgNameFilterInfo >                 arrFilterReqs;                                    		// 0x0020 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FTgGroupInfo >                      arrGroups;                                        		// 0x0030 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FTgDelegateInfo >                   arrDelegates;                                     		// 0x0040 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FTgDeadGroup >                      arrDeadGroups;                                    		// 0x0050 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      arrActiveGroups;                                  		// 0x0060 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FTgPidQueue                                 arrQueuedPids;                                    		// 0x0070 (0x0014) [0x0000000000000000]              
	TArray< struct FTgQueuedDelegate >                 arrQueuedPidDel;                                  		// 0x0084 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FTgUidQueue                                 arrQueuedUids;                                    		// 0x0094 (0x0014) [0x0000000000000000]              
	TArray< struct FTgQueuedDelegate >                 arrQueuedUidDel;                                  		// 0x00A8 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FTgMctsIncomingInfo >               arrMctsIncoming;                                  		// 0x00B8 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FTgNameReqSystemInfo                        sysInfo;                                          		// 0x00C8 (0x0040) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgRewardCenterManagerBase.GoalRewardItem
// 0x000C
struct FGoalRewardItem
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nQuantity;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bRental : 1;                                      		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgClientBase.TgRewardCenterManagerBase.ActivityGoal
// 0x0040
struct FActivityGoal
{
	int                                                nTargetValue;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nProgressValue;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     sDescription;                                     		// 0x0008 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sName;                                            		// 0x0018 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bClaimed : 1;                                     		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                nGoalId;                                          		// 0x002C (0x0004) [0x0000000000000000]              
	TArray< struct FGoalRewardItem >                   pLootItems;                                       		// 0x0030 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgRewardCenterManagerBase.PlayerPartyBonus
// 0x0010
struct FPlayerPartyBonus
{
	int                                                nPlayerCount;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fWorshipperBonus;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fXpBonus;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              fFavorBonus;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgRewardCenterManagerBase.QuestData
// 0x005C
struct FQuestData
{
	int                                                nQuestId;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nActivityId;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nGoalId;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nLootTableId;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nReceivedTime;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nNameId;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nDescId;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nTitleId;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                nGoalType;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                nCompletionGoal;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                nCompleteType;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                nCurrentProgress;                                 		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                nIconIndex;                                       		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                nQuestType;                                       		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                nEventQuestType;                                  		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                nEndTime;                                         		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                nProgressEarned;                                  		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                nDisplayOrder;                                    		// 0x0044 (0x0004) [0x0000000000000000]              
	unsigned long                                      bCanAbandon : 1;                                  		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSkipped : 1;                                     		// 0x0048 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bSeen : 1;                                        		// 0x0048 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bNew : 1;                                         		// 0x0048 (0x0004) [0x0000000000000000] [0x00000008] 
	TArray< struct FGoalRewardItem >                   pLootItems;                                       		// 0x004C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgRewardCenterManagerBase.CouponData
// 0x000C
struct FCouponData
{
	int                                                nCouponId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nItemId;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bSeen : 1;                                        		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgClientBase.TgRewardCenterManagerBase.DailyBundleTrackingData
// 0x0014
struct FDailyBundleTrackingData
{
	struct Fdword                                      nLootTableItemId;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct Fdword >                            DealItemIds;                                      		// 0x0004 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgRewardCenterManagerBase.DailyRewardInfo
// 0x0014
struct FDailyRewardInfo
{
	struct Fdword                                      nCurrentDay;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nConsecutiveDays;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	struct Fdword                                      nLengthOfDay;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              nTimeTilNextDay;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bShouldAutoCollect : 1;                           		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHasClaimedToday : 1;                             		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bHasDoneRedirect : 1;                             		// 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct TgClientBase.TgSceneManager.TgSceneDef
// 0x001C
struct FTgSceneDef
{
	class UGFxObject*                                  pSource;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     sSceneName;                                       		// 0x0008 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct Fdword                                      fLoadPermission;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgSceneManager.TgLoadSceneData
// 0x0018
struct FTgLoadSceneData
{
	struct FString                                     sSceneName;                                       		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class UTgDataItem*                                 pData;                                            		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClientBase.TgStreamManagerBase.GameStream
// 0x0058
struct FGameStream
{
	unsigned long                                      bLive : 1;                                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFeatured : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bSpecial : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned char                                      Type;                                             		// 0x0004 (0x0001) [0x0000000000000000]              
	struct FString                                     Title;                                            		// 0x0008 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     StreamURL;                                        		// 0x0018 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ChannelName;                                      		// 0x0028 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0038 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Viewers;                                          		// 0x0048 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgSystemNotifManagerBase.SystemMessage
// 0x0058
struct FSystemMessage
{
	unsigned long                                      bSeen : 1;                                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      eState;                                           		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      eSubType;                                         		// 0x0005 (0x0001) [0x0000000000000000]              
	unsigned char                                      eType;                                            		// 0x0006 (0x0001) [0x0000000000000000]              
	struct FString                                     sDescription;                                     		// 0x0008 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sTexturePath;                                     		// 0x0018 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  pObj;                                             		// 0x0028 (0x0008) [0x0000000000000000]              
	struct Fdword                                      nId;                                              		// 0x0030 (0x0004) [0x0000000000000000]              
	struct FTgPlayerId                                 pid;                                              		// 0x0034 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgSystemNotifManagerBase.TgSystemMessageTag
// 0x0060
struct FTgSystemMessageTag
{
	struct FQWord                                      nTimestamp;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FSystemMessage                              Message;                                          		// 0x0008 (0x0058) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClientBase.TgGfxClanAdminBase.TgWaitingForInfo
// 0x0014
struct FTgWaitingForInfo
{
	unsigned char                                      nAttemptCount;                                    		// 0x0000 (0x0001) [0x0000000000000000]              
	struct Fdword                                      nPlayerId;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nIndex;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  pTarget;                                          		// 0x000C (0x0008) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif