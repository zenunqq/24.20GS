#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CorruptionGameplayCodeRuntime_structs.hpp"
#include "Engine_classes.hpp"
#include "SOMRuntime_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UWarEffortFundingLibrary final : public UBlueprintFunctionLibrary
{
public:
	static int32 AdjustDonation(int32 DonationAmount, EWarEffortFundingStationType StationType);
	static bool DoesChoiceHaveWinner(const struct FWarEffortFundingMetadata& MetaData, int32 ChoiceIndex);
	static float GetIndexFundedPercent(const struct FWarEffortFundingMetadata& MetaData, int32 Index_0, EWarEffortFundingStationType StationType);
	static bool IsIndexFunded(const struct FWarEffortFundingMetadata& MetaData, int32 Index_0, EWarEffortFundingStationType StationType);
	static bool IsOption1ChoiceWinner(const struct FWarEffortFundingMetadata& MetaData, int32 ChoiceIndex);
	static bool IsOption2ChoiceWinner(const struct FWarEffortFundingMetadata& MetaData, int32 ChoiceIndex);
	static class FString WriteTextToBuffer(const class FText& Text);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WarEffortFundingLibrary">();
	}
	static class UWarEffortFundingLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWarEffortFundingLibrary>();
	}
};
static_assert(alignof(UWarEffortFundingLibrary) == 0x000008, "Wrong alignment on UWarEffortFundingLibrary");
static_assert(sizeof(UWarEffortFundingLibrary) == 0x000028, "Wrong size on UWarEffortFundingLibrary");

class UCorruptionCoverageMap final : public UObject
{
public:
	uint8                                         Pad_28[0x68];

public:
	bool UpdateCorruptionCoverageMap(class UObject* WorldContextObject, class UTextureRenderTarget2D* CorruptionRenderTarget, const struct FVector& InTopLeftWorldCoordinate, const struct FVector& InBottomRightWorldCoordinate, float CoverageThreshold, float DebugDrawDuration);

	bool IsLocationCorrupted(const struct FVector& Location, float Padding) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CorruptionCoverageMap">();
	}
	static class UCorruptionCoverageMap* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCorruptionCoverageMap>();
	}
};
static_assert(alignof(UCorruptionCoverageMap) == 0x000008, "Wrong alignment on UCorruptionCoverageMap");
static_assert(sizeof(UCorruptionCoverageMap) == 0x000090, "Wrong size on UCorruptionCoverageMap");

class UFortCorruptionSequenceData final : public UPrimaryDataAsset
{
public:
	TArray<struct FCorruptionCalendarEventData>   CorruptionStartEvents;
	TArray<struct FCorruptionPauseEvent>          CorruptionPauseEvents;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCorruptionSequenceData">();
	}
	static class UFortCorruptionSequenceData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCorruptionSequenceData>();
	}
};
static_assert(alignof(UFortCorruptionSequenceData) == 0x000008, "Wrong alignment on UFortCorruptionSequenceData");
static_assert(sizeof(UFortCorruptionSequenceData) == 0x000050, "Wrong size on UFortCorruptionSequenceData");
static_assert(offsetof(UFortCorruptionSequenceData, CorruptionStartEvents) == 0x000030, "Member 'UFortCorruptionSequenceData::CorruptionStartEvents' has a wrong offset!");
static_assert(offsetof(UFortCorruptionSequenceData, CorruptionPauseEvents) == 0x000040, "Member 'UFortCorruptionSequenceData::CorruptionPauseEvents' has a wrong offset!");

class ACubeMovementStaticPath final : public AScriptedObjectMovement_StaticPath
{
public:
	float                                         GenerationZTraceHeight;
	float                                         CubeSpacingFactor;
	float                                         CubeAngleLimitDegrees;
	uint8                                         Pad_4E4[0x4];
	class UFortCorruptionSequenceData*            CorruptionSequence;
	uint8                                         Pad_4F0[0x8];
	TArray<struct FTravelerStepCorruptionOverrideData> TravelerCorruptionStepPercentOverrides;
	uint8                                         Pad_508[0x8];

public:
	void ClearAllGeneratedSplinesAndLockedData();

	void EditorGetCorruptionGenerationData(struct FCubeMovement_CorruptionGenerationData* OutData) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CubeMovementStaticPath">();
	}
	static class ACubeMovementStaticPath* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACubeMovementStaticPath>();
	}
};
static_assert(alignof(ACubeMovementStaticPath) == 0x000010, "Wrong alignment on ACubeMovementStaticPath");
static_assert(sizeof(ACubeMovementStaticPath) == 0x000510, "Wrong size on ACubeMovementStaticPath");
static_assert(offsetof(ACubeMovementStaticPath, GenerationZTraceHeight) == 0x0004D8, "Member 'ACubeMovementStaticPath::GenerationZTraceHeight' has a wrong offset!");
static_assert(offsetof(ACubeMovementStaticPath, CubeSpacingFactor) == 0x0004DC, "Member 'ACubeMovementStaticPath::CubeSpacingFactor' has a wrong offset!");
static_assert(offsetof(ACubeMovementStaticPath, CubeAngleLimitDegrees) == 0x0004E0, "Member 'ACubeMovementStaticPath::CubeAngleLimitDegrees' has a wrong offset!");
static_assert(offsetof(ACubeMovementStaticPath, CorruptionSequence) == 0x0004E8, "Member 'ACubeMovementStaticPath::CorruptionSequence' has a wrong offset!");
static_assert(offsetof(ACubeMovementStaticPath, TravelerCorruptionStepPercentOverrides) == 0x0004F8, "Member 'ACubeMovementStaticPath::TravelerCorruptionStepPercentOverrides' has a wrong offset!");

class AWarEffortMeshActor final : public AInfo
{
public:
	class UMeshNetworkComponent*                  MeshNetworkComponent;
	TArray<struct FGameplayTag>                   ActiveFundedItems;
	TArray<struct FGameplayTag>                   ActiveTryBeforeYouBuyItems;
	TArray<struct FWarEffortFundingData>          CurrentFundingData;
	uint8                                         Pad_2C0[0x50];

public:
	void OnRep_ActiveFundedItems();
	void OnRep_ActiveTryBeforeYouBuyItems();
	void OnRep_CurrentFundingData();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WarEffortMeshActor">();
	}
	static class AWarEffortMeshActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWarEffortMeshActor>();
	}
};
static_assert(alignof(AWarEffortMeshActor) == 0x000008, "Wrong alignment on AWarEffortMeshActor");
static_assert(sizeof(AWarEffortMeshActor) == 0x000310, "Wrong size on AWarEffortMeshActor");
static_assert(offsetof(AWarEffortMeshActor, MeshNetworkComponent) == 0x000288, "Member 'AWarEffortMeshActor::MeshNetworkComponent' has a wrong offset!");
static_assert(offsetof(AWarEffortMeshActor, ActiveFundedItems) == 0x000290, "Member 'AWarEffortMeshActor::ActiveFundedItems' has a wrong offset!");
static_assert(offsetof(AWarEffortMeshActor, ActiveTryBeforeYouBuyItems) == 0x0002A0, "Member 'AWarEffortMeshActor::ActiveTryBeforeYouBuyItems' has a wrong offset!");
static_assert(offsetof(AWarEffortMeshActor, CurrentFundingData) == 0x0002B0, "Member 'AWarEffortMeshActor::CurrentFundingData' has a wrong offset!");

class AFortAthenaMutator_WarEffort final : public AFortAthenaMutator_GameModeBase
{
public:
	uint8                                         Pad_450[0x8];
	struct FWarEffortMutatorMetadata              MeshNetworkMetadata;
	TArray<struct FWarEffortMutatorChoiceData>    WeaponChoices;
	TArray<struct FPrimaryAssetId>                PreloadedItemList;
	bool                                          bCanPreloadItems;
	uint8                                         Pad_499[0x1F];

public:
	void OnRep_PreloadedItemList();
	void SetFundingManagerReady(bool bIsReady);
	void SetItemFundedAmount(const struct FGameplayTag& ItemFundingTag, int64 CurrentFundingAmount, int64 TargetFundingAmount);
	void SetItemFundedPercent(const struct FGameplayTag& ItemFundingTag, float FundingPercent);
	void SetItemFundedState(const struct FGameplayTag& ItemFundingTag, bool bIsActive);
	void SetTryBeforeYouBuyItemState(const struct FGameplayTag& ItemFundingTag, bool bIsActive);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaMutator_WarEffort">();
	}
	static class AFortAthenaMutator_WarEffort* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaMutator_WarEffort>();
	}
};
static_assert(alignof(AFortAthenaMutator_WarEffort) == 0x000008, "Wrong alignment on AFortAthenaMutator_WarEffort");
static_assert(sizeof(AFortAthenaMutator_WarEffort) == 0x0004B8, "Wrong size on AFortAthenaMutator_WarEffort");
static_assert(offsetof(AFortAthenaMutator_WarEffort, MeshNetworkMetadata) == 0x000458, "Member 'AFortAthenaMutator_WarEffort::MeshNetworkMetadata' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_WarEffort, WeaponChoices) == 0x000478, "Member 'AFortAthenaMutator_WarEffort::WeaponChoices' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_WarEffort, PreloadedItemList) == 0x000488, "Member 'AFortAthenaMutator_WarEffort::PreloadedItemList' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_WarEffort, bCanPreloadItems) == 0x000498, "Member 'AFortAthenaMutator_WarEffort::bCanPreloadItems' has a wrong offset!");

}
