#pragma once

#include "Basic.hpp"

#include "GAB_Melee_Generic_EventGraph_classes.hpp"
#include "GAB_Melee_Generic_EventGraph_parameters.hpp"

namespace SDK
{

void UGAB_Melee_Generic_EventGraph_C::Cancelled_8C20D6D3411A3D7E54D6049F69DF10BE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Melee_Generic_EventGraph_C", "Cancelled_8C20D6D3411A3D7E54D6049F69DF10BE");

	Params::GAB_Melee_Generic_EventGraph_C_Cancelled_8C20D6D3411A3D7E54D6049F69DF10BE Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}

void UGAB_Melee_Generic_EventGraph_C::Completed_8C20D6D3411A3D7E54D6049F69DF10BE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Melee_Generic_EventGraph_C", "Completed_8C20D6D3411A3D7E54D6049F69DF10BE");

	Params::GAB_Melee_Generic_EventGraph_C_Completed_8C20D6D3411A3D7E54D6049F69DF10BE Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}

void UGAB_Melee_Generic_EventGraph_C::ExecuteUbergraph_GAB_Melee_Generic_EventGraph(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Melee_Generic_EventGraph_C", "ExecuteUbergraph_GAB_Melee_Generic_EventGraph");

	Params::GAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGAB_Melee_Generic_EventGraph_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Melee_Generic_EventGraph_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

void UGAB_Melee_Generic_EventGraph_C::OnTriggeredFromAnimNotify(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Melee_Generic_EventGraph_C", "OnTriggeredFromAnimNotify");

	Params::GAB_Melee_Generic_EventGraph_C_OnTriggeredFromAnimNotify Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}

void UGAB_Melee_Generic_EventGraph_C::SetKnockbackImmunity(bool ImmunityOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Melee_Generic_EventGraph_C", "SetKnockbackImmunity");

	Params::GAB_Melee_Generic_EventGraph_C_SetKnockbackImmunity Parms{};

	Parms.ImmunityOn = ImmunityOn;

	UObject::ProcessEvent(Func, &Parms);
}

void UGAB_Melee_Generic_EventGraph_C::SetPawnCollision(class AFortPawn* FortPawn, bool CollisionOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Melee_Generic_EventGraph_C", "SetPawnCollision");

	Params::GAB_Melee_Generic_EventGraph_C_SetPawnCollision Parms{};

	Parms.FortPawn = FortPawn;
	Parms.CollisionOn = CollisionOn;

	UObject::ProcessEvent(Func, &Parms);
}

void UGAB_Melee_Generic_EventGraph_C::Triggered_8C20D6D3411A3D7E54D6049F69DF10BE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Melee_Generic_EventGraph_C", "Triggered_8C20D6D3411A3D7E54D6049F69DF10BE");

	Params::GAB_Melee_Generic_EventGraph_C_Triggered_8C20D6D3411A3D7E54D6049F69DF10BE Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}

void UGAB_Melee_Generic_EventGraph_C::Get_Is_Actor_B_Within_HalfAngle_Of_Actor_A_Facing(class AActor* Actor_A, class AActor* Actor_B, double Half_Angle_Of_Actor_A_Facing, bool* IsWithinHalfAngle) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Melee_Generic_EventGraph_C", "Get_Is_Actor_B_Within_HalfAngle_Of_Actor_A_Facing");

	Params::GAB_Melee_Generic_EventGraph_C_Get_Is_Actor_B_Within_HalfAngle_Of_Actor_A_Facing Parms{};

	Parms.Actor_A = Actor_A;
	Parms.Actor_B = Actor_B;
	Parms.Half_Angle_Of_Actor_A_Facing = Half_Angle_Of_Actor_A_Facing;

	UObject::ProcessEvent(Func, &Parms);

	if (IsWithinHalfAngle != nullptr)
		*IsWithinHalfAngle = Parms.IsWithinHalfAngle;
}

void UGAB_Melee_Generic_EventGraph_C::Get_X_Y_Distance_Between_Vectors(const struct FVector& vector1, const struct FVector& vector2, double* X_Y_Distance) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Melee_Generic_EventGraph_C", "Get_X_Y_Distance_Between_Vectors");

	Params::GAB_Melee_Generic_EventGraph_C_Get_X_Y_Distance_Between_Vectors Parms{};

	Parms.vector1 = std::move(vector1);
	Parms.vector2 = std::move(vector2);

	UObject::ProcessEvent(Func, &Parms);

	if (X_Y_Distance != nullptr)
		*X_Y_Distance = Parms.X_Y_Distance;
}

void UGAB_Melee_Generic_EventGraph_C::GetLocationAtDistanceFromActorFacing(class AActor* Actor, double Distance, double Rotation_Pitch_, double Rotation_Yaw_, struct FVector* Location) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Melee_Generic_EventGraph_C", "GetLocationAtDistanceFromActorFacing");

	Params::GAB_Melee_Generic_EventGraph_C_GetLocationAtDistanceFromActorFacing Parms{};

	Parms.Actor = Actor;
	Parms.Distance = Distance;
	Parms.Rotation_Pitch_ = Rotation_Pitch_;
	Parms.Rotation_Yaw_ = Rotation_Yaw_;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);
}

}
