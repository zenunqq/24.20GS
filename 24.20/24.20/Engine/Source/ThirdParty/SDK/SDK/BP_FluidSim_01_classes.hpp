#pragma once

#include "Basic.hpp"

#include "FluidForceImpulsePerInstanceData_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "FluidForceDynamicPerInstanceData_structs.hpp"
#include "FluidBoundary_structs.hpp"

namespace SDK
{

class ABP_FluidSim_01_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UStaticMeshComponent*                   DebugPlane;
	class USceneComponent*                        DefaultSceneRoot;
	class UMaterialInstanceDynamic*               RippleSimMID;
	class UMaterialInstanceDynamic*               RenderNormalsMID;
	class UMaterialInstanceDynamic*               DisplayMID;
	class UMaterialInstanceDynamic*               DisplayBottomMID;
	class UMaterialInstanceDynamic*               CrossSectionMID;
	TArray<class UTextureRenderTarget2D*>         RippleRTs;
	class UMaterialInterface*                     Display_Material;
	double                                        Virtual_FPS;
	int32                                         Passes;
	uint8                                         Pad_2EC[0x4];
	double                                        TimeAccumulator;
	double                                        FixedStep;
	bool                                          Enabled;
	uint8                                         Pad_301[0x7];
	double                                        Fluid_Size;
	int32                                         Resolution;
	EFluidBoundary                                Boundary_Condition;
	uint8                                         Pad_315[0x3];
	double                                        Travel_Speed;
	double                                        Damping;
	class UTextureRenderTarget2D*                 NormalRT;
	struct FVector                                CutPos;
	struct FVector                                PrevLoc;
	struct FVector                                PrecLoc2;
	struct FVector                                PrevOffset;
	struct FVector                                PrevOffset2;
	struct FVector                                GridCenter;
	class UTextureRenderTarget2D*                 TempRT;
	class UTextureRenderTarget2D*                 ForcesRT;
	double                                        ApplyForces;
	class ALandscapeWaterInfo_C*                  LandscapeWaterInfo;
	int32                                         Renders_Per_Frame;
	bool                                          Show_Cross_Section;
	bool                                          Perf_Test_Mode;
	uint8                                         Pad_3E6[0x2];
	class UTextureRenderTarget2D*                 PerfRT;
	TArray<struct FFluidForceImpulsePerInstanceData> ImpulseForces;
	TMap<class UActorComponent*, struct FFluidForceDynamicPerInstanceData> DynamicForces;
	TMap<class UMaterialInterface*, class UMaterialInstanceDynamic*> ForceParentAndMIDMap;
	bool                                          Show_Simulation_Mesh;
	uint8                                         Pad_4A1[0x7];
	class UStaticMeshComponent*                   Fluid_Display_Mesh;
	class UStaticMeshComponent*                   Cross_Section_Mesh;
	double                                        FluidSizeSquared;
	bool                                          LocalPawnRef;
	bool                                          Debug_Text;
	uint8                                         Pad_4C2[0x2];
	int32                                         Pawn_Check_Every_N_Frames;
	TMap<class UActorComponent*, struct FFluidForceDynamicPerInstanceData> ProjectileForces;
	bool                                          Follow_Player_;
	uint8                                         Pad_519[0x3];
	int32                                         Frames_Since_Last_Active_Force;
	bool                                          Use_Terrain_Water_System;
	uint8                                         Pad_521[0x7];
	class UMaterialInstanceDynamic*               PhysicsForceMID;
	bool                                          Add_Physics_Forces;
	uint8                                         Pad_531[0x7];
	class UTexture*                               WaterVelocityTexture;
	bool                                          UpdateForcesInFixedTimeStep;
	bool                                          UpdateSimInFixedTimeStep;
	bool                                          UpdateNormalInFixedTimeStep;
	bool                                          ShowDebugWaterPlane;
	uint8                                         Pad_544[0x4];
	class UMaterialInstanceDynamic*               DebugWaterPlaneMID;
	class UTextureRenderTarget2D*                 DebugRippleRT1;
	class UTextureRenderTarget2D*                 DebugRippleRT2;
	class UTextureRenderTarget2D*                 DebugRippleRTCurrent;

public:
	void Allocate_RTs();
	void Apply_Fluid_Force_Impulse(const struct FFluidForceImpulse& Impulse_Settings);
	void Clear_RTs();
	void Clear_Sim_from_Waterbody_MIDs();
	void Convert_Force_Position(const struct FVector& Force_Location, double Sine_Bob, struct FVector* UV_Location);
	void Cycle_Render_Targets(class UTextureRenderTarget2D** Current_Target);
	void CycleDebugRenderTargets();
	void Draw_Dynamic_Force(class UCanvas*& Canvas, struct FVector2D& Canvas_Size, struct FFluidForceDynamicPerInstanceData& Dynamic_Force_Settings);
	void Draw_Impulse_Force(class UCanvas* Canvas, const struct FVector2D& Canvas_Size, const struct FFluidForceImpulsePerInstanceData& Impulse_Settings);
	void ExecuteUbergraph_BP_FluidSim_01(int32 EntryPoint);
	void FluidGridDebug();
	void Get_Force_MID(class UMaterialInterface*& Parent, class UMaterialInstanceDynamic** Mid);
	void Get_Frames_Since_Last_Active_Forces();
	void Get_LandscapeWaterInfo();
	void GetLocalPawn(class APawn** Pawn);
	void GetPlayerPawnForces();
	void GridMovement();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ReCheckScalability();
	void Register_Dynamic_Force(const struct FFluidForceDynamic& Dynamic_Fluid_Force, class USceneComponent* Tracked_Component, double WaterLevel);
	void Register_Projectile_Force(const struct FFluidForceDynamic& Dynamic_Fluid_Force, class USceneComponent* Tracked_Component);
	void Release_RTs();
	void Remove_Dynamic_Force(class UActorComponent* Component);
	void Remove_Projectile_Force(class UActorComponent* Component);
	void Set_Waterbody_MID_Params();
	void SetAllSimParamsInFixedTimeStep(bool Bool);
	void SetDebugForcesRT();
	void SetDebugNormalRT();
	void SetDebugRippleRT1();
	void SetDebugRippleRT2();
	void SetDebugRippleRTCurrent();
	void SetNormalInFixedTimeStep(bool Bool);
	void SetShowDebugWaterPlane(bool IsVisible);
	void SetSimInFixedTimeStep(bool Bool);
	void SetUpdateForcesInFixedTimeStep(bool Bool);
	void SetupDisplayMIDs();
	void SetupSimMIDs();
	void Update_Dynamic_Forces();
	void Update_Impulse_Lifetimes();
	void UserConstructionScript();
	void Validate_RTs(bool* RTs_All_Valid);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FluidSim_01_C">();
	}
	static class ABP_FluidSim_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FluidSim_01_C>();
	}
};
static_assert(alignof(ABP_FluidSim_01_C) == 0x000008, "Wrong alignment on ABP_FluidSim_01_C");
static_assert(sizeof(ABP_FluidSim_01_C) == 0x000568, "Wrong size on ABP_FluidSim_01_C");
static_assert(offsetof(ABP_FluidSim_01_C, UberGraphFrame) == 0x000288, "Member 'ABP_FluidSim_01_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, DebugPlane) == 0x000290, "Member 'ABP_FluidSim_01_C::DebugPlane' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, DefaultSceneRoot) == 0x000298, "Member 'ABP_FluidSim_01_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, RippleSimMID) == 0x0002A0, "Member 'ABP_FluidSim_01_C::RippleSimMID' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, RenderNormalsMID) == 0x0002A8, "Member 'ABP_FluidSim_01_C::RenderNormalsMID' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, DisplayMID) == 0x0002B0, "Member 'ABP_FluidSim_01_C::DisplayMID' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, DisplayBottomMID) == 0x0002B8, "Member 'ABP_FluidSim_01_C::DisplayBottomMID' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, CrossSectionMID) == 0x0002C0, "Member 'ABP_FluidSim_01_C::CrossSectionMID' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, RippleRTs) == 0x0002C8, "Member 'ABP_FluidSim_01_C::RippleRTs' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, Display_Material) == 0x0002D8, "Member 'ABP_FluidSim_01_C::Display_Material' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, Virtual_FPS) == 0x0002E0, "Member 'ABP_FluidSim_01_C::Virtual_FPS' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, Passes) == 0x0002E8, "Member 'ABP_FluidSim_01_C::Passes' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, TimeAccumulator) == 0x0002F0, "Member 'ABP_FluidSim_01_C::TimeAccumulator' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, FixedStep) == 0x0002F8, "Member 'ABP_FluidSim_01_C::FixedStep' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, Enabled) == 0x000300, "Member 'ABP_FluidSim_01_C::Enabled' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, Fluid_Size) == 0x000308, "Member 'ABP_FluidSim_01_C::Fluid_Size' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, Resolution) == 0x000310, "Member 'ABP_FluidSim_01_C::Resolution' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, Boundary_Condition) == 0x000314, "Member 'ABP_FluidSim_01_C::Boundary_Condition' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, Travel_Speed) == 0x000318, "Member 'ABP_FluidSim_01_C::Travel_Speed' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, Damping) == 0x000320, "Member 'ABP_FluidSim_01_C::Damping' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, NormalRT) == 0x000328, "Member 'ABP_FluidSim_01_C::NormalRT' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, CutPos) == 0x000330, "Member 'ABP_FluidSim_01_C::CutPos' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, PrevLoc) == 0x000348, "Member 'ABP_FluidSim_01_C::PrevLoc' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, PrecLoc2) == 0x000360, "Member 'ABP_FluidSim_01_C::PrecLoc2' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, PrevOffset) == 0x000378, "Member 'ABP_FluidSim_01_C::PrevOffset' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, PrevOffset2) == 0x000390, "Member 'ABP_FluidSim_01_C::PrevOffset2' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, GridCenter) == 0x0003A8, "Member 'ABP_FluidSim_01_C::GridCenter' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, TempRT) == 0x0003C0, "Member 'ABP_FluidSim_01_C::TempRT' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, ForcesRT) == 0x0003C8, "Member 'ABP_FluidSim_01_C::ForcesRT' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, ApplyForces) == 0x0003D0, "Member 'ABP_FluidSim_01_C::ApplyForces' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, LandscapeWaterInfo) == 0x0003D8, "Member 'ABP_FluidSim_01_C::LandscapeWaterInfo' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, Renders_Per_Frame) == 0x0003E0, "Member 'ABP_FluidSim_01_C::Renders_Per_Frame' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, Show_Cross_Section) == 0x0003E4, "Member 'ABP_FluidSim_01_C::Show_Cross_Section' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, Perf_Test_Mode) == 0x0003E5, "Member 'ABP_FluidSim_01_C::Perf_Test_Mode' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, PerfRT) == 0x0003E8, "Member 'ABP_FluidSim_01_C::PerfRT' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, ImpulseForces) == 0x0003F0, "Member 'ABP_FluidSim_01_C::ImpulseForces' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, DynamicForces) == 0x000400, "Member 'ABP_FluidSim_01_C::DynamicForces' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, ForceParentAndMIDMap) == 0x000450, "Member 'ABP_FluidSim_01_C::ForceParentAndMIDMap' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, Show_Simulation_Mesh) == 0x0004A0, "Member 'ABP_FluidSim_01_C::Show_Simulation_Mesh' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, Fluid_Display_Mesh) == 0x0004A8, "Member 'ABP_FluidSim_01_C::Fluid_Display_Mesh' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, Cross_Section_Mesh) == 0x0004B0, "Member 'ABP_FluidSim_01_C::Cross_Section_Mesh' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, FluidSizeSquared) == 0x0004B8, "Member 'ABP_FluidSim_01_C::FluidSizeSquared' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, LocalPawnRef) == 0x0004C0, "Member 'ABP_FluidSim_01_C::LocalPawnRef' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, Debug_Text) == 0x0004C1, "Member 'ABP_FluidSim_01_C::Debug_Text' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, Pawn_Check_Every_N_Frames) == 0x0004C4, "Member 'ABP_FluidSim_01_C::Pawn_Check_Every_N_Frames' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, ProjectileForces) == 0x0004C8, "Member 'ABP_FluidSim_01_C::ProjectileForces' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, Follow_Player_) == 0x000518, "Member 'ABP_FluidSim_01_C::Follow_Player_' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, Frames_Since_Last_Active_Force) == 0x00051C, "Member 'ABP_FluidSim_01_C::Frames_Since_Last_Active_Force' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, Use_Terrain_Water_System) == 0x000520, "Member 'ABP_FluidSim_01_C::Use_Terrain_Water_System' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, PhysicsForceMID) == 0x000528, "Member 'ABP_FluidSim_01_C::PhysicsForceMID' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, Add_Physics_Forces) == 0x000530, "Member 'ABP_FluidSim_01_C::Add_Physics_Forces' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, WaterVelocityTexture) == 0x000538, "Member 'ABP_FluidSim_01_C::WaterVelocityTexture' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, UpdateForcesInFixedTimeStep) == 0x000540, "Member 'ABP_FluidSim_01_C::UpdateForcesInFixedTimeStep' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, UpdateSimInFixedTimeStep) == 0x000541, "Member 'ABP_FluidSim_01_C::UpdateSimInFixedTimeStep' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, UpdateNormalInFixedTimeStep) == 0x000542, "Member 'ABP_FluidSim_01_C::UpdateNormalInFixedTimeStep' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, ShowDebugWaterPlane) == 0x000543, "Member 'ABP_FluidSim_01_C::ShowDebugWaterPlane' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, DebugWaterPlaneMID) == 0x000548, "Member 'ABP_FluidSim_01_C::DebugWaterPlaneMID' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, DebugRippleRT1) == 0x000550, "Member 'ABP_FluidSim_01_C::DebugRippleRT1' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, DebugRippleRT2) == 0x000558, "Member 'ABP_FluidSim_01_C::DebugRippleRT2' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_01_C, DebugRippleRTCurrent) == 0x000560, "Member 'ABP_FluidSim_01_C::DebugRippleRTCurrent' has a wrong offset!");

}
