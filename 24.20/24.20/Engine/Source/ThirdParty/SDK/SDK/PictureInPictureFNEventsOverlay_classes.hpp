#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "PictureInPictureDescriptors_structs.hpp"
#include "SlateCore_structs.hpp"
#include "PictureInPictureUI_classes.hpp"

namespace SDK
{

class UPictureInPictureFNEventsOverlay_C final : public UPictureInPicturePanelWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       SlideVidDown;
	class UWidgetAnimation*                       SlideVidUp;
	class UWidgetAnimation*                       Intro;
	class UBorder*                                ErrorMessage;
	class UBorder*                                HideInstructions;
	class UImage*                                 Highlight;
	class UImage*                                 Shadow;
	class UCommonRichTextBlock*                   Text_ErrorInstructions;
	class UCommonRichTextBlock*                   Text_HideInstructions;
	class FString                                 LoginState;
	struct FGameplayTagContainer                  ShowForPiPTags;
	struct FGameplayTagContainer                  HideForPiPTags;
	struct FMargin                                FrontendPadding;
	struct FPiPPartnerSource                      ErrorSource;
	class FText                                   Text_BaseErrorMessage;
	bool                                          InstructionsShown;

public:
	void BP_OnActivated();
	void BP_OnDeactivated();
	void Construct();
	void ExecuteUbergraph_PictureInPictureFNEventsOverlay(int32 EntryPoint);
	void OnInitialized();
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void ShowError(int32 ErrorNumber, const class FString& ErrorMessage_0);
	void ShowHideInstructions();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PictureInPictureFNEventsOverlay_C">();
	}
	static class UPictureInPictureFNEventsOverlay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPictureInPictureFNEventsOverlay_C>();
	}
};
static_assert(alignof(UPictureInPictureFNEventsOverlay_C) == 0x000008, "Wrong alignment on UPictureInPictureFNEventsOverlay_C");
static_assert(sizeof(UPictureInPictureFNEventsOverlay_C) == 0x0007D0, "Wrong size on UPictureInPictureFNEventsOverlay_C");
static_assert(offsetof(UPictureInPictureFNEventsOverlay_C, UberGraphFrame) == 0x0005D8, "Member 'UPictureInPictureFNEventsOverlay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPictureInPictureFNEventsOverlay_C, SlideVidDown) == 0x0005E0, "Member 'UPictureInPictureFNEventsOverlay_C::SlideVidDown' has a wrong offset!");
static_assert(offsetof(UPictureInPictureFNEventsOverlay_C, SlideVidUp) == 0x0005E8, "Member 'UPictureInPictureFNEventsOverlay_C::SlideVidUp' has a wrong offset!");
static_assert(offsetof(UPictureInPictureFNEventsOverlay_C, Intro) == 0x0005F0, "Member 'UPictureInPictureFNEventsOverlay_C::Intro' has a wrong offset!");
static_assert(offsetof(UPictureInPictureFNEventsOverlay_C, ErrorMessage) == 0x0005F8, "Member 'UPictureInPictureFNEventsOverlay_C::ErrorMessage' has a wrong offset!");
static_assert(offsetof(UPictureInPictureFNEventsOverlay_C, HideInstructions) == 0x000600, "Member 'UPictureInPictureFNEventsOverlay_C::HideInstructions' has a wrong offset!");
static_assert(offsetof(UPictureInPictureFNEventsOverlay_C, Highlight) == 0x000608, "Member 'UPictureInPictureFNEventsOverlay_C::Highlight' has a wrong offset!");
static_assert(offsetof(UPictureInPictureFNEventsOverlay_C, Shadow) == 0x000610, "Member 'UPictureInPictureFNEventsOverlay_C::Shadow' has a wrong offset!");
static_assert(offsetof(UPictureInPictureFNEventsOverlay_C, Text_ErrorInstructions) == 0x000618, "Member 'UPictureInPictureFNEventsOverlay_C::Text_ErrorInstructions' has a wrong offset!");
static_assert(offsetof(UPictureInPictureFNEventsOverlay_C, Text_HideInstructions) == 0x000620, "Member 'UPictureInPictureFNEventsOverlay_C::Text_HideInstructions' has a wrong offset!");
static_assert(offsetof(UPictureInPictureFNEventsOverlay_C, LoginState) == 0x000628, "Member 'UPictureInPictureFNEventsOverlay_C::LoginState' has a wrong offset!");
static_assert(offsetof(UPictureInPictureFNEventsOverlay_C, ShowForPiPTags) == 0x000638, "Member 'UPictureInPictureFNEventsOverlay_C::ShowForPiPTags' has a wrong offset!");
static_assert(offsetof(UPictureInPictureFNEventsOverlay_C, HideForPiPTags) == 0x000658, "Member 'UPictureInPictureFNEventsOverlay_C::HideForPiPTags' has a wrong offset!");
static_assert(offsetof(UPictureInPictureFNEventsOverlay_C, FrontendPadding) == 0x000678, "Member 'UPictureInPictureFNEventsOverlay_C::FrontendPadding' has a wrong offset!");
static_assert(offsetof(UPictureInPictureFNEventsOverlay_C, ErrorSource) == 0x000688, "Member 'UPictureInPictureFNEventsOverlay_C::ErrorSource' has a wrong offset!");
static_assert(offsetof(UPictureInPictureFNEventsOverlay_C, Text_BaseErrorMessage) == 0x0007B0, "Member 'UPictureInPictureFNEventsOverlay_C::Text_BaseErrorMessage' has a wrong offset!");
static_assert(offsetof(UPictureInPictureFNEventsOverlay_C, InstructionsShown) == 0x0007C8, "Member 'UPictureInPictureFNEventsOverlay_C::InstructionsShown' has a wrong offset!");

}
