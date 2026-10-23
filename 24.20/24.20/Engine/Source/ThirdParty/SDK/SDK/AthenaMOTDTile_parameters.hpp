#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	uint8                                         Pad_7[0x1];
	struct FGeometry                              K2Node_Event_MyGeometry;
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;
	struct FPointerEvent                          K2Node_Event_MouseEvent;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	bool                                          K2Node_Event_IsDesignTime;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile) == 0x000008, "Wrong alignment on AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile");
static_assert(sizeof(AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile) == 0x000190, "Wrong size on AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile");
static_assert(offsetof(AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile, EntryPoint) == 0x000000, "Member 'AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile, Temp_bool_Variable) == 0x000004, "Member 'AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile, Temp_byte_Variable) == 0x000005, "Member 'AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile, Temp_byte_Variable_1) == 0x000006, "Member 'AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile, K2Node_Event_MyGeometry) == 0x000008, "Member 'AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile, K2Node_Event_MouseEvent_1) == 0x000048, "Member 'AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile, K2Node_Event_MouseEvent) == 0x0000E0, "Member 'AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000178, "Member 'AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile, CallFunc_PlayAnimationForward_ReturnValue) == 0x000180, "Member 'AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile, K2Node_Event_IsDesignTime) == 0x000188, "Member 'AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile, K2Node_Select_Default) == 0x000189, "Member 'AthenaMOTDTile_C_ExecuteUbergraph_AthenaMOTDTile::K2Node_Select_Default' has a wrong offset!");

struct AthenaMOTDTile_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(AthenaMOTDTile_C_OnMouseEnter) == 0x000008, "Wrong alignment on AthenaMOTDTile_C_OnMouseEnter");
static_assert(sizeof(AthenaMOTDTile_C_OnMouseEnter) == 0x0000D8, "Wrong size on AthenaMOTDTile_C_OnMouseEnter");
static_assert(offsetof(AthenaMOTDTile_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'AthenaMOTDTile_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTile_C_OnMouseEnter, MouseEvent) == 0x000040, "Member 'AthenaMOTDTile_C_OnMouseEnter::MouseEvent' has a wrong offset!");

struct AthenaMOTDTile_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(AthenaMOTDTile_C_OnMouseLeave) == 0x000008, "Wrong alignment on AthenaMOTDTile_C_OnMouseLeave");
static_assert(sizeof(AthenaMOTDTile_C_OnMouseLeave) == 0x000098, "Wrong size on AthenaMOTDTile_C_OnMouseLeave");
static_assert(offsetof(AthenaMOTDTile_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'AthenaMOTDTile_C_OnMouseLeave::MouseEvent' has a wrong offset!");

struct AthenaMOTDTile_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(AthenaMOTDTile_C_PreConstruct) == 0x000001, "Wrong alignment on AthenaMOTDTile_C_PreConstruct");
static_assert(sizeof(AthenaMOTDTile_C_PreConstruct) == 0x000001, "Wrong size on AthenaMOTDTile_C_PreConstruct");
static_assert(offsetof(AthenaMOTDTile_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'AthenaMOTDTile_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct AthenaMOTDTile_C_ShowImageOnly final
{
public:
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(AthenaMOTDTile_C_ShowImageOnly) == 0x000001, "Wrong alignment on AthenaMOTDTile_C_ShowImageOnly");
static_assert(sizeof(AthenaMOTDTile_C_ShowImageOnly) == 0x000004, "Wrong size on AthenaMOTDTile_C_ShowImageOnly");
static_assert(offsetof(AthenaMOTDTile_C_ShowImageOnly, Temp_bool_Variable) == 0x000000, "Member 'AthenaMOTDTile_C_ShowImageOnly::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTile_C_ShowImageOnly, Temp_byte_Variable) == 0x000001, "Member 'AthenaMOTDTile_C_ShowImageOnly::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTile_C_ShowImageOnly, Temp_byte_Variable_1) == 0x000002, "Member 'AthenaMOTDTile_C_ShowImageOnly::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTile_C_ShowImageOnly, K2Node_Select_Default) == 0x000003, "Member 'AthenaMOTDTile_C_ShowImageOnly::K2Node_Select_Default' has a wrong offset!");

struct AthenaMOTDTile_C_UpdateDisplay final
{
public:
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(AthenaMOTDTile_C_UpdateDisplay) == 0x000001, "Wrong alignment on AthenaMOTDTile_C_UpdateDisplay");
static_assert(sizeof(AthenaMOTDTile_C_UpdateDisplay) == 0x000004, "Wrong size on AthenaMOTDTile_C_UpdateDisplay");
static_assert(offsetof(AthenaMOTDTile_C_UpdateDisplay, Temp_bool_Variable) == 0x000000, "Member 'AthenaMOTDTile_C_UpdateDisplay::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTile_C_UpdateDisplay, Temp_byte_Variable) == 0x000001, "Member 'AthenaMOTDTile_C_UpdateDisplay::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTile_C_UpdateDisplay, Temp_byte_Variable_1) == 0x000002, "Member 'AthenaMOTDTile_C_UpdateDisplay::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTile_C_UpdateDisplay, K2Node_Select_Default) == 0x000003, "Member 'AthenaMOTDTile_C_UpdateDisplay::K2Node_Select_Default' has a wrong offset!");

}
