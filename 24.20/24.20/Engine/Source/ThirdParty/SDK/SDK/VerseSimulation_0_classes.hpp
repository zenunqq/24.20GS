#pragma once

#include "Basic.hpp"

#include "VerseEngine_0_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "VerseNative_0_classes.hpp"
#include "VerseSimulation_classes.hpp"
#include "EntityActor_classes.hpp"

namespace SDK
{

class USimulation_player_component : public UEntityActorPlayerComponent
{
public:
	FVerseFunctionProperty_                       __verse_0x2959FF1C__L_2fVerse_2eorg_2fSimulation_2fplayer__component_N_RGetHandle;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	class USimulation_player* _L_2fVerse_2eorg_2fSimulation_2fplayer__component_N_RGetHandle(const struct VerseSimulation_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Simulation_player_component">();
	}
	static class USimulation_player_component* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimulation_player_component>();
	}
};
static_assert(alignof(USimulation_player_component) == 0x000008, "Wrong alignment on USimulation_player_component");
static_assert(sizeof(USimulation_player_component) == 0x0000F8, "Wrong size on USimulation_player_component");
static_assert(offsetof(USimulation_player_component, __verse_0x2959FF1C__L_2fVerse_2eorg_2fSimulation_2fplayer__component_N_RGetHandle) == 0x0000E8, "Member 'USimulation_player_component::__verse_0x2959FF1C__L_2fVerse_2eorg_2fSimulation_2fplayer__component_N_RGetHandle' has a wrong offset!");

class VerseSimulation_0::U_SolarisSignatureFunctionOuter final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseClass VerseSimulation.$SolarisSignatureFunctionOuter", true>();
	}
	static class VerseSimulation_0::U_SolarisSignatureFunctionOuter* GetDefaultObj()
	{
		return GetDefaultObjImpl<VerseSimulation_0::U_SolarisSignatureFunctionOuter>();
	}
};
static_assert(alignof(VerseSimulation_0::U_SolarisSignatureFunctionOuter) == 0x000008, "Wrong alignment on VerseSimulation_0::U_SolarisSignatureFunctionOuter");
static_assert(sizeof(VerseSimulation_0::U_SolarisSignatureFunctionOuter) == 0x000028, "Wrong size on VerseSimulation_0::U_SolarisSignatureFunctionOuter");

class VerseSimulation_0::USimulation final : public UObject
{
public:
	static FOptionProperty_ _L_2fVerse_2eorg_2fSimulation_N_RGetComponentOfTypeForPlayer_L_Nint_M_Nany_R(const struct VerseSimulation_0::Ftuple_Lint_Many_R& __verse_0xB2CDDD72_Argument);
	static FOptionProperty_ _L_2fVerse_2eorg_2fSimulation_N_RGetComponentOfTypeForPlayer_L_Nplayer__component_M_Nany_R(const struct Ftuple_Lplayer__component_Many_R& __verse_0xB2CDDD72_Argument);
	static FOptionProperty_ _L_2fVerse_2eorg_2fSimulation_N_RGetOrCreateComponentOfTypeForPlayer_L_Nint_M_Nany_R(const struct VerseSimulation_0::Ftuple_Lint_Many_R& __verse_0xB2CDDD72_Argument);
	static FOptionProperty_ _L_2fVerse_2eorg_2fSimulation_N_RGetOrCreateComponentOfTypeForPlayer_L_Nplayer__component_M_Nany_R(const struct Ftuple_Lplayer__component_Many_R& __verse_0xB2CDDD72_Argument);
	static FOptionProperty_ _L_2fVerse_2eorg_2fSimulation_N_RGetPlayerComponentByIndex_L_Nint_R(int64 __verse_0xB2CDDD72_Argument);
	static double _L_2fVerse_2eorg_2fSimulation_N_RGetSimulationElapsedTime(const struct VerseSimulation_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	static class UConcurrency_task* Sleep_L_Nfloat_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, double __verse_0xB2CDDD72_Argument);

	void _InitCDO();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseClass VerseSimulation.Simulation", true>();
	}
	static class VerseSimulation_0::USimulation* GetDefaultObj()
	{
		return GetDefaultObjImpl<VerseSimulation_0::USimulation>();
	}
};
static_assert(alignof(VerseSimulation_0::USimulation) == 0x000008, "Wrong alignment on VerseSimulation_0::USimulation");
static_assert(sizeof(VerseSimulation_0::USimulation) == 0x000028, "Wrong size on VerseSimulation_0::USimulation");

class USimulation_player_multicast_delegate final : public UVerseEngine_multicast_delegate
{
public:
	FVerseFunctionProperty_                       __verse_0xC9C8F929__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R_Simulation_player_multicast_delegate;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Simulation_player_multicast_delegate">();
	}
	static class USimulation_player_multicast_delegate* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimulation_player_multicast_delegate>();
	}
};
static_assert(alignof(USimulation_player_multicast_delegate) == 0x000008, "Wrong alignment on USimulation_player_multicast_delegate");
static_assert(sizeof(USimulation_player_multicast_delegate) == 0x0000A8, "Wrong size on USimulation_player_multicast_delegate");
static_assert(offsetof(USimulation_player_multicast_delegate, __verse_0xC9C8F929__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R_Simulation_player_multicast_delegate) == 0x000098, "Member 'USimulation_player_multicast_delegate::__verse_0xC9C8F929__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R_Simulation_player_multicast_delegate' has a wrong offset!");

class USimulation_player_array_helper final : public UObject
{
public:
	static int64 _L_2fVerse_2eorg_2fSimulation_2fplayer__array__helper_N_RTestFunc_L_Nint_R(int64 __verse_0xB2CDDD72_Argument);

	void _InitCDO();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Simulation_player_array_helper">();
	}
	static class USimulation_player_array_helper* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimulation_player_array_helper>();
	}
};
static_assert(alignof(USimulation_player_array_helper) == 0x000008, "Wrong alignment on USimulation_player_array_helper");
static_assert(sizeof(USimulation_player_array_helper) == 0x000028, "Wrong size on USimulation_player_array_helper");

class USimulation_agent : public UVerseAgent
{
public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Simulation_agent">();
	}
	static class USimulation_agent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimulation_agent>();
	}
};
static_assert(alignof(USimulation_agent) == 0x000008, "Wrong alignment on USimulation_agent");
static_assert(sizeof(USimulation_agent) == 0x000030, "Wrong size on USimulation_agent");

class USimulation_team final : public UVerseTeam
{
public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Simulation_team">();
	}
	static class USimulation_team* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimulation_team>();
	}
};
static_assert(alignof(USimulation_team) == 0x000008, "Wrong alignment on USimulation_team");
static_assert(sizeof(USimulation_team) == 0x000028, "Wrong size on USimulation_team");

class USimulation_player final : public USimulation_agent
{
public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Simulation_player">();
	}
	static class USimulation_player* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimulation_player>();
	}
};
static_assert(alignof(USimulation_player) == 0x000008, "Wrong alignment on USimulation_player");
static_assert(sizeof(USimulation_player) == 0x000030, "Wrong size on USimulation_player");

class Utask_Simulation_Sleep_L_Nfloat_R final : public UConcurrency_task
{
public:
	double                                        __verse_0xB2CDDD72_Argument;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_Simulation$Sleep_L_Nfloat_R">();
	}
	static class Utask_Simulation_Sleep_L_Nfloat_R* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_Simulation_Sleep_L_Nfloat_R>();
	}
};
static_assert(alignof(Utask_Simulation_Sleep_L_Nfloat_R) == 0x000008, "Wrong alignment on Utask_Simulation_Sleep_L_Nfloat_R");
static_assert(sizeof(Utask_Simulation_Sleep_L_Nfloat_R) == 0x000150, "Wrong size on Utask_Simulation_Sleep_L_Nfloat_R");
static_assert(offsetof(Utask_Simulation_Sleep_L_Nfloat_R, __verse_0xB2CDDD72_Argument) == 0x000148, "Member 'Utask_Simulation_Sleep_L_Nfloat_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");

}
