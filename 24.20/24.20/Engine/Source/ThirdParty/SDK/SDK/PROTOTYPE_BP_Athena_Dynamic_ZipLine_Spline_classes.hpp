#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C final : public AFortAthenaSplineZipline
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UStaticMesh*                            SplineStaticMesh;
	double                                        TangentSmoothStrength;
	bool                                          AutoSmoothTangents;
	ESplineMeshAxis                               ForwardMeshAxis;
	uint8                                         Pad_D5A[0x6];
	struct FVector                                MotorOffset;
	class AActor*                                 PoleA;
	class AActor*                                 PoleB;
	struct FVector                                PoleASocketLocation;
	struct FVector                                PoleBSocketLocation;
	int32                                         LowerPointID;
	int32                                         HigherPointID;
	struct FVector                                HigherEndLocation;
	struct FVector                                LowerEndLocation;
	double                                        AutoLinearFactorLow;
	double                                        AutoLinearFactorHigh;
	double                                        AutoSplineTangentLengthCoef;
	double                                        AutoSplineTangentHorizCoef;
	double                                        AutoSplineTangentVertCoef;
	bool                                          Auto_Set_Spline_Ends;
	bool                                          Auto_Set_Spline_Mids;
	uint8                                         Pad_E1A[0x6];
	TArray<class UMaterialInstanceDynamic*>       SplineMaterials;
	struct FGameplayTagContainer                  BlockInteractTags;
	double                                        TilingDivisor;
	TArray<class USplineMeshComponent*>           SplineMeshComponents;
	TArray<class AFortPlayerPawn*>                PlayerPawnArray;
	bool                                          Debug;

public:
	void AddPlayerToZipliningArray(const class AFortPlayerPawn*& NewItem);
	void AddSplineMeshSegment(class USplineMeshComponent** SplineMeshSegment);
	void AutoSmoothTanget(const struct FVector& Tangent, const struct FVector& PointA, const struct FVector& PointB, struct FVector* SmoothedTangent);
	void Calc_Auto_Location_At_Alpha(double InAlpha, bool DrawDebug, struct FVector* PointLocation);
	void CalculatePositionOfPoles();
	void ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline(int32 EntryPoint);
	void GetAutoHorizAndVertVectors(const struct FVector& highVector, const struct FVector& LowVector, struct FVector* VertVec, struct FVector* HorizVec);
	void OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnZipliningStarted(class AFortPlayerPawn* InteractingPawn, class UPrimitiveComponent* InteractComponent);
	void OnZipliningStopped(class AFortPlayerPawn* InteractingPawn, class UPrimitiveComponent* InteractComponent, float ZiplineUsageDuration);
	void ReceiveBeginPlay();
	void RemovePlayerFromZipliningArray(const class AFortPlayerPawn*& Item);
	void SetCableTilingBySplineLength(class UMeshComponent* Target);
	void SetSplinePositionAndTangent(bool SetPosition, bool SetTangent, int32 ID);
	void UserConstructionScript();
	void WaitThenSetDynamicSpline();

	bool BlueprintCanInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, const ETInteractionType InteractionType) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C">();
	}
	static class APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C>();
	}
};
static_assert(alignof(APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C) == 0x000008, "Wrong alignment on APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C");
static_assert(sizeof(APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C) == 0x000E80, "Wrong size on APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C");
static_assert(offsetof(APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C, UberGraphFrame) == 0x000D40, "Member 'APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C, SplineStaticMesh) == 0x000D48, "Member 'APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::SplineStaticMesh' has a wrong offset!");
static_assert(offsetof(APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C, TangentSmoothStrength) == 0x000D50, "Member 'APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::TangentSmoothStrength' has a wrong offset!");
static_assert(offsetof(APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C, AutoSmoothTangents) == 0x000D58, "Member 'APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::AutoSmoothTangents' has a wrong offset!");
static_assert(offsetof(APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C, ForwardMeshAxis) == 0x000D59, "Member 'APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::ForwardMeshAxis' has a wrong offset!");
static_assert(offsetof(APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C, MotorOffset) == 0x000D60, "Member 'APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::MotorOffset' has a wrong offset!");
static_assert(offsetof(APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C, PoleA) == 0x000D78, "Member 'APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::PoleA' has a wrong offset!");
static_assert(offsetof(APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C, PoleB) == 0x000D80, "Member 'APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::PoleB' has a wrong offset!");
static_assert(offsetof(APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C, PoleASocketLocation) == 0x000D88, "Member 'APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::PoleASocketLocation' has a wrong offset!");
static_assert(offsetof(APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C, PoleBSocketLocation) == 0x000DA0, "Member 'APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::PoleBSocketLocation' has a wrong offset!");
static_assert(offsetof(APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C, LowerPointID) == 0x000DB8, "Member 'APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::LowerPointID' has a wrong offset!");
static_assert(offsetof(APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C, HigherPointID) == 0x000DBC, "Member 'APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::HigherPointID' has a wrong offset!");
static_assert(offsetof(APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C, HigherEndLocation) == 0x000DC0, "Member 'APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::HigherEndLocation' has a wrong offset!");
static_assert(offsetof(APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C, LowerEndLocation) == 0x000DD8, "Member 'APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::LowerEndLocation' has a wrong offset!");
static_assert(offsetof(APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C, AutoLinearFactorLow) == 0x000DF0, "Member 'APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::AutoLinearFactorLow' has a wrong offset!");
static_assert(offsetof(APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C, AutoLinearFactorHigh) == 0x000DF8, "Member 'APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::AutoLinearFactorHigh' has a wrong offset!");
static_assert(offsetof(APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C, AutoSplineTangentLengthCoef) == 0x000E00, "Member 'APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::AutoSplineTangentLengthCoef' has a wrong offset!");
static_assert(offsetof(APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C, AutoSplineTangentHorizCoef) == 0x000E08, "Member 'APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::AutoSplineTangentHorizCoef' has a wrong offset!");
static_assert(offsetof(APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C, AutoSplineTangentVertCoef) == 0x000E10, "Member 'APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::AutoSplineTangentVertCoef' has a wrong offset!");
static_assert(offsetof(APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C, Auto_Set_Spline_Ends) == 0x000E18, "Member 'APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::Auto_Set_Spline_Ends' has a wrong offset!");
static_assert(offsetof(APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C, Auto_Set_Spline_Mids) == 0x000E19, "Member 'APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::Auto_Set_Spline_Mids' has a wrong offset!");
static_assert(offsetof(APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C, SplineMaterials) == 0x000E20, "Member 'APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::SplineMaterials' has a wrong offset!");
static_assert(offsetof(APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C, BlockInteractTags) == 0x000E30, "Member 'APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::BlockInteractTags' has a wrong offset!");
static_assert(offsetof(APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C, TilingDivisor) == 0x000E50, "Member 'APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::TilingDivisor' has a wrong offset!");
static_assert(offsetof(APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C, SplineMeshComponents) == 0x000E58, "Member 'APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::SplineMeshComponents' has a wrong offset!");
static_assert(offsetof(APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C, PlayerPawnArray) == 0x000E68, "Member 'APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::PlayerPawnArray' has a wrong offset!");
static_assert(offsetof(APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C, Debug) == 0x000E78, "Member 'APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::Debug' has a wrong offset!");

}
