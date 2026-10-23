#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUILegacy_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UQuestScreen_ArrowButton_C final : public UCommonButtonLegacy
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       RowActive_Flip;
	class UWidgetAnimation*                       RowInactive;
	class UWidgetAnimation*                       RowActive;
	class UWidgetAnimation*                       LargePulse;
	class UWidgetAnimation*                       Hover;
	class UImage*                                 Arrow;
	class UImage*                                 Arrow_LargePulse;
	class USizeBox*                               Icon;
	class USafeZone*                              SafeZone_0;
	class UImage*                                 Shadow;
	bool                                          Flip;
	bool                                          InputActionOnSide;

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void Construct();
	void ExecuteUbergraph_QuestScreen_ArrowButton(int32 EntryPoint);
	void GetActiveAnimation(class UWidgetAnimation** ActiveAnimation);
	void OnRowActiveChanged(bool IsActive);
	void OnRowReset(bool IsActive);
	void PreConstruct(bool IsDesignTime);
	void SnapAnimationToEnd(class UWidgetAnimation* InAnimation);
	void UpdateArrowColor(const struct FLinearColor& Color, const struct FLinearColor& HoverColor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestScreen_ArrowButton_C">();
	}
	static class UQuestScreen_ArrowButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestScreen_ArrowButton_C>();
	}
};
static_assert(alignof(UQuestScreen_ArrowButton_C) == 0x000010, "Wrong alignment on UQuestScreen_ArrowButton_C");
static_assert(sizeof(UQuestScreen_ArrowButton_C) == 0x001490, "Wrong size on UQuestScreen_ArrowButton_C");
static_assert(offsetof(UQuestScreen_ArrowButton_C, UberGraphFrame) == 0x001430, "Member 'UQuestScreen_ArrowButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UQuestScreen_ArrowButton_C, RowActive_Flip) == 0x001438, "Member 'UQuestScreen_ArrowButton_C::RowActive_Flip' has a wrong offset!");
static_assert(offsetof(UQuestScreen_ArrowButton_C, RowInactive) == 0x001440, "Member 'UQuestScreen_ArrowButton_C::RowInactive' has a wrong offset!");
static_assert(offsetof(UQuestScreen_ArrowButton_C, RowActive) == 0x001448, "Member 'UQuestScreen_ArrowButton_C::RowActive' has a wrong offset!");
static_assert(offsetof(UQuestScreen_ArrowButton_C, LargePulse) == 0x001450, "Member 'UQuestScreen_ArrowButton_C::LargePulse' has a wrong offset!");
static_assert(offsetof(UQuestScreen_ArrowButton_C, Hover) == 0x001458, "Member 'UQuestScreen_ArrowButton_C::Hover' has a wrong offset!");
static_assert(offsetof(UQuestScreen_ArrowButton_C, Arrow) == 0x001460, "Member 'UQuestScreen_ArrowButton_C::Arrow' has a wrong offset!");
static_assert(offsetof(UQuestScreen_ArrowButton_C, Arrow_LargePulse) == 0x001468, "Member 'UQuestScreen_ArrowButton_C::Arrow_LargePulse' has a wrong offset!");
static_assert(offsetof(UQuestScreen_ArrowButton_C, Icon) == 0x001470, "Member 'UQuestScreen_ArrowButton_C::Icon' has a wrong offset!");
static_assert(offsetof(UQuestScreen_ArrowButton_C, SafeZone_0) == 0x001478, "Member 'UQuestScreen_ArrowButton_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UQuestScreen_ArrowButton_C, Shadow) == 0x001480, "Member 'UQuestScreen_ArrowButton_C::Shadow' has a wrong offset!");
static_assert(offsetof(UQuestScreen_ArrowButton_C, Flip) == 0x001488, "Member 'UQuestScreen_ArrowButton_C::Flip' has a wrong offset!");
static_assert(offsetof(UQuestScreen_ArrowButton_C, InputActionOnSide) == 0x001489, "Member 'UQuestScreen_ArrowButton_C::InputActionOnSide' has a wrong offset!");

}
