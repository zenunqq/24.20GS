#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AFrontendCamera_Manage_C final : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCameraComponent*                       LoginCamera_0;

public:
	void ExecuteUbergraph_FrontendCamera_Manage(int32 EntryPoint);
	void BP_OnDeactivated(class AFortPlayerController* PlayerController);
	void BP_OnActivated(class AFortPlayerController* PlayerController);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FrontendCamera_Manage_C">();
	}
	static class AFrontendCamera_Manage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFrontendCamera_Manage_C>();
	}
};
static_assert(alignof(AFrontendCamera_Manage_C) == 0x000010, "Wrong alignment on AFrontendCamera_Manage_C");
static_assert(sizeof(AFrontendCamera_Manage_C) == 0x000A00, "Wrong size on AFrontendCamera_Manage_C");
static_assert(offsetof(AFrontendCamera_Manage_C, UberGraphFrame) == 0x0009F0, "Member 'AFrontendCamera_Manage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AFrontendCamera_Manage_C, LoginCamera_0) == 0x0009F8, "Member 'AFrontendCamera_Manage_C::LoginCamera_0' has a wrong offset!");

}
