#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class ULocalUserSettingButton_C final : public UFortLocalUserSettingButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OnHover;
	class UBorder*                                Border_InteractionIndicator;
	class UImage*                                 Image_AnimatedArrow;

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_LocalUserSettingButton(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LocalUserSettingButton_C">();
	}
	static class ULocalUserSettingButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULocalUserSettingButton_C>();
	}
};
static_assert(alignof(ULocalUserSettingButton_C) == 0x000010, "Wrong alignment on ULocalUserSettingButton_C");
static_assert(sizeof(ULocalUserSettingButton_C) == 0x001470, "Wrong size on ULocalUserSettingButton_C");
static_assert(offsetof(ULocalUserSettingButton_C, UberGraphFrame) == 0x001450, "Member 'ULocalUserSettingButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULocalUserSettingButton_C, OnHover) == 0x001458, "Member 'ULocalUserSettingButton_C::OnHover' has a wrong offset!");
static_assert(offsetof(ULocalUserSettingButton_C, Border_InteractionIndicator) == 0x001460, "Member 'ULocalUserSettingButton_C::Border_InteractionIndicator' has a wrong offset!");
static_assert(offsetof(ULocalUserSettingButton_C, Image_AnimatedArrow) == 0x001468, "Member 'ULocalUserSettingButton_C::Image_AnimatedArrow' has a wrong offset!");

}
