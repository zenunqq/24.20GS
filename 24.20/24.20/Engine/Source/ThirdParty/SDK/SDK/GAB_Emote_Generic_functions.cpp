#pragma once

#include "Basic.hpp"

#include "GAB_Emote_Generic_classes.hpp"
#include "GAB_Emote_Generic_parameters.hpp"

namespace SDK
{

void UGAB_Emote_Generic_C::Cancelled_DE7019AA4E006879EDD264899869FEE2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "Cancelled_DE7019AA4E006879EDD264899869FEE2");

	Params::GAB_Emote_Generic_C_Cancelled_DE7019AA4E006879EDD264899869FEE2 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}

void UGAB_Emote_Generic_C::Completed_DE7019AA4E006879EDD264899869FEE2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "Completed_DE7019AA4E006879EDD264899869FEE2");

	Params::GAB_Emote_Generic_C_Completed_DE7019AA4E006879EDD264899869FEE2 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}

void UGAB_Emote_Generic_C::ExecuteUbergraph_GAB_Emote_Generic(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "ExecuteUbergraph_GAB_Emote_Generic");

	Params::GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGAB_Emote_Generic_C::ForceStopMontage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "ForceStopMontage");

	UObject::ProcessEvent(Func, nullptr);
}

void UGAB_Emote_Generic_C::GetBodyTypeAndGender(EFortCustomBodyType* BodyType, EFortCustomGender* Gender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "GetBodyTypeAndGender");

	Params::GAB_Emote_Generic_C_GetBodyTypeAndGender Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (BodyType != nullptr)
		*BodyType = Parms.BodyType;

	if (Gender != nullptr)
		*Gender = Parms.Gender;
}

TSoftObjectPtr<class UAnimMontage> UGAB_Emote_Generic_C::GetMontageToPlay(class UFortMontageItemDefinitionBase* EmoteAsset, EFortCustomBodyType BodyType, EFortCustomGender Gender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "GetMontageToPlay");

	Params::GAB_Emote_Generic_C_GetMontageToPlay Parms{};

	Parms.EmoteAsset = EmoteAsset;
	Parms.BodyType = BodyType;
	Parms.Gender = Gender;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UGAB_Emote_Generic_C::IsMontagePlaying(class UAnimMontage* Montage, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "IsMontagePlaying");

	Params::GAB_Emote_Generic_C_IsMontagePlaying Parms{};

	Parms.Montage = Montage;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}

void UGAB_Emote_Generic_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

void UGAB_Emote_Generic_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "K2_OnEndAbility");

	Params::GAB_Emote_Generic_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

void UGAB_Emote_Generic_C::NonMontageAsyncAssetsReady()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "NonMontageAsyncAssetsReady");

	UObject::ProcessEvent(Func, nullptr);
}

void UGAB_Emote_Generic_C::OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D");

	Params::GAB_Emote_Generic_C_OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

void UGAB_Emote_Generic_C::OnLoaded_DA96775D40CD998BF2FF0085FE5AB126(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "OnLoaded_DA96775D40CD998BF2FF0085FE5AB126");

	Params::GAB_Emote_Generic_C_OnLoaded_DA96775D40CD998BF2FF0085FE5AB126 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

void UGAB_Emote_Generic_C::OnMontageStartedPlaying()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "OnMontageStartedPlaying");

	UObject::ProcessEvent(Func, nullptr);
}

void UGAB_Emote_Generic_C::PlayInitialEmoteMontage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "PlayInitialEmoteMontage");

	UObject::ProcessEvent(Func, nullptr);
}

void UGAB_Emote_Generic_C::SetReticleVisibility(bool ShouldHide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "SetReticleVisibility");

	Params::GAB_Emote_Generic_C_SetReticleVisibility Parms{};

	Parms.ShouldHide = ShouldHide;

	UObject::ProcessEvent(Func, &Parms);
}

void UGAB_Emote_Generic_C::Triggered_DE7019AA4E006879EDD264899869FEE2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "Triggered_DE7019AA4E006879EDD264899869FEE2");

	Params::GAB_Emote_Generic_C_Triggered_DE7019AA4E006879EDD264899869FEE2 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}

bool UGAB_Emote_Generic_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "K2_CanActivateAbility");

	Params::GAB_Emote_Generic_C_K2_CanActivateAbility Parms{};

	Parms.ActorInfo = std::move(ActorInfo);
	Parms.Handle = std::move(Handle);

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = std::move(Parms.RelevantTags);

	return Parms.ReturnValue;
}

bool UGAB_Emote_Generic_C::ShouldPlayFailedMontage(const struct FGameplayTagContainer& FailedReason) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Emote_Generic_C", "ShouldPlayFailedMontage");

	Params::GAB_Emote_Generic_C_ShouldPlayFailedMontage Parms{};

	Parms.FailedReason = std::move(FailedReason);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
