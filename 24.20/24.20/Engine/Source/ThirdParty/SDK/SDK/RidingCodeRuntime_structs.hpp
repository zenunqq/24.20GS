#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class ERidingControlInputStyle : uint8
{
	SteeringControl                          = 0,
	DirectControl                            = 1,
	ERidingControlInputStyle_MAX             = 2,
};

struct FRidingControlInputStateReliable final
{
public:
	uint8                                         bIsJumping : 1;
	uint8                                         bIsUsingAbility : 1;
	uint8                                         bIsPetting : 1;
};
static_assert(alignof(FRidingControlInputStateReliable) == 0x000001, "Wrong alignment on FRidingControlInputStateReliable");
static_assert(sizeof(FRidingControlInputStateReliable) == 0x000001, "Wrong size on FRidingControlInputStateReliable");

struct FRidingControlInputStateUnreliable final
{
public:
	uint8                                         RightAlphaQuantized;
	uint8                                         ForwardAlphaQuantized;
};
static_assert(alignof(FRidingControlInputStateUnreliable) == 0x000001, "Wrong alignment on FRidingControlInputStateUnreliable");
static_assert(sizeof(FRidingControlInputStateUnreliable) == 0x000002, "Wrong size on FRidingControlInputStateUnreliable");
static_assert(offsetof(FRidingControlInputStateUnreliable, RightAlphaQuantized) == 0x000000, "Member 'FRidingControlInputStateUnreliable::RightAlphaQuantized' has a wrong offset!");
static_assert(offsetof(FRidingControlInputStateUnreliable, ForwardAlphaQuantized) == 0x000001, "Member 'FRidingControlInputStateUnreliable::ForwardAlphaQuantized' has a wrong offset!");

struct FRidingControlInputState final
{
public:
	float                                         RightAlpha;
	float                                         ForwardAlpha;
	uint8                                         bIsJumping : 1;
	uint8                                         BitPad_8_1 : 1;
	uint8                                         bIsUsingAbility : 1;
	uint8                                         BitPad_8_3 : 1;
	uint8                                         bIsPetting : 1;
	uint8                                         Pad_9[0x3];
};
static_assert(alignof(FRidingControlInputState) == 0x000004, "Wrong alignment on FRidingControlInputState");
static_assert(sizeof(FRidingControlInputState) == 0x00000C, "Wrong size on FRidingControlInputState");
static_assert(offsetof(FRidingControlInputState, RightAlpha) == 0x000000, "Member 'FRidingControlInputState::RightAlpha' has a wrong offset!");
static_assert(offsetof(FRidingControlInputState, ForwardAlpha) == 0x000004, "Member 'FRidingControlInputState::ForwardAlpha' has a wrong offset!");

struct FRidingPlaylistBlacklistTableRow final : public FTableRowBase
{
public:
	struct FGameplayTagContainer                  PlaylistTags;
};
static_assert(alignof(FRidingPlaylistBlacklistTableRow) == 0x000008, "Wrong alignment on FRidingPlaylistBlacklistTableRow");
static_assert(sizeof(FRidingPlaylistBlacklistTableRow) == 0x000028, "Wrong size on FRidingPlaylistBlacklistTableRow");
static_assert(offsetof(FRidingPlaylistBlacklistTableRow, PlaylistTags) == 0x000008, "Member 'FRidingPlaylistBlacklistTableRow::PlaylistTags' has a wrong offset!");

struct FPrimaryFireAnimMontageAnimCoreTypeOverride final
{
public:
	EFortWeaponCoreAnimation                      CoreTypeToOverride;
	uint8                                         Pad_1[0x7];
	struct FFortGameplayAbilityMontageInfo        OverridingMontageInfo;
};
static_assert(alignof(FPrimaryFireAnimMontageAnimCoreTypeOverride) == 0x000008, "Wrong alignment on FPrimaryFireAnimMontageAnimCoreTypeOverride");
static_assert(sizeof(FPrimaryFireAnimMontageAnimCoreTypeOverride) == 0x000060, "Wrong size on FPrimaryFireAnimMontageAnimCoreTypeOverride");
static_assert(offsetof(FPrimaryFireAnimMontageAnimCoreTypeOverride, CoreTypeToOverride) == 0x000000, "Member 'FPrimaryFireAnimMontageAnimCoreTypeOverride::CoreTypeToOverride' has a wrong offset!");
static_assert(offsetof(FPrimaryFireAnimMontageAnimCoreTypeOverride, OverridingMontageInfo) == 0x000008, "Member 'FPrimaryFireAnimMontageAnimCoreTypeOverride::OverridingMontageInfo' has a wrong offset!");

struct FPrimaryFireAnimMontageTagOverride final
{
public:
	struct FGameplayTag                           TagOverride;
	uint8                                         Pad_4[0x4];
	struct FFortGameplayAbilityMontageInfo        OverridingMontageInfo;
};
static_assert(alignof(FPrimaryFireAnimMontageTagOverride) == 0x000008, "Wrong alignment on FPrimaryFireAnimMontageTagOverride");
static_assert(sizeof(FPrimaryFireAnimMontageTagOverride) == 0x000060, "Wrong size on FPrimaryFireAnimMontageTagOverride");
static_assert(offsetof(FPrimaryFireAnimMontageTagOverride, TagOverride) == 0x000000, "Member 'FPrimaryFireAnimMontageTagOverride::TagOverride' has a wrong offset!");
static_assert(offsetof(FPrimaryFireAnimMontageTagOverride, OverridingMontageInfo) == 0x000008, "Member 'FPrimaryFireAnimMontageTagOverride::OverridingMontageInfo' has a wrong offset!");

struct FRidingAttachmentBoundsOverride final
{
public:
	bool                                          bUseOverride;
	uint8                                         Pad_1[0x7];
	struct FVector                                AttachSoftBounds;
	struct FVector                                AttachHardBounds;
};
static_assert(alignof(FRidingAttachmentBoundsOverride) == 0x000008, "Wrong alignment on FRidingAttachmentBoundsOverride");
static_assert(sizeof(FRidingAttachmentBoundsOverride) == 0x000038, "Wrong size on FRidingAttachmentBoundsOverride");
static_assert(offsetof(FRidingAttachmentBoundsOverride, bUseOverride) == 0x000000, "Member 'FRidingAttachmentBoundsOverride::bUseOverride' has a wrong offset!");
static_assert(offsetof(FRidingAttachmentBoundsOverride, AttachSoftBounds) == 0x000008, "Member 'FRidingAttachmentBoundsOverride::AttachSoftBounds' has a wrong offset!");
static_assert(offsetof(FRidingAttachmentBoundsOverride, AttachHardBounds) == 0x000020, "Member 'FRidingAttachmentBoundsOverride::AttachHardBounds' has a wrong offset!");

struct FRidingPettingData final
{
public:
	struct FFortGameplayAbilityMontageInfo        RiderMalePettingMontageInfo;
	struct FFortGameplayAbilityMontageInfo        RiderFemalePettingMontageInfo;
	struct FFortGameplayAbilityMontageInfo        RidablePettingMontageInfo;
};
static_assert(alignof(FRidingPettingData) == 0x000008, "Wrong alignment on FRidingPettingData");
static_assert(sizeof(FRidingPettingData) == 0x000108, "Wrong size on FRidingPettingData");
static_assert(offsetof(FRidingPettingData, RiderMalePettingMontageInfo) == 0x000000, "Member 'FRidingPettingData::RiderMalePettingMontageInfo' has a wrong offset!");
static_assert(offsetof(FRidingPettingData, RiderFemalePettingMontageInfo) == 0x000058, "Member 'FRidingPettingData::RiderFemalePettingMontageInfo' has a wrong offset!");
static_assert(offsetof(FRidingPettingData, RidablePettingMontageInfo) == 0x0000B0, "Member 'FRidingPettingData::RidablePettingMontageInfo' has a wrong offset!");

struct FRiderDismountLaunchVelocity final
{
public:
	struct FScalableFloat                         DismountVelocityMultiplier;
	struct FScalableFloat                         DismountVelocityBaseForwardVelocity;
	struct FScalableFloat                         DismountVelocityBaseRightVelocity;
	struct FScalableFloat                         DismountVelocityBaseUpVelocity;
	bool                                          bApplyDismountVelocityMultiplierToZVelocity;
	uint8                                         Pad_A1[0x7];
};
static_assert(alignof(FRiderDismountLaunchVelocity) == 0x000008, "Wrong alignment on FRiderDismountLaunchVelocity");
static_assert(sizeof(FRiderDismountLaunchVelocity) == 0x0000A8, "Wrong size on FRiderDismountLaunchVelocity");
static_assert(offsetof(FRiderDismountLaunchVelocity, DismountVelocityMultiplier) == 0x000000, "Member 'FRiderDismountLaunchVelocity::DismountVelocityMultiplier' has a wrong offset!");
static_assert(offsetof(FRiderDismountLaunchVelocity, DismountVelocityBaseForwardVelocity) == 0x000028, "Member 'FRiderDismountLaunchVelocity::DismountVelocityBaseForwardVelocity' has a wrong offset!");
static_assert(offsetof(FRiderDismountLaunchVelocity, DismountVelocityBaseRightVelocity) == 0x000050, "Member 'FRiderDismountLaunchVelocity::DismountVelocityBaseRightVelocity' has a wrong offset!");
static_assert(offsetof(FRiderDismountLaunchVelocity, DismountVelocityBaseUpVelocity) == 0x000078, "Member 'FRiderDismountLaunchVelocity::DismountVelocityBaseUpVelocity' has a wrong offset!");
static_assert(offsetof(FRiderDismountLaunchVelocity, bApplyDismountVelocityMultiplierToZVelocity) == 0x0000A0, "Member 'FRiderDismountLaunchVelocity::bApplyDismountVelocityMultiplierToZVelocity' has a wrong offset!");

struct FRidingAnalyticsData_Base
{
public:
	uint8                                         Pad_0[0x8];
	TSoftObjectPtr<class URiderComponent>         Rider;
	TSoftObjectPtr<class URidableComponent>       Ridable;
};
static_assert(alignof(FRidingAnalyticsData_Base) == 0x000008, "Wrong alignment on FRidingAnalyticsData_Base");
static_assert(sizeof(FRidingAnalyticsData_Base) == 0x000058, "Wrong size on FRidingAnalyticsData_Base");
static_assert(offsetof(FRidingAnalyticsData_Base, Rider) == 0x000008, "Member 'FRidingAnalyticsData_Base::Rider' has a wrong offset!");
static_assert(offsetof(FRidingAnalyticsData_Base, Ridable) == 0x000030, "Member 'FRidingAnalyticsData_Base::Ridable' has a wrong offset!");

struct FRidingAnalyticsData_Started final : public FRidingAnalyticsData_Base
{
};
static_assert(alignof(FRidingAnalyticsData_Started) == 0x000008, "Wrong alignment on FRidingAnalyticsData_Started");
static_assert(sizeof(FRidingAnalyticsData_Started) == 0x000058, "Wrong size on FRidingAnalyticsData_Started");

struct FRidingAnalyticsData_Stopped final : public FRidingAnalyticsData_Base
{
public:
	float                                         TotalRidingTime;
	float                                         RiderStartHealth;
	float                                         RiderStartShield;
	float                                         RiderEndHealth;
	float                                         RiderEndShield;
	float                                         TotalDistanceTraveled;
	int32                                         JumpUseCount;
	int32                                         AbilityUseCount;
	float                                         RiderDamageDealt;
	float                                         RiderDamageTaken;
	float                                         RiderHealingReceived;
	float                                         RiderShieldGained;
	uint8                                         bRidableEliminated : 1;
	uint8                                         bRidableExhausted : 1;
	uint8                                         Pad_89[0x7];
};
static_assert(alignof(FRidingAnalyticsData_Stopped) == 0x000008, "Wrong alignment on FRidingAnalyticsData_Stopped");
static_assert(sizeof(FRidingAnalyticsData_Stopped) == 0x000090, "Wrong size on FRidingAnalyticsData_Stopped");
static_assert(offsetof(FRidingAnalyticsData_Stopped, TotalRidingTime) == 0x000058, "Member 'FRidingAnalyticsData_Stopped::TotalRidingTime' has a wrong offset!");
static_assert(offsetof(FRidingAnalyticsData_Stopped, RiderStartHealth) == 0x00005C, "Member 'FRidingAnalyticsData_Stopped::RiderStartHealth' has a wrong offset!");
static_assert(offsetof(FRidingAnalyticsData_Stopped, RiderStartShield) == 0x000060, "Member 'FRidingAnalyticsData_Stopped::RiderStartShield' has a wrong offset!");
static_assert(offsetof(FRidingAnalyticsData_Stopped, RiderEndHealth) == 0x000064, "Member 'FRidingAnalyticsData_Stopped::RiderEndHealth' has a wrong offset!");
static_assert(offsetof(FRidingAnalyticsData_Stopped, RiderEndShield) == 0x000068, "Member 'FRidingAnalyticsData_Stopped::RiderEndShield' has a wrong offset!");
static_assert(offsetof(FRidingAnalyticsData_Stopped, TotalDistanceTraveled) == 0x00006C, "Member 'FRidingAnalyticsData_Stopped::TotalDistanceTraveled' has a wrong offset!");
static_assert(offsetof(FRidingAnalyticsData_Stopped, JumpUseCount) == 0x000070, "Member 'FRidingAnalyticsData_Stopped::JumpUseCount' has a wrong offset!");
static_assert(offsetof(FRidingAnalyticsData_Stopped, AbilityUseCount) == 0x000074, "Member 'FRidingAnalyticsData_Stopped::AbilityUseCount' has a wrong offset!");
static_assert(offsetof(FRidingAnalyticsData_Stopped, RiderDamageDealt) == 0x000078, "Member 'FRidingAnalyticsData_Stopped::RiderDamageDealt' has a wrong offset!");
static_assert(offsetof(FRidingAnalyticsData_Stopped, RiderDamageTaken) == 0x00007C, "Member 'FRidingAnalyticsData_Stopped::RiderDamageTaken' has a wrong offset!");
static_assert(offsetof(FRidingAnalyticsData_Stopped, RiderHealingReceived) == 0x000080, "Member 'FRidingAnalyticsData_Stopped::RiderHealingReceived' has a wrong offset!");
static_assert(offsetof(FRidingAnalyticsData_Stopped, RiderShieldGained) == 0x000084, "Member 'FRidingAnalyticsData_Stopped::RiderShieldGained' has a wrong offset!");

}
