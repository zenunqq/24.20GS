#pragma once

#include "Basic.hpp"

#include "InterfacePlayerPawn_classes.hpp"
#include "InterfacePlayerPawn_parameters.hpp"

namespace SDK
{

void IInterfacePlayerPawn_C::FootStepLeft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InterfacePlayerPawn_C", "FootStepLeft");

	UObject::ProcessEvent(Func, nullptr);
}

void IInterfacePlayerPawn_C::FootStepRight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InterfacePlayerPawn_C", "FootStepRight");

	UObject::ProcessEvent(Func, nullptr);
}

void IInterfacePlayerPawn_C::Melee_Effect_Color(struct FVector* Melee_Color_Set)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InterfacePlayerPawn_C", "Melee_Effect_Color");

	Params::InterfacePlayerPawn_C_Melee_Effect_Color Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Melee_Color_Set != nullptr)
		*Melee_Color_Set = std::move(Parms.Melee_Color_Set);
}

void IInterfacePlayerPawn_C::MeleeSwingLeft(bool First_Left)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InterfacePlayerPawn_C", "MeleeSwingLeft");

	Params::InterfacePlayerPawn_C_MeleeSwingLeft Parms{};

	Parms.First_Left = First_Left;

	UObject::ProcessEvent(Func, &Parms);
}

void IInterfacePlayerPawn_C::MeleeSwingLeft_End()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InterfacePlayerPawn_C", "MeleeSwingLeft_End");

	UObject::ProcessEvent(Func, nullptr);
}

void IInterfacePlayerPawn_C::MeleeSwingRight(bool First_Right)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InterfacePlayerPawn_C", "MeleeSwingRight");

	Params::InterfacePlayerPawn_C_MeleeSwingRight Parms{};

	Parms.First_Right = First_Right;

	UObject::ProcessEvent(Func, &Parms);
}

void IInterfacePlayerPawn_C::MeleeSwingRight_End()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InterfacePlayerPawn_C", "MeleeSwingRight_End");

	UObject::ProcessEvent(Func, nullptr);
}

}
