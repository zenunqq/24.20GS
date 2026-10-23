#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UToastDisplayArea_C final : public UFortToastDisplayArea
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USafeZone*                              SafeZone_0;

public:
	void ExecuteUbergraph_ToastDisplayArea(int32 EntryPoint);
	void TestFrontendToast();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ToastDisplayArea_C">();
	}
	static class UToastDisplayArea_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UToastDisplayArea_C>();
	}
};
static_assert(alignof(UToastDisplayArea_C) == 0x000008, "Wrong alignment on UToastDisplayArea_C");
static_assert(sizeof(UToastDisplayArea_C) == 0x0002F8, "Wrong size on UToastDisplayArea_C");
static_assert(offsetof(UToastDisplayArea_C, UberGraphFrame) == 0x0002E8, "Member 'UToastDisplayArea_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UToastDisplayArea_C, SafeZone_0) == 0x0002F0, "Member 'UToastDisplayArea_C::SafeZone_0' has a wrong offset!");

}
