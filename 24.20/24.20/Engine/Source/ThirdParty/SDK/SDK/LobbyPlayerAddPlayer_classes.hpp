#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class ULobbyPlayerAddPlayer_C final : public UFortLobbyAddPlayer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       ShowPartyFinderText;
	class UWidgetAnimation*                       OnHovered;
	class UCommonTextBlock*                       CommonTextBlock_76;
	class UFortHUDElementWrapper_C*               FortHUDElementWrapper;
	class UOverlay*                               OverlayInputAction;
	class UVerticalBox*                           VB_ControlLegend;

public:
	void ExecuteUbergraph_LobbyPlayerAddPlayer(int32 EntryPoint);
	void BP_OnUnhovered();
	void BP_OnHovered();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LobbyPlayerAddPlayer_C">();
	}
	static class ULobbyPlayerAddPlayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULobbyPlayerAddPlayer_C>();
	}
};
static_assert(alignof(ULobbyPlayerAddPlayer_C) == 0x000010, "Wrong alignment on ULobbyPlayerAddPlayer_C");
static_assert(sizeof(ULobbyPlayerAddPlayer_C) == 0x0014C0, "Wrong size on ULobbyPlayerAddPlayer_C");
static_assert(offsetof(ULobbyPlayerAddPlayer_C, UberGraphFrame) == 0x001480, "Member 'ULobbyPlayerAddPlayer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULobbyPlayerAddPlayer_C, ShowPartyFinderText) == 0x001488, "Member 'ULobbyPlayerAddPlayer_C::ShowPartyFinderText' has a wrong offset!");
static_assert(offsetof(ULobbyPlayerAddPlayer_C, OnHovered) == 0x001490, "Member 'ULobbyPlayerAddPlayer_C::OnHovered' has a wrong offset!");
static_assert(offsetof(ULobbyPlayerAddPlayer_C, CommonTextBlock_76) == 0x001498, "Member 'ULobbyPlayerAddPlayer_C::CommonTextBlock_76' has a wrong offset!");
static_assert(offsetof(ULobbyPlayerAddPlayer_C, FortHUDElementWrapper) == 0x0014A0, "Member 'ULobbyPlayerAddPlayer_C::FortHUDElementWrapper' has a wrong offset!");
static_assert(offsetof(ULobbyPlayerAddPlayer_C, OverlayInputAction) == 0x0014A8, "Member 'ULobbyPlayerAddPlayer_C::OverlayInputAction' has a wrong offset!");
static_assert(offsetof(ULobbyPlayerAddPlayer_C, VB_ControlLegend) == 0x0014B0, "Member 'ULobbyPlayerAddPlayer_C::VB_ControlLegend' has a wrong offset!");

}
