#pragma once

#include "Basic.hpp"

#include "EpicGamesTemporary_0_structs.hpp"
#include "VerseBasicGameplay_structs.hpp"
#include "VerseNative_structs.hpp"

namespace SDK::Params
{

struct task_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents_Update) == 0x000008, "Wrong alignment on task_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents_Update");
static_assert(sizeof(task_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents_Update) == 0x000008, "Wrong size on task_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents_Update");
static_assert(offsetof(task_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents_Update, RetVal) == 0x000000, "Member 'task_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents_Update::RetVal' has a wrong offset!");

struct VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0xB2CDDD72_Argument;
	FOptionProperty_                              RetVal;
	FOptionProperty_                              __verse_0x00000000__1;
	uint8                                         Pad_22[0x6];
	FOptionProperty_                              __verse_0xE3700E84_MaybeEntity_2;
	FVerseFunctionProperty_                       _Callee_0;
	struct VerseBasicGameplay::Ftuple_Lvector3_M_Kchar_R _ExprResult_1;
	FVerseStringProperty_                         _ExprResult_2;
	class UVerseEngine_Entity_entity*             __verse_0x5F5E89D8_ValidEntity_3;
	FOptionProperty_                              _ExprResultStack_3;
	class UVGameplayRst_Transform_position_component* __verse_0x0A5C85D0_PosComp_3;
	FOptionProperty_                              _FallibleType_4;
	FOptionProperty_                              _ExprResultStack_5;
	FOptionProperty_                              _ExprResult_6;
	class UVerseEngine_Entity_entity*             __verse_0x00000000__4;
	FVerseFunctionProperty_                       _Callee_7;
	class UPlayspace_playspace_component*         __verse_0x9F23064A_ThePlayspaceComp_3;
	FOptionProperty_                              _FallibleType_8;
	FOptionProperty_                              _ExprResultStack_9;
	FOptionProperty_                              _ExprResult_10;
	class UVerseEngine_Entity_entity*             __verse_0x00000000__5;
	FVerseFunctionProperty_                       _Callee_11;
	class UVGameplayRst_Transform_position_component* __verse_0x00000000__7;
	EVerseTrue                                    _InvokeSureResultDummy_12;
	uint8                                         Pad_101[0x7];
	FVerseFunctionProperty_                       _Callee_13;
	class UVerseBasicGameplay_PlayerManager_basic_player_manager_impl* __verse_0xD8BFBA84_BasicPlayerManager_6;
	uint64                                        _InstancingGraph_14;
	class UVerseBasicGameplay_PlayerManager_basic_player_manager_impl* __verse_0x00000000__8;
	class UConcurrency_task*                      _AsyncTask_15;
	FVerseFunctionProperty_                       _AsyncTaskClass_16;
	struct VerseBasicGameplay::Ftuple_L_R         _ExprResult_17;
	uint8                                         Pad_149[0x7];
	int64                                         _AsyncResult_18;
	uint8                                         _ExprResult_19 : 1;
	FOptionProperty_                              _ExprResultStack_20;
};
static_assert(alignof(VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R) == 0x000008, "Wrong alignment on VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R");
static_assert(sizeof(VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R) == 0x000160, "Wrong size on VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R");
static_assert(offsetof(VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R, RetVal) == 0x000018, "Member 'VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R::RetVal' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R, __verse_0x00000000__1) == 0x000020, "Member 'VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R::__verse_0x00000000__1' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R, __verse_0xE3700E84_MaybeEntity_2) == 0x000028, "Member 'VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R::__verse_0xE3700E84_MaybeEntity_2' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R, _Callee_0) == 0x000030, "Member 'VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R::_Callee_0' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R, _ExprResult_1) == 0x000040, "Member 'VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R::_ExprResult_1' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R, _ExprResult_2) == 0x000068, "Member 'VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R, __verse_0x5F5E89D8_ValidEntity_3) == 0x000078, "Member 'VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R::__verse_0x5F5E89D8_ValidEntity_3' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R, _ExprResultStack_3) == 0x000080, "Member 'VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R::_ExprResultStack_3' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R, __verse_0x0A5C85D0_PosComp_3) == 0x000088, "Member 'VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R::__verse_0x0A5C85D0_PosComp_3' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R, _FallibleType_4) == 0x000090, "Member 'VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R::_FallibleType_4' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R, _ExprResultStack_5) == 0x000098, "Member 'VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R::_ExprResultStack_5' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R, _ExprResult_6) == 0x0000A0, "Member 'VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R::_ExprResult_6' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R, __verse_0x00000000__4) == 0x0000A8, "Member 'VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R::__verse_0x00000000__4' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R, _Callee_7) == 0x0000B0, "Member 'VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R::_Callee_7' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R, __verse_0x9F23064A_ThePlayspaceComp_3) == 0x0000C0, "Member 'VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R::__verse_0x9F23064A_ThePlayspaceComp_3' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R, _FallibleType_8) == 0x0000C8, "Member 'VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R::_FallibleType_8' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R, _ExprResultStack_9) == 0x0000D0, "Member 'VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R::_ExprResultStack_9' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R, _ExprResult_10) == 0x0000D8, "Member 'VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R::_ExprResult_10' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R, __verse_0x00000000__5) == 0x0000E0, "Member 'VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R::__verse_0x00000000__5' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R, _Callee_11) == 0x0000E8, "Member 'VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R::_Callee_11' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R, __verse_0x00000000__7) == 0x0000F8, "Member 'VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R::__verse_0x00000000__7' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R, _InvokeSureResultDummy_12) == 0x000100, "Member 'VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R::_InvokeSureResultDummy_12' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R, _Callee_13) == 0x000108, "Member 'VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R::_Callee_13' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R, __verse_0xD8BFBA84_BasicPlayerManager_6) == 0x000118, "Member 'VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R::__verse_0xD8BFBA84_BasicPlayerManager_6' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R, _InstancingGraph_14) == 0x000120, "Member 'VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R::_InstancingGraph_14' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R, __verse_0x00000000__8) == 0x000128, "Member 'VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R::__verse_0x00000000__8' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R, _AsyncTask_15) == 0x000130, "Member 'VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R::_AsyncTask_15' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R, _AsyncTaskClass_16) == 0x000138, "Member 'VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R::_AsyncTaskClass_16' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R, _ExprResult_17) == 0x000148, "Member 'VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R::_ExprResult_17' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R, _AsyncResult_18) == 0x000150, "Member 'VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R::_AsyncResult_18' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R, _ExprResultStack_20) == 0x000159, "Member 'VerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R::_ExprResultStack_20' has a wrong offset!");

struct VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayerCount final
{
public:
	struct VerseBasicGameplay::Ftuple_L_R         __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_1[0x7];
	int64                                         RetVal;
	class UPlayspace_playspace_component*         __verse_0x00000000__1;
	FVerseFunctionProperty_                       _Callee_0;
};
static_assert(alignof(VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayerCount) == 0x000008, "Wrong alignment on VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayerCount");
static_assert(sizeof(VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayerCount) == 0x000028, "Wrong size on VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayerCount");
static_assert(offsetof(VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayerCount, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayerCount::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayerCount, RetVal) == 0x000008, "Member 'VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayerCount::RetVal' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayerCount, __verse_0x00000000__1) == 0x000010, "Member 'VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayerCount::__verse_0x00000000__1' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayerCount, _Callee_0) == 0x000018, "Member 'VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayerCount::_Callee_0' has a wrong offset!");

struct VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers final
{
public:
	struct VerseBasicGameplay::Ftuple_L_R         __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_1[0x7];
	TArray<class USimulation_player*>             RetVal;
	TArray<class USimulation_player*>             _ForResult_0;
	TArray<class USimulation_player_component*>   _ForIterable_1;
	class UPlayspace_playspace_component*         __verse_0x00000000__3;
	FVerseFunctionProperty_                       _Callee_2;
	int64                                         _ForIndex_3;
	int64                                         _ForLength_4;
	class USimulation_player_component*           __verse_0x1AA69DA0_PlayerComp_4;
	class USimulation_player*                     _ExprResult_5;
	class USimulation_player_component*           __verse_0x00000000__7;
	FVerseFunctionProperty_                       _Callee_6;
	struct VerseBasicGameplay::Ftuple_L_R         _ExprResult_7;
};
static_assert(alignof(VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers) == 0x000008, "Wrong alignment on VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers");
static_assert(sizeof(VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers) == 0x000090, "Wrong size on VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers");
static_assert(offsetof(VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers, RetVal) == 0x000008, "Member 'VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers::RetVal' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers, _ForResult_0) == 0x000018, "Member 'VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers::_ForResult_0' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers, _ForIterable_1) == 0x000028, "Member 'VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers::_ForIterable_1' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers, __verse_0x00000000__3) == 0x000038, "Member 'VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers::__verse_0x00000000__3' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers, _Callee_2) == 0x000040, "Member 'VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers::_Callee_2' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers, _ForIndex_3) == 0x000050, "Member 'VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers::_ForIndex_3' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers, _ForLength_4) == 0x000058, "Member 'VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers::_ForLength_4' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers, __verse_0x1AA69DA0_PlayerComp_4) == 0x000060, "Member 'VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers::__verse_0x1AA69DA0_PlayerComp_4' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers, _ExprResult_5) == 0x000068, "Member 'VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers::_ExprResult_5' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers, __verse_0x00000000__7) == 0x000070, "Member 'VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers::__verse_0x00000000__7' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers, _Callee_6) == 0x000078, "Member 'VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers::_Callee_6' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers, _ExprResult_7) == 0x000088, "Member 'VerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers::_ExprResult_7' has a wrong offset!");

struct VerseBasicGameplay_PlayerManager_basic_player_manager_impl__InitCDO final
{
public:
	class USimulation_player_multicast_delegate*  _ExprResult_0;
	uint64                                        _InstancingGraph_1;
	class USimulation_player_multicast_delegate*  _ExprResult_2;
	uint64                                        _InstancingGraph_3;
};
static_assert(alignof(VerseBasicGameplay_PlayerManager_basic_player_manager_impl__InitCDO) == 0x000008, "Wrong alignment on VerseBasicGameplay_PlayerManager_basic_player_manager_impl__InitCDO");
static_assert(sizeof(VerseBasicGameplay_PlayerManager_basic_player_manager_impl__InitCDO) == 0x000020, "Wrong size on VerseBasicGameplay_PlayerManager_basic_player_manager_impl__InitCDO");
static_assert(offsetof(VerseBasicGameplay_PlayerManager_basic_player_manager_impl__InitCDO, _ExprResult_0) == 0x000000, "Member 'VerseBasicGameplay_PlayerManager_basic_player_manager_impl__InitCDO::_ExprResult_0' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager_basic_player_manager_impl__InitCDO, _InstancingGraph_1) == 0x000008, "Member 'VerseBasicGameplay_PlayerManager_basic_player_manager_impl__InitCDO::_InstancingGraph_1' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager_basic_player_manager_impl__InitCDO, _ExprResult_2) == 0x000010, "Member 'VerseBasicGameplay_PlayerManager_basic_player_manager_impl__InitCDO::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager_basic_player_manager_impl__InitCDO, _InstancingGraph_3) == 0x000018, "Member 'VerseBasicGameplay_PlayerManager_basic_player_manager_impl__InitCDO::_InstancingGraph_3' has a wrong offset!");

struct VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct VerseBasicGameplay::Ftuple_L_R         __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_19[0x7];
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents) == 0x000008, "Wrong alignment on VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents");
static_assert(sizeof(VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents) == 0x000028, "Wrong size on VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents");
static_assert(offsetof(VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents, RetVal) == 0x000020, "Member 'VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::RetVal' has a wrong offset!");

}
