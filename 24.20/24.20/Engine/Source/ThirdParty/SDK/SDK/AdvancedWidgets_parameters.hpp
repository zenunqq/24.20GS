#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct RadialSlider_SetAngularOffset final
{
public:
	float                                         InValue;
};
static_assert(alignof(RadialSlider_SetAngularOffset) == 0x000004, "Wrong alignment on RadialSlider_SetAngularOffset");
static_assert(sizeof(RadialSlider_SetAngularOffset) == 0x000004, "Wrong size on RadialSlider_SetAngularOffset");
static_assert(offsetof(RadialSlider_SetAngularOffset, InValue) == 0x000000, "Member 'RadialSlider_SetAngularOffset::InValue' has a wrong offset!");

struct RadialSlider_SetCenterBackgroundColor final
{
public:
	struct FLinearColor                           InValue;
};
static_assert(alignof(RadialSlider_SetCenterBackgroundColor) == 0x000004, "Wrong alignment on RadialSlider_SetCenterBackgroundColor");
static_assert(sizeof(RadialSlider_SetCenterBackgroundColor) == 0x000010, "Wrong size on RadialSlider_SetCenterBackgroundColor");
static_assert(offsetof(RadialSlider_SetCenterBackgroundColor, InValue) == 0x000000, "Member 'RadialSlider_SetCenterBackgroundColor::InValue' has a wrong offset!");

struct RadialSlider_SetCustomDefaultValue final
{
public:
	float                                         InValue;
};
static_assert(alignof(RadialSlider_SetCustomDefaultValue) == 0x000004, "Wrong alignment on RadialSlider_SetCustomDefaultValue");
static_assert(sizeof(RadialSlider_SetCustomDefaultValue) == 0x000004, "Wrong size on RadialSlider_SetCustomDefaultValue");
static_assert(offsetof(RadialSlider_SetCustomDefaultValue, InValue) == 0x000000, "Member 'RadialSlider_SetCustomDefaultValue::InValue' has a wrong offset!");

struct RadialSlider_SetHandStartEndRatio final
{
public:
	struct FVector2D                              InValue;
};
static_assert(alignof(RadialSlider_SetHandStartEndRatio) == 0x000008, "Wrong alignment on RadialSlider_SetHandStartEndRatio");
static_assert(sizeof(RadialSlider_SetHandStartEndRatio) == 0x000010, "Wrong size on RadialSlider_SetHandStartEndRatio");
static_assert(offsetof(RadialSlider_SetHandStartEndRatio, InValue) == 0x000000, "Member 'RadialSlider_SetHandStartEndRatio::InValue' has a wrong offset!");

struct RadialSlider_SetLocked final
{
public:
	bool                                          InValue;
};
static_assert(alignof(RadialSlider_SetLocked) == 0x000001, "Wrong alignment on RadialSlider_SetLocked");
static_assert(sizeof(RadialSlider_SetLocked) == 0x000001, "Wrong size on RadialSlider_SetLocked");
static_assert(offsetof(RadialSlider_SetLocked, InValue) == 0x000000, "Member 'RadialSlider_SetLocked::InValue' has a wrong offset!");

struct RadialSlider_SetShowSliderHand final
{
public:
	bool                                          InShowSliderHand;
};
static_assert(alignof(RadialSlider_SetShowSliderHand) == 0x000001, "Wrong alignment on RadialSlider_SetShowSliderHand");
static_assert(sizeof(RadialSlider_SetShowSliderHand) == 0x000001, "Wrong size on RadialSlider_SetShowSliderHand");
static_assert(offsetof(RadialSlider_SetShowSliderHand, InShowSliderHand) == 0x000000, "Member 'RadialSlider_SetShowSliderHand::InShowSliderHand' has a wrong offset!");

struct RadialSlider_SetShowSliderHandle final
{
public:
	bool                                          InShowSliderHandle;
};
static_assert(alignof(RadialSlider_SetShowSliderHandle) == 0x000001, "Wrong alignment on RadialSlider_SetShowSliderHandle");
static_assert(sizeof(RadialSlider_SetShowSliderHandle) == 0x000001, "Wrong size on RadialSlider_SetShowSliderHandle");
static_assert(offsetof(RadialSlider_SetShowSliderHandle, InShowSliderHandle) == 0x000000, "Member 'RadialSlider_SetShowSliderHandle::InShowSliderHandle' has a wrong offset!");

struct RadialSlider_SetSliderBarColor final
{
public:
	struct FLinearColor                           InValue;
};
static_assert(alignof(RadialSlider_SetSliderBarColor) == 0x000004, "Wrong alignment on RadialSlider_SetSliderBarColor");
static_assert(sizeof(RadialSlider_SetSliderBarColor) == 0x000010, "Wrong size on RadialSlider_SetSliderBarColor");
static_assert(offsetof(RadialSlider_SetSliderBarColor, InValue) == 0x000000, "Member 'RadialSlider_SetSliderBarColor::InValue' has a wrong offset!");

struct RadialSlider_SetSliderHandleColor final
{
public:
	struct FLinearColor                           InValue;
};
static_assert(alignof(RadialSlider_SetSliderHandleColor) == 0x000004, "Wrong alignment on RadialSlider_SetSliderHandleColor");
static_assert(sizeof(RadialSlider_SetSliderHandleColor) == 0x000010, "Wrong size on RadialSlider_SetSliderHandleColor");
static_assert(offsetof(RadialSlider_SetSliderHandleColor, InValue) == 0x000000, "Member 'RadialSlider_SetSliderHandleColor::InValue' has a wrong offset!");

struct RadialSlider_SetSliderHandleEndAngle final
{
public:
	float                                         InValue;
};
static_assert(alignof(RadialSlider_SetSliderHandleEndAngle) == 0x000004, "Wrong alignment on RadialSlider_SetSliderHandleEndAngle");
static_assert(sizeof(RadialSlider_SetSliderHandleEndAngle) == 0x000004, "Wrong size on RadialSlider_SetSliderHandleEndAngle");
static_assert(offsetof(RadialSlider_SetSliderHandleEndAngle, InValue) == 0x000000, "Member 'RadialSlider_SetSliderHandleEndAngle::InValue' has a wrong offset!");

struct RadialSlider_SetSliderHandleStartAngle final
{
public:
	float                                         InValue;
};
static_assert(alignof(RadialSlider_SetSliderHandleStartAngle) == 0x000004, "Wrong alignment on RadialSlider_SetSliderHandleStartAngle");
static_assert(sizeof(RadialSlider_SetSliderHandleStartAngle) == 0x000004, "Wrong size on RadialSlider_SetSliderHandleStartAngle");
static_assert(offsetof(RadialSlider_SetSliderHandleStartAngle, InValue) == 0x000000, "Member 'RadialSlider_SetSliderHandleStartAngle::InValue' has a wrong offset!");

struct RadialSlider_SetSliderProgressColor final
{
public:
	struct FLinearColor                           InValue;
};
static_assert(alignof(RadialSlider_SetSliderProgressColor) == 0x000004, "Wrong alignment on RadialSlider_SetSliderProgressColor");
static_assert(sizeof(RadialSlider_SetSliderProgressColor) == 0x000010, "Wrong size on RadialSlider_SetSliderProgressColor");
static_assert(offsetof(RadialSlider_SetSliderProgressColor, InValue) == 0x000000, "Member 'RadialSlider_SetSliderProgressColor::InValue' has a wrong offset!");

struct RadialSlider_SetSliderRange final
{
public:
	struct FRuntimeFloatCurve                     InSliderRange;
};
static_assert(alignof(RadialSlider_SetSliderRange) == 0x000008, "Wrong alignment on RadialSlider_SetSliderRange");
static_assert(sizeof(RadialSlider_SetSliderRange) == 0x000088, "Wrong size on RadialSlider_SetSliderRange");
static_assert(offsetof(RadialSlider_SetSliderRange, InSliderRange) == 0x000000, "Member 'RadialSlider_SetSliderRange::InSliderRange' has a wrong offset!");

struct RadialSlider_SetStepSize final
{
public:
	float                                         InValue;
};
static_assert(alignof(RadialSlider_SetStepSize) == 0x000004, "Wrong alignment on RadialSlider_SetStepSize");
static_assert(sizeof(RadialSlider_SetStepSize) == 0x000004, "Wrong size on RadialSlider_SetStepSize");
static_assert(offsetof(RadialSlider_SetStepSize, InValue) == 0x000000, "Member 'RadialSlider_SetStepSize::InValue' has a wrong offset!");

struct RadialSlider_SetUseVerticalDrag final
{
public:
	bool                                          InUseVerticalDrag;
};
static_assert(alignof(RadialSlider_SetUseVerticalDrag) == 0x000001, "Wrong alignment on RadialSlider_SetUseVerticalDrag");
static_assert(sizeof(RadialSlider_SetUseVerticalDrag) == 0x000001, "Wrong size on RadialSlider_SetUseVerticalDrag");
static_assert(offsetof(RadialSlider_SetUseVerticalDrag, InUseVerticalDrag) == 0x000000, "Member 'RadialSlider_SetUseVerticalDrag::InUseVerticalDrag' has a wrong offset!");

struct RadialSlider_SetValue final
{
public:
	float                                         InValue;
};
static_assert(alignof(RadialSlider_SetValue) == 0x000004, "Wrong alignment on RadialSlider_SetValue");
static_assert(sizeof(RadialSlider_SetValue) == 0x000004, "Wrong size on RadialSlider_SetValue");
static_assert(offsetof(RadialSlider_SetValue, InValue) == 0x000000, "Member 'RadialSlider_SetValue::InValue' has a wrong offset!");

struct RadialSlider_SetValueTags final
{
public:
	TArray<float>                                 InValueTags;
};
static_assert(alignof(RadialSlider_SetValueTags) == 0x000008, "Wrong alignment on RadialSlider_SetValueTags");
static_assert(sizeof(RadialSlider_SetValueTags) == 0x000010, "Wrong size on RadialSlider_SetValueTags");
static_assert(offsetof(RadialSlider_SetValueTags, InValueTags) == 0x000000, "Member 'RadialSlider_SetValueTags::InValueTags' has a wrong offset!");

struct RadialSlider_GetCustomDefaultValue final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(RadialSlider_GetCustomDefaultValue) == 0x000004, "Wrong alignment on RadialSlider_GetCustomDefaultValue");
static_assert(sizeof(RadialSlider_GetCustomDefaultValue) == 0x000004, "Wrong size on RadialSlider_GetCustomDefaultValue");
static_assert(offsetof(RadialSlider_GetCustomDefaultValue, ReturnValue) == 0x000000, "Member 'RadialSlider_GetCustomDefaultValue::ReturnValue' has a wrong offset!");

struct RadialSlider_GetNormalizedSliderHandlePosition final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(RadialSlider_GetNormalizedSliderHandlePosition) == 0x000004, "Wrong alignment on RadialSlider_GetNormalizedSliderHandlePosition");
static_assert(sizeof(RadialSlider_GetNormalizedSliderHandlePosition) == 0x000004, "Wrong size on RadialSlider_GetNormalizedSliderHandlePosition");
static_assert(offsetof(RadialSlider_GetNormalizedSliderHandlePosition, ReturnValue) == 0x000000, "Member 'RadialSlider_GetNormalizedSliderHandlePosition::ReturnValue' has a wrong offset!");

struct RadialSlider_GetValue final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(RadialSlider_GetValue) == 0x000004, "Wrong alignment on RadialSlider_GetValue");
static_assert(sizeof(RadialSlider_GetValue) == 0x000004, "Wrong size on RadialSlider_GetValue");
static_assert(offsetof(RadialSlider_GetValue, ReturnValue) == 0x000000, "Member 'RadialSlider_GetValue::ReturnValue' has a wrong offset!");

}
