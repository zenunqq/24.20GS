#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UAthenaBannerSelectModal_C final : public UFortBannerSelectModal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro;
	class UCommonBorder*                          BorderTouch;
	class UBP_LocalPlayerBannerEditor_C*          BP_LocalPlayerBannerEditor;
	class ULightbox_C*                            Lightbox;
	class UScaleBox*                              ScaleBox_Banner;
	struct FDataTableRowHandle                    CloseAction;

public:
	void BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature(class FName IconId, class FName ColorId);
	void BP_OnActivated();
	void BP_OnDeactivated();
	void Close();
	void Construct();
	void ExecuteUbergraph_AthenaBannerSelectModal(int32 EntryPoint);
	void HandleCloseAction(bool* PassThrough);
	struct FEventReply On_BorderTouch_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void Setup_Input_Action_Handlers();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaBannerSelectModal_C">();
	}
	static class UAthenaBannerSelectModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaBannerSelectModal_C>();
	}
};
static_assert(alignof(UAthenaBannerSelectModal_C) == 0x000008, "Wrong alignment on UAthenaBannerSelectModal_C");
static_assert(sizeof(UAthenaBannerSelectModal_C) == 0x000558, "Wrong size on UAthenaBannerSelectModal_C");
static_assert(offsetof(UAthenaBannerSelectModal_C, UberGraphFrame) == 0x000518, "Member 'UAthenaBannerSelectModal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaBannerSelectModal_C, Intro) == 0x000520, "Member 'UAthenaBannerSelectModal_C::Intro' has a wrong offset!");
static_assert(offsetof(UAthenaBannerSelectModal_C, BorderTouch) == 0x000528, "Member 'UAthenaBannerSelectModal_C::BorderTouch' has a wrong offset!");
static_assert(offsetof(UAthenaBannerSelectModal_C, BP_LocalPlayerBannerEditor) == 0x000530, "Member 'UAthenaBannerSelectModal_C::BP_LocalPlayerBannerEditor' has a wrong offset!");
static_assert(offsetof(UAthenaBannerSelectModal_C, Lightbox) == 0x000538, "Member 'UAthenaBannerSelectModal_C::Lightbox' has a wrong offset!");
static_assert(offsetof(UAthenaBannerSelectModal_C, ScaleBox_Banner) == 0x000540, "Member 'UAthenaBannerSelectModal_C::ScaleBox_Banner' has a wrong offset!");
static_assert(offsetof(UAthenaBannerSelectModal_C, CloseAction) == 0x000548, "Member 'UAthenaBannerSelectModal_C::CloseAction' has a wrong offset!");

}
