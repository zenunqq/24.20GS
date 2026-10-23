#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UCorrectiveActionDateOfBirthScreen_C final : public UFortCorrectiveActionDateOfBirthScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCommonTextBlock*                       Text_AgeEntryChallengeError;

public:
	void OnShowCorrectiveActionProcessing(bool bShowProcessing);
	void ExecuteUbergraph_CorrectiveActionDateOfBirthScreen(int32 EntryPoint);
	void OnShowFailureReason(const class FText& FailureReason);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CorrectiveActionDateOfBirthScreen_C">();
	}
	static class UCorrectiveActionDateOfBirthScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCorrectiveActionDateOfBirthScreen_C>();
	}
};
static_assert(alignof(UCorrectiveActionDateOfBirthScreen_C) == 0x000008, "Wrong alignment on UCorrectiveActionDateOfBirthScreen_C");
static_assert(sizeof(UCorrectiveActionDateOfBirthScreen_C) == 0x000408, "Wrong size on UCorrectiveActionDateOfBirthScreen_C");
static_assert(offsetof(UCorrectiveActionDateOfBirthScreen_C, UberGraphFrame) == 0x0003F8, "Member 'UCorrectiveActionDateOfBirthScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCorrectiveActionDateOfBirthScreen_C, Text_AgeEntryChallengeError) == 0x000400, "Member 'UCorrectiveActionDateOfBirthScreen_C::Text_AgeEntryChallengeError' has a wrong offset!");

}
