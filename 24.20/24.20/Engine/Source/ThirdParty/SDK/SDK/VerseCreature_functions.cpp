#pragma once

#include "Basic.hpp"

#include "VerseCreature_classes.hpp"
#include "VerseCreature_parameters.hpp"

namespace SDK
{

int64 Utask_VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("task_VerseCreature_creature_component$NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R", "Update");

	Params::task_VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R_Update Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int64 Utask_VerseCreature_creature_component_MoveInRangeToAttack::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("task_VerseCreature_creature_component$MoveInRangeToAttack", "Update");

	Params::task_VerseCreature_creature_component_MoveInRangeToAttack_Update Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int64 Utask_VerseCreature_creature_component_RoamAround::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("task_VerseCreature_creature_component$RoamAround", "Update");

	Params::task_VerseCreature_creature_component_RoamAround_Update Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UVerseCreature_creature_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseCreature_creature_component", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UVerseCreature_creature_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseCreature_creature_component", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UVerseCreature_creature_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseCreature_creature_component", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

FOptionProperty_ UVerseCreature_creature_component::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fnavigation__interface_N_RGetCurrentDestination(const struct VerseCreature::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseCreature_creature_component", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fnavigation__interface_N_RGetCurrentDestination");

	Params::VerseCreature_creature_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fnavigation__interface_N_RGetCurrentDestination Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EVerseAIBase_action_result UVerseCreature_creature_component::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fnavigation__interface_N_RStopNavigation(const struct VerseCreature::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseCreature_creature_component", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fnavigation__interface_N_RStopNavigation");

	Params::VerseCreature_creature_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fnavigation__interface_N_RStopNavigation Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UConcurrency_task* UVerseCreature_creature_component::MoveInRangeToAttack(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct VerseCreature::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseCreature_creature_component", "MoveInRangeToAttack");

	Params::VerseCreature_creature_component_MoveInRangeToAttack Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

class UConcurrency_task* UVerseCreature_creature_component::NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct VerseCreature::Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseCreature_creature_component", "NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R");

	Params::VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

class UConcurrency_task* UVerseCreature_creature_component::RoamAround(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct VerseCreature::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseCreature_creature_component", "RoamAround");

	Params::VerseCreature_creature_component_RoamAround Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
