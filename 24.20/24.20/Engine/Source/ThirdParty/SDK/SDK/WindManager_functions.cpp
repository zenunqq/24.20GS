#pragma once

#include "Basic.hpp"

#include "WindManager_classes.hpp"
#include "WindManager_parameters.hpp"

namespace SDK
{

void AWindManager_C::Add_Render_To_Texture_Particle(class UParticleSystem* EmitterTemplate, const struct FTransform& InTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindManager_C", "Add Render To Texture Particle");

	Params::WindManager_C_Add_Render_To_Texture_Particle Parms{};

	Parms.EmitterTemplate = EmitterTemplate;
	Parms.InTransform = std::move(InTransform);

	UObject::ProcessEvent(Func, &Parms);
}

void AWindManager_C::Add_Wind_Component(class UPrimitiveComponent* InComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindManager_C", "Add Wind Component");

	Params::WindManager_C_Add_Wind_Component Parms{};

	Parms.InComponent = InComponent;

	UObject::ProcessEvent(Func, &Parms);
}

void AWindManager_C::AddWindParticleSystemComponent(class UParticleSystemComponent* ParticleSystemComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindManager_C", "AddWindParticleSystemComponent");

	Params::WindManager_C_AddWindParticleSystemComponent Parms{};

	Parms.ParticleSystemComponent = ParticleSystemComponent;

	UObject::ProcessEvent(Func, &Parms);
}

struct FVector AWindManager_C::Calculate_Camera_Position(double Scale, class USceneCaptureComponent2D* Scene_Capture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindManager_C", "Calculate Camera Position");

	Params::WindManager_C_Calculate_Camera_Position Parms{};

	Parms.Scale = Scale;
	Parms.Scene_Capture = Scene_Capture;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void AWindManager_C::ExecuteUbergraph_WindManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindManager_C", "ExecuteUbergraph_WindManager");

	Params::WindManager_C_ExecuteUbergraph_WindManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AWindManager_C::Find_Matching_Wind_Mesh_Index_And_Write_Bool(const struct FVector& Wind_location, bool* Storm_Cyl_Mesh_Match_0, int32* Wind_Cyl_Mesh_Array_Match_Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindManager_C", "Find Matching Wind Mesh Index And Write Bool");

	Params::WindManager_C_Find_Matching_Wind_Mesh_Index_And_Write_Bool Parms{};

	Parms.Wind_location = std::move(Wind_location);

	UObject::ProcessEvent(Func, &Parms);

	if (Storm_Cyl_Mesh_Match_0 != nullptr)
		*Storm_Cyl_Mesh_Match_0 = Parms.Storm_Cyl_Mesh_Match_0;

	if (Wind_Cyl_Mesh_Array_Match_Index_0 != nullptr)
		*Wind_Cyl_Mesh_Array_Match_Index_0 = Parms.Wind_Cyl_Mesh_Array_Match_Index_0;
}

void AWindManager_C::OnWindImpulseCylinderCreation(const struct FFortWindImpulseCylinder& WindImpulseCylinder, const struct FFortWindImpulseCylinderDelta& WindImpulseCylinderDelta)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindManager_C", "OnWindImpulseCylinderCreation");

	Params::WindManager_C_OnWindImpulseCylinderCreation Parms{};

	Parms.WindImpulseCylinder = std::move(WindImpulseCylinder);
	Parms.WindImpulseCylinderDelta = std::move(WindImpulseCylinderDelta);

	UObject::ProcessEvent(Func, &Parms);
}

void AWindManager_C::OnWindImpulseCylinderDeath(const struct FFortWindImpulseCylinder& WindImpulseCylinder)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindManager_C", "OnWindImpulseCylinderDeath");

	Params::WindManager_C_OnWindImpulseCylinderDeath Parms{};

	Parms.WindImpulseCylinder = std::move(WindImpulseCylinder);

	UObject::ProcessEvent(Func, &Parms);
}

void AWindManager_C::OnWindImpulseCylinderDeltaComplete(const struct FFortWindImpulseCylinder& WindImpulseCylinder)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindManager_C", "OnWindImpulseCylinderDeltaComplete");

	Params::WindManager_C_OnWindImpulseCylinderDeltaComplete Parms{};

	Parms.WindImpulseCylinder = std::move(WindImpulseCylinder);

	UObject::ProcessEvent(Func, &Parms);
}

void AWindManager_C::Play_Water_Splash_Particle_System_At_Location(const struct FTransform& Particle_Transform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindManager_C", "Play Water Splash Particle System At Location");

	Params::WindManager_C_Play_Water_Splash_Particle_System_At_Location Parms{};

	Parms.Particle_Transform = std::move(Particle_Transform);

	UObject::ProcessEvent(Func, &Parms);
}

void AWindManager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindManager_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void AWindManager_C::Register_player_for_render_to_texture_purposes(class UPrimitiveComponent* Effect_Water_Interaction_FX, class UPrimitiveComponent* Gameplay_Wind_INteraction_Effects)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindManager_C", "Register player for render to texture purposes");

	Params::WindManager_C_Register_player_for_render_to_texture_purposes Parms{};

	Parms.Effect_Water_Interaction_FX = Effect_Water_Interaction_FX;
	Parms.Gameplay_Wind_INteraction_Effects = Gameplay_Wind_INteraction_Effects;

	UObject::ProcessEvent(Func, &Parms);
}

void AWindManager_C::RemoveWindCylinder(const struct FFortWindImpulseCylinder& WindImpulseCylinder)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindManager_C", "RemoveWindCylinder");

	Params::WindManager_C_RemoveWindCylinder Parms{};

	Parms.WindImpulseCylinder = std::move(WindImpulseCylinder);

	UObject::ProcessEvent(Func, &Parms);
}

void AWindManager_C::SetWindMatVariables(class UMaterialInstanceDynamic* Mid, bool Set_AnimatedCylinderCenter, const struct FVector& AnimatedCylinderCenter, bool Set_Animating_Wind_Magnitude, double Animating_Wind_Magnitude, bool Set_Static_Wind_Magnitude, double Static_Wind_Magnitude, bool Set_CylinderCenter, const struct FVector& CylinderCenter, bool Set_WindVector, const struct FVector& WindVector, bool Set_WindCrossVector, const struct FVector& WindCrossVector, bool Set_OverallOuterRadius, double OverallOuterRadius, bool Set_OverallInnerRadius, double OverallInnerRadius, bool Set_Wind_Still_0_or_Animating_1, double Wind_Still_0_or_Animating_1, bool Set_Circular_Shader_, double Circular_Shader_, bool* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindManager_C", "SetWindMatVariables");

	Params::WindManager_C_SetWindMatVariables Parms{};

	Parms.Mid = Mid;
	Parms.Set_AnimatedCylinderCenter = Set_AnimatedCylinderCenter;
	Parms.AnimatedCylinderCenter = std::move(AnimatedCylinderCenter);
	Parms.Set_Animating_Wind_Magnitude = Set_Animating_Wind_Magnitude;
	Parms.Animating_Wind_Magnitude = Animating_Wind_Magnitude;
	Parms.Set_Static_Wind_Magnitude = Set_Static_Wind_Magnitude;
	Parms.Static_Wind_Magnitude = Static_Wind_Magnitude;
	Parms.Set_CylinderCenter = Set_CylinderCenter;
	Parms.CylinderCenter = std::move(CylinderCenter);
	Parms.Set_WindVector = Set_WindVector;
	Parms.WindVector = std::move(WindVector);
	Parms.Set_WindCrossVector = Set_WindCrossVector;
	Parms.WindCrossVector = std::move(WindCrossVector);
	Parms.Set_OverallOuterRadius = Set_OverallOuterRadius;
	Parms.OverallOuterRadius = OverallOuterRadius;
	Parms.Set_OverallInnerRadius = Set_OverallInnerRadius;
	Parms.OverallInnerRadius = OverallInnerRadius;
	Parms.Set_Wind_Still_0_or_Animating_1 = Set_Wind_Still_0_or_Animating_1;
	Parms.Wind_Still_0_or_Animating_1 = Wind_Still_0_or_Animating_1;
	Parms.Set_Circular_Shader_ = Set_Circular_Shader_;
	Parms.Circular_Shader_ = Circular_Shader_;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}

void AWindManager_C::SpawnTestWind(double Radius, double ImpulseMagnitude)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindManager_C", "SpawnTestWind");

	Params::WindManager_C_SpawnTestWind Parms{};

	Parms.Radius = Radius;
	Parms.ImpulseMagnitude = ImpulseMagnitude;

	UObject::ProcessEvent(Func, &Parms);
}

void AWindManager_C::Update_Test(double NewMagnitude)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindManager_C", "Update Test");

	Params::WindManager_C_Update_Test Parms{};

	Parms.NewMagnitude = NewMagnitude;

	UObject::ProcessEvent(Func, &Parms);
}

void AWindManager_C::UpdateStormWindCylinder(const struct FFortWindImpulseCylinder& Wind_Impulse, const struct FFortWindImpulseCylinderDelta& Wind_Delta)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindManager_C", "UpdateStormWindCylinder");

	Params::WindManager_C_UpdateStormWindCylinder Parms{};

	Parms.Wind_Impulse = std::move(Wind_Impulse);
	Parms.Wind_Delta = std::move(Wind_Delta);

	UObject::ProcessEvent(Func, &Parms);
}

void AWindManager_C::UpdateWindDeltaCyl(double Static_Cylinder_Outer_Radius, double Duration, class UMaterialInstanceDynamic* Mid, bool Is_Wind_Circular_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindManager_C", "UpdateWindDeltaCyl");

	Params::WindManager_C_UpdateWindDeltaCyl Parms{};

	Parms.Static_Cylinder_Outer_Radius = Static_Cylinder_Outer_Radius;
	Parms.Duration = Duration;
	Parms.Mid = Mid;
	Parms.Is_Wind_Circular_ = Is_Wind_Circular_;

	UObject::ProcessEvent(Func, &Parms);
}

void AWindManager_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindManager_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
