#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UPlayerClearPersistenceIslandDataPromptWidget_C final : public UFortActivatablePanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UIconTextButton_C*                      ApplyButton;
	class UIconTextButton_C*                      CancelButton;
	class UCloseButton_C*                         CloseButton;
	class ULightbox_C*                            Lightbox;
	class UCommonTextBlock*                       Text_CurrentDescription;
	class UCommonTextBlock*                       Title;

public:
	void BndEvt__ApplyButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void ExecuteUbergraph_PlayerClearPersistenceIslandDataPromptWidget(int32 EntryPoint);
	void SetDescription(const class FText& InDescription);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerClearPersistenceIslandDataPromptWidget_C">();
	}
	static class UPlayerClearPersistenceIslandDataPromptWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerClearPersistenceIslandDataPromptWidget_C>();
	}
};
static_assert(alignof(UPlayerClearPersistenceIslandDataPromptWidget_C) == 0x000008, "Wrong alignment on UPlayerClearPersistenceIslandDataPromptWidget_C");
static_assert(sizeof(UPlayerClearPersistenceIslandDataPromptWidget_C) == 0x000550, "Wrong size on UPlayerClearPersistenceIslandDataPromptWidget_C");
static_assert(offsetof(UPlayerClearPersistenceIslandDataPromptWidget_C, UberGraphFrame) == 0x000518, "Member 'UPlayerClearPersistenceIslandDataPromptWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerClearPersistenceIslandDataPromptWidget_C, ApplyButton) == 0x000520, "Member 'UPlayerClearPersistenceIslandDataPromptWidget_C::ApplyButton' has a wrong offset!");
static_assert(offsetof(UPlayerClearPersistenceIslandDataPromptWidget_C, CancelButton) == 0x000528, "Member 'UPlayerClearPersistenceIslandDataPromptWidget_C::CancelButton' has a wrong offset!");
static_assert(offsetof(UPlayerClearPersistenceIslandDataPromptWidget_C, CloseButton) == 0x000530, "Member 'UPlayerClearPersistenceIslandDataPromptWidget_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UPlayerClearPersistenceIslandDataPromptWidget_C, Lightbox) == 0x000538, "Member 'UPlayerClearPersistenceIslandDataPromptWidget_C::Lightbox' has a wrong offset!");
static_assert(offsetof(UPlayerClearPersistenceIslandDataPromptWidget_C, Text_CurrentDescription) == 0x000540, "Member 'UPlayerClearPersistenceIslandDataPromptWidget_C::Text_CurrentDescription' has a wrong offset!");
static_assert(offsetof(UPlayerClearPersistenceIslandDataPromptWidget_C, Title) == 0x000548, "Member 'UPlayerClearPersistenceIslandDataPromptWidget_C::Title' has a wrong offset!");

}
