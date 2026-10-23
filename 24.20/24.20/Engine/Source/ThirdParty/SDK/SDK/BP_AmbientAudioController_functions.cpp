#pragma once

#include "Basic.hpp"

#include "BP_AmbientAudioController_classes.hpp"
#include "BP_AmbientAudioController_parameters.hpp"

namespace SDK
{

void UBP_AmbientAudioController_C::ApplyPlayerTags(class AActor* Player, TArray<struct FGameplayTag>& Tag_Array)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AmbientAudioController_C", "ApplyPlayerTags");

	Params::BP_AmbientAudioController_C_ApplyPlayerTags Parms{};

	Parms.Player = Player;
	Parms.Tag_Array = std::move(Tag_Array);

	UObject::ProcessEvent(Func, &Parms);

	Tag_Array = std::move(Parms.Tag_Array);
}

void UBP_AmbientAudioController_C::CacheViewTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AmbientAudioController_C", "CacheViewTarget");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_AmbientAudioController_C::ExecuteUbergraph_BP_AmbientAudioController(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AmbientAudioController_C", "ExecuteUbergraph_BP_AmbientAudioController");

	Params::BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_AmbientAudioController_C::InitSnowCoverageComponent(class AGameStateBase* Game_State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AmbientAudioController_C", "InitSnowCoverageComponent");

	Params::BP_AmbientAudioController_C_InitSnowCoverageComponent Parms{};

	Parms.Game_State = Game_State;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_AmbientAudioController_C::On_Room_Size_Changed(const struct FGameplayTag& Curr, const struct FGameplayTag& Prev)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AmbientAudioController_C", "On Room Size Changed");

	Params::BP_AmbientAudioController_C_On_Room_Size_Changed Parms{};

	Parms.Curr = std::move(Curr);
	Parms.Prev = std::move(Prev);

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_AmbientAudioController_C::On_Room_State_Changed(EInteriorAudioState Curr, EInteriorAudioState Prev)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AmbientAudioController_C", "On Room State Changed");

	Params::BP_AmbientAudioController_C_On_Room_State_Changed Parms{};

	Parms.Curr = Curr;
	Parms.Prev = Prev;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_AmbientAudioController_C::OnReady_C8AC4F724844E04160BE56BEAB4A2614(class AGameStateBase* GameState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AmbientAudioController_C", "OnReady_C8AC4F724844E04160BE56BEAB4A2614");

	Params::BP_AmbientAudioController_C_OnReady_C8AC4F724844E04160BE56BEAB4A2614 Parms{};

	Parms.GameState = GameState;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_AmbientAudioController_C::OnViewTargetChanged(class AActor* New_Target, class AActor* Prev_Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AmbientAudioController_C", "OnViewTargetChanged");

	Params::BP_AmbientAudioController_C_OnViewTargetChanged Parms{};

	Parms.New_Target = New_Target;
	Parms.Prev_Target = Prev_Target;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_AmbientAudioController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AmbientAudioController_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_AmbientAudioController_C::RemovePlayerTags(class AActor* Player, TArray<struct FGameplayTag>& Array)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AmbientAudioController_C", "RemovePlayerTags");

	Params::BP_AmbientAudioController_C_RemovePlayerTags Parms{};

	Parms.Player = Player;
	Parms.Array = std::move(Array);

	UObject::ProcessEvent(Func, &Parms);

	Array = std::move(Parms.Array);
}

void UBP_AmbientAudioController_C::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AmbientAudioController_C", "Update");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_AmbientAudioController_C::Update_Interior_Audio_Verb()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AmbientAudioController_C", "Update Interior Audio Verb");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_AmbientAudioController_C::UpdateSnowSetupBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AmbientAudioController_C", "UpdateSnowSetupBP");

	UObject::ProcessEvent(Func, nullptr);
}

}
