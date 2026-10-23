#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class URejoinWindow_C final : public UFortRejoinWindowBase
{
public:
	class UCommonTextBlock*                       AutorejoinText;
	class UHorizontalBox*                         ButtonBox;
	class UCommonTextBlock*                       Title;
	TMulticastInlineDelegate<void()>              OnRequestAbandon;
	TMulticastInlineDelegate<void()>              OnRequestRejoinRetry;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RejoinWindow_C">();
	}
	static class URejoinWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URejoinWindow_C>();
	}
};
static_assert(alignof(URejoinWindow_C) == 0x000008, "Wrong alignment on URejoinWindow_C");
static_assert(sizeof(URejoinWindow_C) == 0x000590, "Wrong size on URejoinWindow_C");
static_assert(offsetof(URejoinWindow_C, AutorejoinText) == 0x000558, "Member 'URejoinWindow_C::AutorejoinText' has a wrong offset!");
static_assert(offsetof(URejoinWindow_C, ButtonBox) == 0x000560, "Member 'URejoinWindow_C::ButtonBox' has a wrong offset!");
static_assert(offsetof(URejoinWindow_C, Title) == 0x000568, "Member 'URejoinWindow_C::Title' has a wrong offset!");
static_assert(offsetof(URejoinWindow_C, OnRequestAbandon) == 0x000570, "Member 'URejoinWindow_C::OnRequestAbandon' has a wrong offset!");
static_assert(offsetof(URejoinWindow_C, OnRequestRejoinRetry) == 0x000580, "Member 'URejoinWindow_C::OnRequestRejoinRetry' has a wrong offset!");

}
