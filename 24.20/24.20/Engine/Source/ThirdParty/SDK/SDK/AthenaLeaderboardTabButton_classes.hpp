#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CommonUILegacy_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class UAthenaLeaderboardTabButton_C final : public UCommonButtonLegacy
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCommonTextBlock*                       CenterButtonTextWidget;
	class UHorizontalBox*                         ContentHB;
	class UImage*                                 LeftSideImage;
	class FText                                   ButtonText;
	uint8                                         Pad_1468[0x8];
	struct FSlateBrush                            IconBrush;
	bool                                          UseText;
	uint8                                         Pad_1531[0x3];
	struct FLinearColor                           SelectedIconTint;
	struct FLinearColor                           DeselectedIconTint;
	struct FLinearColor                           HoveredIconTint;

public:
	void BP_OnDeselected();
	void BP_OnHovered();
	void BP_OnSelected();
	void BP_OnUnhovered();
	void Construct();
	void ExecuteUbergraph_AthenaLeaderboardTabButton(int32 EntryPoint);
	void OnCurrentTextStyleChanged();
	void PreConstruct(bool IsDesignTime);
	void Set_Icon(const struct FSlateBrush& IconBrush_0);
	void Set_Text(const class FText& ButtonText_0);
	void SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo);
	void ShowText();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaLeaderboardTabButton_C">();
	}
	static class UAthenaLeaderboardTabButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaLeaderboardTabButton_C>();
	}
};
static_assert(alignof(UAthenaLeaderboardTabButton_C) == 0x000010, "Wrong alignment on UAthenaLeaderboardTabButton_C");
static_assert(sizeof(UAthenaLeaderboardTabButton_C) == 0x001570, "Wrong size on UAthenaLeaderboardTabButton_C");
static_assert(offsetof(UAthenaLeaderboardTabButton_C, UberGraphFrame) == 0x001430, "Member 'UAthenaLeaderboardTabButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaLeaderboardTabButton_C, CenterButtonTextWidget) == 0x001438, "Member 'UAthenaLeaderboardTabButton_C::CenterButtonTextWidget' has a wrong offset!");
static_assert(offsetof(UAthenaLeaderboardTabButton_C, ContentHB) == 0x001440, "Member 'UAthenaLeaderboardTabButton_C::ContentHB' has a wrong offset!");
static_assert(offsetof(UAthenaLeaderboardTabButton_C, LeftSideImage) == 0x001448, "Member 'UAthenaLeaderboardTabButton_C::LeftSideImage' has a wrong offset!");
static_assert(offsetof(UAthenaLeaderboardTabButton_C, ButtonText) == 0x001450, "Member 'UAthenaLeaderboardTabButton_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UAthenaLeaderboardTabButton_C, IconBrush) == 0x001470, "Member 'UAthenaLeaderboardTabButton_C::IconBrush' has a wrong offset!");
static_assert(offsetof(UAthenaLeaderboardTabButton_C, UseText) == 0x001530, "Member 'UAthenaLeaderboardTabButton_C::UseText' has a wrong offset!");
static_assert(offsetof(UAthenaLeaderboardTabButton_C, SelectedIconTint) == 0x001534, "Member 'UAthenaLeaderboardTabButton_C::SelectedIconTint' has a wrong offset!");
static_assert(offsetof(UAthenaLeaderboardTabButton_C, DeselectedIconTint) == 0x001544, "Member 'UAthenaLeaderboardTabButton_C::DeselectedIconTint' has a wrong offset!");
static_assert(offsetof(UAthenaLeaderboardTabButton_C, HoveredIconTint) == 0x001554, "Member 'UAthenaLeaderboardTabButton_C::HoveredIconTint' has a wrong offset!");

}
