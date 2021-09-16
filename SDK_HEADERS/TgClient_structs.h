/*
#############################################################################################
# Smite (v3.24.3804.2) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: TgClient_structs.h
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

// ScriptStruct TgClient.TgGameMoviePlayer.WebRegion
// 0x0028
struct FWebRegion
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nLastStreamId;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     sLastURL;                                         		// 0x0008 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sName;                                            		// 0x0018 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClient.TgGfxCharacterBuilder.ItemBuilderCategory
// 0x0038
struct FItemBuilderCategory
{
	int                                                CategoryId;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ItemCount;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Items[ 0x4 ];                                     		// 0x0008 (0x0010) [0x0000000000000000]              
	int                                                Quantities[ 0x4 ];                                		// 0x0018 (0x0010) [0x0000000000000000]              
	int                                                AutoBuyIndex[ 0x4 ];                              		// 0x0028 (0x0010) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxCharacterBuilder.PreviewItem
// 0x000C
struct FPreviewItem
{
	int                                                CategoryIndex;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ColumnIndex;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ItemId;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxCharacterBuilder.AbilityLevelButton
// 0x0010
struct FAbilityLevelButton
{
	class UTgGFxObject*                                Icon;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                Object;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxCharacterBuilder.AbilityRow
// 0x0028
struct FAbilityRow
{
	class UTgGFxObject*                                LevelTF;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FAbilityLevelButton                         Button[ 0x2 ];                                    		// 0x0008 (0x0020) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxCharacterBuilder.AbilitySelectionButton
// 0x0040
struct FAbilitySelectionButton
{
	class UTgGFxObject*                                Icon;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                Object;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                AbilityNameTF;                                    		// 0x0010 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                AblilityPips[ 0x5 ];                              		// 0x0018 (0x0028) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxCharacterBuilder.LevelInfo
// 0x0008
struct FLevelInfo
{
	int                                                Ability[ 0x2 ];                                   		// 0x0000 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxCharacterBuilder.BuildItemDisplay
// 0x0010
struct FBuildItemDisplay
{
	class UTgGFxObject*                                Icon;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                Quantity;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxCharacterBuilder.ItemDisplay
// 0x0080
struct FItemDisplay
{
	class UTgGFxObject*                                pObj;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                ItemButton;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                BuildButton;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                RemoveButton;                                     		// 0x0018 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                Icon;                                             		// 0x0020 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                NameTF;                                           		// 0x0028 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                DescTF;                                           		// 0x0030 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                BuildQty;                                         		// 0x0038 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                BuildQtyTF;                                       		// 0x0040 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                BuildCostTF;                                      		// 0x0048 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                BuildIcon;                                        		// 0x0050 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                BuildNameTF;                                      		// 0x0058 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                BuildCheckbox;                                    		// 0x0060 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                CostTF[ 0x3 ];                                    		// 0x0068 (0x0018) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxChatInput.ChannelData
// 0x0014
struct FChannelData
{
	int                                                nChannel;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     sName;                                            		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClient.TgGFxEventQuestNotification.QuestRedirect
// 0x0010
struct FQuestRedirect
{
	int                                                RedirectTo;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                RedirectData;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ReturnAfter;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                ReturnData;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxGods.ItemData_GodPage
// 0x00E8
struct FItemData_GodPage
{
	int                                                nGodId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nItemId;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nLootId;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nUIHint;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nIconIndex;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nIconIndexBW;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nSkinId;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nSkinType;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                nFavorCost;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                nGemCost;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                nPackId;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                nPackLootId;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                nPackCost;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                nPackCurrency;                                    		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                nGodLevel;                                        		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                nWorshipers;                                      		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                nForLevel;                                        		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                nForNext;                                         		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                nRentTime;                                        		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                nRentTimeUpdate;                                  		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                nSubType;                                         		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                nObtainability;                                   		// 0x0054 (0x0004) [0x0000000000000000]              
	unsigned long                                      bNew : 1;                                         		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSelected : 1;                                    		// 0x0058 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bOwned : 1;                                       		// 0x0058 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bLocked : 1;                                      		// 0x0058 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bPurchasable : 1;                                 		// 0x0058 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bVoicePackOwned : 1;                              		// 0x0058 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bRented : 1;                                      		// 0x0058 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bHasVP : 1;                                       		// 0x0058 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bIsExclusive : 1;                                 		// 0x0058 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bIsLimited : 1;                                   		// 0x0058 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bIsUnlimited : 1;                                 		// 0x0058 (0x0004) [0x0000000000000000] [0x00000400] 
	struct FString                                     sGoldLabel;                                       		// 0x005C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sName;                                            		// 0x006C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sNameINT;                                         		// 0x007C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sTags;                                            		// 0x008C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sDescription;                                     		// 0x009C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sPantheon;                                        		// 0x00AC (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sImageTexture;                                    		// 0x00BC (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sIconTexture;                                     		// 0x00CC (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FPointer                                    pItem;                                            		// 0x00DC (0x0008) [0x0000000000001000]              ( CPF_Native )
	int                                                nObtainabilityLocation;                           		// 0x00E4 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxGods.StreamData_Gods
// 0x002C
struct FStreamData_Gods
{
	int                                                streamIdGods;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                streamBotId;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                streamAbilityNumber;                              		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     streamURLGods;                                    		// 0x000C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     streamLabelGods;                                  		// 0x001C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClient.TgGfxGods.AchievementData_GodsAchievements
// 0x006C
struct FAchievementData_GodsAchievements
{
	int                                                botIdGods;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                pointValue;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                goalGroupId;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                goalId;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                ActivityId;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                dateInt;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FString                                     nameMsg;                                          		// 0x0018 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     titleMsg;                                         		// 0x0028 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     descMsg;                                          		// 0x0038 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     dateMsg;                                          		// 0x0048 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     imgSource;                                        		// 0x0058 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      hasCompleted : 1;                                 		// 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct TgClient.TgGfxGods.VendorItemUIHint
// 0x0014
struct FVendorItemUIHint
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Label;                                            		// 0x0004 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClient.TgGfxGods.GFxGodBtn
// 0x0068
struct FGFxGodBtn
{
	class UTgGFxObject*                                pObj;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                Icon;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                TagText;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                GoldTag;                                          		// 0x0018 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                OwnedLabel;                                       		// 0x0020 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                GemPrice;                                         		// 0x0028 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                FavorPrice;                                       		// 0x0030 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                GemPriceTF;                                       		// 0x0038 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                FavorPriceTF;                                     		// 0x0040 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                SpecialTF;                                        		// 0x0048 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                SpecialTag;                                       		// 0x0050 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                MasteryIcon;                                      		// 0x0058 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                GodLabel;                                         		// 0x0060 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxGods.GFxSkinBtn
// 0x0070
struct FGFxSkinBtn
{
	class UTgGFxObject*                                pObj;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                Icon;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                TagText;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                GoldTag;                                          		// 0x0018 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                OwnedLabel;                                       		// 0x0020 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                GemPrice;                                         		// 0x0028 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                FavorPrice;                                       		// 0x0030 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                GemPriceTF;                                       		// 0x0038 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                FavorPriceTF;                                     		// 0x0040 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                SpecialTF;                                        		// 0x0048 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                SpecialTag;                                       		// 0x0050 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                LegendaryImage;                                   		// 0x0058 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                DiamondImage;                                     		// 0x0060 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                ObtainabilityIcon;                                		// 0x0068 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxGods.GFxItem
// 0x0028
struct FGFxItem
{
	class UTgGFxObject*                                pObj;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                Icon;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                MasterIcon;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                TagText;                                          		// 0x0018 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                GoldTag;                                          		// 0x0020 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxHudNotify.NotifyData
// 0x00AC
struct FNotifyData
{
	int                                                nId;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nSoundId;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nAnnouncerId;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	struct Fdword                                      nSourcePlayerId;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	struct Fdword                                      nTargetPlayerId;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLocal : 1;                                       		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bLocalOnly : 1;                                   		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      NotifyType;                                       		// 0x0018 (0x0001) [0x0000000000000000]              
	struct FString                                     sSourceName;                                      		// 0x001C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sTargetName;                                      		// 0x002C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sAGodIconPath;                                    		// 0x003C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sBGodIconPath;                                    		// 0x004C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bFriendly : 1;                                    		// 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFriendly2 : 1;                                   		// 0x005C (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                nSkin;                                            		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                nGodA;                                            		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                nGodB;                                            		// 0x0068 (0x0004) [0x0000000000000000]              
	int                                                nGodAColored;                                     		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                nGodBColored;                                     		// 0x0070 (0x0004) [0x0000000000000000]              
	unsigned char                                      AccoladeType;                                     		// 0x0074 (0x0001) [0x0000000000000000]              
	unsigned long                                      bKillStreakOrCombo : 1;                           		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                nAccoladeIcon;                                    		// 0x007C (0x0004) [0x0000000000000000]              
	float                                              fExpireTime;                                      		// 0x0080 (0x0004) [0x0000000000000000]              
	float                                              fDurationOverride;                                		// 0x0084 (0x0004) [0x0000000000000000]              
	struct FString                                     sMessage;                                         		// 0x0088 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nAlertType;                                       		// 0x0098 (0x0004) [0x0000000000000000]              
	int                                                nNotifyFill;                                      		// 0x009C (0x0004) [0x0000000000000000]              
	int                                                nNotifyDelay;                                     		// 0x00A0 (0x0004) [0x0000000000000000]              
	int                                                nNotifyColor;                                     		// 0x00A4 (0x0004) [0x0000000000000000]              
	int                                                nNotifySize;                                      		// 0x00A8 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxHudNotify.EventLogData
// 0x0008
struct FEventLogData
{
	int                                                RewindFrame;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                EventIndex;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxLeaderboard.LdbdNameValue
// 0x0014
struct FLdbdNameValue
{
	struct FString                                     sName;                                            		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                nValue;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxLoadouts.ItemData_LoadoutsPage
// 0x004C
struct FItemData_LoadoutsPage
{
	int                                                nItemId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nLootId;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nIconIndex;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nGemPrice;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nFavorPrice;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nSubType;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bNew : 1;                                         		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOwned : 1;                                       		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bPurchasable : 1;                                 		// 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FString                                     sName;                                            		// 0x001C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sDescription;                                     		// 0x002C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sImagePath;                                       		// 0x003C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClient.TgGfxPartyManagement.ListPlayerData
// 0x0020
struct FListPlayerData
{
	int                                                lpd_PlayerId;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                lpd_AvatarId;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                lpd_PlayedGodId;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                lpd_PlayerLevel;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     lpd_PlayerName;                                   		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct TgClient.TgGfxPartyManagement.PlayerBtn
// 0x0028
struct FPlayerBtn
{
	class UTgGFxObject*                                pObj;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                MicrophoneIcon;                                   		// 0x0008 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                Avatar;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                Pending;                                          		// 0x0018 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                SignificanceIcon;                                 		// 0x0020 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxPlayerProfile.MatchMembersFilter
// 0x000C
struct FMatchMembersFilter
{
	int                                                matchId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  membersFilterArray;                               		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxProfileAchievements.AchievementData_ProfileAchievements
// 0x0080
struct FAchievementData_ProfileAchievements
{
	int                                                achievementType;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                achievementProgress;                              		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                achievementGoalProgress;                          		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                pointValue;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                displayId;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                goalGroupId;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                goalId;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                ActivityId;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                dateInt;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FString                                     nameMsg;                                          		// 0x0024 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     titleMsg;                                         		// 0x0034 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     descMsg;                                          		// 0x0044 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     dateMsg;                                          		// 0x0054 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     imgSource;                                        		// 0x0064 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      hasCompleted : 1;                                 		// 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
	class UGFxObject*                                  gfxObj;                                           		// 0x0078 (0x0008) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxProfileOverview.MatchOutcome
// 0x0008
struct FMatchOutcome
{
	int                                                wins;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                losses;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxRacerDispatcher.RacerDispatcherState
// 0x000C
struct FRacerDispatcherState
{
	int                                                lastPlacement;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                lastDeviceId;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                lastLap;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxReferrals.LevelRewardData
// 0x0010
struct FLevelRewardData
{
	int                                                LRD_Level;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                LRD_Reward;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                LRD_RewardType;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                LRD_Boost;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxReferrals.PlayedRewardData
// 0x0010
struct FPlayedRewardData
{
	int                                                PRD_Played;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PRD_Reward;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                PRD_RewardType;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                PRD_Boost;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct TgClient.TgGfxTreasurePicker.GFxTreasureItem
// 0x0010
struct FGFxTreasureItem
{
	int                                                vendorId;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                lootId;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  treasureItemData;                                 		// 0x0008 (0x0008) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif