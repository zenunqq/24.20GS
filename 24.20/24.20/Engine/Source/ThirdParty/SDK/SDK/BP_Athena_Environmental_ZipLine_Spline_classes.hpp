#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class ABP_Athena_Environmental_ZipLine_Spline_C final : public AFortAthenaSplineZipline
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USphereComponent*                       EndPointInteractSphere;
	class USphereComponent*                       StartPointInteractSphere;
	class UStaticMesh*                            SplineStaticMesh;
	double                                        TangentSmoothStrength;
	bool                                          AutoSmoothTangents;
	ESplineMeshAxis                               ForwardMeshAxis;
	uint8                                         Pad_D6A[0x6];
	struct FVector                                MotorOffset;
	class ABuildingActor*                         PoleA;
	class ABuildingActor*                         PoleB;
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
	uint8                                         Pad_E2A[0x6];
	TArray<class UMaterialInstanceDynamic*>       SplineMaterials;
	struct FGameplayTagContainer                  BlockInteractTags;
	double                                        TilingDivisor;

public:
	void AddSplineMeshSegment(class USplineMeshComponent** SplineMeshSegment);
	void AutoSmoothTanget(const struct FVector& Tangent, const struct FVector& PointA, const struct FVector& PointB, struct FVector* SmoothedTangent);
	void Calc_Auto_Location_At_Alpha(double InAlpha, bool DrawDebug, struct FVector* PointLocation);
	void CalculatePositionOfPoles();
	void ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline(int32 EntryPoint);
	void GetAutoHorizAndVertVectors(const struct FVector& highVector, const struct FVector& LowVector, struct FVector* VertVec, struct FVector* HorizVec);
	void HandlePoleDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void PlayerAttachedToZipline(class AFortPlayerPawn* PlayerPawn);
	void PlayerDetachedFromZipline(class AFortPlayerPawn* PlayerPawn);
	void ReceiveBeginPlay();
	void SetCableTilingBySplineLength(class UMeshComponent* Target);
	void SetInteractionCollision();
	void SetSplinePositionAndTangent(bool SetPosition, bool SetTangent, int32 ID);
	void UserConstructionScript();

	bool BlueprintCanInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, const ETInteractionType InteractionType) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Athena_Environmental_ZipLine_Spline_C">();
	}
	static class ABP_Athena_Environmental_ZipLine_Spline_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Athena_Environmental_ZipLine_Spline_C>();
	}
};
static_assert(alignof(ABP_Athena_Environmental_ZipLine_Spline_C) == 0x000008, "Wrong alignment on ABP_Athena_Environmental_ZipLine_Spline_C");
static_assert(sizeof(ABP_Athena_Environmental_ZipLine_Spline_C) == 0x000E68, "Wrong size on ABP_Athena_Environmental_ZipLine_Spline_C");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_Spline_C, UberGraphFrame) == 0x000D40, "Member 'ABP_Athena_Environmental_ZipLine_Spline_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_Spline_C, EndPointInteractSphere) == 0x000D48, "Member 'ABP_Athena_Environmental_ZipLine_Spline_C::EndPointInteractSphere' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_Spline_C, StartPointInteractSphere) == 0x000D50, "Member 'ABP_Athena_Environmental_ZipLine_Spline_C::StartPointInteractSphere' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_Spline_C, SplineStaticMesh) == 0x000D58, "Member 'ABP_Athena_Environmental_ZipLine_Spline_C::SplineStaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_Spline_C, TangentSmoothStrength) == 0x000D60, "Member 'ABP_Athena_Environmental_ZipLine_Spline_C::TangentSmoothStrength' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_Spline_C, AutoSmoothTangents) == 0x000D68, "Member 'ABP_Athena_Environmental_ZipLine_Spline_C::AutoSmoothTangents' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_Spline_C, ForwardMeshAxis) == 0x000D69, "Member 'ABP_Athena_Environmental_ZipLine_Spline_C::ForwardMeshAxis' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_Spline_C, MotorOffset) == 0x000D70, "Member 'ABP_Athena_Environmental_ZipLine_Spline_C::MotorOffset' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_Spline_C, PoleA) == 0x000D88, "Member 'ABP_Athena_Environmental_ZipLine_Spline_C::PoleA' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_Spline_C, PoleB) == 0x000D90, "Member 'ABP_Athena_Environmental_ZipLine_Spline_C::PoleB' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_Spline_C, PoleASocketLocation) == 0x000D98, "Member 'ABP_Athena_Environmental_ZipLine_Spline_C::PoleASocketLocation' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_Spline_C, PoleBSocketLocation) == 0x000DB0, "Member 'ABP_Athena_Environmental_ZipLine_Spline_C::PoleBSocketLocation' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_Spline_C, LowerPointID) == 0x000DC8, "Member 'ABP_Athena_Environmental_ZipLine_Spline_C::LowerPointID' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_Spline_C, HigherPointID) == 0x000DCC, "Member 'ABP_Athena_Environmental_ZipLine_Spline_C::HigherPointID' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_Spline_C, HigherEndLocation) == 0x000DD0, "Member 'ABP_Athena_Environmental_ZipLine_Spline_C::HigherEndLocation' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_Spline_C, LowerEndLocation) == 0x000DE8, "Member 'ABP_Athena_Environmental_ZipLine_Spline_C::LowerEndLocation' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_Spline_C, AutoLinearFactorLow) == 0x000E00, "Member 'ABP_Athena_Environmental_ZipLine_Spline_C::AutoLinearFactorLow' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_Spline_C, AutoLinearFactorHigh) == 0x000E08, "Member 'ABP_Athena_Environmental_ZipLine_Spline_C::AutoLinearFactorHigh' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_Spline_C, AutoSplineTangentLengthCoef) == 0x000E10, "Member 'ABP_Athena_Environmental_ZipLine_Spline_C::AutoSplineTangentLengthCoef' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_Spline_C, AutoSplineTangentHorizCoef) == 0x000E18, "Member 'ABP_Athena_Environmental_ZipLine_Spline_C::AutoSplineTangentHorizCoef' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_Spline_C, AutoSplineTangentVertCoef) == 0x000E20, "Member 'ABP_Athena_Environmental_ZipLine_Spline_C::AutoSplineTangentVertCoef' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_Spline_C, Auto_Set_Spline_Ends) == 0x000E28, "Member 'ABP_Athena_Environmental_ZipLine_Spline_C::Auto_Set_Spline_Ends' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_Spline_C, Auto_Set_Spline_Mids) == 0x000E29, "Member 'ABP_Athena_Environmental_ZipLine_Spline_C::Auto_Set_Spline_Mids' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_Spline_C, SplineMaterials) == 0x000E30, "Member 'ABP_Athena_Environmental_ZipLine_Spline_C::SplineMaterials' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_Spline_C, BlockInteractTags) == 0x000E40, "Member 'ABP_Athena_Environmental_ZipLine_Spline_C::BlockInteractTags' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_Spline_C, TilingDivisor) == 0x000E60, "Member 'ABP_Athena_Environmental_ZipLine_Spline_C::TilingDivisor' has a wrong offset!");

}
