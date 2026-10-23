#pragma once

#include "Basic.hpp"

#include "GrindRail_TipOptions_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "ColorSelect_structs.hpp"
#include "GrindRail_Booster_Directional_structs.hpp"
#include "GrindRail_Connection_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GrindRail_ResourceSpawns_structs.hpp"
#include "GrindRailRuntime_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "GleefulRake_BoosterMode_structs.hpp"
#include "GrindRail_ResourceSpawns_Type_structs.hpp"

namespace SDK
{

class ABGA_GrindRail_C final : public AFortGrindRail
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UInstancedStaticMeshComponent*          booster_InstancedStaticMesh;
	class USplineComponent*                       Spline;
	class USceneComponent*                        DefaultSceneRoot;
	double                                        DistancePerBoosterArrow;
	TArray<struct FGrindRail_Booster_Directional> Boosters;
	bool                                          Full_Circle;
	uint8                                         Pad_B19[0x7];
	TArray<struct FGrindRail_Connection>          Connections;
	class UStaticMeshComponent*                   StartTip;
	class UStaticMeshComponent*                   EndTip;
	struct FGrindRail_TipOptions                  Tip_Caps;
	uint8                                         Pad_B42[0x6];
	TArray<struct FGrindRail_ResourceSpawns>      ResourceSpawns;
	bool                                          StartIsConnected;
	bool                                          EndIsConnected;
	uint8                                         Pad_B5A[0x2];
	int32                                         ColorSelect;
	struct FVector4                               EmissiveColor;
	struct FLinearColor                           RedColor;
	struct FLinearColor                           GreenColor;
	struct FLinearColor                           BlueColor;
	struct FLinearColor                           YellowColor;
	class USkeletalMeshComponent*                 Player_Mesh;
	class UBP_GrindingComponent_C*                Grinding_compoent;
	struct FLinearColor                           SkyBlue;
	struct FLinearColor                           Purple;
	float                                         Glow_start_Radius;
	float                                         Glow_End_Radius;
	float                                         Glow_start__Intensity;
	float                                         Glow__end_Intensity;
	bool                                          Constructed_From_Rail_Connector_Movement;
	uint8                                         Pad_C01[0x7];
	class ABGA_RailConnector_GrindRail_C*         The_Connector;
	TArray<class USplineMeshComponent*>           SplineStaticMesh;
	class UMaterialInterface*                     MaterialOfEmisssive;
	bool                                          _Glow_start_and_End;
	uint8                                         Pad_C29[0x3];
	int32                                         Last_index;
	EColorSelect                                  Color_Select_Enum;
	uint8                                         Pad_C31[0x3];
	struct FLinearColor                           Orange;
	uint8                                         Pad_C44[0x4];
	TArray<class UStaticMeshComponent*>           BoosterMeshes;
	bool                                          IgnoreEmissiveDistanceFade;
	uint8                                         Pad_C59[0x7];
	class UInstancedStaticMeshComponent*          Target;
	bool                                          Booster_Arrow_style_Select_;
	uint8                                         Pad_C69[0x7];
	class UInstancedStaticMeshComponent*          Instance_mesh;
	int32                                         Instance_Index;
	float                                         Animation_period;
	bool                                          SideA_Reverse_animation_direction;
	bool                                          SideB_Reverse_animation_direction;
	uint8                                         Pad_C82[0x6];
	TSoftObjectPtr<class UStaticMesh>             ResourceToSpawnMesh;
	TSoftObjectPtr<class UTexture2D>              SplineMeshBillboard;
	TSoftObjectPtr<class UStaticMesh>             TipMesh;
	TSoftObjectPtr<class UFortWorldItemDefinition> ResourceToSpawn;
	TSoftObjectPtr<class UMaterialInterface>      ResourceLowTierMaterial;
	TSoftObjectPtr<class UMaterialInterface>      ResourceHighTierMaterial;
	TSoftObjectPtr<class UMaterialInterface>      ResourceSingleItemMaterial;
	int32                                         Animation_trailing_length;
	uint8                                         Pad_DA4[0x4];
	class UHierarchicalInstancedStaticMeshComponent* instance_array;
	int32                                         instance_meshIndex;
	uint8                                         Pad_DB4[0x4];
	class UHierarchicalInstancedStaticMeshComponent* instance_staic_mesh;
	int32                                         Array_Index;
	uint8                                         Pad_DC4[0x4];
	double                                        ColorEmissiveScale;
	class UStaticMesh*                            Mesh_Rail;
	class UStaticMesh*                            Mesh_Interaction;
	double                                        SplineMeshLength;
	bool                                          IsChronoGrindRail;
	uint8                                         Pad_DE9[0x7];
	double                                        BoosterLocalPostionZ;
	double                                        BoosterLocalPostionX;
	double                                        BoosterLocalPostionY_Offset;
	struct FGameplayTag                           GC_Sprinting;
	struct FGameplayTag                           GC_SlowBoosting;
	struct FGameplayTag                           GC_FastBoosting;
	struct FGameplayTag                           GC_LandOnRail;
	struct FGameplayTag                           GC_ImpactPlayer;
	uint8                                         Pad_E1C[0x4];
	TSubclassOf<class UGameplayEffect>            GE_GrindingIncludingInAir;
	class USoundLibrary*                          GrindRailSoundLibrary;
	TSubclassOf<class UActorComponent>            GrindRail_TipComponent_Class;
	class USoundMix*                              GrindingSoundMixMusic;

public:
	void AddBoosterModel(const struct FGrindRail_Booster_Directional& Booster, int32 Array_Index_0);
	void AddInteractionRailMeshComponent(class USplineMeshComponent** SplineMeshComponent);
	void AddRailConnection(const struct FGrindRail_Connection& NewConnection);
	void AddSolidRailMeshComponent(class USplineMeshComponent** SplineMeshComponent);
	void AddTip(bool EndTip_0, bool OnlyUpdateSpline, class UStaticMesh* TipMesh_0);
	bool AllowJumpOffEnd();
	bool AllowJumpOffStart();
	bool BlueprintOnLocalInteract(class AFortPlayerPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted);
	void BoosterLengthToSplineLength(const struct FGrindRail_Booster_Directional& Booster, double Length_Along_Booster__cm_, double* Length_Along_Spline__cm_);
	void CollisionCheck(class APlayerPawn_Athena_C* Player, bool* Return);
	void CreateSplineMesh(int32 FirstPoint, int32 SecondPoint, class UTexture2D* MeshEditorSprite);
	void DestroyEndTip();
	void DestroyStartTip();
	void DestroyTip(class UActorComponent* Target_0);
	void ExecuteUbergraph_BGA_GrindRail(int32 EntryPoint);
	void FillInBoosterInfo();
	void ForceClearBoosters();
	void GenerateRailComponents(bool FromRailConnectorMovement, class ABGA_RailConnector_GrindRail_C* TheConnector);
	void GetConnectionForGrinding(const float DistanceToTravel, const float CurrentDistanceAlongSpline, const float NextDistanceOnRail, const float RightLeanValue, bool* bNewRail, float* DistanceAlongNewRail, class AFortGrindRail** TheNewRail, bool* bNewRailReverseDirection);
	void GetCurvatureAtDistance(double Distance, double* Curvature);
	struct FVector GetDirectionAtDistance(float Distance);
	float GetLength();
	void GetRotationForTip(bool bEndTip, struct FRotator* Rotator);
	void GetSnapPosition(const struct FVector& CurrentPosition, struct FVector* OutPos, float* OutDistance);
	void GrindRailChanged(class AFortGrindRail* OldRail, class AFortGrindRail* NewRail);
	void HandlePlayerGrindStart(class APlayerPawn_Athena_C* AttachedPlayer);
	bool IsATip(int32 Index_0);
	bool IsTipCapped(const bool bStartTip);
	bool IsTipConnected(const bool bStartTip);
	void JumpOffMaterial();
	void OnRep_Connections();
	void PopGrindingSoundMix();
	void PushGrindingSoundMix(bool bWasAlreadyGrinding, bool bWasJumpingFromRail, bool bEnteredFromInteraction, const struct FVector& PreviousPlayerLocation);
	void PutPlayerOnRail(class APlayerPawn_Athena_C* Player);
	void PutPlayerOnRail_ClientAndServer(class APlayerPawn_Athena_C* InputPin);
	void PutPlayerOnRail_Server(class APlayerPawn_Athena_C* InputPin);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ReceiveBeginPlay();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void RedoSplineMesh();
	void SnapNearbyPointsToConnector(class AActor* Connector);
	void SnapPointToConnector(class AActor* Connector, int32 PointIndex);
	void sprinting_state(bool bNewIsSprinting);
	void Sprinting_StateMaterial(bool Sprinting);
	void StartedGrinding(bool bWasAlreadyGrinding, bool bWasJumpingFromRail, bool bEnteredFromInteraction, const struct FVector& PreviousPlayerLocation);
	void StartedGrindingMaterial();
	void Tips();
	void Unified_Material_and_UV(int32 FirstPoint, int32 SecondPoint, class USplineMeshComponent* Add_Spline_mesh);
	void UpdateAllBoosterMeshesInLevel();
	void UpdateBoosterMeshes();
	void UserConstructionScript();

	bool BlueprintGetInteractionTime(const class AFortPawn* InteractingPawn, float* OutInteractionTime, const EInteractionBeingAttempted InteractionBeingAttempted) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BGA_GrindRail_C">();
	}
	static class ABGA_GrindRail_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABGA_GrindRail_C>();
	}
};
static_assert(alignof(ABGA_GrindRail_C) == 0x000010, "Wrong alignment on ABGA_GrindRail_C");
static_assert(sizeof(ABGA_GrindRail_C) == 0x000E40, "Wrong size on ABGA_GrindRail_C");
static_assert(offsetof(ABGA_GrindRail_C, UberGraphFrame) == 0x000AE0, "Member 'ABGA_GrindRail_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, booster_InstancedStaticMesh) == 0x000AE8, "Member 'ABGA_GrindRail_C::booster_InstancedStaticMesh' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, Spline) == 0x000AF0, "Member 'ABGA_GrindRail_C::Spline' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, DefaultSceneRoot) == 0x000AF8, "Member 'ABGA_GrindRail_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, DistancePerBoosterArrow) == 0x000B00, "Member 'ABGA_GrindRail_C::DistancePerBoosterArrow' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, Boosters) == 0x000B08, "Member 'ABGA_GrindRail_C::Boosters' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, Full_Circle) == 0x000B18, "Member 'ABGA_GrindRail_C::Full_Circle' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, Connections) == 0x000B20, "Member 'ABGA_GrindRail_C::Connections' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, StartTip) == 0x000B30, "Member 'ABGA_GrindRail_C::StartTip' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, EndTip) == 0x000B38, "Member 'ABGA_GrindRail_C::EndTip' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, Tip_Caps) == 0x000B40, "Member 'ABGA_GrindRail_C::Tip_Caps' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, ResourceSpawns) == 0x000B48, "Member 'ABGA_GrindRail_C::ResourceSpawns' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, StartIsConnected) == 0x000B58, "Member 'ABGA_GrindRail_C::StartIsConnected' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, EndIsConnected) == 0x000B59, "Member 'ABGA_GrindRail_C::EndIsConnected' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, ColorSelect) == 0x000B5C, "Member 'ABGA_GrindRail_C::ColorSelect' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, EmissiveColor) == 0x000B60, "Member 'ABGA_GrindRail_C::EmissiveColor' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, RedColor) == 0x000B80, "Member 'ABGA_GrindRail_C::RedColor' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, GreenColor) == 0x000B90, "Member 'ABGA_GrindRail_C::GreenColor' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, BlueColor) == 0x000BA0, "Member 'ABGA_GrindRail_C::BlueColor' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, YellowColor) == 0x000BB0, "Member 'ABGA_GrindRail_C::YellowColor' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, Player_Mesh) == 0x000BC0, "Member 'ABGA_GrindRail_C::Player_Mesh' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, Grinding_compoent) == 0x000BC8, "Member 'ABGA_GrindRail_C::Grinding_compoent' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, SkyBlue) == 0x000BD0, "Member 'ABGA_GrindRail_C::SkyBlue' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, Purple) == 0x000BE0, "Member 'ABGA_GrindRail_C::Purple' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, Glow_start_Radius) == 0x000BF0, "Member 'ABGA_GrindRail_C::Glow_start_Radius' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, Glow_End_Radius) == 0x000BF4, "Member 'ABGA_GrindRail_C::Glow_End_Radius' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, Glow_start__Intensity) == 0x000BF8, "Member 'ABGA_GrindRail_C::Glow_start__Intensity' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, Glow__end_Intensity) == 0x000BFC, "Member 'ABGA_GrindRail_C::Glow__end_Intensity' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, Constructed_From_Rail_Connector_Movement) == 0x000C00, "Member 'ABGA_GrindRail_C::Constructed_From_Rail_Connector_Movement' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, The_Connector) == 0x000C08, "Member 'ABGA_GrindRail_C::The_Connector' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, SplineStaticMesh) == 0x000C10, "Member 'ABGA_GrindRail_C::SplineStaticMesh' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, MaterialOfEmisssive) == 0x000C20, "Member 'ABGA_GrindRail_C::MaterialOfEmisssive' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, _Glow_start_and_End) == 0x000C28, "Member 'ABGA_GrindRail_C::_Glow_start_and_End' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, Last_index) == 0x000C2C, "Member 'ABGA_GrindRail_C::Last_index' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, Color_Select_Enum) == 0x000C30, "Member 'ABGA_GrindRail_C::Color_Select_Enum' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, Orange) == 0x000C34, "Member 'ABGA_GrindRail_C::Orange' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, BoosterMeshes) == 0x000C48, "Member 'ABGA_GrindRail_C::BoosterMeshes' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, IgnoreEmissiveDistanceFade) == 0x000C58, "Member 'ABGA_GrindRail_C::IgnoreEmissiveDistanceFade' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, Target) == 0x000C60, "Member 'ABGA_GrindRail_C::Target' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, Booster_Arrow_style_Select_) == 0x000C68, "Member 'ABGA_GrindRail_C::Booster_Arrow_style_Select_' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, Instance_mesh) == 0x000C70, "Member 'ABGA_GrindRail_C::Instance_mesh' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, Instance_Index) == 0x000C78, "Member 'ABGA_GrindRail_C::Instance_Index' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, Animation_period) == 0x000C7C, "Member 'ABGA_GrindRail_C::Animation_period' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, SideA_Reverse_animation_direction) == 0x000C80, "Member 'ABGA_GrindRail_C::SideA_Reverse_animation_direction' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, SideB_Reverse_animation_direction) == 0x000C81, "Member 'ABGA_GrindRail_C::SideB_Reverse_animation_direction' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, ResourceToSpawnMesh) == 0x000C88, "Member 'ABGA_GrindRail_C::ResourceToSpawnMesh' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, SplineMeshBillboard) == 0x000CB0, "Member 'ABGA_GrindRail_C::SplineMeshBillboard' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, TipMesh) == 0x000CD8, "Member 'ABGA_GrindRail_C::TipMesh' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, ResourceToSpawn) == 0x000D00, "Member 'ABGA_GrindRail_C::ResourceToSpawn' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, ResourceLowTierMaterial) == 0x000D28, "Member 'ABGA_GrindRail_C::ResourceLowTierMaterial' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, ResourceHighTierMaterial) == 0x000D50, "Member 'ABGA_GrindRail_C::ResourceHighTierMaterial' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, ResourceSingleItemMaterial) == 0x000D78, "Member 'ABGA_GrindRail_C::ResourceSingleItemMaterial' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, Animation_trailing_length) == 0x000DA0, "Member 'ABGA_GrindRail_C::Animation_trailing_length' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, instance_array) == 0x000DA8, "Member 'ABGA_GrindRail_C::instance_array' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, instance_meshIndex) == 0x000DB0, "Member 'ABGA_GrindRail_C::instance_meshIndex' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, instance_staic_mesh) == 0x000DB8, "Member 'ABGA_GrindRail_C::instance_staic_mesh' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, Array_Index) == 0x000DC0, "Member 'ABGA_GrindRail_C::Array_Index' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, ColorEmissiveScale) == 0x000DC8, "Member 'ABGA_GrindRail_C::ColorEmissiveScale' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, Mesh_Rail) == 0x000DD0, "Member 'ABGA_GrindRail_C::Mesh_Rail' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, Mesh_Interaction) == 0x000DD8, "Member 'ABGA_GrindRail_C::Mesh_Interaction' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, SplineMeshLength) == 0x000DE0, "Member 'ABGA_GrindRail_C::SplineMeshLength' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, IsChronoGrindRail) == 0x000DE8, "Member 'ABGA_GrindRail_C::IsChronoGrindRail' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, BoosterLocalPostionZ) == 0x000DF0, "Member 'ABGA_GrindRail_C::BoosterLocalPostionZ' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, BoosterLocalPostionX) == 0x000DF8, "Member 'ABGA_GrindRail_C::BoosterLocalPostionX' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, BoosterLocalPostionY_Offset) == 0x000E00, "Member 'ABGA_GrindRail_C::BoosterLocalPostionY_Offset' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, GC_Sprinting) == 0x000E08, "Member 'ABGA_GrindRail_C::GC_Sprinting' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, GC_SlowBoosting) == 0x000E0C, "Member 'ABGA_GrindRail_C::GC_SlowBoosting' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, GC_FastBoosting) == 0x000E10, "Member 'ABGA_GrindRail_C::GC_FastBoosting' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, GC_LandOnRail) == 0x000E14, "Member 'ABGA_GrindRail_C::GC_LandOnRail' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, GC_ImpactPlayer) == 0x000E18, "Member 'ABGA_GrindRail_C::GC_ImpactPlayer' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, GE_GrindingIncludingInAir) == 0x000E20, "Member 'ABGA_GrindRail_C::GE_GrindingIncludingInAir' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, GrindRailSoundLibrary) == 0x000E28, "Member 'ABGA_GrindRail_C::GrindRailSoundLibrary' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, GrindRail_TipComponent_Class) == 0x000E30, "Member 'ABGA_GrindRail_C::GrindRail_TipComponent_Class' has a wrong offset!");
static_assert(offsetof(ABGA_GrindRail_C, GrindingSoundMixMusic) == 0x000E38, "Member 'ABGA_GrindRail_C::GrindingSoundMixMusic' has a wrong offset!");

}
