#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USimpleMTXDisplay_C final : public UFortSimpleMTXDisplay
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCommonRichTextBlock*                   AvailableAmountText;

public:
	void OnUpdateAvailableMTX(int32 AvailableBalance);
	void ExecuteUbergraph_SimpleMTXDisplay(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SimpleMTXDisplay_C">();
	}
	static class USimpleMTXDisplay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimpleMTXDisplay_C>();
	}
};
static_assert(alignof(USimpleMTXDisplay_C) == 0x000008, "Wrong alignment on USimpleMTXDisplay_C");
static_assert(sizeof(USimpleMTXDisplay_C) == 0x0002A0, "Wrong size on USimpleMTXDisplay_C");
static_assert(offsetof(USimpleMTXDisplay_C, UberGraphFrame) == 0x000290, "Member 'USimpleMTXDisplay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USimpleMTXDisplay_C, AvailableAmountText) == 0x000298, "Member 'USimpleMTXDisplay_C::AvailableAmountText' has a wrong offset!");

}
