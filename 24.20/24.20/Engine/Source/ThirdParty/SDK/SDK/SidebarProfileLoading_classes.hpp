#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarProfileLoading_C final : public UFortSocialProfileSubPanel_Loading
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 ProgressSpinner;

public:
	void OnLoadingStarted();
	void OnLoadingFinished();
	void ExecuteUbergraph_SidebarProfileLoading(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarProfileLoading_C">();
	}
	static class USidebarProfileLoading_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarProfileLoading_C>();
	}
};
static_assert(alignof(USidebarProfileLoading_C) == 0x000008, "Wrong alignment on USidebarProfileLoading_C");
static_assert(sizeof(USidebarProfileLoading_C) == 0x0002A0, "Wrong size on USidebarProfileLoading_C");
static_assert(offsetof(USidebarProfileLoading_C, UberGraphFrame) == 0x000290, "Member 'USidebarProfileLoading_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarProfileLoading_C, ProgressSpinner) == 0x000298, "Member 'USidebarProfileLoading_C::ProgressSpinner' has a wrong offset!");

}
