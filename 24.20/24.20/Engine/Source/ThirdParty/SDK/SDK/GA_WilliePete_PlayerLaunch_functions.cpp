#pragma once

#include "Basic.hpp"

#include "GA_WilliePete_PlayerLaunch_classes.hpp"
#include "GA_WilliePete_PlayerLaunch_parameters.hpp"

namespace SDK
{

void UGA_WilliePete_PlayerLaunch_C::ActorHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_WilliePete_PlayerLaunch_C", "ActorHit");

	Params::GA_WilliePete_PlayerLaunch_C_ActorHit Parms{};

	Parms.SelfActor = SelfActor;
	Parms.OtherActor = OtherActor;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_WilliePete_PlayerLaunch_C::BreakBlockingStructure(class AActor* HitActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_WilliePete_PlayerLaunch_C", "BreakBlockingStructure");

	Params::GA_WilliePete_PlayerLaunch_C_BreakBlockingStructure Parms{};

	Parms.HitActor = HitActor;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_WilliePete_PlayerLaunch_C::End_Skydive(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_WilliePete_PlayerLaunch_C", "End Skydive");

	Params::GA_WilliePete_PlayerLaunch_C_End_Skydive Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_WilliePete_PlayerLaunch_C::ExecuteUbergraph_GA_WilliePete_PlayerLaunch(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_WilliePete_PlayerLaunch_C", "ExecuteUbergraph_GA_WilliePete_PlayerLaunch");

	Params::GA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_WilliePete_PlayerLaunch_C::FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_WilliePete_PlayerLaunch_C", "FailedToActivatePassiveAbility");

	Params::GA_WilliePete_PlayerLaunch_C_FailedToActivatePassiveAbility Parms{};

	Parms.ActorInfo = std::move(ActorInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_WilliePete_PlayerLaunch_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_WilliePete_PlayerLaunch_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_WilliePete_PlayerLaunch_C::OnBlendOut_A0F03A1445141EA659E282AFE77CEA62(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_WilliePete_PlayerLaunch_C", "OnBlendOut_A0F03A1445141EA659E282AFE77CEA62");

	Params::GA_WilliePete_PlayerLaunch_C_OnBlendOut_A0F03A1445141EA659E282AFE77CEA62 Parms{};

	Parms.NotifyTag = std::move(NotifyTag);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_WilliePete_PlayerLaunch_C::OnCancelled_A0F03A1445141EA659E282AFE77CEA62(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_WilliePete_PlayerLaunch_C", "OnCancelled_A0F03A1445141EA659E282AFE77CEA62");

	Params::GA_WilliePete_PlayerLaunch_C_OnCancelled_A0F03A1445141EA659E282AFE77CEA62 Parms{};

	Parms.NotifyTag = std::move(NotifyTag);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_WilliePete_PlayerLaunch_C::OnCompleted_A0F03A1445141EA659E282AFE77CEA62(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_WilliePete_PlayerLaunch_C", "OnCompleted_A0F03A1445141EA659E282AFE77CEA62");

	Params::GA_WilliePete_PlayerLaunch_C_OnCompleted_A0F03A1445141EA659E282AFE77CEA62 Parms{};

	Parms.NotifyTag = std::move(NotifyTag);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_WilliePete_PlayerLaunch_C::OnInterrupted_A0F03A1445141EA659E282AFE77CEA62(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_WilliePete_PlayerLaunch_C", "OnInterrupted_A0F03A1445141EA659E282AFE77CEA62");

	Params::GA_WilliePete_PlayerLaunch_C_OnInterrupted_A0F03A1445141EA659E282AFE77CEA62 Parms{};

	Parms.NotifyTag = std::move(NotifyTag);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_WilliePete_PlayerLaunch_C::OnNotifyBegin_A0F03A1445141EA659E282AFE77CEA62(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_WilliePete_PlayerLaunch_C", "OnNotifyBegin_A0F03A1445141EA659E282AFE77CEA62");

	Params::GA_WilliePete_PlayerLaunch_C_OnNotifyBegin_A0F03A1445141EA659E282AFE77CEA62 Parms{};

	Parms.NotifyTag = std::move(NotifyTag);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_WilliePete_PlayerLaunch_C::OnNotifyEnd_A0F03A1445141EA659E282AFE77CEA62(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_WilliePete_PlayerLaunch_C", "OnNotifyEnd_A0F03A1445141EA659E282AFE77CEA62");

	Params::GA_WilliePete_PlayerLaunch_C_OnNotifyEnd_A0F03A1445141EA659E282AFE77CEA62 Parms{};

	Parms.NotifyTag = std::move(NotifyTag);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_WilliePete_PlayerLaunch_C::Redeploy_Glider()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_WilliePete_PlayerLaunch_C", "Redeploy Glider");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_WilliePete_PlayerLaunch_C::StructureTraceLoop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_WilliePete_PlayerLaunch_C", "StructureTraceLoop");

	UObject::ProcessEvent(Func, nullptr);
}

}
