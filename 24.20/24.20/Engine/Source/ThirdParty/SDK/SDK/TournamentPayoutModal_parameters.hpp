#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct TournamentPayoutModal_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(TournamentPayoutModal_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on TournamentPayoutModal_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(TournamentPayoutModal_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on TournamentPayoutModal_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(TournamentPayoutModal_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'TournamentPayoutModal_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct TournamentPayoutModal_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(TournamentPayoutModal_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on TournamentPayoutModal_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(TournamentPayoutModal_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on TournamentPayoutModal_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(TournamentPayoutModal_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'TournamentPayoutModal_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct TournamentPayoutModal_C_EmptyFunction final
{
public:
	bool                                          Handled;
};
static_assert(alignof(TournamentPayoutModal_C_EmptyFunction) == 0x000001, "Wrong alignment on TournamentPayoutModal_C_EmptyFunction");
static_assert(sizeof(TournamentPayoutModal_C_EmptyFunction) == 0x000001, "Wrong size on TournamentPayoutModal_C_EmptyFunction");
static_assert(offsetof(TournamentPayoutModal_C_EmptyFunction, Handled) == 0x000000, "Member 'TournamentPayoutModal_C_EmptyFunction::Handled' has a wrong offset!");

struct TournamentPayoutModal_C_EventColorize final
{
public:
	struct FFortTournamentDisplayInfo             TournamentDisplayInfo;
};
static_assert(alignof(TournamentPayoutModal_C_EventColorize) == 0x000008, "Wrong alignment on TournamentPayoutModal_C_EventColorize");
static_assert(sizeof(TournamentPayoutModal_C_EventColorize) == 0x0001D0, "Wrong size on TournamentPayoutModal_C_EventColorize");
static_assert(offsetof(TournamentPayoutModal_C_EventColorize, TournamentDisplayInfo) == 0x000000, "Member 'TournamentPayoutModal_C_EventColorize::TournamentDisplayInfo' has a wrong offset!");

struct TournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button_1;
	class FString                                 K2Node_CustomEvent_EventWindowId;
	class FString                                 K2Node_CustomEvent_TournamentId;
	ESlateVisibility                              Temp_byte_Variable;
	uint8                                         Pad_31[0x7];
	struct FFortTournamentDisplayInfo             K2Node_CustomEvent_TournamentDisplayInfo;
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_21A[0x6];
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button;
	class UCommonButtonLegacy*                    K2Node_Event_TabButton;
	class FText                                   K2Node_Event_TabText;
	class UEventsSimpleTab_C*                     K2Node_DynamicCast_AsEvents_Simple_Tab;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          K2Node_Event_bIsVisible;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(TournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal) == 0x000008, "Wrong alignment on TournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal");
static_assert(sizeof(TournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal) == 0x000258, "Wrong size on TournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal");
static_assert(offsetof(TournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal, EntryPoint) == 0x000000, "Member 'TournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal::EntryPoint' has a wrong offset!");
static_assert(offsetof(TournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal, K2Node_ComponentBoundEvent_Button_1) == 0x000008, "Member 'TournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(TournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal, K2Node_CustomEvent_EventWindowId) == 0x000010, "Member 'TournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal::K2Node_CustomEvent_EventWindowId' has a wrong offset!");
static_assert(offsetof(TournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal, K2Node_CustomEvent_TournamentId) == 0x000020, "Member 'TournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal::K2Node_CustomEvent_TournamentId' has a wrong offset!");
static_assert(offsetof(TournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal, Temp_byte_Variable) == 0x000030, "Member 'TournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(TournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal, K2Node_CustomEvent_TournamentDisplayInfo) == 0x000038, "Member 'TournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal::K2Node_CustomEvent_TournamentDisplayInfo' has a wrong offset!");
static_assert(offsetof(TournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal, K2Node_MakeStruct_LinearColor) == 0x000208, "Member 'TournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(TournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal, Temp_byte_Variable_1) == 0x000218, "Member 'TournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(TournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal, Temp_bool_Variable) == 0x000219, "Member 'TournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal, K2Node_ComponentBoundEvent_Button) == 0x000220, "Member 'TournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(TournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal, K2Node_Event_TabButton) == 0x000228, "Member 'TournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal::K2Node_Event_TabButton' has a wrong offset!");
static_assert(offsetof(TournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal, K2Node_Event_TabText) == 0x000230, "Member 'TournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal::K2Node_Event_TabText' has a wrong offset!");
static_assert(offsetof(TournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal, K2Node_DynamicCast_AsEvents_Simple_Tab) == 0x000248, "Member 'TournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal::K2Node_DynamicCast_AsEvents_Simple_Tab' has a wrong offset!");
static_assert(offsetof(TournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal, K2Node_DynamicCast_bSuccess) == 0x000250, "Member 'TournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal, K2Node_Event_bIsVisible) == 0x000251, "Member 'TournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal::K2Node_Event_bIsVisible' has a wrong offset!");
static_assert(offsetof(TournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal, K2Node_Select_Default) == 0x000252, "Member 'TournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal::K2Node_Select_Default' has a wrong offset!");

struct TournamentPayoutModal_C_Init final
{
public:
	class FString                                 EventWindowId;
	class FString                                 TournamentId;
};
static_assert(alignof(TournamentPayoutModal_C_Init) == 0x000008, "Wrong alignment on TournamentPayoutModal_C_Init");
static_assert(sizeof(TournamentPayoutModal_C_Init) == 0x000020, "Wrong size on TournamentPayoutModal_C_Init");
static_assert(offsetof(TournamentPayoutModal_C_Init, EventWindowId) == 0x000000, "Member 'TournamentPayoutModal_C_Init::EventWindowId' has a wrong offset!");
static_assert(offsetof(TournamentPayoutModal_C_Init, TournamentId) == 0x000010, "Member 'TournamentPayoutModal_C_Init::TournamentId' has a wrong offset!");

struct TournamentPayoutModal_C_InitializeTabButton final
{
public:
	class UCommonButtonLegacy*                    TabButton;
	class FText                                   TabText;
};
static_assert(alignof(TournamentPayoutModal_C_InitializeTabButton) == 0x000008, "Wrong alignment on TournamentPayoutModal_C_InitializeTabButton");
static_assert(sizeof(TournamentPayoutModal_C_InitializeTabButton) == 0x000020, "Wrong size on TournamentPayoutModal_C_InitializeTabButton");
static_assert(offsetof(TournamentPayoutModal_C_InitializeTabButton, TabButton) == 0x000000, "Member 'TournamentPayoutModal_C_InitializeTabButton::TabButton' has a wrong offset!");
static_assert(offsetof(TournamentPayoutModal_C_InitializeTabButton, TabText) == 0x000008, "Member 'TournamentPayoutModal_C_InitializeTabButton::TabText' has a wrong offset!");

struct TournamentPayoutModal_C_OnTabVisibilityChange final
{
public:
	bool                                          bIsVisible;
};
static_assert(alignof(TournamentPayoutModal_C_OnTabVisibilityChange) == 0x000001, "Wrong alignment on TournamentPayoutModal_C_OnTabVisibilityChange");
static_assert(sizeof(TournamentPayoutModal_C_OnTabVisibilityChange) == 0x000001, "Wrong size on TournamentPayoutModal_C_OnTabVisibilityChange");
static_assert(offsetof(TournamentPayoutModal_C_OnTabVisibilityChange, bIsVisible) == 0x000000, "Member 'TournamentPayoutModal_C_OnTabVisibilityChange::bIsVisible' has a wrong offset!");

}
