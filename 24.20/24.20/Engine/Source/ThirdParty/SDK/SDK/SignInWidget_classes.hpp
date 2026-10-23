#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class USignInWidget_C final : public UFortSignInWidget
{
public:
	class UNamedSlot*                             ButtonSlot;
	class UCommonLazyImage*                       CommonLazyImage_0;
	class UVerticalBox*                           ContentBox;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SignInWidget_C">();
	}
	static class USignInWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USignInWidget_C>();
	}
};
static_assert(alignof(USignInWidget_C) == 0x000008, "Wrong alignment on USignInWidget_C");
static_assert(sizeof(USignInWidget_C) == 0x000568, "Wrong size on USignInWidget_C");
static_assert(offsetof(USignInWidget_C, ButtonSlot) == 0x000550, "Member 'USignInWidget_C::ButtonSlot' has a wrong offset!");
static_assert(offsetof(USignInWidget_C, CommonLazyImage_0) == 0x000558, "Member 'USignInWidget_C::CommonLazyImage_0' has a wrong offset!");
static_assert(offsetof(USignInWidget_C, ContentBox) == 0x000560, "Member 'USignInWidget_C::ContentBox' has a wrong offset!");

}
