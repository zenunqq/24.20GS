#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class ULoadingSubGameContentModal_C final : public UFortLoadingOnDemandContentModal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Outro;
	class UWidgetAnimation*                       Intro;
	class UCommonTextBlock*                       CommonTextBlock_Title;
	class UProgressBar*                           DownloadingProgressBar;
	class ULightbox_C*                            Lightbox;
	class UVerticalBox*                           Modal_VertBox;
	class UCommonTextBlock*                       Text_Content;
	class UCommonTextBlock*                       Text_Progress;
	bool                                          HasPlayedAnim;

public:
	void OnInitialized();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void SetCancelButtonText(const class FText& InText);
	void ExecuteUbergraph_LoadingSubGameContentModal(int32 EntryPoint);
	void OnUpdatedProgress(float Percent);
	void BP_OnActivated();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LoadingSubGameContentModal_C">();
	}
	static class ULoadingSubGameContentModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoadingSubGameContentModal_C>();
	}
};
static_assert(alignof(ULoadingSubGameContentModal_C) == 0x000008, "Wrong alignment on ULoadingSubGameContentModal_C");
static_assert(sizeof(ULoadingSubGameContentModal_C) == 0x000440, "Wrong size on ULoadingSubGameContentModal_C");
static_assert(offsetof(ULoadingSubGameContentModal_C, UberGraphFrame) == 0x0003F0, "Member 'ULoadingSubGameContentModal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULoadingSubGameContentModal_C, Outro) == 0x0003F8, "Member 'ULoadingSubGameContentModal_C::Outro' has a wrong offset!");
static_assert(offsetof(ULoadingSubGameContentModal_C, Intro) == 0x000400, "Member 'ULoadingSubGameContentModal_C::Intro' has a wrong offset!");
static_assert(offsetof(ULoadingSubGameContentModal_C, CommonTextBlock_Title) == 0x000408, "Member 'ULoadingSubGameContentModal_C::CommonTextBlock_Title' has a wrong offset!");
static_assert(offsetof(ULoadingSubGameContentModal_C, DownloadingProgressBar) == 0x000410, "Member 'ULoadingSubGameContentModal_C::DownloadingProgressBar' has a wrong offset!");
static_assert(offsetof(ULoadingSubGameContentModal_C, Lightbox) == 0x000418, "Member 'ULoadingSubGameContentModal_C::Lightbox' has a wrong offset!");
static_assert(offsetof(ULoadingSubGameContentModal_C, Modal_VertBox) == 0x000420, "Member 'ULoadingSubGameContentModal_C::Modal_VertBox' has a wrong offset!");
static_assert(offsetof(ULoadingSubGameContentModal_C, Text_Content) == 0x000428, "Member 'ULoadingSubGameContentModal_C::Text_Content' has a wrong offset!");
static_assert(offsetof(ULoadingSubGameContentModal_C, Text_Progress) == 0x000430, "Member 'ULoadingSubGameContentModal_C::Text_Progress' has a wrong offset!");
static_assert(offsetof(ULoadingSubGameContentModal_C, HasPlayedAnim) == 0x000438, "Member 'ULoadingSubGameContentModal_C::HasPlayedAnim' has a wrong offset!");

}
