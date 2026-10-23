#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class UActivityBrowserModeSetListEntry_C : public UFortActivityBrowserModeSetListEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       SetDisabledColoration;
	class UWidgetAnimation*                       OnHoverUnhoverRehover;
	class UWidgetAnimation*                       OnImageLoaded;
	class UCategoryButton_C*                      CategoryButton;
	class UCommonTextBlock*                       DisabledWarningMessage;
	class UOverlay*                               Ovr_Primary;
	class UOverlay*                               OvrDisabledWarning;
	class USizeBox*                               SizeBox_Primary;
	class UImage*                                 Thumbnail;
	class FName                                   ThumbnailImageParam;
	class FName                                   ThumbnailAlphaParam;
	bool                                          IsKeyArtValid;
	uint8                                         Pad_1459[0x7];
	class UTexture*                               DefaultImage;
	double                                        DisabledClickDuration;
	bool                                          IsActivityValid;
	uint8                                         Pad_1471[0x7];
	struct FVector2D                              TileSize;
	class FName                                   ThumbnailOverlayOpacityParam;
	bool                                          IsInHoveredState;
	bool                                          Pad_Left;
	bool                                          Pad_Right;

public:
	void BP_OnClicked();
	void BP_OnHovered();
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void BP_OnUnhovered();
	void Construct();
	void ExecuteUbergraph_ActivityBrowserModeSetListEntry(int32 EntryPoint);
	void OnActivityNameSet(const class FText& ActivityName);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void OnPartySizeChanged(const int32 PartySize);
	void OnPreviewImageChanged(const bool bIsLoading, const class UTexture* Texture);
	void OnSavedActivitySet(const bool IsSaved);
	void PreConstruct(bool IsDesignTime);
	void RefreshDisabledState();
	void ResetSetDisabledColorationAnimation();
	void SetHoveredState(bool IsHovered_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ActivityBrowserModeSetListEntry_C">();
	}
	static class UActivityBrowserModeSetListEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UActivityBrowserModeSetListEntry_C>();
	}
};
static_assert(alignof(UActivityBrowserModeSetListEntry_C) == 0x000010, "Wrong alignment on UActivityBrowserModeSetListEntry_C");
static_assert(sizeof(UActivityBrowserModeSetListEntry_C) == 0x001490, "Wrong size on UActivityBrowserModeSetListEntry_C");
static_assert(offsetof(UActivityBrowserModeSetListEntry_C, UberGraphFrame) == 0x001400, "Member 'UActivityBrowserModeSetListEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UActivityBrowserModeSetListEntry_C, SetDisabledColoration) == 0x001408, "Member 'UActivityBrowserModeSetListEntry_C::SetDisabledColoration' has a wrong offset!");
static_assert(offsetof(UActivityBrowserModeSetListEntry_C, OnHoverUnhoverRehover) == 0x001410, "Member 'UActivityBrowserModeSetListEntry_C::OnHoverUnhoverRehover' has a wrong offset!");
static_assert(offsetof(UActivityBrowserModeSetListEntry_C, OnImageLoaded) == 0x001418, "Member 'UActivityBrowserModeSetListEntry_C::OnImageLoaded' has a wrong offset!");
static_assert(offsetof(UActivityBrowserModeSetListEntry_C, CategoryButton) == 0x001420, "Member 'UActivityBrowserModeSetListEntry_C::CategoryButton' has a wrong offset!");
static_assert(offsetof(UActivityBrowserModeSetListEntry_C, DisabledWarningMessage) == 0x001428, "Member 'UActivityBrowserModeSetListEntry_C::DisabledWarningMessage' has a wrong offset!");
static_assert(offsetof(UActivityBrowserModeSetListEntry_C, Ovr_Primary) == 0x001430, "Member 'UActivityBrowserModeSetListEntry_C::Ovr_Primary' has a wrong offset!");
static_assert(offsetof(UActivityBrowserModeSetListEntry_C, OvrDisabledWarning) == 0x001438, "Member 'UActivityBrowserModeSetListEntry_C::OvrDisabledWarning' has a wrong offset!");
static_assert(offsetof(UActivityBrowserModeSetListEntry_C, SizeBox_Primary) == 0x001440, "Member 'UActivityBrowserModeSetListEntry_C::SizeBox_Primary' has a wrong offset!");
static_assert(offsetof(UActivityBrowserModeSetListEntry_C, Thumbnail) == 0x001448, "Member 'UActivityBrowserModeSetListEntry_C::Thumbnail' has a wrong offset!");
static_assert(offsetof(UActivityBrowserModeSetListEntry_C, ThumbnailImageParam) == 0x001450, "Member 'UActivityBrowserModeSetListEntry_C::ThumbnailImageParam' has a wrong offset!");
static_assert(offsetof(UActivityBrowserModeSetListEntry_C, ThumbnailAlphaParam) == 0x001454, "Member 'UActivityBrowserModeSetListEntry_C::ThumbnailAlphaParam' has a wrong offset!");
static_assert(offsetof(UActivityBrowserModeSetListEntry_C, IsKeyArtValid) == 0x001458, "Member 'UActivityBrowserModeSetListEntry_C::IsKeyArtValid' has a wrong offset!");
static_assert(offsetof(UActivityBrowserModeSetListEntry_C, DefaultImage) == 0x001460, "Member 'UActivityBrowserModeSetListEntry_C::DefaultImage' has a wrong offset!");
static_assert(offsetof(UActivityBrowserModeSetListEntry_C, DisabledClickDuration) == 0x001468, "Member 'UActivityBrowserModeSetListEntry_C::DisabledClickDuration' has a wrong offset!");
static_assert(offsetof(UActivityBrowserModeSetListEntry_C, IsActivityValid) == 0x001470, "Member 'UActivityBrowserModeSetListEntry_C::IsActivityValid' has a wrong offset!");
static_assert(offsetof(UActivityBrowserModeSetListEntry_C, TileSize) == 0x001478, "Member 'UActivityBrowserModeSetListEntry_C::TileSize' has a wrong offset!");
static_assert(offsetof(UActivityBrowserModeSetListEntry_C, ThumbnailOverlayOpacityParam) == 0x001488, "Member 'UActivityBrowserModeSetListEntry_C::ThumbnailOverlayOpacityParam' has a wrong offset!");
static_assert(offsetof(UActivityBrowserModeSetListEntry_C, IsInHoveredState) == 0x00148C, "Member 'UActivityBrowserModeSetListEntry_C::IsInHoveredState' has a wrong offset!");
static_assert(offsetof(UActivityBrowserModeSetListEntry_C, Pad_Left) == 0x00148D, "Member 'UActivityBrowserModeSetListEntry_C::Pad_Left' has a wrong offset!");
static_assert(offsetof(UActivityBrowserModeSetListEntry_C, Pad_Right) == 0x00148E, "Member 'UActivityBrowserModeSetListEntry_C::Pad_Right' has a wrong offset!");

}
