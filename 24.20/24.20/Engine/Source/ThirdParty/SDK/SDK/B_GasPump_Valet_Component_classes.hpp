#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ModularGameplay_classes.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class UB_GasPump_Valet_Component_C final : public UGameFrameworkComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class FName                                   Gas_Pump_Icon_Enabled;
	uint8                                         Pad_AC[0x4];
	class UClass*                                 Gas_Pump_IndicatorManager_Class;
	class UValet_GasPumpIndicatorManagerV2_C*     Gas_Pump_IndicatorManager;

public:
	void ExecuteUbergraph_B_GasPump_Valet_Component(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_GasPump_Valet_Component_C">();
	}
	static class UB_GasPump_Valet_Component_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_GasPump_Valet_Component_C>();
	}
};
static_assert(alignof(UB_GasPump_Valet_Component_C) == 0x000008, "Wrong alignment on UB_GasPump_Valet_Component_C");
static_assert(sizeof(UB_GasPump_Valet_Component_C) == 0x0000C0, "Wrong size on UB_GasPump_Valet_Component_C");
static_assert(offsetof(UB_GasPump_Valet_Component_C, UberGraphFrame) == 0x0000A0, "Member 'UB_GasPump_Valet_Component_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UB_GasPump_Valet_Component_C, Gas_Pump_Icon_Enabled) == 0x0000A8, "Member 'UB_GasPump_Valet_Component_C::Gas_Pump_Icon_Enabled' has a wrong offset!");
static_assert(offsetof(UB_GasPump_Valet_Component_C, Gas_Pump_IndicatorManager_Class) == 0x0000B0, "Member 'UB_GasPump_Valet_Component_C::Gas_Pump_IndicatorManager_Class' has a wrong offset!");
static_assert(offsetof(UB_GasPump_Valet_Component_C, Gas_Pump_IndicatorManager) == 0x0000B8, "Member 'UB_GasPump_Valet_Component_C::Gas_Pump_IndicatorManager' has a wrong offset!");

}
