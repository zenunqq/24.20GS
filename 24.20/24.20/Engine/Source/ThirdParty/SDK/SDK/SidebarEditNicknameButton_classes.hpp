#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarEditNicknameButton_C final : public UFortEditNicknameButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OnHovered;
	class UBorder*                                ClickCapture;

public:
	void ExecuteUbergraph_SidebarEditNicknameButton(int32 EntryPoint);
	void BP_OnUnhovered();
	void BP_OnHovered();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarEditNicknameButton_C">();
	}
	static class USidebarEditNicknameButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarEditNicknameButton_C>();
	}
};
static_assert(alignof(USidebarEditNicknameButton_C) == 0x000010, "Wrong alignment on USidebarEditNicknameButton_C");
static_assert(sizeof(USidebarEditNicknameButton_C) == 0x001490, "Wrong size on USidebarEditNicknameButton_C");
static_assert(offsetof(USidebarEditNicknameButton_C, UberGraphFrame) == 0x001470, "Member 'USidebarEditNicknameButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarEditNicknameButton_C, OnHovered) == 0x001478, "Member 'USidebarEditNicknameButton_C::OnHovered' has a wrong offset!");
static_assert(offsetof(USidebarEditNicknameButton_C, ClickCapture) == 0x001480, "Member 'USidebarEditNicknameButton_C::ClickCapture' has a wrong offset!");

}
