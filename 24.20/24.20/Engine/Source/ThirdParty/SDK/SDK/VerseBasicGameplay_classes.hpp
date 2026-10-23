#pragma once

#include "Basic.hpp"

#include "VerseNative_structs.hpp"
#include "VerseBasicGameplay_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "VerseNative_0_classes.hpp"

namespace SDK
{

class VerseBasicGameplay::U_SolarisSignatureFunctionOuter final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseClass VerseBasicGameplay.$SolarisSignatureFunctionOuter", true>();
	}
	static class VerseBasicGameplay::U_SolarisSignatureFunctionOuter* GetDefaultObj()
	{
		return GetDefaultObjImpl<VerseBasicGameplay::U_SolarisSignatureFunctionOuter>();
	}
};
static_assert(alignof(VerseBasicGameplay::U_SolarisSignatureFunctionOuter) == 0x000008, "Wrong alignment on VerseBasicGameplay::U_SolarisSignatureFunctionOuter");
static_assert(sizeof(VerseBasicGameplay::U_SolarisSignatureFunctionOuter) == 0x000028, "Wrong size on VerseBasicGameplay::U_SolarisSignatureFunctionOuter");

class Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents final : public UConcurrency_task
{
public:
	class UVerseBasicGameplay_PlayerManager_basic_player_manager_impl* _Self;
	struct VerseBasicGameplay::Ftuple_L_R         __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_151[0x7];
	int64                                         _AsyncEndCount_0;
	uint8                                         _AsyncBeginCount_1 : 1;
	uint8                                         Pad_161[0x7];
	class USimulation_player*                     __verse_0x31268F5C_PlayerAdded_1;
	class USimulation_player_component*           __verse_0x00000000__2;
	class UPlayspace_playspace_component*         __verse_0x00000000__3;
	class UConcurrency_task*                      _AsyncTask_2;
	FVerseFunctionProperty_                       _AsyncTaskClass_3;
	struct VerseBasicGameplay::Ftuple_L_R         _ExprResult_4;
	uint8                                         Pad_199[0x7];
	int64                                         _AsyncResult_5;
	FVerseFunctionProperty_                       _Callee_6;
	struct VerseBasicGameplay::Ftuple_L_R         _ExprResult_7;
	uint8                                         Pad_1B9[0x7];
	class USimulation_player_multicast_delegate*  __verse_0x8C908304_MulticastDelegate_4;
	FOptionProperty_                              _FallibleType_8;
	class USimulation_player_multicast_delegate*  __verse_0x00000000__5;
	EVerseTrue                                    _InvokeSureResultDummy_9;
	uint8                                         Pad_1D9[0x7];
	FVerseFunctionProperty_                       _Callee_10;
	FVerseDynamicProperty_                        _ExprResult_11;
	uint8                                         _AsyncBeginCount_12 : 1;
	uint8                                         Pad_201[0x7];
	class USimulation_player*                     __verse_0x0B5DEACA_PlayerRemoved_6;
	class USimulation_player_component*           __verse_0x00000000__7;
	class UPlayspace_playspace_component*         __verse_0x00000000__8;
	class UConcurrency_task*                      _AsyncTask_13;
	FVerseFunctionProperty_                       _AsyncTaskClass_14;
	struct VerseBasicGameplay::Ftuple_L_R         _ExprResult_15;
	uint8                                         Pad_239[0x7];
	int64                                         _AsyncResult_16;
	FVerseFunctionProperty_                       _Callee_17;
	struct VerseBasicGameplay::Ftuple_L_R         _ExprResult_18;
	uint8                                         Pad_259[0x7];
	class USimulation_player_multicast_delegate*  __verse_0x8C908304_MulticastDelegate_9;
	FOptionProperty_                              _FallibleType_19;
	class USimulation_player_multicast_delegate*  __verse_0x00000000__10;
	EVerseTrue                                    _InvokeSureResultDummy_20;
	uint8                                         Pad_279[0x7];
	FVerseFunctionProperty_                       _Callee_21;
	FVerseDynamicProperty_                        _ExprResult_22;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_VerseBasicGameplay_PlayerManager_basic_player_manager_impl$BeginWaitingForEvents">();
	}
	static class Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents>();
	}
};
static_assert(alignof(Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents) == 0x000008, "Wrong alignment on Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents");
static_assert(sizeof(Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents) == 0x0002A0, "Wrong size on Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents");
static_assert(offsetof(Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents, _Self) == 0x000148, "Member 'Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::_Self' has a wrong offset!");
static_assert(offsetof(Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents, _AsyncEndCount_0) == 0x000158, "Member 'Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::_AsyncEndCount_0' has a wrong offset!");
static_assert(offsetof(Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents, __verse_0x31268F5C_PlayerAdded_1) == 0x000168, "Member 'Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::__verse_0x31268F5C_PlayerAdded_1' has a wrong offset!");
static_assert(offsetof(Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents, __verse_0x00000000__2) == 0x000170, "Member 'Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::__verse_0x00000000__2' has a wrong offset!");
static_assert(offsetof(Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents, __verse_0x00000000__3) == 0x000178, "Member 'Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::__verse_0x00000000__3' has a wrong offset!");
static_assert(offsetof(Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents, _AsyncTask_2) == 0x000180, "Member 'Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::_AsyncTask_2' has a wrong offset!");
static_assert(offsetof(Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents, _AsyncTaskClass_3) == 0x000188, "Member 'Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::_AsyncTaskClass_3' has a wrong offset!");
static_assert(offsetof(Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents, _ExprResult_4) == 0x000198, "Member 'Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::_ExprResult_4' has a wrong offset!");
static_assert(offsetof(Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents, _AsyncResult_5) == 0x0001A0, "Member 'Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::_AsyncResult_5' has a wrong offset!");
static_assert(offsetof(Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents, _Callee_6) == 0x0001A8, "Member 'Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::_Callee_6' has a wrong offset!");
static_assert(offsetof(Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents, _ExprResult_7) == 0x0001B8, "Member 'Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::_ExprResult_7' has a wrong offset!");
static_assert(offsetof(Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents, __verse_0x8C908304_MulticastDelegate_4) == 0x0001C0, "Member 'Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::__verse_0x8C908304_MulticastDelegate_4' has a wrong offset!");
static_assert(offsetof(Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents, _FallibleType_8) == 0x0001C8, "Member 'Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::_FallibleType_8' has a wrong offset!");
static_assert(offsetof(Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents, __verse_0x00000000__5) == 0x0001D0, "Member 'Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::__verse_0x00000000__5' has a wrong offset!");
static_assert(offsetof(Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents, _InvokeSureResultDummy_9) == 0x0001D8, "Member 'Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::_InvokeSureResultDummy_9' has a wrong offset!");
static_assert(offsetof(Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents, _Callee_10) == 0x0001E0, "Member 'Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::_Callee_10' has a wrong offset!");
static_assert(offsetof(Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents, _ExprResult_11) == 0x0001F0, "Member 'Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::_ExprResult_11' has a wrong offset!");
static_assert(offsetof(Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents, __verse_0x0B5DEACA_PlayerRemoved_6) == 0x000208, "Member 'Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::__verse_0x0B5DEACA_PlayerRemoved_6' has a wrong offset!");
static_assert(offsetof(Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents, __verse_0x00000000__7) == 0x000210, "Member 'Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::__verse_0x00000000__7' has a wrong offset!");
static_assert(offsetof(Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents, __verse_0x00000000__8) == 0x000218, "Member 'Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::__verse_0x00000000__8' has a wrong offset!");
static_assert(offsetof(Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents, _AsyncTask_13) == 0x000220, "Member 'Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::_AsyncTask_13' has a wrong offset!");
static_assert(offsetof(Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents, _AsyncTaskClass_14) == 0x000228, "Member 'Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::_AsyncTaskClass_14' has a wrong offset!");
static_assert(offsetof(Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents, _ExprResult_15) == 0x000238, "Member 'Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::_ExprResult_15' has a wrong offset!");
static_assert(offsetof(Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents, _AsyncResult_16) == 0x000240, "Member 'Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::_AsyncResult_16' has a wrong offset!");
static_assert(offsetof(Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents, _Callee_17) == 0x000248, "Member 'Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::_Callee_17' has a wrong offset!");
static_assert(offsetof(Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents, _ExprResult_18) == 0x000258, "Member 'Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::_ExprResult_18' has a wrong offset!");
static_assert(offsetof(Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents, __verse_0x8C908304_MulticastDelegate_9) == 0x000260, "Member 'Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::__verse_0x8C908304_MulticastDelegate_9' has a wrong offset!");
static_assert(offsetof(Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents, _FallibleType_19) == 0x000268, "Member 'Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::_FallibleType_19' has a wrong offset!");
static_assert(offsetof(Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents, __verse_0x00000000__10) == 0x000270, "Member 'Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::__verse_0x00000000__10' has a wrong offset!");
static_assert(offsetof(Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents, _InvokeSureResultDummy_20) == 0x000278, "Member 'Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::_InvokeSureResultDummy_20' has a wrong offset!");
static_assert(offsetof(Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents, _Callee_21) == 0x000280, "Member 'Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::_Callee_21' has a wrong offset!");
static_assert(offsetof(Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents, _ExprResult_22) == 0x000290, "Member 'Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::_ExprResult_22' has a wrong offset!");

class UVerseBasicGameplay_PlayerManager final : public UObject
{
public:
	static FOptionProperty_ _L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument);

	void _InitCDO();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseBasicGameplay_PlayerManager">();
	}
	static class UVerseBasicGameplay_PlayerManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseBasicGameplay_PlayerManager>();
	}
};
static_assert(alignof(UVerseBasicGameplay_PlayerManager) == 0x000008, "Wrong alignment on UVerseBasicGameplay_PlayerManager");
static_assert(sizeof(UVerseBasicGameplay_PlayerManager) == 0x000028, "Wrong size on UVerseBasicGameplay_PlayerManager");

class UVerseBasicGameplay_PlayerManager_basic_player_manager : public UObject
{
public:
	class UPlayspace_playspace_component*         __verse_0xBC454097_ThePlayspace;
	class UObject*                                __verse_0x7DC483AF_PlayerAddedEvent;
	class UObject*                                __verse_0x5DE94DD9_PlayerRemovedEvent;
	FVerseFunctionProperty_                       __verse_0x59C8D3EE__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayerCount;
	FVerseFunctionProperty_                       __verse_0x01F9C820__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	int64 _L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayerCount(const struct VerseBasicGameplay::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	TArray<class USimulation_player*> _L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers(const struct VerseBasicGameplay::Ftuple_L_R& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseBasicGameplay_PlayerManager_basic_player_manager">();
	}
	static class UVerseBasicGameplay_PlayerManager_basic_player_manager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseBasicGameplay_PlayerManager_basic_player_manager>();
	}
};
static_assert(alignof(UVerseBasicGameplay_PlayerManager_basic_player_manager) == 0x000008, "Wrong alignment on UVerseBasicGameplay_PlayerManager_basic_player_manager");
static_assert(sizeof(UVerseBasicGameplay_PlayerManager_basic_player_manager) == 0x000060, "Wrong size on UVerseBasicGameplay_PlayerManager_basic_player_manager");
static_assert(offsetof(UVerseBasicGameplay_PlayerManager_basic_player_manager, __verse_0xBC454097_ThePlayspace) == 0x000028, "Member 'UVerseBasicGameplay_PlayerManager_basic_player_manager::__verse_0xBC454097_ThePlayspace' has a wrong offset!");
static_assert(offsetof(UVerseBasicGameplay_PlayerManager_basic_player_manager, __verse_0x7DC483AF_PlayerAddedEvent) == 0x000030, "Member 'UVerseBasicGameplay_PlayerManager_basic_player_manager::__verse_0x7DC483AF_PlayerAddedEvent' has a wrong offset!");
static_assert(offsetof(UVerseBasicGameplay_PlayerManager_basic_player_manager, __verse_0x5DE94DD9_PlayerRemovedEvent) == 0x000038, "Member 'UVerseBasicGameplay_PlayerManager_basic_player_manager::__verse_0x5DE94DD9_PlayerRemovedEvent' has a wrong offset!");
static_assert(offsetof(UVerseBasicGameplay_PlayerManager_basic_player_manager, __verse_0x59C8D3EE__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayerCount) == 0x000040, "Member 'UVerseBasicGameplay_PlayerManager_basic_player_manager::__verse_0x59C8D3EE__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayerCount' has a wrong offset!");
static_assert(offsetof(UVerseBasicGameplay_PlayerManager_basic_player_manager, __verse_0x01F9C820__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers) == 0x000050, "Member 'UVerseBasicGameplay_PlayerManager_basic_player_manager::__verse_0x01F9C820__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers' has a wrong offset!");

class UVerseBasicGameplay_PlayerManager_basic_player_manager_impl final : public UVerseBasicGameplay_PlayerManager_basic_player_manager
{
public:
	FVerseFunctionProperty_                       __verse_0xAB577854_BeginWaitingForEvents;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	class UConcurrency_task* BeginWaitingForEvents(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct VerseBasicGameplay::Ftuple_L_R& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseBasicGameplay_PlayerManager_basic_player_manager_impl">();
	}
	static class UVerseBasicGameplay_PlayerManager_basic_player_manager_impl* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseBasicGameplay_PlayerManager_basic_player_manager_impl>();
	}
};
static_assert(alignof(UVerseBasicGameplay_PlayerManager_basic_player_manager_impl) == 0x000008, "Wrong alignment on UVerseBasicGameplay_PlayerManager_basic_player_manager_impl");
static_assert(sizeof(UVerseBasicGameplay_PlayerManager_basic_player_manager_impl) == 0x000070, "Wrong size on UVerseBasicGameplay_PlayerManager_basic_player_manager_impl");
static_assert(offsetof(UVerseBasicGameplay_PlayerManager_basic_player_manager_impl, __verse_0xAB577854_BeginWaitingForEvents) == 0x000060, "Member 'UVerseBasicGameplay_PlayerManager_basic_player_manager_impl::__verse_0xAB577854_BeginWaitingForEvents' has a wrong offset!");

}
