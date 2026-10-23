#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UEditNicknameButton_C final : public UFortEditNicknameButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OnHovered;
	class UBorder*                                ClickCapture;

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_EditNicknameButton(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EditNicknameButton_C">();
	}
	static class UEditNicknameButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEditNicknameButton_C>();
	}
};
static_assert(alignof(UEditNicknameButton_C) == 0x000010, "Wrong alignment on UEditNicknameButton_C");
static_assert(sizeof(UEditNicknameButton_C) == 0x001490, "Wrong size on UEditNicknameButton_C");
static_assert(offsetof(UEditNicknameButton_C, UberGraphFrame) == 0x001470, "Member 'UEditNicknameButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEditNicknameButton_C, OnHovered) == 0x001478, "Member 'UEditNicknameButton_C::OnHovered' has a wrong offset!");
static_assert(offsetof(UEditNicknameButton_C, ClickCapture) == 0x001480, "Member 'UEditNicknameButton_C::ClickCapture' has a wrong offset!");

}
