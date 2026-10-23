#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UAthenaFloatSliderVariantPicker_C final : public UFortFloatSliderVariantPicker
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UOverlay*                               Panel_Value;
	class USimpleMaterialProgressBar_C*           Progress;

public:
	void OnUpdateValue(float NormalizedValue, bool bIsLocked);
	void ExecuteUbergraph_AthenaFloatSliderVariantPicker(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaFloatSliderVariantPicker_C">();
	}
	static class UAthenaFloatSliderVariantPicker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaFloatSliderVariantPicker_C>();
	}
};
static_assert(alignof(UAthenaFloatSliderVariantPicker_C) == 0x000008, "Wrong alignment on UAthenaFloatSliderVariantPicker_C");
static_assert(sizeof(UAthenaFloatSliderVariantPicker_C) == 0x0003B8, "Wrong size on UAthenaFloatSliderVariantPicker_C");
static_assert(offsetof(UAthenaFloatSliderVariantPicker_C, UberGraphFrame) == 0x0003A0, "Member 'UAthenaFloatSliderVariantPicker_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaFloatSliderVariantPicker_C, Panel_Value) == 0x0003A8, "Member 'UAthenaFloatSliderVariantPicker_C::Panel_Value' has a wrong offset!");
static_assert(offsetof(UAthenaFloatSliderVariantPicker_C, Progress) == 0x0003B0, "Member 'UAthenaFloatSliderVariantPicker_C::Progress' has a wrong offset!");

}
