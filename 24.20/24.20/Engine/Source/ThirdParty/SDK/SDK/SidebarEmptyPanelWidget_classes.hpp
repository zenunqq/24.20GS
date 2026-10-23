#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarEmptyPanelWidget_C final : public USocialListEntryEmptyPanelBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;

public:
	void BndEvt__SidebarEmptyPanelWidget_ButtonWidget_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_SidebarEmptyPanelWidget(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarEmptyPanelWidget_C">();
	}
	static class USidebarEmptyPanelWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarEmptyPanelWidget_C>();
	}
};
static_assert(alignof(USidebarEmptyPanelWidget_C) == 0x000010, "Wrong alignment on USidebarEmptyPanelWidget_C");
static_assert(sizeof(USidebarEmptyPanelWidget_C) == 0x001490, "Wrong size on USidebarEmptyPanelWidget_C");
static_assert(offsetof(USidebarEmptyPanelWidget_C, UberGraphFrame) == 0x001480, "Member 'USidebarEmptyPanelWidget_C::UberGraphFrame' has a wrong offset!");

}
