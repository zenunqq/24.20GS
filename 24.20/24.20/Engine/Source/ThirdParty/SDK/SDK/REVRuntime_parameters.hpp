#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct REVComponent_SetRevModel final
{
public:
	class UREVModel*                              InModel;
};
static_assert(alignof(REVComponent_SetRevModel) == 0x000008, "Wrong alignment on REVComponent_SetRevModel");
static_assert(sizeof(REVComponent_SetRevModel) == 0x000008, "Wrong size on REVComponent_SetRevModel");
static_assert(offsetof(REVComponent_SetRevModel, InModel) == 0x000000, "Member 'REVComponent_SetRevModel::InModel' has a wrong offset!");

struct REVComponent_SetSettings final
{
public:
	class URevSettings*                           InSettings;
};
static_assert(alignof(REVComponent_SetSettings) == 0x000008, "Wrong alignment on REVComponent_SetSettings");
static_assert(sizeof(REVComponent_SetSettings) == 0x000008, "Wrong size on REVComponent_SetSettings");
static_assert(offsetof(REVComponent_SetSettings, InSettings) == 0x000000, "Member 'REVComponent_SetSettings::InSettings' has a wrong offset!");

struct REVComponent_UpdateParameters final
{
public:
	float                                         InPitch;
	float                                         InRPM;
	float                                         InThrottle;
	float                                         InVelocity;
	int32                                         InGear;
	bool                                          bInEnableShifting;
	uint8                                         Pad_15[0x3];
};
static_assert(alignof(REVComponent_UpdateParameters) == 0x000004, "Wrong alignment on REVComponent_UpdateParameters");
static_assert(sizeof(REVComponent_UpdateParameters) == 0x000018, "Wrong size on REVComponent_UpdateParameters");
static_assert(offsetof(REVComponent_UpdateParameters, InPitch) == 0x000000, "Member 'REVComponent_UpdateParameters::InPitch' has a wrong offset!");
static_assert(offsetof(REVComponent_UpdateParameters, InRPM) == 0x000004, "Member 'REVComponent_UpdateParameters::InRPM' has a wrong offset!");
static_assert(offsetof(REVComponent_UpdateParameters, InThrottle) == 0x000008, "Member 'REVComponent_UpdateParameters::InThrottle' has a wrong offset!");
static_assert(offsetof(REVComponent_UpdateParameters, InVelocity) == 0x00000C, "Member 'REVComponent_UpdateParameters::InVelocity' has a wrong offset!");
static_assert(offsetof(REVComponent_UpdateParameters, InGear) == 0x000010, "Member 'REVComponent_UpdateParameters::InGear' has a wrong offset!");
static_assert(offsetof(REVComponent_UpdateParameters, bInEnableShifting) == 0x000014, "Member 'REVComponent_UpdateParameters::bInEnableShifting' has a wrong offset!");

}
