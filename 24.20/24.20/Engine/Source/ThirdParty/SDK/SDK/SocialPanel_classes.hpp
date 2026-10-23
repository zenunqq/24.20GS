#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USocialPanel_C final : public UFortSocialPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OnOpened;
	class UImage*                                 Image_Back;
	class ULightbox_C*                            Lightbox;
	class USafeZone*                              SafeZone_0;
	class USocialPanel_TopBarExtension_C*         SocialPanel_TopBarExtension;

public:
	void BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void ClosePanel();
	void ClosePanelAfterAnimation();
	void Destruct();
	void ExecuteUbergraph_SocialPanel(int32 EntryPoint);
	void HandleIntroEnded();
	void HandleOutroEnded();
	void OnBeginIntro();
	void OnBeginOutro();
	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void Play_Panel_Animation_Sound();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SocialPanel_C">();
	}
	static class USocialPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialPanel_C>();
	}
};
static_assert(alignof(USocialPanel_C) == 0x000008, "Wrong alignment on USocialPanel_C");
static_assert(sizeof(USocialPanel_C) == 0x000568, "Wrong size on USocialPanel_C");
static_assert(offsetof(USocialPanel_C, UberGraphFrame) == 0x000538, "Member 'USocialPanel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USocialPanel_C, OnOpened) == 0x000540, "Member 'USocialPanel_C::OnOpened' has a wrong offset!");
static_assert(offsetof(USocialPanel_C, Image_Back) == 0x000548, "Member 'USocialPanel_C::Image_Back' has a wrong offset!");
static_assert(offsetof(USocialPanel_C, Lightbox) == 0x000550, "Member 'USocialPanel_C::Lightbox' has a wrong offset!");
static_assert(offsetof(USocialPanel_C, SafeZone_0) == 0x000558, "Member 'USocialPanel_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(USocialPanel_C, SocialPanel_TopBarExtension) == 0x000560, "Member 'USocialPanel_C::SocialPanel_TopBarExtension' has a wrong offset!");

}
