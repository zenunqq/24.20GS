#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarProfileSubPanelRebootRallyEligible_C final : public UFortSocialProfileRebootRallyText
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCommonRichTextBlock*                   RebootRallyEligibleText;
	class FText                                   SocialUserText;
	class FText                                   LocalUserText;

public:
	void DisplayText(const bool bRallied);
	void ExecuteUbergraph_SidebarProfileSubPanelRebootRallyEligible(int32 EntryPoint);
	void OnFinishedProfileLoading();
	void OnStartProfileLoading();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarProfileSubPanelRebootRallyEligible_C">();
	}
	static class USidebarProfileSubPanelRebootRallyEligible_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarProfileSubPanelRebootRallyEligible_C>();
	}
};
static_assert(alignof(USidebarProfileSubPanelRebootRallyEligible_C) == 0x000008, "Wrong alignment on USidebarProfileSubPanelRebootRallyEligible_C");
static_assert(sizeof(USidebarProfileSubPanelRebootRallyEligible_C) == 0x000320, "Wrong size on USidebarProfileSubPanelRebootRallyEligible_C");
static_assert(offsetof(USidebarProfileSubPanelRebootRallyEligible_C, UberGraphFrame) == 0x0002E0, "Member 'USidebarProfileSubPanelRebootRallyEligible_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarProfileSubPanelRebootRallyEligible_C, RebootRallyEligibleText) == 0x0002E8, "Member 'USidebarProfileSubPanelRebootRallyEligible_C::RebootRallyEligibleText' has a wrong offset!");
static_assert(offsetof(USidebarProfileSubPanelRebootRallyEligible_C, SocialUserText) == 0x0002F0, "Member 'USidebarProfileSubPanelRebootRallyEligible_C::SocialUserText' has a wrong offset!");
static_assert(offsetof(USidebarProfileSubPanelRebootRallyEligible_C, LocalUserText) == 0x000308, "Member 'USidebarProfileSubPanelRebootRallyEligible_C::LocalUserText' has a wrong offset!");

}
