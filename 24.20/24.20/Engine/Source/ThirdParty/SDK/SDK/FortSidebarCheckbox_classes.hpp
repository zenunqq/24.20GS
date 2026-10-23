#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UFortSidebarCheckbox_C final : public UFortSidebarCheckboxWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 Image_Checked;
	class UImage*                                 Image_Unchecked;
	bool                                          bIsSelected;
	uint8                                         Pad_2D1[0x7];
	TMulticastInlineDelegate<void()>              OnClicked;

public:
	void ToggleCheckbox();
	void SetSelected(bool NewSelected);
	void Refresh();
	void ExecuteUbergraph_FortSidebarCheckbox(int32 EntryPoint);
	void Construct();
	void BP_ToggleCheckbox();
	void BndEvt__CheckButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortSidebarCheckbox_C">();
	}
	static class UFortSidebarCheckbox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSidebarCheckbox_C>();
	}
};
static_assert(alignof(UFortSidebarCheckbox_C) == 0x000008, "Wrong alignment on UFortSidebarCheckbox_C");
static_assert(sizeof(UFortSidebarCheckbox_C) == 0x0002E8, "Wrong size on UFortSidebarCheckbox_C");
static_assert(offsetof(UFortSidebarCheckbox_C, UberGraphFrame) == 0x0002B8, "Member 'UFortSidebarCheckbox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFortSidebarCheckbox_C, Image_Checked) == 0x0002C0, "Member 'UFortSidebarCheckbox_C::Image_Checked' has a wrong offset!");
static_assert(offsetof(UFortSidebarCheckbox_C, Image_Unchecked) == 0x0002C8, "Member 'UFortSidebarCheckbox_C::Image_Unchecked' has a wrong offset!");
static_assert(offsetof(UFortSidebarCheckbox_C, bIsSelected) == 0x0002D0, "Member 'UFortSidebarCheckbox_C::bIsSelected' has a wrong offset!");
static_assert(offsetof(UFortSidebarCheckbox_C, OnClicked) == 0x0002D8, "Member 'UFortSidebarCheckbox_C::OnClicked' has a wrong offset!");

}
