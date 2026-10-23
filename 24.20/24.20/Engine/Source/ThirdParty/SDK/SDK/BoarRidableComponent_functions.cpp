#pragma once

#include "Basic.hpp"

#include "BoarRidableComponent_classes.hpp"
#include "BoarRidableComponent_parameters.hpp"

namespace SDK
{

void UBoarRidableComponent_C::ExecuteUbergraph_BoarRidableComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BoarRidableComponent_C", "ExecuteUbergraph_BoarRidableComponent");

	Params::BoarRidableComponent_C_ExecuteUbergraph_BoarRidableComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UBoarRidableComponent_C::HandleAbilityStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BoarRidableComponent_C", "HandleAbilityStarted");

	UObject::ProcessEvent(Func, nullptr);
}

void UBoarRidableComponent_C::HandleRiderStartedRiding(class URiderComponent* Rider)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BoarRidableComponent_C", "HandleRiderStartedRiding");

	Params::BoarRidableComponent_C_HandleRiderStartedRiding Parms{};

	Parms.Rider = Rider;

	UObject::ProcessEvent(Func, &Parms);
}

void UBoarRidableComponent_C::HandleRiderStoppedRiding(class URiderComponent* Rider)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BoarRidableComponent_C", "HandleRiderStoppedRiding");

	Params::BoarRidableComponent_C_HandleRiderStoppedRiding Parms{};

	Parms.Rider = Rider;

	UObject::ProcessEvent(Func, &Parms);
}

void UBoarRidableComponent_C::OnReaction(class UObject* Object, const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BoarRidableComponent_C", "OnReaction");

	Params::BoarRidableComponent_C_OnReaction Parms{};

	Parms.Object = Object;
	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);
}

void UBoarRidableComponent_C::OnReactionEvent(const class AActor* HitActor, const bool bFromAsyncSweepBox, EFCollisionReactionType CollisionReactionType, const bool bIsFirstContinuousReactionOnDelayableActor, const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BoarRidableComponent_C", "OnReactionEvent");

	Params::BoarRidableComponent_C_OnReactionEvent Parms{};

	Parms.HitActor = HitActor;
	Parms.bFromAsyncSweepBox = bFromAsyncSweepBox;
	Parms.CollisionReactionType = CollisionReactionType;
	Parms.bIsFirstContinuousReactionOnDelayableActor = bIsFirstContinuousReactionOnDelayableActor;
	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);
}

void UBoarRidableComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BoarRidableComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void UBoarRidableComponent_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BoarRidableComponent_C", "ReceiveEndPlay");

	Params::BoarRidableComponent_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}

}
