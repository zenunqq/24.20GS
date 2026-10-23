#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct EventPlayerStatProfileSelector_C_BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(EventPlayerStatProfileSelector_C_BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on EventPlayerStatProfileSelector_C_BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(EventPlayerStatProfileSelector_C_BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on EventPlayerStatProfileSelector_C_BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(EventPlayerStatProfileSelector_C_BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'EventPlayerStatProfileSelector_C_BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct EventPlayerStatProfileSelector_C_ExecuteUbergraph_EventPlayerStatProfileSelector final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button;
};
static_assert(alignof(EventPlayerStatProfileSelector_C_ExecuteUbergraph_EventPlayerStatProfileSelector) == 0x000008, "Wrong alignment on EventPlayerStatProfileSelector_C_ExecuteUbergraph_EventPlayerStatProfileSelector");
static_assert(sizeof(EventPlayerStatProfileSelector_C_ExecuteUbergraph_EventPlayerStatProfileSelector) == 0x000018, "Wrong size on EventPlayerStatProfileSelector_C_ExecuteUbergraph_EventPlayerStatProfileSelector");
static_assert(offsetof(EventPlayerStatProfileSelector_C_ExecuteUbergraph_EventPlayerStatProfileSelector, EntryPoint) == 0x000000, "Member 'EventPlayerStatProfileSelector_C_ExecuteUbergraph_EventPlayerStatProfileSelector::EntryPoint' has a wrong offset!");
static_assert(offsetof(EventPlayerStatProfileSelector_C_ExecuteUbergraph_EventPlayerStatProfileSelector, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'EventPlayerStatProfileSelector_C_ExecuteUbergraph_EventPlayerStatProfileSelector::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventPlayerStatProfileSelector_C_ExecuteUbergraph_EventPlayerStatProfileSelector, K2Node_ComponentBoundEvent_Button) == 0x000010, "Member 'EventPlayerStatProfileSelector_C_ExecuteUbergraph_EventPlayerStatProfileSelector::K2Node_ComponentBoundEvent_Button' has a wrong offset!");

struct EventPlayerStatProfileSelector_C_Set_Up_Profile_Selector_Style final
{
public:
	struct FFortTournamentDisplayInfo             Tournament_Display_Info;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
};
static_assert(alignof(EventPlayerStatProfileSelector_C_Set_Up_Profile_Selector_Style) == 0x000008, "Wrong alignment on EventPlayerStatProfileSelector_C_Set_Up_Profile_Selector_Style");
static_assert(sizeof(EventPlayerStatProfileSelector_C_Set_Up_Profile_Selector_Style) == 0x0001E8, "Wrong size on EventPlayerStatProfileSelector_C_Set_Up_Profile_Selector_Style");
static_assert(offsetof(EventPlayerStatProfileSelector_C_Set_Up_Profile_Selector_Style, Tournament_Display_Info) == 0x000000, "Member 'EventPlayerStatProfileSelector_C_Set_Up_Profile_Selector_Style::Tournament_Display_Info' has a wrong offset!");
static_assert(offsetof(EventPlayerStatProfileSelector_C_Set_Up_Profile_Selector_Style, K2Node_MakeStruct_SlateColor) == 0x0001D0, "Member 'EventPlayerStatProfileSelector_C_Set_Up_Profile_Selector_Style::K2Node_MakeStruct_SlateColor' has a wrong offset!");

}
