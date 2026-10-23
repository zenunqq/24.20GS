#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AFrontendCamera_Main_C final : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCameraComponent*                       LoginCamera_0;

public:
	void ExecuteUbergraph_FrontendCamera_Main(int32 EntryPoint);
	void BP_OnActivated(class AFortPlayerController* PlayerController);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FrontendCamera_Main_C">();
	}
	static class AFrontendCamera_Main_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFrontendCamera_Main_C>();
	}
};
static_assert(alignof(AFrontendCamera_Main_C) == 0x000010, "Wrong alignment on AFrontendCamera_Main_C");
static_assert(sizeof(AFrontendCamera_Main_C) == 0x000A00, "Wrong size on AFrontendCamera_Main_C");
static_assert(offsetof(AFrontendCamera_Main_C, UberGraphFrame) == 0x0009F0, "Member 'AFrontendCamera_Main_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AFrontendCamera_Main_C, LoginCamera_0) == 0x0009F8, "Member 'AFrontendCamera_Main_C::LoginCamera_0' has a wrong offset!");

}
