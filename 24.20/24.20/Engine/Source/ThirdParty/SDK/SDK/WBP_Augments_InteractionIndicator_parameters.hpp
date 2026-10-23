#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	const class UFortInteractContextInfo*         K2Node_Event_ContextInfo;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_19[0x7];
	class AFortPickup*                            K2Node_DynamicCast_AsFort_Pickup;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_29[0x7];
	TSoftObjectPtr<class UObject>                 K2Node_CustomEvent_Asset;
	class UObject*                                K2Node_CustomEvent_Loaded;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_61[0x7];
	class UFortItemDefinition*                    CallFunc_GetItemDefinitionBP_ReturnValue;
	class UFortPlayerAugmentItemDefinition*       K2Node_DynamicCast_AsFort_Player_Augment_Item_Definition;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	EFortRarity                                   CallFunc_GetRarity_ReturnValue;
	uint8                                         Pad_7A[0x6];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_89[0x7];
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_14C[0x4];
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;
	class UObject*                                Temp_object_Variable;
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;
	bool                                          K2Node_DynamicCast_bSuccess_2;
};
static_assert(alignof(WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator) == 0x000008, "Wrong alignment on WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator");
static_assert(sizeof(WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator) == 0x000170, "Wrong size on WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator");
static_assert(offsetof(WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator, EntryPoint) == 0x000000, "Member 'WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator, K2Node_Event_ContextInfo) == 0x000008, "Member 'WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator::K2Node_Event_ContextInfo' has a wrong offset!");
static_assert(offsetof(WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator, K2Node_DynamicCast_AsFort_Pickup) == 0x000020, "Member 'WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator::K2Node_DynamicCast_AsFort_Pickup' has a wrong offset!");
static_assert(offsetof(WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator, K2Node_CustomEvent_Asset) == 0x000030, "Member 'WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator::K2Node_CustomEvent_Asset' has a wrong offset!");
static_assert(offsetof(WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator, K2Node_CustomEvent_Loaded) == 0x000058, "Member 'WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator, CallFunc_IsValid_ReturnValue_1) == 0x000060, "Member 'WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator, CallFunc_GetItemDefinitionBP_ReturnValue) == 0x000068, "Member 'WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator::CallFunc_GetItemDefinitionBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator, K2Node_DynamicCast_AsFort_Player_Augment_Item_Definition) == 0x000070, "Member 'WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator::K2Node_DynamicCast_AsFort_Player_Augment_Item_Definition' has a wrong offset!");
static_assert(offsetof(WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator, K2Node_DynamicCast_bSuccess_1) == 0x000078, "Member 'WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator, CallFunc_GetRarity_ReturnValue) == 0x000079, "Member 'WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator::CallFunc_GetRarity_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000080, "Member 'WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator, K2Node_SwitchEnum_CmpSuccess) == 0x000088, "Member 'WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator, K2Node_MakeStruct_GameplayEventData) == 0x000090, "Member 'WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator, K2Node_CreateDelegate_OutputDelegate) == 0x000140, "Member 'WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator, CallFunc_GetOwningPlayer_ReturnValue) == 0x000150, "Member 'WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator, Temp_object_Variable) == 0x000158, "Member 'WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator, K2Node_DynamicCast_AsTexture_2D) == 0x000160, "Member 'WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator, K2Node_DynamicCast_bSuccess_2) == 0x000168, "Member 'WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

struct WBP_Augments_InteractionIndicator_C_GetInteractText final
{
public:
	class FText                                   InteractText_0;
	bool                                          Result;
	uint8                                         Pad_19[0x7];
	class FText                                   CallFunc_GetInteractText_InteractText;
	bool                                          CallFunc_GetInteractText_Result;
};
static_assert(alignof(WBP_Augments_InteractionIndicator_C_GetInteractText) == 0x000008, "Wrong alignment on WBP_Augments_InteractionIndicator_C_GetInteractText");
static_assert(sizeof(WBP_Augments_InteractionIndicator_C_GetInteractText) == 0x000040, "Wrong size on WBP_Augments_InteractionIndicator_C_GetInteractText");
static_assert(offsetof(WBP_Augments_InteractionIndicator_C_GetInteractText, InteractText_0) == 0x000000, "Member 'WBP_Augments_InteractionIndicator_C_GetInteractText::InteractText_0' has a wrong offset!");
static_assert(offsetof(WBP_Augments_InteractionIndicator_C_GetInteractText, Result) == 0x000018, "Member 'WBP_Augments_InteractionIndicator_C_GetInteractText::Result' has a wrong offset!");
static_assert(offsetof(WBP_Augments_InteractionIndicator_C_GetInteractText, CallFunc_GetInteractText_InteractText) == 0x000020, "Member 'WBP_Augments_InteractionIndicator_C_GetInteractText::CallFunc_GetInteractText_InteractText' has a wrong offset!");
static_assert(offsetof(WBP_Augments_InteractionIndicator_C_GetInteractText, CallFunc_GetInteractText_Result) == 0x000038, "Member 'WBP_Augments_InteractionIndicator_C_GetInteractText::CallFunc_GetInteractText_Result' has a wrong offset!");

struct WBP_Augments_InteractionIndicator_C_GetShowErrorsUsingDefaultWidget final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(WBP_Augments_InteractionIndicator_C_GetShowErrorsUsingDefaultWidget) == 0x000001, "Wrong alignment on WBP_Augments_InteractionIndicator_C_GetShowErrorsUsingDefaultWidget");
static_assert(sizeof(WBP_Augments_InteractionIndicator_C_GetShowErrorsUsingDefaultWidget) == 0x000001, "Wrong size on WBP_Augments_InteractionIndicator_C_GetShowErrorsUsingDefaultWidget");
static_assert(offsetof(WBP_Augments_InteractionIndicator_C_GetShowErrorsUsingDefaultWidget, ReturnValue) == 0x000000, "Member 'WBP_Augments_InteractionIndicator_C_GetShowErrorsUsingDefaultWidget::ReturnValue' has a wrong offset!");

struct WBP_Augments_InteractionIndicator_C_OnContextInfoUpdated final
{
public:
	const class UFortInteractContextInfo*         ContextInfo;
};
static_assert(alignof(WBP_Augments_InteractionIndicator_C_OnContextInfoUpdated) == 0x000008, "Wrong alignment on WBP_Augments_InteractionIndicator_C_OnContextInfoUpdated");
static_assert(sizeof(WBP_Augments_InteractionIndicator_C_OnContextInfoUpdated) == 0x000008, "Wrong size on WBP_Augments_InteractionIndicator_C_OnContextInfoUpdated");
static_assert(offsetof(WBP_Augments_InteractionIndicator_C_OnContextInfoUpdated, ContextInfo) == 0x000000, "Member 'WBP_Augments_InteractionIndicator_C_OnContextInfoUpdated::ContextInfo' has a wrong offset!");

struct WBP_Augments_InteractionIndicator_C_OnLoaded_2E66591C48A272F0C04BFB94B42C632F final
{
public:
	class UObject*                                Loaded;
};
static_assert(alignof(WBP_Augments_InteractionIndicator_C_OnLoaded_2E66591C48A272F0C04BFB94B42C632F) == 0x000008, "Wrong alignment on WBP_Augments_InteractionIndicator_C_OnLoaded_2E66591C48A272F0C04BFB94B42C632F");
static_assert(sizeof(WBP_Augments_InteractionIndicator_C_OnLoaded_2E66591C48A272F0C04BFB94B42C632F) == 0x000008, "Wrong size on WBP_Augments_InteractionIndicator_C_OnLoaded_2E66591C48A272F0C04BFB94B42C632F");
static_assert(offsetof(WBP_Augments_InteractionIndicator_C_OnLoaded_2E66591C48A272F0C04BFB94B42C632F, Loaded) == 0x000000, "Member 'WBP_Augments_InteractionIndicator_C_OnLoaded_2E66591C48A272F0C04BFB94B42C632F::Loaded' has a wrong offset!");

struct WBP_Augments_InteractionIndicator_C_SetAugmentIcon final
{
public:
	TSoftObjectPtr<class UObject>                 Asset;
};
static_assert(alignof(WBP_Augments_InteractionIndicator_C_SetAugmentIcon) == 0x000008, "Wrong alignment on WBP_Augments_InteractionIndicator_C_SetAugmentIcon");
static_assert(sizeof(WBP_Augments_InteractionIndicator_C_SetAugmentIcon) == 0x000028, "Wrong size on WBP_Augments_InteractionIndicator_C_SetAugmentIcon");
static_assert(offsetof(WBP_Augments_InteractionIndicator_C_SetAugmentIcon, Asset) == 0x000000, "Member 'WBP_Augments_InteractionIndicator_C_SetAugmentIcon::Asset' has a wrong offset!");

}
