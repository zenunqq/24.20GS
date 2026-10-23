#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UButtonStyle_BacchusBottomBar_Main_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle-BacchusBottomBar_Main_C">();
	}
	static class UButtonStyle_BacchusBottomBar_Main_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_BacchusBottomBar_Main_C>();
	}
};
static_assert(alignof(UButtonStyle_BacchusBottomBar_Main_C) == 0x000010, "Wrong alignment on UButtonStyle_BacchusBottomBar_Main_C");
static_assert(sizeof(UButtonStyle_BacchusBottomBar_Main_C) == 0x000730, "Wrong size on UButtonStyle_BacchusBottomBar_Main_C");

}
