#pragma once

#include "Basic.hpp"

#include "B_Prj_Commando_FragGrenade_classes.hpp"
#include "B_Prj_Commando_FragGrenade_parameters.hpp"

namespace SDK
{

void AB_Prj_Commando_FragGrenade_C::Bind_Destroy_Grenade()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Commando_FragGrenade_C", "Bind Destroy Grenade");

	UObject::ProcessEvent(Func, nullptr);
}

double AB_Prj_Commando_FragGrenade_C::CalcGrenadeSpeed(double Angle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Commando_FragGrenade_C", "CalcGrenadeSpeed");

	Params::B_Prj_Commando_FragGrenade_C_CalcGrenadeSpeed Parms{};

	Parms.Angle = Angle;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void AB_Prj_Commando_FragGrenade_C::CheckKeepOutAndCluster()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Commando_FragGrenade_C", "CheckKeepOutAndCluster");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Prj_Commando_FragGrenade_C::ExecuteUbergraph_B_Prj_Commando_FragGrenade(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Commando_FragGrenade_C", "ExecuteUbergraph_B_Prj_Commando_FragGrenade");

	Params::B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Prj_Commando_FragGrenade_C::Force_On_Exploded_Effects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Commando_FragGrenade_C", "Force On Exploded Effects");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Prj_Commando_FragGrenade_C::On_Destroy_Grenade(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Commando_FragGrenade_C", "On Destroy Grenade");

	Params::B_Prj_Commando_FragGrenade_C_On_Destroy_Grenade Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Prj_Commando_FragGrenade_C::OnBounce(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Commando_FragGrenade_C", "OnBounce");

	Params::B_Prj_Commando_FragGrenade_C_OnBounce Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Prj_Commando_FragGrenade_C::OnExploded(const TArray<class AActor*>& HitActors, const TArray<struct FHitResult>& HitResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Commando_FragGrenade_C", "OnExploded");

	Params::B_Prj_Commando_FragGrenade_C_OnExploded Parms{};

	Parms.HitActors = std::move(HitActors);
	Parms.HitResults = std::move(HitResults);

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Prj_Commando_FragGrenade_C::OnRep_StoredHit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Commando_FragGrenade_C", "OnRep_StoredHit");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Prj_Commando_FragGrenade_C::OnStop(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Commando_FragGrenade_C", "OnStop");

	Params::B_Prj_Commando_FragGrenade_C_OnStop Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Prj_Commando_FragGrenade_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Commando_FragGrenade_C", "ReceiveActorBeginOverlap");

	Params::B_Prj_Commando_FragGrenade_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Prj_Commando_FragGrenade_C::ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Commando_FragGrenade_C", "ReceiveAnyDamage");

	Params::B_Prj_Commando_FragGrenade_C_ReceiveAnyDamage Parms{};

	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Prj_Commando_FragGrenade_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Commando_FragGrenade_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Prj_Commando_FragGrenade_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Commando_FragGrenade_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Prj_Commando_FragGrenade_C::SendExplodedEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Commando_FragGrenade_C", "SendExplodedEvent");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Prj_Commando_FragGrenade_C::SpawnClusters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Commando_FragGrenade_C", "SpawnClusters");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Prj_Commando_FragGrenade_C::SpawnKeepOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Commando_FragGrenade_C", "SpawnKeepOut");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Prj_Commando_FragGrenade_C::Stop_Rotation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Commando_FragGrenade_C", "Stop_Rotation");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Prj_Commando_FragGrenade_C::TriggerDoExplsoion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Commando_FragGrenade_C", "TriggerDoExplsoion");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Prj_Commando_FragGrenade_C::Unbind_Destroy_Grenade()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Commando_FragGrenade_C", "Unbind Destroy Grenade");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Prj_Commando_FragGrenade_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Commando_FragGrenade_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
