#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UStoreSelectionPopup_C final : public UFortMtxStoreSelectionPopup
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro;
	class UImage*                                 SpeedLines;
	class UCommonTextBlock*                       StorePrompt_Header;

public:
	void ExecuteUbergraph_StoreSelectionPopup(int32 EntryPoint);
	void BP_OnActivated();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StoreSelectionPopup_C">();
	}
	static class UStoreSelectionPopup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStoreSelectionPopup_C>();
	}
};
static_assert(alignof(UStoreSelectionPopup_C) == 0x000008, "Wrong alignment on UStoreSelectionPopup_C");
static_assert(sizeof(UStoreSelectionPopup_C) == 0x000538, "Wrong size on UStoreSelectionPopup_C");
static_assert(offsetof(UStoreSelectionPopup_C, UberGraphFrame) == 0x000518, "Member 'UStoreSelectionPopup_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStoreSelectionPopup_C, Intro) == 0x000520, "Member 'UStoreSelectionPopup_C::Intro' has a wrong offset!");
static_assert(offsetof(UStoreSelectionPopup_C, SpeedLines) == 0x000528, "Member 'UStoreSelectionPopup_C::SpeedLines' has a wrong offset!");
static_assert(offsetof(UStoreSelectionPopup_C, StorePrompt_Header) == 0x000530, "Member 'UStoreSelectionPopup_C::StorePrompt_Header' has a wrong offset!");

}
