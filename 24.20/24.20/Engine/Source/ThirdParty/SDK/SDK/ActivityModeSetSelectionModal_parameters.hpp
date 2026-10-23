#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct ActivityModeSetSelectionModal_C_BndEvt__ActivityModeSetSelectionModal_ActivityPrivacyButton_K2Node_ComponentBoundEvent_4_OnPrivacyAvailableChanged__DelegateSignature final
{
public:
	bool                                          IsAvailable;
};
static_assert(alignof(ActivityModeSetSelectionModal_C_BndEvt__ActivityModeSetSelectionModal_ActivityPrivacyButton_K2Node_ComponentBoundEvent_4_OnPrivacyAvailableChanged__DelegateSignature) == 0x000001, "Wrong alignment on ActivityModeSetSelectionModal_C_BndEvt__ActivityModeSetSelectionModal_ActivityPrivacyButton_K2Node_ComponentBoundEvent_4_OnPrivacyAvailableChanged__DelegateSignature");
static_assert(sizeof(ActivityModeSetSelectionModal_C_BndEvt__ActivityModeSetSelectionModal_ActivityPrivacyButton_K2Node_ComponentBoundEvent_4_OnPrivacyAvailableChanged__DelegateSignature) == 0x000001, "Wrong size on ActivityModeSetSelectionModal_C_BndEvt__ActivityModeSetSelectionModal_ActivityPrivacyButton_K2Node_ComponentBoundEvent_4_OnPrivacyAvailableChanged__DelegateSignature");
static_assert(offsetof(ActivityModeSetSelectionModal_C_BndEvt__ActivityModeSetSelectionModal_ActivityPrivacyButton_K2Node_ComponentBoundEvent_4_OnPrivacyAvailableChanged__DelegateSignature, IsAvailable) == 0x000000, "Member 'ActivityModeSetSelectionModal_C_BndEvt__ActivityModeSetSelectionModal_ActivityPrivacyButton_K2Node_ComponentBoundEvent_4_OnPrivacyAvailableChanged__DelegateSignature::IsAvailable' has a wrong offset!");

struct ActivityModeSetSelectionModal_C_ExecuteUbergraph_ActivityModeSetSelectionModal final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
	class UTexture*                               CallFunc_K2_GetTextureParameterValue_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	bool                                          K2Node_Event_bIsLoading;
	uint8                                         Pad_35[0x3];
	const class UTexture*                         K2Node_Event_Texture;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          K2Node_ComponentBoundEvent_IsAvailable;
	uint8                                         Pad_43[0x1];
	int32                                         CallFunc_SelectInt_ReturnValue;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
};
static_assert(alignof(ActivityModeSetSelectionModal_C_ExecuteUbergraph_ActivityModeSetSelectionModal) == 0x000008, "Wrong alignment on ActivityModeSetSelectionModal_C_ExecuteUbergraph_ActivityModeSetSelectionModal");
static_assert(sizeof(ActivityModeSetSelectionModal_C_ExecuteUbergraph_ActivityModeSetSelectionModal) == 0x000058, "Wrong size on ActivityModeSetSelectionModal_C_ExecuteUbergraph_ActivityModeSetSelectionModal");
static_assert(offsetof(ActivityModeSetSelectionModal_C_ExecuteUbergraph_ActivityModeSetSelectionModal, EntryPoint) == 0x000000, "Member 'ActivityModeSetSelectionModal_C_ExecuteUbergraph_ActivityModeSetSelectionModal::EntryPoint' has a wrong offset!");
static_assert(offsetof(ActivityModeSetSelectionModal_C_ExecuteUbergraph_ActivityModeSetSelectionModal, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'ActivityModeSetSelectionModal_C_ExecuteUbergraph_ActivityModeSetSelectionModal::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivityModeSetSelectionModal_C_ExecuteUbergraph_ActivityModeSetSelectionModal, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'ActivityModeSetSelectionModal_C_ExecuteUbergraph_ActivityModeSetSelectionModal::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivityModeSetSelectionModal_C_ExecuteUbergraph_ActivityModeSetSelectionModal, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000018, "Member 'ActivityModeSetSelectionModal_C_ExecuteUbergraph_ActivityModeSetSelectionModal::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ActivityModeSetSelectionModal_C_ExecuteUbergraph_ActivityModeSetSelectionModal, CallFunc_K2_GetTextureParameterValue_ReturnValue) == 0x000020, "Member 'ActivityModeSetSelectionModal_C_ExecuteUbergraph_ActivityModeSetSelectionModal::CallFunc_K2_GetTextureParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivityModeSetSelectionModal_C_ExecuteUbergraph_ActivityModeSetSelectionModal, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'ActivityModeSetSelectionModal_C_ExecuteUbergraph_ActivityModeSetSelectionModal::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ActivityModeSetSelectionModal_C_ExecuteUbergraph_ActivityModeSetSelectionModal, K2Node_Event_bIsLoading) == 0x000034, "Member 'ActivityModeSetSelectionModal_C_ExecuteUbergraph_ActivityModeSetSelectionModal::K2Node_Event_bIsLoading' has a wrong offset!");
static_assert(offsetof(ActivityModeSetSelectionModal_C_ExecuteUbergraph_ActivityModeSetSelectionModal, K2Node_Event_Texture) == 0x000038, "Member 'ActivityModeSetSelectionModal_C_ExecuteUbergraph_ActivityModeSetSelectionModal::K2Node_Event_Texture' has a wrong offset!");
static_assert(offsetof(ActivityModeSetSelectionModal_C_ExecuteUbergraph_ActivityModeSetSelectionModal, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'ActivityModeSetSelectionModal_C_ExecuteUbergraph_ActivityModeSetSelectionModal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivityModeSetSelectionModal_C_ExecuteUbergraph_ActivityModeSetSelectionModal, CallFunc_Not_PreBool_ReturnValue) == 0x000041, "Member 'ActivityModeSetSelectionModal_C_ExecuteUbergraph_ActivityModeSetSelectionModal::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivityModeSetSelectionModal_C_ExecuteUbergraph_ActivityModeSetSelectionModal, K2Node_ComponentBoundEvent_IsAvailable) == 0x000042, "Member 'ActivityModeSetSelectionModal_C_ExecuteUbergraph_ActivityModeSetSelectionModal::K2Node_ComponentBoundEvent_IsAvailable' has a wrong offset!");
static_assert(offsetof(ActivityModeSetSelectionModal_C_ExecuteUbergraph_ActivityModeSetSelectionModal, CallFunc_SelectInt_ReturnValue) == 0x000044, "Member 'ActivityModeSetSelectionModal_C_ExecuteUbergraph_ActivityModeSetSelectionModal::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivityModeSetSelectionModal_C_ExecuteUbergraph_ActivityModeSetSelectionModal, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000048, "Member 'ActivityModeSetSelectionModal_C_ExecuteUbergraph_ActivityModeSetSelectionModal::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivityModeSetSelectionModal_C_ExecuteUbergraph_ActivityModeSetSelectionModal, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000050, "Member 'ActivityModeSetSelectionModal_C_ExecuteUbergraph_ActivityModeSetSelectionModal::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

struct ActivityModeSetSelectionModal_C_OnPreviewImageChanged final
{
public:
	bool                                          bIsLoading;
	uint8                                         Pad_1[0x7];
	const class UTexture*                         Texture;
};
static_assert(alignof(ActivityModeSetSelectionModal_C_OnPreviewImageChanged) == 0x000008, "Wrong alignment on ActivityModeSetSelectionModal_C_OnPreviewImageChanged");
static_assert(sizeof(ActivityModeSetSelectionModal_C_OnPreviewImageChanged) == 0x000010, "Wrong size on ActivityModeSetSelectionModal_C_OnPreviewImageChanged");
static_assert(offsetof(ActivityModeSetSelectionModal_C_OnPreviewImageChanged, bIsLoading) == 0x000000, "Member 'ActivityModeSetSelectionModal_C_OnPreviewImageChanged::bIsLoading' has a wrong offset!");
static_assert(offsetof(ActivityModeSetSelectionModal_C_OnPreviewImageChanged, Texture) == 0x000008, "Member 'ActivityModeSetSelectionModal_C_OnPreviewImageChanged::Texture' has a wrong offset!");

struct ActivityModeSetSelectionModal_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;
};
static_assert(alignof(ActivityModeSetSelectionModal_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on ActivityModeSetSelectionModal_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(ActivityModeSetSelectionModal_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong size on ActivityModeSetSelectionModal_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(ActivityModeSetSelectionModal_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'ActivityModeSetSelectionModal_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");

}
