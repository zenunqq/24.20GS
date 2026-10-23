#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UAthenaMainMenuLeaveButton_C final : public UFortMainMenuLeaveButtonWrapper
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWBP_MainMenuButton_C*                  CommonButtonInternal;
	class FText                                   Text;

public:
	void ExecuteUbergraph_AthenaMainMenuLeaveButton(int32 EntryPoint);
	void OnTextChanged(const class FText& Text_0);
	void OnTimerTextChanged(const class FText& Text_0);
	void OnTimerVisibilityChanged(ESlateVisibility InVisibility);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaMainMenuLeaveButton_C">();
	}
	static class UAthenaMainMenuLeaveButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaMainMenuLeaveButton_C>();
	}
};
static_assert(alignof(UAthenaMainMenuLeaveButton_C) == 0x000008, "Wrong alignment on UAthenaMainMenuLeaveButton_C");
static_assert(sizeof(UAthenaMainMenuLeaveButton_C) == 0x0002E8, "Wrong size on UAthenaMainMenuLeaveButton_C");
static_assert(offsetof(UAthenaMainMenuLeaveButton_C, UberGraphFrame) == 0x0002C0, "Member 'UAthenaMainMenuLeaveButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaMainMenuLeaveButton_C, CommonButtonInternal) == 0x0002C8, "Member 'UAthenaMainMenuLeaveButton_C::CommonButtonInternal' has a wrong offset!");
static_assert(offsetof(UAthenaMainMenuLeaveButton_C, Text) == 0x0002D0, "Member 'UAthenaMainMenuLeaveButton_C::Text' has a wrong offset!");

}
