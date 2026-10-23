#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class UUserSearchResultListEntry_XS_C final : public UFortUserSearchResultListEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Selected;
	class UWidgetAnimation*                       Hovered;
	class UImage*                                 Arrow;
	class UIconTextButton_C*                      EmptyButtonToEatOneMouseUpEvent;
	class UImage*                                 Image_Lock;
	class UCommonRichTextBlock*                   Text_DisplayName;
	class UUserActionMenuInputButton_C*           UserActionMenuInputButton;
	struct FLinearColor                           EncourageEpicFriend_IdleColor;
	struct FLinearColor                           EncourageEpicFriend_HoveredColor;

public:
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_UserSearchResultListEntry_XS(int32 EntryPoint);
	void SetNamePlatformAndMutuals(const class FText& DisplayName, const class FText& Platform, int32 MutualCount);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UserSearchResultListEntry_XS_C">();
	}
	static class UUserSearchResultListEntry_XS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUserSearchResultListEntry_XS_C>();
	}
};
static_assert(alignof(UUserSearchResultListEntry_XS_C) == 0x000010, "Wrong alignment on UUserSearchResultListEntry_XS_C");
static_assert(sizeof(UUserSearchResultListEntry_XS_C) == 0x001560, "Wrong size on UUserSearchResultListEntry_XS_C");
static_assert(offsetof(UUserSearchResultListEntry_XS_C, UberGraphFrame) == 0x001500, "Member 'UUserSearchResultListEntry_XS_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUserSearchResultListEntry_XS_C, Selected) == 0x001508, "Member 'UUserSearchResultListEntry_XS_C::Selected' has a wrong offset!");
static_assert(offsetof(UUserSearchResultListEntry_XS_C, Hovered) == 0x001510, "Member 'UUserSearchResultListEntry_XS_C::Hovered' has a wrong offset!");
static_assert(offsetof(UUserSearchResultListEntry_XS_C, Arrow) == 0x001518, "Member 'UUserSearchResultListEntry_XS_C::Arrow' has a wrong offset!");
static_assert(offsetof(UUserSearchResultListEntry_XS_C, EmptyButtonToEatOneMouseUpEvent) == 0x001520, "Member 'UUserSearchResultListEntry_XS_C::EmptyButtonToEatOneMouseUpEvent' has a wrong offset!");
static_assert(offsetof(UUserSearchResultListEntry_XS_C, Image_Lock) == 0x001528, "Member 'UUserSearchResultListEntry_XS_C::Image_Lock' has a wrong offset!");
static_assert(offsetof(UUserSearchResultListEntry_XS_C, Text_DisplayName) == 0x001530, "Member 'UUserSearchResultListEntry_XS_C::Text_DisplayName' has a wrong offset!");
static_assert(offsetof(UUserSearchResultListEntry_XS_C, UserActionMenuInputButton) == 0x001538, "Member 'UUserSearchResultListEntry_XS_C::UserActionMenuInputButton' has a wrong offset!");
static_assert(offsetof(UUserSearchResultListEntry_XS_C, EncourageEpicFriend_IdleColor) == 0x001540, "Member 'UUserSearchResultListEntry_XS_C::EncourageEpicFriend_IdleColor' has a wrong offset!");
static_assert(offsetof(UUserSearchResultListEntry_XS_C, EncourageEpicFriend_HoveredColor) == 0x001550, "Member 'UUserSearchResultListEntry_XS_C::EncourageEpicFriend_HoveredColor' has a wrong offset!");

}
