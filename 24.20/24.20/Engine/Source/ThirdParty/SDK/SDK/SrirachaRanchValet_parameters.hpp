#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct StreamingRadioPlayerComponent_Valet_VehicleExploded final
{
public:
	const class AController*                      LastDamageInstigator;
	class AFortAthenaVehicle*                     Vehicle;
};
static_assert(alignof(StreamingRadioPlayerComponent_Valet_VehicleExploded) == 0x000008, "Wrong alignment on StreamingRadioPlayerComponent_Valet_VehicleExploded");
static_assert(sizeof(StreamingRadioPlayerComponent_Valet_VehicleExploded) == 0x000010, "Wrong size on StreamingRadioPlayerComponent_Valet_VehicleExploded");
static_assert(offsetof(StreamingRadioPlayerComponent_Valet_VehicleExploded, LastDamageInstigator) == 0x000000, "Member 'StreamingRadioPlayerComponent_Valet_VehicleExploded::LastDamageInstigator' has a wrong offset!");
static_assert(offsetof(StreamingRadioPlayerComponent_Valet_VehicleExploded, Vehicle) == 0x000008, "Member 'StreamingRadioPlayerComponent_Valet_VehicleExploded::Vehicle' has a wrong offset!");

}
