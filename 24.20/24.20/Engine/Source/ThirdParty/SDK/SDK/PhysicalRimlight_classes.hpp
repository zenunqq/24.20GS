#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class APhysicalRimlight_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USceneComponent*                        DefaultSceneRoot;
	class USpotLightComponent*                    Right_Side_Rim_Light;
	struct FTransform                             RightSideRim_Transform;
	TArray<class UMaterialInstanceDynamic*>       PawnMaterials_ALL;
	double                                        Rim_Light_Physical_Intensity;
	double                                        RimlightDistanceFromCamera;
	double                                        RimlightOffsetFromCamera;
	class APlayerPawn_Athena_C*                   PlayerPawnAthenaRef;
	class FString                                 l_cvarName;
	class UMaterialParameterCollection*           Material_params;
	class FName                                   Sunlight_Color_Param_name;
	uint8                                         Pad_34C[0x4];
	double                                        Rimlight_CvarBoost;

public:
	void Day_Phase_(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);
	void ExecuteUbergraph_PhysicalRimlight(int32 EntryPoint);
	void InitRim();
	void PhysicalRimlight_AutoGenFunc(const class FString& CVarName);
	void ReceiveBeginPlay();
	void RimlightAttemptValidation();
	void Set_Rimlight_Color_and_Intensity();
	void UpdateRimlight();
	void ValidateRimlight();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PhysicalRimlight_C">();
	}
	static class APhysicalRimlight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APhysicalRimlight_C>();
	}
};
static_assert(alignof(APhysicalRimlight_C) == 0x000010, "Wrong alignment on APhysicalRimlight_C");
static_assert(sizeof(APhysicalRimlight_C) == 0x000360, "Wrong size on APhysicalRimlight_C");
static_assert(offsetof(APhysicalRimlight_C, UberGraphFrame) == 0x000288, "Member 'APhysicalRimlight_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APhysicalRimlight_C, DefaultSceneRoot) == 0x000290, "Member 'APhysicalRimlight_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(APhysicalRimlight_C, Right_Side_Rim_Light) == 0x000298, "Member 'APhysicalRimlight_C::Right_Side_Rim_Light' has a wrong offset!");
static_assert(offsetof(APhysicalRimlight_C, RightSideRim_Transform) == 0x0002A0, "Member 'APhysicalRimlight_C::RightSideRim_Transform' has a wrong offset!");
static_assert(offsetof(APhysicalRimlight_C, PawnMaterials_ALL) == 0x000300, "Member 'APhysicalRimlight_C::PawnMaterials_ALL' has a wrong offset!");
static_assert(offsetof(APhysicalRimlight_C, Rim_Light_Physical_Intensity) == 0x000310, "Member 'APhysicalRimlight_C::Rim_Light_Physical_Intensity' has a wrong offset!");
static_assert(offsetof(APhysicalRimlight_C, RimlightDistanceFromCamera) == 0x000318, "Member 'APhysicalRimlight_C::RimlightDistanceFromCamera' has a wrong offset!");
static_assert(offsetof(APhysicalRimlight_C, RimlightOffsetFromCamera) == 0x000320, "Member 'APhysicalRimlight_C::RimlightOffsetFromCamera' has a wrong offset!");
static_assert(offsetof(APhysicalRimlight_C, PlayerPawnAthenaRef) == 0x000328, "Member 'APhysicalRimlight_C::PlayerPawnAthenaRef' has a wrong offset!");
static_assert(offsetof(APhysicalRimlight_C, l_cvarName) == 0x000330, "Member 'APhysicalRimlight_C::l_cvarName' has a wrong offset!");
static_assert(offsetof(APhysicalRimlight_C, Material_params) == 0x000340, "Member 'APhysicalRimlight_C::Material_params' has a wrong offset!");
static_assert(offsetof(APhysicalRimlight_C, Sunlight_Color_Param_name) == 0x000348, "Member 'APhysicalRimlight_C::Sunlight_Color_Param_name' has a wrong offset!");
static_assert(offsetof(APhysicalRimlight_C, Rimlight_CvarBoost) == 0x000350, "Member 'APhysicalRimlight_C::Rimlight_CvarBoost' has a wrong offset!");

}
