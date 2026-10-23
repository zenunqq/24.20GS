#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "CommonConversationRuntime_classes.hpp"

namespace SDK
{

class IFortConversationMarkerInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortConversationMarkerInterface">();
	}
	static class IFortConversationMarkerInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IFortConversationMarkerInterface>();
	}
};
static_assert(alignof(IFortConversationMarkerInterface) == 0x000008, "Wrong alignment on IFortConversationMarkerInterface");
static_assert(sizeof(IFortConversationMarkerInterface) == 0x000028, "Wrong size on IFortConversationMarkerInterface");

class UFortConversationParticipantComponent : public UConversationParticipantComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortConversationParticipantComponent">();
	}
	static class UFortConversationParticipantComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortConversationParticipantComponent>();
	}
};
static_assert(alignof(UFortConversationParticipantComponent) == 0x000008, "Wrong alignment on UFortConversationParticipantComponent");
static_assert(sizeof(UFortConversationParticipantComponent) == 0x0001A0, "Wrong size on UFortConversationParticipantComponent");

class UFortConversationContextCondition : public UObject
{
public:
	bool DoesContextPass(const struct FConversationContext& Context) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortConversationContextCondition">();
	}
	static class UFortConversationContextCondition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortConversationContextCondition>();
	}
};
static_assert(alignof(UFortConversationContextCondition) == 0x000008, "Wrong alignment on UFortConversationContextCondition");
static_assert(sizeof(UFortConversationContextCondition) == 0x000028, "Wrong size on UFortConversationContextCondition");

class UFortConversationContextCondition_ParticipantHasCID final : public UFortConversationContextCondition
{
public:
	struct FGameplayTag                           ParticipantID;
	uint8                                         Pad_2C[0x4];
	TArray<struct FSoftObjectPath>                AllowedCIDs;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortConversationContextCondition_ParticipantHasCID">();
	}
	static class UFortConversationContextCondition_ParticipantHasCID* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortConversationContextCondition_ParticipantHasCID>();
	}
};
static_assert(alignof(UFortConversationContextCondition_ParticipantHasCID) == 0x000008, "Wrong alignment on UFortConversationContextCondition_ParticipantHasCID");
static_assert(sizeof(UFortConversationContextCondition_ParticipantHasCID) == 0x000040, "Wrong size on UFortConversationContextCondition_ParticipantHasCID");
static_assert(offsetof(UFortConversationContextCondition_ParticipantHasCID, ParticipantID) == 0x000028, "Member 'UFortConversationContextCondition_ParticipantHasCID::ParticipantID' has a wrong offset!");
static_assert(offsetof(UFortConversationContextCondition_ParticipantHasCID, AllowedCIDs) == 0x000030, "Member 'UFortConversationContextCondition_ParticipantHasCID::AllowedCIDs' has a wrong offset!");

class UFortConversationContextCondition_ParticipantHasMetaTag final : public UFortConversationContextCondition
{
public:
	struct FGameplayTag                           ParticipantID;
	struct FGameplayTag                           MetaTag;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortConversationContextCondition_ParticipantHasMetaTag">();
	}
	static class UFortConversationContextCondition_ParticipantHasMetaTag* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortConversationContextCondition_ParticipantHasMetaTag>();
	}
};
static_assert(alignof(UFortConversationContextCondition_ParticipantHasMetaTag) == 0x000008, "Wrong alignment on UFortConversationContextCondition_ParticipantHasMetaTag");
static_assert(sizeof(UFortConversationContextCondition_ParticipantHasMetaTag) == 0x000030, "Wrong size on UFortConversationContextCondition_ParticipantHasMetaTag");
static_assert(offsetof(UFortConversationContextCondition_ParticipantHasMetaTag, ParticipantID) == 0x000028, "Member 'UFortConversationContextCondition_ParticipantHasMetaTag::ParticipantID' has a wrong offset!");
static_assert(offsetof(UFortConversationContextCondition_ParticipantHasMetaTag, MetaTag) == 0x00002C, "Member 'UFortConversationContextCondition_ParticipantHasMetaTag::MetaTag' has a wrong offset!");

class UFortConversationContextCondition_ParticipantHasOwnedTag final : public UFortConversationContextCondition
{
public:
	struct FGameplayTag                           ParticipantID;
	struct FGameplayTag                           OwnedTag;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortConversationContextCondition_ParticipantHasOwnedTag">();
	}
	static class UFortConversationContextCondition_ParticipantHasOwnedTag* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortConversationContextCondition_ParticipantHasOwnedTag>();
	}
};
static_assert(alignof(UFortConversationContextCondition_ParticipantHasOwnedTag) == 0x000008, "Wrong alignment on UFortConversationContextCondition_ParticipantHasOwnedTag");
static_assert(sizeof(UFortConversationContextCondition_ParticipantHasOwnedTag) == 0x000030, "Wrong size on UFortConversationContextCondition_ParticipantHasOwnedTag");
static_assert(offsetof(UFortConversationContextCondition_ParticipantHasOwnedTag, ParticipantID) == 0x000028, "Member 'UFortConversationContextCondition_ParticipantHasOwnedTag::ParticipantID' has a wrong offset!");
static_assert(offsetof(UFortConversationContextCondition_ParticipantHasOwnedTag, OwnedTag) == 0x00002C, "Member 'UFortConversationContextCondition_ParticipantHasOwnedTag::OwnedTag' has a wrong offset!");

class UFortConversationContextCondition_ParticipantControllerMeetsRequirement final : public UFortConversationContextCondition
{
public:
	struct FGameplayTag                           ParticipantID;
	uint8                                         Pad_2C[0x4];
	class UFortControllerRequirement*             Requirement;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortConversationContextCondition_ParticipantControllerMeetsRequirement">();
	}
	static class UFortConversationContextCondition_ParticipantControllerMeetsRequirement* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortConversationContextCondition_ParticipantControllerMeetsRequirement>();
	}
};
static_assert(alignof(UFortConversationContextCondition_ParticipantControllerMeetsRequirement) == 0x000008, "Wrong alignment on UFortConversationContextCondition_ParticipantControllerMeetsRequirement");
static_assert(sizeof(UFortConversationContextCondition_ParticipantControllerMeetsRequirement) == 0x000038, "Wrong size on UFortConversationContextCondition_ParticipantControllerMeetsRequirement");
static_assert(offsetof(UFortConversationContextCondition_ParticipantControllerMeetsRequirement, ParticipantID) == 0x000028, "Member 'UFortConversationContextCondition_ParticipantControllerMeetsRequirement::ParticipantID' has a wrong offset!");
static_assert(offsetof(UFortConversationContextCondition_ParticipantControllerMeetsRequirement, Requirement) == 0x000030, "Member 'UFortConversationContextCondition_ParticipantControllerMeetsRequirement::Requirement' has a wrong offset!");

class UFortConversationContextConditionHelpers final : public UBlueprintFunctionLibrary
{
public:
	static bool GetMessageForContext(const struct FFortConversationNodeConditionalMessages& Messages, const struct FConversationContext& Context, class FText* OutText);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortConversationContextConditionHelpers">();
	}
	static class UFortConversationContextConditionHelpers* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortConversationContextConditionHelpers>();
	}
};
static_assert(alignof(UFortConversationContextConditionHelpers) == 0x000008, "Wrong alignment on UFortConversationContextConditionHelpers");
static_assert(sizeof(UFortConversationContextConditionHelpers) == 0x000028, "Wrong size on UFortConversationContextConditionHelpers");

class UFortConversationParamLibrary final : public UBlueprintFunctionLibrary
{
public:
	static bool ExtractConversationParameterValue(const TArray<struct FConversationNodeParameterPair>& ConversationParameters, const class FString& DesiredParameterName, class FString* ParameterValueOut);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortConversationParamLibrary">();
	}
	static class UFortConversationParamLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortConversationParamLibrary>();
	}
};
static_assert(alignof(UFortConversationParamLibrary) == 0x000008, "Wrong alignment on UFortConversationParamLibrary");
static_assert(sizeof(UFortConversationParamLibrary) == 0x000028, "Wrong size on UFortConversationParamLibrary");

class UFortniteConversationGlobals final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortniteConversationGlobals">();
	}
	static class UFortniteConversationGlobals* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortniteConversationGlobals>();
	}
};
static_assert(alignof(UFortniteConversationGlobals) == 0x000008, "Wrong alignment on UFortniteConversationGlobals");
static_assert(sizeof(UFortniteConversationGlobals) == 0x000028, "Wrong size on UFortniteConversationGlobals");

class UFortPlayerConversationComponent : public UFortConversationParticipantComponent
{
public:
	TArray<class UFortNonPlayerConversationParticipantComponent*> ConversationParticipantsInRange;
	float                                         GreetSphereRadius;
	float                                         IconVisibilityRadius;
	float                                         AbortConversationRange;
	uint8                                         Pad_1BC[0x3C];
	TSet<class UFortNonPlayerConversationParticipantComponent*> IndicatedNPCConversationComponents;
	uint8                                         Pad_248[0x8];
	bool                                          bMoveShouldAbortConversation;
	uint8                                         Pad_251[0x77];

public:
	void ClientReceiveConversationGiftUINotification(const struct FGiftUINotificationInfo& ConversationGiftUINotification);
	void ClientSpectatorCloseUI();
	void ClientSpectatorOpenUI();
	void HandleDBNOChanged(class AFortPawn* Pawn, bool bIsDBNO);
	void HandleFollowedPlayerChanged(class AFortPlayerControllerSpectating* SpectatingPC, class AFortPlayerState* FollowedPlayerState);
	void HandleViewTargetChanged();
	void HandleWaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void RequestServerAbortConversation();
	void RequestServerAbortConversationWithParticipant(const class UFortNonPlayerConversationParticipantComponent* Participant);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPlayerConversationComponent">();
	}
	static class UFortPlayerConversationComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPlayerConversationComponent>();
	}
};
static_assert(alignof(UFortPlayerConversationComponent) == 0x000008, "Wrong alignment on UFortPlayerConversationComponent");
static_assert(sizeof(UFortPlayerConversationComponent) == 0x0002C8, "Wrong size on UFortPlayerConversationComponent");
static_assert(offsetof(UFortPlayerConversationComponent, ConversationParticipantsInRange) == 0x0001A0, "Member 'UFortPlayerConversationComponent::ConversationParticipantsInRange' has a wrong offset!");
static_assert(offsetof(UFortPlayerConversationComponent, GreetSphereRadius) == 0x0001B0, "Member 'UFortPlayerConversationComponent::GreetSphereRadius' has a wrong offset!");
static_assert(offsetof(UFortPlayerConversationComponent, IconVisibilityRadius) == 0x0001B4, "Member 'UFortPlayerConversationComponent::IconVisibilityRadius' has a wrong offset!");
static_assert(offsetof(UFortPlayerConversationComponent, AbortConversationRange) == 0x0001B8, "Member 'UFortPlayerConversationComponent::AbortConversationRange' has a wrong offset!");
static_assert(offsetof(UFortPlayerConversationComponent, IndicatedNPCConversationComponents) == 0x0001F8, "Member 'UFortPlayerConversationComponent::IndicatedNPCConversationComponents' has a wrong offset!");
static_assert(offsetof(UFortPlayerConversationComponent, bMoveShouldAbortConversation) == 0x000250, "Member 'UFortPlayerConversationComponent::bMoveShouldAbortConversation' has a wrong offset!");

}
