#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UPinCodeButton_C final : public UFortPinButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCommonTextBlock*                       PasscodeText;

public:
	void Construct();
	void ExecuteUbergraph_PinCodeButton(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Set_Pin_Number(const class FString& Pin);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PinCodeButton_C">();
	}
	static class UPinCodeButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPinCodeButton_C>();
	}
};
static_assert(alignof(UPinCodeButton_C) == 0x000010, "Wrong alignment on UPinCodeButton_C");
static_assert(sizeof(UPinCodeButton_C) == 0x001400, "Wrong size on UPinCodeButton_C");
static_assert(offsetof(UPinCodeButton_C, UberGraphFrame) == 0x0013F0, "Member 'UPinCodeButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPinCodeButton_C, PasscodeText) == 0x0013F8, "Member 'UPinCodeButton_C::PasscodeText' has a wrong offset!");

}
