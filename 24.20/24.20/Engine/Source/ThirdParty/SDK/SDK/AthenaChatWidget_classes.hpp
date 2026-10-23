#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UAthenaChatWidget_C final : public UFortActivatableChatWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct FDataTableRowHandle                    CloseUserListAction;
	struct FDataTableRowHandle                    OpenUserListAction;
	struct FDataTableRowHandle                    CurrentUserListAction;
	bool                                          bEnteringChat;
	uint8                                         Pad_401[0x7];
	TMulticastInlineDelegate<void(bool EnteredChat)> OnEnteredChat;

public:
	void ExecuteUbergraph_AthenaChatWidget(int32 EntryPoint);
	void FocusChat(bool bFocus);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaChatWidget_C">();
	}
	static class UAthenaChatWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaChatWidget_C>();
	}
};
static_assert(alignof(UAthenaChatWidget_C) == 0x000008, "Wrong alignment on UAthenaChatWidget_C");
static_assert(sizeof(UAthenaChatWidget_C) == 0x000418, "Wrong size on UAthenaChatWidget_C");
static_assert(offsetof(UAthenaChatWidget_C, UberGraphFrame) == 0x0003C8, "Member 'UAthenaChatWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaChatWidget_C, CloseUserListAction) == 0x0003D0, "Member 'UAthenaChatWidget_C::CloseUserListAction' has a wrong offset!");
static_assert(offsetof(UAthenaChatWidget_C, OpenUserListAction) == 0x0003E0, "Member 'UAthenaChatWidget_C::OpenUserListAction' has a wrong offset!");
static_assert(offsetof(UAthenaChatWidget_C, CurrentUserListAction) == 0x0003F0, "Member 'UAthenaChatWidget_C::CurrentUserListAction' has a wrong offset!");
static_assert(offsetof(UAthenaChatWidget_C, bEnteringChat) == 0x000400, "Member 'UAthenaChatWidget_C::bEnteringChat' has a wrong offset!");
static_assert(offsetof(UAthenaChatWidget_C, OnEnteredChat) == 0x000408, "Member 'UAthenaChatWidget_C::OnEnteredChat' has a wrong offset!");

}
