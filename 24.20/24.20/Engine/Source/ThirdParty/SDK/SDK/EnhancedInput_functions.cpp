#pragma once

#include "Basic.hpp"

#include "EnhancedInput_classes.hpp"
#include "EnhancedInput_parameters.hpp"

namespace SDK
{

void UEnhancedPlayerMappableKeyProfile::ResetMappingToDefault(const class FName InMappingName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedPlayerMappableKeyProfile", "ResetMappingToDefault");

	Params::EnhancedPlayerMappableKeyProfile_ResetMappingToDefault Parms{};

	Parms.InMappingName = InMappingName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEnhancedPlayerMappableKeyProfile::ResetToDefault()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedPlayerMappableKeyProfile", "ResetToDefault");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UEnhancedPlayerMappableKeyProfile::SetDisplayName(const class FText& NewDisplayName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedPlayerMappableKeyProfile", "SetDisplayName");

	Params::EnhancedPlayerMappableKeyProfile_SetDisplayName Parms{};

	Parms.NewDisplayName = std::move(NewDisplayName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEnhancedPlayerMappableKeyProfile::DumpProfileToLog() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedPlayerMappableKeyProfile", "DumpProfileToLog");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

int32 UEnhancedPlayerMappableKeyProfile::GetMappedKeysInRow(const class FName MappingName, TArray<struct FKey>* OutKeys) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedPlayerMappableKeyProfile", "GetMappedKeysInRow");

	Params::EnhancedPlayerMappableKeyProfile_GetMappedKeysInRow Parms{};

	Parms.MappingName = MappingName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutKeys != nullptr)
		*OutKeys = std::move(Parms.OutKeys);

	return Parms.ReturnValue;
}

int32 UEnhancedPlayerMappableKeyProfile::GetMappingNamesForKey(const struct FKey& InKey, TArray<class FName>* OutMappingNames) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedPlayerMappableKeyProfile", "GetMappingNamesForKey");

	Params::EnhancedPlayerMappableKeyProfile_GetMappingNamesForKey Parms{};

	Parms.InKey = std::move(InKey);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutMappingNames != nullptr)
		*OutMappingNames = std::move(Parms.OutMappingNames);

	return Parms.ReturnValue;
}

const TMap<class FName, struct FKeyMappingRow> UEnhancedPlayerMappableKeyProfile::GetPlayerMappingRows() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedPlayerMappableKeyProfile", "GetPlayerMappingRows");

	Params::EnhancedPlayerMappableKeyProfile_GetPlayerMappingRows Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const class FText UEnhancedPlayerMappableKeyProfile::GetProfileDisplayName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedPlayerMappableKeyProfile", "GetProfileDisplayName");

	Params::EnhancedPlayerMappableKeyProfile_GetProfileDisplayName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const struct FGameplayTag UEnhancedPlayerMappableKeyProfile::GetProfileIdentifer() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedPlayerMappableKeyProfile", "GetProfileIdentifer");

	Params::EnhancedPlayerMappableKeyProfile_GetProfileIdentifer Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UEnhancedPlayerMappableKeyProfile::K2_FindKeyMapping(struct FPlayerKeyMapping* OutKeyMapping, const struct FMapPlayerKeyArgs& InArgs) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedPlayerMappableKeyProfile", "K2_FindKeyMapping");

	Params::EnhancedPlayerMappableKeyProfile_K2_FindKeyMapping Parms{};

	Parms.InArgs = std::move(InArgs);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutKeyMapping != nullptr)
		*OutKeyMapping = std::move(Parms.OutKeyMapping);
}

class FString UEnhancedPlayerMappableKeyProfile::ToString() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedPlayerMappableKeyProfile", "ToString");

	Params::EnhancedPlayerMappableKeyProfile_ToString Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UEnhancedInputUserSettings::ApplySettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputUserSettings", "ApplySettings");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UEnhancedInputUserSettings::AsyncSaveSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputUserSettings", "AsyncSaveSettings");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class UEnhancedPlayerMappableKeyProfile* UEnhancedInputUserSettings::CreateNewKeyProfile(const struct FPlayerMappableKeyProfileCreationArgs& InArgs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputUserSettings", "CreateNewKeyProfile");

	Params::EnhancedInputUserSettings_CreateNewKeyProfile Parms{};

	Parms.InArgs = std::move(InArgs);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UEnhancedInputUserSettings::MapPlayerKey(const struct FMapPlayerKeyArgs& InArgs, struct FGameplayTagContainer* FailureReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputUserSettings", "MapPlayerKey");

	Params::EnhancedInputUserSettings_MapPlayerKey Parms{};

	Parms.InArgs = std::move(InArgs);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (FailureReason != nullptr)
		*FailureReason = std::move(Parms.FailureReason);
}

bool UEnhancedInputUserSettings::RegisterInputMappingContext(class UInputMappingContext* IMC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputUserSettings", "RegisterInputMappingContext");

	Params::EnhancedInputUserSettings_RegisterInputMappingContext Parms{};

	Parms.IMC = IMC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UEnhancedInputUserSettings::RegisterInputMappingContexts(const TSet<class UInputMappingContext*>& MappingContexts)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputUserSettings", "RegisterInputMappingContexts");

	Params::EnhancedInputUserSettings_RegisterInputMappingContexts Parms{};

	Parms.MappingContexts = std::move(MappingContexts);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UEnhancedInputUserSettings::SaveSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputUserSettings", "SaveSettings");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UEnhancedInputUserSettings::SetKeyProfile(const struct FGameplayTag& InProfileId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputUserSettings", "SetKeyProfile");

	Params::EnhancedInputUserSettings_SetKeyProfile Parms{};

	Parms.InProfileId = std::move(InProfileId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UEnhancedInputUserSettings::UnMapPlayerKey(const struct FMapPlayerKeyArgs& InArgs, struct FGameplayTagContainer* FailureReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputUserSettings", "UnMapPlayerKey");

	Params::EnhancedInputUserSettings_UnMapPlayerKey Parms{};

	Parms.InArgs = std::move(InArgs);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (FailureReason != nullptr)
		*FailureReason = std::move(Parms.FailureReason);
}

bool UEnhancedInputUserSettings::UnregisterInputMappingContext(const class UInputMappingContext* IMC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputUserSettings", "UnregisterInputMappingContext");

	Params::EnhancedInputUserSettings_UnregisterInputMappingContext Parms{};

	Parms.IMC = IMC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UEnhancedInputUserSettings::UnregisterInputMappingContexts(const TSet<class UInputMappingContext*>& MappingContexts)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputUserSettings", "UnregisterInputMappingContexts");

	Params::EnhancedInputUserSettings_UnregisterInputMappingContexts Parms{};

	Parms.MappingContexts = std::move(MappingContexts);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const TSet<struct FPlayerKeyMapping> UEnhancedInputUserSettings::FindMappingsInRow(const class FName MappingName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputUserSettings", "FindMappingsInRow");

	Params::EnhancedInputUserSettings_FindMappingsInRow Parms{};

	Parms.MappingName = MappingName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UEnhancedPlayerMappableKeyProfile* UEnhancedInputUserSettings::GetCurrentKeyProfile() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputUserSettings", "GetCurrentKeyProfile");

	Params::EnhancedInputUserSettings_GetCurrentKeyProfile Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const struct FGameplayTag UEnhancedInputUserSettings::GetCurrentKeyProfileIdentifier() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputUserSettings", "GetCurrentKeyProfileIdentifier");

	Params::EnhancedInputUserSettings_GetCurrentKeyProfileIdentifier Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UEnhancedPlayerMappableKeyProfile* UEnhancedInputUserSettings::GetKeyProfileWithIdentifier(const struct FGameplayTag& ProfileId) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputUserSettings", "GetKeyProfileWithIdentifier");

	Params::EnhancedInputUserSettings_GetKeyProfileWithIdentifier Parms{};

	Parms.ProfileId = std::move(ProfileId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UEnhancedInputUserSettings::IsMappingContextRegistered(const class UInputMappingContext* IMC) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputUserSettings", "IsMappingContextRegistered");

	Params::EnhancedInputUserSettings_IsMappingContextRegistered Parms{};

	Parms.IMC = IMC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FInputActionValue UEnhancedInputComponent::GetBoundActionValue(const class UInputAction* Action) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputComponent", "GetBoundActionValue");

	Params::EnhancedInputComponent_GetBoundActionValue Parms{};

	Parms.Action = Action;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UEnhancedInputLibrary::BreakInputActionValue(const struct FInputActionValue& InActionValue, double* X, double* Y, double* Z, EInputActionValueType* Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EnhancedInputLibrary", "BreakInputActionValue");

	Params::EnhancedInputLibrary_BreakInputActionValue Parms{};

	Parms.InActionValue = std::move(InActionValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (X != nullptr)
		*X = Parms.X;

	if (Y != nullptr)
		*Y = Parms.Y;

	if (Z != nullptr)
		*Z = Parms.Z;

	if (Type != nullptr)
		*Type = Parms.Type;
}

double UEnhancedInputLibrary::Conv_InputActionValueToAxis1D(const struct FInputActionValue& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EnhancedInputLibrary", "Conv_InputActionValueToAxis1D");

	Params::EnhancedInputLibrary_Conv_InputActionValueToAxis1D Parms{};

	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector2D UEnhancedInputLibrary::Conv_InputActionValueToAxis2D(const struct FInputActionValue& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EnhancedInputLibrary", "Conv_InputActionValueToAxis2D");

	Params::EnhancedInputLibrary_Conv_InputActionValueToAxis2D Parms{};

	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector UEnhancedInputLibrary::Conv_InputActionValueToAxis3D(const struct FInputActionValue& ActionValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EnhancedInputLibrary", "Conv_InputActionValueToAxis3D");

	Params::EnhancedInputLibrary_Conv_InputActionValueToAxis3D Parms{};

	Parms.ActionValue = std::move(ActionValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UEnhancedInputLibrary::Conv_InputActionValueToBool(const struct FInputActionValue& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EnhancedInputLibrary", "Conv_InputActionValueToBool");

	Params::EnhancedInputLibrary_Conv_InputActionValueToBool Parms{};

	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UEnhancedInputLibrary::Conv_InputActionValueToString(const struct FInputActionValue& ActionValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EnhancedInputLibrary", "Conv_InputActionValueToString");

	Params::EnhancedInputLibrary_Conv_InputActionValueToString Parms{};

	Parms.ActionValue = std::move(ActionValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FInputActionValue UEnhancedInputLibrary::GetBoundActionValue(class AActor* Actor, const class UInputAction* Action)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EnhancedInputLibrary", "GetBoundActionValue");

	Params::EnhancedInputLibrary_GetBoundActionValue Parms{};

	Parms.Actor = Actor;
	Parms.Action = Action;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FPlayerMappableKeySlot UEnhancedInputLibrary::GetFirstPlayerMappableKeySlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EnhancedInputLibrary", "GetFirstPlayerMappableKeySlot");

	Params::EnhancedInputLibrary_GetFirstPlayerMappableKeySlot Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FPlayerMappableKeySlot UEnhancedInputLibrary::GetFourthPlayerMappableKeySlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EnhancedInputLibrary", "GetFourthPlayerMappableKeySlot");

	Params::EnhancedInputLibrary_GetFourthPlayerMappableKeySlot Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FName UEnhancedInputLibrary::GetMappingName(const struct FEnhancedActionKeyMapping& ActionKeyMapping)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EnhancedInputLibrary", "GetMappingName");

	Params::EnhancedInputLibrary_GetMappingName Parms{};

	Parms.ActionKeyMapping = std::move(ActionKeyMapping);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UPlayerMappableKeySettings* UEnhancedInputLibrary::GetPlayerMappableKeySettings(const struct FEnhancedActionKeyMapping& ActionKeyMapping)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EnhancedInputLibrary", "GetPlayerMappableKeySettings");

	Params::EnhancedInputLibrary_GetPlayerMappableKeySettings Parms{};

	Parms.ActionKeyMapping = std::move(ActionKeyMapping);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FPlayerMappableKeySlot UEnhancedInputLibrary::GetSecondPlayerMappableKeySlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EnhancedInputLibrary", "GetSecondPlayerMappableKeySlot");

	Params::EnhancedInputLibrary_GetSecondPlayerMappableKeySlot Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FPlayerMappableKeySlot UEnhancedInputLibrary::GetThirdPlayerMappableKeySlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EnhancedInputLibrary", "GetThirdPlayerMappableKeySlot");

	Params::EnhancedInputLibrary_GetThirdPlayerMappableKeySlot Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UEnhancedInputLibrary::IsActionKeyMappingPlayerMappable(const struct FEnhancedActionKeyMapping& ActionKeyMapping)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EnhancedInputLibrary", "IsActionKeyMappingPlayerMappable");

	Params::EnhancedInputLibrary_IsActionKeyMappingPlayerMappable Parms{};

	Parms.ActionKeyMapping = std::move(ActionKeyMapping);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FInputActionValue UEnhancedInputLibrary::MakeInputActionValue(double X, double Y, double Z, const struct FInputActionValue& MatchValueType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EnhancedInputLibrary", "MakeInputActionValue");

	Params::EnhancedInputLibrary_MakeInputActionValue Parms{};

	Parms.X = X;
	Parms.Y = Y;
	Parms.Z = Z;
	Parms.MatchValueType = std::move(MatchValueType);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FInputActionValue UEnhancedInputLibrary::MakeInputActionValueOfType(double X, double Y, double Z, const EInputActionValueType ValueType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EnhancedInputLibrary", "MakeInputActionValueOfType");

	Params::EnhancedInputLibrary_MakeInputActionValueOfType Parms{};

	Parms.X = X;
	Parms.Y = Y;
	Parms.Z = Z;
	Parms.ValueType = ValueType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UEnhancedInputLibrary::RequestRebuildControlMappingsUsingContext(const class UInputMappingContext* Context, bool bForceImmediately)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EnhancedInputLibrary", "RequestRebuildControlMappingsUsingContext");

	Params::EnhancedInputLibrary_RequestRebuildControlMappingsUsingContext Parms{};

	Parms.Context = Context;
	Parms.bForceImmediately = bForceImmediately;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

const class UInputMappingContext* UEnhancedInputPlatformData::GetContextRedirect(class UInputMappingContext* InContext) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputPlatformData", "GetContextRedirect");

	Params::EnhancedInputPlatformData_GetContextRedirect Parms{};

	Parms.InContext = InContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void IEnhancedInputSubsystemInterface::AddMappingContext(const class UInputMappingContext* MappingContext, int32 Priority, const struct FModifyContextOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "AddMappingContext");

	Params::EnhancedInputSubsystemInterface_AddMappingContext Parms{};

	Parms.MappingContext = MappingContext;
	Parms.Priority = Priority;
	Parms.Options = std::move(Options);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void IEnhancedInputSubsystemInterface::AddPlayerMappableConfig(const class UPlayerMappableInputConfig* Config, const struct FModifyContextOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "AddPlayerMappableConfig");

	Params::EnhancedInputSubsystemInterface_AddPlayerMappableConfig Parms{};

	Parms.Config = Config;
	Parms.Options = std::move(Options);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void IEnhancedInputSubsystemInterface::ClearAllMappings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "ClearAllMappings");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void IEnhancedInputSubsystemInterface::InjectInputForAction(const class UInputAction* Action, const struct FInputActionValue& RawValue, const TArray<class UInputModifier*>& Modifiers, const TArray<class UInputTrigger*>& Triggers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "InjectInputForAction");

	Params::EnhancedInputSubsystemInterface_InjectInputForAction Parms{};

	Parms.Action = Action;
	Parms.RawValue = std::move(RawValue);
	Parms.Modifiers = std::move(Modifiers);
	Parms.Triggers = std::move(Triggers);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void IEnhancedInputSubsystemInterface::InjectInputForPlayerMapping(const class FName MappingName, const struct FInputActionValue& RawValue, const TArray<class UInputModifier*>& Modifiers, const TArray<class UInputTrigger*>& Triggers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "InjectInputForPlayerMapping");

	Params::EnhancedInputSubsystemInterface_InjectInputForPlayerMapping Parms{};

	Parms.MappingName = MappingName;
	Parms.RawValue = std::move(RawValue);
	Parms.Modifiers = std::move(Modifiers);
	Parms.Triggers = std::move(Triggers);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void IEnhancedInputSubsystemInterface::InjectInputVectorForAction(const class UInputAction* Action, const struct FVector& Value, const TArray<class UInputModifier*>& Modifiers, const TArray<class UInputTrigger*>& Triggers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "InjectInputVectorForAction");

	Params::EnhancedInputSubsystemInterface_InjectInputVectorForAction Parms{};

	Parms.Action = Action;
	Parms.Value = std::move(Value);
	Parms.Modifiers = std::move(Modifiers);
	Parms.Triggers = std::move(Triggers);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void IEnhancedInputSubsystemInterface::InjectInputVectorForPlayerMapping(const class FName MappingName, const struct FVector& Value, const TArray<class UInputModifier*>& Modifiers, const TArray<class UInputTrigger*>& Triggers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "InjectInputVectorForPlayerMapping");

	Params::EnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping Parms{};

	Parms.MappingName = MappingName;
	Parms.Value = std::move(Value);
	Parms.Modifiers = std::move(Modifiers);
	Parms.Triggers = std::move(Triggers);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int32 IEnhancedInputSubsystemInterface::K2_AddPlayerMappedKeyInSlot(const class FName MappingName, const struct FKey& NewKey, const struct FPlayerMappableKeySlot& KeySlot, const struct FModifyContextOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "K2_AddPlayerMappedKeyInSlot");

	Params::EnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot Parms{};

	Parms.MappingName = MappingName;
	Parms.NewKey = std::move(NewKey);
	Parms.KeySlot = std::move(KeySlot);
	Parms.Options = std::move(Options);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 IEnhancedInputSubsystemInterface::K2_RemovePlayerMappedKeyInSlot(const class FName MappingName, const struct FPlayerMappableKeySlot& KeySlot, const struct FModifyContextOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "K2_RemovePlayerMappedKeyInSlot");

	Params::EnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot Parms{};

	Parms.MappingName = MappingName;
	Parms.KeySlot = std::move(KeySlot);
	Parms.Options = std::move(Options);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void IEnhancedInputSubsystemInterface::OnUserKeyProfileChanged(const class UEnhancedPlayerMappableKeyProfile* InNewProfile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "OnUserKeyProfileChanged");

	Params::EnhancedInputSubsystemInterface_OnUserKeyProfileChanged Parms{};

	Parms.InNewProfile = InNewProfile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void IEnhancedInputSubsystemInterface::OnUserSettingsChanged(class UEnhancedInputUserSettings* Settings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "OnUserSettingsChanged");

	Params::EnhancedInputSubsystemInterface_OnUserSettingsChanged Parms{};

	Parms.Settings = Settings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

EMappingQueryResult IEnhancedInputSubsystemInterface::QueryMapKeyInActiveContextSet(const class UInputMappingContext* InputContext, const class UInputAction* Action, const struct FKey& Key, TArray<struct FMappingQueryIssue>* OutIssues, EMappingQueryIssue BlockingIssues)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "QueryMapKeyInActiveContextSet");

	Params::EnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet Parms{};

	Parms.InputContext = InputContext;
	Parms.Action = Action;
	Parms.Key = std::move(Key);
	Parms.BlockingIssues = BlockingIssues;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutIssues != nullptr)
		*OutIssues = std::move(Parms.OutIssues);

	return Parms.ReturnValue;
}

EMappingQueryResult IEnhancedInputSubsystemInterface::QueryMapKeyInContextSet(const TArray<class UInputMappingContext*>& PrioritizedActiveContexts, const class UInputMappingContext* InputContext, const class UInputAction* Action, const struct FKey& Key, TArray<struct FMappingQueryIssue>* OutIssues, EMappingQueryIssue BlockingIssues)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "QueryMapKeyInContextSet");

	Params::EnhancedInputSubsystemInterface_QueryMapKeyInContextSet Parms{};

	Parms.PrioritizedActiveContexts = std::move(PrioritizedActiveContexts);
	Parms.InputContext = InputContext;
	Parms.Action = Action;
	Parms.Key = std::move(Key);
	Parms.BlockingIssues = BlockingIssues;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutIssues != nullptr)
		*OutIssues = std::move(Parms.OutIssues);

	return Parms.ReturnValue;
}

void IEnhancedInputSubsystemInterface::RemoveAllPlayerMappedKeys(const struct FModifyContextOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "RemoveAllPlayerMappedKeys");

	Params::EnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys Parms{};

	Parms.Options = std::move(Options);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int32 IEnhancedInputSubsystemInterface::RemoveAllPlayerMappedKeysForMapping(const class FName MappingName, const struct FModifyContextOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "RemoveAllPlayerMappedKeysForMapping");

	Params::EnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping Parms{};

	Parms.MappingName = MappingName;
	Parms.Options = std::move(Options);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void IEnhancedInputSubsystemInterface::RemoveMappingContext(const class UInputMappingContext* MappingContext, const struct FModifyContextOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "RemoveMappingContext");

	Params::EnhancedInputSubsystemInterface_RemoveMappingContext Parms{};

	Parms.MappingContext = MappingContext;
	Parms.Options = std::move(Options);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void IEnhancedInputSubsystemInterface::RemovePlayerMappableConfig(const class UPlayerMappableInputConfig* Config, const struct FModifyContextOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "RemovePlayerMappableConfig");

	Params::EnhancedInputSubsystemInterface_RemovePlayerMappableConfig Parms{};

	Parms.Config = Config;
	Parms.Options = std::move(Options);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void IEnhancedInputSubsystemInterface::RequestRebuildControlMappings(const struct FModifyContextOptions& Options, EInputMappingRebuildType RebuildType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "RequestRebuildControlMappings");

	Params::EnhancedInputSubsystemInterface_RequestRebuildControlMappings Parms{};

	Parms.Options = std::move(Options);
	Parms.RebuildType = RebuildType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

TArray<struct FEnhancedActionKeyMapping> IEnhancedInputSubsystemInterface::GetAllPlayerMappableActionKeyMappings() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "GetAllPlayerMappableActionKeyMappings");

	Params::EnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FKey> IEnhancedInputSubsystemInterface::GetAllPlayerMappedKeys(const class FName MappingName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "GetAllPlayerMappedKeys");

	Params::EnhancedInputSubsystemInterface_GetAllPlayerMappedKeys Parms{};

	Parms.MappingName = MappingName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UEnhancedInputUserSettings* IEnhancedInputSubsystemInterface::GetUserSettings() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "GetUserSettings");

	Params::EnhancedInputSubsystemInterface_GetUserSettings Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool IEnhancedInputSubsystemInterface::HasMappingContext(const class UInputMappingContext* MappingContext, int32* OutFoundPriority) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "HasMappingContext");

	Params::EnhancedInputSubsystemInterface_HasMappingContext Parms{};

	Parms.MappingContext = MappingContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutFoundPriority != nullptr)
		*OutFoundPriority = Parms.OutFoundPriority;

	return Parms.ReturnValue;
}

struct FKey IEnhancedInputSubsystemInterface::K2_GetPlayerMappedKeyInSlot(const class FName MappingName, const struct FPlayerMappableKeySlot& KeySlot) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "K2_GetPlayerMappedKeyInSlot");

	Params::EnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot Parms{};

	Parms.MappingName = MappingName;
	Parms.KeySlot = std::move(KeySlot);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FKey> IEnhancedInputSubsystemInterface::QueryKeysMappedToAction(const class UInputAction* Action) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "QueryKeysMappedToAction");

	Params::EnhancedInputSubsystemInterface_QueryKeysMappedToAction Parms{};

	Parms.Action = Action;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UEnhancedInputWorldSubsystem::AddActorInputComponent(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputWorldSubsystem", "AddActorInputComponent");

	Params::EnhancedInputWorldSubsystem_AddActorInputComponent Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UEnhancedInputWorldSubsystem::RemoveActorInputComponent(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnhancedInputWorldSubsystem", "RemoveActorInputComponent");

	Params::EnhancedInputWorldSubsystem_RemoveActorInputComponent Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FEnhancedActionKeyMapping UInputMappingContext::MapKey(const class UInputAction* Action, const struct FKey& ToKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputMappingContext", "MapKey");

	Params::InputMappingContext_MapKey Parms{};

	Parms.Action = Action;
	Parms.ToKey = std::move(ToKey);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UInputMappingContext::UnmapAction(const class UInputAction* Action)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputMappingContext", "UnmapAction");

	Params::InputMappingContext_UnmapAction Parms{};

	Parms.Action = Action;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UInputMappingContext::UnmapAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputMappingContext", "UnmapAll");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UInputMappingContext::UnmapAllKeysFromAction(const class UInputAction* Action)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputMappingContext", "UnmapAllKeysFromAction");

	Params::InputMappingContext_UnmapAllKeysFromAction Parms{};

	Parms.Action = Action;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UInputMappingContext::UnmapKey(const class UInputAction* Action, const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputMappingContext", "UnmapKey");

	Params::InputMappingContext_UnmapKey Parms{};

	Parms.Action = Action;
	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FLinearColor UInputModifier::GetVisualizationColor(const struct FInputActionValue& SampleValue, const struct FInputActionValue& FinalValue) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputModifier", "GetVisualizationColor");

	Params::InputModifier_GetVisualizationColor Parms{};

	Parms.SampleValue = std::move(SampleValue);
	Parms.FinalValue = std::move(FinalValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FInputActionValue UInputModifier::ModifyRaw(const class UEnhancedPlayerInput* PlayerInput, const struct FInputActionValue& CurrentValue, float DeltaTime) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputModifier", "ModifyRaw");

	Params::InputModifier_ModifyRaw Parms{};

	Parms.PlayerInput = PlayerInput;
	Parms.CurrentValue = std::move(CurrentValue);
	Parms.DeltaTime = DeltaTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ETriggerState UInputTrigger::UpdateState(const class UEnhancedPlayerInput* PlayerInput, const struct FInputActionValue& ModifiedValue, float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputTrigger", "UpdateState");

	Params::InputTrigger_UpdateState Parms{};

	Parms.PlayerInput = PlayerInput;
	Parms.ModifiedValue = std::move(ModifiedValue);
	Parms.DeltaTime = DeltaTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ETriggerType UInputTrigger::GetTriggerType() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputTrigger", "GetTriggerType");

	Params::InputTrigger_GetTriggerType Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UInputTrigger::IsActuated(const struct FInputActionValue& ForValue) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputTrigger", "IsActuated");

	Params::InputTrigger_IsActuated Parms{};

	Parms.ForValue = std::move(ForValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UPlayerMappableInputConfig::ResetToDefault()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerMappableInputConfig", "ResetToDefault");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

const class FName UPlayerMappableInputConfig::GetConfigName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerMappableInputConfig", "GetConfigName");

	Params::PlayerMappableInputConfig_GetConfigName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const class FText UPlayerMappableInputConfig::GetDisplayName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerMappableInputConfig", "GetDisplayName");

	Params::PlayerMappableInputConfig_GetDisplayName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FEnhancedActionKeyMapping> UPlayerMappableInputConfig::GetKeysBoundToAction(const class UInputAction* InAction) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerMappableInputConfig", "GetKeysBoundToAction");

	Params::PlayerMappableInputConfig_GetKeysBoundToAction Parms{};

	Parms.InAction = InAction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FEnhancedActionKeyMapping UPlayerMappableInputConfig::GetMappingByName(const class FName MappingName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerMappableInputConfig", "GetMappingByName");

	Params::PlayerMappableInputConfig_GetMappingByName Parms{};

	Parms.MappingName = MappingName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const TMap<class UInputMappingContext*, int32> UPlayerMappableInputConfig::GetMappingContexts() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerMappableInputConfig", "GetMappingContexts");

	Params::PlayerMappableInputConfig_GetMappingContexts Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UObject* UPlayerMappableInputConfig::GetMetadata() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerMappableInputConfig", "GetMetadata");

	Params::PlayerMappableInputConfig_GetMetadata Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FEnhancedActionKeyMapping> UPlayerMappableInputConfig::GetPlayerMappableKeys() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerMappableInputConfig", "GetPlayerMappableKeys");

	Params::PlayerMappableInputConfig_GetPlayerMappableKeys Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const bool UPlayerMappableInputConfig::IsDeprecated() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerMappableInputConfig", "IsDeprecated");

	Params::PlayerMappableInputConfig_IsDeprecated Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
