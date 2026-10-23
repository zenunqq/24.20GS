#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "DayPhaseFloats_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AAthena_Prop_ParentBuildingContainerBlueprint_C final : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	bool                                          DebugWind;
	uint8                                         Pad_F01[0x7];
	TArray<class UMaterialInterface*>             IntenseWindMaterialsForPreview;
	class UStaticMeshComponent*                   Wind_Intensity_Debug_Mesh;
	TArray<class UMaterialInterface*>             OriginalMaterials;
	class UMaterialInstanceDynamic*               Debug_TempMaterial;
	double                                        DebugWindYaw;
	double                                        Debug_Wind_Intensity;
	bool                                          Set_Max_Actor_Scale;
	uint8                                         Pad_F49[0x7];
	double                                        Max_Scale;
	bool                                          Disable_TOD_Lights_and_Material_Emissive_Values;
	bool                                          Disable_Static_Mesh_Shadow_Casting_When_Lights_Are_Active;
	bool                                          Use_An_Alternate_Shadow_Mesh_When_The_Light_is_On_;
	uint8                                         Pad_F5B[0x5];
	class UStaticMesh*                            AlternateShadowStaticMesh;
	bool                                          Animate_Emissive_and_Lights_Over_Time;
	uint8                                         Pad_F69[0x7];
	TArray<struct FLinearColor>                   CodeControlled_EmissiveColor;
	TArray<double>                                CodeControlled_LightConeOpacity;
	struct FDayPhaseFloats                        Light_Intensity_Over_Time_of_Day_;
	double                                        Day_Phase_Transition_Length;
	struct FDayPhaseFloats                        Emissive_Intensity_Over_Time_of_Day;
	double                                        Volumetric_Light_Scattering_Intensity;
	bool                                          Cast_Volumetric_Shadows;
	bool                                          Animate_Lights_With_A_Curve___Disables_time_of_day_light_controls;
	bool                                          Animate_Mesh_MID_Emissive_Value_with_a_Curve___Disables_time_of_day_light_controls;
	uint8                                         Pad_FC3[0x5];
	class UCurveFloat*                            LightAnimationCurve;
	double                                        CodeControlled_Animation_Curve_Animation_Length;
	int32                                         CodeControlled_NumberOfMaterials;
	uint8                                         Pad_FDC[0x4];
	TArray<double>                                NewVar_0;
	double                                        Random_Time_Scale_Percent;
	double                                        CodeControlled_CurrentPlayLength;
	double                                        Snow_Coverage_Amount;

public:
	void ExecuteUbergraph_Athena_Prop_ParentBuildingContainerBlueprint(int32 EntryPoint);
	void GetTimeOfDayBlueprintDefaultVariables(struct FTimeOfDayBlueprintDefaultVariables* OutVariables);
	void Loop_Animation_Curve();
	void OnBounceAnimationUpdate(const struct FFortBounceData& Data);
	void OnDayPhaseChanged(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);
	void OnSetSearched();
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_Prop_ParentBuildingContainerBlueprint_C">();
	}
	static class AAthena_Prop_ParentBuildingContainerBlueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAthena_Prop_ParentBuildingContainerBlueprint_C>();
	}
};
static_assert(alignof(AAthena_Prop_ParentBuildingContainerBlueprint_C) == 0x000008, "Wrong alignment on AAthena_Prop_ParentBuildingContainerBlueprint_C");
static_assert(sizeof(AAthena_Prop_ParentBuildingContainerBlueprint_C) == 0x001008, "Wrong size on AAthena_Prop_ParentBuildingContainerBlueprint_C");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, UberGraphFrame) == 0x000EF8, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, DebugWind) == 0x000F00, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::DebugWind' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, IntenseWindMaterialsForPreview) == 0x000F08, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::IntenseWindMaterialsForPreview' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, Wind_Intensity_Debug_Mesh) == 0x000F18, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::Wind_Intensity_Debug_Mesh' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, OriginalMaterials) == 0x000F20, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::OriginalMaterials' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, Debug_TempMaterial) == 0x000F30, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::Debug_TempMaterial' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, DebugWindYaw) == 0x000F38, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::DebugWindYaw' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, Debug_Wind_Intensity) == 0x000F40, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::Debug_Wind_Intensity' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, Set_Max_Actor_Scale) == 0x000F48, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::Set_Max_Actor_Scale' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, Max_Scale) == 0x000F50, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::Max_Scale' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, Disable_TOD_Lights_and_Material_Emissive_Values) == 0x000F58, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::Disable_TOD_Lights_and_Material_Emissive_Values' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, Disable_Static_Mesh_Shadow_Casting_When_Lights_Are_Active) == 0x000F59, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::Disable_Static_Mesh_Shadow_Casting_When_Lights_Are_Active' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, Use_An_Alternate_Shadow_Mesh_When_The_Light_is_On_) == 0x000F5A, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::Use_An_Alternate_Shadow_Mesh_When_The_Light_is_On_' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, AlternateShadowStaticMesh) == 0x000F60, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::AlternateShadowStaticMesh' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, Animate_Emissive_and_Lights_Over_Time) == 0x000F68, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::Animate_Emissive_and_Lights_Over_Time' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, CodeControlled_EmissiveColor) == 0x000F70, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::CodeControlled_EmissiveColor' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, CodeControlled_LightConeOpacity) == 0x000F80, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::CodeControlled_LightConeOpacity' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, Light_Intensity_Over_Time_of_Day_) == 0x000F90, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::Light_Intensity_Over_Time_of_Day_' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, Day_Phase_Transition_Length) == 0x000FA0, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::Day_Phase_Transition_Length' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, Emissive_Intensity_Over_Time_of_Day) == 0x000FA8, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::Emissive_Intensity_Over_Time_of_Day' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, Volumetric_Light_Scattering_Intensity) == 0x000FB8, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::Volumetric_Light_Scattering_Intensity' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, Cast_Volumetric_Shadows) == 0x000FC0, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::Cast_Volumetric_Shadows' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, Animate_Lights_With_A_Curve___Disables_time_of_day_light_controls) == 0x000FC1, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::Animate_Lights_With_A_Curve___Disables_time_of_day_light_controls' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, Animate_Mesh_MID_Emissive_Value_with_a_Curve___Disables_time_of_day_light_controls) == 0x000FC2, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::Animate_Mesh_MID_Emissive_Value_with_a_Curve___Disables_time_of_day_light_controls' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, LightAnimationCurve) == 0x000FC8, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::LightAnimationCurve' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, CodeControlled_Animation_Curve_Animation_Length) == 0x000FD0, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::CodeControlled_Animation_Curve_Animation_Length' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, CodeControlled_NumberOfMaterials) == 0x000FD8, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::CodeControlled_NumberOfMaterials' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, NewVar_0) == 0x000FE0, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, Random_Time_Scale_Percent) == 0x000FF0, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::Random_Time_Scale_Percent' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, CodeControlled_CurrentPlayLength) == 0x000FF8, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::CodeControlled_CurrentPlayLength' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, Snow_Coverage_Amount) == 0x001000, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::Snow_Coverage_Amount' has a wrong offset!");

}
