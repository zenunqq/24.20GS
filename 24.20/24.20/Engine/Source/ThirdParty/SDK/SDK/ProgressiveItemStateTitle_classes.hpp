#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CrewUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK
{

class UProgressiveItemStateTitle_C final : public UFortProgressiveItemStateTitleWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCrewCrown_Animated_C*                  CrewCrown_Animated;
	class UProgressiveTagsBase_C*                 ProgressiveTags_Benefits;
	class UProgressiveTagsBase_C*                 ProgressiveTags_Stages;
	class UProgressiveTagsBase_C*                 ProgressiveTags_Subscribed;
	class UCommonTextBlock*                       Text_Subheading;
	class UCommonTextBlock*                       Text_Title;
	struct FLinearColor                           Subbed_Dark_Green;
	class FText                                   Text;
	bool                                          Show_Multi_Benefits_tag;
	uint8                                         Pad_2C9[0x7];
	class FText                                   Title_Text;
	struct FSlateColor                            Unsubscribed_Subheader_Color;
	struct FSlateColor                            Subscibed_Subheader_Color;
	struct FSlateColor                            Unsubbed_White;
	struct FLinearColor                           Subbed_Light_Green;
	struct FLinearColor                           Unsubbed_Pink_BG;

public:
	void BP_OnSetHeaderInfo(const class FText& Subheading, const bool bSubscribed, const int32 UnlockedStages, const int32 MaxStages);
	void ExecuteUbergraph_ProgressiveItemStateTitle(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Update_MultiBenefits_Tag(bool Index_0);
	void Update_Stages_Tag(bool Subscribed, const int32 Current_Stage, const int32 Max_Stage);
	void Update_Subheading(const class FText& Text_0, bool Subscribed);
	void Update_Subscribed_Tag(bool Subscribed);
	void Update_Title_Text();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProgressiveItemStateTitle_C">();
	}
	static class UProgressiveItemStateTitle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProgressiveItemStateTitle_C>();
	}
};
static_assert(alignof(UProgressiveItemStateTitle_C) == 0x000008, "Wrong alignment on UProgressiveItemStateTitle_C");
static_assert(sizeof(UProgressiveItemStateTitle_C) == 0x000348, "Wrong size on UProgressiveItemStateTitle_C");
static_assert(offsetof(UProgressiveItemStateTitle_C, UberGraphFrame) == 0x000268, "Member 'UProgressiveItemStateTitle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UProgressiveItemStateTitle_C, CrewCrown_Animated) == 0x000270, "Member 'UProgressiveItemStateTitle_C::CrewCrown_Animated' has a wrong offset!");
static_assert(offsetof(UProgressiveItemStateTitle_C, ProgressiveTags_Benefits) == 0x000278, "Member 'UProgressiveItemStateTitle_C::ProgressiveTags_Benefits' has a wrong offset!");
static_assert(offsetof(UProgressiveItemStateTitle_C, ProgressiveTags_Stages) == 0x000280, "Member 'UProgressiveItemStateTitle_C::ProgressiveTags_Stages' has a wrong offset!");
static_assert(offsetof(UProgressiveItemStateTitle_C, ProgressiveTags_Subscribed) == 0x000288, "Member 'UProgressiveItemStateTitle_C::ProgressiveTags_Subscribed' has a wrong offset!");
static_assert(offsetof(UProgressiveItemStateTitle_C, Text_Subheading) == 0x000290, "Member 'UProgressiveItemStateTitle_C::Text_Subheading' has a wrong offset!");
static_assert(offsetof(UProgressiveItemStateTitle_C, Text_Title) == 0x000298, "Member 'UProgressiveItemStateTitle_C::Text_Title' has a wrong offset!");
static_assert(offsetof(UProgressiveItemStateTitle_C, Subbed_Dark_Green) == 0x0002A0, "Member 'UProgressiveItemStateTitle_C::Subbed_Dark_Green' has a wrong offset!");
static_assert(offsetof(UProgressiveItemStateTitle_C, Text) == 0x0002B0, "Member 'UProgressiveItemStateTitle_C::Text' has a wrong offset!");
static_assert(offsetof(UProgressiveItemStateTitle_C, Show_Multi_Benefits_tag) == 0x0002C8, "Member 'UProgressiveItemStateTitle_C::Show_Multi_Benefits_tag' has a wrong offset!");
static_assert(offsetof(UProgressiveItemStateTitle_C, Title_Text) == 0x0002D0, "Member 'UProgressiveItemStateTitle_C::Title_Text' has a wrong offset!");
static_assert(offsetof(UProgressiveItemStateTitle_C, Unsubscribed_Subheader_Color) == 0x0002E8, "Member 'UProgressiveItemStateTitle_C::Unsubscribed_Subheader_Color' has a wrong offset!");
static_assert(offsetof(UProgressiveItemStateTitle_C, Subscibed_Subheader_Color) == 0x0002FC, "Member 'UProgressiveItemStateTitle_C::Subscibed_Subheader_Color' has a wrong offset!");
static_assert(offsetof(UProgressiveItemStateTitle_C, Unsubbed_White) == 0x000310, "Member 'UProgressiveItemStateTitle_C::Unsubbed_White' has a wrong offset!");
static_assert(offsetof(UProgressiveItemStateTitle_C, Subbed_Light_Green) == 0x000324, "Member 'UProgressiveItemStateTitle_C::Subbed_Light_Green' has a wrong offset!");
static_assert(offsetof(UProgressiveItemStateTitle_C, Unsubbed_Pink_BG) == 0x000334, "Member 'UProgressiveItemStateTitle_C::Unsubbed_Pink_BG' has a wrong offset!");

}
