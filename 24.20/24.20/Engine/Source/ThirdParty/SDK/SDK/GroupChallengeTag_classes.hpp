#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class UGroupChallengeTag_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Flash;
	class UBorder*                                Border_2;
	class UImage*                                 Icon;
	class UImage*                                 Image_Flash;
	class USizeBox*                               SizeBox_Overall;
	class UCommonRichTextBlock*                   String;
	class FText                                   RECOMMENDED_4_PLAYERS;
	class FText                                   SQUAD_ASSIST;
	bool                                          ConstrainWidth;
	uint8                                         Pad_2D1[0x7];
	double                                        WidthOverrideValue;
	bool                                          bIsFlashing;

public:
	void Construct();
	void ExecuteUbergraph_GroupChallengeTag(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetRarity(EFortRarity Rarity);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GroupChallengeTag_C">();
	}
	static class UGroupChallengeTag_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGroupChallengeTag_C>();
	}
};
static_assert(alignof(UGroupChallengeTag_C) == 0x000008, "Wrong alignment on UGroupChallengeTag_C");
static_assert(sizeof(UGroupChallengeTag_C) == 0x0002E8, "Wrong size on UGroupChallengeTag_C");
static_assert(offsetof(UGroupChallengeTag_C, UberGraphFrame) == 0x000268, "Member 'UGroupChallengeTag_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGroupChallengeTag_C, Flash) == 0x000270, "Member 'UGroupChallengeTag_C::Flash' has a wrong offset!");
static_assert(offsetof(UGroupChallengeTag_C, Border_2) == 0x000278, "Member 'UGroupChallengeTag_C::Border_2' has a wrong offset!");
static_assert(offsetof(UGroupChallengeTag_C, Icon) == 0x000280, "Member 'UGroupChallengeTag_C::Icon' has a wrong offset!");
static_assert(offsetof(UGroupChallengeTag_C, Image_Flash) == 0x000288, "Member 'UGroupChallengeTag_C::Image_Flash' has a wrong offset!");
static_assert(offsetof(UGroupChallengeTag_C, SizeBox_Overall) == 0x000290, "Member 'UGroupChallengeTag_C::SizeBox_Overall' has a wrong offset!");
static_assert(offsetof(UGroupChallengeTag_C, String) == 0x000298, "Member 'UGroupChallengeTag_C::String' has a wrong offset!");
static_assert(offsetof(UGroupChallengeTag_C, RECOMMENDED_4_PLAYERS) == 0x0002A0, "Member 'UGroupChallengeTag_C::RECOMMENDED_4_PLAYERS' has a wrong offset!");
static_assert(offsetof(UGroupChallengeTag_C, SQUAD_ASSIST) == 0x0002B8, "Member 'UGroupChallengeTag_C::SQUAD_ASSIST' has a wrong offset!");
static_assert(offsetof(UGroupChallengeTag_C, ConstrainWidth) == 0x0002D0, "Member 'UGroupChallengeTag_C::ConstrainWidth' has a wrong offset!");
static_assert(offsetof(UGroupChallengeTag_C, WidthOverrideValue) == 0x0002D8, "Member 'UGroupChallengeTag_C::WidthOverrideValue' has a wrong offset!");
static_assert(offsetof(UGroupChallengeTag_C, bIsFlashing) == 0x0002E0, "Member 'UGroupChallengeTag_C::bIsFlashing' has a wrong offset!");

}
