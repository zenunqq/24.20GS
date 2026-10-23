#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UAthenaMatchmakingPlayButton_C final : public UAthenaMatchmakingPlayButtonBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Disabled;
	class UWidgetAnimation*                       PlayShine;
	class UWidgetAnimation*                       OnHovered;
	class UCommonTextBlock*                       CenterButtonTextWidget;
	class UImage*                                 Image_ButtonTop;
	class UImage*                                 Image_Shadow;
	class UMatchmakingInputIndicator_C*           MatchmakingInputIndicator;

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_AthenaMatchmakingPlayButton(int32 EntryPoint);
	void SetButtonText(const class FText& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaMatchmakingPlayButton_C">();
	}
	static class UAthenaMatchmakingPlayButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaMatchmakingPlayButton_C>();
	}
};
static_assert(alignof(UAthenaMatchmakingPlayButton_C) == 0x000010, "Wrong alignment on UAthenaMatchmakingPlayButton_C");
static_assert(sizeof(UAthenaMatchmakingPlayButton_C) == 0x001490, "Wrong size on UAthenaMatchmakingPlayButton_C");
static_assert(offsetof(UAthenaMatchmakingPlayButton_C, UberGraphFrame) == 0x001450, "Member 'UAthenaMatchmakingPlayButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingPlayButton_C, Disabled) == 0x001458, "Member 'UAthenaMatchmakingPlayButton_C::Disabled' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingPlayButton_C, PlayShine) == 0x001460, "Member 'UAthenaMatchmakingPlayButton_C::PlayShine' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingPlayButton_C, OnHovered) == 0x001468, "Member 'UAthenaMatchmakingPlayButton_C::OnHovered' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingPlayButton_C, CenterButtonTextWidget) == 0x001470, "Member 'UAthenaMatchmakingPlayButton_C::CenterButtonTextWidget' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingPlayButton_C, Image_ButtonTop) == 0x001478, "Member 'UAthenaMatchmakingPlayButton_C::Image_ButtonTop' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingPlayButton_C, Image_Shadow) == 0x001480, "Member 'UAthenaMatchmakingPlayButton_C::Image_Shadow' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingPlayButton_C, MatchmakingInputIndicator) == 0x001488, "Member 'UAthenaMatchmakingPlayButton_C::MatchmakingInputIndicator' has a wrong offset!");

}
