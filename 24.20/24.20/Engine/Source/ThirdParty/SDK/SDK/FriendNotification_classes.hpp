#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UFriendNotification_C final : public UFortUIFriendNotification
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;

public:
	void ExecuteUbergraph_FriendNotification(int32 EntryPoint);
	void JoinPartyInvite();
	void ShowFriendInvites();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FriendNotification_C">();
	}
	static class UFriendNotification_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFriendNotification_C>();
	}
};
static_assert(alignof(UFriendNotification_C) == 0x000008, "Wrong alignment on UFriendNotification_C");
static_assert(sizeof(UFriendNotification_C) == 0x000158, "Wrong size on UFriendNotification_C");
static_assert(offsetof(UFriendNotification_C, UberGraphFrame) == 0x000150, "Member 'UFriendNotification_C::UberGraphFrame' has a wrong offset!");

}
