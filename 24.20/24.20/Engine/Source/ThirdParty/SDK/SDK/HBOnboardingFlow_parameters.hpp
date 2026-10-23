#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteUI_structs.hpp"

namespace SDK::Params
{

struct HBOnboardingFlow_C_RecheckNeedToPlayEventMovie final
{
public:
	bool                                          WaitingToCheckAgain;
	uint8                                         Pad_1[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(HBOnboardingFlow_C_RecheckNeedToPlayEventMovie) == 0x000008, "Wrong alignment on HBOnboardingFlow_C_RecheckNeedToPlayEventMovie");
static_assert(sizeof(HBOnboardingFlow_C_RecheckNeedToPlayEventMovie) == 0x000020, "Wrong size on HBOnboardingFlow_C_RecheckNeedToPlayEventMovie");
static_assert(offsetof(HBOnboardingFlow_C_RecheckNeedToPlayEventMovie, WaitingToCheckAgain) == 0x000000, "Member 'HBOnboardingFlow_C_RecheckNeedToPlayEventMovie::WaitingToCheckAgain' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_RecheckNeedToPlayEventMovie, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'HBOnboardingFlow_C_RecheckNeedToPlayEventMovie::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_RecheckNeedToPlayEventMovie, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000010, "Member 'HBOnboardingFlow_C_RecheckNeedToPlayEventMovie::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_RecheckNeedToPlayEventMovie, CallFunc_Not_PreBool_ReturnValue) == 0x000018, "Member 'HBOnboardingFlow_C_RecheckNeedToPlayEventMovie::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_RecheckNeedToPlayEventMovie, CallFunc_Not_PreBool_ReturnValue_1) == 0x000019, "Member 'HBOnboardingFlow_C_RecheckNeedToPlayEventMovie::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_RecheckNeedToPlayEventMovie, CallFunc_BooleanAND_ReturnValue) == 0x00001A, "Member 'HBOnboardingFlow_C_RecheckNeedToPlayEventMovie::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

struct HBOnboardingFlow_C_NeedsToPlayEventMovie final
{
public:
	bool                                          ReturnValue;
	uint8                                         Pad_1[0x7];
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;
	bool                                          CallFunc_IsMobileApp_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	uint8                                         Pad_13[0x5];
	class UFortQuestManager*                      CallFunc_GetQuestManager_ReturnValue;
	bool                                          CallFunc_IsQuestInProgress_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
};
static_assert(alignof(HBOnboardingFlow_C_NeedsToPlayEventMovie) == 0x000008, "Wrong alignment on HBOnboardingFlow_C_NeedsToPlayEventMovie");
static_assert(sizeof(HBOnboardingFlow_C_NeedsToPlayEventMovie) == 0x000028, "Wrong size on HBOnboardingFlow_C_NeedsToPlayEventMovie");
static_assert(offsetof(HBOnboardingFlow_C_NeedsToPlayEventMovie, ReturnValue) == 0x000000, "Member 'HBOnboardingFlow_C_NeedsToPlayEventMovie::ReturnValue' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_NeedsToPlayEventMovie, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'HBOnboardingFlow_C_NeedsToPlayEventMovie::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_NeedsToPlayEventMovie, CallFunc_IsMobileApp_ReturnValue) == 0x000010, "Member 'HBOnboardingFlow_C_NeedsToPlayEventMovie::CallFunc_IsMobileApp_ReturnValue' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_NeedsToPlayEventMovie, CallFunc_Not_PreBool_ReturnValue) == 0x000011, "Member 'HBOnboardingFlow_C_NeedsToPlayEventMovie::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_NeedsToPlayEventMovie, CallFunc_Not_PreBool_ReturnValue_1) == 0x000012, "Member 'HBOnboardingFlow_C_NeedsToPlayEventMovie::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_NeedsToPlayEventMovie, CallFunc_GetQuestManager_ReturnValue) == 0x000018, "Member 'HBOnboardingFlow_C_NeedsToPlayEventMovie::CallFunc_GetQuestManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_NeedsToPlayEventMovie, CallFunc_IsQuestInProgress_ReturnValue) == 0x000020, "Member 'HBOnboardingFlow_C_NeedsToPlayEventMovie::CallFunc_IsQuestInProgress_ReturnValue' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_NeedsToPlayEventMovie, CallFunc_BooleanAND_ReturnValue) == 0x000021, "Member 'HBOnboardingFlow_C_NeedsToPlayEventMovie::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_NeedsToPlayEventMovie, CallFunc_BooleanAND_ReturnValue_1) == 0x000022, "Member 'HBOnboardingFlow_C_NeedsToPlayEventMovie::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

struct HBOnboardingFlow_C_HandleClientEvent_PlayEventMovie final
{
public:
	class UObject*                                EventSource;
	class UObject*                                EventFocus;
	struct FFortClientEvent                       ClientEvent;
};
static_assert(alignof(HBOnboardingFlow_C_HandleClientEvent_PlayEventMovie) == 0x000008, "Wrong alignment on HBOnboardingFlow_C_HandleClientEvent_PlayEventMovie");
static_assert(sizeof(HBOnboardingFlow_C_HandleClientEvent_PlayEventMovie) == 0x000028, "Wrong size on HBOnboardingFlow_C_HandleClientEvent_PlayEventMovie");
static_assert(offsetof(HBOnboardingFlow_C_HandleClientEvent_PlayEventMovie, EventSource) == 0x000000, "Member 'HBOnboardingFlow_C_HandleClientEvent_PlayEventMovie::EventSource' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_HandleClientEvent_PlayEventMovie, EventFocus) == 0x000008, "Member 'HBOnboardingFlow_C_HandleClientEvent_PlayEventMovie::EventFocus' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_HandleClientEvent_PlayEventMovie, ClientEvent) == 0x000010, "Member 'HBOnboardingFlow_C_HandleClientEvent_PlayEventMovie::ClientEvent' has a wrong offset!");

struct HBOnboardingFlow_C_GetCampaignQuestManager final
{
public:
	class UFortQuestManager*                      QuestManager;
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;
	class UFortQuestManager*                      CallFunc_GetQuestManager_ReturnValue;
};
static_assert(alignof(HBOnboardingFlow_C_GetCampaignQuestManager) == 0x000008, "Wrong alignment on HBOnboardingFlow_C_GetCampaignQuestManager");
static_assert(sizeof(HBOnboardingFlow_C_GetCampaignQuestManager) == 0x000018, "Wrong size on HBOnboardingFlow_C_GetCampaignQuestManager");
static_assert(offsetof(HBOnboardingFlow_C_GetCampaignQuestManager, QuestManager) == 0x000000, "Member 'HBOnboardingFlow_C_GetCampaignQuestManager::QuestManager' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_GetCampaignQuestManager, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'HBOnboardingFlow_C_GetCampaignQuestManager::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_GetCampaignQuestManager, CallFunc_GetQuestManager_ReturnValue) == 0x000010, "Member 'HBOnboardingFlow_C_GetCampaignQuestManager::CallFunc_GetQuestManager_ReturnValue' has a wrong offset!");

struct HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;
	EFortUIFeatureState                           CallFunc_GetFeatureState_OutFeatureState;
	EFortUIFeatureStateReason                     CallFunc_GetFeatureState_OutReason;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_13[0x1];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	uint8                                         Pad_8C[0x4];
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	uint8                                         Pad_A4[0x4];
	class UFortQuestManager*                      CallFunc_GetQuestManager_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_B2[0x2];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;
	TArray<class AFortPlayerController*>          K2Node_MakeArray_Array;
	bool                                          CallFunc_NeedsToPlayEventMovie_ReturnValue;
	bool                                          CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain;
	bool                                          CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain_1;
	uint8                                         Pad_D3[0x5];
	class UObject*                                K2Node_HandleClientEvent_EventSource;
	class UObject*                                K2Node_HandleClientEvent_EventFocus;
	struct FFortClientEvent                       K2Node_HandleClientEvent_ClientEvent;
	class UFortQuestManager*                      CallFunc_GetCampaignQuestManager_QuestManager;
	class UFortAsyncAction_SendQuestStatEvent*    CallFunc_SendClientStatEvent_ReturnValue;
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	class AFortClientAnnouncement*                CallFunc_FinishSpawningActor_ReturnValue;
	class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	bool                                          CallFunc_ClassIsChildOf_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;
};
static_assert(alignof(HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow) == 0x000010, "Wrong alignment on HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow");
static_assert(sizeof(HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow) == 0x000140, "Wrong size on HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow");
static_assert(offsetof(HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow, EntryPoint) == 0x000000, "Member 'HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow::EntryPoint' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow, CallFunc_GetFeatureState_OutFeatureState) == 0x000010, "Member 'HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow::CallFunc_GetFeatureState_OutFeatureState' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow, CallFunc_GetFeatureState_OutReason) == 0x000011, "Member 'HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow::CallFunc_GetFeatureState_OutReason' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000012, "Member 'HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow, CallFunc_MakeTransform_ReturnValue) == 0x000020, "Member 'HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow, K2Node_CreateDelegate_OutputDelegate_1) == 0x000080, "Member 'HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow, CallFunc_GetContext_ReturnValue_1) == 0x000090, "Member 'HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow::CallFunc_GetContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow, K2Node_CreateDelegate_OutputDelegate_2) == 0x000098, "Member 'HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow, CallFunc_GetQuestManager_ReturnValue) == 0x0000A8, "Member 'HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow::CallFunc_GetQuestManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow, CallFunc_Not_PreBool_ReturnValue) == 0x0000B0, "Member 'HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow, CallFunc_IsValid_ReturnValue) == 0x0000B1, "Member 'HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000B4, "Member 'HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow, K2Node_MakeArray_Array) == 0x0000C0, "Member 'HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow, CallFunc_NeedsToPlayEventMovie_ReturnValue) == 0x0000D0, "Member 'HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow::CallFunc_NeedsToPlayEventMovie_ReturnValue' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow, CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain) == 0x0000D1, "Member 'HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow::CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow, CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain_1) == 0x0000D2, "Member 'HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow::CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain_1' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow, K2Node_HandleClientEvent_EventSource) == 0x0000D8, "Member 'HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow::K2Node_HandleClientEvent_EventSource' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow, K2Node_HandleClientEvent_EventFocus) == 0x0000E0, "Member 'HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow::K2Node_HandleClientEvent_EventFocus' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow, K2Node_HandleClientEvent_ClientEvent) == 0x0000E8, "Member 'HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow::K2Node_HandleClientEvent_ClientEvent' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow, CallFunc_GetCampaignQuestManager_QuestManager) == 0x000100, "Member 'HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow::CallFunc_GetCampaignQuestManager_QuestManager' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow, CallFunc_SendClientStatEvent_ReturnValue) == 0x000108, "Member 'HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow::CallFunc_SendClientStatEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000110, "Member 'HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow, CallFunc_FinishSpawningActor_ReturnValue) == 0x000118, "Member 'HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow, CallFunc_WaitForClientAnnouncement_ReturnValue) == 0x000120, "Member 'HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow::CallFunc_WaitForClientAnnouncement_ReturnValue' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow, CallFunc_IsValid_ReturnValue_1) == 0x000128, "Member 'HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow, CallFunc_IsValid_ReturnValue_2) == 0x000129, "Member 'HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow, CallFunc_IsValid_ReturnValue_3) == 0x00012A, "Member 'HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow, CallFunc_ClassIsChildOf_ReturnValue) == 0x00012B, "Member 'HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow::CallFunc_ClassIsChildOf_ReturnValue' has a wrong offset!");
static_assert(offsetof(HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow, K2Node_CreateDelegate_OutputDelegate_4) == 0x00012C, "Member 'HBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");

}
