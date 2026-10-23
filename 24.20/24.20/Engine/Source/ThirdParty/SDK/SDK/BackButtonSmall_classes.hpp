#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"

namespace SDK
{

class UBackButtonSmall_C final : public UCommonButtonBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OnHover;
	class UCommonActionWidget*                    CommonActionWidget_65;
	class UHorizontalBox*                         HorizontalBox_3;
	class UFortMobileImage*                       Image_Arrow;

public:
	void BP_OnClicked();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_BackButtonSmall(int32 EntryPoint);
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BackButtonSmall_C">();
	}
	static class UBackButtonSmall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBackButtonSmall_C>();
	}
};
static_assert(alignof(UBackButtonSmall_C) == 0x000010, "Wrong alignment on UBackButtonSmall_C");
static_assert(sizeof(UBackButtonSmall_C) == 0x001410, "Wrong size on UBackButtonSmall_C");
static_assert(offsetof(UBackButtonSmall_C, UberGraphFrame) == 0x0013E0, "Member 'UBackButtonSmall_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBackButtonSmall_C, OnHover) == 0x0013E8, "Member 'UBackButtonSmall_C::OnHover' has a wrong offset!");
static_assert(offsetof(UBackButtonSmall_C, CommonActionWidget_65) == 0x0013F0, "Member 'UBackButtonSmall_C::CommonActionWidget_65' has a wrong offset!");
static_assert(offsetof(UBackButtonSmall_C, HorizontalBox_3) == 0x0013F8, "Member 'UBackButtonSmall_C::HorizontalBox_3' has a wrong offset!");
static_assert(offsetof(UBackButtonSmall_C, Image_Arrow) == 0x001400, "Member 'UBackButtonSmall_C::Image_Arrow' has a wrong offset!");

}
