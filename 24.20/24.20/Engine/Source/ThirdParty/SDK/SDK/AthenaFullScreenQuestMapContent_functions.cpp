#pragma once

#include "Basic.hpp"

#include "AthenaFullScreenQuestMapContent_classes.hpp"
#include "AthenaFullScreenQuestMapContent_parameters.hpp"

namespace SDK
{

void UAthenaFullScreenQuestMapContent_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaFullScreenQuestMapContent_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaFullScreenQuestMapContent_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaFullScreenQuestMapContent_C", "BP_OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaFullScreenQuestMapContent_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaFullScreenQuestMapContent_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaFullScreenQuestMapContent_C::ExecuteUbergraph_AthenaFullScreenQuestMapContent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaFullScreenQuestMapContent_C", "ExecuteUbergraph_AthenaFullScreenQuestMapContent");

	Params::AthenaFullScreenQuestMapContent_C_ExecuteUbergraph_AthenaFullScreenQuestMapContent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaFullScreenQuestMapContent_C::OnChallengeCategoryChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaFullScreenQuestMapContent_C", "OnChallengeCategoryChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaFullScreenQuestMapContent_C::OnQuestListGainedFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaFullScreenQuestMapContent_C", "OnQuestListGainedFocus");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaFullScreenQuestMapContent_C::OnQuestListLostFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaFullScreenQuestMapContent_C", "OnQuestListLostFocus");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaFullScreenQuestMapContent_C::SetEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaFullScreenQuestMapContent_C", "SetEnabled");

	Params::AthenaFullScreenQuestMapContent_C_SetEnabled Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaFullScreenQuestMapContent_C::ShowMapLayerContainer(const bool bShowing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaFullScreenQuestMapContent_C", "ShowMapLayerContainer");

	Params::AthenaFullScreenQuestMapContent_C_ShowMapLayerContainer Parms{};

	Parms.bShowing = bShowing;

	UObject::ProcessEvent(Func, &Parms);
}

}
