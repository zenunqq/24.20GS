#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct AthenaFloatSliderVariantPicker_C_OnUpdateValue final
{
public:
	float                                         NormalizedValue;
	bool                                          bIsLocked;
};
static_assert(alignof(AthenaFloatSliderVariantPicker_C_OnUpdateValue) == 0x000004, "Wrong alignment on AthenaFloatSliderVariantPicker_C_OnUpdateValue");
static_assert(sizeof(AthenaFloatSliderVariantPicker_C_OnUpdateValue) == 0x000008, "Wrong size on AthenaFloatSliderVariantPicker_C_OnUpdateValue");
static_assert(offsetof(AthenaFloatSliderVariantPicker_C_OnUpdateValue, NormalizedValue) == 0x000000, "Member 'AthenaFloatSliderVariantPicker_C_OnUpdateValue::NormalizedValue' has a wrong offset!");
static_assert(offsetof(AthenaFloatSliderVariantPicker_C_OnUpdateValue, bIsLocked) == 0x000004, "Member 'AthenaFloatSliderVariantPicker_C_OnUpdateValue::bIsLocked' has a wrong offset!");

struct AthenaFloatSliderVariantPicker_C_ExecuteUbergraph_AthenaFloatSliderVariantPicker final
{
public:
	int32                                         EntryPoint;
	float                                         K2Node_Event_NormalizedValue;
	bool                                          K2Node_Event_bIsLocked;
	uint8                                         Pad_9[0x3];
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;
};
static_assert(alignof(AthenaFloatSliderVariantPicker_C_ExecuteUbergraph_AthenaFloatSliderVariantPicker) == 0x000004, "Wrong alignment on AthenaFloatSliderVariantPicker_C_ExecuteUbergraph_AthenaFloatSliderVariantPicker");
static_assert(sizeof(AthenaFloatSliderVariantPicker_C_ExecuteUbergraph_AthenaFloatSliderVariantPicker) == 0x00001C, "Wrong size on AthenaFloatSliderVariantPicker_C_ExecuteUbergraph_AthenaFloatSliderVariantPicker");
static_assert(offsetof(AthenaFloatSliderVariantPicker_C_ExecuteUbergraph_AthenaFloatSliderVariantPicker, EntryPoint) == 0x000000, "Member 'AthenaFloatSliderVariantPicker_C_ExecuteUbergraph_AthenaFloatSliderVariantPicker::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaFloatSliderVariantPicker_C_ExecuteUbergraph_AthenaFloatSliderVariantPicker, K2Node_Event_NormalizedValue) == 0x000004, "Member 'AthenaFloatSliderVariantPicker_C_ExecuteUbergraph_AthenaFloatSliderVariantPicker::K2Node_Event_NormalizedValue' has a wrong offset!");
static_assert(offsetof(AthenaFloatSliderVariantPicker_C_ExecuteUbergraph_AthenaFloatSliderVariantPicker, K2Node_Event_bIsLocked) == 0x000008, "Member 'AthenaFloatSliderVariantPicker_C_ExecuteUbergraph_AthenaFloatSliderVariantPicker::K2Node_Event_bIsLocked' has a wrong offset!");
static_assert(offsetof(AthenaFloatSliderVariantPicker_C_ExecuteUbergraph_AthenaFloatSliderVariantPicker, CallFunc_SelectColor_ReturnValue) == 0x00000C, "Member 'AthenaFloatSliderVariantPicker_C_ExecuteUbergraph_AthenaFloatSliderVariantPicker::CallFunc_SelectColor_ReturnValue' has a wrong offset!");

}
