#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UValet_GasPumpIndicatorManagerV2_C final : public UFortGameStateComponent
{
public:
	class UClass*                                 FuelIndicatorClass;
	TArray<class UB_GasPump_Valet_Component_C*>   GasPumpList;
	TArray<class AFuelIndicator_C*>               FuelIndicatorList;
	double                                        FuelIndicatorRangeSquared;

public:
	void AddGasPump(class UB_GasPump_Valet_Component_C* Gas_Pump);
	void RemoveGasPump(class UB_GasPump_Valet_Component_C* Gas_Pump);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Valet_GasPumpIndicatorManagerV2_C">();
	}
	static class UValet_GasPumpIndicatorManagerV2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UValet_GasPumpIndicatorManagerV2_C>();
	}
};
static_assert(alignof(UValet_GasPumpIndicatorManagerV2_C) == 0x000008, "Wrong alignment on UValet_GasPumpIndicatorManagerV2_C");
static_assert(sizeof(UValet_GasPumpIndicatorManagerV2_C) == 0x0000D0, "Wrong size on UValet_GasPumpIndicatorManagerV2_C");
static_assert(offsetof(UValet_GasPumpIndicatorManagerV2_C, FuelIndicatorClass) == 0x0000A0, "Member 'UValet_GasPumpIndicatorManagerV2_C::FuelIndicatorClass' has a wrong offset!");
static_assert(offsetof(UValet_GasPumpIndicatorManagerV2_C, GasPumpList) == 0x0000A8, "Member 'UValet_GasPumpIndicatorManagerV2_C::GasPumpList' has a wrong offset!");
static_assert(offsetof(UValet_GasPumpIndicatorManagerV2_C, FuelIndicatorList) == 0x0000B8, "Member 'UValet_GasPumpIndicatorManagerV2_C::FuelIndicatorList' has a wrong offset!");
static_assert(offsetof(UValet_GasPumpIndicatorManagerV2_C, FuelIndicatorRangeSquared) == 0x0000C8, "Member 'UValet_GasPumpIndicatorManagerV2_C::FuelIndicatorRangeSquared' has a wrong offset!");

}
