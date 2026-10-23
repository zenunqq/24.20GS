#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class URootLayout_Athena_C final : public UFortRootViewportLayout_Athena
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UConfirmationWindow_C*                  ConfirmationWindow;
	class UProgressModalWidget_C*                 ControllerDisconnectedModal;
	bool                                          bClosingErrorDialog;
	uint8                                         Pad_3F1[0x7];
	class FText                                   QuitTitle;
	class FText                                   QuitMessage;

public:
	void Construct();
	void DialogResult_0099D78247C40A9775C753A2024EA419(EFortDialogResult Result, class FName ResultName);
	void ExecuteUbergraph_RootLayout_Athena(int32 EntryPoint);
	bool IsConsole();
	void OnGameWindowCloseButtonClicked();
	void OnModalQueueEmptied_1();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RootLayout_Athena_C">();
	}
	static class URootLayout_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URootLayout_Athena_C>();
	}
};
static_assert(alignof(URootLayout_Athena_C) == 0x000008, "Wrong alignment on URootLayout_Athena_C");
static_assert(sizeof(URootLayout_Athena_C) == 0x000428, "Wrong size on URootLayout_Athena_C");
static_assert(offsetof(URootLayout_Athena_C, UberGraphFrame) == 0x0003D8, "Member 'URootLayout_Athena_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URootLayout_Athena_C, ConfirmationWindow) == 0x0003E0, "Member 'URootLayout_Athena_C::ConfirmationWindow' has a wrong offset!");
static_assert(offsetof(URootLayout_Athena_C, ControllerDisconnectedModal) == 0x0003E8, "Member 'URootLayout_Athena_C::ControllerDisconnectedModal' has a wrong offset!");
static_assert(offsetof(URootLayout_Athena_C, bClosingErrorDialog) == 0x0003F0, "Member 'URootLayout_Athena_C::bClosingErrorDialog' has a wrong offset!");
static_assert(offsetof(URootLayout_Athena_C, QuitTitle) == 0x0003F8, "Member 'URootLayout_Athena_C::QuitTitle' has a wrong offset!");
static_assert(offsetof(URootLayout_Athena_C, QuitMessage) == 0x000410, "Member 'URootLayout_Athena_C::QuitMessage' has a wrong offset!");

}
