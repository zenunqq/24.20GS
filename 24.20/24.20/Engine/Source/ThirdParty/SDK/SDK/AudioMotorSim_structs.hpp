#pragma once

#include "Basic.hpp"

namespace SDK
{

struct FAudioMotorSimInputContext final
{
public:
	float                                         DeltaTime;
	float                                         Speed;
	float                                         ForwardSpeed;
	float                                         SideSpeed;
	float                                         UpSpeed;
	float                                         Throttle;
	float                                         Brake;
	float                                         SurfaceFrictionModifier;
	float                                         MotorFrictionModifier;
	float                                         Boost;
	bool                                          bDriving;
	bool                                          bGrounded;
	bool                                          bCanShift;
	bool                                          bClutchEngaged;
};
static_assert(alignof(FAudioMotorSimInputContext) == 0x000004, "Wrong alignment on FAudioMotorSimInputContext");
static_assert(sizeof(FAudioMotorSimInputContext) == 0x00002C, "Wrong size on FAudioMotorSimInputContext");
static_assert(offsetof(FAudioMotorSimInputContext, DeltaTime) == 0x000000, "Member 'FAudioMotorSimInputContext::DeltaTime' has a wrong offset!");
static_assert(offsetof(FAudioMotorSimInputContext, Speed) == 0x000004, "Member 'FAudioMotorSimInputContext::Speed' has a wrong offset!");
static_assert(offsetof(FAudioMotorSimInputContext, ForwardSpeed) == 0x000008, "Member 'FAudioMotorSimInputContext::ForwardSpeed' has a wrong offset!");
static_assert(offsetof(FAudioMotorSimInputContext, SideSpeed) == 0x00000C, "Member 'FAudioMotorSimInputContext::SideSpeed' has a wrong offset!");
static_assert(offsetof(FAudioMotorSimInputContext, UpSpeed) == 0x000010, "Member 'FAudioMotorSimInputContext::UpSpeed' has a wrong offset!");
static_assert(offsetof(FAudioMotorSimInputContext, Throttle) == 0x000014, "Member 'FAudioMotorSimInputContext::Throttle' has a wrong offset!");
static_assert(offsetof(FAudioMotorSimInputContext, Brake) == 0x000018, "Member 'FAudioMotorSimInputContext::Brake' has a wrong offset!");
static_assert(offsetof(FAudioMotorSimInputContext, SurfaceFrictionModifier) == 0x00001C, "Member 'FAudioMotorSimInputContext::SurfaceFrictionModifier' has a wrong offset!");
static_assert(offsetof(FAudioMotorSimInputContext, MotorFrictionModifier) == 0x000020, "Member 'FAudioMotorSimInputContext::MotorFrictionModifier' has a wrong offset!");
static_assert(offsetof(FAudioMotorSimInputContext, Boost) == 0x000024, "Member 'FAudioMotorSimInputContext::Boost' has a wrong offset!");
static_assert(offsetof(FAudioMotorSimInputContext, bDriving) == 0x000028, "Member 'FAudioMotorSimInputContext::bDriving' has a wrong offset!");
static_assert(offsetof(FAudioMotorSimInputContext, bGrounded) == 0x000029, "Member 'FAudioMotorSimInputContext::bGrounded' has a wrong offset!");
static_assert(offsetof(FAudioMotorSimInputContext, bCanShift) == 0x00002A, "Member 'FAudioMotorSimInputContext::bCanShift' has a wrong offset!");
static_assert(offsetof(FAudioMotorSimInputContext, bClutchEngaged) == 0x00002B, "Member 'FAudioMotorSimInputContext::bClutchEngaged' has a wrong offset!");

struct FAudioMotorSimRuntimeContext final
{
public:
	bool                                          bShifting;
	uint8                                         Pad_1[0x3];
	int32                                         Gear;
	float                                         RPM;
	float                                         Volume;
	float                                         Pitch;
};
static_assert(alignof(FAudioMotorSimRuntimeContext) == 0x000004, "Wrong alignment on FAudioMotorSimRuntimeContext");
static_assert(sizeof(FAudioMotorSimRuntimeContext) == 0x000014, "Wrong size on FAudioMotorSimRuntimeContext");
static_assert(offsetof(FAudioMotorSimRuntimeContext, bShifting) == 0x000000, "Member 'FAudioMotorSimRuntimeContext::bShifting' has a wrong offset!");
static_assert(offsetof(FAudioMotorSimRuntimeContext, Gear) == 0x000004, "Member 'FAudioMotorSimRuntimeContext::Gear' has a wrong offset!");
static_assert(offsetof(FAudioMotorSimRuntimeContext, RPM) == 0x000008, "Member 'FAudioMotorSimRuntimeContext::RPM' has a wrong offset!");
static_assert(offsetof(FAudioMotorSimRuntimeContext, Volume) == 0x00000C, "Member 'FAudioMotorSimRuntimeContext::Volume' has a wrong offset!");
static_assert(offsetof(FAudioMotorSimRuntimeContext, Pitch) == 0x000010, "Member 'FAudioMotorSimRuntimeContext::Pitch' has a wrong offset!");

struct FMotorSimEntry final
{
public:
	TScriptInterface<class IAudioMotorSim>        Sim;
	int32                                         SortOrder;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(FMotorSimEntry) == 0x000008, "Wrong alignment on FMotorSimEntry");
static_assert(sizeof(FMotorSimEntry) == 0x000018, "Wrong size on FMotorSimEntry");
static_assert(offsetof(FMotorSimEntry, Sim) == 0x000000, "Member 'FMotorSimEntry::Sim' has a wrong offset!");
static_assert(offsetof(FMotorSimEntry, SortOrder) == 0x000010, "Member 'FMotorSimEntry::SortOrder' has a wrong offset!");

}
