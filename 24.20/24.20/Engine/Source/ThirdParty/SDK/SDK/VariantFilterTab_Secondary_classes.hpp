#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UVariantFilterTab_Secondary_C final : public UFortVariantFilterTab
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USizeBox*                               SizeBox_Mobile;

public:
	void BP_OnClicked();
	void Construct();
	void ExecuteUbergraph_VariantFilterTab_Secondary(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VariantFilterTab_Secondary_C">();
	}
	static class UVariantFilterTab_Secondary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVariantFilterTab_Secondary_C>();
	}
};
static_assert(alignof(UVariantFilterTab_Secondary_C) == 0x000010, "Wrong alignment on UVariantFilterTab_Secondary_C");
static_assert(sizeof(UVariantFilterTab_Secondary_C) == 0x0014E0, "Wrong size on UVariantFilterTab_Secondary_C");
static_assert(offsetof(UVariantFilterTab_Secondary_C, UberGraphFrame) == 0x0014D0, "Member 'UVariantFilterTab_Secondary_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UVariantFilterTab_Secondary_C, SizeBox_Mobile) == 0x0014D8, "Member 'UVariantFilterTab_Secondary_C::SizeBox_Mobile' has a wrong offset!");

}
