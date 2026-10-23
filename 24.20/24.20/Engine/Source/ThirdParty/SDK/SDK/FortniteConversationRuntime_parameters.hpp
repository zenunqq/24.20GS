#pragma once

#include "Basic.hpp"

#include "CommonConversationRuntime_structs.hpp"
#include "FortniteConversationRuntime_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct FortConversationContextCondition_DoesContextPass final
{
public:
	struct FConversationContext                   Context;
	bool                                          ReturnValue;
	uint8                                         Pad_39[0x7];
};
static_assert(alignof(FortConversationContextCondition_DoesContextPass) == 0x000008, "Wrong alignment on FortConversationContextCondition_DoesContextPass");
static_assert(sizeof(FortConversationContextCondition_DoesContextPass) == 0x000040, "Wrong size on FortConversationContextCondition_DoesContextPass");
static_assert(offsetof(FortConversationContextCondition_DoesContextPass, Context) == 0x000000, "Member 'FortConversationContextCondition_DoesContextPass::Context' has a wrong offset!");
static_assert(offsetof(FortConversationContextCondition_DoesContextPass, ReturnValue) == 0x000038, "Member 'FortConversationContextCondition_DoesContextPass::ReturnValue' has a wrong offset!");

struct FortConversationContextConditionHelpers_GetMessageForContext final
{
public:
	struct FFortConversationNodeConditionalMessages Messages;
	struct FConversationContext                   Context;
	class FText                                   OutText;
	bool                                          ReturnValue;
	uint8                                         Pad_61[0x7];
};
static_assert(alignof(FortConversationContextConditionHelpers_GetMessageForContext) == 0x000008, "Wrong alignment on FortConversationContextConditionHelpers_GetMessageForContext");
static_assert(sizeof(FortConversationContextConditionHelpers_GetMessageForContext) == 0x000068, "Wrong size on FortConversationContextConditionHelpers_GetMessageForContext");
static_assert(offsetof(FortConversationContextConditionHelpers_GetMessageForContext, Messages) == 0x000000, "Member 'FortConversationContextConditionHelpers_GetMessageForContext::Messages' has a wrong offset!");
static_assert(offsetof(FortConversationContextConditionHelpers_GetMessageForContext, Context) == 0x000010, "Member 'FortConversationContextConditionHelpers_GetMessageForContext::Context' has a wrong offset!");
static_assert(offsetof(FortConversationContextConditionHelpers_GetMessageForContext, OutText) == 0x000048, "Member 'FortConversationContextConditionHelpers_GetMessageForContext::OutText' has a wrong offset!");
static_assert(offsetof(FortConversationContextConditionHelpers_GetMessageForContext, ReturnValue) == 0x000060, "Member 'FortConversationContextConditionHelpers_GetMessageForContext::ReturnValue' has a wrong offset!");

struct FortConversationParamLibrary_ExtractConversationParameterValue final
{
public:
	TArray<struct FConversationNodeParameterPair> ConversationParameters;
	class FString                                 DesiredParameterName;
	class FString                                 ParameterValueOut;
	bool                                          ReturnValue;
	uint8                                         Pad_31[0x7];
};
static_assert(alignof(FortConversationParamLibrary_ExtractConversationParameterValue) == 0x000008, "Wrong alignment on FortConversationParamLibrary_ExtractConversationParameterValue");
static_assert(sizeof(FortConversationParamLibrary_ExtractConversationParameterValue) == 0x000038, "Wrong size on FortConversationParamLibrary_ExtractConversationParameterValue");
static_assert(offsetof(FortConversationParamLibrary_ExtractConversationParameterValue, ConversationParameters) == 0x000000, "Member 'FortConversationParamLibrary_ExtractConversationParameterValue::ConversationParameters' has a wrong offset!");
static_assert(offsetof(FortConversationParamLibrary_ExtractConversationParameterValue, DesiredParameterName) == 0x000010, "Member 'FortConversationParamLibrary_ExtractConversationParameterValue::DesiredParameterName' has a wrong offset!");
static_assert(offsetof(FortConversationParamLibrary_ExtractConversationParameterValue, ParameterValueOut) == 0x000020, "Member 'FortConversationParamLibrary_ExtractConversationParameterValue::ParameterValueOut' has a wrong offset!");
static_assert(offsetof(FortConversationParamLibrary_ExtractConversationParameterValue, ReturnValue) == 0x000030, "Member 'FortConversationParamLibrary_ExtractConversationParameterValue::ReturnValue' has a wrong offset!");

struct FortPlayerConversationComponent_ClientReceiveConversationGiftUINotification final
{
public:
	struct FGiftUINotificationInfo                ConversationGiftUINotification;
};
static_assert(alignof(FortPlayerConversationComponent_ClientReceiveConversationGiftUINotification) == 0x000008, "Wrong alignment on FortPlayerConversationComponent_ClientReceiveConversationGiftUINotification");
static_assert(sizeof(FortPlayerConversationComponent_ClientReceiveConversationGiftUINotification) == 0x000030, "Wrong size on FortPlayerConversationComponent_ClientReceiveConversationGiftUINotification");
static_assert(offsetof(FortPlayerConversationComponent_ClientReceiveConversationGiftUINotification, ConversationGiftUINotification) == 0x000000, "Member 'FortPlayerConversationComponent_ClientReceiveConversationGiftUINotification::ConversationGiftUINotification' has a wrong offset!");

struct FortPlayerConversationComponent_HandleDBNOChanged final
{
public:
	class AFortPawn*                              Pawn;
	bool                                          bIsDBNO;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(FortPlayerConversationComponent_HandleDBNOChanged) == 0x000008, "Wrong alignment on FortPlayerConversationComponent_HandleDBNOChanged");
static_assert(sizeof(FortPlayerConversationComponent_HandleDBNOChanged) == 0x000010, "Wrong size on FortPlayerConversationComponent_HandleDBNOChanged");
static_assert(offsetof(FortPlayerConversationComponent_HandleDBNOChanged, Pawn) == 0x000000, "Member 'FortPlayerConversationComponent_HandleDBNOChanged::Pawn' has a wrong offset!");
static_assert(offsetof(FortPlayerConversationComponent_HandleDBNOChanged, bIsDBNO) == 0x000008, "Member 'FortPlayerConversationComponent_HandleDBNOChanged::bIsDBNO' has a wrong offset!");

struct FortPlayerConversationComponent_HandleFollowedPlayerChanged final
{
public:
	class AFortPlayerControllerSpectating*        SpectatingPC;
	class AFortPlayerState*                       FollowedPlayerState;
};
static_assert(alignof(FortPlayerConversationComponent_HandleFollowedPlayerChanged) == 0x000008, "Wrong alignment on FortPlayerConversationComponent_HandleFollowedPlayerChanged");
static_assert(sizeof(FortPlayerConversationComponent_HandleFollowedPlayerChanged) == 0x000010, "Wrong size on FortPlayerConversationComponent_HandleFollowedPlayerChanged");
static_assert(offsetof(FortPlayerConversationComponent_HandleFollowedPlayerChanged, SpectatingPC) == 0x000000, "Member 'FortPlayerConversationComponent_HandleFollowedPlayerChanged::SpectatingPC' has a wrong offset!");
static_assert(offsetof(FortPlayerConversationComponent_HandleFollowedPlayerChanged, FollowedPlayerState) == 0x000008, "Member 'FortPlayerConversationComponent_HandleFollowedPlayerChanged::FollowedPlayerState' has a wrong offset!");

struct FortPlayerConversationComponent_HandleWaponEquipped final
{
public:
	class AFortWeapon*                            NewWeapon;
	class AFortWeapon*                            PrevWeapon;
};
static_assert(alignof(FortPlayerConversationComponent_HandleWaponEquipped) == 0x000008, "Wrong alignment on FortPlayerConversationComponent_HandleWaponEquipped");
static_assert(sizeof(FortPlayerConversationComponent_HandleWaponEquipped) == 0x000010, "Wrong size on FortPlayerConversationComponent_HandleWaponEquipped");
static_assert(offsetof(FortPlayerConversationComponent_HandleWaponEquipped, NewWeapon) == 0x000000, "Member 'FortPlayerConversationComponent_HandleWaponEquipped::NewWeapon' has a wrong offset!");
static_assert(offsetof(FortPlayerConversationComponent_HandleWaponEquipped, PrevWeapon) == 0x000008, "Member 'FortPlayerConversationComponent_HandleWaponEquipped::PrevWeapon' has a wrong offset!");

struct FortPlayerConversationComponent_RequestServerAbortConversationWithParticipant final
{
public:
	const class UFortNonPlayerConversationParticipantComponent* Participant;
};
static_assert(alignof(FortPlayerConversationComponent_RequestServerAbortConversationWithParticipant) == 0x000008, "Wrong alignment on FortPlayerConversationComponent_RequestServerAbortConversationWithParticipant");
static_assert(sizeof(FortPlayerConversationComponent_RequestServerAbortConversationWithParticipant) == 0x000008, "Wrong size on FortPlayerConversationComponent_RequestServerAbortConversationWithParticipant");
static_assert(offsetof(FortPlayerConversationComponent_RequestServerAbortConversationWithParticipant, Participant) == 0x000000, "Member 'FortPlayerConversationComponent_RequestServerAbortConversationWithParticipant::Participant' has a wrong offset!");

}
