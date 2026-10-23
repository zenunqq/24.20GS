#pragma once

#include "Basic.hpp"

#include "VerseNative_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "VerseNative_0_classes.hpp"
#include "VerseAIBase_0_structs.hpp"
#include "VerseAIBase_0_classes.hpp"
#include "UnrealEngineExperimental_0_classes.hpp"
#include "EpicGamesTemporary_0_structs.hpp"
#include "VerseArchetypes_structs.hpp"
#include "Verse_structs.hpp"

namespace SDK
{

class Utask_VerseArchetypes_sniper_ai_RunGameplayLogic final : public UConcurrency_task
{
public:
	class UVerseArchetypes_sniper_ai*             _Self;
	struct VerseArchetypes::Ftuple_L_R            __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_151[0x7];
	class UObject*                                __verse_0x0F05355D_ThreatPerception_1;
	FOptionProperty_                              _ExprResultStack_0;
	FOptionProperty_                              __verse_0x1EB80E5B_ThreatInfo_1;
	uint8                                         Pad_199[0x7];
	struct FVerseAIBase_fort_threat_info          _ExprResult_1;
	class UObject*                                __verse_0x00000000__2;
	FOptionProperty_                              _ExprResultStack_2;
	uint8                                         Pad_209[0x7];
	FVerseFunctionProperty_                       _Callee_3;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_4;
	uint8                                         Pad_221[0x7];
	struct FVerseAIBase_fort_threat_info          __verse_0x2CFDBF0A_CurrentThreat_4;
	FOptionProperty_                              _ExprResultStack_5;
	uint8                                         _AsyncBeginCount_6 : 1;
	uint8                                         BitPad_289_1 : 7;
	uint8                                         _AsyncBeginCount_7 : 1;
	uint8                                         Pad_28B[0x5];
	class UConcurrency_task*                      _AsyncTask_8;
	FVerseFunctionProperty_                       _AsyncTaskClass_9;
	int64                                         _AsyncResult_10;
	uint8                                         _AsyncBeginCount_11 : 1;
	uint8                                         Pad_2B1[0x7];
	struct FVerseAIBase_fort_threat_info          __verse_0xEBCD492A_NewThreatInfo_5;
	class UObject*                                __verse_0x00000000__6;
	class UObject*                                __verse_0x00000000__7;
	FVerseFunctionProperty_                       _Callee_12;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_13;
	uint8                                         Pad_309[0x7];
	FVerseDynamicProperty_                        _ExprResult_14;
	class UConcurrency_task*                      _AsyncTask_15;
	FVerseFunctionProperty_                       _AsyncTaskClass_16;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_17;
	uint8                                         Pad_339[0x7];
	int64                                         _AsyncResult_18;
	FOptionProperty_                              _ExprResult_19;
	uint8                                         _AsyncBeginCount_20 : 1;
	uint8                                         Pad_37A[0x6];
	struct FVerseAIBase_fort_threat_info          __verse_0xE0991445_UpdatedThreatInfo_8;
	class UObject*                                __verse_0x00000000__9;
	class UObject*                                __verse_0x00000000__10;
	FVerseFunctionProperty_                       _Callee_21;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_22;
	uint8                                         Pad_3D1[0x7];
	FVerseDynamicProperty_                        _ExprResult_23;
	class UConcurrency_task*                      _AsyncTask_24;
	FVerseFunctionProperty_                       _AsyncTaskClass_25;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_26;
	uint8                                         Pad_401[0x7];
	int64                                         _AsyncResult_27;
	FOptionProperty_                              _ExprResult_28;
	uint8                                         _AsyncBeginCount_29 : 1;
	uint8                                         BitPad_441_1 : 7;
	uint8                                         _AsyncBeginCount_30 : 1;
	uint8                                         Pad_443[0x5];
	class UConcurrency_task*                      _AsyncTask_31;
	FVerseFunctionProperty_                       _AsyncTaskClass_32;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_33;
	uint8                                         Pad_461[0x7];
	int64                                         _AsyncResult_34;
	uint8                                         _AsyncBeginCount_35 : 1;
	uint8                                         Pad_471[0x7];
	struct FVerseAIBase_fort_threat_info          __verse_0xEBCD492A_NewThreatInfo_12;
	class UObject*                                __verse_0x00000000__13;
	class UObject*                                __verse_0x00000000__14;
	FVerseFunctionProperty_                       _Callee_36;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_37;
	uint8                                         Pad_4C9[0x7];
	FVerseDynamicProperty_                        _ExprResult_38;
	class UConcurrency_task*                      _AsyncTask_39;
	FVerseFunctionProperty_                       _AsyncTaskClass_40;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_41;
	uint8                                         Pad_4F9[0x7];
	int64                                         _AsyncResult_42;
	FOptionProperty_                              _ExprResult_43;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_VerseArchetypes_sniper_ai$RunGameplayLogic">();
	}
	static class Utask_VerseArchetypes_sniper_ai_RunGameplayLogic* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_VerseArchetypes_sniper_ai_RunGameplayLogic>();
	}
};
static_assert(alignof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic) == 0x000008, "Wrong alignment on Utask_VerseArchetypes_sniper_ai_RunGameplayLogic");
static_assert(sizeof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic) == 0x000540, "Wrong size on Utask_VerseArchetypes_sniper_ai_RunGameplayLogic");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, _Self) == 0x000148, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::_Self' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, __verse_0x0F05355D_ThreatPerception_1) == 0x000158, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::__verse_0x0F05355D_ThreatPerception_1' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, _ExprResultStack_0) == 0x000160, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::_ExprResultStack_0' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, __verse_0x1EB80E5B_ThreatInfo_1) == 0x000168, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::__verse_0x1EB80E5B_ThreatInfo_1' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, _ExprResult_1) == 0x0001A0, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::_ExprResult_1' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, __verse_0x00000000__2) == 0x0001D0, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::__verse_0x00000000__2' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, _ExprResultStack_2) == 0x0001D8, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::_ExprResultStack_2' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, _Callee_3) == 0x000210, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::_Callee_3' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, _ExprResult_4) == 0x000220, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::_ExprResult_4' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, __verse_0x2CFDBF0A_CurrentThreat_4) == 0x000228, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::__verse_0x2CFDBF0A_CurrentThreat_4' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, _ExprResultStack_5) == 0x000258, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::_ExprResultStack_5' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, _AsyncTask_8) == 0x000290, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::_AsyncTask_8' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, _AsyncTaskClass_9) == 0x000298, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::_AsyncTaskClass_9' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, _AsyncResult_10) == 0x0002A8, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::_AsyncResult_10' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, __verse_0xEBCD492A_NewThreatInfo_5) == 0x0002B8, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::__verse_0xEBCD492A_NewThreatInfo_5' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, __verse_0x00000000__6) == 0x0002E8, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::__verse_0x00000000__6' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, __verse_0x00000000__7) == 0x0002F0, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::__verse_0x00000000__7' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, _Callee_12) == 0x0002F8, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::_Callee_12' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, _ExprResult_13) == 0x000308, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::_ExprResult_13' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, _ExprResult_14) == 0x000310, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::_ExprResult_14' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, _AsyncTask_15) == 0x000320, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::_AsyncTask_15' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, _AsyncTaskClass_16) == 0x000328, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::_AsyncTaskClass_16' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, _ExprResult_17) == 0x000338, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::_ExprResult_17' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, _AsyncResult_18) == 0x000340, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::_AsyncResult_18' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, _ExprResult_19) == 0x000348, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::_ExprResult_19' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, __verse_0xE0991445_UpdatedThreatInfo_8) == 0x000380, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::__verse_0xE0991445_UpdatedThreatInfo_8' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, __verse_0x00000000__9) == 0x0003B0, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::__verse_0x00000000__9' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, __verse_0x00000000__10) == 0x0003B8, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::__verse_0x00000000__10' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, _Callee_21) == 0x0003C0, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::_Callee_21' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, _ExprResult_22) == 0x0003D0, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::_ExprResult_22' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, _ExprResult_23) == 0x0003D8, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::_ExprResult_23' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, _AsyncTask_24) == 0x0003E8, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::_AsyncTask_24' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, _AsyncTaskClass_25) == 0x0003F0, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::_AsyncTaskClass_25' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, _ExprResult_26) == 0x000400, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::_ExprResult_26' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, _AsyncResult_27) == 0x000408, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::_AsyncResult_27' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, _ExprResult_28) == 0x000410, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::_ExprResult_28' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, _AsyncTask_31) == 0x000448, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::_AsyncTask_31' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, _AsyncTaskClass_32) == 0x000450, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::_AsyncTaskClass_32' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, _ExprResult_33) == 0x000460, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::_ExprResult_33' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, _AsyncResult_34) == 0x000468, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::_AsyncResult_34' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, __verse_0xEBCD492A_NewThreatInfo_12) == 0x000478, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::__verse_0xEBCD492A_NewThreatInfo_12' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, __verse_0x00000000__13) == 0x0004A8, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::__verse_0x00000000__13' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, __verse_0x00000000__14) == 0x0004B0, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::__verse_0x00000000__14' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, _Callee_36) == 0x0004B8, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::_Callee_36' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, _ExprResult_37) == 0x0004C8, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::_ExprResult_37' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, _ExprResult_38) == 0x0004D0, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::_ExprResult_38' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, _AsyncTask_39) == 0x0004E0, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::_AsyncTask_39' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, _AsyncTaskClass_40) == 0x0004E8, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::_AsyncTaskClass_40' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, _ExprResult_41) == 0x0004F8, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::_ExprResult_41' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, _AsyncResult_42) == 0x000500, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::_AsyncResult_42' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_RunGameplayLogic, _ExprResult_43) == 0x000508, "Member 'Utask_VerseArchetypes_sniper_ai_RunGameplayLogic::_ExprResult_43' has a wrong offset!");

class VerseArchetypes::U_SolarisSignatureFunctionOuter final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseClass VerseArchetypes.$SolarisSignatureFunctionOuter", true>();
	}
	static class VerseArchetypes::U_SolarisSignatureFunctionOuter* GetDefaultObj()
	{
		return GetDefaultObjImpl<VerseArchetypes::U_SolarisSignatureFunctionOuter>();
	}
};
static_assert(alignof(VerseArchetypes::U_SolarisSignatureFunctionOuter) == 0x000008, "Wrong alignment on VerseArchetypes::U_SolarisSignatureFunctionOuter");
static_assert(sizeof(VerseArchetypes::U_SolarisSignatureFunctionOuter) == 0x000028, "Wrong size on VerseArchetypes::U_SolarisSignatureFunctionOuter");

class Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R final : public UConcurrency_task
{
public:
	class UVerseArchetypes_sniper_ai*             _Self;
	struct FVerseAIBase_fort_threat_info          __verse_0xB2CDDD72_Argument;
	class UObject*                                __verse_0xCCC0089F_Navigation_1;
	FOptionProperty_                              _ExprResultStack_0;
	class UObject*                                __verse_0xA26259EF_Movement_1;
	FOptionProperty_                              _ExprResultStack_1;
	class UObject*                                __verse_0x2E1D28B3_Inventory_1;
	FOptionProperty_                              _ExprResultStack_2;
	class UObject*                                __verse_0x91E0A2A2_NPCActions_1;
	FOptionProperty_                              _ExprResultStack_3;
	struct FVerseAIBase_fort_item_descriptor      __verse_0xE0E78A95_CurrentWeapon_3;
	class UObject*                                __verse_0x00000000__4;
	FOptionProperty_                              _ExprResultStack_4;
	uint8                                         Pad_1F9[0x7];
	FVerseFunctionProperty_                       _Callee_5;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_6;
	FOptionProperty_                              _ExprResultStack_7;
	uint8                                         _ExprResultStack_8 : 1;
	uint8                                         Pad_214[0x4];
	FVerseFunctionProperty_                       _Callee_9;
	struct VerseArchetypes::Ftuple_Lfort__item__descriptor_Mfort__item__tag_R _ExprResult_10;
	uint8                                         _AsyncBeginCount_11 : 1;
	uint8                                         BitPad_248_1 : 7;
	uint8                                         _AsyncBeginCount_12 : 1;
	uint8                                         Pad_24A[0x6];
	class UConcurrency_task*                      _AsyncTask_13;
	FVerseFunctionProperty_                       _AsyncTaskClass_14;
	int64                                         _AsyncResult_15;
	uint8                                         _AsyncBeginCount_16 : 1;
	uint8                                         Pad_271[0x7];
	class UObject*                                __verse_0x00000000__7;
	class UConcurrency_task*                      _AsyncTask_17;
	FVerseFunctionProperty_                       _AsyncTaskClass_18;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_19;
	uint8                                         Pad_299[0x7];
	int64                                         _AsyncResult_20;
	uint8                                         _AsyncBeginCount_21 : 1;
	uint8                                         Pad_2A9[0x7];
	class UConcurrency_task*                      _AsyncTask_22;
	FVerseFunctionProperty_                       _AsyncTaskClass_23;
	int64                                         _AsyncResult_24;
	uint8                                         _AsyncBeginCount_25 : 1;
	uint8                                         Pad_2D1[0x7];
	class UVerse_event*                           __verse_0x00000000__8;
	class UConcurrency_task*                      _AsyncTask_26;
	FVerseFunctionProperty_                       _AsyncTaskClass_27;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_28;
	uint8                                         Pad_2F9[0x7];
	int64                                         _AsyncResult_29;
	uint8                                         _AsyncBeginCount_30 : 1;
	uint8                                         BitPad_308_1 : 7;
	uint8                                         _AsyncBeginCount_31 : 1;
	uint8                                         Pad_30A[0x6];
	class UObject*                                __verse_0x00000000__10;
	class UConcurrency_task*                      _AsyncTask_32;
	FVerseFunctionProperty_                       _AsyncTaskClass_33;
	int64                                         _AsyncResult_34;
	uint8                                         _AsyncBeginCount_35 : 1;
	uint8                                         Pad_339[0x7];
	class UObject*                                __verse_0x00000000__11;
	class UConcurrency_task*                      _AsyncTask_36;
	FVerseFunctionProperty_                       _AsyncTaskClass_37;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_38;
	uint8                                         Pad_361[0x7];
	int64                                         _AsyncResult_39;
	uint8                                         _AsyncBeginCount_40 : 1;
	uint8                                         Pad_371[0x7];
	class UVerse_event*                           __verse_0x00000000__12;
	class UConcurrency_task*                      _AsyncTask_41;
	FVerseFunctionProperty_                       _AsyncTaskClass_42;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_43;
	uint8                                         Pad_399[0x7];
	int64                                         _AsyncResult_44;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_VerseArchetypes_sniper_ai$SelectFightingStance_L_Nfort__threat__info_R">();
	}
	static class Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R>();
	}
};
static_assert(alignof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R) == 0x000008, "Wrong alignment on Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R");
static_assert(sizeof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R) == 0x0003A8, "Wrong size on Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, _Self) == 0x000148, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::_Self' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, __verse_0xCCC0089F_Navigation_1) == 0x000180, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::__verse_0xCCC0089F_Navigation_1' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, _ExprResultStack_0) == 0x000188, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::_ExprResultStack_0' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, __verse_0xA26259EF_Movement_1) == 0x000190, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::__verse_0xA26259EF_Movement_1' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, _ExprResultStack_1) == 0x000198, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::_ExprResultStack_1' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, __verse_0x2E1D28B3_Inventory_1) == 0x0001A0, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::__verse_0x2E1D28B3_Inventory_1' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, _ExprResultStack_2) == 0x0001A8, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::_ExprResultStack_2' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, __verse_0x91E0A2A2_NPCActions_1) == 0x0001B0, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::__verse_0x91E0A2A2_NPCActions_1' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, _ExprResultStack_3) == 0x0001B8, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::_ExprResultStack_3' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, __verse_0xE0E78A95_CurrentWeapon_3) == 0x0001C0, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::__verse_0xE0E78A95_CurrentWeapon_3' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, __verse_0x00000000__4) == 0x0001D8, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::__verse_0x00000000__4' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, _ExprResultStack_4) == 0x0001E0, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::_ExprResultStack_4' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, _Callee_5) == 0x000200, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::_Callee_5' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, _ExprResult_6) == 0x000210, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::_ExprResult_6' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, _ExprResultStack_7) == 0x000211, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::_ExprResultStack_7' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, _Callee_9) == 0x000218, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::_Callee_9' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, _ExprResult_10) == 0x000228, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::_ExprResult_10' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, _AsyncTask_13) == 0x000250, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::_AsyncTask_13' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, _AsyncTaskClass_14) == 0x000258, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::_AsyncTaskClass_14' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, _AsyncResult_15) == 0x000268, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::_AsyncResult_15' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, __verse_0x00000000__7) == 0x000278, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::__verse_0x00000000__7' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, _AsyncTask_17) == 0x000280, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::_AsyncTask_17' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, _AsyncTaskClass_18) == 0x000288, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::_AsyncTaskClass_18' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, _ExprResult_19) == 0x000298, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::_ExprResult_19' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, _AsyncResult_20) == 0x0002A0, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::_AsyncResult_20' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, _AsyncTask_22) == 0x0002B0, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::_AsyncTask_22' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, _AsyncTaskClass_23) == 0x0002B8, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::_AsyncTaskClass_23' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, _AsyncResult_24) == 0x0002C8, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::_AsyncResult_24' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, __verse_0x00000000__8) == 0x0002D8, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::__verse_0x00000000__8' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, _AsyncTask_26) == 0x0002E0, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::_AsyncTask_26' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, _AsyncTaskClass_27) == 0x0002E8, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::_AsyncTaskClass_27' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, _ExprResult_28) == 0x0002F8, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::_ExprResult_28' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, _AsyncResult_29) == 0x000300, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::_AsyncResult_29' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, __verse_0x00000000__10) == 0x000310, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::__verse_0x00000000__10' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, _AsyncTask_32) == 0x000318, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::_AsyncTask_32' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, _AsyncTaskClass_33) == 0x000320, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::_AsyncTaskClass_33' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, _AsyncResult_34) == 0x000330, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::_AsyncResult_34' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, __verse_0x00000000__11) == 0x000340, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::__verse_0x00000000__11' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, _AsyncTask_36) == 0x000348, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::_AsyncTask_36' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, _AsyncTaskClass_37) == 0x000350, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::_AsyncTaskClass_37' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, _ExprResult_38) == 0x000360, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::_ExprResult_38' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, _AsyncResult_39) == 0x000368, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::_AsyncResult_39' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, __verse_0x00000000__12) == 0x000378, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::__verse_0x00000000__12' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, _AsyncTask_41) == 0x000380, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::_AsyncTask_41' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, _AsyncTaskClass_42) == 0x000388, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::_AsyncTaskClass_42' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, _ExprResult_43) == 0x000398, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::_ExprResult_43' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R, _AsyncResult_44) == 0x0003A0, "Member 'Utask_VerseArchetypes_sniper_ai_SelectFightingStance_L_Nfort__threat__info_R::_AsyncResult_44' has a wrong offset!");

class Utask_VerseArchetypes_sniper_ai_LookAtThreat_L_Nfort__threat__info_R final : public UConcurrency_task
{
public:
	class UVerseArchetypes_sniper_ai*             _Self;
	struct FVerseAIBase_fort_threat_info          __verse_0xB2CDDD72_Argument;
	class UObject*                                __verse_0x91E0A2A2_NPCActions_1;
	FOptionProperty_                              _ExprResultStack_0;
	uint8                                         _AsyncBeginCount_1 : 1;
	uint8                                         BitPad_190_1 : 7;
	uint8                                         _AsyncBeginCount_2 : 1;
	uint8                                         Pad_192[0x6];
	class UObject*                                __verse_0x00000000__3;
	class UConcurrency_task*                      _AsyncTask_3;
	FVerseFunctionProperty_                       _AsyncTaskClass_4;
	struct FSpatialMath_vector3                   _ExprResultStack_5;
	FVerseFunctionProperty_                       _Callee_6;
	int64                                         _AsyncResult_7;
	uint8                                         _AsyncBeginCount_8 : 1;
	uint8                                         Pad_1E9[0x7];
	class UConcurrency_task*                      _AsyncTask_9;
	FVerseFunctionProperty_                       _AsyncTaskClass_10;
	int64                                         _AsyncResult_11;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_VerseArchetypes_sniper_ai$LookAtThreat_L_Nfort__threat__info_R">();
	}
	static class Utask_VerseArchetypes_sniper_ai_LookAtThreat_L_Nfort__threat__info_R* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_VerseArchetypes_sniper_ai_LookAtThreat_L_Nfort__threat__info_R>();
	}
};
static_assert(alignof(Utask_VerseArchetypes_sniper_ai_LookAtThreat_L_Nfort__threat__info_R) == 0x000008, "Wrong alignment on Utask_VerseArchetypes_sniper_ai_LookAtThreat_L_Nfort__threat__info_R");
static_assert(sizeof(Utask_VerseArchetypes_sniper_ai_LookAtThreat_L_Nfort__threat__info_R) == 0x000210, "Wrong size on Utask_VerseArchetypes_sniper_ai_LookAtThreat_L_Nfort__threat__info_R");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_LookAtThreat_L_Nfort__threat__info_R, _Self) == 0x000148, "Member 'Utask_VerseArchetypes_sniper_ai_LookAtThreat_L_Nfort__threat__info_R::_Self' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_LookAtThreat_L_Nfort__threat__info_R, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_VerseArchetypes_sniper_ai_LookAtThreat_L_Nfort__threat__info_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_LookAtThreat_L_Nfort__threat__info_R, __verse_0x91E0A2A2_NPCActions_1) == 0x000180, "Member 'Utask_VerseArchetypes_sniper_ai_LookAtThreat_L_Nfort__threat__info_R::__verse_0x91E0A2A2_NPCActions_1' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_LookAtThreat_L_Nfort__threat__info_R, _ExprResultStack_0) == 0x000188, "Member 'Utask_VerseArchetypes_sniper_ai_LookAtThreat_L_Nfort__threat__info_R::_ExprResultStack_0' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_LookAtThreat_L_Nfort__threat__info_R, __verse_0x00000000__3) == 0x000198, "Member 'Utask_VerseArchetypes_sniper_ai_LookAtThreat_L_Nfort__threat__info_R::__verse_0x00000000__3' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_LookAtThreat_L_Nfort__threat__info_R, _AsyncTask_3) == 0x0001A0, "Member 'Utask_VerseArchetypes_sniper_ai_LookAtThreat_L_Nfort__threat__info_R::_AsyncTask_3' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_LookAtThreat_L_Nfort__threat__info_R, _AsyncTaskClass_4) == 0x0001A8, "Member 'Utask_VerseArchetypes_sniper_ai_LookAtThreat_L_Nfort__threat__info_R::_AsyncTaskClass_4' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_LookAtThreat_L_Nfort__threat__info_R, _ExprResultStack_5) == 0x0001B8, "Member 'Utask_VerseArchetypes_sniper_ai_LookAtThreat_L_Nfort__threat__info_R::_ExprResultStack_5' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_LookAtThreat_L_Nfort__threat__info_R, _Callee_6) == 0x0001D0, "Member 'Utask_VerseArchetypes_sniper_ai_LookAtThreat_L_Nfort__threat__info_R::_Callee_6' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_LookAtThreat_L_Nfort__threat__info_R, _AsyncResult_7) == 0x0001E0, "Member 'Utask_VerseArchetypes_sniper_ai_LookAtThreat_L_Nfort__threat__info_R::_AsyncResult_7' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_LookAtThreat_L_Nfort__threat__info_R, _AsyncTask_9) == 0x0001F0, "Member 'Utask_VerseArchetypes_sniper_ai_LookAtThreat_L_Nfort__threat__info_R::_AsyncTask_9' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_LookAtThreat_L_Nfort__threat__info_R, _AsyncTaskClass_10) == 0x0001F8, "Member 'Utask_VerseArchetypes_sniper_ai_LookAtThreat_L_Nfort__threat__info_R::_AsyncTaskClass_10' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_LookAtThreat_L_Nfort__threat__info_R, _AsyncResult_11) == 0x000208, "Member 'Utask_VerseArchetypes_sniper_ai_LookAtThreat_L_Nfort__threat__info_R::_AsyncResult_11' has a wrong offset!");

class Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R final : public UConcurrency_task
{
public:
	class UVerseArchetypes_sniper_ai*             _Self;
	struct FVerseAIBase_fort_threat_info          __verse_0xB2CDDD72_Argument;
	FOptionProperty_                              _ExprResultStack_0;
	uint8                                         _AsyncBeginCount_1 : 1;
	uint8                                         Pad_183[0x5];
	class UConcurrency_task*                      _AsyncTask_2;
	FVerseFunctionProperty_                       _AsyncTaskClass_3;
	int64                                         _AsyncResult_4;
	uint8                                         __verse_0x7D46D6F7_HasChangedOfWeapon_2 : 1;
	uint8                                         Pad_1A9[0x7];
	FVerseFunctionProperty_                       _Callee_5;
	FOptionProperty_                              _ExprResultStack_6;
	uint8                                         Pad_1C2[0x6];
	class UVerse_event*                           __verse_0x00000000__4;
	EVerseTrue                                    _InvokeSureResultDummy_7;
	uint8                                         Pad_1D1[0x7];
	FVerseFunctionProperty_                       _Callee_8;
	FVerseDynamicProperty_                        _ExprResult_9;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_10;
	uint8                                         Pad_1F9[0x7];
	class UConcurrency_task*                      _AsyncTask_11;
	FVerseFunctionProperty_                       _AsyncTaskClass_12;
	int64                                         _AsyncResult_13;
	FVerseFunctionProperty_                       _AsyncTaskClass_14;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_VerseArchetypes_sniper_ai$TryToAttackThreat_L_Nfort__threat__info_R">();
	}
	static class Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R>();
	}
};
static_assert(alignof(Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R) == 0x000008, "Wrong alignment on Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R");
static_assert(sizeof(Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R) == 0x000230, "Wrong size on Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R, _Self) == 0x000148, "Member 'Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R::_Self' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R, _ExprResultStack_0) == 0x000180, "Member 'Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R::_ExprResultStack_0' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R, _AsyncTask_2) == 0x000188, "Member 'Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R::_AsyncTask_2' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R, _AsyncTaskClass_3) == 0x000190, "Member 'Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R::_AsyncTaskClass_3' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R, _AsyncResult_4) == 0x0001A0, "Member 'Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R::_AsyncResult_4' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R, _Callee_5) == 0x0001B0, "Member 'Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R::_Callee_5' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R, _ExprResultStack_6) == 0x0001C0, "Member 'Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R::_ExprResultStack_6' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R, __verse_0x00000000__4) == 0x0001C8, "Member 'Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R::__verse_0x00000000__4' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R, _InvokeSureResultDummy_7) == 0x0001D0, "Member 'Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R::_InvokeSureResultDummy_7' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R, _Callee_8) == 0x0001D8, "Member 'Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R::_Callee_8' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R, _ExprResult_9) == 0x0001E8, "Member 'Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R::_ExprResult_9' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R, _ExprResult_10) == 0x0001F8, "Member 'Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R::_ExprResult_10' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R, _AsyncTask_11) == 0x000200, "Member 'Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R::_AsyncTask_11' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R, _AsyncTaskClass_12) == 0x000208, "Member 'Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R::_AsyncTaskClass_12' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R, _AsyncResult_13) == 0x000218, "Member 'Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R::_AsyncResult_13' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R, _AsyncTaskClass_14) == 0x000220, "Member 'Utask_VerseArchetypes_sniper_ai_TryToAttackThreat_L_Nfort__threat__info_R::_AsyncTaskClass_14' has a wrong offset!");

class Utask_VerseArchetypes_sniper_ai_OnBegin final : public UConcurrency_task
{
public:
	class UVerseArchetypes_sniper_ai*             _Self;
	struct VerseArchetypes::Ftuple_L_R            __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_151[0x7];
	class UObject*                                __verse_0xF80AEC27_FortCharacter_1;
	FOptionProperty_                              _ExprResultStack_0;
	FVerseFunctionProperty_                       _Callee_1;
	struct VerseArchetypes::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R _ExprResult_2;
	FOptionProperty_                              _ExprResultStack_3;
	FVerseFunctionProperty_                       _Callee_4;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_5;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_6;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_7;
	uint8                                         Pad_1A3[0x5];
	class UObject*                                __verse_0x21D7FA2A_FortNavigation_1;
	FOptionProperty_                              _ExprResultStack_8;
	FVerseFunctionProperty_                       _Callee_9;
	struct VerseArchetypes::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_10;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_11;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_12;
	uint8                                         Pad_1DA[0x6];
	class UObject*                                __verse_0x5F0E38C3_FortLeash_1;
	FOptionProperty_                              _ExprResultStack_13;
	FVerseFunctionProperty_                       _Callee_14;
	struct VerseArchetypes::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_15;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_16;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_17;
	uint8                                         Pad_212[0x6];
	class UObject*                                __verse_0x47B0B441_CharacterMovement_1;
	FOptionProperty_                              _ExprResultStack_18;
	FVerseFunctionProperty_                       _Callee_19;
	struct VerseArchetypes::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_20;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_21;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_22;
	uint8                                         Pad_24A[0x6];
	class UObject*                                __verse_0x2E1D28B3_Inventory_1;
	FOptionProperty_                              _ExprResultStack_23;
	FVerseFunctionProperty_                       _Callee_24;
	struct VerseArchetypes::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_25;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_26;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_27;
	uint8                                         Pad_282[0x6];
	class UObject*                                __verse_0x0F05355D_ThreatPerception_1;
	FOptionProperty_                              _ExprResultStack_28;
	FVerseFunctionProperty_                       _Callee_29;
	struct VerseArchetypes::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_30;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_31;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_32;
	uint8                                         Pad_2BA[0x6];
	class UObject*                                __verse_0x91E0A2A2_NPCActions_1;
	FOptionProperty_                              _ExprResultStack_33;
	FVerseFunctionProperty_                       _Callee_34;
	struct VerseArchetypes::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_35;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_36;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_37;
	uint8                                         Pad_2F2[0x6];
	class UObject*                                __verse_0xF161303F_WeaponActions_1;
	FOptionProperty_                              _ExprResultStack_38;
	FVerseFunctionProperty_                       _Callee_39;
	struct VerseArchetypes::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_40;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_41;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_42;
	uint8                                         Pad_32A[0x6];
	FOptionProperty_                              _ExprResult_43;
	FOptionProperty_                              _ExprResult_44;
	FOptionProperty_                              _ExprResult_45;
	FOptionProperty_                              _ExprResult_46;
	FOptionProperty_                              _ExprResult_47;
	FOptionProperty_                              _ExprResult_48;
	int64                                         __verse_0xD3E63614_CallbackId_1;
	class UObject*                                __verse_0x00000000__2;
	FVerseFunctionProperty_                       _Callee_49;
	FOptionProperty_                              _ExprResult_50;
	uint8                                         Pad_389[0x7];
	struct FSpatialMath_vector3                   __verse_0x51FFEC24_InitialPosition_1;
	uint8                                         Pad_3A8[0x8];
	struct FSpatialMath_transform                 _ExprResult_51;
	class UObject*                                __verse_0x00000000__3;
	FVerseFunctionProperty_                       _Callee_52;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_53;
	uint8                                         Pad_429[0x7];
	class UObject*                                __verse_0x00000000__4;
	EVerseTrue                                    _InvokeSureResultDummy_54;
	uint8                                         Pad_439[0x7];
	FVerseFunctionProperty_                       _Callee_55;
	struct VerseArchetypes::Ftuple_Lvector3_Mfloat_Mfloat_R _ExprResult_56;
	FOptionProperty_                              __verse_0x3FD225AC_BestLongRangeWeapon_1;
	FOptionProperty_                              __verse_0x00000000__5;
	uint8                                         _ExprResult_57 : 1;
	FOptionProperty_                              _ExprResultStack_58;
	uint8                                         Pad_49E[0x2];
	FOptionProperty_                              __verse_0x60979DCA_BestShortRangeWeapon_1;
	FOptionProperty_                              __verse_0x00000000__7;
	uint8                                         _ExprResult_59 : 1;
	FOptionProperty_                              _ExprResultStack_60;
	uint8                                         Pad_4C6[0x2];
	TArray<struct FVerseAIBase_fort_item_descriptor> _ForIterable_61;
	class UObject*                                __verse_0x00000000__11;
	FVerseFunctionProperty_                       _Callee_62;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_63;
	uint8                                         Pad_4F1[0x7];
	int64                                         _ForIndex_64;
	int64                                         _ForLength_65;
	struct FVerseAIBase_fort_item_descriptor      __verse_0xFB88B569_Item_12;
	struct FVerseAIBase_fort_weapon_descriptor    __verse_0x18F7B1AE_Weapon_15;
	class UObject*                                __verse_0x00000000__16;
	FOptionProperty_                              _ExprResultStack_66;
	uint8                                         Pad_559[0x7];
	FVerseFunctionProperty_                       _Callee_67;
	class UVerseAIBase_fort_melee_weapon_tag*     _FallibleType_68;
	FOptionProperty_                              _FallibleType_69;
	FOptionProperty_                              _ExprResultStack_70;
	uint8                                         Pad_5A1[0x7];
	FOptionProperty_                              _ExprResultStack_71;
	uint8                                         Pad_5B1[0x7];
	FOptionProperty_                              _ExprResultStack_72;
	uint8                                         Pad_5D9[0x7];
	FOptionProperty_                              _ExprResult_73;
	uint8                                         Pad_601[0x7];
	struct Ftuple_Lfort__weapon__descriptor_Mfort__item__tag_R _ExprResult_74;
	FOptionProperty_                              _ExprResultStack_75;
	uint8                                         Pad_649[0x7];
	FOptionProperty_                              _ExprResultStack_76;
	uint8                                         Pad_659[0x7];
	FOptionProperty_                              _ExprResultStack_77;
	uint8                                         Pad_681[0x7];
	FOptionProperty_                              _ExprResult_78;
	uint8                                         Pad_6A9[0x7];
	struct Ftuple_Lfort__weapon__descriptor_Mfort__item__tag_R _ExprResult_79;
	struct Ftuple_Lfort__weapon__descriptor_Mfort__item__tag_R __verse_0xAF1CE4AC_WeaponTuple_21;
	FOptionProperty_                              _ExprResultStack_80;
	EVerseTrue                                    _InvokeSureResultDummy_81;
	uint8                                         Pad_712[0x6];
	FVerseFunctionProperty_                       _Callee_82;
	FVerseStringProperty_                         _ExprResult_83;
	TArray<FVerseDynamicProperty_>                __verse_0xFFC68BC5_Array_22;
	FVerseFunctionProperty_                       _Callee_84;
	TArray<TArray<FVerseDynamicProperty_>>        _ExprResult_85;
	TArray<FVerseStringProperty_>                 __verse_0xFFC68BC5_Array_23;
	struct VerseArchetypes::Ftuple_L_Kchar_M_Kchar_R __verse_0x00000000__24;
	FVerseStringProperty_                         _ExprResult_86;
	FVerseStringProperty_                         _ExprResultStack_87;
	FVerseFunctionProperty_                       _Callee_88;
	FVerseStringProperty_                         _ExprResultStack_89;
	FVerseFunctionProperty_                       _Callee_90;
	FVerseStringProperty_                         _ExprResultDummy_91;
	FVerseStringProperty_                         _ExprResultDummy_92;
	TArray<TArray<FVerseDynamicProperty_>>        _ForResult_93;
	int64                                         _ForIndex_94;
	int64                                         _ForLength_95;
	FVerseStringProperty_                         __verse_0xFB88B569_Item_26;
	TArray<FVerseDynamicProperty_>                _ExprResult_96;
	FVerseStringProperty_                         __verse_0xFFC68BC5_Array_27;
	TArray<FVerseDynamicProperty_>                _ForResult_97;
	int64                                         _ForIndex_98;
	int64                                         _ForLength_99;
	uint8                                         __verse_0xFB88B569_Item_29;
	uint8                                         Pad_879[0x7];
	FVerseDynamicProperty_                        _ExprResult_100;
	FVerseStringProperty_                         _ForResult_101;
	int64                                         _ForIndex_102;
	int64                                         _ForLength_103;
	FVerseDynamicProperty_                        __verse_0xFB88B569_Item_31;
	uint8                                         _ExprResult_104;
	EVerseTrue                                    _InvokeSureResultDummy_105;
	uint8                                         Pad_8C2[0x6];
	FVerseFunctionProperty_                       _Callee_106;
	FVerseStringProperty_                         _ExprResult_107;
	struct Ftuple_Lfort__weapon__descriptor_Mfort__item__tag_R __verse_0xAF1CE4AC_WeaponTuple_34;
	FOptionProperty_                              _ExprResultStack_108;
	EVerseTrue                                    _InvokeSureResultDummy_109;
	uint8                                         Pad_92A[0x6];
	FVerseFunctionProperty_                       _Callee_110;
	FVerseStringProperty_                         _ExprResult_111;
	TArray<FVerseDynamicProperty_>                __verse_0xFFC68BC5_Array_35;
	FVerseFunctionProperty_                       _Callee_112;
	TArray<TArray<FVerseDynamicProperty_>>        _ExprResult_113;
	TArray<FVerseStringProperty_>                 __verse_0xFFC68BC5_Array_36;
	struct VerseArchetypes::Ftuple_L_Kchar_M_Kchar_R __verse_0x00000000__37;
	FVerseStringProperty_                         _ExprResult_114;
	FVerseStringProperty_                         _ExprResultStack_115;
	FVerseFunctionProperty_                       _Callee_116;
	FVerseStringProperty_                         _ExprResultStack_117;
	FVerseFunctionProperty_                       _Callee_118;
	FVerseStringProperty_                         _ExprResultDummy_119;
	FVerseStringProperty_                         _ExprResultDummy_120;
	TArray<TArray<FVerseDynamicProperty_>>        _ForResult_121;
	int64                                         _ForIndex_122;
	int64                                         _ForLength_123;
	FVerseStringProperty_                         __verse_0xFB88B569_Item_39;
	TArray<FVerseDynamicProperty_>                _ExprResult_124;
	FVerseStringProperty_                         __verse_0xFFC68BC5_Array_40;
	TArray<FVerseDynamicProperty_>                _ForResult_125;
	int64                                         _ForIndex_126;
	int64                                         _ForLength_127;
	uint8                                         __verse_0xFB88B569_Item_42;
	uint8                                         Pad_A91[0x7];
	FVerseDynamicProperty_                        _ExprResult_128;
	FVerseStringProperty_                         _ForResult_129;
	int64                                         _ForIndex_130;
	int64                                         _ForLength_131;
	FVerseDynamicProperty_                        __verse_0xFB88B569_Item_44;
	uint8                                         _ExprResult_132;
	EVerseTrue                                    _InvokeSureResultDummy_133;
	uint8                                         Pad_ADA[0x6];
	FVerseFunctionProperty_                       _Callee_134;
	FVerseStringProperty_                         _ExprResult_135;
	class UObject*                                __verse_0x00000000__47;
	EVerseTrue                                    _InvokeSureResultDummy_136;
	uint8                                         Pad_B09[0x7];
	FVerseFunctionProperty_                       _Callee_137;
	class UObject*                                __verse_0x00000000__48;
	EVerseTrue                                    _InvokeSureResultDummy_138;
	uint8                                         Pad_B29[0x7];
	FVerseFunctionProperty_                       _Callee_139;
	class UObject*                                __verse_0x00000000__49;
	EVerseTrue                                    _InvokeSureResultDummy_140;
	uint8                                         Pad_B49[0x7];
	FVerseFunctionProperty_                       _Callee_141;
	class UObject*                                __verse_0x00000000__50;
	EVerseTrue                                    _InvokeSureResultDummy_142;
	uint8                                         Pad_B69[0x7];
	FVerseFunctionProperty_                       _Callee_143;
	class UConcurrency_task*                      _AsyncTask_144;
	FVerseFunctionProperty_                       _AsyncTaskClass_145;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_146;
	uint8                                         Pad_B99[0x7];
	int64                                         _AsyncResult_147;
	EVerseTrue                                    _InvokeSureResultDummy_148;
	uint8                                         Pad_BA9[0x7];
	FVerseFunctionProperty_                       _Callee_149;
	FVerseStringProperty_                         _ExprResult_150;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_VerseArchetypes_sniper_ai$OnBegin">();
	}
	static class Utask_VerseArchetypes_sniper_ai_OnBegin* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_VerseArchetypes_sniper_ai_OnBegin>();
	}
};
static_assert(alignof(Utask_VerseArchetypes_sniper_ai_OnBegin) == 0x000010, "Wrong alignment on Utask_VerseArchetypes_sniper_ai_OnBegin");
static_assert(sizeof(Utask_VerseArchetypes_sniper_ai_OnBegin) == 0x000BD0, "Wrong size on Utask_VerseArchetypes_sniper_ai_OnBegin");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _Self) == 0x000148, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_Self' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0xF80AEC27_FortCharacter_1) == 0x000158, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0xF80AEC27_FortCharacter_1' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResultStack_0) == 0x000160, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResultStack_0' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _Callee_1) == 0x000168, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_Callee_1' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_2) == 0x000178, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResultStack_3) == 0x000188, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResultStack_3' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _Callee_4) == 0x000190, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_Callee_4' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_5) == 0x0001A0, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_5' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_6) == 0x0001A1, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_6' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_7) == 0x0001A2, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_7' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0x21D7FA2A_FortNavigation_1) == 0x0001A8, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0x21D7FA2A_FortNavigation_1' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResultStack_8) == 0x0001B0, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResultStack_8' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _Callee_9) == 0x0001B8, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_Callee_9' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_10) == 0x0001C8, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_10' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_11) == 0x0001D8, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_11' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_12) == 0x0001D9, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_12' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0x5F0E38C3_FortLeash_1) == 0x0001E0, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0x5F0E38C3_FortLeash_1' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResultStack_13) == 0x0001E8, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResultStack_13' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _Callee_14) == 0x0001F0, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_Callee_14' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_15) == 0x000200, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_15' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_16) == 0x000210, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_16' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_17) == 0x000211, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_17' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0x47B0B441_CharacterMovement_1) == 0x000218, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0x47B0B441_CharacterMovement_1' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResultStack_18) == 0x000220, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResultStack_18' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _Callee_19) == 0x000228, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_Callee_19' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_20) == 0x000238, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_20' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_21) == 0x000248, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_21' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_22) == 0x000249, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_22' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0x2E1D28B3_Inventory_1) == 0x000250, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0x2E1D28B3_Inventory_1' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResultStack_23) == 0x000258, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResultStack_23' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _Callee_24) == 0x000260, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_Callee_24' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_25) == 0x000270, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_25' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_26) == 0x000280, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_26' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_27) == 0x000281, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_27' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0x0F05355D_ThreatPerception_1) == 0x000288, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0x0F05355D_ThreatPerception_1' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResultStack_28) == 0x000290, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResultStack_28' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _Callee_29) == 0x000298, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_Callee_29' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_30) == 0x0002A8, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_30' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_31) == 0x0002B8, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_31' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_32) == 0x0002B9, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_32' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0x91E0A2A2_NPCActions_1) == 0x0002C0, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0x91E0A2A2_NPCActions_1' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResultStack_33) == 0x0002C8, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResultStack_33' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _Callee_34) == 0x0002D0, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_Callee_34' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_35) == 0x0002E0, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_35' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_36) == 0x0002F0, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_36' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_37) == 0x0002F1, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_37' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0xF161303F_WeaponActions_1) == 0x0002F8, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0xF161303F_WeaponActions_1' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResultStack_38) == 0x000300, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResultStack_38' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _Callee_39) == 0x000308, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_Callee_39' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_40) == 0x000318, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_40' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_41) == 0x000328, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_41' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_42) == 0x000329, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_42' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_43) == 0x000330, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_43' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_44) == 0x000338, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_44' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_45) == 0x000340, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_45' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_46) == 0x000348, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_46' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_47) == 0x000350, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_47' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_48) == 0x000358, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_48' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0xD3E63614_CallbackId_1) == 0x000360, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0xD3E63614_CallbackId_1' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0x00000000__2) == 0x000368, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0x00000000__2' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _Callee_49) == 0x000370, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_Callee_49' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_50) == 0x000380, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_50' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0x51FFEC24_InitialPosition_1) == 0x000390, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0x51FFEC24_InitialPosition_1' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_51) == 0x0003B0, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_51' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0x00000000__3) == 0x000410, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0x00000000__3' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _Callee_52) == 0x000418, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_Callee_52' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_53) == 0x000428, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_53' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0x00000000__4) == 0x000430, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0x00000000__4' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _InvokeSureResultDummy_54) == 0x000438, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_InvokeSureResultDummy_54' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _Callee_55) == 0x000440, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_Callee_55' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_56) == 0x000450, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_56' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0x3FD225AC_BestLongRangeWeapon_1) == 0x000478, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0x3FD225AC_BestLongRangeWeapon_1' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0x00000000__5) == 0x000499, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0x00000000__5' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResultStack_58) == 0x00049C, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResultStack_58' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0x60979DCA_BestShortRangeWeapon_1) == 0x0004A0, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0x60979DCA_BestShortRangeWeapon_1' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0x00000000__7) == 0x0004C1, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0x00000000__7' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResultStack_60) == 0x0004C4, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResultStack_60' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ForIterable_61) == 0x0004C8, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ForIterable_61' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0x00000000__11) == 0x0004D8, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0x00000000__11' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _Callee_62) == 0x0004E0, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_Callee_62' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_63) == 0x0004F0, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_63' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ForIndex_64) == 0x0004F8, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ForIndex_64' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ForLength_65) == 0x000500, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ForLength_65' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0xFB88B569_Item_12) == 0x000508, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0xFB88B569_Item_12' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0x18F7B1AE_Weapon_15) == 0x000520, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0x18F7B1AE_Weapon_15' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0x00000000__16) == 0x000538, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0x00000000__16' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResultStack_66) == 0x000540, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResultStack_66' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _Callee_67) == 0x000560, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_Callee_67' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _FallibleType_68) == 0x000570, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_FallibleType_68' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _FallibleType_69) == 0x000578, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_FallibleType_69' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResultStack_70) == 0x000580, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResultStack_70' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResultStack_71) == 0x0005A8, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResultStack_71' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResultStack_72) == 0x0005B8, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResultStack_72' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_73) == 0x0005E0, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_73' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_74) == 0x000608, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_74' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResultStack_75) == 0x000628, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResultStack_75' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResultStack_76) == 0x000650, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResultStack_76' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResultStack_77) == 0x000660, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResultStack_77' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_78) == 0x000688, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_78' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_79) == 0x0006B0, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_79' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0xAF1CE4AC_WeaponTuple_21) == 0x0006D0, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0xAF1CE4AC_WeaponTuple_21' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResultStack_80) == 0x0006F0, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResultStack_80' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _InvokeSureResultDummy_81) == 0x000711, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_InvokeSureResultDummy_81' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _Callee_82) == 0x000718, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_Callee_82' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_83) == 0x000728, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_83' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0xFFC68BC5_Array_22) == 0x000738, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0xFFC68BC5_Array_22' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _Callee_84) == 0x000748, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_Callee_84' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_85) == 0x000758, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_85' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0xFFC68BC5_Array_23) == 0x000768, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0xFFC68BC5_Array_23' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0x00000000__24) == 0x000778, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0x00000000__24' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_86) == 0x000798, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_86' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResultStack_87) == 0x0007A8, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResultStack_87' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _Callee_88) == 0x0007B8, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_Callee_88' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResultStack_89) == 0x0007C8, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResultStack_89' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _Callee_90) == 0x0007D8, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_Callee_90' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResultDummy_91) == 0x0007E8, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResultDummy_91' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResultDummy_92) == 0x0007F8, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResultDummy_92' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ForResult_93) == 0x000808, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ForResult_93' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ForIndex_94) == 0x000818, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ForIndex_94' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ForLength_95) == 0x000820, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ForLength_95' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0xFB88B569_Item_26) == 0x000828, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0xFB88B569_Item_26' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_96) == 0x000838, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_96' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0xFFC68BC5_Array_27) == 0x000848, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0xFFC68BC5_Array_27' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ForResult_97) == 0x000858, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ForResult_97' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ForIndex_98) == 0x000868, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ForIndex_98' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ForLength_99) == 0x000870, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ForLength_99' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0xFB88B569_Item_29) == 0x000878, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0xFB88B569_Item_29' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_100) == 0x000880, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_100' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ForResult_101) == 0x000890, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ForResult_101' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ForIndex_102) == 0x0008A0, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ForIndex_102' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ForLength_103) == 0x0008A8, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ForLength_103' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0xFB88B569_Item_31) == 0x0008B0, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0xFB88B569_Item_31' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_104) == 0x0008C0, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_104' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _InvokeSureResultDummy_105) == 0x0008C1, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_InvokeSureResultDummy_105' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _Callee_106) == 0x0008C8, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_Callee_106' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_107) == 0x0008D8, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_107' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0xAF1CE4AC_WeaponTuple_34) == 0x0008E8, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0xAF1CE4AC_WeaponTuple_34' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResultStack_108) == 0x000908, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResultStack_108' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _InvokeSureResultDummy_109) == 0x000929, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_InvokeSureResultDummy_109' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _Callee_110) == 0x000930, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_Callee_110' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_111) == 0x000940, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_111' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0xFFC68BC5_Array_35) == 0x000950, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0xFFC68BC5_Array_35' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _Callee_112) == 0x000960, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_Callee_112' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_113) == 0x000970, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_113' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0xFFC68BC5_Array_36) == 0x000980, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0xFFC68BC5_Array_36' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0x00000000__37) == 0x000990, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0x00000000__37' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_114) == 0x0009B0, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_114' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResultStack_115) == 0x0009C0, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResultStack_115' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _Callee_116) == 0x0009D0, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_Callee_116' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResultStack_117) == 0x0009E0, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResultStack_117' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _Callee_118) == 0x0009F0, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_Callee_118' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResultDummy_119) == 0x000A00, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResultDummy_119' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResultDummy_120) == 0x000A10, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResultDummy_120' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ForResult_121) == 0x000A20, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ForResult_121' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ForIndex_122) == 0x000A30, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ForIndex_122' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ForLength_123) == 0x000A38, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ForLength_123' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0xFB88B569_Item_39) == 0x000A40, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0xFB88B569_Item_39' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_124) == 0x000A50, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_124' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0xFFC68BC5_Array_40) == 0x000A60, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0xFFC68BC5_Array_40' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ForResult_125) == 0x000A70, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ForResult_125' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ForIndex_126) == 0x000A80, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ForIndex_126' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ForLength_127) == 0x000A88, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ForLength_127' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0xFB88B569_Item_42) == 0x000A90, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0xFB88B569_Item_42' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_128) == 0x000A98, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_128' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ForResult_129) == 0x000AA8, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ForResult_129' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ForIndex_130) == 0x000AB8, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ForIndex_130' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ForLength_131) == 0x000AC0, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ForLength_131' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0xFB88B569_Item_44) == 0x000AC8, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0xFB88B569_Item_44' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_132) == 0x000AD8, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_132' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _InvokeSureResultDummy_133) == 0x000AD9, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_InvokeSureResultDummy_133' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _Callee_134) == 0x000AE0, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_Callee_134' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_135) == 0x000AF0, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_135' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0x00000000__47) == 0x000B00, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0x00000000__47' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _InvokeSureResultDummy_136) == 0x000B08, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_InvokeSureResultDummy_136' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _Callee_137) == 0x000B10, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_Callee_137' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0x00000000__48) == 0x000B20, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0x00000000__48' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _InvokeSureResultDummy_138) == 0x000B28, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_InvokeSureResultDummy_138' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _Callee_139) == 0x000B30, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_Callee_139' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0x00000000__49) == 0x000B40, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0x00000000__49' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _InvokeSureResultDummy_140) == 0x000B48, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_InvokeSureResultDummy_140' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _Callee_141) == 0x000B50, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_Callee_141' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, __verse_0x00000000__50) == 0x000B60, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::__verse_0x00000000__50' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _InvokeSureResultDummy_142) == 0x000B68, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_InvokeSureResultDummy_142' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _Callee_143) == 0x000B70, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_Callee_143' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _AsyncTask_144) == 0x000B80, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_AsyncTask_144' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _AsyncTaskClass_145) == 0x000B88, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_AsyncTaskClass_145' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_146) == 0x000B98, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_146' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _AsyncResult_147) == 0x000BA0, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_AsyncResult_147' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _InvokeSureResultDummy_148) == 0x000BA8, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_InvokeSureResultDummy_148' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _Callee_149) == 0x000BB0, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_Callee_149' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_OnBegin, _ExprResult_150) == 0x000BC0, "Member 'Utask_VerseArchetypes_sniper_ai_OnBegin::_ExprResult_150' has a wrong offset!");

class Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R final : public UConcurrency_task
{
public:
	class UVerseArchetypes_sniper_ai*             _Self;
	struct FVerseAIBase_fort_threat_info          __verse_0xB2CDDD72_Argument;
	class UObject*                                __verse_0xF161303F_WeaponActions_1;
	FOptionProperty_                              _ExprResultStack_0;
	class UConcurrency_task*                      _AsyncTask_1;
	FVerseFunctionProperty_                       _AsyncTaskClass_2;
	int64                                         _AsyncResult_3;
	uint8                                         __verse_0x00D31F3D_HasReload_2 : 1;
	uint8                                         Pad_1B1[0x7];
	class UObject*                                __verse_0x00000000__3;
	FVerseFunctionProperty_                       _Callee_4;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_5;
	FOptionProperty_                              _ExprResultStack_6;
	uint8                                         Pad_1D3[0x5];
	FVerseFunctionProperty_                       _AsyncTaskClass_7;
	FOptionProperty_                              _ExprResultStack_8;
	uint8                                         __verse_0x007EAE9B_HasFired_5 : 1;
	uint8                                         Pad_1EB[0x5];
	class UObject*                                __verse_0x00000000__6;
	FVerseFunctionProperty_                       _Callee_9;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_10;
	FOptionProperty_                              _ExprResultStack_11;
	uint8                                         Pad_20B[0x5];
	FVerseFunctionProperty_                       _AsyncTaskClass_12;
	FVerseFunctionProperty_                       _AsyncTaskClass_13;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_VerseArchetypes_sniper_ai$UseSniperWeapon_L_Nfort__threat__info_R">();
	}
	static class Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R>();
	}
};
static_assert(alignof(Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R) == 0x000008, "Wrong alignment on Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R");
static_assert(sizeof(Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R) == 0x000230, "Wrong size on Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R, _Self) == 0x000148, "Member 'Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R::_Self' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R, __verse_0xF161303F_WeaponActions_1) == 0x000180, "Member 'Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R::__verse_0xF161303F_WeaponActions_1' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R, _ExprResultStack_0) == 0x000188, "Member 'Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R::_ExprResultStack_0' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R, _AsyncTask_1) == 0x000190, "Member 'Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R::_AsyncTask_1' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R, _AsyncTaskClass_2) == 0x000198, "Member 'Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R::_AsyncTaskClass_2' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R, _AsyncResult_3) == 0x0001A8, "Member 'Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R::_AsyncResult_3' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R, __verse_0x00000000__3) == 0x0001B8, "Member 'Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R::__verse_0x00000000__3' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R, _Callee_4) == 0x0001C0, "Member 'Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R::_Callee_4' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R, _ExprResult_5) == 0x0001D0, "Member 'Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R::_ExprResult_5' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R, _ExprResultStack_6) == 0x0001D1, "Member 'Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R::_ExprResultStack_6' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R, _AsyncTaskClass_7) == 0x0001D8, "Member 'Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R::_AsyncTaskClass_7' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R, _ExprResultStack_8) == 0x0001E8, "Member 'Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R::_ExprResultStack_8' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R, __verse_0x00000000__6) == 0x0001F0, "Member 'Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R::__verse_0x00000000__6' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R, _Callee_9) == 0x0001F8, "Member 'Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R::_Callee_9' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R, _ExprResult_10) == 0x000208, "Member 'Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R::_ExprResult_10' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R, _ExprResultStack_11) == 0x000209, "Member 'Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R::_ExprResultStack_11' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R, _AsyncTaskClass_12) == 0x000210, "Member 'Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R::_AsyncTaskClass_12' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R, _AsyncTaskClass_13) == 0x000220, "Member 'Utask_VerseArchetypes_sniper_ai_UseSniperWeapon_L_Nfort__threat__info_R::_AsyncTaskClass_13' has a wrong offset!");

class Utask_VerseArchetypes_sniper_ai_PatrolAround final : public UConcurrency_task
{
public:
	class UVerseArchetypes_sniper_ai*             _Self;
	struct VerseArchetypes::Ftuple_L_R            __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_151[0x7];
	class UObject*                                __verse_0xCCC0089F_Navigation_1;
	FOptionProperty_                              _ExprResultStack_0;
	class UObject*                                __verse_0xA26259EF_Movement_1;
	FOptionProperty_                              _ExprResultStack_1;
	uint8                                         _AsyncBeginCount_2 : 1;
	uint8                                         Pad_179[0x7];
	class UObject*                                __verse_0x00000000__2;
	class UConcurrency_task*                      _AsyncTask_3;
	FVerseFunctionProperty_                       _AsyncTaskClass_4;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_5;
	uint8                                         Pad_1A1[0x7];
	int64                                         _AsyncResult_6;
	class UObject*                                __verse_0x00000000__4;
	class UConcurrency_task*                      _AsyncTask_7;
	FVerseFunctionProperty_                       _AsyncTaskClass_8;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_9;
	uint8                                         Pad_1D1[0x7];
	int64                                         _AsyncResult_10;
	FVerseFunctionProperty_                       _AsyncTaskClass_11;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_VerseArchetypes_sniper_ai$PatrolAround">();
	}
	static class Utask_VerseArchetypes_sniper_ai_PatrolAround* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_VerseArchetypes_sniper_ai_PatrolAround>();
	}
};
static_assert(alignof(Utask_VerseArchetypes_sniper_ai_PatrolAround) == 0x000008, "Wrong alignment on Utask_VerseArchetypes_sniper_ai_PatrolAround");
static_assert(sizeof(Utask_VerseArchetypes_sniper_ai_PatrolAround) == 0x0001F0, "Wrong size on Utask_VerseArchetypes_sniper_ai_PatrolAround");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_PatrolAround, _Self) == 0x000148, "Member 'Utask_VerseArchetypes_sniper_ai_PatrolAround::_Self' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_PatrolAround, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_VerseArchetypes_sniper_ai_PatrolAround::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_PatrolAround, __verse_0xCCC0089F_Navigation_1) == 0x000158, "Member 'Utask_VerseArchetypes_sniper_ai_PatrolAround::__verse_0xCCC0089F_Navigation_1' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_PatrolAround, _ExprResultStack_0) == 0x000160, "Member 'Utask_VerseArchetypes_sniper_ai_PatrolAround::_ExprResultStack_0' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_PatrolAround, __verse_0xA26259EF_Movement_1) == 0x000168, "Member 'Utask_VerseArchetypes_sniper_ai_PatrolAround::__verse_0xA26259EF_Movement_1' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_PatrolAround, _ExprResultStack_1) == 0x000170, "Member 'Utask_VerseArchetypes_sniper_ai_PatrolAround::_ExprResultStack_1' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_PatrolAround, __verse_0x00000000__2) == 0x000180, "Member 'Utask_VerseArchetypes_sniper_ai_PatrolAround::__verse_0x00000000__2' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_PatrolAround, _AsyncTask_3) == 0x000188, "Member 'Utask_VerseArchetypes_sniper_ai_PatrolAround::_AsyncTask_3' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_PatrolAround, _AsyncTaskClass_4) == 0x000190, "Member 'Utask_VerseArchetypes_sniper_ai_PatrolAround::_AsyncTaskClass_4' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_PatrolAround, _ExprResult_5) == 0x0001A0, "Member 'Utask_VerseArchetypes_sniper_ai_PatrolAround::_ExprResult_5' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_PatrolAround, _AsyncResult_6) == 0x0001A8, "Member 'Utask_VerseArchetypes_sniper_ai_PatrolAround::_AsyncResult_6' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_PatrolAround, __verse_0x00000000__4) == 0x0001B0, "Member 'Utask_VerseArchetypes_sniper_ai_PatrolAround::__verse_0x00000000__4' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_PatrolAround, _AsyncTask_7) == 0x0001B8, "Member 'Utask_VerseArchetypes_sniper_ai_PatrolAround::_AsyncTask_7' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_PatrolAround, _AsyncTaskClass_8) == 0x0001C0, "Member 'Utask_VerseArchetypes_sniper_ai_PatrolAround::_AsyncTaskClass_8' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_PatrolAround, _ExprResult_9) == 0x0001D0, "Member 'Utask_VerseArchetypes_sniper_ai_PatrolAround::_ExprResult_9' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_PatrolAround, _AsyncResult_10) == 0x0001D8, "Member 'Utask_VerseArchetypes_sniper_ai_PatrolAround::_AsyncResult_10' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_sniper_ai_PatrolAround, _AsyncTaskClass_11) == 0x0001E0, "Member 'Utask_VerseArchetypes_sniper_ai_PatrolAround::_AsyncTaskClass_11' has a wrong offset!");

class Utask_VerseArchetypes_template_ai_OnBegin final : public UConcurrency_task
{
public:
	class UVerseArchetypes_template_ai*           _Self;
	struct VerseArchetypes::Ftuple_L_R            __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_151[0x7];
	class UObject*                                __verse_0xF80AEC27_FortCharacter_1;
	FOptionProperty_                              _ExprResultStack_0;
	FVerseFunctionProperty_                       _Callee_1;
	struct VerseArchetypes::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R _ExprResult_2;
	FOptionProperty_                              _ExprResultStack_3;
	FVerseFunctionProperty_                       _Callee_4;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_5;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_6;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_7;
	uint8                                         Pad_1A3[0x5];
	class UObject*                                __verse_0x00000000__2;
	EVerseTrue                                    _InvokeSureResultDummy_8;
	uint8                                         Pad_1B1[0x7];
	FVerseFunctionProperty_                       _Callee_9;
	class UObject*                                __verse_0x00000000__3;
	EVerseTrue                                    _InvokeSureResultDummy_10;
	uint8                                         Pad_1D1[0x7];
	FVerseFunctionProperty_                       _Callee_11;
	class UObject*                                __verse_0x00000000__4;
	EVerseTrue                                    _InvokeSureResultDummy_12;
	uint8                                         Pad_1F1[0x7];
	FVerseFunctionProperty_                       _Callee_13;
	class UObject*                                __verse_0x00000000__5;
	EVerseTrue                                    _InvokeSureResultDummy_14;
	uint8                                         Pad_211[0x7];
	FVerseFunctionProperty_                       _Callee_15;
	class UObject*                                __verse_0x9F6FC7A8_OnDamageEvent_1;
	class UObject*                                __verse_0x00000000__6;
	class UObject*                                __verse_0x00000000__7;
	FVerseFunctionProperty_                       _Callee_16;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_17;
	uint8                                         Pad_251[0x7];
	FVerseFunctionProperty_                       _Callee_18;
	class UObject*                                __verse_0xE9552CF3_OnHealedEvent_1;
	class UObject*                                __verse_0x00000000__8;
	class UObject*                                __verse_0x00000000__9;
	FVerseFunctionProperty_                       _Callee_19;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_20;
	uint8                                         Pad_291[0x7];
	FVerseFunctionProperty_                       _Callee_21;
	class UObject*                                __verse_0xCCC0089F_Navigation_10;
	FOptionProperty_                              _ExprResultStack_22;
	FVerseFunctionProperty_                       _Callee_23;
	struct VerseArchetypes::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_24;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_25;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_26;
	uint8                                         Pad_2DA[0x6];
	class UObject*                                __verse_0x47B0B441_CharacterMovement_10;
	FOptionProperty_                              _ExprResultStack_27;
	FVerseFunctionProperty_                       _Callee_28;
	struct VerseArchetypes::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_29;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_30;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_31;
	uint8                                         Pad_312[0x6];
	class UObject*                                __verse_0x91E0A2A2_NPCActions_10;
	FOptionProperty_                              _ExprResultStack_32;
	FVerseFunctionProperty_                       _Callee_33;
	struct VerseArchetypes::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_34;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_35;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_36;
	uint8                                         Pad_34A[0x6];
	struct FSpatialMath_vector3                   __verse_0xFE3AE8F0_OriginalPosition_10;
	uint8                                         Pad_368[0x8];
	struct FSpatialMath_transform                 _ExprResult_37;
	class UObject*                                __verse_0x00000000__11;
	FVerseFunctionProperty_                       _Callee_38;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_39;
	EVerseTrue                                    _InvokeSureResultDummy_40;
	uint8                                         Pad_3EA[0x6];
	FVerseFunctionProperty_                       _Callee_41;
	FVerseStringProperty_                         _ExprResult_42;
	class UObject*                                __verse_0x00000000__13;
	class UConcurrency_task*                      _AsyncTask_43;
	FVerseFunctionProperty_                       _AsyncTaskClass_44;
	struct VerseArchetypes::Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R _ExprResult_45;
	class UVerseAIBase_navigation_target*         _ExprResultStack_47;
	FVerseFunctionProperty_                       _Callee_48;
	struct FSpatialMath_vector3                   _ExprResultStack_49;
	FVerseFunctionProperty_                       _Callee_50;
	struct VerseArchetypes::Ftuple_Lvector3_Mvector3_R _ExprResult_51;
	struct FSpatialMath_vector3                   _ExprResult_52;
	FOptionProperty_                              _ExprResult_53;
	FOptionProperty_                              _ExprResult_54;
	uint8                                         Pad_4DB[0x5];
	int64                                         _AsyncResult_55;
	class UObject*                                __verse_0x00000000__14;
	FVerseFunctionProperty_                       _AsyncTaskClass_56;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_57;
	EVerseTrue                                    _InvokeSureResultDummy_58;
	uint8                                         Pad_502[0x6];
	FVerseFunctionProperty_                       _Callee_59;
	FVerseStringProperty_                         _ExprResult_60;
	class UObject*                                __verse_0x00000000__15;
	FVerseFunctionProperty_                       _AsyncTaskClass_61;
	struct VerseArchetypes::Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R _ExprResult_62;
	class UVerseAIBase_navigation_target*         _ExprResultStack_64;
	FVerseFunctionProperty_                       _Callee_65;
	struct FSpatialMath_vector3                   _ExprResultStack_66;
	FVerseFunctionProperty_                       _Callee_67;
	struct VerseArchetypes::Ftuple_Lvector3_Mvector3_R _ExprResult_68;
	struct FSpatialMath_vector3                   _ExprResult_69;
	FOptionProperty_                              _ExprResult_70;
	FOptionProperty_                              _ExprResult_71;
	uint8                                         _AsyncBeginCount_72 : 1;
	uint8                                         BitPad_5EB_1 : 7;
	uint8                                         _AsyncBeginCount_73 : 1;
	uint8                                         Pad_5ED[0x3];
	class UObject*                                __verse_0x00000000__16;
	class UConcurrency_task*                      _AsyncTask_74;
	FVerseFunctionProperty_                       _AsyncTaskClass_75;
	int64                                         _AsyncResult_76;
	uint8                                         _AsyncBeginCount_77 : 1;
	uint8                                         Pad_619[0x7];
	class UObject*                                __verse_0x00000000__18;
	class UConcurrency_task*                      _AsyncTask_78;
	FVerseFunctionProperty_                       _AsyncTaskClass_79;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_80;
	uint8                                         Pad_641[0x7];
	int64                                         _AsyncResult_81;
	EVerseTrue                                    _InvokeSureResultDummy_82;
	uint8                                         Pad_651[0x7];
	FVerseFunctionProperty_                       _Callee_83;
	FVerseStringProperty_                         _ExprResult_84;
	uint8                                         _AsyncBeginCount_85 : 1;
	uint8                                         BitPad_678_1 : 7;
	uint8                                         _AsyncBeginCount_86 : 1;
	uint8                                         Pad_67A[0x6];
	class UObject*                                __verse_0x00000000__19;
	class UConcurrency_task*                      _AsyncTask_87;
	FVerseFunctionProperty_                       _AsyncTaskClass_88;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_89;
	uint8                                         Pad_6A1[0x7];
	int64                                         _AsyncResult_90;
	uint8                                         _AsyncBeginCount_91 : 1;
	uint8                                         Pad_6B1[0x7];
	class UObject*                                __verse_0x00000000__20;
	class UConcurrency_task*                      _AsyncTask_92;
	FVerseFunctionProperty_                       _AsyncTaskClass_93;
	struct VerseArchetypes::Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R _ExprResult_94;
	class UVerseAIBase_navigation_target*         _ExprResultStack_96;
	FVerseFunctionProperty_                       _Callee_97;
	struct FSpatialMath_vector3                   _ExprResultStack_98;
	FVerseFunctionProperty_                       _Callee_99;
	struct VerseArchetypes::Ftuple_Lvector3_Mvector3_R _ExprResult_100;
	struct FSpatialMath_vector3                   _ExprResult_101;
	FOptionProperty_                              _ExprResult_102;
	FOptionProperty_                              _ExprResult_103;
	uint8                                         Pad_783[0x5];
	int64                                         _AsyncResult_104;
	EVerseTrue                                    _InvokeSureResultDummy_105;
	uint8                                         Pad_791[0x7];
	FVerseFunctionProperty_                       _Callee_106;
	FVerseStringProperty_                         _ExprResult_107;
	uint8                                         _AsyncBeginCount_108 : 1;
	uint8                                         BitPad_7B8_1 : 7;
	uint8                                         _AsyncBeginCount_109 : 1;
	uint8                                         Pad_7BA[0x6];
	class UObject*                                __verse_0x00000000__21;
	class UConcurrency_task*                      _AsyncTask_110;
	FVerseFunctionProperty_                       _AsyncTaskClass_111;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_112;
	uint8                                         Pad_7E1[0x7];
	int64                                         _AsyncResult_113;
	uint8                                         _AsyncBeginCount_114 : 1;
	uint8                                         Pad_7F1[0x7];
	class UObject*                                __verse_0x00000000__22;
	class UConcurrency_task*                      _AsyncTask_115;
	FVerseFunctionProperty_                       _AsyncTaskClass_116;
	struct VerseArchetypes::Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R _ExprResult_117;
	class UVerseAIBase_navigation_target*         _ExprResultStack_119;
	FVerseFunctionProperty_                       _Callee_120;
	struct FSpatialMath_vector3                   _ExprResultStack_121;
	FVerseFunctionProperty_                       _Callee_122;
	struct VerseArchetypes::Ftuple_Lvector3_Mvector3_R _ExprResult_123;
	struct FSpatialMath_vector3                   _ExprResult_124;
	FOptionProperty_                              _ExprResult_125;
	FOptionProperty_                              _ExprResult_126;
	uint8                                         Pad_8C3[0x5];
	int64                                         _AsyncResult_127;
	class UObject*                                __verse_0x00000000__24;
	EVerseTrue                                    _InvokeSureResultDummy_128;
	uint8                                         Pad_8D9[0x7];
	FVerseFunctionProperty_                       _Callee_129;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_130;
	uint8                                         Pad_8F1[0x7];
	class UObject*                                __verse_0x00000000__25;
	EVerseTrue                                    _InvokeSureResultDummy_131;
	uint8                                         Pad_901[0x7];
	FVerseFunctionProperty_                       _Callee_132;
	struct VerseArchetypes::Ftuple_L_R            _ExprResult_133;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_VerseArchetypes_template_ai$OnBegin">();
	}
	static class Utask_VerseArchetypes_template_ai_OnBegin* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_VerseArchetypes_template_ai_OnBegin>();
	}
};
static_assert(alignof(Utask_VerseArchetypes_template_ai_OnBegin) == 0x000010, "Wrong alignment on Utask_VerseArchetypes_template_ai_OnBegin");
static_assert(sizeof(Utask_VerseArchetypes_template_ai_OnBegin) == 0x000920, "Wrong size on Utask_VerseArchetypes_template_ai_OnBegin");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _Self) == 0x000148, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_Self' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, __verse_0xF80AEC27_FortCharacter_1) == 0x000158, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::__verse_0xF80AEC27_FortCharacter_1' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResultStack_0) == 0x000160, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResultStack_0' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _Callee_1) == 0x000168, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_Callee_1' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_2) == 0x000178, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResultStack_3) == 0x000188, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResultStack_3' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _Callee_4) == 0x000190, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_Callee_4' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_5) == 0x0001A0, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_5' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_6) == 0x0001A1, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_6' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_7) == 0x0001A2, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_7' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, __verse_0x00000000__2) == 0x0001A8, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::__verse_0x00000000__2' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _InvokeSureResultDummy_8) == 0x0001B0, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_InvokeSureResultDummy_8' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _Callee_9) == 0x0001B8, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_Callee_9' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, __verse_0x00000000__3) == 0x0001C8, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::__verse_0x00000000__3' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _InvokeSureResultDummy_10) == 0x0001D0, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_InvokeSureResultDummy_10' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _Callee_11) == 0x0001D8, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_Callee_11' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, __verse_0x00000000__4) == 0x0001E8, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::__verse_0x00000000__4' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _InvokeSureResultDummy_12) == 0x0001F0, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_InvokeSureResultDummy_12' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _Callee_13) == 0x0001F8, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_Callee_13' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, __verse_0x00000000__5) == 0x000208, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::__verse_0x00000000__5' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _InvokeSureResultDummy_14) == 0x000210, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_InvokeSureResultDummy_14' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _Callee_15) == 0x000218, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_Callee_15' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, __verse_0x9F6FC7A8_OnDamageEvent_1) == 0x000228, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::__verse_0x9F6FC7A8_OnDamageEvent_1' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, __verse_0x00000000__6) == 0x000230, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::__verse_0x00000000__6' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, __verse_0x00000000__7) == 0x000238, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::__verse_0x00000000__7' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _Callee_16) == 0x000240, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_Callee_16' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_17) == 0x000250, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_17' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _Callee_18) == 0x000258, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_Callee_18' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, __verse_0xE9552CF3_OnHealedEvent_1) == 0x000268, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::__verse_0xE9552CF3_OnHealedEvent_1' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, __verse_0x00000000__8) == 0x000270, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::__verse_0x00000000__8' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, __verse_0x00000000__9) == 0x000278, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::__verse_0x00000000__9' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _Callee_19) == 0x000280, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_Callee_19' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_20) == 0x000290, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_20' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _Callee_21) == 0x000298, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_Callee_21' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, __verse_0xCCC0089F_Navigation_10) == 0x0002A8, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::__verse_0xCCC0089F_Navigation_10' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResultStack_22) == 0x0002B0, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResultStack_22' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _Callee_23) == 0x0002B8, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_Callee_23' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_24) == 0x0002C8, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_24' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_25) == 0x0002D8, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_25' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_26) == 0x0002D9, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_26' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, __verse_0x47B0B441_CharacterMovement_10) == 0x0002E0, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::__verse_0x47B0B441_CharacterMovement_10' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResultStack_27) == 0x0002E8, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResultStack_27' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _Callee_28) == 0x0002F0, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_Callee_28' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_29) == 0x000300, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_29' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_30) == 0x000310, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_30' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_31) == 0x000311, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_31' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, __verse_0x91E0A2A2_NPCActions_10) == 0x000318, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::__verse_0x91E0A2A2_NPCActions_10' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResultStack_32) == 0x000320, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResultStack_32' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _Callee_33) == 0x000328, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_Callee_33' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_34) == 0x000338, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_34' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_35) == 0x000348, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_35' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_36) == 0x000349, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_36' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, __verse_0xFE3AE8F0_OriginalPosition_10) == 0x000350, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::__verse_0xFE3AE8F0_OriginalPosition_10' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_37) == 0x000370, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_37' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, __verse_0x00000000__11) == 0x0003D0, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::__verse_0x00000000__11' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _Callee_38) == 0x0003D8, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_Callee_38' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_39) == 0x0003E8, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_39' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _InvokeSureResultDummy_40) == 0x0003E9, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_InvokeSureResultDummy_40' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _Callee_41) == 0x0003F0, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_Callee_41' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_42) == 0x000400, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_42' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, __verse_0x00000000__13) == 0x000410, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::__verse_0x00000000__13' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _AsyncTask_43) == 0x000418, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_AsyncTask_43' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _AsyncTaskClass_44) == 0x000420, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_AsyncTaskClass_44' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_45) == 0x000430, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_45' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResultStack_47) == 0x000448, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResultStack_47' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _Callee_48) == 0x000450, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_Callee_48' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResultStack_49) == 0x000460, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResultStack_49' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _Callee_50) == 0x000478, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_Callee_50' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_51) == 0x000488, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_51' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_52) == 0x0004B8, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_52' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_53) == 0x0004D0, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_53' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_54) == 0x0004D9, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_54' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _AsyncResult_55) == 0x0004E0, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_AsyncResult_55' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, __verse_0x00000000__14) == 0x0004E8, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::__verse_0x00000000__14' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _AsyncTaskClass_56) == 0x0004F0, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_AsyncTaskClass_56' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_57) == 0x000500, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_57' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _InvokeSureResultDummy_58) == 0x000501, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_InvokeSureResultDummy_58' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _Callee_59) == 0x000508, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_Callee_59' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_60) == 0x000518, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_60' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, __verse_0x00000000__15) == 0x000528, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::__verse_0x00000000__15' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _AsyncTaskClass_61) == 0x000530, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_AsyncTaskClass_61' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_62) == 0x000540, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_62' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResultStack_64) == 0x000558, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResultStack_64' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _Callee_65) == 0x000560, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_Callee_65' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResultStack_66) == 0x000570, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResultStack_66' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _Callee_67) == 0x000588, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_Callee_67' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_68) == 0x000598, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_68' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_69) == 0x0005C8, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_69' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_70) == 0x0005E0, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_70' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_71) == 0x0005E9, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_71' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, __verse_0x00000000__16) == 0x0005F0, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::__verse_0x00000000__16' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _AsyncTask_74) == 0x0005F8, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_AsyncTask_74' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _AsyncTaskClass_75) == 0x000600, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_AsyncTaskClass_75' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _AsyncResult_76) == 0x000610, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_AsyncResult_76' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, __verse_0x00000000__18) == 0x000620, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::__verse_0x00000000__18' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _AsyncTask_78) == 0x000628, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_AsyncTask_78' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _AsyncTaskClass_79) == 0x000630, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_AsyncTaskClass_79' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_80) == 0x000640, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_80' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _AsyncResult_81) == 0x000648, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_AsyncResult_81' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _InvokeSureResultDummy_82) == 0x000650, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_InvokeSureResultDummy_82' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _Callee_83) == 0x000658, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_Callee_83' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_84) == 0x000668, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_84' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, __verse_0x00000000__19) == 0x000680, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::__verse_0x00000000__19' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _AsyncTask_87) == 0x000688, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_AsyncTask_87' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _AsyncTaskClass_88) == 0x000690, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_AsyncTaskClass_88' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_89) == 0x0006A0, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_89' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _AsyncResult_90) == 0x0006A8, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_AsyncResult_90' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, __verse_0x00000000__20) == 0x0006B8, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::__verse_0x00000000__20' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _AsyncTask_92) == 0x0006C0, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_AsyncTask_92' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _AsyncTaskClass_93) == 0x0006C8, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_AsyncTaskClass_93' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_94) == 0x0006D8, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_94' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResultStack_96) == 0x0006F0, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResultStack_96' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _Callee_97) == 0x0006F8, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_Callee_97' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResultStack_98) == 0x000708, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResultStack_98' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _Callee_99) == 0x000720, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_Callee_99' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_100) == 0x000730, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_100' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_101) == 0x000760, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_101' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_102) == 0x000778, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_102' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_103) == 0x000781, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_103' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _AsyncResult_104) == 0x000788, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_AsyncResult_104' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _InvokeSureResultDummy_105) == 0x000790, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_InvokeSureResultDummy_105' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _Callee_106) == 0x000798, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_Callee_106' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_107) == 0x0007A8, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_107' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, __verse_0x00000000__21) == 0x0007C0, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::__verse_0x00000000__21' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _AsyncTask_110) == 0x0007C8, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_AsyncTask_110' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _AsyncTaskClass_111) == 0x0007D0, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_AsyncTaskClass_111' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_112) == 0x0007E0, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_112' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _AsyncResult_113) == 0x0007E8, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_AsyncResult_113' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, __verse_0x00000000__22) == 0x0007F8, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::__verse_0x00000000__22' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _AsyncTask_115) == 0x000800, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_AsyncTask_115' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _AsyncTaskClass_116) == 0x000808, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_AsyncTaskClass_116' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_117) == 0x000818, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_117' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResultStack_119) == 0x000830, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResultStack_119' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _Callee_120) == 0x000838, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_Callee_120' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResultStack_121) == 0x000848, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResultStack_121' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _Callee_122) == 0x000860, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_Callee_122' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_123) == 0x000870, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_123' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_124) == 0x0008A0, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_124' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_125) == 0x0008B8, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_125' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_126) == 0x0008C1, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_126' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _AsyncResult_127) == 0x0008C8, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_AsyncResult_127' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, __verse_0x00000000__24) == 0x0008D0, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::__verse_0x00000000__24' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _InvokeSureResultDummy_128) == 0x0008D8, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_InvokeSureResultDummy_128' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _Callee_129) == 0x0008E0, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_Callee_129' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_130) == 0x0008F0, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_130' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, __verse_0x00000000__25) == 0x0008F8, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::__verse_0x00000000__25' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _InvokeSureResultDummy_131) == 0x000900, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_InvokeSureResultDummy_131' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _Callee_132) == 0x000908, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_Callee_132' has a wrong offset!");
static_assert(offsetof(Utask_VerseArchetypes_template_ai_OnBegin, _ExprResult_133) == 0x000918, "Member 'Utask_VerseArchetypes_template_ai_OnBegin::_ExprResult_133' has a wrong offset!");

class UVerseArchetypes_log_sniper_ai final : public UDiagnostics_log_channel
{
public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseArchetypes_log_sniper_ai">();
	}
	static class UVerseArchetypes_log_sniper_ai* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseArchetypes_log_sniper_ai>();
	}
};
static_assert(alignof(UVerseArchetypes_log_sniper_ai) == 0x000008, "Wrong alignment on UVerseArchetypes_log_sniper_ai");
static_assert(sizeof(UVerseArchetypes_log_sniper_ai) == 0x000028, "Wrong size on UVerseArchetypes_log_sniper_ai");

class UVerseArchetypes_log_template_ai final : public UDiagnostics_log_channel
{
public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseArchetypes_log_template_ai">();
	}
	static class UVerseArchetypes_log_template_ai* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseArchetypes_log_template_ai>();
	}
};
static_assert(alignof(UVerseArchetypes_log_template_ai) == 0x000008, "Wrong alignment on UVerseArchetypes_log_template_ai");
static_assert(sizeof(UVerseArchetypes_log_template_ai) == 0x000028, "Wrong size on UVerseArchetypes_log_template_ai");

class UVerseArchetypes_sniper_ai final : public UVerseAIBase_ai_behavior
{
public:
	FOptionProperty_                              __verse_0x64C5A7F9_NavigationInterface;
	FOptionProperty_                              __verse_0xA5632554_MovementInterface;
	FOptionProperty_                              __verse_0x44482AE5_InventoryInterface;
	FOptionProperty_                              __verse_0x93DA469B_ThreatPerceptionInterface;
	FOptionProperty_                              __verse_0x83124E52_NPCActionsInterface;
	FOptionProperty_                              __verse_0xCC490D1F_WeaponActionsInterface;
	FOptionProperty_                              __verse_0x0EC93C6C_UseSuggestedWeaponCallbackId;
	uint8                                         Pad_101[0x7];
	class UVerse_event*                           __verse_0xFEDF9D07_WeaponChangedEvent;
	double                                        __verse_0xFB573059_InitialHealth;
	double                                        __verse_0x058B2B11_InitialShield;
	double                                        __verse_0x81441520_LeashInnerRadius;
	double                                        __verse_0x5D9BBC18_LeashOuterRadius;
	double                                        __verse_0xD1AB87B0_PatrolWaitDelay;
	double                                        __verse_0x361CED6D_SwitchWeaponRadius;
	class UVerseAIBase_fort_item_tag*             __verse_0xE098BDBC_LongRangeWeaponTag;
	class UVerseAIBase_fort_item_tag*             __verse_0xF39254E6_ShortRangeWeaponTag;
	class UDiagnostics_log*                       __verse_0xF524C2AC_Logger;
	struct FColors_color                          __verse_0x71320F52_DebugScreenColor;
	double                                        __verse_0x2D4D6684_DebugScreenDuration;
	FVerseFunctionProperty_                       __verse_0x84102A9A__L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2fsniper__ai_N_REquipWeapon_L_Nfort__item__tag_R;
	FVerseFunctionProperty_                       __verse_0x3B07A1D3_LookAtThreat_L_Nfort__threat__info_R;
	FVerseFunctionProperty_                       __verse_0xC66530C3_PatrolAround;
	FVerseFunctionProperty_                       __verse_0xE8D32BAF__L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2fsniper__ai_N_RPrintMessage_L_N_Kchar_R;
	FVerseFunctionProperty_                       __verse_0xB2BD95D8_RunGameplayLogic;
	FVerseFunctionProperty_                       __verse_0xBE75D983_SelectFightingStance_L_Nfort__threat__info_R;
	FVerseFunctionProperty_                       __verse_0xD8E2DA3A__L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2fsniper__ai_N_RSelectWeaponForThreat_L_Nfort__threat__info_R;
	FVerseFunctionProperty_                       __verse_0x18749B67__L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2fsniper__ai_N_RShouldUseSuggestedWeapon_L_Nfort__item__descriptor_R;
	FVerseFunctionProperty_                       __verse_0x77DF9367_TryToAttackThreat_L_Nfort__threat__info_R;
	FVerseFunctionProperty_                       __verse_0x32A4BC4A_UseSniperWeapon_L_Nfort__threat__info_R;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	void _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fai__behavior_N_ROnEnd(const struct VerseArchetypes::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2fsniper__ai_N_REquipWeapon_L_Nfort__item__tag_R(class UVerseAIBase_fort_item_tag* __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2fsniper__ai_N_RPrintMessage_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2fsniper__ai_N_RSelectWeaponForThreat_L_Nfort__threat__info_R(const struct FVerseAIBase_fort_threat_info& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2fsniper__ai_N_RShouldUseSuggestedWeapon_L_Nfort__item__descriptor_R(const struct FVerseAIBase_fort_item_descriptor& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* LookAtThreat_L_Nfort__threat__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FVerseAIBase_fort_threat_info& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* OnBegin(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct VerseArchetypes::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* PatrolAround(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct VerseArchetypes::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* RunGameplayLogic(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct VerseArchetypes::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* SelectFightingStance_L_Nfort__threat__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FVerseAIBase_fort_threat_info& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* TryToAttackThreat_L_Nfort__threat__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FVerseAIBase_fort_threat_info& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* UseSniperWeapon_L_Nfort__threat__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FVerseAIBase_fort_threat_info& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseArchetypes_sniper_ai">();
	}
	static class UVerseArchetypes_sniper_ai* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseArchetypes_sniper_ai>();
	}
};
static_assert(alignof(UVerseArchetypes_sniper_ai) == 0x000008, "Wrong alignment on UVerseArchetypes_sniper_ai");
static_assert(sizeof(UVerseArchetypes_sniper_ai) == 0x000218, "Wrong size on UVerseArchetypes_sniper_ai");
static_assert(offsetof(UVerseArchetypes_sniper_ai, __verse_0x64C5A7F9_NavigationInterface) == 0x0000C8, "Member 'UVerseArchetypes_sniper_ai::__verse_0x64C5A7F9_NavigationInterface' has a wrong offset!");
static_assert(offsetof(UVerseArchetypes_sniper_ai, __verse_0xA5632554_MovementInterface) == 0x0000D0, "Member 'UVerseArchetypes_sniper_ai::__verse_0xA5632554_MovementInterface' has a wrong offset!");
static_assert(offsetof(UVerseArchetypes_sniper_ai, __verse_0x44482AE5_InventoryInterface) == 0x0000D8, "Member 'UVerseArchetypes_sniper_ai::__verse_0x44482AE5_InventoryInterface' has a wrong offset!");
static_assert(offsetof(UVerseArchetypes_sniper_ai, __verse_0x93DA469B_ThreatPerceptionInterface) == 0x0000E0, "Member 'UVerseArchetypes_sniper_ai::__verse_0x93DA469B_ThreatPerceptionInterface' has a wrong offset!");
static_assert(offsetof(UVerseArchetypes_sniper_ai, __verse_0x83124E52_NPCActionsInterface) == 0x0000E8, "Member 'UVerseArchetypes_sniper_ai::__verse_0x83124E52_NPCActionsInterface' has a wrong offset!");
static_assert(offsetof(UVerseArchetypes_sniper_ai, __verse_0xCC490D1F_WeaponActionsInterface) == 0x0000F0, "Member 'UVerseArchetypes_sniper_ai::__verse_0xCC490D1F_WeaponActionsInterface' has a wrong offset!");
static_assert(offsetof(UVerseArchetypes_sniper_ai, __verse_0x0EC93C6C_UseSuggestedWeaponCallbackId) == 0x0000F8, "Member 'UVerseArchetypes_sniper_ai::__verse_0x0EC93C6C_UseSuggestedWeaponCallbackId' has a wrong offset!");
static_assert(offsetof(UVerseArchetypes_sniper_ai, __verse_0xFEDF9D07_WeaponChangedEvent) == 0x000108, "Member 'UVerseArchetypes_sniper_ai::__verse_0xFEDF9D07_WeaponChangedEvent' has a wrong offset!");
static_assert(offsetof(UVerseArchetypes_sniper_ai, __verse_0xFB573059_InitialHealth) == 0x000110, "Member 'UVerseArchetypes_sniper_ai::__verse_0xFB573059_InitialHealth' has a wrong offset!");
static_assert(offsetof(UVerseArchetypes_sniper_ai, __verse_0x058B2B11_InitialShield) == 0x000118, "Member 'UVerseArchetypes_sniper_ai::__verse_0x058B2B11_InitialShield' has a wrong offset!");
static_assert(offsetof(UVerseArchetypes_sniper_ai, __verse_0x81441520_LeashInnerRadius) == 0x000120, "Member 'UVerseArchetypes_sniper_ai::__verse_0x81441520_LeashInnerRadius' has a wrong offset!");
static_assert(offsetof(UVerseArchetypes_sniper_ai, __verse_0x5D9BBC18_LeashOuterRadius) == 0x000128, "Member 'UVerseArchetypes_sniper_ai::__verse_0x5D9BBC18_LeashOuterRadius' has a wrong offset!");
static_assert(offsetof(UVerseArchetypes_sniper_ai, __verse_0xD1AB87B0_PatrolWaitDelay) == 0x000130, "Member 'UVerseArchetypes_sniper_ai::__verse_0xD1AB87B0_PatrolWaitDelay' has a wrong offset!");
static_assert(offsetof(UVerseArchetypes_sniper_ai, __verse_0x361CED6D_SwitchWeaponRadius) == 0x000138, "Member 'UVerseArchetypes_sniper_ai::__verse_0x361CED6D_SwitchWeaponRadius' has a wrong offset!");
static_assert(offsetof(UVerseArchetypes_sniper_ai, __verse_0xE098BDBC_LongRangeWeaponTag) == 0x000140, "Member 'UVerseArchetypes_sniper_ai::__verse_0xE098BDBC_LongRangeWeaponTag' has a wrong offset!");
static_assert(offsetof(UVerseArchetypes_sniper_ai, __verse_0xF39254E6_ShortRangeWeaponTag) == 0x000148, "Member 'UVerseArchetypes_sniper_ai::__verse_0xF39254E6_ShortRangeWeaponTag' has a wrong offset!");
static_assert(offsetof(UVerseArchetypes_sniper_ai, __verse_0xF524C2AC_Logger) == 0x000150, "Member 'UVerseArchetypes_sniper_ai::__verse_0xF524C2AC_Logger' has a wrong offset!");
static_assert(offsetof(UVerseArchetypes_sniper_ai, __verse_0x71320F52_DebugScreenColor) == 0x000158, "Member 'UVerseArchetypes_sniper_ai::__verse_0x71320F52_DebugScreenColor' has a wrong offset!");
static_assert(offsetof(UVerseArchetypes_sniper_ai, __verse_0x2D4D6684_DebugScreenDuration) == 0x000170, "Member 'UVerseArchetypes_sniper_ai::__verse_0x2D4D6684_DebugScreenDuration' has a wrong offset!");
static_assert(offsetof(UVerseArchetypes_sniper_ai, __verse_0x84102A9A__L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2fsniper__ai_N_REquipWeapon_L_Nfort__item__tag_R) == 0x000178, "Member 'UVerseArchetypes_sniper_ai::__verse_0x84102A9A__L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2fsniper__ai_N_REquipWeapon_L_Nfort__item__tag_R' has a wrong offset!");
static_assert(offsetof(UVerseArchetypes_sniper_ai, __verse_0x3B07A1D3_LookAtThreat_L_Nfort__threat__info_R) == 0x000188, "Member 'UVerseArchetypes_sniper_ai::__verse_0x3B07A1D3_LookAtThreat_L_Nfort__threat__info_R' has a wrong offset!");
static_assert(offsetof(UVerseArchetypes_sniper_ai, __verse_0xC66530C3_PatrolAround) == 0x000198, "Member 'UVerseArchetypes_sniper_ai::__verse_0xC66530C3_PatrolAround' has a wrong offset!");
static_assert(offsetof(UVerseArchetypes_sniper_ai, __verse_0xE8D32BAF__L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2fsniper__ai_N_RPrintMessage_L_N_Kchar_R) == 0x0001A8, "Member 'UVerseArchetypes_sniper_ai::__verse_0xE8D32BAF__L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2fsniper__ai_N_RPrintMessage_L_N_Kchar_R' has a wrong offset!");
static_assert(offsetof(UVerseArchetypes_sniper_ai, __verse_0xB2BD95D8_RunGameplayLogic) == 0x0001B8, "Member 'UVerseArchetypes_sniper_ai::__verse_0xB2BD95D8_RunGameplayLogic' has a wrong offset!");
static_assert(offsetof(UVerseArchetypes_sniper_ai, __verse_0xBE75D983_SelectFightingStance_L_Nfort__threat__info_R) == 0x0001C8, "Member 'UVerseArchetypes_sniper_ai::__verse_0xBE75D983_SelectFightingStance_L_Nfort__threat__info_R' has a wrong offset!");
static_assert(offsetof(UVerseArchetypes_sniper_ai, __verse_0xD8E2DA3A__L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2fsniper__ai_N_RSelectWeaponForThreat_L_Nfort__threat__info_R) == 0x0001D8, "Member 'UVerseArchetypes_sniper_ai::__verse_0xD8E2DA3A__L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2fsniper__ai_N_RSelectWeaponForThreat_L_Nfort__threat__info_R' has a wrong offset!");
static_assert(offsetof(UVerseArchetypes_sniper_ai, __verse_0x18749B67__L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2fsniper__ai_N_RShouldUseSuggestedWeapon_L_Nfort__item__descriptor_R) == 0x0001E8, "Member 'UVerseArchetypes_sniper_ai::__verse_0x18749B67__L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2fsniper__ai_N_RShouldUseSuggestedWeapon_L_Nfort__item__descriptor_R' has a wrong offset!");
static_assert(offsetof(UVerseArchetypes_sniper_ai, __verse_0x77DF9367_TryToAttackThreat_L_Nfort__threat__info_R) == 0x0001F8, "Member 'UVerseArchetypes_sniper_ai::__verse_0x77DF9367_TryToAttackThreat_L_Nfort__threat__info_R' has a wrong offset!");
static_assert(offsetof(UVerseArchetypes_sniper_ai, __verse_0x32A4BC4A_UseSniperWeapon_L_Nfort__threat__info_R) == 0x000208, "Member 'UVerseArchetypes_sniper_ai::__verse_0x32A4BC4A_UseSniperWeapon_L_Nfort__threat__info_R' has a wrong offset!");

class UVerseArchetypes_template_ai final : public UVerseAIBase_ai_behavior
{
public:
	double                                        __verse_0xFB573059_InitialHealth;
	double                                        __verse_0x058B2B11_InitialShield;
	class UDiagnostics_log*                       __verse_0xF524C2AC_Logger;
	uint8                                         __verse_0x4222121E_DebugDisplay : 1;
	uint8                                         Pad_E1[0x7];
	struct FColors_color                          __verse_0x71320F52_DebugScreenColor;
	double                                        __verse_0x2D4D6684_DebugScreenDuration;
	FVerseFunctionProperty_                       __verse_0xA21D77C6__L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2ftemplate__ai_N_RLogAndDisplayOnScreen_L_N_Kchar_R;
	FVerseFunctionProperty_                       __verse_0x536AA531__L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2ftemplate__ai_N_ROnDamage_L_Nany_R_Nvoid;
	FVerseFunctionProperty_                       __verse_0x83F8AFB5__L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2ftemplate__ai_N_ROnDamage_L_Ndamage__result_R;
	FVerseFunctionProperty_                       __verse_0x3D5496FC__L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2ftemplate__ai_N_ROnHealed_L_Nany_R_Nvoid;
	FVerseFunctionProperty_                       __verse_0x8ED40B58__L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2ftemplate__ai_N_ROnHealed_L_Nhealing__result_R;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	void _L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2ftemplate__ai_N_RLogAndDisplayOnScreen_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2ftemplate__ai_N_ROnDamage_L_Nany_R_Nvoid(FVerseDynamicProperty_ __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2ftemplate__ai_N_ROnDamage_L_Ndamage__result_R(const struct FGame_damage_result& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2ftemplate__ai_N_ROnHealed_L_Nany_R_Nvoid(FVerseDynamicProperty_ __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2ftemplate__ai_N_ROnHealed_L_Nhealing__result_R(const struct FGame_healing_result& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* OnBegin(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct VerseArchetypes::Ftuple_L_R& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseArchetypes_template_ai">();
	}
	static class UVerseArchetypes_template_ai* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseArchetypes_template_ai>();
	}
};
static_assert(alignof(UVerseArchetypes_template_ai) == 0x000008, "Wrong alignment on UVerseArchetypes_template_ai");
static_assert(sizeof(UVerseArchetypes_template_ai) == 0x000158, "Wrong size on UVerseArchetypes_template_ai");
static_assert(offsetof(UVerseArchetypes_template_ai, __verse_0xFB573059_InitialHealth) == 0x0000C8, "Member 'UVerseArchetypes_template_ai::__verse_0xFB573059_InitialHealth' has a wrong offset!");
static_assert(offsetof(UVerseArchetypes_template_ai, __verse_0x058B2B11_InitialShield) == 0x0000D0, "Member 'UVerseArchetypes_template_ai::__verse_0x058B2B11_InitialShield' has a wrong offset!");
static_assert(offsetof(UVerseArchetypes_template_ai, __verse_0xF524C2AC_Logger) == 0x0000D8, "Member 'UVerseArchetypes_template_ai::__verse_0xF524C2AC_Logger' has a wrong offset!");
static_assert(offsetof(UVerseArchetypes_template_ai, __verse_0x71320F52_DebugScreenColor) == 0x0000E8, "Member 'UVerseArchetypes_template_ai::__verse_0x71320F52_DebugScreenColor' has a wrong offset!");
static_assert(offsetof(UVerseArchetypes_template_ai, __verse_0x2D4D6684_DebugScreenDuration) == 0x000100, "Member 'UVerseArchetypes_template_ai::__verse_0x2D4D6684_DebugScreenDuration' has a wrong offset!");
static_assert(offsetof(UVerseArchetypes_template_ai, __verse_0xA21D77C6__L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2ftemplate__ai_N_RLogAndDisplayOnScreen_L_N_Kchar_R) == 0x000108, "Member 'UVerseArchetypes_template_ai::__verse_0xA21D77C6__L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2ftemplate__ai_N_RLogAndDisplayOnScreen_L_N_Kchar_R' has a wrong offset!");
static_assert(offsetof(UVerseArchetypes_template_ai, __verse_0x536AA531__L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2ftemplate__ai_N_ROnDamage_L_Nany_R_Nvoid) == 0x000118, "Member 'UVerseArchetypes_template_ai::__verse_0x536AA531__L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2ftemplate__ai_N_ROnDamage_L_Nany_R_Nvoid' has a wrong offset!");
static_assert(offsetof(UVerseArchetypes_template_ai, __verse_0x83F8AFB5__L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2ftemplate__ai_N_ROnDamage_L_Ndamage__result_R) == 0x000128, "Member 'UVerseArchetypes_template_ai::__verse_0x83F8AFB5__L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2ftemplate__ai_N_ROnDamage_L_Ndamage__result_R' has a wrong offset!");
static_assert(offsetof(UVerseArchetypes_template_ai, __verse_0x3D5496FC__L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2ftemplate__ai_N_ROnHealed_L_Nany_R_Nvoid) == 0x000138, "Member 'UVerseArchetypes_template_ai::__verse_0x3D5496FC__L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2ftemplate__ai_N_ROnHealed_L_Nany_R_Nvoid' has a wrong offset!");
static_assert(offsetof(UVerseArchetypes_template_ai, __verse_0x8ED40B58__L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2ftemplate__ai_N_ROnHealed_L_Nhealing__result_R) == 0x000148, "Member 'UVerseArchetypes_template_ai::__verse_0x8ED40B58__L_2fFortnite_2ecom_2fAI_2fVerseArchetypes_2ftemplate__ai_N_ROnHealed_L_Nhealing__result_R' has a wrong offset!");

}
