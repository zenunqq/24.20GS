#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct WBP_Augment_CollectionListEntry_C_BP_OnCollectionStateSet final
{
public:
	EFortCollectedState                           CollectedState;
};
static_assert(alignof(WBP_Augment_CollectionListEntry_C_BP_OnCollectionStateSet) == 0x000001, "Wrong alignment on WBP_Augment_CollectionListEntry_C_BP_OnCollectionStateSet");
static_assert(sizeof(WBP_Augment_CollectionListEntry_C_BP_OnCollectionStateSet) == 0x000001, "Wrong size on WBP_Augment_CollectionListEntry_C_BP_OnCollectionStateSet");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_BP_OnCollectionStateSet, CollectedState) == 0x000000, "Member 'WBP_Augment_CollectionListEntry_C_BP_OnCollectionStateSet::CollectedState' has a wrong offset!");

struct WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry final
{
public:
	int32                                         EntryPoint;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	EFortCollectedState                           Temp_byte_Variable_3;
	EFortCollectedState                           Temp_byte_Variable_4;
	ESlateVisibility                              Temp_byte_Variable_5;
	ESlateVisibility                              Temp_byte_Variable_6;
	ESlateVisibility                              Temp_byte_Variable_7;
	ESlateVisibility                              Temp_byte_Variable_8;
	ESlateVisibility                              Temp_byte_Variable_9;
	ESlateVisibility                              Temp_byte_Variable_10;
	ESlateVisibility                              Temp_byte_Variable_11;
	ESlateVisibility                              Temp_byte_Variable_12;
	ESlateVisibility                              Temp_byte_Variable_13;
	ESlateVisibility                              Temp_byte_Variable_14;
	bool                                          Temp_bool_Variable;
	bool                                          Temp_bool_Variable_1;
	bool                                          Temp_bool_Variable_2;
	EFortCollectedState                           Temp_byte_Variable_15;
	uint8                                         Pad_17[0x1];
	double                                        Temp_real_Variable;
	double                                        Temp_real_Variable_1;
	double                                        Temp_real_Variable_2;
	double                                        Temp_real_Variable_3;
	double                                        Temp_real_Variable_4;
	double                                        Temp_real_Variable_5;
	double                                        Temp_real_Variable_6;
	double                                        Temp_real_Variable_7;
	double                                        Temp_real_Variable_8;
	double                                        Temp_real_Variable_9;
	bool                                          Temp_bool_Variable_3;
	uint8                                         Pad_69[0x7];
	double                                        Temp_real_Variable_10;
	double                                        Temp_real_Variable_11;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	bool                                          CallFunc_GetSelected_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_GetSelected_ReturnValue_1;
	bool                                          CallFunc_IsUsingTouch_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	EFortCollectedState                           K2Node_Event_CollectedState;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	uint8                                         Pad_93[0x5];
	double                                        K2Node_Select_Default_1;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	uint8                                         Pad_A1[0x7];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicFontMaterial_ReturnValue;
	double                                        K2Node_Select_Default_2;
	ESlateVisibility                              Temp_byte_Variable_16;
	uint8                                         Pad_B9[0x7];
	class FText                                   K2Node_Select_Default_3;
	ESlateVisibility                              Temp_byte_Variable_17;
	uint8                                         Pad_D9[0x3];
	struct FLinearColor                           K2Node_Select_Default_4;
	bool                                          CallFunc_GetSelected_ReturnValue_2;
	uint8                                         Pad_ED[0x3];
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;
	struct FSlateColor                            K2Node_Select_Default_5;
	ESlateVisibility                              Temp_byte_Variable_18;
	ESlateVisibility                              Temp_byte_Variable_19;
	uint8                                         Pad_142[0x6];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_20;
	uint8                                         Pad_151[0x3];
	struct FLinearColor                           K2Node_Select_Default_6;
	ESlateVisibility                              Temp_byte_Variable_21;
	uint8                                         Pad_165[0x3];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
	ESlateVisibility                              Temp_byte_Variable_22;
	EFortCollectedState                           Temp_byte_Variable_23;
	ESlateVisibility                              K2Node_Select_Default_7;
	uint8                                         Pad_173[0x5];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_2;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_2;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
};
static_assert(alignof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry) == 0x000008, "Wrong alignment on WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry");
static_assert(sizeof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry) == 0x0001A8, "Wrong size on WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, EntryPoint) == 0x000000, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_byte_Variable) == 0x000004, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_byte_Variable_1) == 0x000005, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_byte_Variable_2) == 0x000006, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_byte_Variable_3) == 0x000007, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_byte_Variable_4) == 0x000008, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_byte_Variable_5) == 0x000009, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_byte_Variable_6) == 0x00000A, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_byte_Variable_7) == 0x00000B, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_byte_Variable_8) == 0x00000C, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_byte_Variable_9) == 0x00000D, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_byte_Variable_10) == 0x00000E, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_byte_Variable_11) == 0x00000F, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_byte_Variable_12) == 0x000010, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_byte_Variable_12' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_byte_Variable_13) == 0x000011, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_byte_Variable_13' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_byte_Variable_14) == 0x000012, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_byte_Variable_14' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_bool_Variable) == 0x000013, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_bool_Variable_1) == 0x000014, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_bool_Variable_2) == 0x000015, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_byte_Variable_15) == 0x000016, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_byte_Variable_15' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_real_Variable) == 0x000018, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_real_Variable_1) == 0x000020, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_real_Variable_2) == 0x000028, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_real_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_real_Variable_3) == 0x000030, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_real_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_real_Variable_4) == 0x000038, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_real_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_real_Variable_5) == 0x000040, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_real_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_real_Variable_6) == 0x000048, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_real_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_real_Variable_7) == 0x000050, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_real_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_real_Variable_8) == 0x000058, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_real_Variable_8' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_real_Variable_9) == 0x000060, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_real_Variable_9' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_bool_Variable_3) == 0x000068, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_real_Variable_10) == 0x000070, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_real_Variable_10' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_real_Variable_11) == 0x000078, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_real_Variable_11' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, CallFunc_PlayAnimationForward_ReturnValue) == 0x000080, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, CallFunc_GetSelected_ReturnValue) == 0x000088, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::CallFunc_GetSelected_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, CallFunc_Not_PreBool_ReturnValue) == 0x000089, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, CallFunc_GetSelected_ReturnValue_1) == 0x00008A, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::CallFunc_GetSelected_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, CallFunc_IsUsingTouch_ReturnValue) == 0x00008B, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::CallFunc_IsUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, CallFunc_Not_PreBool_ReturnValue_1) == 0x00008C, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, CallFunc_BooleanAND_ReturnValue) == 0x00008D, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, K2Node_Event_CollectedState) == 0x00008E, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::K2Node_Event_CollectedState' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00008F, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, K2Node_Select_Default) == 0x000090, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000091, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, CallFunc_BooleanOR_ReturnValue) == 0x000092, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, K2Node_Select_Default_1) == 0x000098, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0000A0, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, CallFunc_GetDynamicFontMaterial_ReturnValue) == 0x0000A8, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::CallFunc_GetDynamicFontMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, K2Node_Select_Default_2) == 0x0000B0, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_byte_Variable_16) == 0x0000B8, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_byte_Variable_16' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, K2Node_Select_Default_3) == 0x0000C0, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_byte_Variable_17) == 0x0000D8, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_byte_Variable_17' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, K2Node_Select_Default_4) == 0x0000DC, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, CallFunc_GetSelected_ReturnValue_2) == 0x0000EC, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::CallFunc_GetSelected_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, K2Node_MakeStruct_SlateColor) == 0x0000F0, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, K2Node_MakeStruct_SlateColor_1) == 0x000104, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, K2Node_MakeStruct_SlateColor_2) == 0x000118, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, K2Node_Select_Default_5) == 0x00012C, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_byte_Variable_18) == 0x000140, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_byte_Variable_18' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_byte_Variable_19) == 0x000141, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_byte_Variable_19' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000148, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_byte_Variable_20) == 0x000150, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_byte_Variable_20' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, K2Node_Select_Default_6) == 0x000154, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_byte_Variable_21) == 0x000164, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_byte_Variable_21' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000168, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_byte_Variable_22) == 0x000170, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_byte_Variable_22' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, Temp_byte_Variable_23) == 0x000171, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::Temp_byte_Variable_23' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, K2Node_Select_Default_7) == 0x000172, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::K2Node_Select_Default_7' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000178, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000180, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, CallFunc_PlayAnimationForward_ReturnValue_2) == 0x000188, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::CallFunc_PlayAnimationForward_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, CallFunc_PlayAnimationReverse_ReturnValue_1) == 0x000190, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::CallFunc_PlayAnimationReverse_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, CallFunc_PlayAnimationReverse_ReturnValue_2) == 0x000198, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::CallFunc_PlayAnimationReverse_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x0001A0, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x0001A4, "Member 'WBP_Augment_CollectionListEntry_C_ExecuteUbergraph_WBP_Augment_CollectionListEntry::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");

struct WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter final
{
public:
	double                                        Temp_real_Variable;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_9[0x3];
	struct FLinearColor                           Temp_struct_Variable;
	struct FLinearColor                           Temp_struct_Variable_1;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_2D[0x3];
	struct FVector2D                              Temp_struct_Variable_2;
	struct FVector2D                              Temp_struct_Variable_3;
	double                                        Temp_real_Variable_1;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_59[0x7];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicFontMaterial_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	struct FVector2D                              Temp_struct_Variable_4;
	struct FVector2D                              Temp_struct_Variable_5;
	bool                                          Temp_bool_Variable_3;
	bool                                          CallFunc_GetSelected_ReturnValue;
	uint8                                         Pad_92[0x6];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
	struct FVector2D                              K2Node_Select_Default;
	double                                        K2Node_Select_Default_1;
	struct FLinearColor                           K2Node_Select_Default_2;
	struct FVector2D                              K2Node_Select_Default_3;
	double                                        CallFunc_SelectFloat_ReturnValue;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_2;
};
static_assert(alignof(WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter) == 0x000008, "Wrong alignment on WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter");
static_assert(sizeof(WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter) == 0x0000F0, "Wrong size on WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter, Temp_real_Variable) == 0x000000, "Member 'WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter, Temp_bool_Variable) == 0x000008, "Member 'WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter, Temp_struct_Variable) == 0x00000C, "Member 'WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter, Temp_struct_Variable_1) == 0x00001C, "Member 'WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter, Temp_bool_Variable_1) == 0x00002C, "Member 'WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter, Temp_struct_Variable_2) == 0x000030, "Member 'WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter, Temp_struct_Variable_3) == 0x000040, "Member 'WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter, Temp_real_Variable_1) == 0x000050, "Member 'WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter, Temp_bool_Variable_2) == 0x000058, "Member 'WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter, CallFunc_GetDynamicFontMaterial_ReturnValue) == 0x000060, "Member 'WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter::CallFunc_GetDynamicFontMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000068, "Member 'WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter, Temp_struct_Variable_4) == 0x000070, "Member 'WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter::Temp_struct_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter, Temp_struct_Variable_5) == 0x000080, "Member 'WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter::Temp_struct_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter, Temp_bool_Variable_3) == 0x000090, "Member 'WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter, CallFunc_GetSelected_ReturnValue) == 0x000091, "Member 'WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter::CallFunc_GetSelected_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000098, "Member 'WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter, K2Node_Select_Default) == 0x0000A0, "Member 'WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter, K2Node_Select_Default_1) == 0x0000B0, "Member 'WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter, K2Node_Select_Default_2) == 0x0000B8, "Member 'WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter, K2Node_Select_Default_3) == 0x0000C8, "Member 'WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter, CallFunc_SelectFloat_ReturnValue) == 0x0000D8, "Member 'WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x0000E0, "Member 'WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x0000E4, "Member 'WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter, CallFunc_SetScalarParameterValue_Value_ImplicitCast_2) == 0x0000E8, "Member 'WBP_Augment_CollectionListEntry_C_Update_Hover_Parameter::CallFunc_SetScalarParameterValue_Value_ImplicitCast_2' has a wrong offset!");

}
