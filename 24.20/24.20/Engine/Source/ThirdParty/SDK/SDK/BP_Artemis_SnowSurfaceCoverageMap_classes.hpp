#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Bp_E_Artemis_SnowSurfaceCoverageMap_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_Artemis_SnowSurfaceCoverageMap_Struct_structs.hpp"

namespace SDK
{

class ABP_Artemis_SnowSurfaceCoverageMap_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USceneComponent*                        DefaultSceneRoot;
	TArray<struct FVector2D>                      SnowmaskOffsets;
	struct FVector                                LandscapeBias;
	struct FVector                                LandscapeSize;
	class UTextureRenderTarget2D*                 SnowRT_BitArray;
	struct FVector2D                              RenderTargetResolution;
	class UMaterialInterface*                     RTMaterial;
	double                                        CoverageThreshold;
	TMap<class FString, EBp_E_Artemis_SnowSurfaceCoverageMap> SnowProgressionServer;
	double                                        DebugDrawBitArrayDuration;
	bool                                          AllowBitArrayPopulation;
	bool                                          Release_ClearRenderTargetBitArrayOnCompletion;
	uint8                                         Pad_35A[0x6];
	TMulticastInlineDelegate<void()>              s19BitArrayPopulated;
	bool                                          BitArraySuccesfullyPopulated;
	uint8                                         Pad_371[0x7];
	class UTextureRenderTarget2D*                 SnowRT_DiskAsset;
	struct FBP_Artemis_SnowSurfaceCoverageMap_Struct SnowProgressionState;
	TMap<class FString, EBp_E_Artemis_SnowSurfaceCoverageMap> SnowProgressionClient;

public:
	void CallClearRenderTargetOnDisk();
	void ClearRenderTargetOnDisk();
	void ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap(int32 EntryPoint);
	void FindAndSetSnowProgressionPhase(const TMap<class FString, EBp_E_Artemis_SnowSurfaceCoverageMap>& SnowProgressionEvents);
	void GetSnowProgressionPhase(EBp_E_Artemis_SnowSurfaceCoverageMap* SnowProgressionPhase);
	void IgnoreCalendarEventsWarningLog();
	void OnReady_60D0298240509AEB035A67BBB4E888A1();
	void OnRep_SnowProgression();
	void OnRep_SnowProgressionState();
	void PopulateBitArray();
	void QuerySnowCalendarEvents(const TMap<class FString, EBp_E_Artemis_SnowSurfaceCoverageMap>& Events, bool* EventFound, class FString* FoundEventName, double* EventTimespanRatio);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void Release_ClearRenderTarget();
	void RemoveSnowOnClient();
	void SetAllowBitArrayPopulation(bool AllowBitArrayPopulation_0);
	void SetSnowProgressionPhase(int32 Index_0);
	void SetupRT();
	void UpdateSnowProgressionMPC();
	void UpdateSnowVisuals();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Artemis_SnowSurfaceCoverageMap_C">();
	}
	static class ABP_Artemis_SnowSurfaceCoverageMap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Artemis_SnowSurfaceCoverageMap_C>();
	}
};
static_assert(alignof(ABP_Artemis_SnowSurfaceCoverageMap_C) == 0x000008, "Wrong alignment on ABP_Artemis_SnowSurfaceCoverageMap_C");
static_assert(sizeof(ABP_Artemis_SnowSurfaceCoverageMap_C) == 0x0003D8, "Wrong size on ABP_Artemis_SnowSurfaceCoverageMap_C");
static_assert(offsetof(ABP_Artemis_SnowSurfaceCoverageMap_C, UberGraphFrame) == 0x000288, "Member 'ABP_Artemis_SnowSurfaceCoverageMap_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Artemis_SnowSurfaceCoverageMap_C, DefaultSceneRoot) == 0x000290, "Member 'ABP_Artemis_SnowSurfaceCoverageMap_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Artemis_SnowSurfaceCoverageMap_C, SnowmaskOffsets) == 0x000298, "Member 'ABP_Artemis_SnowSurfaceCoverageMap_C::SnowmaskOffsets' has a wrong offset!");
static_assert(offsetof(ABP_Artemis_SnowSurfaceCoverageMap_C, LandscapeBias) == 0x0002A8, "Member 'ABP_Artemis_SnowSurfaceCoverageMap_C::LandscapeBias' has a wrong offset!");
static_assert(offsetof(ABP_Artemis_SnowSurfaceCoverageMap_C, LandscapeSize) == 0x0002C0, "Member 'ABP_Artemis_SnowSurfaceCoverageMap_C::LandscapeSize' has a wrong offset!");
static_assert(offsetof(ABP_Artemis_SnowSurfaceCoverageMap_C, SnowRT_BitArray) == 0x0002D8, "Member 'ABP_Artemis_SnowSurfaceCoverageMap_C::SnowRT_BitArray' has a wrong offset!");
static_assert(offsetof(ABP_Artemis_SnowSurfaceCoverageMap_C, RenderTargetResolution) == 0x0002E0, "Member 'ABP_Artemis_SnowSurfaceCoverageMap_C::RenderTargetResolution' has a wrong offset!");
static_assert(offsetof(ABP_Artemis_SnowSurfaceCoverageMap_C, RTMaterial) == 0x0002F0, "Member 'ABP_Artemis_SnowSurfaceCoverageMap_C::RTMaterial' has a wrong offset!");
static_assert(offsetof(ABP_Artemis_SnowSurfaceCoverageMap_C, CoverageThreshold) == 0x0002F8, "Member 'ABP_Artemis_SnowSurfaceCoverageMap_C::CoverageThreshold' has a wrong offset!");
static_assert(offsetof(ABP_Artemis_SnowSurfaceCoverageMap_C, SnowProgressionServer) == 0x000300, "Member 'ABP_Artemis_SnowSurfaceCoverageMap_C::SnowProgressionServer' has a wrong offset!");
static_assert(offsetof(ABP_Artemis_SnowSurfaceCoverageMap_C, DebugDrawBitArrayDuration) == 0x000350, "Member 'ABP_Artemis_SnowSurfaceCoverageMap_C::DebugDrawBitArrayDuration' has a wrong offset!");
static_assert(offsetof(ABP_Artemis_SnowSurfaceCoverageMap_C, AllowBitArrayPopulation) == 0x000358, "Member 'ABP_Artemis_SnowSurfaceCoverageMap_C::AllowBitArrayPopulation' has a wrong offset!");
static_assert(offsetof(ABP_Artemis_SnowSurfaceCoverageMap_C, Release_ClearRenderTargetBitArrayOnCompletion) == 0x000359, "Member 'ABP_Artemis_SnowSurfaceCoverageMap_C::Release_ClearRenderTargetBitArrayOnCompletion' has a wrong offset!");
static_assert(offsetof(ABP_Artemis_SnowSurfaceCoverageMap_C, s19BitArrayPopulated) == 0x000360, "Member 'ABP_Artemis_SnowSurfaceCoverageMap_C::s19BitArrayPopulated' has a wrong offset!");
static_assert(offsetof(ABP_Artemis_SnowSurfaceCoverageMap_C, BitArraySuccesfullyPopulated) == 0x000370, "Member 'ABP_Artemis_SnowSurfaceCoverageMap_C::BitArraySuccesfullyPopulated' has a wrong offset!");
static_assert(offsetof(ABP_Artemis_SnowSurfaceCoverageMap_C, SnowRT_DiskAsset) == 0x000378, "Member 'ABP_Artemis_SnowSurfaceCoverageMap_C::SnowRT_DiskAsset' has a wrong offset!");
static_assert(offsetof(ABP_Artemis_SnowSurfaceCoverageMap_C, SnowProgressionState) == 0x000380, "Member 'ABP_Artemis_SnowSurfaceCoverageMap_C::SnowProgressionState' has a wrong offset!");
static_assert(offsetof(ABP_Artemis_SnowSurfaceCoverageMap_C, SnowProgressionClient) == 0x000388, "Member 'ABP_Artemis_SnowSurfaceCoverageMap_C::SnowProgressionClient' has a wrong offset!");

}
