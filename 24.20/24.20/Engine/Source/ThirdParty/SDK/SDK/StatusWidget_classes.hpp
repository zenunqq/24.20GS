#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UStatusWidget_C final : public UFortLoginStatus
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;

public:
	void SetQuitButtonText(const class FText& QuitText);
	void SetContinueButtonText(const class FText& ContinueText);
	void ExecuteUbergraph_StatusWidget(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StatusWidget_C">();
	}
	static class UStatusWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStatusWidget_C>();
	}
};
static_assert(alignof(UStatusWidget_C) == 0x000008, "Wrong alignment on UStatusWidget_C");
static_assert(sizeof(UStatusWidget_C) == 0x000588, "Wrong size on UStatusWidget_C");
static_assert(offsetof(UStatusWidget_C, UberGraphFrame) == 0x000580, "Member 'UStatusWidget_C::UberGraphFrame' has a wrong offset!");

}
