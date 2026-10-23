#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_BP_OnCollectedStateSet final
{
public:
	EFortCollectedState                           CollectedState;
};
static_assert(alignof(BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_BP_OnCollectedStateSet) == 0x000001, "Wrong alignment on BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_BP_OnCollectedStateSet");
static_assert(sizeof(BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_BP_OnCollectedStateSet) == 0x000001, "Wrong size on BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_BP_OnCollectedStateSet");
static_assert(offsetof(BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_BP_OnCollectedStateSet, CollectedState) == 0x000000, "Member 'BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_BP_OnCollectedStateSet::CollectedState' has a wrong offset!");

struct BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_BP_OnLocationsFoundSet_1 final
{
public:
	int32                                         NumFound;
	int32                                         NumAvailable;
	bool                                          bAllFound;
};
static_assert(alignof(BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_BP_OnLocationsFoundSet_1) == 0x000004, "Wrong alignment on BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_BP_OnLocationsFoundSet_1");
static_assert(sizeof(BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_BP_OnLocationsFoundSet_1) == 0x00000C, "Wrong size on BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_BP_OnLocationsFoundSet_1");
static_assert(offsetof(BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_BP_OnLocationsFoundSet_1, NumFound) == 0x000000, "Member 'BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_BP_OnLocationsFoundSet_1::NumFound' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_BP_OnLocationsFoundSet_1, NumAvailable) == 0x000004, "Member 'BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_BP_OnLocationsFoundSet_1::NumAvailable' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_BP_OnLocationsFoundSet_1, bAllFound) == 0x000008, "Member 'BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_BP_OnLocationsFoundSet_1::bAllFound' has a wrong offset!");

struct BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices final
{
public:
	int32                                         EntryPoint;
	int32                                         K2Node_Event_NumFound;
	int32                                         K2Node_Event_NumAvailable;
	bool                                          K2Node_Event_bAllFound;
	ESlateVisibility                              Temp_byte_Variable;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	EFortCollectedState                           Temp_byte_Variable_3;
	ESlateVisibility                              Temp_byte_Variable_4;
	ESlateVisibility                              Temp_byte_Variable_5;
	ESlateVisibility                              Temp_byte_Variable_6;
	ESlateVisibility                              Temp_byte_Variable_7;
	ESlateVisibility                              Temp_byte_Variable_8;
	ESlateVisibility                              Temp_byte_Variable_9;
	ESlateVisibility                              Temp_byte_Variable_10;
	ESlateVisibility                              Temp_byte_Variable_11;
	ESlateVisibility                              Temp_byte_Variable_12;
	ESlateVisibility                              Temp_byte_Variable_13;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
	ESlateVisibility                              K2Node_Select_Default_1;
	EFortCollectedState                           K2Node_Event_CollectedState;
	ESlateVisibility                              Temp_byte_Variable_14;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              K2Node_Select_Default_2;
	uint8                                         Pad_23[0x5];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
};
static_assert(alignof(BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices) == 0x000008, "Wrong alignment on BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices");
static_assert(sizeof(BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices) == 0x000030, "Wrong size on BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices");
static_assert(offsetof(BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices, EntryPoint) == 0x000000, "Member 'BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices, K2Node_Event_NumFound) == 0x000004, "Member 'BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices::K2Node_Event_NumFound' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices, K2Node_Event_NumAvailable) == 0x000008, "Member 'BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices::K2Node_Event_NumAvailable' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices, K2Node_Event_bAllFound) == 0x00000C, "Member 'BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices::K2Node_Event_bAllFound' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices, Temp_byte_Variable) == 0x00000D, "Member 'BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices, Temp_bool_Variable) == 0x00000E, "Member 'BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices, Temp_byte_Variable_1) == 0x00000F, "Member 'BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices, Temp_byte_Variable_2) == 0x000010, "Member 'BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices, Temp_byte_Variable_3) == 0x000011, "Member 'BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices, Temp_byte_Variable_4) == 0x000012, "Member 'BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices, Temp_byte_Variable_5) == 0x000013, "Member 'BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices, Temp_byte_Variable_6) == 0x000014, "Member 'BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices, Temp_byte_Variable_7) == 0x000015, "Member 'BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices, Temp_byte_Variable_8) == 0x000016, "Member 'BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices, Temp_byte_Variable_9) == 0x000017, "Member 'BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices, Temp_byte_Variable_10) == 0x000018, "Member 'BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices, Temp_byte_Variable_11) == 0x000019, "Member 'BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices, Temp_byte_Variable_12) == 0x00001A, "Member 'BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices::Temp_byte_Variable_12' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices, Temp_byte_Variable_13) == 0x00001B, "Member 'BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices::Temp_byte_Variable_13' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00001C, "Member 'BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices, K2Node_Select_Default) == 0x00001D, "Member 'BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices, K2Node_Select_Default_1) == 0x00001E, "Member 'BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices, K2Node_Event_CollectedState) == 0x00001F, "Member 'BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices::K2Node_Event_CollectedState' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices, Temp_byte_Variable_14) == 0x000020, "Member 'BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices::Temp_byte_Variable_14' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices, Temp_bool_Variable_1) == 0x000021, "Member 'BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices, K2Node_Select_Default_2) == 0x000022, "Member 'BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices, CallFunc_PlayAnimationForward_ReturnValue) == 0x000028, "Member 'BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

}
