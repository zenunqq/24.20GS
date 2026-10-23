#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UMainMenuButton_Large_C final : public UFortMainMenuButton
{
public:
	uint8                                         Pad_1558[0x8];
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Hovered;

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_MainMenuButton_Large(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MainMenuButton_Large_C">();
	}
	static class UMainMenuButton_Large_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMainMenuButton_Large_C>();
	}
};
static_assert(alignof(UMainMenuButton_Large_C) == 0x000010, "Wrong alignment on UMainMenuButton_Large_C");
static_assert(sizeof(UMainMenuButton_Large_C) == 0x001570, "Wrong size on UMainMenuButton_Large_C");
static_assert(offsetof(UMainMenuButton_Large_C, UberGraphFrame) == 0x001560, "Member 'UMainMenuButton_Large_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMainMenuButton_Large_C, Hovered) == 0x001568, "Member 'UMainMenuButton_Large_C::Hovered' has a wrong offset!");

}
