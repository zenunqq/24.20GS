#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"

namespace SDK
{

class UTeamEntry_C final : public UUserWidget
{
public:
	class UCommonTextBlock*                       Text_Team;

public:
	void SetText(const class FText& Usernames);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TeamEntry_C">();
	}
	static class UTeamEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTeamEntry_C>();
	}
};
static_assert(alignof(UTeamEntry_C) == 0x000008, "Wrong alignment on UTeamEntry_C");
static_assert(sizeof(UTeamEntry_C) == 0x000270, "Wrong size on UTeamEntry_C");
static_assert(offsetof(UTeamEntry_C, Text_Team) == 0x000268, "Member 'UTeamEntry_C::Text_Team' has a wrong offset!");

}
