#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class URestartClient_C final : public UFortRestartClientModal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro;
	class UIconTextButton_C*                      Button_Confirm;

public:
	void BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void ExecuteUbergraph_RestartClient(int32 EntryPoint);
	void OnButtonSet(bool InbShouldExit, bool bShouldShow);
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RestartClient_C">();
	}
	static class URestartClient_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URestartClient_C>();
	}
};
static_assert(alignof(URestartClient_C) == 0x000008, "Wrong alignment on URestartClient_C");
static_assert(sizeof(URestartClient_C) == 0x000538, "Wrong size on URestartClient_C");
static_assert(offsetof(URestartClient_C, UberGraphFrame) == 0x000520, "Member 'URestartClient_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URestartClient_C, Intro) == 0x000528, "Member 'URestartClient_C::Intro' has a wrong offset!");
static_assert(offsetof(URestartClient_C, Button_Confirm) == 0x000530, "Member 'URestartClient_C::Button_Confirm' has a wrong offset!");

}
