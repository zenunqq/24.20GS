#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class ABP_ProjectileTrajectory_C : public AFortProjectileTrajectory
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UStaticMeshComponent*                   InvalidTarget;
	class UStaticMeshComponent*                   Target;
	int32                                         MaxMeshCount;
	uint8                                         Pad_2CC[0x4];
	class UMaterialInstanceDynamic*               SplineMID;
	double                                        SplineFadeDistance;
	double                                        SplineFadeStartDistance;
	class UObject*                                TrajectoryOwner;
	bool                                          ShouldUpdate;
	uint8                                         Pad_2F1[0x7];
	class UMaterialInstanceDynamic*               InvalidSplineMID;
	bool                                          bIsTrajectoryValid;

public:
	void ExecuteUbergraph_BP_ProjectileTrajectory(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetShouldUpdateFromOwner(bool ShouldUpdate_0, class UObject* Owner_0);
	void SetTrajectorySpline(const TArray<struct FVector>& SplinePoints, const TArray<struct FVector>& SplineTangents);
	void SetTrajectoryValid(bool bIsTrajectoryValid_0);
	void UpdateFromTrajectoryOwner();
	void UpdateTargetMeshVisibility();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ProjectileTrajectory_C">();
	}
	static class ABP_ProjectileTrajectory_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ProjectileTrajectory_C>();
	}
};
static_assert(alignof(ABP_ProjectileTrajectory_C) == 0x000008, "Wrong alignment on ABP_ProjectileTrajectory_C");
static_assert(sizeof(ABP_ProjectileTrajectory_C) == 0x000308, "Wrong size on ABP_ProjectileTrajectory_C");
static_assert(offsetof(ABP_ProjectileTrajectory_C, UberGraphFrame) == 0x0002B0, "Member 'ABP_ProjectileTrajectory_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileTrajectory_C, InvalidTarget) == 0x0002B8, "Member 'ABP_ProjectileTrajectory_C::InvalidTarget' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileTrajectory_C, Target) == 0x0002C0, "Member 'ABP_ProjectileTrajectory_C::Target' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileTrajectory_C, MaxMeshCount) == 0x0002C8, "Member 'ABP_ProjectileTrajectory_C::MaxMeshCount' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileTrajectory_C, SplineMID) == 0x0002D0, "Member 'ABP_ProjectileTrajectory_C::SplineMID' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileTrajectory_C, SplineFadeDistance) == 0x0002D8, "Member 'ABP_ProjectileTrajectory_C::SplineFadeDistance' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileTrajectory_C, SplineFadeStartDistance) == 0x0002E0, "Member 'ABP_ProjectileTrajectory_C::SplineFadeStartDistance' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileTrajectory_C, TrajectoryOwner) == 0x0002E8, "Member 'ABP_ProjectileTrajectory_C::TrajectoryOwner' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileTrajectory_C, ShouldUpdate) == 0x0002F0, "Member 'ABP_ProjectileTrajectory_C::ShouldUpdate' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileTrajectory_C, InvalidSplineMID) == 0x0002F8, "Member 'ABP_ProjectileTrajectory_C::InvalidSplineMID' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileTrajectory_C, bIsTrajectoryValid) == 0x000300, "Member 'ABP_ProjectileTrajectory_C::bIsTrajectoryValid' has a wrong offset!");

}
