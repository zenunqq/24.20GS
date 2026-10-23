#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class ABP_SprayDecal_C final : public AFortSprayDecalInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	double                                        DecalFadeoutTime;
	class UDecalComponent*                        EmissiveDecal;
	class UMaterialInstanceDynamic*               EmissiveDecalMID;
	double                                        DecalSize;
	class UMaterialInterface*                     EmissiveMatSource;
	double                                        DecalDepth;
	class UAthenaSprayItemDefinition*             SprayAsset;
	int32                                         LoadsOutstanding;
	uint8                                         Pad_E34[0x4];
	TSoftObjectPtr<class UTexture2D>              DecalTextureOverrideSoft;
	class UTexture2D*                             DecalTextureOverride;
	struct FLinearColor                           BannerPrimaryColor;
	struct FLinearColor                           BannerSecondaryColor;
	class AFortPlayerController*                  SpawningPlayerController;
	TArray<class AActor*>                         NearbyBuildingActors;
	double                                        SpawnStartTimeDelay;
	bool                                          bIsFrontEndPreview;
	bool                                          bDestroyOnTrapPlaced;

public:
	void AddBoxCollisionForCreative();
	void CreateDecalComponents();
	void ExecuteUbergraph_BP_SprayDecal(int32 EntryPoint);
	void FindNearbyBuildingActorsAndBindDelegates();
	struct FUniqueNetIdRepl GetInstigatorPlayerId();
	void Initialize_Spray_Spawned_from_Gameplay(double InDecalSize, class UAthenaSprayItemDefinition* InSprayAsset, class AFortPlayerController* InSpawningPlayerController);
	void OnBounceOccurs();
	void OnLoaded_F8AB699B4D8DD22B5A0409B608B7D6FA(class UObject* Loaded);
	void OnLoaded_F925FF00475A018319C73E9FB1540BC6(class UObject* Loaded);
	void OnNearbyTrapPlaced(class ABuildingTrap* Trap, bool bDetatched);
	void OnNearbyWallDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnNearbyWallDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnReady_B252FED346EAB98D54D786BD15C1CC7B(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);
	void OnRep_DecalFadeoutTime();
	void OnSprayAssetReplicatedDown();
	void OnSprayInfoReady();
	void OnWallDestoryed(class AActor* DestroyedActor);
	void PostLevelSaveSpawnCleanup();
	void ReceiveBeginPlay();
	void StartSprayFadeOutDueToNewPlacement();
	void UnbindAndClearNearbyBuildingActors();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SprayDecal_C">();
	}
	static class ABP_SprayDecal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SprayDecal_C>();
	}
};
static_assert(alignof(ABP_SprayDecal_C) == 0x000008, "Wrong alignment on ABP_SprayDecal_C");
static_assert(sizeof(ABP_SprayDecal_C) == 0x000EB0, "Wrong size on ABP_SprayDecal_C");
static_assert(offsetof(ABP_SprayDecal_C, UberGraphFrame) == 0x000DF0, "Member 'ABP_SprayDecal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SprayDecal_C, DecalFadeoutTime) == 0x000DF8, "Member 'ABP_SprayDecal_C::DecalFadeoutTime' has a wrong offset!");
static_assert(offsetof(ABP_SprayDecal_C, EmissiveDecal) == 0x000E00, "Member 'ABP_SprayDecal_C::EmissiveDecal' has a wrong offset!");
static_assert(offsetof(ABP_SprayDecal_C, EmissiveDecalMID) == 0x000E08, "Member 'ABP_SprayDecal_C::EmissiveDecalMID' has a wrong offset!");
static_assert(offsetof(ABP_SprayDecal_C, DecalSize) == 0x000E10, "Member 'ABP_SprayDecal_C::DecalSize' has a wrong offset!");
static_assert(offsetof(ABP_SprayDecal_C, EmissiveMatSource) == 0x000E18, "Member 'ABP_SprayDecal_C::EmissiveMatSource' has a wrong offset!");
static_assert(offsetof(ABP_SprayDecal_C, DecalDepth) == 0x000E20, "Member 'ABP_SprayDecal_C::DecalDepth' has a wrong offset!");
static_assert(offsetof(ABP_SprayDecal_C, SprayAsset) == 0x000E28, "Member 'ABP_SprayDecal_C::SprayAsset' has a wrong offset!");
static_assert(offsetof(ABP_SprayDecal_C, LoadsOutstanding) == 0x000E30, "Member 'ABP_SprayDecal_C::LoadsOutstanding' has a wrong offset!");
static_assert(offsetof(ABP_SprayDecal_C, DecalTextureOverrideSoft) == 0x000E38, "Member 'ABP_SprayDecal_C::DecalTextureOverrideSoft' has a wrong offset!");
static_assert(offsetof(ABP_SprayDecal_C, DecalTextureOverride) == 0x000E60, "Member 'ABP_SprayDecal_C::DecalTextureOverride' has a wrong offset!");
static_assert(offsetof(ABP_SprayDecal_C, BannerPrimaryColor) == 0x000E68, "Member 'ABP_SprayDecal_C::BannerPrimaryColor' has a wrong offset!");
static_assert(offsetof(ABP_SprayDecal_C, BannerSecondaryColor) == 0x000E78, "Member 'ABP_SprayDecal_C::BannerSecondaryColor' has a wrong offset!");
static_assert(offsetof(ABP_SprayDecal_C, SpawningPlayerController) == 0x000E88, "Member 'ABP_SprayDecal_C::SpawningPlayerController' has a wrong offset!");
static_assert(offsetof(ABP_SprayDecal_C, NearbyBuildingActors) == 0x000E90, "Member 'ABP_SprayDecal_C::NearbyBuildingActors' has a wrong offset!");
static_assert(offsetof(ABP_SprayDecal_C, SpawnStartTimeDelay) == 0x000EA0, "Member 'ABP_SprayDecal_C::SpawnStartTimeDelay' has a wrong offset!");
static_assert(offsetof(ABP_SprayDecal_C, bIsFrontEndPreview) == 0x000EA8, "Member 'ABP_SprayDecal_C::bIsFrontEndPreview' has a wrong offset!");
static_assert(offsetof(ABP_SprayDecal_C, bDestroyOnTrapPlaced) == 0x000EA9, "Member 'ABP_SprayDecal_C::bDestroyOnTrapPlaced' has a wrong offset!");

}
