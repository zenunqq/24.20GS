#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"

namespace SDK::Params
{

struct CosmeticLoadoutScreen_C_ExecuteUbergraph_CosmeticLoadoutScreen final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class FText                                   Temp_text_Variable;
	class FText                                   Temp_text_Variable_1;
	EFortCosmeticLoadoutScreenMode                K2Node_Event_NewMode;
	uint8                                         Pad_39[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	EFortCosmeticLoadoutScreenMode                Temp_byte_Variable;
	uint8                                         Pad_49[0x7];
	class FText                                   K2Node_Select_Default;
	EFortCosmeticLoadoutScreenMode                Temp_byte_Variable_1;
	uint8                                         Pad_69[0x7];
	class FText                                   K2Node_Select_Default_1;
	class UWBP_UIKit_ButtonCTA_Base_C*            K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	EFortCosmeticLoadoutScreenMode                Temp_byte_Variable_2;
	uint8                                         Pad_93[0x5];
	class FText                                   K2Node_Select_Default_2;
};
static_assert(alignof(CosmeticLoadoutScreen_C_ExecuteUbergraph_CosmeticLoadoutScreen) == 0x000008, "Wrong alignment on CosmeticLoadoutScreen_C_ExecuteUbergraph_CosmeticLoadoutScreen");
static_assert(sizeof(CosmeticLoadoutScreen_C_ExecuteUbergraph_CosmeticLoadoutScreen) == 0x0000B0, "Wrong size on CosmeticLoadoutScreen_C_ExecuteUbergraph_CosmeticLoadoutScreen");
static_assert(offsetof(CosmeticLoadoutScreen_C_ExecuteUbergraph_CosmeticLoadoutScreen, EntryPoint) == 0x000000, "Member 'CosmeticLoadoutScreen_C_ExecuteUbergraph_CosmeticLoadoutScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutScreen_C_ExecuteUbergraph_CosmeticLoadoutScreen, Temp_text_Variable) == 0x000008, "Member 'CosmeticLoadoutScreen_C_ExecuteUbergraph_CosmeticLoadoutScreen::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutScreen_C_ExecuteUbergraph_CosmeticLoadoutScreen, Temp_text_Variable_1) == 0x000020, "Member 'CosmeticLoadoutScreen_C_ExecuteUbergraph_CosmeticLoadoutScreen::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutScreen_C_ExecuteUbergraph_CosmeticLoadoutScreen, K2Node_Event_NewMode) == 0x000038, "Member 'CosmeticLoadoutScreen_C_ExecuteUbergraph_CosmeticLoadoutScreen::K2Node_Event_NewMode' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutScreen_C_ExecuteUbergraph_CosmeticLoadoutScreen, CallFunc_PlayAnimation_ReturnValue) == 0x000040, "Member 'CosmeticLoadoutScreen_C_ExecuteUbergraph_CosmeticLoadoutScreen::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutScreen_C_ExecuteUbergraph_CosmeticLoadoutScreen, Temp_byte_Variable) == 0x000048, "Member 'CosmeticLoadoutScreen_C_ExecuteUbergraph_CosmeticLoadoutScreen::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutScreen_C_ExecuteUbergraph_CosmeticLoadoutScreen, K2Node_Select_Default) == 0x000050, "Member 'CosmeticLoadoutScreen_C_ExecuteUbergraph_CosmeticLoadoutScreen::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutScreen_C_ExecuteUbergraph_CosmeticLoadoutScreen, Temp_byte_Variable_1) == 0x000068, "Member 'CosmeticLoadoutScreen_C_ExecuteUbergraph_CosmeticLoadoutScreen::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutScreen_C_ExecuteUbergraph_CosmeticLoadoutScreen, K2Node_Select_Default_1) == 0x000070, "Member 'CosmeticLoadoutScreen_C_ExecuteUbergraph_CosmeticLoadoutScreen::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutScreen_C_ExecuteUbergraph_CosmeticLoadoutScreen, K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base) == 0x000088, "Member 'CosmeticLoadoutScreen_C_ExecuteUbergraph_CosmeticLoadoutScreen::K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutScreen_C_ExecuteUbergraph_CosmeticLoadoutScreen, K2Node_DynamicCast_bSuccess) == 0x000090, "Member 'CosmeticLoadoutScreen_C_ExecuteUbergraph_CosmeticLoadoutScreen::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutScreen_C_ExecuteUbergraph_CosmeticLoadoutScreen, CallFunc_IsMobileGame_ReturnValue) == 0x000091, "Member 'CosmeticLoadoutScreen_C_ExecuteUbergraph_CosmeticLoadoutScreen::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutScreen_C_ExecuteUbergraph_CosmeticLoadoutScreen, Temp_byte_Variable_2) == 0x000092, "Member 'CosmeticLoadoutScreen_C_ExecuteUbergraph_CosmeticLoadoutScreen::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutScreen_C_ExecuteUbergraph_CosmeticLoadoutScreen, K2Node_Select_Default_2) == 0x000098, "Member 'CosmeticLoadoutScreen_C_ExecuteUbergraph_CosmeticLoadoutScreen::K2Node_Select_Default_2' has a wrong offset!");

struct CosmeticLoadoutScreen_C_OnFlavorForScreenMode final
{
public:
	EFortCosmeticLoadoutScreenMode                NewMode;
};
static_assert(alignof(CosmeticLoadoutScreen_C_OnFlavorForScreenMode) == 0x000001, "Wrong alignment on CosmeticLoadoutScreen_C_OnFlavorForScreenMode");
static_assert(sizeof(CosmeticLoadoutScreen_C_OnFlavorForScreenMode) == 0x000001, "Wrong size on CosmeticLoadoutScreen_C_OnFlavorForScreenMode");
static_assert(offsetof(CosmeticLoadoutScreen_C_OnFlavorForScreenMode, NewMode) == 0x000000, "Member 'CosmeticLoadoutScreen_C_OnFlavorForScreenMode::NewMode' has a wrong offset!");

}
