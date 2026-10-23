#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USquadSelection_C final : public UFortSquadSelectionMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCloseButton_C*                         Mobile_CloseButton;
	class USafeZone*                              SafeZone_0;

public:
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void ExecuteUbergraph_SquadSelection(int32 EntryPoint);
	void OnLocalPlayerParticipationChanged(bool bIsParticipating);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SquadSelection_C">();
	}
	static class USquadSelection_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USquadSelection_C>();
	}
};
static_assert(alignof(USquadSelection_C) == 0x000008, "Wrong alignment on USquadSelection_C");
static_assert(sizeof(USquadSelection_C) == 0x000440, "Wrong size on USquadSelection_C");
static_assert(offsetof(USquadSelection_C, UberGraphFrame) == 0x000428, "Member 'USquadSelection_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USquadSelection_C, Mobile_CloseButton) == 0x000430, "Member 'USquadSelection_C::Mobile_CloseButton' has a wrong offset!");
static_assert(offsetof(USquadSelection_C, SafeZone_0) == 0x000438, "Member 'USquadSelection_C::SafeZone_0' has a wrong offset!");

}
