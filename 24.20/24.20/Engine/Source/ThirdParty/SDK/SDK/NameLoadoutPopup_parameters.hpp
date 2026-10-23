#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "FortniteUI_structs.hpp"

namespace SDK::Params
{

struct NameLoadoutPopup_C_BndEvt__NameLoadoutPopup_Card_ExistingPreset_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature final
{
public:
	ESlateVisibility                              InVisibility;
};
static_assert(alignof(NameLoadoutPopup_C_BndEvt__NameLoadoutPopup_Card_ExistingPreset_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature) == 0x000001, "Wrong alignment on NameLoadoutPopup_C_BndEvt__NameLoadoutPopup_Card_ExistingPreset_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature");
static_assert(sizeof(NameLoadoutPopup_C_BndEvt__NameLoadoutPopup_Card_ExistingPreset_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature) == 0x000001, "Wrong size on NameLoadoutPopup_C_BndEvt__NameLoadoutPopup_Card_ExistingPreset_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature");
static_assert(offsetof(NameLoadoutPopup_C_BndEvt__NameLoadoutPopup_Card_ExistingPreset_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature, InVisibility) == 0x000000, "Member 'NameLoadoutPopup_C_BndEvt__NameLoadoutPopup_Card_ExistingPreset_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature::InVisibility' has a wrong offset!");

struct NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class FText                                   Temp_text_Variable;
	class FText                                   Temp_text_Variable_1;
	class FText                                   Temp_text_Variable_2;
	EFortNameLoadoutPopupType                     Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	EFortNameLoadoutPopupType                     Temp_byte_Variable_4;
	uint8                                         Pad_55[0x3];
	class FText                                   Temp_text_Variable_3;
	class FText                                   Temp_text_Variable_4;
	class FText                                   Temp_text_Variable_5;
	EFortNameLoadoutPopupType                     Temp_byte_Variable_5;
	uint8                                         Pad_A1[0x7];
	class FText                                   Temp_text_Variable_6;
	class FText                                   Temp_text_Variable_7;
	class FText                                   Temp_text_Variable_8;
	EFortNameLoadoutPopupType                     Temp_byte_Variable_6;
	EFortNameLoadoutPopupType                     Temp_byte_Variable_7;
	uint8                                         Pad_F2[0x6];
	class UCosmeticLoadoutCard_C*                 K2Node_DynamicCast_AsCosmetic_Loadout_Card;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_101[0x7];
	class UCosmeticLoadoutCard_C*                 K2Node_DynamicCast_AsCosmetic_Loadout_Card_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_111[0x7];
	class FText                                   K2Node_Select_Default;
	ESlateVisibility                              K2Node_Select_Default_1;
	uint8                                         Pad_131[0x7];
	class FText                                   K2Node_Select_Default_2;
	class FText                                   K2Node_Select_Default_3;
	ESlateVisibility                              K2Node_ComponentBoundEvent_InVisibility;
	uint8                                         Pad_169[0x7];
	class UWidgetAnimation*                       K2Node_Select_Default_4;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup) == 0x000008, "Wrong alignment on NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup");
static_assert(sizeof(NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup) == 0x000180, "Wrong size on NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup");
static_assert(offsetof(NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup, EntryPoint) == 0x000000, "Member 'NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup::EntryPoint' has a wrong offset!");
static_assert(offsetof(NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup, Temp_text_Variable) == 0x000008, "Member 'NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup, Temp_text_Variable_1) == 0x000020, "Member 'NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup, Temp_text_Variable_2) == 0x000038, "Member 'NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup, Temp_byte_Variable) == 0x000050, "Member 'NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup, Temp_byte_Variable_1) == 0x000051, "Member 'NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup, Temp_byte_Variable_2) == 0x000052, "Member 'NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup, Temp_byte_Variable_3) == 0x000053, "Member 'NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup, Temp_byte_Variable_4) == 0x000054, "Member 'NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup, Temp_text_Variable_3) == 0x000058, "Member 'NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup::Temp_text_Variable_3' has a wrong offset!");
static_assert(offsetof(NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup, Temp_text_Variable_4) == 0x000070, "Member 'NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup::Temp_text_Variable_4' has a wrong offset!");
static_assert(offsetof(NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup, Temp_text_Variable_5) == 0x000088, "Member 'NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup::Temp_text_Variable_5' has a wrong offset!");
static_assert(offsetof(NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup, Temp_byte_Variable_5) == 0x0000A0, "Member 'NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup, Temp_text_Variable_6) == 0x0000A8, "Member 'NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup::Temp_text_Variable_6' has a wrong offset!");
static_assert(offsetof(NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup, Temp_text_Variable_7) == 0x0000C0, "Member 'NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup::Temp_text_Variable_7' has a wrong offset!");
static_assert(offsetof(NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup, Temp_text_Variable_8) == 0x0000D8, "Member 'NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup::Temp_text_Variable_8' has a wrong offset!");
static_assert(offsetof(NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup, Temp_byte_Variable_6) == 0x0000F0, "Member 'NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup, Temp_byte_Variable_7) == 0x0000F1, "Member 'NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup, K2Node_DynamicCast_AsCosmetic_Loadout_Card) == 0x0000F8, "Member 'NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup::K2Node_DynamicCast_AsCosmetic_Loadout_Card' has a wrong offset!");
static_assert(offsetof(NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup, K2Node_DynamicCast_bSuccess) == 0x000100, "Member 'NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup, K2Node_DynamicCast_AsCosmetic_Loadout_Card_1) == 0x000108, "Member 'NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup::K2Node_DynamicCast_AsCosmetic_Loadout_Card_1' has a wrong offset!");
static_assert(offsetof(NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup, K2Node_DynamicCast_bSuccess_1) == 0x000110, "Member 'NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup, K2Node_Select_Default) == 0x000118, "Member 'NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup, K2Node_Select_Default_1) == 0x000130, "Member 'NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup, K2Node_Select_Default_2) == 0x000138, "Member 'NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup, K2Node_Select_Default_3) == 0x000150, "Member 'NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup, K2Node_ComponentBoundEvent_InVisibility) == 0x000168, "Member 'NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup::K2Node_ComponentBoundEvent_InVisibility' has a wrong offset!");
static_assert(offsetof(NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup, K2Node_Select_Default_4) == 0x000170, "Member 'NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup, CallFunc_PlayAnimation_ReturnValue) == 0x000178, "Member 'NameLoadoutPopup_C_ExecuteUbergraph_NameLoadoutPopup::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}
