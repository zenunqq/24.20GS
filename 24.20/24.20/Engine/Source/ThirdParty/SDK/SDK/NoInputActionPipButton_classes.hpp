#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UNoInputActionPipButton_C final : public UFortTextButton
{
public:
	uint8                                         Pad_14C8[0x8];
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Hover;
	class UWidgetAnimation*                       Selected;
	class UImage*                                 BacchusMobileShadow;
	class UImage*                                 PIP;

public:
	void BP_OnDeselected();
	void BP_OnSelected();
	void Construct();
	void ExecuteUbergraph_NoInputActionPipButton(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Set_Pip_Colors(const struct FLinearColor& Base_Color, const struct FLinearColor& Hover_Color, const struct FLinearColor& Select_Color);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NoInputActionPipButton_C">();
	}
	static class UNoInputActionPipButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNoInputActionPipButton_C>();
	}
};
static_assert(alignof(UNoInputActionPipButton_C) == 0x000010, "Wrong alignment on UNoInputActionPipButton_C");
static_assert(sizeof(UNoInputActionPipButton_C) == 0x001500, "Wrong size on UNoInputActionPipButton_C");
static_assert(offsetof(UNoInputActionPipButton_C, UberGraphFrame) == 0x0014D0, "Member 'UNoInputActionPipButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNoInputActionPipButton_C, Hover) == 0x0014D8, "Member 'UNoInputActionPipButton_C::Hover' has a wrong offset!");
static_assert(offsetof(UNoInputActionPipButton_C, Selected) == 0x0014E0, "Member 'UNoInputActionPipButton_C::Selected' has a wrong offset!");
static_assert(offsetof(UNoInputActionPipButton_C, BacchusMobileShadow) == 0x0014E8, "Member 'UNoInputActionPipButton_C::BacchusMobileShadow' has a wrong offset!");
static_assert(offsetof(UNoInputActionPipButton_C, PIP) == 0x0014F0, "Member 'UNoInputActionPipButton_C::PIP' has a wrong offset!");

}
