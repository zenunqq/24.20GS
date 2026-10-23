#pragma once

#include "Basic.hpp"

#include "B_Pickups_Parent_classes.hpp"
#include "Engine_structs.hpp"

namespace SDK
{

class AB_Pickups_Default_C final : public AB_Pickups_Parent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_Pickups_Default_C;
	class UStaticMeshComponent*                   BG_Dark;
	class UStaticMeshComponent*                   BG;
	class UStaticMeshComponent*                   rarePickupFXMesh;
	class USpotLightComponent*                    SpotLightComp;
	class UNiagaraComponent*                      rareAmbientEmitter;

public:
	void AddRareFX();
	void ExecuteUbergraph_B_Pickups_Default(int32 EntryPoint);
	void HideBackgroundAndSpotlight();
	void initializeSpotlightComponent();
	void OnPickedUp(class AFortPawn* PickupTarget);
	void OnTossed();
	void ReceiveBeginPlay();
	void Set_Initial_BKGD_Param(class UMaterialInstanceDynamic* Mid);
	void setDrawDistances(double BG_0, double bgdark, double Gun);
	void setMaxDraw_BG(double BG_0);
	void setMaxDraw_BGDark(double BG_0);
	void setMaxDraw_Gun(double BG_0);
	void setMaxDraw_RareFX(double BG_0);
	void setMaxDraw_RareMesh(double BG_0);
	void Setup_View_Distances(int32* viewDistanceQuality);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Pickups_Default_C">();
	}
	static class AB_Pickups_Default_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Pickups_Default_C>();
	}
};
static_assert(alignof(AB_Pickups_Default_C) == 0x000008, "Wrong alignment on AB_Pickups_Default_C");
static_assert(sizeof(AB_Pickups_Default_C) == 0x0005B0, "Wrong size on AB_Pickups_Default_C");
static_assert(offsetof(AB_Pickups_Default_C, UberGraphFrame_B_Pickups_Default_C) == 0x000580, "Member 'AB_Pickups_Default_C::UberGraphFrame_B_Pickups_Default_C' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Default_C, BG_Dark) == 0x000588, "Member 'AB_Pickups_Default_C::BG_Dark' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Default_C, BG) == 0x000590, "Member 'AB_Pickups_Default_C::BG' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Default_C, rarePickupFXMesh) == 0x000598, "Member 'AB_Pickups_Default_C::rarePickupFXMesh' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Default_C, SpotLightComp) == 0x0005A0, "Member 'AB_Pickups_Default_C::SpotLightComp' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Default_C, rareAmbientEmitter) == 0x0005A8, "Member 'AB_Pickups_Default_C::rareAmbientEmitter' has a wrong offset!");

}
