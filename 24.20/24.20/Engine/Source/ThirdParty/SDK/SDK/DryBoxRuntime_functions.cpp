#pragma once

#include "Basic.hpp"

#include "DryBoxRuntime_classes.hpp"
#include "DryBoxRuntime_parameters.hpp"

namespace SDK
{

void UNyxGlassWeaponComponent_Swinging::EndSwingingSession()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassWeaponComponent_Swinging", "EndSwingingSession");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UNyxGlassWeaponComponent_Swinging::IsAttacking()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassWeaponComponent_Swinging", "IsAttacking");

	Params::NyxGlassWeaponComponent_Swinging_IsAttacking Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UNyxGlassWeaponComponent_Swinging::Multicast_SetTargetingDataOnRemoteClients(const struct FNyxGlassTargetingData& NewData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassWeaponComponent_Swinging", "Multicast_SetTargetingDataOnRemoteClients");

	Params::NyxGlassWeaponComponent_Swinging_Multicast_SetTargetingDataOnRemoteClients Parms{};

	Parms.NewData = std::move(NewData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNyxGlassWeaponComponent_Swinging::OnAttached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassWeaponComponent_Swinging", "OnAttached");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UNyxGlassWeaponComponent_Swinging::OnAttackStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassWeaponComponent_Swinging", "OnAttackStart");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UNyxGlassWeaponComponent_Swinging::OnBPWeaponFired()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassWeaponComponent_Swinging", "OnBPWeaponFired");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UNyxGlassWeaponComponent_Swinging::OnDetached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassWeaponComponent_Swinging", "OnDetached");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UNyxGlassWeaponComponent_Swinging::OnNyxGlassStateChanged(const ENyxGlassState OldState, const ENyxGlassState NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassWeaponComponent_Swinging", "OnNyxGlassStateChanged");

	Params::NyxGlassWeaponComponent_Swinging_OnNyxGlassStateChanged Parms{};

	Parms.OldState = OldState;
	Parms.NewState = NewState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNyxGlassWeaponComponent_Swinging::OnServerTargetingDataReceived()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassWeaponComponent_Swinging", "OnServerTargetingDataReceived");

	UObject::ProcessEvent(Func, nullptr);
}

void UNyxGlassWeaponComponent_Swinging::OnTargetingComplete(const struct FNyxGlassTargetingData& TargetingData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassWeaponComponent_Swinging", "OnTargetingComplete");

	Params::NyxGlassWeaponComponent_Swinging_OnTargetingComplete Parms{};

	Parms.TargetingData = std::move(TargetingData);

	UObject::ProcessEvent(Func, &Parms);
}

void UNyxGlassWeaponComponent_Swinging::OnWeaponFired()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassWeaponComponent_Swinging", "OnWeaponFired");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UNyxGlassWeaponComponent_Swinging::OnWeaponUnequip(class AFortWeapon* Weapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassWeaponComponent_Swinging", "OnWeaponUnequip");

	Params::NyxGlassWeaponComponent_Swinging_OnWeaponUnequip Parms{};

	Parms.Weapon = Weapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNyxGlassWeaponComponent_Swinging::Server_SetTargetingData(const struct FNyxGlassTargetingData& NewData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassWeaponComponent_Swinging", "Server_SetTargetingData");

	Params::NyxGlassWeaponComponent_Swinging_Server_SetTargetingData Parms{};

	Parms.NewData = std::move(NewData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UNyxGlassWeaponComponent_Swinging::ShouldUpdateTargeting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassWeaponComponent_Swinging", "ShouldUpdateTargeting");

	Params::NyxGlassWeaponComponent_Swinging_ShouldUpdateTargeting Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UNyxGlassWeaponComponent_Swinging::UpdateRopeVFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassWeaponComponent_Swinging", "UpdateRopeVFX");

	UObject::ProcessEvent(Func, nullptr);
}

float UNyxGlassWeaponComponent_Swinging::CalcInitialAccelerationAlpha() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassWeaponComponent_Swinging", "CalcInitialAccelerationAlpha");

	Params::NyxGlassWeaponComponent_Swinging_CalcInitialAccelerationAlpha Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ENyxGlassSlashSubstate UNyxGlassWeaponComponent_Swinging::GetNyxGlassSlashSubstate() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassWeaponComponent_Swinging", "GetNyxGlassSlashSubstate");

	Params::NyxGlassWeaponComponent_Swinging_GetNyxGlassSlashSubstate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

ENyxGlassState UNyxGlassWeaponComponent_Swinging::GetNyxGlassState() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassWeaponComponent_Swinging", "GetNyxGlassState");

	Params::NyxGlassWeaponComponent_Swinging_GetNyxGlassState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UNyxGlassWeaponComponent_Swinging::OnVelocityCalculated(const struct FNyxGlassVelocityMetadata& VelocityMetadata) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassWeaponComponent_Swinging", "OnVelocityCalculated");

	Params::NyxGlassWeaponComponent_Swinging_OnVelocityCalculated Parms{};

	Parms.VelocityMetadata = std::move(VelocityMetadata);

	UObject::ProcessEvent(Func, &Parms);
}

void UNyxGlassFuelAttributeSet::OnRep_Fuel(const struct FFortGameplayAttributeData& OldValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassFuelAttributeSet", "OnRep_Fuel");

	Params::NyxGlassFuelAttributeSet_OnRep_Fuel Parms{};

	Parms.OldValue = std::move(OldValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNyxGlassFuelAttributeSet::OnRep_LocalFuel(const struct FFortGameplayAttributeData& OldValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NyxGlassFuelAttributeSet", "OnRep_LocalFuel");

	Params::NyxGlassFuelAttributeSet_OnRep_LocalFuel Parms{};

	Parms.OldValue = std::move(OldValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
