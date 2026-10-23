#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct GenericModalButton_C_ExecuteUbergraph_GenericModalButton final
{
public:
	int32                                         EntryPoint;
	ESlateVisibility                              Temp_byte_Variable;
	bool                                          Temp_bool_Variable;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_7[0x1];
	int32                                         Temp_int_Variable;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_D[0x3];
	struct FVector2D                              Temp_struct_Variable;
	struct FVector2D                              Temp_struct_Variable_1;
	bool                                          K2Node_Event_IsDesignTime;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_33[0x5];
	class UWidgetAnimation*                       K2Node_Select_Default;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	int32                                         K2Node_Select_Default_1;
	uint8                                         Pad_54[0x4];
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;
	struct FVector2D                              K2Node_Select_Default_2;
	bool                                          Temp_bool_Variable_3;
	bool                                          K2Node_CustomEvent_ShowEffectWhenDisabled;
	ESlateVisibility                              K2Node_Select_Default_3;
};
static_assert(alignof(GenericModalButton_C_ExecuteUbergraph_GenericModalButton) == 0x000008, "Wrong alignment on GenericModalButton_C_ExecuteUbergraph_GenericModalButton");
static_assert(sizeof(GenericModalButton_C_ExecuteUbergraph_GenericModalButton) == 0x0000C8, "Wrong size on GenericModalButton_C_ExecuteUbergraph_GenericModalButton");
static_assert(offsetof(GenericModalButton_C_ExecuteUbergraph_GenericModalButton, EntryPoint) == 0x000000, "Member 'GenericModalButton_C_ExecuteUbergraph_GenericModalButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(GenericModalButton_C_ExecuteUbergraph_GenericModalButton, Temp_byte_Variable) == 0x000004, "Member 'GenericModalButton_C_ExecuteUbergraph_GenericModalButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GenericModalButton_C_ExecuteUbergraph_GenericModalButton, Temp_bool_Variable) == 0x000005, "Member 'GenericModalButton_C_ExecuteUbergraph_GenericModalButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GenericModalButton_C_ExecuteUbergraph_GenericModalButton, Temp_bool_Variable_1) == 0x000006, "Member 'GenericModalButton_C_ExecuteUbergraph_GenericModalButton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(GenericModalButton_C_ExecuteUbergraph_GenericModalButton, Temp_int_Variable) == 0x000008, "Member 'GenericModalButton_C_ExecuteUbergraph_GenericModalButton::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GenericModalButton_C_ExecuteUbergraph_GenericModalButton, Temp_bool_Variable_2) == 0x00000C, "Member 'GenericModalButton_C_ExecuteUbergraph_GenericModalButton::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(GenericModalButton_C_ExecuteUbergraph_GenericModalButton, Temp_struct_Variable) == 0x000010, "Member 'GenericModalButton_C_ExecuteUbergraph_GenericModalButton::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GenericModalButton_C_ExecuteUbergraph_GenericModalButton, Temp_struct_Variable_1) == 0x000020, "Member 'GenericModalButton_C_ExecuteUbergraph_GenericModalButton::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GenericModalButton_C_ExecuteUbergraph_GenericModalButton, K2Node_Event_IsDesignTime) == 0x000030, "Member 'GenericModalButton_C_ExecuteUbergraph_GenericModalButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(GenericModalButton_C_ExecuteUbergraph_GenericModalButton, Temp_byte_Variable_1) == 0x000031, "Member 'GenericModalButton_C_ExecuteUbergraph_GenericModalButton::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(GenericModalButton_C_ExecuteUbergraph_GenericModalButton, CallFunc_IsValid_ReturnValue) == 0x000032, "Member 'GenericModalButton_C_ExecuteUbergraph_GenericModalButton::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GenericModalButton_C_ExecuteUbergraph_GenericModalButton, K2Node_Select_Default) == 0x000038, "Member 'GenericModalButton_C_ExecuteUbergraph_GenericModalButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GenericModalButton_C_ExecuteUbergraph_GenericModalButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000040, "Member 'GenericModalButton_C_ExecuteUbergraph_GenericModalButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(GenericModalButton_C_ExecuteUbergraph_GenericModalButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000048, "Member 'GenericModalButton_C_ExecuteUbergraph_GenericModalButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(GenericModalButton_C_ExecuteUbergraph_GenericModalButton, K2Node_Select_Default_1) == 0x000050, "Member 'GenericModalButton_C_ExecuteUbergraph_GenericModalButton::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(GenericModalButton_C_ExecuteUbergraph_GenericModalButton, K2Node_MakeStruct_SlateFontInfo) == 0x000058, "Member 'GenericModalButton_C_ExecuteUbergraph_GenericModalButton::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");
static_assert(offsetof(GenericModalButton_C_ExecuteUbergraph_GenericModalButton, K2Node_Select_Default_2) == 0x0000B0, "Member 'GenericModalButton_C_ExecuteUbergraph_GenericModalButton::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(GenericModalButton_C_ExecuteUbergraph_GenericModalButton, Temp_bool_Variable_3) == 0x0000C0, "Member 'GenericModalButton_C_ExecuteUbergraph_GenericModalButton::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(GenericModalButton_C_ExecuteUbergraph_GenericModalButton, K2Node_CustomEvent_ShowEffectWhenDisabled) == 0x0000C1, "Member 'GenericModalButton_C_ExecuteUbergraph_GenericModalButton::K2Node_CustomEvent_ShowEffectWhenDisabled' has a wrong offset!");
static_assert(offsetof(GenericModalButton_C_ExecuteUbergraph_GenericModalButton, K2Node_Select_Default_3) == 0x0000C2, "Member 'GenericModalButton_C_ExecuteUbergraph_GenericModalButton::K2Node_Select_Default_3' has a wrong offset!");

struct GenericModalButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(GenericModalButton_C_PreConstruct) == 0x000001, "Wrong alignment on GenericModalButton_C_PreConstruct");
static_assert(sizeof(GenericModalButton_C_PreConstruct) == 0x000001, "Wrong size on GenericModalButton_C_PreConstruct");
static_assert(offsetof(GenericModalButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'GenericModalButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct GenericModalButton_C_SetBorderShowEffectWhenDisable final
{
public:
	bool                                          ShowEffectWhenDisabled;
};
static_assert(alignof(GenericModalButton_C_SetBorderShowEffectWhenDisable) == 0x000001, "Wrong alignment on GenericModalButton_C_SetBorderShowEffectWhenDisable");
static_assert(sizeof(GenericModalButton_C_SetBorderShowEffectWhenDisable) == 0x000001, "Wrong size on GenericModalButton_C_SetBorderShowEffectWhenDisable");
static_assert(offsetof(GenericModalButton_C_SetBorderShowEffectWhenDisable, ShowEffectWhenDisabled) == 0x000000, "Member 'GenericModalButton_C_SetBorderShowEffectWhenDisable::ShowEffectWhenDisabled' has a wrong offset!");

struct GenericModalButton_C_SetButtonText final
{
public:
	class FText                                   ButtonText;
};
static_assert(alignof(GenericModalButton_C_SetButtonText) == 0x000008, "Wrong alignment on GenericModalButton_C_SetButtonText");
static_assert(sizeof(GenericModalButton_C_SetButtonText) == 0x000018, "Wrong size on GenericModalButton_C_SetButtonText");
static_assert(offsetof(GenericModalButton_C_SetButtonText, ButtonText) == 0x000000, "Member 'GenericModalButton_C_SetButtonText::ButtonText' has a wrong offset!");

}
