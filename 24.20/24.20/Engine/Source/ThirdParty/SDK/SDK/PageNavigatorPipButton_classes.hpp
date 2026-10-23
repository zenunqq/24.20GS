#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UPageNavigatorPipButton_C final : public UFortTextButton
{
public:
	uint8                                         Pad_14C8[0x8];
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Hover;
	class UWidgetAnimation*                       Selected;
	class UImage*                                 BacchusMobileShadow;
	class UCommonActionWidget*                    CommonActionWidget_RightStick;
	class UImage*                                 PIP;
	class UOverlay*                               RSContainer;

public:
	void BP_OnDeselected();
	void BP_OnSelected();
	void Construct();
	void ExecuteUbergraph_PageNavigatorPipButton(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Set_Pip_Colors(const struct FLinearColor& Base_Color, const struct FLinearColor& Hover_Color, const struct FLinearColor& Select_Color);
	void SetRightStickIconAllowed(bool Allowed);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PageNavigatorPipButton_C">();
	}
	static class UPageNavigatorPipButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPageNavigatorPipButton_C>();
	}
};
static_assert(alignof(UPageNavigatorPipButton_C) == 0x000010, "Wrong alignment on UPageNavigatorPipButton_C");
static_assert(sizeof(UPageNavigatorPipButton_C) == 0x001510, "Wrong size on UPageNavigatorPipButton_C");
static_assert(offsetof(UPageNavigatorPipButton_C, UberGraphFrame) == 0x0014D0, "Member 'UPageNavigatorPipButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPageNavigatorPipButton_C, Hover) == 0x0014D8, "Member 'UPageNavigatorPipButton_C::Hover' has a wrong offset!");
static_assert(offsetof(UPageNavigatorPipButton_C, Selected) == 0x0014E0, "Member 'UPageNavigatorPipButton_C::Selected' has a wrong offset!");
static_assert(offsetof(UPageNavigatorPipButton_C, BacchusMobileShadow) == 0x0014E8, "Member 'UPageNavigatorPipButton_C::BacchusMobileShadow' has a wrong offset!");
static_assert(offsetof(UPageNavigatorPipButton_C, CommonActionWidget_RightStick) == 0x0014F0, "Member 'UPageNavigatorPipButton_C::CommonActionWidget_RightStick' has a wrong offset!");
static_assert(offsetof(UPageNavigatorPipButton_C, PIP) == 0x0014F8, "Member 'UPageNavigatorPipButton_C::PIP' has a wrong offset!");
static_assert(offsetof(UPageNavigatorPipButton_C, RSContainer) == 0x001500, "Member 'UPageNavigatorPipButton_C::RSContainer' has a wrong offset!");

}
