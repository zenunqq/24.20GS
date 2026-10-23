#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct UEKittWidget_C_ExecuteUbergraph_UEKittWidget final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	struct FGeometry                              K2Node_Event_MyGeometry;
	float                                         K2Node_Event_InDeltaTime;
};
static_assert(alignof(UEKittWidget_C_ExecuteUbergraph_UEKittWidget) == 0x000008, "Wrong alignment on UEKittWidget_C_ExecuteUbergraph_UEKittWidget");
static_assert(sizeof(UEKittWidget_C_ExecuteUbergraph_UEKittWidget) == 0x000050, "Wrong size on UEKittWidget_C_ExecuteUbergraph_UEKittWidget");
static_assert(offsetof(UEKittWidget_C_ExecuteUbergraph_UEKittWidget, EntryPoint) == 0x000000, "Member 'UEKittWidget_C_ExecuteUbergraph_UEKittWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(UEKittWidget_C_ExecuteUbergraph_UEKittWidget, K2Node_Event_MyGeometry) == 0x000008, "Member 'UEKittWidget_C_ExecuteUbergraph_UEKittWidget::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(UEKittWidget_C_ExecuteUbergraph_UEKittWidget, K2Node_Event_InDeltaTime) == 0x000048, "Member 'UEKittWidget_C_ExecuteUbergraph_UEKittWidget::K2Node_Event_InDeltaTime' has a wrong offset!");

struct UEKittWidget_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;
	float                                         InDeltaTime;
};
static_assert(alignof(UEKittWidget_C_Tick) == 0x000008, "Wrong alignment on UEKittWidget_C_Tick");
static_assert(sizeof(UEKittWidget_C_Tick) == 0x000048, "Wrong size on UEKittWidget_C_Tick");
static_assert(offsetof(UEKittWidget_C_Tick, MyGeometry) == 0x000000, "Member 'UEKittWidget_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(UEKittWidget_C_Tick, InDeltaTime) == 0x000040, "Member 'UEKittWidget_C_Tick::InDeltaTime' has a wrong offset!");

}
