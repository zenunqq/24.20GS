#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CorruptionGameplayCodeRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct WarEffortFundingLibrary_AdjustDonation final
{
public:
	int32                                         DonationAmount;
	EWarEffortFundingStationType                  StationType;
	uint8                                         Pad_5[0x3];
	int32                                         ReturnValue;
};
static_assert(alignof(WarEffortFundingLibrary_AdjustDonation) == 0x000004, "Wrong alignment on WarEffortFundingLibrary_AdjustDonation");
static_assert(sizeof(WarEffortFundingLibrary_AdjustDonation) == 0x00000C, "Wrong size on WarEffortFundingLibrary_AdjustDonation");
static_assert(offsetof(WarEffortFundingLibrary_AdjustDonation, DonationAmount) == 0x000000, "Member 'WarEffortFundingLibrary_AdjustDonation::DonationAmount' has a wrong offset!");
static_assert(offsetof(WarEffortFundingLibrary_AdjustDonation, StationType) == 0x000004, "Member 'WarEffortFundingLibrary_AdjustDonation::StationType' has a wrong offset!");
static_assert(offsetof(WarEffortFundingLibrary_AdjustDonation, ReturnValue) == 0x000008, "Member 'WarEffortFundingLibrary_AdjustDonation::ReturnValue' has a wrong offset!");

struct WarEffortFundingLibrary_DoesChoiceHaveWinner final
{
public:
	struct FWarEffortFundingMetadata              MetaData;
	int32                                         ChoiceIndex;
	bool                                          ReturnValue;
	uint8                                         Pad_35[0x3];
};
static_assert(alignof(WarEffortFundingLibrary_DoesChoiceHaveWinner) == 0x000008, "Wrong alignment on WarEffortFundingLibrary_DoesChoiceHaveWinner");
static_assert(sizeof(WarEffortFundingLibrary_DoesChoiceHaveWinner) == 0x000038, "Wrong size on WarEffortFundingLibrary_DoesChoiceHaveWinner");
static_assert(offsetof(WarEffortFundingLibrary_DoesChoiceHaveWinner, MetaData) == 0x000000, "Member 'WarEffortFundingLibrary_DoesChoiceHaveWinner::MetaData' has a wrong offset!");
static_assert(offsetof(WarEffortFundingLibrary_DoesChoiceHaveWinner, ChoiceIndex) == 0x000030, "Member 'WarEffortFundingLibrary_DoesChoiceHaveWinner::ChoiceIndex' has a wrong offset!");
static_assert(offsetof(WarEffortFundingLibrary_DoesChoiceHaveWinner, ReturnValue) == 0x000034, "Member 'WarEffortFundingLibrary_DoesChoiceHaveWinner::ReturnValue' has a wrong offset!");

struct WarEffortFundingLibrary_GetIndexFundedPercent final
{
public:
	struct FWarEffortFundingMetadata              MetaData;
	int32                                         Index_0;
	EWarEffortFundingStationType                  StationType;
	uint8                                         Pad_35[0x3];
	float                                         ReturnValue;
	uint8                                         Pad_3C[0x4];
};
static_assert(alignof(WarEffortFundingLibrary_GetIndexFundedPercent) == 0x000008, "Wrong alignment on WarEffortFundingLibrary_GetIndexFundedPercent");
static_assert(sizeof(WarEffortFundingLibrary_GetIndexFundedPercent) == 0x000040, "Wrong size on WarEffortFundingLibrary_GetIndexFundedPercent");
static_assert(offsetof(WarEffortFundingLibrary_GetIndexFundedPercent, MetaData) == 0x000000, "Member 'WarEffortFundingLibrary_GetIndexFundedPercent::MetaData' has a wrong offset!");
static_assert(offsetof(WarEffortFundingLibrary_GetIndexFundedPercent, Index_0) == 0x000030, "Member 'WarEffortFundingLibrary_GetIndexFundedPercent::Index_0' has a wrong offset!");
static_assert(offsetof(WarEffortFundingLibrary_GetIndexFundedPercent, StationType) == 0x000034, "Member 'WarEffortFundingLibrary_GetIndexFundedPercent::StationType' has a wrong offset!");
static_assert(offsetof(WarEffortFundingLibrary_GetIndexFundedPercent, ReturnValue) == 0x000038, "Member 'WarEffortFundingLibrary_GetIndexFundedPercent::ReturnValue' has a wrong offset!");

struct WarEffortFundingLibrary_IsIndexFunded final
{
public:
	struct FWarEffortFundingMetadata              MetaData;
	int32                                         Index_0;
	EWarEffortFundingStationType                  StationType;
	bool                                          ReturnValue;
	uint8                                         Pad_36[0x2];
};
static_assert(alignof(WarEffortFundingLibrary_IsIndexFunded) == 0x000008, "Wrong alignment on WarEffortFundingLibrary_IsIndexFunded");
static_assert(sizeof(WarEffortFundingLibrary_IsIndexFunded) == 0x000038, "Wrong size on WarEffortFundingLibrary_IsIndexFunded");
static_assert(offsetof(WarEffortFundingLibrary_IsIndexFunded, MetaData) == 0x000000, "Member 'WarEffortFundingLibrary_IsIndexFunded::MetaData' has a wrong offset!");
static_assert(offsetof(WarEffortFundingLibrary_IsIndexFunded, Index_0) == 0x000030, "Member 'WarEffortFundingLibrary_IsIndexFunded::Index_0' has a wrong offset!");
static_assert(offsetof(WarEffortFundingLibrary_IsIndexFunded, StationType) == 0x000034, "Member 'WarEffortFundingLibrary_IsIndexFunded::StationType' has a wrong offset!");
static_assert(offsetof(WarEffortFundingLibrary_IsIndexFunded, ReturnValue) == 0x000035, "Member 'WarEffortFundingLibrary_IsIndexFunded::ReturnValue' has a wrong offset!");

struct WarEffortFundingLibrary_IsOption1ChoiceWinner final
{
public:
	struct FWarEffortFundingMetadata              MetaData;
	int32                                         ChoiceIndex;
	bool                                          ReturnValue;
	uint8                                         Pad_35[0x3];
};
static_assert(alignof(WarEffortFundingLibrary_IsOption1ChoiceWinner) == 0x000008, "Wrong alignment on WarEffortFundingLibrary_IsOption1ChoiceWinner");
static_assert(sizeof(WarEffortFundingLibrary_IsOption1ChoiceWinner) == 0x000038, "Wrong size on WarEffortFundingLibrary_IsOption1ChoiceWinner");
static_assert(offsetof(WarEffortFundingLibrary_IsOption1ChoiceWinner, MetaData) == 0x000000, "Member 'WarEffortFundingLibrary_IsOption1ChoiceWinner::MetaData' has a wrong offset!");
static_assert(offsetof(WarEffortFundingLibrary_IsOption1ChoiceWinner, ChoiceIndex) == 0x000030, "Member 'WarEffortFundingLibrary_IsOption1ChoiceWinner::ChoiceIndex' has a wrong offset!");
static_assert(offsetof(WarEffortFundingLibrary_IsOption1ChoiceWinner, ReturnValue) == 0x000034, "Member 'WarEffortFundingLibrary_IsOption1ChoiceWinner::ReturnValue' has a wrong offset!");

struct WarEffortFundingLibrary_IsOption2ChoiceWinner final
{
public:
	struct FWarEffortFundingMetadata              MetaData;
	int32                                         ChoiceIndex;
	bool                                          ReturnValue;
	uint8                                         Pad_35[0x3];
};
static_assert(alignof(WarEffortFundingLibrary_IsOption2ChoiceWinner) == 0x000008, "Wrong alignment on WarEffortFundingLibrary_IsOption2ChoiceWinner");
static_assert(sizeof(WarEffortFundingLibrary_IsOption2ChoiceWinner) == 0x000038, "Wrong size on WarEffortFundingLibrary_IsOption2ChoiceWinner");
static_assert(offsetof(WarEffortFundingLibrary_IsOption2ChoiceWinner, MetaData) == 0x000000, "Member 'WarEffortFundingLibrary_IsOption2ChoiceWinner::MetaData' has a wrong offset!");
static_assert(offsetof(WarEffortFundingLibrary_IsOption2ChoiceWinner, ChoiceIndex) == 0x000030, "Member 'WarEffortFundingLibrary_IsOption2ChoiceWinner::ChoiceIndex' has a wrong offset!");
static_assert(offsetof(WarEffortFundingLibrary_IsOption2ChoiceWinner, ReturnValue) == 0x000034, "Member 'WarEffortFundingLibrary_IsOption2ChoiceWinner::ReturnValue' has a wrong offset!");

struct WarEffortFundingLibrary_WriteTextToBuffer final
{
public:
	class FText                                   Text;
	class FString                                 ReturnValue;
};
static_assert(alignof(WarEffortFundingLibrary_WriteTextToBuffer) == 0x000008, "Wrong alignment on WarEffortFundingLibrary_WriteTextToBuffer");
static_assert(sizeof(WarEffortFundingLibrary_WriteTextToBuffer) == 0x000028, "Wrong size on WarEffortFundingLibrary_WriteTextToBuffer");
static_assert(offsetof(WarEffortFundingLibrary_WriteTextToBuffer, Text) == 0x000000, "Member 'WarEffortFundingLibrary_WriteTextToBuffer::Text' has a wrong offset!");
static_assert(offsetof(WarEffortFundingLibrary_WriteTextToBuffer, ReturnValue) == 0x000018, "Member 'WarEffortFundingLibrary_WriteTextToBuffer::ReturnValue' has a wrong offset!");

struct CorruptionCoverageMap_UpdateCorruptionCoverageMap final
{
public:
	class UObject*                                WorldContextObject;
	class UTextureRenderTarget2D*                 CorruptionRenderTarget;
	struct FVector                                InTopLeftWorldCoordinate;
	struct FVector                                InBottomRightWorldCoordinate;
	float                                         CoverageThreshold;
	float                                         DebugDrawDuration;
	bool                                          ReturnValue;
	uint8                                         Pad_49[0x7];
};
static_assert(alignof(CorruptionCoverageMap_UpdateCorruptionCoverageMap) == 0x000008, "Wrong alignment on CorruptionCoverageMap_UpdateCorruptionCoverageMap");
static_assert(sizeof(CorruptionCoverageMap_UpdateCorruptionCoverageMap) == 0x000050, "Wrong size on CorruptionCoverageMap_UpdateCorruptionCoverageMap");
static_assert(offsetof(CorruptionCoverageMap_UpdateCorruptionCoverageMap, WorldContextObject) == 0x000000, "Member 'CorruptionCoverageMap_UpdateCorruptionCoverageMap::WorldContextObject' has a wrong offset!");
static_assert(offsetof(CorruptionCoverageMap_UpdateCorruptionCoverageMap, CorruptionRenderTarget) == 0x000008, "Member 'CorruptionCoverageMap_UpdateCorruptionCoverageMap::CorruptionRenderTarget' has a wrong offset!");
static_assert(offsetof(CorruptionCoverageMap_UpdateCorruptionCoverageMap, InTopLeftWorldCoordinate) == 0x000010, "Member 'CorruptionCoverageMap_UpdateCorruptionCoverageMap::InTopLeftWorldCoordinate' has a wrong offset!");
static_assert(offsetof(CorruptionCoverageMap_UpdateCorruptionCoverageMap, InBottomRightWorldCoordinate) == 0x000028, "Member 'CorruptionCoverageMap_UpdateCorruptionCoverageMap::InBottomRightWorldCoordinate' has a wrong offset!");
static_assert(offsetof(CorruptionCoverageMap_UpdateCorruptionCoverageMap, CoverageThreshold) == 0x000040, "Member 'CorruptionCoverageMap_UpdateCorruptionCoverageMap::CoverageThreshold' has a wrong offset!");
static_assert(offsetof(CorruptionCoverageMap_UpdateCorruptionCoverageMap, DebugDrawDuration) == 0x000044, "Member 'CorruptionCoverageMap_UpdateCorruptionCoverageMap::DebugDrawDuration' has a wrong offset!");
static_assert(offsetof(CorruptionCoverageMap_UpdateCorruptionCoverageMap, ReturnValue) == 0x000048, "Member 'CorruptionCoverageMap_UpdateCorruptionCoverageMap::ReturnValue' has a wrong offset!");

struct CorruptionCoverageMap_IsLocationCorrupted final
{
public:
	struct FVector                                Location;
	float                                         Padding;
	bool                                          ReturnValue;
	uint8                                         Pad_1D[0x3];
};
static_assert(alignof(CorruptionCoverageMap_IsLocationCorrupted) == 0x000008, "Wrong alignment on CorruptionCoverageMap_IsLocationCorrupted");
static_assert(sizeof(CorruptionCoverageMap_IsLocationCorrupted) == 0x000020, "Wrong size on CorruptionCoverageMap_IsLocationCorrupted");
static_assert(offsetof(CorruptionCoverageMap_IsLocationCorrupted, Location) == 0x000000, "Member 'CorruptionCoverageMap_IsLocationCorrupted::Location' has a wrong offset!");
static_assert(offsetof(CorruptionCoverageMap_IsLocationCorrupted, Padding) == 0x000018, "Member 'CorruptionCoverageMap_IsLocationCorrupted::Padding' has a wrong offset!");
static_assert(offsetof(CorruptionCoverageMap_IsLocationCorrupted, ReturnValue) == 0x00001C, "Member 'CorruptionCoverageMap_IsLocationCorrupted::ReturnValue' has a wrong offset!");

struct CubeMovementStaticPath_EditorGetCorruptionGenerationData final
{
public:
	struct FCubeMovement_CorruptionGenerationData OutData;
};
static_assert(alignof(CubeMovementStaticPath_EditorGetCorruptionGenerationData) == 0x000008, "Wrong alignment on CubeMovementStaticPath_EditorGetCorruptionGenerationData");
static_assert(sizeof(CubeMovementStaticPath_EditorGetCorruptionGenerationData) == 0x000010, "Wrong size on CubeMovementStaticPath_EditorGetCorruptionGenerationData");
static_assert(offsetof(CubeMovementStaticPath_EditorGetCorruptionGenerationData, OutData) == 0x000000, "Member 'CubeMovementStaticPath_EditorGetCorruptionGenerationData::OutData' has a wrong offset!");

struct FortAthenaMutator_WarEffort_SetFundingManagerReady final
{
public:
	bool                                          bIsReady;
};
static_assert(alignof(FortAthenaMutator_WarEffort_SetFundingManagerReady) == 0x000001, "Wrong alignment on FortAthenaMutator_WarEffort_SetFundingManagerReady");
static_assert(sizeof(FortAthenaMutator_WarEffort_SetFundingManagerReady) == 0x000001, "Wrong size on FortAthenaMutator_WarEffort_SetFundingManagerReady");
static_assert(offsetof(FortAthenaMutator_WarEffort_SetFundingManagerReady, bIsReady) == 0x000000, "Member 'FortAthenaMutator_WarEffort_SetFundingManagerReady::bIsReady' has a wrong offset!");

struct FortAthenaMutator_WarEffort_SetItemFundedAmount final
{
public:
	struct FGameplayTag                           ItemFundingTag;
	uint8                                         Pad_4[0x4];
	int64                                         CurrentFundingAmount;
	int64                                         TargetFundingAmount;
};
static_assert(alignof(FortAthenaMutator_WarEffort_SetItemFundedAmount) == 0x000008, "Wrong alignment on FortAthenaMutator_WarEffort_SetItemFundedAmount");
static_assert(sizeof(FortAthenaMutator_WarEffort_SetItemFundedAmount) == 0x000018, "Wrong size on FortAthenaMutator_WarEffort_SetItemFundedAmount");
static_assert(offsetof(FortAthenaMutator_WarEffort_SetItemFundedAmount, ItemFundingTag) == 0x000000, "Member 'FortAthenaMutator_WarEffort_SetItemFundedAmount::ItemFundingTag' has a wrong offset!");
static_assert(offsetof(FortAthenaMutator_WarEffort_SetItemFundedAmount, CurrentFundingAmount) == 0x000008, "Member 'FortAthenaMutator_WarEffort_SetItemFundedAmount::CurrentFundingAmount' has a wrong offset!");
static_assert(offsetof(FortAthenaMutator_WarEffort_SetItemFundedAmount, TargetFundingAmount) == 0x000010, "Member 'FortAthenaMutator_WarEffort_SetItemFundedAmount::TargetFundingAmount' has a wrong offset!");

struct FortAthenaMutator_WarEffort_SetItemFundedPercent final
{
public:
	struct FGameplayTag                           ItemFundingTag;
	float                                         FundingPercent;
};
static_assert(alignof(FortAthenaMutator_WarEffort_SetItemFundedPercent) == 0x000004, "Wrong alignment on FortAthenaMutator_WarEffort_SetItemFundedPercent");
static_assert(sizeof(FortAthenaMutator_WarEffort_SetItemFundedPercent) == 0x000008, "Wrong size on FortAthenaMutator_WarEffort_SetItemFundedPercent");
static_assert(offsetof(FortAthenaMutator_WarEffort_SetItemFundedPercent, ItemFundingTag) == 0x000000, "Member 'FortAthenaMutator_WarEffort_SetItemFundedPercent::ItemFundingTag' has a wrong offset!");
static_assert(offsetof(FortAthenaMutator_WarEffort_SetItemFundedPercent, FundingPercent) == 0x000004, "Member 'FortAthenaMutator_WarEffort_SetItemFundedPercent::FundingPercent' has a wrong offset!");

struct FortAthenaMutator_WarEffort_SetItemFundedState final
{
public:
	struct FGameplayTag                           ItemFundingTag;
	bool                                          bIsActive;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(FortAthenaMutator_WarEffort_SetItemFundedState) == 0x000004, "Wrong alignment on FortAthenaMutator_WarEffort_SetItemFundedState");
static_assert(sizeof(FortAthenaMutator_WarEffort_SetItemFundedState) == 0x000008, "Wrong size on FortAthenaMutator_WarEffort_SetItemFundedState");
static_assert(offsetof(FortAthenaMutator_WarEffort_SetItemFundedState, ItemFundingTag) == 0x000000, "Member 'FortAthenaMutator_WarEffort_SetItemFundedState::ItemFundingTag' has a wrong offset!");
static_assert(offsetof(FortAthenaMutator_WarEffort_SetItemFundedState, bIsActive) == 0x000004, "Member 'FortAthenaMutator_WarEffort_SetItemFundedState::bIsActive' has a wrong offset!");

struct FortAthenaMutator_WarEffort_SetTryBeforeYouBuyItemState final
{
public:
	struct FGameplayTag                           ItemFundingTag;
	bool                                          bIsActive;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(FortAthenaMutator_WarEffort_SetTryBeforeYouBuyItemState) == 0x000004, "Wrong alignment on FortAthenaMutator_WarEffort_SetTryBeforeYouBuyItemState");
static_assert(sizeof(FortAthenaMutator_WarEffort_SetTryBeforeYouBuyItemState) == 0x000008, "Wrong size on FortAthenaMutator_WarEffort_SetTryBeforeYouBuyItemState");
static_assert(offsetof(FortAthenaMutator_WarEffort_SetTryBeforeYouBuyItemState, ItemFundingTag) == 0x000000, "Member 'FortAthenaMutator_WarEffort_SetTryBeforeYouBuyItemState::ItemFundingTag' has a wrong offset!");
static_assert(offsetof(FortAthenaMutator_WarEffort_SetTryBeforeYouBuyItemState, bIsActive) == 0x000004, "Member 'FortAthenaMutator_WarEffort_SetTryBeforeYouBuyItemState::bIsActive' has a wrong offset!");

}
