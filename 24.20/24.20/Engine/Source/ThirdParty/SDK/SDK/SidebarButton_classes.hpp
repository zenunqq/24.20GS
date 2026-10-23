#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarButton_C final : public UFortSocialSidebarButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Unselected;
	class UWidgetAnimation*                       Hovered;
	class UWidgetAnimation*                       Selected;
	class USizeBox*                               SizeBox_0;
	bool                                          Condition;

public:
	void BP_OnDeselected();
	void BP_OnHovered();
	void BP_OnSelected();
	void BP_OnUnhovered();
	void ExecuteUbergraph_SidebarButton(int32 EntryPoint);
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void SetSkewBoxColor(const struct FLinearColor& InputPin);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarButton_C">();
	}
	static class USidebarButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarButton_C>();
	}
};
static_assert(alignof(USidebarButton_C) == 0x000010, "Wrong alignment on USidebarButton_C");
static_assert(sizeof(USidebarButton_C) == 0x001530, "Wrong size on USidebarButton_C");
static_assert(offsetof(USidebarButton_C, UberGraphFrame) == 0x001500, "Member 'USidebarButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarButton_C, Unselected) == 0x001508, "Member 'USidebarButton_C::Unselected' has a wrong offset!");
static_assert(offsetof(USidebarButton_C, Hovered) == 0x001510, "Member 'USidebarButton_C::Hovered' has a wrong offset!");
static_assert(offsetof(USidebarButton_C, Selected) == 0x001518, "Member 'USidebarButton_C::Selected' has a wrong offset!");
static_assert(offsetof(USidebarButton_C, SizeBox_0) == 0x001520, "Member 'USidebarButton_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(USidebarButton_C, Condition) == 0x001528, "Member 'USidebarButton_C::Condition' has a wrong offset!");

}
