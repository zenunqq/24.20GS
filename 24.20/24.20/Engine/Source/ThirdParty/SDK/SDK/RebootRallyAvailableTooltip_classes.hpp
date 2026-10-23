#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class URebootRallyAvailableTooltip_C final : public UFortSidebarOnboardTooltipWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCommonRichTextBlock*                   CommonRichTextBlock_140;
	class UImage*                                 Image_Arrow;
	class UImage*                                 ImageBurst;

public:
	void UpdateText();
	void OnShowTooltip();
	void OnEndTooltip();
	void HandleInputMethodChanged(ECommonInputType bNewInputType);
	void ExecuteUbergraph_RebootRallyAvailableTooltip(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RebootRallyAvailableTooltip_C">();
	}
	static class URebootRallyAvailableTooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URebootRallyAvailableTooltip_C>();
	}
};
static_assert(alignof(URebootRallyAvailableTooltip_C) == 0x000008, "Wrong alignment on URebootRallyAvailableTooltip_C");
static_assert(sizeof(URebootRallyAvailableTooltip_C) == 0x000428, "Wrong size on URebootRallyAvailableTooltip_C");
static_assert(offsetof(URebootRallyAvailableTooltip_C, UberGraphFrame) == 0x000408, "Member 'URebootRallyAvailableTooltip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URebootRallyAvailableTooltip_C, CommonRichTextBlock_140) == 0x000410, "Member 'URebootRallyAvailableTooltip_C::CommonRichTextBlock_140' has a wrong offset!");
static_assert(offsetof(URebootRallyAvailableTooltip_C, Image_Arrow) == 0x000418, "Member 'URebootRallyAvailableTooltip_C::Image_Arrow' has a wrong offset!");
static_assert(offsetof(URebootRallyAvailableTooltip_C, ImageBurst) == 0x000420, "Member 'URebootRallyAvailableTooltip_C::ImageBurst' has a wrong offset!");

}
