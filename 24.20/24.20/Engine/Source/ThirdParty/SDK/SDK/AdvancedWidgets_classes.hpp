#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class URadialSlider final : public UWidget
{
public:
	float                                         Value;
	TDelegate<void()>                             ValueDelegate;
	bool                                          bUseCustomDefaultValue;
	uint8                                         Pad_159[0x3];
	float                                         CustomDefaultValue;
	struct FRuntimeFloatCurve                     SliderRange;
	TArray<float>                                 ValueTags;
	float                                         SliderHandleStartAngle;
	float                                         SliderHandleEndAngle;
	float                                         AngularOffset;
	uint8                                         Pad_204[0x4];
	struct FVector2D                              HandStartEndRatio;
	uint8                                         Pad_218[0x8];
	struct FSliderStyle                           WidgetStyle;
	struct FLinearColor                           SliderBarColor;
	struct FLinearColor                           SliderProgressColor;
	struct FLinearColor                           SliderHandleColor;
	struct FLinearColor                           CenterBackgroundColor;
	bool                                          Locked;
	bool                                          MouseUsesStep;
	bool                                          RequiresControllerLock;
	uint8                                         Pad_703[0x1];
	float                                         StepSize;
	bool                                          IsFocusable;
	bool                                          UseVerticalDrag;
	bool                                          ShowSliderHandle;
	bool                                          ShowSliderHand;
	uint8                                         Pad_70C[0x4];
	TMulticastInlineDelegate<void()>              OnMouseCaptureBegin;
	TMulticastInlineDelegate<void()>              OnMouseCaptureEnd;
	TMulticastInlineDelegate<void()>              OnControllerCaptureBegin;
	TMulticastInlineDelegate<void()>              OnControllerCaptureEnd;
	TMulticastInlineDelegate<void(float Value)>   OnValueChanged;
	uint8                                         Pad_760[0x10];

public:
	void SetAngularOffset(float InValue);
	void SetCenterBackgroundColor(const struct FLinearColor& InValue);
	void SetCustomDefaultValue(float InValue);
	void SetHandStartEndRatio(const struct FVector2D& InValue);
	void SetLocked(bool InValue);
	void SetShowSliderHand(bool InShowSliderHand);
	void SetShowSliderHandle(bool InShowSliderHandle);
	void SetSliderBarColor(const struct FLinearColor& InValue);
	void SetSliderHandleColor(const struct FLinearColor& InValue);
	void SetSliderHandleEndAngle(float InValue);
	void SetSliderHandleStartAngle(float InValue);
	void SetSliderProgressColor(const struct FLinearColor& InValue);
	void SetSliderRange(const struct FRuntimeFloatCurve& InSliderRange);
	void SetStepSize(float InValue);
	void SetUseVerticalDrag(bool InUseVerticalDrag);
	void SetValue(float InValue);
	void SetValueTags(const TArray<float>& InValueTags);

	float GetCustomDefaultValue() const;
	float GetNormalizedSliderHandlePosition() const;
	float GetValue() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RadialSlider">();
	}
	static class URadialSlider* GetDefaultObj()
	{
		return GetDefaultObjImpl<URadialSlider>();
	}
};
static_assert(alignof(URadialSlider) == 0x000010, "Wrong alignment on URadialSlider");
static_assert(sizeof(URadialSlider) == 0x000770, "Wrong size on URadialSlider");
static_assert(offsetof(URadialSlider, Value) == 0x000148, "Member 'URadialSlider::Value' has a wrong offset!");
static_assert(offsetof(URadialSlider, ValueDelegate) == 0x00014C, "Member 'URadialSlider::ValueDelegate' has a wrong offset!");
static_assert(offsetof(URadialSlider, bUseCustomDefaultValue) == 0x000158, "Member 'URadialSlider::bUseCustomDefaultValue' has a wrong offset!");
static_assert(offsetof(URadialSlider, CustomDefaultValue) == 0x00015C, "Member 'URadialSlider::CustomDefaultValue' has a wrong offset!");
static_assert(offsetof(URadialSlider, SliderRange) == 0x000160, "Member 'URadialSlider::SliderRange' has a wrong offset!");
static_assert(offsetof(URadialSlider, ValueTags) == 0x0001E8, "Member 'URadialSlider::ValueTags' has a wrong offset!");
static_assert(offsetof(URadialSlider, SliderHandleStartAngle) == 0x0001F8, "Member 'URadialSlider::SliderHandleStartAngle' has a wrong offset!");
static_assert(offsetof(URadialSlider, SliderHandleEndAngle) == 0x0001FC, "Member 'URadialSlider::SliderHandleEndAngle' has a wrong offset!");
static_assert(offsetof(URadialSlider, AngularOffset) == 0x000200, "Member 'URadialSlider::AngularOffset' has a wrong offset!");
static_assert(offsetof(URadialSlider, HandStartEndRatio) == 0x000208, "Member 'URadialSlider::HandStartEndRatio' has a wrong offset!");
static_assert(offsetof(URadialSlider, WidgetStyle) == 0x000220, "Member 'URadialSlider::WidgetStyle' has a wrong offset!");
static_assert(offsetof(URadialSlider, SliderBarColor) == 0x0006C0, "Member 'URadialSlider::SliderBarColor' has a wrong offset!");
static_assert(offsetof(URadialSlider, SliderProgressColor) == 0x0006D0, "Member 'URadialSlider::SliderProgressColor' has a wrong offset!");
static_assert(offsetof(URadialSlider, SliderHandleColor) == 0x0006E0, "Member 'URadialSlider::SliderHandleColor' has a wrong offset!");
static_assert(offsetof(URadialSlider, CenterBackgroundColor) == 0x0006F0, "Member 'URadialSlider::CenterBackgroundColor' has a wrong offset!");
static_assert(offsetof(URadialSlider, Locked) == 0x000700, "Member 'URadialSlider::Locked' has a wrong offset!");
static_assert(offsetof(URadialSlider, MouseUsesStep) == 0x000701, "Member 'URadialSlider::MouseUsesStep' has a wrong offset!");
static_assert(offsetof(URadialSlider, RequiresControllerLock) == 0x000702, "Member 'URadialSlider::RequiresControllerLock' has a wrong offset!");
static_assert(offsetof(URadialSlider, StepSize) == 0x000704, "Member 'URadialSlider::StepSize' has a wrong offset!");
static_assert(offsetof(URadialSlider, IsFocusable) == 0x000708, "Member 'URadialSlider::IsFocusable' has a wrong offset!");
static_assert(offsetof(URadialSlider, UseVerticalDrag) == 0x000709, "Member 'URadialSlider::UseVerticalDrag' has a wrong offset!");
static_assert(offsetof(URadialSlider, ShowSliderHandle) == 0x00070A, "Member 'URadialSlider::ShowSliderHandle' has a wrong offset!");
static_assert(offsetof(URadialSlider, ShowSliderHand) == 0x00070B, "Member 'URadialSlider::ShowSliderHand' has a wrong offset!");
static_assert(offsetof(URadialSlider, OnMouseCaptureBegin) == 0x000710, "Member 'URadialSlider::OnMouseCaptureBegin' has a wrong offset!");
static_assert(offsetof(URadialSlider, OnMouseCaptureEnd) == 0x000720, "Member 'URadialSlider::OnMouseCaptureEnd' has a wrong offset!");
static_assert(offsetof(URadialSlider, OnControllerCaptureBegin) == 0x000730, "Member 'URadialSlider::OnControllerCaptureBegin' has a wrong offset!");
static_assert(offsetof(URadialSlider, OnControllerCaptureEnd) == 0x000740, "Member 'URadialSlider::OnControllerCaptureEnd' has a wrong offset!");
static_assert(offsetof(URadialSlider, OnValueChanged) == 0x000750, "Member 'URadialSlider::OnValueChanged' has a wrong offset!");

}
