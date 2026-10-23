#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct WBP_RebootRallyPopupModal_C_ExecuteUbergraph_WBP_RebootRallyPopupModal final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_19[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	class UFortQuestManager*                      CallFunc_GetQuestManager_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	bool                                          K2Node_Event_bIsInvited;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_4A[0x6];
	class FText                                   K2Node_Select_Default;
	struct FGameplayTagContainer                  CallFunc_MakeLiteralGameplayTagContainer_ReturnValue;
	class UFortAsyncAction_SendQuestStatEvent*    CallFunc_SendClientStatEventWithTags_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(WBP_RebootRallyPopupModal_C_ExecuteUbergraph_WBP_RebootRallyPopupModal) == 0x000008, "Wrong alignment on WBP_RebootRallyPopupModal_C_ExecuteUbergraph_WBP_RebootRallyPopupModal");
static_assert(sizeof(WBP_RebootRallyPopupModal_C_ExecuteUbergraph_WBP_RebootRallyPopupModal) == 0x000098, "Wrong size on WBP_RebootRallyPopupModal_C_ExecuteUbergraph_WBP_RebootRallyPopupModal");
static_assert(offsetof(WBP_RebootRallyPopupModal_C_ExecuteUbergraph_WBP_RebootRallyPopupModal, EntryPoint) == 0x000000, "Member 'WBP_RebootRallyPopupModal_C_ExecuteUbergraph_WBP_RebootRallyPopupModal::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_C_ExecuteUbergraph_WBP_RebootRallyPopupModal, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'WBP_RebootRallyPopupModal_C_ExecuteUbergraph_WBP_RebootRallyPopupModal::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_C_ExecuteUbergraph_WBP_RebootRallyPopupModal, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000010, "Member 'WBP_RebootRallyPopupModal_C_ExecuteUbergraph_WBP_RebootRallyPopupModal::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_C_ExecuteUbergraph_WBP_RebootRallyPopupModal, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_RebootRallyPopupModal_C_ExecuteUbergraph_WBP_RebootRallyPopupModal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_C_ExecuteUbergraph_WBP_RebootRallyPopupModal, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'WBP_RebootRallyPopupModal_C_ExecuteUbergraph_WBP_RebootRallyPopupModal::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_C_ExecuteUbergraph_WBP_RebootRallyPopupModal, CallFunc_GetQuestManager_ReturnValue) == 0x000028, "Member 'WBP_RebootRallyPopupModal_C_ExecuteUbergraph_WBP_RebootRallyPopupModal::CallFunc_GetQuestManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_C_ExecuteUbergraph_WBP_RebootRallyPopupModal, K2Node_CreateDelegate_OutputDelegate_1) == 0x000030, "Member 'WBP_RebootRallyPopupModal_C_ExecuteUbergraph_WBP_RebootRallyPopupModal::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_C_ExecuteUbergraph_WBP_RebootRallyPopupModal, K2Node_CreateDelegate_OutputDelegate_2) == 0x00003C, "Member 'WBP_RebootRallyPopupModal_C_ExecuteUbergraph_WBP_RebootRallyPopupModal::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_C_ExecuteUbergraph_WBP_RebootRallyPopupModal, K2Node_Event_bIsInvited) == 0x000048, "Member 'WBP_RebootRallyPopupModal_C_ExecuteUbergraph_WBP_RebootRallyPopupModal::K2Node_Event_bIsInvited' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_C_ExecuteUbergraph_WBP_RebootRallyPopupModal, Temp_bool_Variable) == 0x000049, "Member 'WBP_RebootRallyPopupModal_C_ExecuteUbergraph_WBP_RebootRallyPopupModal::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_C_ExecuteUbergraph_WBP_RebootRallyPopupModal, K2Node_Select_Default) == 0x000050, "Member 'WBP_RebootRallyPopupModal_C_ExecuteUbergraph_WBP_RebootRallyPopupModal::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_C_ExecuteUbergraph_WBP_RebootRallyPopupModal, CallFunc_MakeLiteralGameplayTagContainer_ReturnValue) == 0x000068, "Member 'WBP_RebootRallyPopupModal_C_ExecuteUbergraph_WBP_RebootRallyPopupModal::CallFunc_MakeLiteralGameplayTagContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_C_ExecuteUbergraph_WBP_RebootRallyPopupModal, CallFunc_SendClientStatEventWithTags_ReturnValue) == 0x000088, "Member 'WBP_RebootRallyPopupModal_C_ExecuteUbergraph_WBP_RebootRallyPopupModal::CallFunc_SendClientStatEventWithTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_C_ExecuteUbergraph_WBP_RebootRallyPopupModal, CallFunc_IsValid_ReturnValue) == 0x000090, "Member 'WBP_RebootRallyPopupModal_C_ExecuteUbergraph_WBP_RebootRallyPopupModal::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct WBP_RebootRallyPopupModal_C_OnSetIsInvite final
{
public:
	bool                                          bIsInvited;
};
static_assert(alignof(WBP_RebootRallyPopupModal_C_OnSetIsInvite) == 0x000001, "Wrong alignment on WBP_RebootRallyPopupModal_C_OnSetIsInvite");
static_assert(sizeof(WBP_RebootRallyPopupModal_C_OnSetIsInvite) == 0x000001, "Wrong size on WBP_RebootRallyPopupModal_C_OnSetIsInvite");
static_assert(offsetof(WBP_RebootRallyPopupModal_C_OnSetIsInvite, bIsInvited) == 0x000000, "Member 'WBP_RebootRallyPopupModal_C_OnSetIsInvite::bIsInvited' has a wrong offset!");

}
