#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AB_Pickups_Parent_C : public AFortPickupsParent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USceneComponent*                        Root;
	float                                         MobileSelectedTL_LerpInteactoIcon_FF208F9641BE589B76EF698B94309EA7;
	float                                         MobileSelectedTL_LerpObject_FF208F9641BE589B76EF698B94309EA7;
	ETimelineDirection                            MobileSelectedTL__Direction_FF208F9641BE589B76EF698B94309EA7;
	uint8                                         Pad_411[0x7];
	class UTimelineComponent*                     MobileSelectedTL;
	class UStaticMeshComponent*                   Static_Mesh_Pickup;
	class USkeletalMeshComponent*                 Skeletal_Mesh_Pickup;
	class UPrimitiveComponent*                    SkeletalOrStaticMeshAssetPrimitive;
	int32                                         CurrentElementIndex;
	bool                                          Tossed;
	uint8                                         Pad_43D[0x3];
	double                                        Component_Radius__Scaled_;
	double                                        Component_Radius_Multiplier;
	TArray<struct FLinearColor>                   Outline_Rarity_Colors;
	double                                        Component_Radius;
	double                                        Picked_Up_Delay_Before_Glow;
	double                                        Picked_Up_Fade_In_Time;
	double                                        Picked_Up_Hold_Time;
	double                                        Picked_Up_Fade_Out_Time;
	double                                        Picked_Up_Sweep_Speed;
	class UParticleSystem*                        Picked_Up_Trail_PS;
	TArray<double>                                Sparkle_Spawn_Rate__Picked_Up_;
	TArray<double>                                Lifetime__Picked_Up_;
	class UForceFeedbackEffect*                   PickupForceFeedback;
	TArray<class FString>                         Names_of_Materials_And_Parents_Exempt_from_Repartening;
	bool                                          HasUniqueMaterialIds;
	uint8                                         Pad_4D1[0x7];
	class UParticleSystemComponent*               BackgroundParticleSystem;
	TArray<struct FLinearColor>                   BackgroundRarityColors;
	double                                        Random_Rotation;
	struct FVector                                MobileSelectedOffset;
	struct FVector                                MobileSelectedScale;
	class UStaticMeshComponent*                   MobileInteractIcon;
	struct FVector                                MobileInteractIconLocation;
	struct FVector                                MobileInteractIconScale;
	class UMaterialInterface*                     MobileInteractionMaterial;
	bool                                          PickedUp;
	uint8                                         Pad_569[0x3];
	struct FLinearColor                           MissionItemOutlineColor;

public:
	void DestroyBackgroundVisualComponents();
	void DisableBacchusHighlight();
	void EnableBacchusHighlight();
	void ExecuteUbergraph_B_Pickups_Parent(int32 EntryPoint);
	int32 GetViewDistanceQuality();
	void HideBackgroundAndSpotlight();
	void Mobile_Interation_Icon_Setup();
	void MobileSelectedTL__FinishedFunc();
	void MobileSelectedTL__UpdateFunc();
	void OnAboutToEnterBackpack(class AFortPawn* PickupTarget);
	void OnAttached();
	void OnPickedUp(class AFortPawn* PickupTarget);
	void OnTossed();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ScaleHologramTimingsForPvP();
	void SetActiveBackgroundParticleSystem(bool Active, bool Reset);
	void SetHiddenBackgroundVisualComponents(bool Hidden);
	void SetHologramPickedUpParams(bool Tier_0);
	void Setup_View_Distances(int32* viewDistanceQuality);
	void SetVisibleMobileInteractIcon(bool Visible);
	void SpawnPickedUpTrailPS();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Pickups_Parent_C">();
	}
	static class AB_Pickups_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Pickups_Parent_C>();
	}
};
static_assert(alignof(AB_Pickups_Parent_C) == 0x000008, "Wrong alignment on AB_Pickups_Parent_C");
static_assert(sizeof(AB_Pickups_Parent_C) == 0x000580, "Wrong size on AB_Pickups_Parent_C");
static_assert(offsetof(AB_Pickups_Parent_C, UberGraphFrame) == 0x0003F8, "Member 'AB_Pickups_Parent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Root) == 0x000400, "Member 'AB_Pickups_Parent_C::Root' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, MobileSelectedTL_LerpInteactoIcon_FF208F9641BE589B76EF698B94309EA7) == 0x000408, "Member 'AB_Pickups_Parent_C::MobileSelectedTL_LerpInteactoIcon_FF208F9641BE589B76EF698B94309EA7' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, MobileSelectedTL_LerpObject_FF208F9641BE589B76EF698B94309EA7) == 0x00040C, "Member 'AB_Pickups_Parent_C::MobileSelectedTL_LerpObject_FF208F9641BE589B76EF698B94309EA7' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, MobileSelectedTL__Direction_FF208F9641BE589B76EF698B94309EA7) == 0x000410, "Member 'AB_Pickups_Parent_C::MobileSelectedTL__Direction_FF208F9641BE589B76EF698B94309EA7' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, MobileSelectedTL) == 0x000418, "Member 'AB_Pickups_Parent_C::MobileSelectedTL' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Static_Mesh_Pickup) == 0x000420, "Member 'AB_Pickups_Parent_C::Static_Mesh_Pickup' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Skeletal_Mesh_Pickup) == 0x000428, "Member 'AB_Pickups_Parent_C::Skeletal_Mesh_Pickup' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, SkeletalOrStaticMeshAssetPrimitive) == 0x000430, "Member 'AB_Pickups_Parent_C::SkeletalOrStaticMeshAssetPrimitive' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, CurrentElementIndex) == 0x000438, "Member 'AB_Pickups_Parent_C::CurrentElementIndex' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Tossed) == 0x00043C, "Member 'AB_Pickups_Parent_C::Tossed' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Component_Radius__Scaled_) == 0x000440, "Member 'AB_Pickups_Parent_C::Component_Radius__Scaled_' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Component_Radius_Multiplier) == 0x000448, "Member 'AB_Pickups_Parent_C::Component_Radius_Multiplier' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Outline_Rarity_Colors) == 0x000450, "Member 'AB_Pickups_Parent_C::Outline_Rarity_Colors' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Component_Radius) == 0x000460, "Member 'AB_Pickups_Parent_C::Component_Radius' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Picked_Up_Delay_Before_Glow) == 0x000468, "Member 'AB_Pickups_Parent_C::Picked_Up_Delay_Before_Glow' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Picked_Up_Fade_In_Time) == 0x000470, "Member 'AB_Pickups_Parent_C::Picked_Up_Fade_In_Time' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Picked_Up_Hold_Time) == 0x000478, "Member 'AB_Pickups_Parent_C::Picked_Up_Hold_Time' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Picked_Up_Fade_Out_Time) == 0x000480, "Member 'AB_Pickups_Parent_C::Picked_Up_Fade_Out_Time' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Picked_Up_Sweep_Speed) == 0x000488, "Member 'AB_Pickups_Parent_C::Picked_Up_Sweep_Speed' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Picked_Up_Trail_PS) == 0x000490, "Member 'AB_Pickups_Parent_C::Picked_Up_Trail_PS' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Sparkle_Spawn_Rate__Picked_Up_) == 0x000498, "Member 'AB_Pickups_Parent_C::Sparkle_Spawn_Rate__Picked_Up_' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Lifetime__Picked_Up_) == 0x0004A8, "Member 'AB_Pickups_Parent_C::Lifetime__Picked_Up_' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, PickupForceFeedback) == 0x0004B8, "Member 'AB_Pickups_Parent_C::PickupForceFeedback' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Names_of_Materials_And_Parents_Exempt_from_Repartening) == 0x0004C0, "Member 'AB_Pickups_Parent_C::Names_of_Materials_And_Parents_Exempt_from_Repartening' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, HasUniqueMaterialIds) == 0x0004D0, "Member 'AB_Pickups_Parent_C::HasUniqueMaterialIds' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, BackgroundParticleSystem) == 0x0004D8, "Member 'AB_Pickups_Parent_C::BackgroundParticleSystem' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, BackgroundRarityColors) == 0x0004E0, "Member 'AB_Pickups_Parent_C::BackgroundRarityColors' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Random_Rotation) == 0x0004F0, "Member 'AB_Pickups_Parent_C::Random_Rotation' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, MobileSelectedOffset) == 0x0004F8, "Member 'AB_Pickups_Parent_C::MobileSelectedOffset' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, MobileSelectedScale) == 0x000510, "Member 'AB_Pickups_Parent_C::MobileSelectedScale' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, MobileInteractIcon) == 0x000528, "Member 'AB_Pickups_Parent_C::MobileInteractIcon' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, MobileInteractIconLocation) == 0x000530, "Member 'AB_Pickups_Parent_C::MobileInteractIconLocation' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, MobileInteractIconScale) == 0x000548, "Member 'AB_Pickups_Parent_C::MobileInteractIconScale' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, MobileInteractionMaterial) == 0x000560, "Member 'AB_Pickups_Parent_C::MobileInteractionMaterial' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, PickedUp) == 0x000568, "Member 'AB_Pickups_Parent_C::PickedUp' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, MissionItemOutlineColor) == 0x00056C, "Member 'AB_Pickups_Parent_C::MissionItemOutlineColor' has a wrong offset!");

}
