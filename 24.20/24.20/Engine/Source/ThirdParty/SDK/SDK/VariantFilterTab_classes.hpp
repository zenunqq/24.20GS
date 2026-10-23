#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UVariantFilterTab_C final : public UFortVariantFilterTab
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USizeBox*                               SizeBoxMobile;

public:
	void BP_OnClicked();
	void Construct();
	void ExecuteUbergraph_VariantFilterTab(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VariantFilterTab_C">();
	}
	static class UVariantFilterTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVariantFilterTab_C>();
	}
};
static_assert(alignof(UVariantFilterTab_C) == 0x000010, "Wrong alignment on UVariantFilterTab_C");
static_assert(sizeof(UVariantFilterTab_C) == 0x0014E0, "Wrong size on UVariantFilterTab_C");
static_assert(offsetof(UVariantFilterTab_C, UberGraphFrame) == 0x0014D0, "Member 'UVariantFilterTab_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UVariantFilterTab_C, SizeBoxMobile) == 0x0014D8, "Member 'UVariantFilterTab_C::SizeBoxMobile' has a wrong offset!");

}
