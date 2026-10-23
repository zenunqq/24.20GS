#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct SidebarLfgState2ListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature final
{
public:
	bool                                          bIsOpen;
};
static_assert(alignof(SidebarLfgState2ListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature) == 0x000001, "Wrong alignment on SidebarLfgState2ListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");
static_assert(sizeof(SidebarLfgState2ListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature) == 0x000001, "Wrong size on SidebarLfgState2ListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");
static_assert(offsetof(SidebarLfgState2ListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature, bIsOpen) == 0x000000, "Member 'SidebarLfgState2ListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature::bIsOpen' has a wrong offset!");

struct SidebarLfgState2ListEntry_C_ExecuteUbergraph_SidebarLfgState2ListEntry final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	ELfgState                                     K2Node_Event_NewLfgState;
	ESlateVisibility                              K2Node_Event_BodyVisibility;
	uint8                                         Pad_7[0x1];
	class FText                                   K2Node_Event_StateText;
	class FText                                   K2Node_Event_StateButton;
	bool                                          K2Node_ComponentBoundEvent_bIsOpen;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_3A[0x6];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;
	struct FMargin                                K2Node_MakeStruct_Margin;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
};
static_assert(alignof(SidebarLfgState2ListEntry_C_ExecuteUbergraph_SidebarLfgState2ListEntry) == 0x000008, "Wrong alignment on SidebarLfgState2ListEntry_C_ExecuteUbergraph_SidebarLfgState2ListEntry");
static_assert(sizeof(SidebarLfgState2ListEntry_C_ExecuteUbergraph_SidebarLfgState2ListEntry) == 0x000068, "Wrong size on SidebarLfgState2ListEntry_C_ExecuteUbergraph_SidebarLfgState2ListEntry");
static_assert(offsetof(SidebarLfgState2ListEntry_C_ExecuteUbergraph_SidebarLfgState2ListEntry, EntryPoint) == 0x000000, "Member 'SidebarLfgState2ListEntry_C_ExecuteUbergraph_SidebarLfgState2ListEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(SidebarLfgState2ListEntry_C_ExecuteUbergraph_SidebarLfgState2ListEntry, CallFunc_IsMobileGame_ReturnValue) == 0x000004, "Member 'SidebarLfgState2ListEntry_C_ExecuteUbergraph_SidebarLfgState2ListEntry::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarLfgState2ListEntry_C_ExecuteUbergraph_SidebarLfgState2ListEntry, K2Node_Event_NewLfgState) == 0x000005, "Member 'SidebarLfgState2ListEntry_C_ExecuteUbergraph_SidebarLfgState2ListEntry::K2Node_Event_NewLfgState' has a wrong offset!");
static_assert(offsetof(SidebarLfgState2ListEntry_C_ExecuteUbergraph_SidebarLfgState2ListEntry, K2Node_Event_BodyVisibility) == 0x000006, "Member 'SidebarLfgState2ListEntry_C_ExecuteUbergraph_SidebarLfgState2ListEntry::K2Node_Event_BodyVisibility' has a wrong offset!");
static_assert(offsetof(SidebarLfgState2ListEntry_C_ExecuteUbergraph_SidebarLfgState2ListEntry, K2Node_Event_StateText) == 0x000008, "Member 'SidebarLfgState2ListEntry_C_ExecuteUbergraph_SidebarLfgState2ListEntry::K2Node_Event_StateText' has a wrong offset!");
static_assert(offsetof(SidebarLfgState2ListEntry_C_ExecuteUbergraph_SidebarLfgState2ListEntry, K2Node_Event_StateButton) == 0x000020, "Member 'SidebarLfgState2ListEntry_C_ExecuteUbergraph_SidebarLfgState2ListEntry::K2Node_Event_StateButton' has a wrong offset!");
static_assert(offsetof(SidebarLfgState2ListEntry_C_ExecuteUbergraph_SidebarLfgState2ListEntry, K2Node_ComponentBoundEvent_bIsOpen) == 0x000038, "Member 'SidebarLfgState2ListEntry_C_ExecuteUbergraph_SidebarLfgState2ListEntry::K2Node_ComponentBoundEvent_bIsOpen' has a wrong offset!");
static_assert(offsetof(SidebarLfgState2ListEntry_C_ExecuteUbergraph_SidebarLfgState2ListEntry, K2Node_Event_IsDesignTime) == 0x000039, "Member 'SidebarLfgState2ListEntry_C_ExecuteUbergraph_SidebarLfgState2ListEntry::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(SidebarLfgState2ListEntry_C_ExecuteUbergraph_SidebarLfgState2ListEntry, CallFunc_PlayAnimation_ReturnValue) == 0x000040, "Member 'SidebarLfgState2ListEntry_C_ExecuteUbergraph_SidebarLfgState2ListEntry::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarLfgState2ListEntry_C_ExecuteUbergraph_SidebarLfgState2ListEntry, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000048, "Member 'SidebarLfgState2ListEntry_C_ExecuteUbergraph_SidebarLfgState2ListEntry::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarLfgState2ListEntry_C_ExecuteUbergraph_SidebarLfgState2ListEntry, K2Node_MakeStruct_Margin) == 0x000050, "Member 'SidebarLfgState2ListEntry_C_ExecuteUbergraph_SidebarLfgState2ListEntry::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(SidebarLfgState2ListEntry_C_ExecuteUbergraph_SidebarLfgState2ListEntry, CallFunc_PlayAnimation_ReturnValue_1) == 0x000060, "Member 'SidebarLfgState2ListEntry_C_ExecuteUbergraph_SidebarLfgState2ListEntry::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

struct SidebarLfgState2ListEntry_C_GetIcon final
{
public:
	ELfgState                                     LfgState;
	uint8                                         Pad_1[0x7];
	class UTexture*                               Temp_object_Variable;
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;
	uint8                                         Pad_11[0x7];
	class UTexture*                               Temp_object_Variable_1;
	class UTexture*                               Temp_object_Variable_2;
	class UTexture*                               Temp_object_Variable_3;
	class UTexture*                               Temp_object_Variable_4;
	class UTexture*                               Temp_object_Variable_5;
	class UTexture*                               Temp_object_Variable_6;
	class UTexture*                               Temp_object_Variable_7;
	class UTexture*                               Temp_object_Variable_8;
	class UTexture*                               Temp_object_Variable_9;
	class UTexture*                               Temp_object_Variable_10;
	class UTexture*                               Temp_object_Variable_11;
	class UTexture*                               Temp_object_Variable_12;
	class UTexture*                               Temp_object_Variable_13;
	ELfgState                                     Temp_byte_Variable;
	uint8                                         Pad_81[0x7];
	class UTexture*                               K2Node_Select_Default;
};
static_assert(alignof(SidebarLfgState2ListEntry_C_GetIcon) == 0x000008, "Wrong alignment on SidebarLfgState2ListEntry_C_GetIcon");
static_assert(sizeof(SidebarLfgState2ListEntry_C_GetIcon) == 0x000090, "Wrong size on SidebarLfgState2ListEntry_C_GetIcon");
static_assert(offsetof(SidebarLfgState2ListEntry_C_GetIcon, LfgState) == 0x000000, "Member 'SidebarLfgState2ListEntry_C_GetIcon::LfgState' has a wrong offset!");
static_assert(offsetof(SidebarLfgState2ListEntry_C_GetIcon, Temp_object_Variable) == 0x000008, "Member 'SidebarLfgState2ListEntry_C_GetIcon::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(SidebarLfgState2ListEntry_C_GetIcon, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000010, "Member 'SidebarLfgState2ListEntry_C_GetIcon::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarLfgState2ListEntry_C_GetIcon, Temp_object_Variable_1) == 0x000018, "Member 'SidebarLfgState2ListEntry_C_GetIcon::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(SidebarLfgState2ListEntry_C_GetIcon, Temp_object_Variable_2) == 0x000020, "Member 'SidebarLfgState2ListEntry_C_GetIcon::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(SidebarLfgState2ListEntry_C_GetIcon, Temp_object_Variable_3) == 0x000028, "Member 'SidebarLfgState2ListEntry_C_GetIcon::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(SidebarLfgState2ListEntry_C_GetIcon, Temp_object_Variable_4) == 0x000030, "Member 'SidebarLfgState2ListEntry_C_GetIcon::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(SidebarLfgState2ListEntry_C_GetIcon, Temp_object_Variable_5) == 0x000038, "Member 'SidebarLfgState2ListEntry_C_GetIcon::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(SidebarLfgState2ListEntry_C_GetIcon, Temp_object_Variable_6) == 0x000040, "Member 'SidebarLfgState2ListEntry_C_GetIcon::Temp_object_Variable_6' has a wrong offset!");
static_assert(offsetof(SidebarLfgState2ListEntry_C_GetIcon, Temp_object_Variable_7) == 0x000048, "Member 'SidebarLfgState2ListEntry_C_GetIcon::Temp_object_Variable_7' has a wrong offset!");
static_assert(offsetof(SidebarLfgState2ListEntry_C_GetIcon, Temp_object_Variable_8) == 0x000050, "Member 'SidebarLfgState2ListEntry_C_GetIcon::Temp_object_Variable_8' has a wrong offset!");
static_assert(offsetof(SidebarLfgState2ListEntry_C_GetIcon, Temp_object_Variable_9) == 0x000058, "Member 'SidebarLfgState2ListEntry_C_GetIcon::Temp_object_Variable_9' has a wrong offset!");
static_assert(offsetof(SidebarLfgState2ListEntry_C_GetIcon, Temp_object_Variable_10) == 0x000060, "Member 'SidebarLfgState2ListEntry_C_GetIcon::Temp_object_Variable_10' has a wrong offset!");
static_assert(offsetof(SidebarLfgState2ListEntry_C_GetIcon, Temp_object_Variable_11) == 0x000068, "Member 'SidebarLfgState2ListEntry_C_GetIcon::Temp_object_Variable_11' has a wrong offset!");
static_assert(offsetof(SidebarLfgState2ListEntry_C_GetIcon, Temp_object_Variable_12) == 0x000070, "Member 'SidebarLfgState2ListEntry_C_GetIcon::Temp_object_Variable_12' has a wrong offset!");
static_assert(offsetof(SidebarLfgState2ListEntry_C_GetIcon, Temp_object_Variable_13) == 0x000078, "Member 'SidebarLfgState2ListEntry_C_GetIcon::Temp_object_Variable_13' has a wrong offset!");
static_assert(offsetof(SidebarLfgState2ListEntry_C_GetIcon, Temp_byte_Variable) == 0x000080, "Member 'SidebarLfgState2ListEntry_C_GetIcon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SidebarLfgState2ListEntry_C_GetIcon, K2Node_Select_Default) == 0x000088, "Member 'SidebarLfgState2ListEntry_C_GetIcon::K2Node_Select_Default' has a wrong offset!");

struct SidebarLfgState2ListEntry_C_OnStateChanged final
{
public:
	ELfgState                                     NewLfgState;
	ESlateVisibility                              BodyVisibility;
	uint8                                         Pad_2[0x6];
	class FText                                   StateText;
	class FText                                   StateButton;
};
static_assert(alignof(SidebarLfgState2ListEntry_C_OnStateChanged) == 0x000008, "Wrong alignment on SidebarLfgState2ListEntry_C_OnStateChanged");
static_assert(sizeof(SidebarLfgState2ListEntry_C_OnStateChanged) == 0x000038, "Wrong size on SidebarLfgState2ListEntry_C_OnStateChanged");
static_assert(offsetof(SidebarLfgState2ListEntry_C_OnStateChanged, NewLfgState) == 0x000000, "Member 'SidebarLfgState2ListEntry_C_OnStateChanged::NewLfgState' has a wrong offset!");
static_assert(offsetof(SidebarLfgState2ListEntry_C_OnStateChanged, BodyVisibility) == 0x000001, "Member 'SidebarLfgState2ListEntry_C_OnStateChanged::BodyVisibility' has a wrong offset!");
static_assert(offsetof(SidebarLfgState2ListEntry_C_OnStateChanged, StateText) == 0x000008, "Member 'SidebarLfgState2ListEntry_C_OnStateChanged::StateText' has a wrong offset!");
static_assert(offsetof(SidebarLfgState2ListEntry_C_OnStateChanged, StateButton) == 0x000020, "Member 'SidebarLfgState2ListEntry_C_OnStateChanged::StateButton' has a wrong offset!");

struct SidebarLfgState2ListEntry_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(SidebarLfgState2ListEntry_C_PreConstruct) == 0x000001, "Wrong alignment on SidebarLfgState2ListEntry_C_PreConstruct");
static_assert(sizeof(SidebarLfgState2ListEntry_C_PreConstruct) == 0x000001, "Wrong size on SidebarLfgState2ListEntry_C_PreConstruct");
static_assert(offsetof(SidebarLfgState2ListEntry_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'SidebarLfgState2ListEntry_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct SidebarLfgState2ListEntry_C_UpdateButtonVisibility final
{
public:
	ELfgState                                     LfgState;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
};
static_assert(alignof(SidebarLfgState2ListEntry_C_UpdateButtonVisibility) == 0x000001, "Wrong alignment on SidebarLfgState2ListEntry_C_UpdateButtonVisibility");
static_assert(sizeof(SidebarLfgState2ListEntry_C_UpdateButtonVisibility) == 0x000002, "Wrong size on SidebarLfgState2ListEntry_C_UpdateButtonVisibility");
static_assert(offsetof(SidebarLfgState2ListEntry_C_UpdateButtonVisibility, LfgState) == 0x000000, "Member 'SidebarLfgState2ListEntry_C_UpdateButtonVisibility::LfgState' has a wrong offset!");
static_assert(offsetof(SidebarLfgState2ListEntry_C_UpdateButtonVisibility, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000001, "Member 'SidebarLfgState2ListEntry_C_UpdateButtonVisibility::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

}
