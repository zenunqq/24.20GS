#pragma once

#include "Basic.hpp"

#include "GoalsPageQuestCardLine_classes.hpp"
#include "GoalsPageQuestCardLine_parameters.hpp"

namespace SDK
{

void UGoalsPageQuestCardLine_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GoalsPageQuestCardLine_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UGoalsPageQuestCardLine_C::Event_On_Selected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GoalsPageQuestCardLine_C", "Event On Selected");

	UObject::ProcessEvent(Func, nullptr);
}

void UGoalsPageQuestCardLine_C::Event_On_Unselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GoalsPageQuestCardLine_C", "Event On Unselected");

	UObject::ProcessEvent(Func, nullptr);
}

void UGoalsPageQuestCardLine_C::ExecuteUbergraph_GoalsPageQuestCardLine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GoalsPageQuestCardLine_C", "ExecuteUbergraph_GoalsPageQuestCardLine");

	Params::GoalsPageQuestCardLine_C_ExecuteUbergraph_GoalsPageQuestCardLine Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGoalsPageQuestCardLine_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GoalsPageQuestCardLine_C", "Reset");

	UObject::ProcessEvent(Func, nullptr);
}

void UGoalsPageQuestCardLine_C::RichText_GoalName_Event(class UCommonRichTextBlock* RichText_GoalName_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GoalsPageQuestCardLine_C", "RichText_GoalName_Event");

	Params::GoalsPageQuestCardLine_C_RichText_GoalName_Event Parms{};

	Parms.RichText_GoalName_0 = RichText_GoalName_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UGoalsPageQuestCardLine_C::SetIsSelectedState(bool IsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GoalsPageQuestCardLine_C", "SetIsSelectedState");

	Params::GoalsPageQuestCardLine_C_SetIsSelectedState Parms{};

	Parms.IsSelected = IsSelected;

	UObject::ProcessEvent(Func, &Parms);
}

void UGoalsPageQuestCardLine_C::SetObjectiveProgress(const int32 Achieved_0, const int32 Required_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GoalsPageQuestCardLine_C", "SetObjectiveProgress");

	Params::GoalsPageQuestCardLine_C_SetObjectiveProgress Parms{};

	Parms.Achieved_0 = Achieved_0;
	Parms.Required_0 = Required_0;

	UObject::ProcessEvent(Func, &Parms);
}

}
