#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"

namespace SDK
{

class ULobbyPlayerPadGadgets_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class ULobbyGadgetButton_C*                   Gadget1;
	class ULobbyGadgetButton_C*                   Gadget2;
	int32                                         PlayerIndex;
	uint8                                         Pad_2AC[0x4];
	TMulticastInlineDelegate<void()>              OnGadgetsMouseEntered;
	TMulticastInlineDelegate<void()>              OnGadgetsMouseLeft;

public:
	void Refresh(const struct FFortTeamMemberInfo& TeamMemberInfo);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnInputClicked();
	void Initialize(int32 PlayerIndex_0);
	void ExecuteUbergraph_LobbyPlayerPadGadgets(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LobbyPlayerPadGadgets_C">();
	}
	static class ULobbyPlayerPadGadgets_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULobbyPlayerPadGadgets_C>();
	}
};
static_assert(alignof(ULobbyPlayerPadGadgets_C) == 0x000008, "Wrong alignment on ULobbyPlayerPadGadgets_C");
static_assert(sizeof(ULobbyPlayerPadGadgets_C) == 0x0002D0, "Wrong size on ULobbyPlayerPadGadgets_C");
static_assert(offsetof(ULobbyPlayerPadGadgets_C, UberGraphFrame) == 0x000290, "Member 'ULobbyPlayerPadGadgets_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULobbyPlayerPadGadgets_C, Gadget1) == 0x000298, "Member 'ULobbyPlayerPadGadgets_C::Gadget1' has a wrong offset!");
static_assert(offsetof(ULobbyPlayerPadGadgets_C, Gadget2) == 0x0002A0, "Member 'ULobbyPlayerPadGadgets_C::Gadget2' has a wrong offset!");
static_assert(offsetof(ULobbyPlayerPadGadgets_C, PlayerIndex) == 0x0002A8, "Member 'ULobbyPlayerPadGadgets_C::PlayerIndex' has a wrong offset!");
static_assert(offsetof(ULobbyPlayerPadGadgets_C, OnGadgetsMouseEntered) == 0x0002B0, "Member 'ULobbyPlayerPadGadgets_C::OnGadgetsMouseEntered' has a wrong offset!");
static_assert(offsetof(ULobbyPlayerPadGadgets_C, OnGadgetsMouseLeft) == 0x0002C0, "Member 'ULobbyPlayerPadGadgets_C::OnGadgetsMouseLeft' has a wrong offset!");

}
