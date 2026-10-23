#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"

namespace SDK
{

class USidebarLfgEmptyButton_C final : public UCommonButtonBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Hover;
	class UCommonTextBlock*                       ButtonText;
	class FText                                   ButtonCopy;

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void Construct();
	void ExecuteUbergraph_SidebarLfgEmptyButton(int32 EntryPoint);
	void OnHover();
	void OnUnhover();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarLfgEmptyButton_C">();
	}
	static class USidebarLfgEmptyButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarLfgEmptyButton_C>();
	}
};
static_assert(alignof(USidebarLfgEmptyButton_C) == 0x000010, "Wrong alignment on USidebarLfgEmptyButton_C");
static_assert(sizeof(USidebarLfgEmptyButton_C) == 0x001410, "Wrong size on USidebarLfgEmptyButton_C");
static_assert(offsetof(USidebarLfgEmptyButton_C, UberGraphFrame) == 0x0013E0, "Member 'USidebarLfgEmptyButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarLfgEmptyButton_C, Hover) == 0x0013E8, "Member 'USidebarLfgEmptyButton_C::Hover' has a wrong offset!");
static_assert(offsetof(USidebarLfgEmptyButton_C, ButtonText) == 0x0013F0, "Member 'USidebarLfgEmptyButton_C::ButtonText' has a wrong offset!");
static_assert(offsetof(USidebarLfgEmptyButton_C, ButtonCopy) == 0x0013F8, "Member 'USidebarLfgEmptyButton_C::ButtonCopy' has a wrong offset!");

}
