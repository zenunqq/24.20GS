#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UCorrectiveActionGuardianEmailScreen_C final : public UFortCorrectiveActionGuardianEmailScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCommonTextBlock*                       Text_EmailEntryChallengeError;

public:
	void ExecuteUbergraph_CorrectiveActionGuardianEmailScreen(int32 EntryPoint);
	void OnShowFailureReason(const class FText& FailureReason);
	void OnShowCorrectiveActionProcessing(bool bShowProcessing);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CorrectiveActionGuardianEmailScreen_C">();
	}
	static class UCorrectiveActionGuardianEmailScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCorrectiveActionGuardianEmailScreen_C>();
	}
};
static_assert(alignof(UCorrectiveActionGuardianEmailScreen_C) == 0x000008, "Wrong alignment on UCorrectiveActionGuardianEmailScreen_C");
static_assert(sizeof(UCorrectiveActionGuardianEmailScreen_C) == 0x0003E8, "Wrong size on UCorrectiveActionGuardianEmailScreen_C");
static_assert(offsetof(UCorrectiveActionGuardianEmailScreen_C, UberGraphFrame) == 0x0003D8, "Member 'UCorrectiveActionGuardianEmailScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCorrectiveActionGuardianEmailScreen_C, Text_EmailEntryChallengeError) == 0x0003E0, "Member 'UCorrectiveActionGuardianEmailScreen_C::Text_EmailEntryChallengeError' has a wrong offset!");

}
