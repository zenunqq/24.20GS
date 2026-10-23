#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class APartyDisplayManagerBP_C final : public APartyDisplayManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UChildActorComponent*                   PrefabActorComp;
	class USkeletalMeshComponent*                 SkeletalMesh;
	class UStaticMeshComponent*                   StaticMesh;
	class UStaticMeshComponent*                   ScalePivot;
	class UStaticMeshComponent*                   PivotHolder;
	class UParticleSystemComponent*               CelebratoryFX;
	class USceneComponent*                        DefaultSceneRoot;
	float                                         HoloMatColorPulse_Alpha_E6C257BB472EFEF7971B66A1E8FAE3D8;
	ETimelineDirection                            HoloMatColorPulse__Direction_E6C257BB472EFEF7971B66A1E8FAE3D8;
	uint8                                         Pad_59D[0x3];
	class UTimelineComponent*                     HoloMatColorPulse;
	float                                         ScaleAnimEvolve_Scaling_6D0D09564D54A0DEA88CCC96FA6653CC;
	ETimelineDirection                            ScaleAnimEvolve__Direction_6D0D09564D54A0DEA88CCC96FA6653CC;
	uint8                                         Pad_5AD[0x3];
	class UTimelineComponent*                     ScaleAnimEvolve;
	float                                         ScaleAnimLevel_Scaling_CC68128E49202D0C982B7A945E41AF43;
	ETimelineDirection                            ScaleAnimLevel__Direction_CC68128E49202D0C982B7A945E41AF43;
	uint8                                         Pad_5BD[0x3];
	class UTimelineComponent*                     ScaleAnimLevel;
	struct FTimerHandle                           TimerHandle;
	double                                        Rotation;
	class UFortItem*                              ItemToRepresent;
	bool                                          PreviewRotation;
	uint8                                         Pad_5E1[0x7];
	class UCurveFloat*                            RotationAnimation;
	class UParticleSystem*                        LevelUpFX;
	class UParticleSystem*                        EvolveUpFX;
	struct FVector                                FXTargetLocation;
	bool                                          IsCharacter;
	bool                                          IsEvolve;
	uint8                                         Pad_61A[0x6];
	class UParticleSystem*                        CharLevelUpFX;
	class UParticleSystem*                        CharEvolveUpFX;
	class UMaterialInstanceDynamic*               UIoverrideMID;
	bool                                          HasResetVisuals;
	uint8                                         Pad_639[0x7];
	class UParticleSystemComponent*               ParticleSystem1;
	class UParticleSystemComponent*               ParticleSystem2;
	class UParticleSystem*                        CharSwapTransitionFX;
	bool                                          IsCharacterVisible;
	uint8                                         Pad_659[0x7];
	class AFortPlayerPawn*                        HeroPawn;
	bool                                          SanityChecker;
	uint8                                         Pad_669[0x7];
	class UMaterialInstanceDynamic*               MID_HoloMaterial;
	class FName                                   HideElement_1;
	class FName                                   VertexRange;
	class FName                                   HideElement_2;
	class FName                                   HideElement_3;
	class FName                                   HideElement_4;
	class FName                                   HideElement_5;
	class FName                                   HideElement_6;
	class FName                                   HideElement_7;
	class FName                                   HideElement_8;
	class FName                                   HideElement_9;
	class FName                                   HideElement_10;
	uint8                                         Pad_6A4[0x4];
	struct FVector                                ScalePivotPreScaleLocation;
	struct FVector                                StaticMeshPreScaleLocation;
	struct FVector                                SkelMeshPreScaleLocation;
	struct FVector                                PrefabPreScaleLocation;
	class UParticleSystemComponent*               GhostPistolVFX;
	class UParticleSystemComponent*               Ghost_Sword_VFX;
	class UStaticMeshComponent*                   Ghost_Sword_Mesh;
	class UParticleSystemComponent*               TransitionFXComponent;
	class UParticleSystem*                        CharSwapTransitionFXLoop;
	class FName                                   HideElementsOnlyConsidersRedChannel;

public:
	void UpdatePreviewMeshTransforms();
	void ShowItem(const class UFortItem* ItemToView, const struct FGuid& RequestID);
	void SetupStaticMeshVisuals(class UStaticMesh* NewMesh);
	void SetupSkeletalMeshVisuals(class USkeletalMesh* NewMesh);
	void SetupPrefabVisuals();
	void Set_Character_Parts_Visibility(bool NewVisible);
	void SetUIOverrideVisuals(class UTexture2D* Large_Texture, class UFortItemDefinition* Item, EFortRarity Rarity);
	void ScaleAnimEvolve__UpdateFunc();
	void ScaleAnimEvolve__FinishedFunc();
	void RestoreTeleportMIDsInProgress(const class AFortPlayerPawn* Pawn);
	void ScaleAnimLevel__UpdateFunc();
	void ResOutPawnFromLobby(class AFortPlayerPawn* Pawn, int32 PartyIndex);
	void ScaleAnimLevel__FinishedFunc();
	void ResetVisuals();
	void ResetPreScaleLocations();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void PostSetupPrefabVisuals();
	void PlayLevelUpEffect();
	void PlayEvolutionEffect();
	void PerformScaleMeshFX();
	void HoloMatColorPulse__UpdateFunc();
	void PartyMemberInProgressCheck(class AFortPlayerPawn* Pawn);
	void OnPlayerPawnAddedToLobby(class AFortPlayerPawn* Pawn);
	void HoloMatColorPulse__FinishedFunc();
	void OnMeshLODStreamingFinished();
	void HandlePartyMemberInProgressDisplayChanges(class AFortPlayerPawn* Pawn);
	void OnEmoteSetupFinished();
	void HandleLoadingAssetsForItemCompleted(class UFortItem* ItemWhoseAssetsWereLoaded, const TArray<class UObject*>& LoadedAssets, const struct FGuid& RequestID);
	void GetMeshForCurrentDisplayedItem(class UMeshComponent** OutDisplayedMesh);
	struct FTransform GetWeaponPlacementTransform();
	struct FTransform GetItemPreviewOffset(class UFortItemDefinition* ItemDefinition);
	struct FTransform GetPreviewMeshWorldTransform();
	void GetItemDefinitionToShow(class UFortItemDefinition** ItemDefinition);
	void Completed_01D864884864692DBB7035B0996A5437(class UFortItem* Item, const struct FGuid& RequestID);
	void CharacterCustomizationFinished(class AFortPlayerPawn* Pawn);
	void ExecuteUbergraph_PartyDisplayManagerBP(int32 EntryPoint);
	void CelebrateWithFX();

	class AActor* GetPrefabActorForCurrentDisplayedItem() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PartyDisplayManagerBP_C">();
	}
	static class APartyDisplayManagerBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APartyDisplayManagerBP_C>();
	}
};
static_assert(alignof(APartyDisplayManagerBP_C) == 0x000008, "Wrong alignment on APartyDisplayManagerBP_C");
static_assert(sizeof(APartyDisplayManagerBP_C) == 0x000738, "Wrong size on APartyDisplayManagerBP_C");
static_assert(offsetof(APartyDisplayManagerBP_C, UberGraphFrame) == 0x000558, "Member 'APartyDisplayManagerBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, PrefabActorComp) == 0x000560, "Member 'APartyDisplayManagerBP_C::PrefabActorComp' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, SkeletalMesh) == 0x000568, "Member 'APartyDisplayManagerBP_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, StaticMesh) == 0x000570, "Member 'APartyDisplayManagerBP_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, ScalePivot) == 0x000578, "Member 'APartyDisplayManagerBP_C::ScalePivot' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, PivotHolder) == 0x000580, "Member 'APartyDisplayManagerBP_C::PivotHolder' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, CelebratoryFX) == 0x000588, "Member 'APartyDisplayManagerBP_C::CelebratoryFX' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, DefaultSceneRoot) == 0x000590, "Member 'APartyDisplayManagerBP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, HoloMatColorPulse_Alpha_E6C257BB472EFEF7971B66A1E8FAE3D8) == 0x000598, "Member 'APartyDisplayManagerBP_C::HoloMatColorPulse_Alpha_E6C257BB472EFEF7971B66A1E8FAE3D8' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, HoloMatColorPulse__Direction_E6C257BB472EFEF7971B66A1E8FAE3D8) == 0x00059C, "Member 'APartyDisplayManagerBP_C::HoloMatColorPulse__Direction_E6C257BB472EFEF7971B66A1E8FAE3D8' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, HoloMatColorPulse) == 0x0005A0, "Member 'APartyDisplayManagerBP_C::HoloMatColorPulse' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, ScaleAnimEvolve_Scaling_6D0D09564D54A0DEA88CCC96FA6653CC) == 0x0005A8, "Member 'APartyDisplayManagerBP_C::ScaleAnimEvolve_Scaling_6D0D09564D54A0DEA88CCC96FA6653CC' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, ScaleAnimEvolve__Direction_6D0D09564D54A0DEA88CCC96FA6653CC) == 0x0005AC, "Member 'APartyDisplayManagerBP_C::ScaleAnimEvolve__Direction_6D0D09564D54A0DEA88CCC96FA6653CC' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, ScaleAnimEvolve) == 0x0005B0, "Member 'APartyDisplayManagerBP_C::ScaleAnimEvolve' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, ScaleAnimLevel_Scaling_CC68128E49202D0C982B7A945E41AF43) == 0x0005B8, "Member 'APartyDisplayManagerBP_C::ScaleAnimLevel_Scaling_CC68128E49202D0C982B7A945E41AF43' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, ScaleAnimLevel__Direction_CC68128E49202D0C982B7A945E41AF43) == 0x0005BC, "Member 'APartyDisplayManagerBP_C::ScaleAnimLevel__Direction_CC68128E49202D0C982B7A945E41AF43' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, ScaleAnimLevel) == 0x0005C0, "Member 'APartyDisplayManagerBP_C::ScaleAnimLevel' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, TimerHandle) == 0x0005C8, "Member 'APartyDisplayManagerBP_C::TimerHandle' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, Rotation) == 0x0005D0, "Member 'APartyDisplayManagerBP_C::Rotation' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, ItemToRepresent) == 0x0005D8, "Member 'APartyDisplayManagerBP_C::ItemToRepresent' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, PreviewRotation) == 0x0005E0, "Member 'APartyDisplayManagerBP_C::PreviewRotation' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, RotationAnimation) == 0x0005E8, "Member 'APartyDisplayManagerBP_C::RotationAnimation' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, LevelUpFX) == 0x0005F0, "Member 'APartyDisplayManagerBP_C::LevelUpFX' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, EvolveUpFX) == 0x0005F8, "Member 'APartyDisplayManagerBP_C::EvolveUpFX' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, FXTargetLocation) == 0x000600, "Member 'APartyDisplayManagerBP_C::FXTargetLocation' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, IsCharacter) == 0x000618, "Member 'APartyDisplayManagerBP_C::IsCharacter' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, IsEvolve) == 0x000619, "Member 'APartyDisplayManagerBP_C::IsEvolve' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, CharLevelUpFX) == 0x000620, "Member 'APartyDisplayManagerBP_C::CharLevelUpFX' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, CharEvolveUpFX) == 0x000628, "Member 'APartyDisplayManagerBP_C::CharEvolveUpFX' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, UIoverrideMID) == 0x000630, "Member 'APartyDisplayManagerBP_C::UIoverrideMID' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, HasResetVisuals) == 0x000638, "Member 'APartyDisplayManagerBP_C::HasResetVisuals' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, ParticleSystem1) == 0x000640, "Member 'APartyDisplayManagerBP_C::ParticleSystem1' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, ParticleSystem2) == 0x000648, "Member 'APartyDisplayManagerBP_C::ParticleSystem2' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, CharSwapTransitionFX) == 0x000650, "Member 'APartyDisplayManagerBP_C::CharSwapTransitionFX' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, IsCharacterVisible) == 0x000658, "Member 'APartyDisplayManagerBP_C::IsCharacterVisible' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, HeroPawn) == 0x000660, "Member 'APartyDisplayManagerBP_C::HeroPawn' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, SanityChecker) == 0x000668, "Member 'APartyDisplayManagerBP_C::SanityChecker' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, MID_HoloMaterial) == 0x000670, "Member 'APartyDisplayManagerBP_C::MID_HoloMaterial' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, HideElement_1) == 0x000678, "Member 'APartyDisplayManagerBP_C::HideElement_1' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, VertexRange) == 0x00067C, "Member 'APartyDisplayManagerBP_C::VertexRange' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, HideElement_2) == 0x000680, "Member 'APartyDisplayManagerBP_C::HideElement_2' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, HideElement_3) == 0x000684, "Member 'APartyDisplayManagerBP_C::HideElement_3' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, HideElement_4) == 0x000688, "Member 'APartyDisplayManagerBP_C::HideElement_4' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, HideElement_5) == 0x00068C, "Member 'APartyDisplayManagerBP_C::HideElement_5' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, HideElement_6) == 0x000690, "Member 'APartyDisplayManagerBP_C::HideElement_6' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, HideElement_7) == 0x000694, "Member 'APartyDisplayManagerBP_C::HideElement_7' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, HideElement_8) == 0x000698, "Member 'APartyDisplayManagerBP_C::HideElement_8' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, HideElement_9) == 0x00069C, "Member 'APartyDisplayManagerBP_C::HideElement_9' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, HideElement_10) == 0x0006A0, "Member 'APartyDisplayManagerBP_C::HideElement_10' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, ScalePivotPreScaleLocation) == 0x0006A8, "Member 'APartyDisplayManagerBP_C::ScalePivotPreScaleLocation' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, StaticMeshPreScaleLocation) == 0x0006C0, "Member 'APartyDisplayManagerBP_C::StaticMeshPreScaleLocation' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, SkelMeshPreScaleLocation) == 0x0006D8, "Member 'APartyDisplayManagerBP_C::SkelMeshPreScaleLocation' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, PrefabPreScaleLocation) == 0x0006F0, "Member 'APartyDisplayManagerBP_C::PrefabPreScaleLocation' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, GhostPistolVFX) == 0x000708, "Member 'APartyDisplayManagerBP_C::GhostPistolVFX' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, Ghost_Sword_VFX) == 0x000710, "Member 'APartyDisplayManagerBP_C::Ghost_Sword_VFX' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, Ghost_Sword_Mesh) == 0x000718, "Member 'APartyDisplayManagerBP_C::Ghost_Sword_Mesh' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, TransitionFXComponent) == 0x000720, "Member 'APartyDisplayManagerBP_C::TransitionFXComponent' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, CharSwapTransitionFXLoop) == 0x000728, "Member 'APartyDisplayManagerBP_C::CharSwapTransitionFXLoop' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, HideElementsOnlyConsidersRedChannel) == 0x000730, "Member 'APartyDisplayManagerBP_C::HideElementsOnlyConsidersRedChannel' has a wrong offset!");

}
