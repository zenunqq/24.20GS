#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct SquadSelection_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(SquadSelection_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on SquadSelection_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(SquadSelection_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on SquadSelection_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(SquadSelection_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'SquadSelection_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct SquadSelection_C_ExecuteUbergraph_SquadSelection final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	class FText                                   Temp_text_Variable;
	class FText                                   Temp_text_Variable_1;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_39[0x7];
	class UClass*                                 Temp_class_Variable;
	class UClass*                                 Temp_class_Variable_1;
	bool                                          K2Node_Event_bIsParticipating;
	uint8                                         Pad_51[0x7];
	class UIconTextButton_C*                      K2Node_DynamicCast_AsIcon_Text_Button;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_61[0x7];
	class FText                                   K2Node_Select_Default;
	class UClass*                                 K2Node_Select_Default_1;
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button;
};
static_assert(alignof(SquadSelection_C_ExecuteUbergraph_SquadSelection) == 0x000008, "Wrong alignment on SquadSelection_C_ExecuteUbergraph_SquadSelection");
static_assert(sizeof(SquadSelection_C_ExecuteUbergraph_SquadSelection) == 0x000090, "Wrong size on SquadSelection_C_ExecuteUbergraph_SquadSelection");
static_assert(offsetof(SquadSelection_C_ExecuteUbergraph_SquadSelection, EntryPoint) == 0x000000, "Member 'SquadSelection_C_ExecuteUbergraph_SquadSelection::EntryPoint' has a wrong offset!");
static_assert(offsetof(SquadSelection_C_ExecuteUbergraph_SquadSelection, Temp_bool_Variable) == 0x000004, "Member 'SquadSelection_C_ExecuteUbergraph_SquadSelection::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SquadSelection_C_ExecuteUbergraph_SquadSelection, Temp_text_Variable) == 0x000008, "Member 'SquadSelection_C_ExecuteUbergraph_SquadSelection::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(SquadSelection_C_ExecuteUbergraph_SquadSelection, Temp_text_Variable_1) == 0x000020, "Member 'SquadSelection_C_ExecuteUbergraph_SquadSelection::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(SquadSelection_C_ExecuteUbergraph_SquadSelection, Temp_bool_Variable_1) == 0x000038, "Member 'SquadSelection_C_ExecuteUbergraph_SquadSelection::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SquadSelection_C_ExecuteUbergraph_SquadSelection, Temp_class_Variable) == 0x000040, "Member 'SquadSelection_C_ExecuteUbergraph_SquadSelection::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(SquadSelection_C_ExecuteUbergraph_SquadSelection, Temp_class_Variable_1) == 0x000048, "Member 'SquadSelection_C_ExecuteUbergraph_SquadSelection::Temp_class_Variable_1' has a wrong offset!");
static_assert(offsetof(SquadSelection_C_ExecuteUbergraph_SquadSelection, K2Node_Event_bIsParticipating) == 0x000050, "Member 'SquadSelection_C_ExecuteUbergraph_SquadSelection::K2Node_Event_bIsParticipating' has a wrong offset!");
static_assert(offsetof(SquadSelection_C_ExecuteUbergraph_SquadSelection, K2Node_DynamicCast_AsIcon_Text_Button) == 0x000058, "Member 'SquadSelection_C_ExecuteUbergraph_SquadSelection::K2Node_DynamicCast_AsIcon_Text_Button' has a wrong offset!");
static_assert(offsetof(SquadSelection_C_ExecuteUbergraph_SquadSelection, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'SquadSelection_C_ExecuteUbergraph_SquadSelection::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SquadSelection_C_ExecuteUbergraph_SquadSelection, K2Node_Select_Default) == 0x000068, "Member 'SquadSelection_C_ExecuteUbergraph_SquadSelection::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SquadSelection_C_ExecuteUbergraph_SquadSelection, K2Node_Select_Default_1) == 0x000080, "Member 'SquadSelection_C_ExecuteUbergraph_SquadSelection::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(SquadSelection_C_ExecuteUbergraph_SquadSelection, K2Node_ComponentBoundEvent_Button) == 0x000088, "Member 'SquadSelection_C_ExecuteUbergraph_SquadSelection::K2Node_ComponentBoundEvent_Button' has a wrong offset!");

struct SquadSelection_C_OnLocalPlayerParticipationChanged final
{
public:
	bool                                          bIsParticipating;
};
static_assert(alignof(SquadSelection_C_OnLocalPlayerParticipationChanged) == 0x000001, "Wrong alignment on SquadSelection_C_OnLocalPlayerParticipationChanged");
static_assert(sizeof(SquadSelection_C_OnLocalPlayerParticipationChanged) == 0x000001, "Wrong size on SquadSelection_C_OnLocalPlayerParticipationChanged");
static_assert(offsetof(SquadSelection_C_OnLocalPlayerParticipationChanged, bIsParticipating) == 0x000000, "Member 'SquadSelection_C_OnLocalPlayerParticipationChanged::bIsParticipating' has a wrong offset!");

}
