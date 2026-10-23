#pragma once

#include "Basic.hpp"

#include "FortniteConversationRuntime_classes.hpp"
#include "FortniteConversationRuntime_parameters.hpp"

namespace SDK
{

bool UFortConversationContextCondition::DoesContextPass(const struct FConversationContext& Context) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortConversationContextCondition", "DoesContextPass");

	Params::FortConversationContextCondition_DoesContextPass Parms{};

	Parms.Context = std::move(Context);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortConversationContextConditionHelpers::GetMessageForContext(const struct FFortConversationNodeConditionalMessages& Messages, const struct FConversationContext& Context, class FText* OutText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortConversationContextConditionHelpers", "GetMessageForContext");

	Params::FortConversationContextConditionHelpers_GetMessageForContext Parms{};

	Parms.Messages = std::move(Messages);
	Parms.Context = std::move(Context);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutText != nullptr)
		*OutText = std::move(Parms.OutText);

	return Parms.ReturnValue;
}

bool UFortConversationParamLibrary::ExtractConversationParameterValue(const TArray<struct FConversationNodeParameterPair>& ConversationParameters, const class FString& DesiredParameterName, class FString* ParameterValueOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortConversationParamLibrary", "ExtractConversationParameterValue");

	Params::FortConversationParamLibrary_ExtractConversationParameterValue Parms{};

	Parms.ConversationParameters = std::move(ConversationParameters);
	Parms.DesiredParameterName = std::move(DesiredParameterName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (ParameterValueOut != nullptr)
		*ParameterValueOut = std::move(Parms.ParameterValueOut);

	return Parms.ReturnValue;
}

void UFortPlayerConversationComponent::ClientReceiveConversationGiftUINotification(const struct FGiftUINotificationInfo& ConversationGiftUINotification)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerConversationComponent", "ClientReceiveConversationGiftUINotification");

	Params::FortPlayerConversationComponent_ClientReceiveConversationGiftUINotification Parms{};

	Parms.ConversationGiftUINotification = std::move(ConversationGiftUINotification);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerConversationComponent::ClientSpectatorCloseUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerConversationComponent", "ClientSpectatorCloseUI");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerConversationComponent::ClientSpectatorOpenUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerConversationComponent", "ClientSpectatorOpenUI");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerConversationComponent::HandleDBNOChanged(class AFortPawn* Pawn, bool bIsDBNO)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerConversationComponent", "HandleDBNOChanged");

	Params::FortPlayerConversationComponent_HandleDBNOChanged Parms{};

	Parms.Pawn = Pawn;
	Parms.bIsDBNO = bIsDBNO;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerConversationComponent::HandleFollowedPlayerChanged(class AFortPlayerControllerSpectating* SpectatingPC, class AFortPlayerState* FollowedPlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerConversationComponent", "HandleFollowedPlayerChanged");

	Params::FortPlayerConversationComponent_HandleFollowedPlayerChanged Parms{};

	Parms.SpectatingPC = SpectatingPC;
	Parms.FollowedPlayerState = FollowedPlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerConversationComponent::HandleViewTargetChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerConversationComponent", "HandleViewTargetChanged");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerConversationComponent::HandleWaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerConversationComponent", "HandleWaponEquipped");

	Params::FortPlayerConversationComponent_HandleWaponEquipped Parms{};

	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerConversationComponent::RequestServerAbortConversation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerConversationComponent", "RequestServerAbortConversation");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerConversationComponent::RequestServerAbortConversationWithParticipant(const class UFortNonPlayerConversationParticipantComponent* Participant)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerConversationComponent", "RequestServerAbortConversationWithParticipant");

	Params::FortPlayerConversationComponent_RequestServerAbortConversationWithParticipant Parms{};

	Parms.Participant = Participant;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
