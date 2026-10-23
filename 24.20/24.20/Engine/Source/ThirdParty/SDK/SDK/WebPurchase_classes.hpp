#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UWebPurchase_C final : public UFortWebPurchaseScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWBP_UIKit_Button_Quiet_C*              Button_Back;
	class UCircularThrobber*                      Throbber;

public:
	void BndEvt__WebPurchase_Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WebPurchase(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WebPurchase_C">();
	}
	static class UWebPurchase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWebPurchase_C>();
	}
};
static_assert(alignof(UWebPurchase_C) == 0x000008, "Wrong alignment on UWebPurchase_C");
static_assert(sizeof(UWebPurchase_C) == 0x000520, "Wrong size on UWebPurchase_C");
static_assert(offsetof(UWebPurchase_C, UberGraphFrame) == 0x000508, "Member 'UWebPurchase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWebPurchase_C, Button_Back) == 0x000510, "Member 'UWebPurchase_C::Button_Back' has a wrong offset!");
static_assert(offsetof(UWebPurchase_C, Throbber) == 0x000518, "Member 'UWebPurchase_C::Throbber' has a wrong offset!");

}
