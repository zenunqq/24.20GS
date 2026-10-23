#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"

namespace SDK
{

class UWBP_QuietButtonTextNoButton_C final : public UCommonButtonBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;

public:
	void BP_OnClicked();
	void BP_OnEnabled();
	void BP_OnSelected();
	void ExecuteUbergraph_WBP_QuietButtonTextNoButton(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_QuietButtonTextNoButton_C">();
	}
	static class UWBP_QuietButtonTextNoButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_QuietButtonTextNoButton_C>();
	}
};
static_assert(alignof(UWBP_QuietButtonTextNoButton_C) == 0x000010, "Wrong alignment on UWBP_QuietButtonTextNoButton_C");
static_assert(sizeof(UWBP_QuietButtonTextNoButton_C) == 0x0013F0, "Wrong size on UWBP_QuietButtonTextNoButton_C");
static_assert(offsetof(UWBP_QuietButtonTextNoButton_C, UberGraphFrame) == 0x0013E0, "Member 'UWBP_QuietButtonTextNoButton_C::UberGraphFrame' has a wrong offset!");

}
