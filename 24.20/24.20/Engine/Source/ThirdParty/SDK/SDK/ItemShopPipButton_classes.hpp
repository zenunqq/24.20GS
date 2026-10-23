#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UItemShopPipButton_C final : public UFortTextButton
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
	void ExecuteUbergraph_ItemShopPipButton(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemShopPipButton_C">();
	}
	static class UItemShopPipButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemShopPipButton_C>();
	}
};
static_assert(alignof(UItemShopPipButton_C) == 0x000010, "Wrong alignment on UItemShopPipButton_C");
static_assert(sizeof(UItemShopPipButton_C) == 0x001500, "Wrong size on UItemShopPipButton_C");
static_assert(offsetof(UItemShopPipButton_C, UberGraphFrame) == 0x0014D0, "Member 'UItemShopPipButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemShopPipButton_C, Hover) == 0x0014D8, "Member 'UItemShopPipButton_C::Hover' has a wrong offset!");
static_assert(offsetof(UItemShopPipButton_C, Selected) == 0x0014E0, "Member 'UItemShopPipButton_C::Selected' has a wrong offset!");
static_assert(offsetof(UItemShopPipButton_C, BacchusMobileShadow) == 0x0014E8, "Member 'UItemShopPipButton_C::BacchusMobileShadow' has a wrong offset!");
static_assert(offsetof(UItemShopPipButton_C, PIP) == 0x0014F0, "Member 'UItemShopPipButton_C::PIP' has a wrong offset!");

}
