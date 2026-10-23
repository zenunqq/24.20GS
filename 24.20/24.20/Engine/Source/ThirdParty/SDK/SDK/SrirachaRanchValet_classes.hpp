#pragma once

#include "Basic.hpp"

#include "SrirachaRanch_classes.hpp"

namespace SDK
{

class UStreamingRadioPlayerComponent_Valet : public UStreamingRadioPlayerComponent
{
public:
	void VehicleExploded(const class AController* LastDamageInstigator, class AFortAthenaVehicle* Vehicle);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StreamingRadioPlayerComponent_Valet">();
	}
	static class UStreamingRadioPlayerComponent_Valet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStreamingRadioPlayerComponent_Valet>();
	}
};
static_assert(alignof(UStreamingRadioPlayerComponent_Valet) == 0x000008, "Wrong alignment on UStreamingRadioPlayerComponent_Valet");
static_assert(sizeof(UStreamingRadioPlayerComponent_Valet) == 0x000450, "Wrong size on UStreamingRadioPlayerComponent_Valet");

}
