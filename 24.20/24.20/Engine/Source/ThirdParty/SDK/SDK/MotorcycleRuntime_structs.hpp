#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EFortMotorcycleAirTrickType : uint8
{
	None                                     = 0,
	Default                                  = 1,
	Left                                     = 2,
	Right                                    = 3,
	EFortMotorcycleAirTrickType_MAX          = 4,
};

enum class EFortMotorcycleWheelTraceMode : uint8
{
	None                                     = 0,
	BoxSweep                                 = 1,
	LineTrace                                = 2,
	EFortMotorcycleWheelTraceMode_MAX        = 3,
};

struct FMotorcycleWheel final
{
public:
	class FName                                   WheelSocket;
	float                                         Radius;
	float                                         TireWidth;
	float                                         SpringLength;
	float                                         WheelieMinSpringLength;
	float                                         SpringStiff;
	float                                         SpringDamp;
	float                                         PoppedTireSpringLength;
	float                                         PoppedTireSpringStiff;
	float                                         PoppedTireSpringDamp;
	float                                         PowerslideSpringStiff;
	float                                         PowerslideSpringDamp;
	float                                         WheelieSpringStiff;
	float                                         WheelieSpringDamp;
	EFortMotorcycleWheelTraceMode                 WheelTraceMode;
	uint8                                         Pad_39[0x3];
};
static_assert(alignof(FMotorcycleWheel) == 0x000004, "Wrong alignment on FMotorcycleWheel");
static_assert(sizeof(FMotorcycleWheel) == 0x00003C, "Wrong size on FMotorcycleWheel");
static_assert(offsetof(FMotorcycleWheel, WheelSocket) == 0x000000, "Member 'FMotorcycleWheel::WheelSocket' has a wrong offset!");
static_assert(offsetof(FMotorcycleWheel, Radius) == 0x000004, "Member 'FMotorcycleWheel::Radius' has a wrong offset!");
static_assert(offsetof(FMotorcycleWheel, TireWidth) == 0x000008, "Member 'FMotorcycleWheel::TireWidth' has a wrong offset!");
static_assert(offsetof(FMotorcycleWheel, SpringLength) == 0x00000C, "Member 'FMotorcycleWheel::SpringLength' has a wrong offset!");
static_assert(offsetof(FMotorcycleWheel, WheelieMinSpringLength) == 0x000010, "Member 'FMotorcycleWheel::WheelieMinSpringLength' has a wrong offset!");
static_assert(offsetof(FMotorcycleWheel, SpringStiff) == 0x000014, "Member 'FMotorcycleWheel::SpringStiff' has a wrong offset!");
static_assert(offsetof(FMotorcycleWheel, SpringDamp) == 0x000018, "Member 'FMotorcycleWheel::SpringDamp' has a wrong offset!");
static_assert(offsetof(FMotorcycleWheel, PoppedTireSpringLength) == 0x00001C, "Member 'FMotorcycleWheel::PoppedTireSpringLength' has a wrong offset!");
static_assert(offsetof(FMotorcycleWheel, PoppedTireSpringStiff) == 0x000020, "Member 'FMotorcycleWheel::PoppedTireSpringStiff' has a wrong offset!");
static_assert(offsetof(FMotorcycleWheel, PoppedTireSpringDamp) == 0x000024, "Member 'FMotorcycleWheel::PoppedTireSpringDamp' has a wrong offset!");
static_assert(offsetof(FMotorcycleWheel, PowerslideSpringStiff) == 0x000028, "Member 'FMotorcycleWheel::PowerslideSpringStiff' has a wrong offset!");
static_assert(offsetof(FMotorcycleWheel, PowerslideSpringDamp) == 0x00002C, "Member 'FMotorcycleWheel::PowerslideSpringDamp' has a wrong offset!");
static_assert(offsetof(FMotorcycleWheel, WheelieSpringStiff) == 0x000030, "Member 'FMotorcycleWheel::WheelieSpringStiff' has a wrong offset!");
static_assert(offsetof(FMotorcycleWheel, WheelieSpringDamp) == 0x000034, "Member 'FMotorcycleWheel::WheelieSpringDamp' has a wrong offset!");
static_assert(offsetof(FMotorcycleWheel, WheelTraceMode) == 0x000038, "Member 'FMotorcycleWheel::WheelTraceMode' has a wrong offset!");

}
