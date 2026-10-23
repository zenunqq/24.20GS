#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"

namespace SDK
{

class UInviteEventTitle_C final : public UUserWidget
{
public:
	class UCommonLazyImage*                       TitleImage;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InviteEventTitle_C">();
	}
	static class UInviteEventTitle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInviteEventTitle_C>();
	}
};
static_assert(alignof(UInviteEventTitle_C) == 0x000008, "Wrong alignment on UInviteEventTitle_C");
static_assert(sizeof(UInviteEventTitle_C) == 0x000270, "Wrong size on UInviteEventTitle_C");
static_assert(offsetof(UInviteEventTitle_C, TitleImage) == 0x000268, "Member 'UInviteEventTitle_C::TitleImage' has a wrong offset!");

}
