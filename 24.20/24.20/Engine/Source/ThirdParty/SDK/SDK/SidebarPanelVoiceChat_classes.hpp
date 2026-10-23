#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarPanelVoiceChat_C final : public UFortSidebarPanelVoiceChat
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	TSoftClassPtr<class UClass>                   ParentalControlsClass_New;

public:
	void ExecuteUbergraph_SidebarPanelVoiceChat(int32 EntryPoint);
	void OnComplete_91016BC9485591D6BC97D8B812128DF4(class UUserWidget* UserWidget);
	void OpenParentalControls();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarPanelVoiceChat_C">();
	}
	static class USidebarPanelVoiceChat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarPanelVoiceChat_C>();
	}
};
static_assert(alignof(USidebarPanelVoiceChat_C) == 0x000008, "Wrong alignment on USidebarPanelVoiceChat_C");
static_assert(sizeof(USidebarPanelVoiceChat_C) == 0x000448, "Wrong size on USidebarPanelVoiceChat_C");
static_assert(offsetof(USidebarPanelVoiceChat_C, UberGraphFrame) == 0x000418, "Member 'USidebarPanelVoiceChat_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarPanelVoiceChat_C, ParentalControlsClass_New) == 0x000420, "Member 'USidebarPanelVoiceChat_C::ParentalControlsClass_New' has a wrong offset!");

}
