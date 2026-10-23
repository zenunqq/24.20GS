#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UCorrectiveActionDisplayNameScreen_C final : public UFortCorrectiveActionDisplayNameScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 Image_DisplayNameEntrySpinner;
	class UCommonTextBlock*                       Text_DisplayNameEntryError;

public:
	void ExecuteUbergraph_CorrectiveActionDisplayNameScreen(int32 EntryPoint);
	void OnShowFailureReason(const class FText& FailureReason);
	void OnShowDisplayNameDownloading(bool bShowDownloading);
	void OnShowCorrectiveActionProcessing(bool bShowProcessing);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CorrectiveActionDisplayNameScreen_C">();
	}
	static class UCorrectiveActionDisplayNameScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCorrectiveActionDisplayNameScreen_C>();
	}
};
static_assert(alignof(UCorrectiveActionDisplayNameScreen_C) == 0x000008, "Wrong alignment on UCorrectiveActionDisplayNameScreen_C");
static_assert(sizeof(UCorrectiveActionDisplayNameScreen_C) == 0x0003F0, "Wrong size on UCorrectiveActionDisplayNameScreen_C");
static_assert(offsetof(UCorrectiveActionDisplayNameScreen_C, UberGraphFrame) == 0x0003D8, "Member 'UCorrectiveActionDisplayNameScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCorrectiveActionDisplayNameScreen_C, Image_DisplayNameEntrySpinner) == 0x0003E0, "Member 'UCorrectiveActionDisplayNameScreen_C::Image_DisplayNameEntrySpinner' has a wrong offset!");
static_assert(offsetof(UCorrectiveActionDisplayNameScreen_C, Text_DisplayNameEntryError) == 0x0003E8, "Member 'UCorrectiveActionDisplayNameScreen_C::Text_DisplayNameEntryError' has a wrong offset!");

}
