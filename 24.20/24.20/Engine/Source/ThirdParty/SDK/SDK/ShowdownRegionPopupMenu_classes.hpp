#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UShowdownRegionPopupMenu_C final : public UFortShowdownRegionPopupMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;

public:
	void BP_SetButtonText(class UCommonButtonLegacy* Button, const class FText& Text);
	void Construct();
	void ExecuteUbergraph_ShowdownRegionPopupMenu(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShowdownRegionPopupMenu_C">();
	}
	static class UShowdownRegionPopupMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShowdownRegionPopupMenu_C>();
	}
};
static_assert(alignof(UShowdownRegionPopupMenu_C) == 0x000008, "Wrong alignment on UShowdownRegionPopupMenu_C");
static_assert(sizeof(UShowdownRegionPopupMenu_C) == 0x000538, "Wrong size on UShowdownRegionPopupMenu_C");
static_assert(offsetof(UShowdownRegionPopupMenu_C, UberGraphFrame) == 0x000530, "Member 'UShowdownRegionPopupMenu_C::UberGraphFrame' has a wrong offset!");

}
