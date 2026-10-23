#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UGoalsPageQuestCardLine_C final : public UAthenaGoalsPageQuestCardLine
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Selected;
	class UImage*                                 Image_Complete;
	class UProgressBar*                           ProgressBar_GoalPercent;
	class UCommonRichTextBlock*                   RichText_ObjectivesCompleted;
	class UWidgetSwitcher*                        WidgetSwitcher_reward;
	int32                                         Achieved;
	int32                                         Required;
	bool                                          Is_Selected;

public:
	void Construct();
	void Event_On_Selected();
	void Event_On_Unselected();
	void ExecuteUbergraph_GoalsPageQuestCardLine(int32 EntryPoint);
	void Reset();
	void RichText_GoalName_Event(class UCommonRichTextBlock* RichText_GoalName_0);
	void SetIsSelectedState(bool IsSelected);
	void SetObjectiveProgress(const int32 Achieved_0, const int32 Required_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GoalsPageQuestCardLine_C">();
	}
	static class UGoalsPageQuestCardLine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGoalsPageQuestCardLine_C>();
	}
};
static_assert(alignof(UGoalsPageQuestCardLine_C) == 0x000008, "Wrong alignment on UGoalsPageQuestCardLine_C");
static_assert(sizeof(UGoalsPageQuestCardLine_C) == 0x0002D0, "Wrong size on UGoalsPageQuestCardLine_C");
static_assert(offsetof(UGoalsPageQuestCardLine_C, UberGraphFrame) == 0x000290, "Member 'UGoalsPageQuestCardLine_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGoalsPageQuestCardLine_C, Selected) == 0x000298, "Member 'UGoalsPageQuestCardLine_C::Selected' has a wrong offset!");
static_assert(offsetof(UGoalsPageQuestCardLine_C, Image_Complete) == 0x0002A0, "Member 'UGoalsPageQuestCardLine_C::Image_Complete' has a wrong offset!");
static_assert(offsetof(UGoalsPageQuestCardLine_C, ProgressBar_GoalPercent) == 0x0002A8, "Member 'UGoalsPageQuestCardLine_C::ProgressBar_GoalPercent' has a wrong offset!");
static_assert(offsetof(UGoalsPageQuestCardLine_C, RichText_ObjectivesCompleted) == 0x0002B0, "Member 'UGoalsPageQuestCardLine_C::RichText_ObjectivesCompleted' has a wrong offset!");
static_assert(offsetof(UGoalsPageQuestCardLine_C, WidgetSwitcher_reward) == 0x0002B8, "Member 'UGoalsPageQuestCardLine_C::WidgetSwitcher_reward' has a wrong offset!");
static_assert(offsetof(UGoalsPageQuestCardLine_C, Achieved) == 0x0002C0, "Member 'UGoalsPageQuestCardLine_C::Achieved' has a wrong offset!");
static_assert(offsetof(UGoalsPageQuestCardLine_C, Required) == 0x0002C4, "Member 'UGoalsPageQuestCardLine_C::Required' has a wrong offset!");
static_assert(offsetof(UGoalsPageQuestCardLine_C, Is_Selected) == 0x0002C8, "Member 'UGoalsPageQuestCardLine_C::Is_Selected' has a wrong offset!");

}
