#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct WBP_Augment_CollectionScreenInfoOverlay_C_BP_OnCollectedStateSet final
{
public:
	EFortCollectedState                           CollectedState;
};
static_assert(alignof(WBP_Augment_CollectionScreenInfoOverlay_C_BP_OnCollectedStateSet) == 0x000001, "Wrong alignment on WBP_Augment_CollectionScreenInfoOverlay_C_BP_OnCollectedStateSet");
static_assert(sizeof(WBP_Augment_CollectionScreenInfoOverlay_C_BP_OnCollectedStateSet) == 0x000001, "Wrong size on WBP_Augment_CollectionScreenInfoOverlay_C_BP_OnCollectedStateSet");
static_assert(offsetof(WBP_Augment_CollectionScreenInfoOverlay_C_BP_OnCollectedStateSet, CollectedState) == 0x000000, "Member 'WBP_Augment_CollectionScreenInfoOverlay_C_BP_OnCollectedStateSet::CollectedState' has a wrong offset!");

struct WBP_Augment_CollectionScreenInfoOverlay_C_BP_OnLocationsFoundSet final
{
public:
	int32                                         NumFound;
	int32                                         NumAvailable;
	bool                                          bAllFound;
};
static_assert(alignof(WBP_Augment_CollectionScreenInfoOverlay_C_BP_OnLocationsFoundSet) == 0x000004, "Wrong alignment on WBP_Augment_CollectionScreenInfoOverlay_C_BP_OnLocationsFoundSet");
static_assert(sizeof(WBP_Augment_CollectionScreenInfoOverlay_C_BP_OnLocationsFoundSet) == 0x00000C, "Wrong size on WBP_Augment_CollectionScreenInfoOverlay_C_BP_OnLocationsFoundSet");
static_assert(offsetof(WBP_Augment_CollectionScreenInfoOverlay_C_BP_OnLocationsFoundSet, NumFound) == 0x000000, "Member 'WBP_Augment_CollectionScreenInfoOverlay_C_BP_OnLocationsFoundSet::NumFound' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionScreenInfoOverlay_C_BP_OnLocationsFoundSet, NumAvailable) == 0x000004, "Member 'WBP_Augment_CollectionScreenInfoOverlay_C_BP_OnLocationsFoundSet::NumAvailable' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionScreenInfoOverlay_C_BP_OnLocationsFoundSet, bAllFound) == 0x000008, "Member 'WBP_Augment_CollectionScreenInfoOverlay_C_BP_OnLocationsFoundSet::bAllFound' has a wrong offset!");

struct WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay final
{
public:
	int32                                         EntryPoint;
	ESlateVisibility                              Temp_byte_Variable;
	uint8                                         Pad_5[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_1;
	EFortCollectedState                           Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	ESlateVisibility                              Temp_byte_Variable_4;
	ESlateVisibility                              Temp_byte_Variable_5;
	ESlateVisibility                              Temp_byte_Variable_6;
	ESlateVisibility                              Temp_byte_Variable_7;
	ESlateVisibility                              Temp_byte_Variable_8;
	ESlateVisibility                              Temp_byte_Variable_9;
	ESlateVisibility                              Temp_byte_Variable_10;
	ESlateVisibility                              Temp_byte_Variable_11;
	ESlateVisibility                              Temp_byte_Variable_12;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	EFortCollectedState                           K2Node_Event_CollectedState;
	ESlateVisibility                              K2Node_Select_Default;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              K2Node_Select_Default_1;
	uint8                                         Pad_21[0x3];
	int32                                         K2Node_Event_NumFound;
	int32                                         K2Node_Event_NumAvailable;
	bool                                          K2Node_Event_bAllFound;
};
static_assert(alignof(WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay) == 0x000008, "Wrong alignment on WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay");
static_assert(sizeof(WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay) == 0x000030, "Wrong size on WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay");
static_assert(offsetof(WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay, EntryPoint) == 0x000000, "Member 'WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay, Temp_byte_Variable) == 0x000004, "Member 'WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay, Temp_byte_Variable_1) == 0x000010, "Member 'WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay, Temp_byte_Variable_2) == 0x000011, "Member 'WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay, Temp_byte_Variable_3) == 0x000012, "Member 'WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay, Temp_byte_Variable_4) == 0x000013, "Member 'WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay, Temp_byte_Variable_5) == 0x000014, "Member 'WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay, Temp_byte_Variable_6) == 0x000015, "Member 'WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay, Temp_byte_Variable_7) == 0x000016, "Member 'WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay, Temp_byte_Variable_8) == 0x000017, "Member 'WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay, Temp_byte_Variable_9) == 0x000018, "Member 'WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay, Temp_byte_Variable_10) == 0x000019, "Member 'WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay, Temp_byte_Variable_11) == 0x00001A, "Member 'WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay, Temp_byte_Variable_12) == 0x00001B, "Member 'WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay::Temp_byte_Variable_12' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00001C, "Member 'WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay, K2Node_Event_CollectedState) == 0x00001D, "Member 'WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay::K2Node_Event_CollectedState' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay, K2Node_Select_Default) == 0x00001E, "Member 'WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay, Temp_bool_Variable) == 0x00001F, "Member 'WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay, K2Node_Select_Default_1) == 0x000020, "Member 'WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay, K2Node_Event_NumFound) == 0x000024, "Member 'WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay::K2Node_Event_NumFound' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay, K2Node_Event_NumAvailable) == 0x000028, "Member 'WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay::K2Node_Event_NumAvailable' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay, K2Node_Event_bAllFound) == 0x00002C, "Member 'WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay::K2Node_Event_bAllFound' has a wrong offset!");

}
