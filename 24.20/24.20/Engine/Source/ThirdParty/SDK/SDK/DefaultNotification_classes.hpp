#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UDefaultNotification_C final : public UFortNotificationEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;

public:
	void StartNotificationOutro();
	void StartNotificationIntro();
	void ExecuteUbergraph_DefaultNotification(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DefaultNotification_C">();
	}
	static class UDefaultNotification_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDefaultNotification_C>();
	}
};
static_assert(alignof(UDefaultNotification_C) == 0x000008, "Wrong alignment on UDefaultNotification_C");
static_assert(sizeof(UDefaultNotification_C) == 0x0002D8, "Wrong size on UDefaultNotification_C");
static_assert(offsetof(UDefaultNotification_C, UberGraphFrame) == 0x0002D0, "Member 'UDefaultNotification_C::UberGraphFrame' has a wrong offset!");

}
