#pragma once

#include "Basic.hpp"

#include "Slate_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo final
{
public:
	int32                                         EntryPoint;
	ESlateVisibility                              Temp_byte_Variable;
	uint8                                         Pad_5[0x3];
	int32                                         Temp_int_Variable;
	int32                                         Temp_int_Variable_1;
	int32                                         Temp_int_Variable_2;
	EAthenaLockerInfoRestrictionWarning           Temp_byte_Variable_1;
	uint8                                         Pad_15[0x3];
	struct FLinearColor                           Temp_struct_Variable;
	struct FLinearColor                           Temp_struct_Variable_1;
	struct FLinearColor                           Temp_struct_Variable_2;
	struct FLinearColor                           Temp_struct_Variable_3;
	struct FLinearColor                           Temp_struct_Variable_4;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_4;
	ESlateVisibility                              Temp_byte_Variable_5;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_6F[0x1];
	float                                         Temp_real_Variable;
	float                                         Temp_real_Variable_1;
	bool                                          Temp_bool_Variable_3;
	EHorizontalAlignment                          Temp_byte_Variable_6;
	EHorizontalAlignment                          Temp_byte_Variable_7;
	bool                                          Temp_bool_Variable_4;
	ETextJustify                                  Temp_byte_Variable_8;
	ETextJustify                                  Temp_byte_Variable_9;
	bool                                          Temp_bool_Variable_5;
	EFlowDirectionPreference                      Temp_byte_Variable_10;
	EFlowDirectionPreference                      Temp_byte_Variable_11;
	uint8                                         Pad_81[0x7];
	const class UFortItemDefinition*              K2Node_Event_ItemDefinition;
	bool                                          Temp_bool_Variable_6;
	EFortRarity                                   CallFunc_GetRarity_ReturnValue;
	uint8                                         Pad_92[0x2];
	struct FFortColorPalette                      CallFunc_GetRarityOrSeriesColors_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_E5[0x3];
	int32                                         Temp_int_Variable_3;
	struct FFortColorPalette                      CallFunc_BPGetRarityColorPalette_ReturnValue;
	int32                                         Temp_int_Variable_4;
	bool                                          K2Node_Event_bShouldShow;
	uint8                                         Pad_141[0x7];
	class FText                                   K2Node_Event_WarningText;
	EAthenaLockerInfoRestrictionWarning           K2Node_Event_WarningType;
	uint8                                         Pad_161[0x3];
	struct FLinearColor                           K2Node_Select_Default;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	EAthenaLockerInfoRestrictionWarning           Temp_byte_Variable_12;
	ESlateVisibility                              Temp_byte_Variable_13;
	uint8                                         Pad_192[0x2];
	int32                                         K2Node_Select_Default_1;
	ESlateVisibility                              K2Node_Select_Default_2;
	bool                                          K2Node_Event_IsDesignTime;
	ESlateVisibility                              K2Node_Select_Default_3;
	uint8                                         Pad_19B[0x5];
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	ETextJustify                                  K2Node_Select_Default_4;
	ESlateVisibility                              K2Node_Select_Default_5;
	EFlowDirectionPreference                      K2Node_Select_Default_6;
	float                                         K2Node_Select_Default_7;
	EHorizontalAlignment                          K2Node_Select_Default_8;
	uint8                                         Pad_1B1[0x7];
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue_1;
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue_2;
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue_3;
};
static_assert(alignof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo) == 0x000008, "Wrong alignment on AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo");
static_assert(sizeof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo) == 0x0001D0, "Wrong size on AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, EntryPoint) == 0x000000, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, Temp_byte_Variable) == 0x000004, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, Temp_int_Variable) == 0x000008, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, Temp_int_Variable_1) == 0x00000C, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, Temp_int_Variable_2) == 0x000010, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, Temp_byte_Variable_1) == 0x000014, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, Temp_struct_Variable) == 0x000018, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, Temp_struct_Variable_1) == 0x000028, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, Temp_struct_Variable_2) == 0x000038, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, Temp_struct_Variable_3) == 0x000048, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, Temp_struct_Variable_4) == 0x000058, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::Temp_struct_Variable_4' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, Temp_bool_Variable) == 0x000068, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, Temp_byte_Variable_2) == 0x000069, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, Temp_byte_Variable_3) == 0x00006A, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, Temp_bool_Variable_1) == 0x00006B, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, Temp_byte_Variable_4) == 0x00006C, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, Temp_byte_Variable_5) == 0x00006D, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, Temp_bool_Variable_2) == 0x00006E, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, Temp_real_Variable) == 0x000070, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, Temp_real_Variable_1) == 0x000074, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, Temp_bool_Variable_3) == 0x000078, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, Temp_byte_Variable_6) == 0x000079, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, Temp_byte_Variable_7) == 0x00007A, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, Temp_bool_Variable_4) == 0x00007B, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, Temp_byte_Variable_8) == 0x00007C, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, Temp_byte_Variable_9) == 0x00007D, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, Temp_bool_Variable_5) == 0x00007E, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, Temp_byte_Variable_10) == 0x00007F, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, Temp_byte_Variable_11) == 0x000080, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, K2Node_Event_ItemDefinition) == 0x000088, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::K2Node_Event_ItemDefinition' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, Temp_bool_Variable_6) == 0x000090, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, CallFunc_GetRarity_ReturnValue) == 0x000091, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::CallFunc_GetRarity_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, CallFunc_GetRarityOrSeriesColors_ReturnValue) == 0x000094, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::CallFunc_GetRarityOrSeriesColors_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, CallFunc_IsValid_ReturnValue) == 0x0000E4, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, Temp_int_Variable_3) == 0x0000E8, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, CallFunc_BPGetRarityColorPalette_ReturnValue) == 0x0000EC, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::CallFunc_BPGetRarityColorPalette_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, Temp_int_Variable_4) == 0x00013C, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, K2Node_Event_bShouldShow) == 0x000140, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::K2Node_Event_bShouldShow' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, K2Node_Event_WarningText) == 0x000148, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::K2Node_Event_WarningText' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, K2Node_Event_WarningType) == 0x000160, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::K2Node_Event_WarningType' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, K2Node_Select_Default) == 0x000164, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, K2Node_MakeStruct_SlateColor) == 0x000174, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, CallFunc_PlayAnimation_ReturnValue) == 0x000188, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, Temp_byte_Variable_12) == 0x000190, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::Temp_byte_Variable_12' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, Temp_byte_Variable_13) == 0x000191, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::Temp_byte_Variable_13' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, K2Node_Select_Default_1) == 0x000194, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, K2Node_Select_Default_2) == 0x000198, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, K2Node_Event_IsDesignTime) == 0x000199, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, K2Node_Select_Default_3) == 0x00019A, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x0001A0, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001A8, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, K2Node_Select_Default_4) == 0x0001A9, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, K2Node_Select_Default_5) == 0x0001AA, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, K2Node_Select_Default_6) == 0x0001AB, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, K2Node_Select_Default_7) == 0x0001AC, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::K2Node_Select_Default_7' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, K2Node_Select_Default_8) == 0x0001B0, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::K2Node_Select_Default_8' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, CallFunc_SlotAsOverlaySlot_ReturnValue_1) == 0x0001B8, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::CallFunc_SlotAsOverlaySlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, CallFunc_SlotAsOverlaySlot_ReturnValue_2) == 0x0001C0, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::CallFunc_SlotAsOverlaySlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo, CallFunc_SlotAsOverlaySlot_ReturnValue_3) == 0x0001C8, "Member 'AthenaLocker_ItemInfo_C_ExecuteUbergraph_AthenaLocker_ItemInfo::CallFunc_SlotAsOverlaySlot_ReturnValue_3' has a wrong offset!");

struct AthenaLocker_ItemInfo_C_OnItemDefinitionSet final
{
public:
	const class UFortItemDefinition*              ItemDefinition;
};
static_assert(alignof(AthenaLocker_ItemInfo_C_OnItemDefinitionSet) == 0x000008, "Wrong alignment on AthenaLocker_ItemInfo_C_OnItemDefinitionSet");
static_assert(sizeof(AthenaLocker_ItemInfo_C_OnItemDefinitionSet) == 0x000008, "Wrong size on AthenaLocker_ItemInfo_C_OnItemDefinitionSet");
static_assert(offsetof(AthenaLocker_ItemInfo_C_OnItemDefinitionSet, ItemDefinition) == 0x000000, "Member 'AthenaLocker_ItemInfo_C_OnItemDefinitionSet::ItemDefinition' has a wrong offset!");

struct AthenaLocker_ItemInfo_C_OnUpdateAccessRestrictionWarning final
{
public:
	bool                                          bShouldShow;
	uint8                                         Pad_1[0x7];
	class FText                                   WarningText;
	EAthenaLockerInfoRestrictionWarning           WarningType;
};
static_assert(alignof(AthenaLocker_ItemInfo_C_OnUpdateAccessRestrictionWarning) == 0x000008, "Wrong alignment on AthenaLocker_ItemInfo_C_OnUpdateAccessRestrictionWarning");
static_assert(sizeof(AthenaLocker_ItemInfo_C_OnUpdateAccessRestrictionWarning) == 0x000028, "Wrong size on AthenaLocker_ItemInfo_C_OnUpdateAccessRestrictionWarning");
static_assert(offsetof(AthenaLocker_ItemInfo_C_OnUpdateAccessRestrictionWarning, bShouldShow) == 0x000000, "Member 'AthenaLocker_ItemInfo_C_OnUpdateAccessRestrictionWarning::bShouldShow' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_OnUpdateAccessRestrictionWarning, WarningText) == 0x000008, "Member 'AthenaLocker_ItemInfo_C_OnUpdateAccessRestrictionWarning::WarningText' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_OnUpdateAccessRestrictionWarning, WarningType) == 0x000020, "Member 'AthenaLocker_ItemInfo_C_OnUpdateAccessRestrictionWarning::WarningType' has a wrong offset!");

struct AthenaLocker_ItemInfo_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(AthenaLocker_ItemInfo_C_PreConstruct) == 0x000001, "Wrong alignment on AthenaLocker_ItemInfo_C_PreConstruct");
static_assert(sizeof(AthenaLocker_ItemInfo_C_PreConstruct) == 0x000001, "Wrong size on AthenaLocker_ItemInfo_C_PreConstruct");
static_assert(offsetof(AthenaLocker_ItemInfo_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'AthenaLocker_ItemInfo_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct AthenaLocker_ItemInfo_C_UpdateRarityWidgets final
{
public:
	struct FFortColorPalette                      InColor;
	EFortRarity                                   InRarity;
	uint8                                         Pad_51[0x7];
	class UFortItemSeriesDefinition*              InSeries;
	bool                                          HideRarity;
	bool                                          CallFunc_IsNullItem_Is_Null_Item;
	bool                                          CallFunc_IsNullItem_Is_Null_Item_1;
	bool                                          Temp_bool_Variable;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_65[0x3];
	struct FLinearColor                           K2Node_Select_Default;
	struct FLinearColor                           K2Node_Select_Default_1;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_8B[0x5];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default_2;
};
static_assert(alignof(AthenaLocker_ItemInfo_C_UpdateRarityWidgets) == 0x000008, "Wrong alignment on AthenaLocker_ItemInfo_C_UpdateRarityWidgets");
static_assert(sizeof(AthenaLocker_ItemInfo_C_UpdateRarityWidgets) == 0x0000A0, "Wrong size on AthenaLocker_ItemInfo_C_UpdateRarityWidgets");
static_assert(offsetof(AthenaLocker_ItemInfo_C_UpdateRarityWidgets, InColor) == 0x000000, "Member 'AthenaLocker_ItemInfo_C_UpdateRarityWidgets::InColor' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_UpdateRarityWidgets, InRarity) == 0x000050, "Member 'AthenaLocker_ItemInfo_C_UpdateRarityWidgets::InRarity' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_UpdateRarityWidgets, InSeries) == 0x000058, "Member 'AthenaLocker_ItemInfo_C_UpdateRarityWidgets::InSeries' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_UpdateRarityWidgets, HideRarity) == 0x000060, "Member 'AthenaLocker_ItemInfo_C_UpdateRarityWidgets::HideRarity' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_UpdateRarityWidgets, CallFunc_IsNullItem_Is_Null_Item) == 0x000061, "Member 'AthenaLocker_ItemInfo_C_UpdateRarityWidgets::CallFunc_IsNullItem_Is_Null_Item' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_UpdateRarityWidgets, CallFunc_IsNullItem_Is_Null_Item_1) == 0x000062, "Member 'AthenaLocker_ItemInfo_C_UpdateRarityWidgets::CallFunc_IsNullItem_Is_Null_Item_1' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_UpdateRarityWidgets, Temp_bool_Variable) == 0x000063, "Member 'AthenaLocker_ItemInfo_C_UpdateRarityWidgets::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_UpdateRarityWidgets, Temp_bool_Variable_1) == 0x000064, "Member 'AthenaLocker_ItemInfo_C_UpdateRarityWidgets::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_UpdateRarityWidgets, K2Node_Select_Default) == 0x000068, "Member 'AthenaLocker_ItemInfo_C_UpdateRarityWidgets::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_UpdateRarityWidgets, K2Node_Select_Default_1) == 0x000078, "Member 'AthenaLocker_ItemInfo_C_UpdateRarityWidgets::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_UpdateRarityWidgets, Temp_byte_Variable) == 0x000088, "Member 'AthenaLocker_ItemInfo_C_UpdateRarityWidgets::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_UpdateRarityWidgets, Temp_byte_Variable_1) == 0x000089, "Member 'AthenaLocker_ItemInfo_C_UpdateRarityWidgets::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_UpdateRarityWidgets, Temp_bool_Variable_2) == 0x00008A, "Member 'AthenaLocker_ItemInfo_C_UpdateRarityWidgets::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_UpdateRarityWidgets, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000090, "Member 'AthenaLocker_ItemInfo_C_UpdateRarityWidgets::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLocker_ItemInfo_C_UpdateRarityWidgets, K2Node_Select_Default_2) == 0x000098, "Member 'AthenaLocker_ItemInfo_C_UpdateRarityWidgets::K2Node_Select_Default_2' has a wrong offset!");

}
