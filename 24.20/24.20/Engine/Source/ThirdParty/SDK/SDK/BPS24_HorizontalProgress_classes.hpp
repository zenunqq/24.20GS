#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class UBPS24_HorizontalProgress_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCommonRichTextBlock*                   CommonRichTextBlock;
	class UImage*                                 Image__ClaimedReward_progress;
	class UCommonRichTextBlock*                   RichText_ClaimedReward_Progress;
	class FText                                   PrimaryText;
	bool                                          ForceSingleLineOfText;
	uint8                                         Pad_2A1[0x3];
	struct FLinearColor                           ProgressBarColor;
	struct FLinearColor                           ProgressBarColorCompleted;

public:
	void ExecuteUbergraph_BPS24_HorizontalProgress(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void UpdateBarProgress(int32 Owned, int32 Needed);
	void UpdateProgress(int32 Current, int32 Needed);
	void UpdateText(const class FText& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPS24_HorizontalProgress_C">();
	}
	static class UBPS24_HorizontalProgress_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPS24_HorizontalProgress_C>();
	}
};
static_assert(alignof(UBPS24_HorizontalProgress_C) == 0x000008, "Wrong alignment on UBPS24_HorizontalProgress_C");
static_assert(sizeof(UBPS24_HorizontalProgress_C) == 0x0002C8, "Wrong size on UBPS24_HorizontalProgress_C");
static_assert(offsetof(UBPS24_HorizontalProgress_C, UberGraphFrame) == 0x000268, "Member 'UBPS24_HorizontalProgress_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPS24_HorizontalProgress_C, CommonRichTextBlock) == 0x000270, "Member 'UBPS24_HorizontalProgress_C::CommonRichTextBlock' has a wrong offset!");
static_assert(offsetof(UBPS24_HorizontalProgress_C, Image__ClaimedReward_progress) == 0x000278, "Member 'UBPS24_HorizontalProgress_C::Image__ClaimedReward_progress' has a wrong offset!");
static_assert(offsetof(UBPS24_HorizontalProgress_C, RichText_ClaimedReward_Progress) == 0x000280, "Member 'UBPS24_HorizontalProgress_C::RichText_ClaimedReward_Progress' has a wrong offset!");
static_assert(offsetof(UBPS24_HorizontalProgress_C, PrimaryText) == 0x000288, "Member 'UBPS24_HorizontalProgress_C::PrimaryText' has a wrong offset!");
static_assert(offsetof(UBPS24_HorizontalProgress_C, ForceSingleLineOfText) == 0x0002A0, "Member 'UBPS24_HorizontalProgress_C::ForceSingleLineOfText' has a wrong offset!");
static_assert(offsetof(UBPS24_HorizontalProgress_C, ProgressBarColor) == 0x0002A4, "Member 'UBPS24_HorizontalProgress_C::ProgressBarColor' has a wrong offset!");
static_assert(offsetof(UBPS24_HorizontalProgress_C, ProgressBarColorCompleted) == 0x0002B4, "Member 'UBPS24_HorizontalProgress_C::ProgressBarColorCompleted' has a wrong offset!");

}
