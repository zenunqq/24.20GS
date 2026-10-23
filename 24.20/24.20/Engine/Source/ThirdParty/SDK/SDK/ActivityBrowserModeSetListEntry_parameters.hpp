#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CommonInput_structs.hpp"

namespace SDK::Params
{

struct ActivityBrowserModeSetListEntry_C_BP_OnItemSelectionChanged final
{
public:
	bool                                          bIsSelected;
};
static_assert(alignof(ActivityBrowserModeSetListEntry_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong alignment on ActivityBrowserModeSetListEntry_C_BP_OnItemSelectionChanged");
static_assert(sizeof(ActivityBrowserModeSetListEntry_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong size on ActivityBrowserModeSetListEntry_C_BP_OnItemSelectionChanged");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_BP_OnItemSelectionChanged, bIsSelected) == 0x000000, "Member 'ActivityBrowserModeSetListEntry_C_BP_OnItemSelectionChanged::bIsSelected' has a wrong offset!");

struct ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	bool                                          K2Node_Event_bIsLoading;
	uint8                                         Pad_11[0x7];
	const class UTexture*                         K2Node_Event_Texture;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_22[0x6];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UTexture*                               CallFunc_K2_GetTextureParameterValue_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	bool                                          K2Node_Event_bIsSelected;
	uint8                                         Pad_41[0x7];
	class FText                                   K2Node_Event_ActivityName;
	bool                                          K2Node_Event_IsSaved;
	bool                                          K2Node_CustomEvent_IsHovered;
	uint8                                         Pad_62[0x6];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;
	uint8                                         Pad_71[0x7];
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;
	uint8                                         Pad_82[0x2];
	int32                                         K2Node_Event_PartySize;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_89[0x3];
	struct FFocusEvent                            K2Node_Event_InFocusEvent;
	uint8                                         Pad_94[0x4];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_2;
	class UTexture*                               CallFunc_K2_GetTextureParameterValue_ReturnValue_1;
};
static_assert(alignof(ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry) == 0x000008, "Wrong alignment on ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry");
static_assert(sizeof(ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry) == 0x0000B0, "Wrong size on ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry, EntryPoint) == 0x000000, "Member 'ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry, K2Node_Event_bIsLoading) == 0x000010, "Member 'ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry::K2Node_Event_bIsLoading' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry, K2Node_Event_Texture) == 0x000018, "Member 'ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry::K2Node_Event_Texture' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry, CallFunc_Not_PreBool_ReturnValue) == 0x000021, "Member 'ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000028, "Member 'ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry, CallFunc_K2_GetTextureParameterValue_ReturnValue) == 0x000030, "Member 'ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry::CallFunc_K2_GetTextureParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry, CallFunc_PlayAnimationForward_ReturnValue) == 0x000038, "Member 'ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry, K2Node_Event_bIsSelected) == 0x000040, "Member 'ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry::K2Node_Event_bIsSelected' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry, K2Node_Event_ActivityName) == 0x000048, "Member 'ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry::K2Node_Event_ActivityName' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry, K2Node_Event_IsSaved) == 0x000060, "Member 'ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry::K2Node_Event_IsSaved' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry, K2Node_CustomEvent_IsHovered) == 0x000061, "Member 'ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry::K2Node_CustomEvent_IsHovered' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry, CallFunc_PlayAnimation_ReturnValue) == 0x000068, "Member 'ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000070, "Member 'ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000078, "Member 'ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry, CallFunc_GetCurrentInputType_ReturnValue) == 0x000080, "Member 'ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000081, "Member 'ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry, K2Node_Event_PartySize) == 0x000084, "Member 'ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry::K2Node_Event_PartySize' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry, K2Node_Event_IsDesignTime) == 0x000088, "Member 'ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry, K2Node_Event_InFocusEvent) == 0x00008C, "Member 'ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry::K2Node_Event_InFocusEvent' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000098, "Member 'ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry, CallFunc_GetDynamicMaterial_ReturnValue_2) == 0x0000A0, "Member 'ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry::CallFunc_GetDynamicMaterial_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry, CallFunc_K2_GetTextureParameterValue_ReturnValue_1) == 0x0000A8, "Member 'ActivityBrowserModeSetListEntry_C_ExecuteUbergraph_ActivityBrowserModeSetListEntry::CallFunc_K2_GetTextureParameterValue_ReturnValue_1' has a wrong offset!");

struct ActivityBrowserModeSetListEntry_C_OnActivityNameSet final
{
public:
	class FText                                   ActivityName;
};
static_assert(alignof(ActivityBrowserModeSetListEntry_C_OnActivityNameSet) == 0x000008, "Wrong alignment on ActivityBrowserModeSetListEntry_C_OnActivityNameSet");
static_assert(sizeof(ActivityBrowserModeSetListEntry_C_OnActivityNameSet) == 0x000018, "Wrong size on ActivityBrowserModeSetListEntry_C_OnActivityNameSet");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_OnActivityNameSet, ActivityName) == 0x000000, "Member 'ActivityBrowserModeSetListEntry_C_OnActivityNameSet::ActivityName' has a wrong offset!");

struct ActivityBrowserModeSetListEntry_C_OnFocusLost final
{
public:
	struct FFocusEvent                            InFocusEvent;
};
static_assert(alignof(ActivityBrowserModeSetListEntry_C_OnFocusLost) == 0x000004, "Wrong alignment on ActivityBrowserModeSetListEntry_C_OnFocusLost");
static_assert(sizeof(ActivityBrowserModeSetListEntry_C_OnFocusLost) == 0x000008, "Wrong size on ActivityBrowserModeSetListEntry_C_OnFocusLost");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_OnFocusLost, InFocusEvent) == 0x000000, "Member 'ActivityBrowserModeSetListEntry_C_OnFocusLost::InFocusEvent' has a wrong offset!");

struct ActivityBrowserModeSetListEntry_C_OnPartySizeChanged final
{
public:
	int32                                         PartySize;
};
static_assert(alignof(ActivityBrowserModeSetListEntry_C_OnPartySizeChanged) == 0x000004, "Wrong alignment on ActivityBrowserModeSetListEntry_C_OnPartySizeChanged");
static_assert(sizeof(ActivityBrowserModeSetListEntry_C_OnPartySizeChanged) == 0x000004, "Wrong size on ActivityBrowserModeSetListEntry_C_OnPartySizeChanged");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_OnPartySizeChanged, PartySize) == 0x000000, "Member 'ActivityBrowserModeSetListEntry_C_OnPartySizeChanged::PartySize' has a wrong offset!");

struct ActivityBrowserModeSetListEntry_C_OnPreviewImageChanged final
{
public:
	bool                                          bIsLoading;
	uint8                                         Pad_1[0x7];
	const class UTexture*                         Texture;
};
static_assert(alignof(ActivityBrowserModeSetListEntry_C_OnPreviewImageChanged) == 0x000008, "Wrong alignment on ActivityBrowserModeSetListEntry_C_OnPreviewImageChanged");
static_assert(sizeof(ActivityBrowserModeSetListEntry_C_OnPreviewImageChanged) == 0x000010, "Wrong size on ActivityBrowserModeSetListEntry_C_OnPreviewImageChanged");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_OnPreviewImageChanged, bIsLoading) == 0x000000, "Member 'ActivityBrowserModeSetListEntry_C_OnPreviewImageChanged::bIsLoading' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_OnPreviewImageChanged, Texture) == 0x000008, "Member 'ActivityBrowserModeSetListEntry_C_OnPreviewImageChanged::Texture' has a wrong offset!");

struct ActivityBrowserModeSetListEntry_C_OnSavedActivitySet final
{
public:
	bool                                          IsSaved;
};
static_assert(alignof(ActivityBrowserModeSetListEntry_C_OnSavedActivitySet) == 0x000001, "Wrong alignment on ActivityBrowserModeSetListEntry_C_OnSavedActivitySet");
static_assert(sizeof(ActivityBrowserModeSetListEntry_C_OnSavedActivitySet) == 0x000001, "Wrong size on ActivityBrowserModeSetListEntry_C_OnSavedActivitySet");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_OnSavedActivitySet, IsSaved) == 0x000000, "Member 'ActivityBrowserModeSetListEntry_C_OnSavedActivitySet::IsSaved' has a wrong offset!");

struct ActivityBrowserModeSetListEntry_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(ActivityBrowserModeSetListEntry_C_PreConstruct) == 0x000001, "Wrong alignment on ActivityBrowserModeSetListEntry_C_PreConstruct");
static_assert(sizeof(ActivityBrowserModeSetListEntry_C_PreConstruct) == 0x000001, "Wrong size on ActivityBrowserModeSetListEntry_C_PreConstruct");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ActivityBrowserModeSetListEntry_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct ActivityBrowserModeSetListEntry_C_RefreshDisabledState final
{
public:
	bool                                          Is;
	bool                                          IsActivityPreviouslyValid;
	EFortInvalidActivityReason                    Temp_byte_Variable;
	uint8                                         Pad_3[0x5];
	class FText                                   Temp_text_Variable;
	class FText                                   Temp_text_Variable_1;
	class FText                                   Temp_text_Variable_2;
	class FText                                   Temp_text_Variable_3;
	class FText                                   Temp_text_Variable_4;
	class FText                                   Temp_text_Variable_5;
	class FText                                   Temp_text_Variable_6;
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_B2[0x6];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	EFortInvalidActivityReason                    CallFunc_GetInvalidActivityReason_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_CA[0x6];
	class FText                                   K2Node_Select_Default;
};
static_assert(alignof(ActivityBrowserModeSetListEntry_C_RefreshDisabledState) == 0x000008, "Wrong alignment on ActivityBrowserModeSetListEntry_C_RefreshDisabledState");
static_assert(sizeof(ActivityBrowserModeSetListEntry_C_RefreshDisabledState) == 0x0000E8, "Wrong size on ActivityBrowserModeSetListEntry_C_RefreshDisabledState");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_RefreshDisabledState, Is) == 0x000000, "Member 'ActivityBrowserModeSetListEntry_C_RefreshDisabledState::Is' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_RefreshDisabledState, IsActivityPreviouslyValid) == 0x000001, "Member 'ActivityBrowserModeSetListEntry_C_RefreshDisabledState::IsActivityPreviouslyValid' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_RefreshDisabledState, Temp_byte_Variable) == 0x000002, "Member 'ActivityBrowserModeSetListEntry_C_RefreshDisabledState::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_RefreshDisabledState, Temp_text_Variable) == 0x000008, "Member 'ActivityBrowserModeSetListEntry_C_RefreshDisabledState::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_RefreshDisabledState, Temp_text_Variable_1) == 0x000020, "Member 'ActivityBrowserModeSetListEntry_C_RefreshDisabledState::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_RefreshDisabledState, Temp_text_Variable_2) == 0x000038, "Member 'ActivityBrowserModeSetListEntry_C_RefreshDisabledState::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_RefreshDisabledState, Temp_text_Variable_3) == 0x000050, "Member 'ActivityBrowserModeSetListEntry_C_RefreshDisabledState::Temp_text_Variable_3' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_RefreshDisabledState, Temp_text_Variable_4) == 0x000068, "Member 'ActivityBrowserModeSetListEntry_C_RefreshDisabledState::Temp_text_Variable_4' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_RefreshDisabledState, Temp_text_Variable_5) == 0x000080, "Member 'ActivityBrowserModeSetListEntry_C_RefreshDisabledState::Temp_text_Variable_5' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_RefreshDisabledState, Temp_text_Variable_6) == 0x000098, "Member 'ActivityBrowserModeSetListEntry_C_RefreshDisabledState::Temp_text_Variable_6' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_RefreshDisabledState, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x0000B0, "Member 'ActivityBrowserModeSetListEntry_C_RefreshDisabledState::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_RefreshDisabledState, CallFunc_Not_PreBool_ReturnValue) == 0x0000B1, "Member 'ActivityBrowserModeSetListEntry_C_RefreshDisabledState::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_RefreshDisabledState, CallFunc_PlayAnimationForward_ReturnValue) == 0x0000B8, "Member 'ActivityBrowserModeSetListEntry_C_RefreshDisabledState::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_RefreshDisabledState, CallFunc_PlayAnimationReverse_ReturnValue) == 0x0000C0, "Member 'ActivityBrowserModeSetListEntry_C_RefreshDisabledState::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_RefreshDisabledState, CallFunc_GetInvalidActivityReason_ReturnValue) == 0x0000C8, "Member 'ActivityBrowserModeSetListEntry_C_RefreshDisabledState::CallFunc_GetInvalidActivityReason_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_RefreshDisabledState, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000C9, "Member 'ActivityBrowserModeSetListEntry_C_RefreshDisabledState::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_RefreshDisabledState, K2Node_Select_Default) == 0x0000D0, "Member 'ActivityBrowserModeSetListEntry_C_RefreshDisabledState::K2Node_Select_Default' has a wrong offset!");

struct ActivityBrowserModeSetListEntry_C_ResetSetDisabledColorationAnimation final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
};
static_assert(alignof(ActivityBrowserModeSetListEntry_C_ResetSetDisabledColorationAnimation) == 0x000008, "Wrong alignment on ActivityBrowserModeSetListEntry_C_ResetSetDisabledColorationAnimation");
static_assert(sizeof(ActivityBrowserModeSetListEntry_C_ResetSetDisabledColorationAnimation) == 0x000008, "Wrong size on ActivityBrowserModeSetListEntry_C_ResetSetDisabledColorationAnimation");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_ResetSetDisabledColorationAnimation, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000000, "Member 'ActivityBrowserModeSetListEntry_C_ResetSetDisabledColorationAnimation::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

struct ActivityBrowserModeSetListEntry_C_SetHoveredState final
{
public:
	bool                                          IsHovered_0;
};
static_assert(alignof(ActivityBrowserModeSetListEntry_C_SetHoveredState) == 0x000001, "Wrong alignment on ActivityBrowserModeSetListEntry_C_SetHoveredState");
static_assert(sizeof(ActivityBrowserModeSetListEntry_C_SetHoveredState) == 0x000001, "Wrong size on ActivityBrowserModeSetListEntry_C_SetHoveredState");
static_assert(offsetof(ActivityBrowserModeSetListEntry_C_SetHoveredState, IsHovered_0) == 0x000000, "Member 'ActivityBrowserModeSetListEntry_C_SetHoveredState::IsHovered_0' has a wrong offset!");

}
