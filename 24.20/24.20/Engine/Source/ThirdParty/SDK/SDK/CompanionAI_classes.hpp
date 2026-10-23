#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "VerseNPC_classes.hpp"
#include "VerseNative_structs.hpp"
#include "CompanionAI_0_classes.hpp"
#include "CompanionAI_structs.hpp"
#include "Verse_structs.hpp"
#include "VerseAIBase_0_structs.hpp"
#include "VerseAIBase_0_classes.hpp"
#include "VerseCreature_classes.hpp"
#include "UnrealEngineExperimental_0_classes.hpp"
#include "VerseNative_0_classes.hpp"
#include "EpicGamesTemporary_0_structs.hpp"
#include "VGameplayRst_0_structs.hpp"

namespace SDK
{

class Utask_CompanionAI_companion_ai_runtime_GetObstacle final : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*      _Self;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_151[0x7];
	FOptionProperty_                              _RetVal;
	FOptionProperty_                              __verse_0x00000000__1;
	uint8                                         Pad_183[0x5];
	struct FVerseAIBase_fort_obstacle_info        __verse_0x39C5E53E_ObstacleInfo_3;
	class UObject*                                __verse_0x00000000__4;
	FOptionProperty_                              _ExprResultStack_0;
	uint8                                         Pad_1E1[0x7];
	FVerseFunctionProperty_                       _Callee_1;
	struct CompanionAI::Ftuple_L_R                _ExprResult_2;
	uint8                                         _ExprResult_3 : 1;
	FOptionProperty_                              _ExprResultStack_4;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_companion_ai_runtime$GetObstacle">();
	}
	static class Utask_CompanionAI_companion_ai_runtime_GetObstacle* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_companion_ai_runtime_GetObstacle>();
	}
};
static_assert(alignof(Utask_CompanionAI_companion_ai_runtime_GetObstacle) == 0x000008, "Wrong alignment on Utask_CompanionAI_companion_ai_runtime_GetObstacle");
static_assert(sizeof(Utask_CompanionAI_companion_ai_runtime_GetObstacle) == 0x000200, "Wrong size on Utask_CompanionAI_companion_ai_runtime_GetObstacle");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetObstacle, _Self) == 0x000148, "Member 'Utask_CompanionAI_companion_ai_runtime_GetObstacle::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetObstacle, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_companion_ai_runtime_GetObstacle::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetObstacle, _RetVal) == 0x000158, "Member 'Utask_CompanionAI_companion_ai_runtime_GetObstacle::_RetVal' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetObstacle, __verse_0x00000000__1) == 0x000181, "Member 'Utask_CompanionAI_companion_ai_runtime_GetObstacle::__verse_0x00000000__1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetObstacle, __verse_0x39C5E53E_ObstacleInfo_3) == 0x000188, "Member 'Utask_CompanionAI_companion_ai_runtime_GetObstacle::__verse_0x39C5E53E_ObstacleInfo_3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetObstacle, __verse_0x00000000__4) == 0x0001B0, "Member 'Utask_CompanionAI_companion_ai_runtime_GetObstacle::__verse_0x00000000__4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetObstacle, _ExprResultStack_0) == 0x0001B8, "Member 'Utask_CompanionAI_companion_ai_runtime_GetObstacle::_ExprResultStack_0' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetObstacle, _Callee_1) == 0x0001E8, "Member 'Utask_CompanionAI_companion_ai_runtime_GetObstacle::_Callee_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetObstacle, _ExprResult_2) == 0x0001F8, "Member 'Utask_CompanionAI_companion_ai_runtime_GetObstacle::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetObstacle, _ExprResultStack_4) == 0x0001FA, "Member 'Utask_CompanionAI_companion_ai_runtime_GetObstacle::_ExprResultStack_4' has a wrong offset!");

class UCompanionAI_fort_creature_component final : public UVerseCreature_creature_component
{
public:
	FVerseFunctionProperty_                       __verse_0xECDDAB04_RunDefaultBehavior;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	class UConcurrency_task* RunDefaultBehavior(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CompanionAI_fort_creature_component">();
	}
	static class UCompanionAI_fort_creature_component* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCompanionAI_fort_creature_component>();
	}
};
static_assert(alignof(UCompanionAI_fort_creature_component) == 0x000008, "Wrong alignment on UCompanionAI_fort_creature_component");
static_assert(sizeof(UCompanionAI_fort_creature_component) == 0x000118, "Wrong size on UCompanionAI_fort_creature_component");
static_assert(offsetof(UCompanionAI_fort_creature_component, __verse_0xECDDAB04_RunDefaultBehavior) == 0x000108, "Member 'UCompanionAI_fort_creature_component::__verse_0xECDDAB04_RunDefaultBehavior' has a wrong offset!");

class Utask_CompanionAI_fort_npc_component_RunDefaultBehavior final : public UConcurrency_task
{
public:
	class UCompanionAI_fort_npc_component*        _Self;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	EVerseAIBase_action_result                    _RetVal;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_fort_npc_component$RunDefaultBehavior">();
	}
	static class Utask_CompanionAI_fort_npc_component_RunDefaultBehavior* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_fort_npc_component_RunDefaultBehavior>();
	}
};
static_assert(alignof(Utask_CompanionAI_fort_npc_component_RunDefaultBehavior) == 0x000008, "Wrong alignment on Utask_CompanionAI_fort_npc_component_RunDefaultBehavior");
static_assert(sizeof(Utask_CompanionAI_fort_npc_component_RunDefaultBehavior) == 0x000158, "Wrong size on Utask_CompanionAI_fort_npc_component_RunDefaultBehavior");
static_assert(offsetof(Utask_CompanionAI_fort_npc_component_RunDefaultBehavior, _Self) == 0x000148, "Member 'Utask_CompanionAI_fort_npc_component_RunDefaultBehavior::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_fort_npc_component_RunDefaultBehavior, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_fort_npc_component_RunDefaultBehavior::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_fort_npc_component_RunDefaultBehavior, _RetVal) == 0x000151, "Member 'Utask_CompanionAI_fort_npc_component_RunDefaultBehavior::_RetVal' has a wrong offset!");

class Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R final : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*      _Self;
	struct FCompanionAI_ping_info                 __verse_0xB2CDDD72_Argument;
	FOptionProperty_                              _RetVal;
	uint8                                         Pad_1B9[0x7];
	FVerseDynamicProperty_                        InvokeResultDummy_0;
	FOptionProperty_                              _ExprResultStack_1;
	uint8                                         Pad_1E1[0x7];
	FVerseDynamicProperty_                        _ExprResult_2;
	uint8                                         _ExprResult_3 : 1;
	uint8                                         Pad_1F9[0x7];
	class UObject*                                __verse_0x00000000__3;
	FVerseFunctionProperty_                       _Callee_4;
	struct CompanionAI::Ftuple_L_R                _ExprResult_5;
	uint8                                         Pad_219[0x7];
	FVerseDynamicProperty_                        _ExprResult_6;
	class UConcurrency_task*                      _AsyncTask_7;
	FVerseFunctionProperty_                       _AsyncTaskClass_8;
	int64                                         _AsyncResult_9;
	double                                        __verse_0x0E44D420_ClosestTargetDistance_4;
	FOptionProperty_                              __verse_0xA08A30EA_ClosestTarget_4;
	FOptionProperty_                              __verse_0x00000000__5;
	uint8                                         _ExprResult_10 : 1;
	FOptionProperty_                              _ExprResultStack_11;
	uint8                                         Pad_28E[0x2];
	TArray<struct FVerseAIBase_fort_threat_info>  _ForIterable_12;
	class UObject*                                __verse_0x00000000__9;
	FOptionProperty_                              _ExprResultStack_13;
	uint8                                         Pad_2B9[0x7];
	FVerseFunctionProperty_                       _Callee_14;
	struct CompanionAI::Ftuple_L_R                _ExprResult_15;
	uint8                                         Pad_2D1[0x7];
	int64                                         _ForIndex_16;
	int64                                         _ForLength_17;
	struct FVerseAIBase_fort_threat_info          __verse_0xD4ED8431_Threat_10;
	FVerseDynamicProperty_                        InvokeResultDummy_18;
	FOptionProperty_                              _ExprResultStack_19;
	uint8                                         Pad_339[0x7];
	FVerseDynamicProperty_                        _ExprResult_20;
	FVerseDynamicProperty_                        _ExprResult_21;
	FOptionProperty_                              _ExprResultStack_22;
	FVerseFunctionProperty_                       _Callee_23;
	struct Ftuple_Lentity_Mtuple_L_R_Mtuple_L_R_R _ExprResult_24;
	FOptionProperty_                              _ExprResultStack_25;
	struct CompanionAI::Ftuple_L_R                _ExprResult_26;
	struct CompanionAI::Ftuple_L_R                _ExprResult_27;
	EVerseTrue                                    _InvokeSureResultDummy_28;
	uint8                                         Pad_393[0x5];
	FVerseFunctionProperty_                       _Callee_29;
	FVerseStringProperty_                         _ExprResult_30;
	double                                        __verse_0xD58F9071_TargetDistance_15;
	FVerseFunctionProperty_                       _Callee_31;
	struct CompanionAI::Ftuple_Lvector3_Mvector3_R _ExprResult_32;
	struct FSpatialMath_vector3                   _ExprResultStack_33;
	FVerseFunctionProperty_                       _Callee_34;
	FOptionProperty_                              _ExprResultStack_35;
	uint8                                         Pad_431[0x7];
	FOptionProperty_                              _ExprResult_36;
	uint8                                         Pad_469[0x7];
	struct FVerseAIBase_fort_threat_info          __verse_0x19FFC917_AttackTarget_17;
	FOptionProperty_                              _ExprResultStack_37;
	EVerseTrue                                    _InvokeSureResultDummy_38;
	uint8                                         Pad_4D2[0x6];
	FVerseFunctionProperty_                       _Callee_39;
	FVerseStringProperty_                         _ExprResult_40;
	FVerseFunctionProperty_                       _AsyncTaskClass_41;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_companion_ai_runtime$GetAttackCommandTarget_L_Nping__info_R">();
	}
	static class Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R>();
	}
};
static_assert(alignof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R) == 0x000008, "Wrong alignment on Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R");
static_assert(sizeof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R) == 0x000508, "Wrong size on Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _Self) == 0x000148, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _RetVal) == 0x000188, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_RetVal' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, InvokeResultDummy_0) == 0x0001C0, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::InvokeResultDummy_0' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _ExprResultStack_1) == 0x0001D0, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_ExprResultStack_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _ExprResult_2) == 0x0001E8, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, __verse_0x00000000__3) == 0x000200, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::__verse_0x00000000__3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _Callee_4) == 0x000208, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_Callee_4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _ExprResult_5) == 0x000218, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_ExprResult_5' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _ExprResult_6) == 0x000220, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_ExprResult_6' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _AsyncTask_7) == 0x000230, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_AsyncTask_7' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _AsyncTaskClass_8) == 0x000238, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_AsyncTaskClass_8' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _AsyncResult_9) == 0x000248, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_AsyncResult_9' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, __verse_0x0E44D420_ClosestTargetDistance_4) == 0x000250, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::__verse_0x0E44D420_ClosestTargetDistance_4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, __verse_0xA08A30EA_ClosestTarget_4) == 0x000258, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::__verse_0xA08A30EA_ClosestTarget_4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, __verse_0x00000000__5) == 0x000289, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::__verse_0x00000000__5' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _ExprResultStack_11) == 0x00028C, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_ExprResultStack_11' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _ForIterable_12) == 0x000290, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_ForIterable_12' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, __verse_0x00000000__9) == 0x0002A0, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::__verse_0x00000000__9' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _ExprResultStack_13) == 0x0002A8, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_ExprResultStack_13' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _Callee_14) == 0x0002C0, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_Callee_14' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _ExprResult_15) == 0x0002D0, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_ExprResult_15' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _ForIndex_16) == 0x0002D8, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_ForIndex_16' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _ForLength_17) == 0x0002E0, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_ForLength_17' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, __verse_0xD4ED8431_Threat_10) == 0x0002E8, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::__verse_0xD4ED8431_Threat_10' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, InvokeResultDummy_18) == 0x000318, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::InvokeResultDummy_18' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _ExprResultStack_19) == 0x000328, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_ExprResultStack_19' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _ExprResult_20) == 0x000340, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_ExprResult_20' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _ExprResult_21) == 0x000350, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_ExprResult_21' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _ExprResultStack_22) == 0x000360, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_ExprResultStack_22' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _Callee_23) == 0x000368, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_Callee_23' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _ExprResult_24) == 0x000378, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_ExprResult_24' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _ExprResultStack_25) == 0x000388, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_ExprResultStack_25' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _ExprResult_26) == 0x000390, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_ExprResult_26' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _ExprResult_27) == 0x000391, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_ExprResult_27' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _InvokeSureResultDummy_28) == 0x000392, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_InvokeSureResultDummy_28' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _Callee_29) == 0x000398, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_Callee_29' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _ExprResult_30) == 0x0003A8, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_ExprResult_30' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, __verse_0xD58F9071_TargetDistance_15) == 0x0003B8, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::__verse_0xD58F9071_TargetDistance_15' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _Callee_31) == 0x0003C0, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_Callee_31' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _ExprResult_32) == 0x0003D0, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_ExprResult_32' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _ExprResultStack_33) == 0x000400, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_ExprResultStack_33' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _Callee_34) == 0x000418, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_Callee_34' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _ExprResultStack_35) == 0x000428, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_ExprResultStack_35' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _ExprResult_36) == 0x000438, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_ExprResult_36' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, __verse_0x19FFC917_AttackTarget_17) == 0x000470, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::__verse_0x19FFC917_AttackTarget_17' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _ExprResultStack_37) == 0x0004A0, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_ExprResultStack_37' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _InvokeSureResultDummy_38) == 0x0004D1, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_InvokeSureResultDummy_38' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _Callee_39) == 0x0004D8, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_Callee_39' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _ExprResult_40) == 0x0004E8, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_ExprResult_40' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, _AsyncTaskClass_41) == 0x0004F8, "Member 'Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::_AsyncTaskClass_41' has a wrong offset!");

class CompanionAI::U_SolarisSignatureFunctionOuter final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseClass CompanionAI.$SolarisSignatureFunctionOuter", true>();
	}
	static class CompanionAI::U_SolarisSignatureFunctionOuter* GetDefaultObj()
	{
		return GetDefaultObjImpl<CompanionAI::U_SolarisSignatureFunctionOuter>();
	}
};
static_assert(alignof(CompanionAI::U_SolarisSignatureFunctionOuter) == 0x000008, "Wrong alignment on CompanionAI::U_SolarisSignatureFunctionOuter");
static_assert(sizeof(CompanionAI::U_SolarisSignatureFunctionOuter) == 0x000028, "Wrong size on CompanionAI::U_SolarisSignatureFunctionOuter");

class UCompanionAI final : public UObject
{
public:
	static uint8 _L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RCompare_L_Nfort__obstacle__info_M_Nentity_R(const struct Ftuple_Lfort__obstacle__info_Mentity_R& __verse_0xB2CDDD72_Argument);
	static FOptionProperty_ _L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetAgent_U_L_Nentity_M_Ntuple_L_R_R(const struct Ftuple_Lentity_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	static FOptionProperty_ _L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortBRCharacterActions_U_L_Nfort__character_M_Ntuple_L_R_R(const struct CompanionAI::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	static FOptionProperty_ _L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortBRCreatureActions_U_L_Nfort__character_M_Ntuple_L_R_R(const struct CompanionAI::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	static FOptionProperty_ _L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortPing_U_L_Nfort__character_M_Ntuple_L_R_R(const struct CompanionAI::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	static struct CompanionAI::Ftuple_Lfloat_Mfloat_R _L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetNPCLeashRadius_U_L_Nfort__character_M_Ntuple_L_R_R(const struct CompanionAI::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	static TArray<class USimulation_agent*> _L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetTeamMembers_U_L_Nagent_M_Ntuple_L_R_R(const struct CompanionAI::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	static FOptionProperty_ _L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eIsBeingDBNOCarried_U_L_Nfort__character_M_Ntuple_L_R_R(const struct CompanionAI::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	static FVerseStringProperty_ _L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R(ECompanionAI_PingCommand_command_type __verse_0xB2CDDD72_Argument);
	static FVerseStringProperty_ _L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R(ECompanionAI_PingCommand_entity_type __verse_0xB2CDDD72_Argument);
	static struct FCompanionAI_ping_info CompanionAI_ping_info_Factory();

	void _InitCDO();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CompanionAI">();
	}
	static class UCompanionAI* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCompanionAI>();
	}
};
static_assert(alignof(UCompanionAI) == 0x000008, "Wrong alignment on UCompanionAI");
static_assert(sizeof(UCompanionAI) == 0x000028, "Wrong size on UCompanionAI");

class Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R final : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*      _Self;
	struct FVerseAIBase_fort_threat_info          __verse_0xB2CDDD72_Argument;
	EVerseTrue                                    _InvokeSureResultDummy_0;
	uint8                                         Pad_181[0x7];
	FVerseFunctionProperty_                       _Callee_1;
	FVerseStringProperty_                         _ExprResult_2;
	uint8                                         _AsyncBeginCount_3 : 1;
	uint8                                         Pad_1A9[0x7];
	class UConcurrency_task*                      _AsyncTask_4;
	FVerseFunctionProperty_                       _AsyncTaskClass_5;
	struct CompanionAI::Ftuple_L_R                _ExprResult_6;
	uint8                                         Pad_1C9[0x7];
	int64                                         _AsyncResult_7;
	uint8                                         _AsyncBeginCount_8 : 1;
	uint8                                         BitPad_1D8_1 : 7;
	uint8                                         _AsyncBeginCount_9 : 1;
	uint8                                         Pad_1DA[0x6];
	class UObject*                                __verse_0x00000000__2;
	class UConcurrency_task*                      _AsyncTask_10;
	FVerseFunctionProperty_                       _AsyncTaskClass_11;
	int64                                         _AsyncResult_12;
	uint8                                         _AsyncBeginCount_13 : 1;
	uint8                                         Pad_209[0x7];
	class UObject*                                __verse_0x00000000__3;
	class UConcurrency_task*                      _AsyncTask_14;
	FVerseFunctionProperty_                       _AsyncTaskClass_15;
	struct CompanionAI::Ftuple_L_R                _ExprResult_16;
	uint8                                         Pad_231[0x7];
	int64                                         _AsyncResult_17;
	EVerseTrue                                    _InvokeSureResultDummy_18;
	uint8                                         Pad_241[0x7];
	FVerseFunctionProperty_                       _Callee_19;
	FVerseStringProperty_                         _ExprResult_20;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_companion_ai_runtime$GoToAndAttackTask_L_Nfort__threat__info_R">();
	}
	static class Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R>();
	}
};
static_assert(alignof(Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R) == 0x000008, "Wrong alignment on Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R");
static_assert(sizeof(Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R) == 0x000268, "Wrong size on Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R, _Self) == 0x000148, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R, _InvokeSureResultDummy_0) == 0x000180, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R::_InvokeSureResultDummy_0' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R, _Callee_1) == 0x000188, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R::_Callee_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R, _ExprResult_2) == 0x000198, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R, _AsyncTask_4) == 0x0001B0, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R::_AsyncTask_4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R, _AsyncTaskClass_5) == 0x0001B8, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R::_AsyncTaskClass_5' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R, _ExprResult_6) == 0x0001C8, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R::_ExprResult_6' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R, _AsyncResult_7) == 0x0001D0, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R::_AsyncResult_7' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R, __verse_0x00000000__2) == 0x0001E0, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R::__verse_0x00000000__2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R, _AsyncTask_10) == 0x0001E8, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R::_AsyncTask_10' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R, _AsyncTaskClass_11) == 0x0001F0, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R::_AsyncTaskClass_11' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R, _AsyncResult_12) == 0x000200, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R::_AsyncResult_12' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R, __verse_0x00000000__3) == 0x000210, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R::__verse_0x00000000__3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R, _AsyncTask_14) == 0x000218, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R::_AsyncTask_14' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R, _AsyncTaskClass_15) == 0x000220, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R::_AsyncTaskClass_15' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R, _ExprResult_16) == 0x000230, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R::_ExprResult_16' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R, _AsyncResult_17) == 0x000238, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R::_AsyncResult_17' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R, _InvokeSureResultDummy_18) == 0x000240, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R::_InvokeSureResultDummy_18' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R, _Callee_19) == 0x000248, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R::_Callee_19' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R, _ExprResult_20) == 0x000258, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R::_ExprResult_20' has a wrong offset!");

class UCompanionAI_companion_ai final : public UVerseAIBase_ai_behavior
{
public:
	class UDiagnostics_log*                       __verse_0xF524C2AC_Logger;
	uint8                                         __verse_0x4222121E_DebugDisplay : 1;
	uint8                                         Pad_D1[0x7];
	struct FColors_color                          __verse_0x71320F52_DebugScreenColor;
	double                                        __verse_0x2D4D6684_DebugScreenDuration;
	double                                        __verse_0x5155C58D_GoToLeashDistance;
	double                                        __verse_0x4D92C49B_GoToAttackTargetDistance;
	double                                        __verse_0x8D041DAB_HoldPositionLeashDistance;
	double                                        __verse_0x5EF17E77_BackToMeMovementThreshold;
	double                                        __verse_0x80F3C16A_ReviveDistance;
	double                                        __verse_0x53BD03B7_AttackCommand_TargetProximityRadius;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	class UConcurrency_task* OnBegin(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CompanionAI_companion_ai">();
	}
	static class UCompanionAI_companion_ai* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCompanionAI_companion_ai>();
	}
};
static_assert(alignof(UCompanionAI_companion_ai) == 0x000008, "Wrong alignment on UCompanionAI_companion_ai");
static_assert(sizeof(UCompanionAI_companion_ai) == 0x000128, "Wrong size on UCompanionAI_companion_ai");
static_assert(offsetof(UCompanionAI_companion_ai, __verse_0xF524C2AC_Logger) == 0x0000C8, "Member 'UCompanionAI_companion_ai::__verse_0xF524C2AC_Logger' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai, __verse_0x71320F52_DebugScreenColor) == 0x0000D8, "Member 'UCompanionAI_companion_ai::__verse_0x71320F52_DebugScreenColor' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai, __verse_0x2D4D6684_DebugScreenDuration) == 0x0000F0, "Member 'UCompanionAI_companion_ai::__verse_0x2D4D6684_DebugScreenDuration' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai, __verse_0x5155C58D_GoToLeashDistance) == 0x0000F8, "Member 'UCompanionAI_companion_ai::__verse_0x5155C58D_GoToLeashDistance' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai, __verse_0x4D92C49B_GoToAttackTargetDistance) == 0x000100, "Member 'UCompanionAI_companion_ai::__verse_0x4D92C49B_GoToAttackTargetDistance' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai, __verse_0x8D041DAB_HoldPositionLeashDistance) == 0x000108, "Member 'UCompanionAI_companion_ai::__verse_0x8D041DAB_HoldPositionLeashDistance' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai, __verse_0x5EF17E77_BackToMeMovementThreshold) == 0x000110, "Member 'UCompanionAI_companion_ai::__verse_0x5EF17E77_BackToMeMovementThreshold' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai, __verse_0x80F3C16A_ReviveDistance) == 0x000118, "Member 'UCompanionAI_companion_ai::__verse_0x80F3C16A_ReviveDistance' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai, __verse_0x53BD03B7_AttackCommand_TargetProximityRadius) == 0x000120, "Member 'UCompanionAI_companion_ai::__verse_0x53BD03B7_AttackCommand_TargetProximityRadius' has a wrong offset!");

class UCompanionAI_companion_creature final : public UVerseAIBase_ai_behavior
{
public:
	FOptionProperty_                              __verse_0x4645AA12_PingActionsInterface;
	FOptionProperty_                              __verse_0xECE2B758_CreatureActionsInterface;
	FOptionProperty_                              __verse_0x9146CB8B_AIMovementInterface;
	FOptionProperty_                              __verse_0x8FB74E85_AbilitySystemComponent;
	class UDiagnostics_log*                       __verse_0xF524C2AC_Logger;
	uint8                                         __verse_0x4222121E_DebugDisplay : 1;
	uint8                                         Pad_F1[0x7];
	struct FColors_color                          __verse_0x71320F52_DebugScreenColor;
	double                                        __verse_0x2D4D6684_DebugScreenDuration;
	FVerseFunctionProperty_                       __verse_0x4611DC7E_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R;
	FVerseFunctionProperty_                       __verse_0xAAC24BD9_GameLoop;
	FVerseFunctionProperty_                       __verse_0xA3816CC6__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R;
	FVerseFunctionProperty_                       __verse_0x4EF41FF5__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnConverted;
	FVerseFunctionProperty_                       __verse_0xA397BC2D__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnUnconverted;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnConverted(const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnUnconverted(const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct Ftuple_Lvector3_Mfloat_Mcolor_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* GameLoop(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* OnBegin(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CompanionAI_companion_creature">();
	}
	static class UCompanionAI_companion_creature* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCompanionAI_companion_creature>();
	}
};
static_assert(alignof(UCompanionAI_companion_creature) == 0x000008, "Wrong alignment on UCompanionAI_companion_creature");
static_assert(sizeof(UCompanionAI_companion_creature) == 0x000168, "Wrong size on UCompanionAI_companion_creature");
static_assert(offsetof(UCompanionAI_companion_creature, __verse_0x4645AA12_PingActionsInterface) == 0x0000C8, "Member 'UCompanionAI_companion_creature::__verse_0x4645AA12_PingActionsInterface' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_creature, __verse_0xECE2B758_CreatureActionsInterface) == 0x0000D0, "Member 'UCompanionAI_companion_creature::__verse_0xECE2B758_CreatureActionsInterface' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_creature, __verse_0x9146CB8B_AIMovementInterface) == 0x0000D8, "Member 'UCompanionAI_companion_creature::__verse_0x9146CB8B_AIMovementInterface' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_creature, __verse_0x8FB74E85_AbilitySystemComponent) == 0x0000E0, "Member 'UCompanionAI_companion_creature::__verse_0x8FB74E85_AbilitySystemComponent' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_creature, __verse_0xF524C2AC_Logger) == 0x0000E8, "Member 'UCompanionAI_companion_creature::__verse_0xF524C2AC_Logger' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_creature, __verse_0x71320F52_DebugScreenColor) == 0x0000F8, "Member 'UCompanionAI_companion_creature::__verse_0x71320F52_DebugScreenColor' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_creature, __verse_0x2D4D6684_DebugScreenDuration) == 0x000110, "Member 'UCompanionAI_companion_creature::__verse_0x2D4D6684_DebugScreenDuration' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_creature, __verse_0x4611DC7E_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R) == 0x000118, "Member 'UCompanionAI_companion_creature::__verse_0x4611DC7E_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_creature, __verse_0xAAC24BD9_GameLoop) == 0x000128, "Member 'UCompanionAI_companion_creature::__verse_0xAAC24BD9_GameLoop' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_creature, __verse_0xA3816CC6__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R) == 0x000138, "Member 'UCompanionAI_companion_creature::__verse_0xA3816CC6__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_creature, __verse_0x4EF41FF5__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnConverted) == 0x000148, "Member 'UCompanionAI_companion_creature::__verse_0x4EF41FF5__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnConverted' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_creature, __verse_0xA397BC2D__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnUnconverted) == 0x000158, "Member 'UCompanionAI_companion_creature::__verse_0xA397BC2D__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnUnconverted' has a wrong offset!");

class UCompanionAI_companion_ai_runtime final : public UObject
{
public:
	class UCompanionAI_companion_ai*              __verse_0xF8ADD547_CompanionAIScript;
	class UObject*                                __verse_0x963EC691_Character;
	class UObject*                                __verse_0xCCC0089F_Navigation;
	class UObject*                                __verse_0x47B0B441_CharacterMovement;
	class UObject*                                __verse_0x193FB9C5_Leash;
	class UObject*                                __verse_0x3FE20196_FortPing;
	class UObject*                                __verse_0x03CEBA4E_CharacterActions;
	class UObject*                                __verse_0xF161303F_WeaponActions;
	class UObject*                                __verse_0x0F05355D_ThreatPerception;
	class UObject*                                __verse_0x00C33D6C_ObstaclePerception;
	FVerseFunctionProperty_                       __verse_0xCD79BE49_CheckForReviveTeamMembers_L_Nping__info_R;
	FVerseFunctionProperty_                       __verse_0xFD71F6F9_CrouchService;
	FVerseFunctionProperty_                       __verse_0x42EEAE4C_CrouchUntilHit;
	FVerseFunctionProperty_                       __verse_0x4611DC7E_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R;
	FVerseFunctionProperty_                       __verse_0xAAC24BD9_GameLoop;
	FVerseFunctionProperty_                       __verse_0x48CFCF8A_GetAttackCommandTarget_L_Nping__info_R;
	FVerseFunctionProperty_                       __verse_0x0C45B447_GetNewObstacle;
	FVerseFunctionProperty_                       __verse_0x2E34E338_GetNewTargetPerception;
	FVerseFunctionProperty_                       __verse_0x0CD61383_GetNewThreat;
	FVerseFunctionProperty_                       __verse_0x8CAF1B4F_GetObstacle;
	FVerseFunctionProperty_                       __verse_0x088B6B1E_GetThreat;
	FVerseFunctionProperty_                       __verse_0x55602A55_GoToAndAttackTask_L_Nfort__threat__info_R;
	FVerseFunctionProperty_                       __verse_0x0F435CCE_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R;
	FVerseFunctionProperty_                       __verse_0xCDB7A2EB_HandleBackToMeCommand_L_Nping__info_R;
	FVerseFunctionProperty_                       __verse_0xA6BE52A1_HandleGoTo_L_Nping__info_R;
	FVerseFunctionProperty_                       __verse_0xDA8C4382_HandleGoToCommand_L_Nping__info_R;
	FVerseFunctionProperty_                       __verse_0x732222FF_HandleHoldPositionCommand_L_Nping__info_R;
	FVerseFunctionProperty_                       __verse_0x598CA1A6_HandleNPCCommand_L_Nping__info_R;
	FVerseFunctionProperty_                       __verse_0x6FDBE601_HandleObstacleTask_L_N_Qentity_R;
	FVerseFunctionProperty_                       __verse_0x76F49D7B_HandleReviveCommand_L_Nping__info_R;
	FVerseFunctionProperty_                       __verse_0x20C82F48__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R;
	FVerseFunctionProperty_                       __verse_0xB0983B50_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R;
	FVerseFunctionProperty_                       __verse_0x62AFAEFE_LookAtOrAttackTarget;
	FVerseFunctionProperty_                       __verse_0x3F6E3D53_LookAtThreatTask;
	FVerseFunctionProperty_                       __verse_0xAADC54BA__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted_L_Nany_R_Nvoid;
	FVerseFunctionProperty_                       __verse_0x4E82FBC7__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted;
	FVerseFunctionProperty_                       __verse_0xF2BC523E__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted_L_Nany_R_Nvoid;
	FVerseFunctionProperty_                       __verse_0xC0C030F4__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted;
	FVerseFunctionProperty_                       __verse_0x46368FA8_ReviveCommand_L_Nagent_R;
	FVerseFunctionProperty_                       __verse_0x0E35E3BF_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R;
	FVerseFunctionProperty_                       __verse_0xDBC1E5D6_ShootTargetService_L_Nfloat_R;
	FVerseFunctionProperty_                       __verse_0xED5B1563_SprintService;
	FVerseFunctionProperty_                       __verse_0x10E1DFC8_TacticalSprintService;
	FVerseFunctionProperty_                       __verse_0x76BD3EE2_WaitForDamage;
	FVerseFunctionProperty_                       __verse_0x866FD0D5_WaitForTargetInVehicle_L_Nfort__character_R;
	FVerseFunctionProperty_                       __verse_0xF5B50F35_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted(const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted_L_Nany_R_Nvoid(FVerseDynamicProperty_ __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted(const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted_L_Nany_R_Nvoid(FVerseDynamicProperty_ __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* CheckForReviveTeamMembers_L_Nping__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FCompanionAI_ping_info& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* CrouchService(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* CrouchUntilHit(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct Ftuple_Lvector3_Mfloat_Mcolor_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* GameLoop(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* GetAttackCommandTarget_L_Nping__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FCompanionAI_ping_info& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* GetNewObstacle(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* GetNewTargetPerception(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* GetNewThreat(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* GetObstacle(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* GetThreat(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* GoToAndAttackTask_L_Nfort__threat__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FVerseAIBase_fort_threat_info& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* HandleBackToMeCommand_L_Nping__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FCompanionAI_ping_info& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* HandleGoTo_L_Nping__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FCompanionAI_ping_info& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* HandleGoToCommand_L_Nping__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FCompanionAI_ping_info& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* HandleHoldPositionCommand_L_Nping__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FCompanionAI_ping_info& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* HandleNPCCommand_L_Nping__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FCompanionAI_ping_info& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* HandleObstacleTask_L_N_Qentity_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, FOptionProperty_ __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* HandleReviveCommand_L_Nping__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FCompanionAI_ping_info& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct CompanionAI::Ftuple_Lvector3_Mfloat_Mfloat_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* LookAtOrAttackTarget(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* LookAtThreatTask(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* ReviveCommand_L_Nagent_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, class USimulation_agent* __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct Ftuple_Lvector3_Mfloat_Magent_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* ShootTargetService_L_Nfloat_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, double __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* SprintService(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* TacticalSprintService(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* WaitForDamage(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* WaitForTargetInVehicle_L_Nfort__character_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, class UObject* __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* WaitForTargetMovement_L_Nfort__character_M_Nfloat_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct Ftuple_Lfort__character_Mfloat_R& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CompanionAI_companion_ai_runtime">();
	}
	static class UCompanionAI_companion_ai_runtime* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCompanionAI_companion_ai_runtime>();
	}
};
static_assert(alignof(UCompanionAI_companion_ai_runtime) == 0x000008, "Wrong alignment on UCompanionAI_companion_ai_runtime");
static_assert(sizeof(UCompanionAI_companion_ai_runtime) == 0x0002B8, "Wrong size on UCompanionAI_companion_ai_runtime");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0xF8ADD547_CompanionAIScript) == 0x000028, "Member 'UCompanionAI_companion_ai_runtime::__verse_0xF8ADD547_CompanionAIScript' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0x963EC691_Character) == 0x000030, "Member 'UCompanionAI_companion_ai_runtime::__verse_0x963EC691_Character' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0xCCC0089F_Navigation) == 0x000038, "Member 'UCompanionAI_companion_ai_runtime::__verse_0xCCC0089F_Navigation' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0x47B0B441_CharacterMovement) == 0x000040, "Member 'UCompanionAI_companion_ai_runtime::__verse_0x47B0B441_CharacterMovement' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0x193FB9C5_Leash) == 0x000048, "Member 'UCompanionAI_companion_ai_runtime::__verse_0x193FB9C5_Leash' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0x3FE20196_FortPing) == 0x000050, "Member 'UCompanionAI_companion_ai_runtime::__verse_0x3FE20196_FortPing' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0x03CEBA4E_CharacterActions) == 0x000058, "Member 'UCompanionAI_companion_ai_runtime::__verse_0x03CEBA4E_CharacterActions' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0xF161303F_WeaponActions) == 0x000060, "Member 'UCompanionAI_companion_ai_runtime::__verse_0xF161303F_WeaponActions' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0x0F05355D_ThreatPerception) == 0x000068, "Member 'UCompanionAI_companion_ai_runtime::__verse_0x0F05355D_ThreatPerception' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0x00C33D6C_ObstaclePerception) == 0x000070, "Member 'UCompanionAI_companion_ai_runtime::__verse_0x00C33D6C_ObstaclePerception' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0xCD79BE49_CheckForReviveTeamMembers_L_Nping__info_R) == 0x000078, "Member 'UCompanionAI_companion_ai_runtime::__verse_0xCD79BE49_CheckForReviveTeamMembers_L_Nping__info_R' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0xFD71F6F9_CrouchService) == 0x000088, "Member 'UCompanionAI_companion_ai_runtime::__verse_0xFD71F6F9_CrouchService' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0x42EEAE4C_CrouchUntilHit) == 0x000098, "Member 'UCompanionAI_companion_ai_runtime::__verse_0x42EEAE4C_CrouchUntilHit' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0x4611DC7E_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R) == 0x0000A8, "Member 'UCompanionAI_companion_ai_runtime::__verse_0x4611DC7E_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0xAAC24BD9_GameLoop) == 0x0000B8, "Member 'UCompanionAI_companion_ai_runtime::__verse_0xAAC24BD9_GameLoop' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0x48CFCF8A_GetAttackCommandTarget_L_Nping__info_R) == 0x0000C8, "Member 'UCompanionAI_companion_ai_runtime::__verse_0x48CFCF8A_GetAttackCommandTarget_L_Nping__info_R' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0x0C45B447_GetNewObstacle) == 0x0000D8, "Member 'UCompanionAI_companion_ai_runtime::__verse_0x0C45B447_GetNewObstacle' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0x2E34E338_GetNewTargetPerception) == 0x0000E8, "Member 'UCompanionAI_companion_ai_runtime::__verse_0x2E34E338_GetNewTargetPerception' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0x0CD61383_GetNewThreat) == 0x0000F8, "Member 'UCompanionAI_companion_ai_runtime::__verse_0x0CD61383_GetNewThreat' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0x8CAF1B4F_GetObstacle) == 0x000108, "Member 'UCompanionAI_companion_ai_runtime::__verse_0x8CAF1B4F_GetObstacle' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0x088B6B1E_GetThreat) == 0x000118, "Member 'UCompanionAI_companion_ai_runtime::__verse_0x088B6B1E_GetThreat' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0x55602A55_GoToAndAttackTask_L_Nfort__threat__info_R) == 0x000128, "Member 'UCompanionAI_companion_ai_runtime::__verse_0x55602A55_GoToAndAttackTask_L_Nfort__threat__info_R' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0x0F435CCE_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R) == 0x000138, "Member 'UCompanionAI_companion_ai_runtime::__verse_0x0F435CCE_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0xCDB7A2EB_HandleBackToMeCommand_L_Nping__info_R) == 0x000148, "Member 'UCompanionAI_companion_ai_runtime::__verse_0xCDB7A2EB_HandleBackToMeCommand_L_Nping__info_R' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0xA6BE52A1_HandleGoTo_L_Nping__info_R) == 0x000158, "Member 'UCompanionAI_companion_ai_runtime::__verse_0xA6BE52A1_HandleGoTo_L_Nping__info_R' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0xDA8C4382_HandleGoToCommand_L_Nping__info_R) == 0x000168, "Member 'UCompanionAI_companion_ai_runtime::__verse_0xDA8C4382_HandleGoToCommand_L_Nping__info_R' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0x732222FF_HandleHoldPositionCommand_L_Nping__info_R) == 0x000178, "Member 'UCompanionAI_companion_ai_runtime::__verse_0x732222FF_HandleHoldPositionCommand_L_Nping__info_R' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0x598CA1A6_HandleNPCCommand_L_Nping__info_R) == 0x000188, "Member 'UCompanionAI_companion_ai_runtime::__verse_0x598CA1A6_HandleNPCCommand_L_Nping__info_R' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0x6FDBE601_HandleObstacleTask_L_N_Qentity_R) == 0x000198, "Member 'UCompanionAI_companion_ai_runtime::__verse_0x6FDBE601_HandleObstacleTask_L_N_Qentity_R' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0x76F49D7B_HandleReviveCommand_L_Nping__info_R) == 0x0001A8, "Member 'UCompanionAI_companion_ai_runtime::__verse_0x76F49D7B_HandleReviveCommand_L_Nping__info_R' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0x20C82F48__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R) == 0x0001B8, "Member 'UCompanionAI_companion_ai_runtime::__verse_0x20C82F48__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0xB0983B50_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R) == 0x0001C8, "Member 'UCompanionAI_companion_ai_runtime::__verse_0xB0983B50_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0x62AFAEFE_LookAtOrAttackTarget) == 0x0001D8, "Member 'UCompanionAI_companion_ai_runtime::__verse_0x62AFAEFE_LookAtOrAttackTarget' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0x3F6E3D53_LookAtThreatTask) == 0x0001E8, "Member 'UCompanionAI_companion_ai_runtime::__verse_0x3F6E3D53_LookAtThreatTask' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0xAADC54BA__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted_L_Nany_R_Nvoid) == 0x0001F8, "Member 'UCompanionAI_companion_ai_runtime::__verse_0xAADC54BA__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted_L_Nany_R_Nvoid' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0x4E82FBC7__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted) == 0x000208, "Member 'UCompanionAI_companion_ai_runtime::__verse_0x4E82FBC7__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0xF2BC523E__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted_L_Nany_R_Nvoid) == 0x000218, "Member 'UCompanionAI_companion_ai_runtime::__verse_0xF2BC523E__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted_L_Nany_R_Nvoid' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0xC0C030F4__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted) == 0x000228, "Member 'UCompanionAI_companion_ai_runtime::__verse_0xC0C030F4__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0x46368FA8_ReviveCommand_L_Nagent_R) == 0x000238, "Member 'UCompanionAI_companion_ai_runtime::__verse_0x46368FA8_ReviveCommand_L_Nagent_R' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0x0E35E3BF_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R) == 0x000248, "Member 'UCompanionAI_companion_ai_runtime::__verse_0x0E35E3BF_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0xDBC1E5D6_ShootTargetService_L_Nfloat_R) == 0x000258, "Member 'UCompanionAI_companion_ai_runtime::__verse_0xDBC1E5D6_ShootTargetService_L_Nfloat_R' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0xED5B1563_SprintService) == 0x000268, "Member 'UCompanionAI_companion_ai_runtime::__verse_0xED5B1563_SprintService' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0x10E1DFC8_TacticalSprintService) == 0x000278, "Member 'UCompanionAI_companion_ai_runtime::__verse_0x10E1DFC8_TacticalSprintService' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0x76BD3EE2_WaitForDamage) == 0x000288, "Member 'UCompanionAI_companion_ai_runtime::__verse_0x76BD3EE2_WaitForDamage' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0x866FD0D5_WaitForTargetInVehicle_L_Nfort__character_R) == 0x000298, "Member 'UCompanionAI_companion_ai_runtime::__verse_0x866FD0D5_WaitForTargetInVehicle_L_Nfort__character_R' has a wrong offset!");
static_assert(offsetof(UCompanionAI_companion_ai_runtime, __verse_0xF5B50F35_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R) == 0x0002A8, "Member 'UCompanionAI_companion_ai_runtime::__verse_0xF5B50F35_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R' has a wrong offset!");

class UCompanionAI_fort_br_character_actions_interface final : public UObject
{
public:
	uint8 _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__br__character__actions__interface_N_RIsFollowingBehaviorEnabled(const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* RunDefaultBehavior(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CompanionAI_fort_br_character_actions_interface">();
	}
	static class UCompanionAI_fort_br_character_actions_interface* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCompanionAI_fort_br_character_actions_interface>();
	}
};
static_assert(alignof(UCompanionAI_fort_br_character_actions_interface) == 0x000008, "Wrong alignment on UCompanionAI_fort_br_character_actions_interface");
static_assert(sizeof(UCompanionAI_fort_br_character_actions_interface) == 0x000028, "Wrong size on UCompanionAI_fort_br_character_actions_interface");

class Utask_CompanionAI_companion_ai_runtime_GetNewThreat final : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*      _Self;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_151[0x7];
	FOptionProperty_                              _RetVal;
	uint8                                         Pad_189[0x7];
	struct FVerseAIBase_fort_threat_info          __verse_0x1EB80E5B_ThreatInfo_1;
	class UObject*                                __verse_0x00000000__2;
	class UObject*                                __verse_0x00000000__3;
	FVerseFunctionProperty_                       _Callee_0;
	struct CompanionAI::Ftuple_L_R                _ExprResult_1;
	uint8                                         Pad_1E1[0x7];
	FVerseDynamicProperty_                        _ExprResult_2;
	class UConcurrency_task*                      _AsyncTask_3;
	FVerseFunctionProperty_                       _AsyncTaskClass_4;
	struct CompanionAI::Ftuple_L_R                _ExprResult_5;
	uint8                                         Pad_211[0x7];
	int64                                         _AsyncResult_6;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_companion_ai_runtime$GetNewThreat">();
	}
	static class Utask_CompanionAI_companion_ai_runtime_GetNewThreat* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_companion_ai_runtime_GetNewThreat>();
	}
};
static_assert(alignof(Utask_CompanionAI_companion_ai_runtime_GetNewThreat) == 0x000008, "Wrong alignment on Utask_CompanionAI_companion_ai_runtime_GetNewThreat");
static_assert(sizeof(Utask_CompanionAI_companion_ai_runtime_GetNewThreat) == 0x000220, "Wrong size on Utask_CompanionAI_companion_ai_runtime_GetNewThreat");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetNewThreat, _Self) == 0x000148, "Member 'Utask_CompanionAI_companion_ai_runtime_GetNewThreat::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetNewThreat, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_companion_ai_runtime_GetNewThreat::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetNewThreat, _RetVal) == 0x000158, "Member 'Utask_CompanionAI_companion_ai_runtime_GetNewThreat::_RetVal' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetNewThreat, __verse_0x1EB80E5B_ThreatInfo_1) == 0x000190, "Member 'Utask_CompanionAI_companion_ai_runtime_GetNewThreat::__verse_0x1EB80E5B_ThreatInfo_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetNewThreat, __verse_0x00000000__2) == 0x0001C0, "Member 'Utask_CompanionAI_companion_ai_runtime_GetNewThreat::__verse_0x00000000__2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetNewThreat, __verse_0x00000000__3) == 0x0001C8, "Member 'Utask_CompanionAI_companion_ai_runtime_GetNewThreat::__verse_0x00000000__3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetNewThreat, _Callee_0) == 0x0001D0, "Member 'Utask_CompanionAI_companion_ai_runtime_GetNewThreat::_Callee_0' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetNewThreat, _ExprResult_1) == 0x0001E0, "Member 'Utask_CompanionAI_companion_ai_runtime_GetNewThreat::_ExprResult_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetNewThreat, _ExprResult_2) == 0x0001E8, "Member 'Utask_CompanionAI_companion_ai_runtime_GetNewThreat::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetNewThreat, _AsyncTask_3) == 0x0001F8, "Member 'Utask_CompanionAI_companion_ai_runtime_GetNewThreat::_AsyncTask_3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetNewThreat, _AsyncTaskClass_4) == 0x000200, "Member 'Utask_CompanionAI_companion_ai_runtime_GetNewThreat::_AsyncTaskClass_4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetNewThreat, _ExprResult_5) == 0x000210, "Member 'Utask_CompanionAI_companion_ai_runtime_GetNewThreat::_ExprResult_5' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetNewThreat, _AsyncResult_6) == 0x000218, "Member 'Utask_CompanionAI_companion_ai_runtime_GetNewThreat::_AsyncResult_6' has a wrong offset!");

class UCompanionAI_fort_br_creature_actions_interface final : public UObject
{
public:
	class UConcurrency_task* RunDefaultBehavior(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CompanionAI_fort_br_creature_actions_interface">();
	}
	static class UCompanionAI_fort_br_creature_actions_interface* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCompanionAI_fort_br_creature_actions_interface>();
	}
};
static_assert(alignof(UCompanionAI_fort_br_creature_actions_interface) == 0x000008, "Wrong alignment on UCompanionAI_fort_br_creature_actions_interface");
static_assert(sizeof(UCompanionAI_fort_br_creature_actions_interface) == 0x000028, "Wrong size on UCompanionAI_fort_br_creature_actions_interface");

class UCompanionAI_fort_npc_component final : public UVerseNPC_npc_component
{
public:
	FVerseFunctionProperty_                       __verse_0xECDDAB04_RunDefaultBehavior;
	FVerseFunctionProperty_                       __verse_0x290D45C4__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__br__character__actions__interface_N_RIsFollowingBehaviorEnabled;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	uint8 _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__br__character__actions__interface_N_RIsFollowingBehaviorEnabled(const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* RunDefaultBehavior(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CompanionAI_fort_npc_component">();
	}
	static class UCompanionAI_fort_npc_component* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCompanionAI_fort_npc_component>();
	}
};
static_assert(alignof(UCompanionAI_fort_npc_component) == 0x000008, "Wrong alignment on UCompanionAI_fort_npc_component");
static_assert(sizeof(UCompanionAI_fort_npc_component) == 0x000350, "Wrong size on UCompanionAI_fort_npc_component");
static_assert(offsetof(UCompanionAI_fort_npc_component, __verse_0xECDDAB04_RunDefaultBehavior) == 0x000330, "Member 'UCompanionAI_fort_npc_component::__verse_0xECDDAB04_RunDefaultBehavior' has a wrong offset!");
static_assert(offsetof(UCompanionAI_fort_npc_component, __verse_0x290D45C4__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__br__character__actions__interface_N_RIsFollowingBehaviorEnabled) == 0x000340, "Member 'UCompanionAI_fort_npc_component::__verse_0x290D45C4__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__br__character__actions__interface_N_RIsFollowingBehaviorEnabled' has a wrong offset!");

class UCompanionAI_fort_ping_interface final : public UObject
{
public:
	uint8 _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RAreNPCCommandsEnabled(const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RCanAcceptPingCommand(const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertedEvent(const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertPingToAttack_L_Nagent_R(class USimulation_agent* __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RDeclineNPCCommand_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_REnableCommandWheel_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RGetCurrentNPCCommand(const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RIsAttackCommandEnabled(const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RUnconvertedEvent(const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* OnNPCCommand(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CompanionAI_fort_ping_interface">();
	}
	static class UCompanionAI_fort_ping_interface* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCompanionAI_fort_ping_interface>();
	}
};
static_assert(alignof(UCompanionAI_fort_ping_interface) == 0x000008, "Wrong alignment on UCompanionAI_fort_ping_interface");
static_assert(sizeof(UCompanionAI_fort_ping_interface) == 0x000028, "Wrong size on UCompanionAI_fort_ping_interface");

class Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R final : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*      _Self;
	struct CompanionAI::Ftuple_Lvector3_Mfloat_Mfloat_R __verse_0xB2CDDD72_Argument;
	EVerseTrue                                    _InvokeSureResultDummy_0;
	uint8                                         Pad_179[0x7];
	FVerseFunctionProperty_                       _Callee_1;
	FVerseStringProperty_                         _ExprResult_2;
	struct FSpatialMath_vector3                   __verse_0x68BA2569_RandomOffset_1;
	double                                        _ExprResultStack_3;
	FVerseFunctionProperty_                       _Callee_4;
	struct Ftuple_Ltype_7b_2d1_2e000000e_2b03_7d_Mtype_7b1_2e000000e_2b03_7d_R _ExprResult_5;
	double                                        _ExprResultStack_6;
	FVerseFunctionProperty_                       _Callee_7;
	struct Ftuple_Ltype_7b_2d1_2e000000e_2b03_7d_Mtype_7b1_2e000000e_2b03_7d_R _ExprResult_8;
	double                                        _ExprResultStack_9;
	FVerseFunctionProperty_                       _Callee_10;
	struct Ftuple_Ltype_7b5_2e000000e_2b01_7d_Mtype_7b2_2e000000e_2b02_7d_R _ExprResult_11;
	uint8                                         _AsyncBeginCount_12 : 1;
	uint8                                         BitPad_230_1 : 7;
	uint8                                         _AsyncBeginCount_13 : 1;
	uint8                                         Pad_232[0x6];
	class UObject*                                __verse_0x00000000__2;
	class UConcurrency_task*                      _AsyncTask_14;
	FVerseFunctionProperty_                       _AsyncTaskClass_15;
	struct FSpatialMath_vector3                   _ExprResultStack_16;
	FVerseFunctionProperty_                       _Callee_17;
	struct CompanionAI::Ftuple_Lvector3_Mvector3_R _ExprResult_18;
	int64                                         _AsyncResult_19;
	uint8                                         _AsyncBeginCount_20 : 1;
	uint8                                         Pad_2B9[0x7];
	class UConcurrency_task*                      _AsyncTask_21;
	FVerseFunctionProperty_                       _AsyncTaskClass_22;
	double                                        _ExprResultStack_23;
	FVerseFunctionProperty_                       _Callee_24;
	struct CompanionAI::Ftuple_Lfloat_Mfloat_R    _ExprResult_25;
	int64                                         _AsyncResult_26;
	EVerseTrue                                    _InvokeSureResultDummy_27;
	uint8                                         Pad_309[0x7];
	FVerseFunctionProperty_                       _Callee_28;
	FVerseStringProperty_                         _ExprResult_29;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_companion_ai_runtime$LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R">();
	}
	static class Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R>();
	}
};
static_assert(alignof(Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R) == 0x000008, "Wrong alignment on Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R");
static_assert(sizeof(Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R) == 0x000330, "Wrong size on Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R, _Self) == 0x000148, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R, _InvokeSureResultDummy_0) == 0x000178, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::_InvokeSureResultDummy_0' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R, _Callee_1) == 0x000180, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::_Callee_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R, _ExprResult_2) == 0x000190, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R, __verse_0x68BA2569_RandomOffset_1) == 0x0001A0, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::__verse_0x68BA2569_RandomOffset_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R, _ExprResultStack_3) == 0x0001B8, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::_ExprResultStack_3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R, _Callee_4) == 0x0001C0, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::_Callee_4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R, _ExprResult_5) == 0x0001D0, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::_ExprResult_5' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R, _ExprResultStack_6) == 0x0001E0, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::_ExprResultStack_6' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R, _Callee_7) == 0x0001E8, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::_Callee_7' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R, _ExprResult_8) == 0x0001F8, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::_ExprResult_8' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R, _ExprResultStack_9) == 0x000208, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::_ExprResultStack_9' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R, _Callee_10) == 0x000210, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::_Callee_10' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R, _ExprResult_11) == 0x000220, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::_ExprResult_11' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R, __verse_0x00000000__2) == 0x000238, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::__verse_0x00000000__2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R, _AsyncTask_14) == 0x000240, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::_AsyncTask_14' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R, _AsyncTaskClass_15) == 0x000248, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::_AsyncTaskClass_15' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R, _ExprResultStack_16) == 0x000258, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::_ExprResultStack_16' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R, _Callee_17) == 0x000270, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::_Callee_17' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R, _ExprResult_18) == 0x000280, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::_ExprResult_18' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R, _AsyncResult_19) == 0x0002B0, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::_AsyncResult_19' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R, _AsyncTask_21) == 0x0002C0, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::_AsyncTask_21' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R, _AsyncTaskClass_22) == 0x0002C8, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::_AsyncTaskClass_22' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R, _ExprResultStack_23) == 0x0002D8, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::_ExprResultStack_23' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R, _Callee_24) == 0x0002E0, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::_Callee_24' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R, _ExprResult_25) == 0x0002F0, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::_ExprResult_25' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R, _AsyncResult_26) == 0x000300, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::_AsyncResult_26' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R, _InvokeSureResultDummy_27) == 0x000308, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::_InvokeSureResultDummy_27' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R, _Callee_28) == 0x000310, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::_Callee_28' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R, _ExprResult_29) == 0x000320, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::_ExprResult_29' has a wrong offset!");

class UCompanionAI_log_companion_ai final : public UDiagnostics_log_channel
{
public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CompanionAI_log_companion_ai">();
	}
	static class UCompanionAI_log_companion_ai* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCompanionAI_log_companion_ai>();
	}
};
static_assert(alignof(UCompanionAI_log_companion_ai) == 0x000008, "Wrong alignment on UCompanionAI_log_companion_ai");
static_assert(sizeof(UCompanionAI_log_companion_ai) == 0x000028, "Wrong size on UCompanionAI_log_companion_ai");

class Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask final : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*      _Self;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	EVerseTrue                                    _InvokeSureResultDummy_0;
	uint8                                         Pad_152[0x6];
	FVerseFunctionProperty_                       _Callee_1;
	FVerseStringProperty_                         _ExprResult_2;
	struct FVerseAIBase_fort_threat_info          __verse_0x1EB80E5B_ThreatInfo_3;
	class UObject*                                __verse_0x00000000__4;
	FOptionProperty_                              _ExprResultStack_3;
	uint8                                         Pad_1E1[0x7];
	FVerseFunctionProperty_                       _Callee_4;
	struct CompanionAI::Ftuple_L_R                _ExprResult_5;
	uint8                                         _AsyncBeginCount_6 : 1;
	uint8                                         BitPad_1F9_1 : 7;
	uint8                                         _AsyncBeginCount_7 : 1;
	uint8                                         Pad_1FB[0x5];
	class UConcurrency_task*                      _AsyncTask_8;
	FVerseFunctionProperty_                       _AsyncTaskClass_9;
	struct CompanionAI::Ftuple_L_R                _ExprResult_10;
	uint8                                         Pad_219[0x7];
	int64                                         _AsyncResult_11;
	uint8                                         _AsyncBeginCount_12 : 1;
	uint8                                         Pad_229[0x7];
	class UConcurrency_task*                      _AsyncTask_13;
	FVerseFunctionProperty_                       _AsyncTaskClass_14;
	struct CompanionAI::Ftuple_L_R                _ExprResult_15;
	uint8                                         Pad_249[0x7];
	int64                                         _AsyncResult_16;
	uint8                                         _AsyncBeginCount_17 : 1;
	uint8                                         Pad_259[0x7];
	class UObject*                                __verse_0x00000000__6;
	class UConcurrency_task*                      _AsyncTask_18;
	FVerseFunctionProperty_                       _AsyncTaskClass_19;
	struct FSpatialMath_vector3                   _ExprResultStack_20;
	FVerseFunctionProperty_                       _Callee_21;
	int64                                         _AsyncResult_22;
	FVerseFunctionProperty_                       _AsyncTaskClass_23;
	class UConcurrency_task*                      _AsyncTask_24;
	FVerseFunctionProperty_                       _AsyncTaskClass_25;
	struct CompanionAI::Ftuple_L_R                _ExprResult_26;
	uint8                                         Pad_2D9[0x7];
	int64                                         _AsyncResult_27;
	EVerseTrue                                    _InvokeSureResultDummy_28;
	uint8                                         Pad_2E9[0x7];
	FVerseFunctionProperty_                       _Callee_29;
	FVerseStringProperty_                         _ExprResult_30;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_companion_ai_runtime$LookAtThreatTask">();
	}
	static class Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask>();
	}
};
static_assert(alignof(Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask) == 0x000008, "Wrong alignment on Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask");
static_assert(sizeof(Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask) == 0x000310, "Wrong size on Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask, _Self) == 0x000148, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask, _InvokeSureResultDummy_0) == 0x000151, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask::_InvokeSureResultDummy_0' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask, _Callee_1) == 0x000158, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask::_Callee_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask, _ExprResult_2) == 0x000168, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask, __verse_0x1EB80E5B_ThreatInfo_3) == 0x000178, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask::__verse_0x1EB80E5B_ThreatInfo_3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask, __verse_0x00000000__4) == 0x0001A8, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask::__verse_0x00000000__4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask, _ExprResultStack_3) == 0x0001B0, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask::_ExprResultStack_3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask, _Callee_4) == 0x0001E8, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask::_Callee_4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask, _ExprResult_5) == 0x0001F8, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask::_ExprResult_5' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask, _AsyncTask_8) == 0x000200, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask::_AsyncTask_8' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask, _AsyncTaskClass_9) == 0x000208, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask::_AsyncTaskClass_9' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask, _ExprResult_10) == 0x000218, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask::_ExprResult_10' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask, _AsyncResult_11) == 0x000220, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask::_AsyncResult_11' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask, _AsyncTask_13) == 0x000230, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask::_AsyncTask_13' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask, _AsyncTaskClass_14) == 0x000238, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask::_AsyncTaskClass_14' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask, _ExprResult_15) == 0x000248, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask::_ExprResult_15' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask, _AsyncResult_16) == 0x000250, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask::_AsyncResult_16' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask, __verse_0x00000000__6) == 0x000260, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask::__verse_0x00000000__6' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask, _AsyncTask_18) == 0x000268, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask::_AsyncTask_18' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask, _AsyncTaskClass_19) == 0x000270, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask::_AsyncTaskClass_19' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask, _ExprResultStack_20) == 0x000280, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask::_ExprResultStack_20' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask, _Callee_21) == 0x000298, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask::_Callee_21' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask, _AsyncResult_22) == 0x0002A8, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask::_AsyncResult_22' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask, _AsyncTaskClass_23) == 0x0002B0, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask::_AsyncTaskClass_23' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask, _AsyncTask_24) == 0x0002C0, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask::_AsyncTask_24' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask, _AsyncTaskClass_25) == 0x0002C8, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask::_AsyncTaskClass_25' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask, _ExprResult_26) == 0x0002D8, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask::_ExprResult_26' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask, _AsyncResult_27) == 0x0002E0, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask::_AsyncResult_27' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask, _InvokeSureResultDummy_28) == 0x0002E8, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask::_InvokeSureResultDummy_28' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask, _Callee_29) == 0x0002F0, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask::_Callee_29' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask, _ExprResult_30) == 0x000300, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask::_ExprResult_30' has a wrong offset!");

class UCompanionAI_log_companion_creature final : public UDiagnostics_log_channel
{
public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CompanionAI_log_companion_creature">();
	}
	static class UCompanionAI_log_companion_creature* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCompanionAI_log_companion_creature>();
	}
};
static_assert(alignof(UCompanionAI_log_companion_creature) == 0x000008, "Wrong alignment on UCompanionAI_log_companion_creature");
static_assert(sizeof(UCompanionAI_log_companion_creature) == 0x000028, "Wrong size on UCompanionAI_log_companion_creature");

class Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R final : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*      _Self;
	struct Ftuple_Lvector3_Mfloat_Magent_R        __verse_0xB2CDDD72_Argument;
	EVerseTrue                                    _InvokeSureResultDummy_0;
	uint8                                         Pad_179[0x7];
	FVerseFunctionProperty_                       _Callee_1;
	FVerseStringProperty_                         _ExprResult_2;
	TArray<FVerseDynamicProperty_>                __verse_0xFFC68BC5_Array_2;
	FVerseFunctionProperty_                       _Callee_3;
	TArray<TArray<FVerseDynamicProperty_>>        _ExprResult_4;
	TArray<FVerseStringProperty_>                 __verse_0xFFC68BC5_Array_3;
	struct CompanionAI::Ftuple_L_Kchar_M_Kchar_R  __verse_0x00000000__4;
	FVerseStringProperty_                         _ExprResult_5;
	FVerseStringProperty_                         _ExprResultStack_6;
	FVerseFunctionProperty_                       _Callee_7;
	FVerseStringProperty_                         _ExprResultDummy_8;
	FVerseStringProperty_                         _ExprResultDummy_9;
	TArray<TArray<FVerseDynamicProperty_>>        _ForResult_10;
	int64                                         _ForIndex_11;
	int64                                         _ForLength_12;
	FVerseStringProperty_                         __verse_0xFB88B569_Item_6;
	TArray<FVerseDynamicProperty_>                _ExprResult_13;
	FVerseStringProperty_                         __verse_0xFFC68BC5_Array_7;
	TArray<FVerseDynamicProperty_>                _ForResult_14;
	int64                                         _ForIndex_15;
	int64                                         _ForLength_16;
	uint8                                         __verse_0xFB88B569_Item_9;
	uint8                                         Pad_2C1[0x7];
	FVerseDynamicProperty_                        _ExprResult_17;
	FVerseStringProperty_                         _ForResult_18;
	int64                                         _ForIndex_19;
	int64                                         _ForLength_20;
	FVerseDynamicProperty_                        __verse_0xFB88B569_Item_11;
	uint8                                         _ExprResult_21;
	uint8                                         _AsyncBeginCount_22 : 1;
	uint8                                         Pad_30A[0x6];
	class UConcurrency_task*                      _AsyncTask_23;
	FVerseFunctionProperty_                       _AsyncTaskClass_24;
	struct Ftuple_Lvector3_Mfloat_Mcolor_R        _ExprResult_25;
	int64                                         _AsyncResult_26;
	class UObject*                                __verse_0x00000000__12;
	EVerseTrue                                    _InvokeSureResultDummy_27;
	uint8                                         Pad_371[0x7];
	FVerseFunctionProperty_                       _Callee_28;
	struct Ftuple_Lvector3_Mtype_7b1_2e000000e_2b02_7d_Mfloat_R _ExprResult_29;
	class UConcurrency_task*                      _AsyncTask_30;
	FVerseFunctionProperty_                       _AsyncTaskClass_31;
	int64                                         _AsyncResult_32;
	class UObject*                                __verse_0x00000000__14;
	EVerseTrue                                    _InvokeSureResultDummy_33;
	uint8                                         Pad_3D9[0x7];
	FVerseFunctionProperty_                       _Callee_34;
	struct CompanionAI::Ftuple_Lagent_Mfloat_Mfloat_R _ExprResult_35;
	struct CompanionAI::Ftuple_Lfloat_Mfloat_R    _ExprResultStack_36;
	FVerseFunctionProperty_                       _Callee_37;
	struct CompanionAI::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_38;
	struct CompanionAI::Ftuple_L_R                _ExprResult_39;
	struct CompanionAI::Ftuple_L_R                _ExprResult_40;
	uint8                                         Pad_43A[0x6];
	struct CompanionAI::Ftuple_Lfloat_Mfloat_R    _ExprResultStack_41;
	FVerseFunctionProperty_                       _Callee_42;
	struct CompanionAI::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_43;
	struct CompanionAI::Ftuple_L_R                _ExprResult_44;
	struct CompanionAI::Ftuple_L_R                _ExprResult_45;
	EVerseTrue                                    _InvokeSureResultDummy_46;
	uint8                                         Pad_473[0x5];
	FVerseFunctionProperty_                       _Callee_47;
	FVerseStringProperty_                         _ExprResult_48;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_companion_ai_runtime$SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R">();
	}
	static class Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R>();
	}
};
static_assert(alignof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R) == 0x000008, "Wrong alignment on Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R");
static_assert(sizeof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R) == 0x000498, "Wrong size on Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _Self) == 0x000148, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _InvokeSureResultDummy_0) == 0x000178, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_InvokeSureResultDummy_0' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _Callee_1) == 0x000180, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_Callee_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _ExprResult_2) == 0x000190, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, __verse_0xFFC68BC5_Array_2) == 0x0001A0, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::__verse_0xFFC68BC5_Array_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _Callee_3) == 0x0001B0, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_Callee_3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _ExprResult_4) == 0x0001C0, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_ExprResult_4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, __verse_0xFFC68BC5_Array_3) == 0x0001D0, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::__verse_0xFFC68BC5_Array_3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, __verse_0x00000000__4) == 0x0001E0, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::__verse_0x00000000__4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _ExprResult_5) == 0x000200, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_ExprResult_5' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _ExprResultStack_6) == 0x000210, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_ExprResultStack_6' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _Callee_7) == 0x000220, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_Callee_7' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _ExprResultDummy_8) == 0x000230, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_ExprResultDummy_8' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _ExprResultDummy_9) == 0x000240, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_ExprResultDummy_9' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _ForResult_10) == 0x000250, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_ForResult_10' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _ForIndex_11) == 0x000260, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_ForIndex_11' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _ForLength_12) == 0x000268, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_ForLength_12' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, __verse_0xFB88B569_Item_6) == 0x000270, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::__verse_0xFB88B569_Item_6' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _ExprResult_13) == 0x000280, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_ExprResult_13' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, __verse_0xFFC68BC5_Array_7) == 0x000290, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::__verse_0xFFC68BC5_Array_7' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _ForResult_14) == 0x0002A0, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_ForResult_14' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _ForIndex_15) == 0x0002B0, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_ForIndex_15' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _ForLength_16) == 0x0002B8, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_ForLength_16' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, __verse_0xFB88B569_Item_9) == 0x0002C0, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::__verse_0xFB88B569_Item_9' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _ExprResult_17) == 0x0002C8, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_ExprResult_17' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _ForResult_18) == 0x0002D8, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_ForResult_18' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _ForIndex_19) == 0x0002E8, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_ForIndex_19' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _ForLength_20) == 0x0002F0, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_ForLength_20' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, __verse_0xFB88B569_Item_11) == 0x0002F8, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::__verse_0xFB88B569_Item_11' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _ExprResult_21) == 0x000308, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_ExprResult_21' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _AsyncTask_23) == 0x000310, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_AsyncTask_23' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _AsyncTaskClass_24) == 0x000318, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_AsyncTaskClass_24' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _ExprResult_25) == 0x000328, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_ExprResult_25' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _AsyncResult_26) == 0x000360, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_AsyncResult_26' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, __verse_0x00000000__12) == 0x000368, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::__verse_0x00000000__12' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _InvokeSureResultDummy_27) == 0x000370, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_InvokeSureResultDummy_27' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _Callee_28) == 0x000378, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_Callee_28' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _ExprResult_29) == 0x000388, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_ExprResult_29' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _AsyncTask_30) == 0x0003B0, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_AsyncTask_30' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _AsyncTaskClass_31) == 0x0003B8, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_AsyncTaskClass_31' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _AsyncResult_32) == 0x0003C8, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_AsyncResult_32' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, __verse_0x00000000__14) == 0x0003D0, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::__verse_0x00000000__14' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _InvokeSureResultDummy_33) == 0x0003D8, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_InvokeSureResultDummy_33' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _Callee_34) == 0x0003E0, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_Callee_34' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _ExprResult_35) == 0x0003F0, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_ExprResult_35' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _ExprResultStack_36) == 0x000408, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_ExprResultStack_36' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _Callee_37) == 0x000418, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_Callee_37' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _ExprResult_38) == 0x000428, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_ExprResult_38' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _ExprResult_39) == 0x000438, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_ExprResult_39' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _ExprResult_40) == 0x000439, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_ExprResult_40' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _ExprResultStack_41) == 0x000440, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_ExprResultStack_41' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _Callee_42) == 0x000450, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_Callee_42' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _ExprResult_43) == 0x000460, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_ExprResult_43' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _ExprResult_44) == 0x000470, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_ExprResult_44' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _ExprResult_45) == 0x000471, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_ExprResult_45' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _InvokeSureResultDummy_46) == 0x000472, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_InvokeSureResultDummy_46' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _Callee_47) == 0x000478, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_Callee_47' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, _ExprResult_48) == 0x000488, "Member 'Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::_ExprResult_48' has a wrong offset!");

class UCompanionAI_ping_component final : public UPingComponentBase
{
public:
	FVerseFunctionProperty_                       __verse_0x4A0C11E4__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RAreNPCCommandsEnabled;
	FVerseFunctionProperty_                       __verse_0xA07D85E4__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RCanAcceptPingCommand;
	FVerseFunctionProperty_                       __verse_0xFCB4C0C9__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_REnableCommandWheel_L_Nlogic_R;
	FVerseFunctionProperty_                       __verse_0xD6588DA4__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RGetCurrentNPCCommand;
	FVerseFunctionProperty_                       __verse_0x68114BBA_OnNPCCommand;
	FVerseFunctionProperty_                       __verse_0xA8918968__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RDeclineNPCCommand_L_Nlogic_R;
	FVerseFunctionProperty_                       __verse_0x121A4D52__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RIsAttackCommandEnabled;
	FVerseFunctionProperty_                       __verse_0xD81F0534__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertPingToAttack_L_Nagent_R;
	FVerseFunctionProperty_                       __verse_0xC34E89EF__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertedEvent;
	FVerseFunctionProperty_                       __verse_0x19DD9F60__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RUnconvertedEvent;
	class UVerseEngine_multicast_delegate*        __verse_0xC18257FD_ConvertedEventInternal;
	class UVerseEngine_multicast_delegate*        __verse_0x0E297686_UnconvertedEventInternal;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	uint8 _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RAreNPCCommandsEnabled(const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RCanAcceptPingCommand(const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertedEvent(const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertPingToAttack_L_Nagent_R(class USimulation_agent* __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RDeclineNPCCommand_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_REnableCommandWheel_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RGetCurrentNPCCommand(const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RIsAttackCommandEnabled(const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RUnconvertedEvent(const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* OnNPCCommand(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct CompanionAI::Ftuple_L_R& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CompanionAI_ping_component">();
	}
	static class UCompanionAI_ping_component* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCompanionAI_ping_component>();
	}
};
static_assert(alignof(UCompanionAI_ping_component) == 0x000008, "Wrong alignment on UCompanionAI_ping_component");
static_assert(sizeof(UCompanionAI_ping_component) == 0x000160, "Wrong size on UCompanionAI_ping_component");
static_assert(offsetof(UCompanionAI_ping_component, __verse_0x4A0C11E4__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RAreNPCCommandsEnabled) == 0x0000B0, "Member 'UCompanionAI_ping_component::__verse_0x4A0C11E4__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RAreNPCCommandsEnabled' has a wrong offset!");
static_assert(offsetof(UCompanionAI_ping_component, __verse_0xA07D85E4__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RCanAcceptPingCommand) == 0x0000C0, "Member 'UCompanionAI_ping_component::__verse_0xA07D85E4__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RCanAcceptPingCommand' has a wrong offset!");
static_assert(offsetof(UCompanionAI_ping_component, __verse_0xFCB4C0C9__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_REnableCommandWheel_L_Nlogic_R) == 0x0000D0, "Member 'UCompanionAI_ping_component::__verse_0xFCB4C0C9__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_REnableCommandWheel_L_Nlogic_R' has a wrong offset!");
static_assert(offsetof(UCompanionAI_ping_component, __verse_0xD6588DA4__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RGetCurrentNPCCommand) == 0x0000E0, "Member 'UCompanionAI_ping_component::__verse_0xD6588DA4__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RGetCurrentNPCCommand' has a wrong offset!");
static_assert(offsetof(UCompanionAI_ping_component, __verse_0x68114BBA_OnNPCCommand) == 0x0000F0, "Member 'UCompanionAI_ping_component::__verse_0x68114BBA_OnNPCCommand' has a wrong offset!");
static_assert(offsetof(UCompanionAI_ping_component, __verse_0xA8918968__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RDeclineNPCCommand_L_Nlogic_R) == 0x000100, "Member 'UCompanionAI_ping_component::__verse_0xA8918968__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RDeclineNPCCommand_L_Nlogic_R' has a wrong offset!");
static_assert(offsetof(UCompanionAI_ping_component, __verse_0x121A4D52__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RIsAttackCommandEnabled) == 0x000110, "Member 'UCompanionAI_ping_component::__verse_0x121A4D52__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RIsAttackCommandEnabled' has a wrong offset!");
static_assert(offsetof(UCompanionAI_ping_component, __verse_0xD81F0534__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertPingToAttack_L_Nagent_R) == 0x000120, "Member 'UCompanionAI_ping_component::__verse_0xD81F0534__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertPingToAttack_L_Nagent_R' has a wrong offset!");
static_assert(offsetof(UCompanionAI_ping_component, __verse_0xC34E89EF__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertedEvent) == 0x000130, "Member 'UCompanionAI_ping_component::__verse_0xC34E89EF__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertedEvent' has a wrong offset!");
static_assert(offsetof(UCompanionAI_ping_component, __verse_0x19DD9F60__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RUnconvertedEvent) == 0x000140, "Member 'UCompanionAI_ping_component::__verse_0x19DD9F60__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RUnconvertedEvent' has a wrong offset!");
static_assert(offsetof(UCompanionAI_ping_component, __verse_0xC18257FD_ConvertedEventInternal) == 0x000150, "Member 'UCompanionAI_ping_component::__verse_0xC18257FD_ConvertedEventInternal' has a wrong offset!");
static_assert(offsetof(UCompanionAI_ping_component, __verse_0x0E297686_UnconvertedEventInternal) == 0x000158, "Member 'UCompanionAI_ping_component::__verse_0x0E297686_UnconvertedEventInternal' has a wrong offset!");

class Utask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R final : public UConcurrency_task
{
public:
	class UCompanionAI_companion_creature*        _Self;
	struct Ftuple_Lvector3_Mfloat_Mcolor_R        __verse_0xB2CDDD72_Argument;
	FOptionProperty_                              _ExprResultStack_0;
	EVerseTrue                                    _InvokeSureResultDummy_1;
	uint8                                         Pad_18B[0x5];
	FVerseFunctionProperty_                       _Callee_2;
	struct Ftuple_Lvector3_M_QParams_Nsphere__draw__params_R _ExprResult_3;
	FOptionProperty_                              _ExprResult_4;
	uint8                                         Pad_251[0x7];
	struct FVGameplayRst_DebugDraw_sphere_draw_params _ExprResult_5;
	class UConcurrency_task*                      _AsyncTask_6;
	FVerseFunctionProperty_                       _AsyncTaskClass_7;
	int64                                         _AsyncResult_8;
	EVerseTrue                                    _InvokeSureResultDummy_9;
	uint8                                         Pad_2C1[0x7];
	FVerseFunctionProperty_                       _Callee_10;
	struct CompanionAI::Ftuple_L_R                _ExprResult_11;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_companion_creature$DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R">();
	}
	static class Utask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R>();
	}
};
static_assert(alignof(Utask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R) == 0x000008, "Wrong alignment on Utask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R");
static_assert(sizeof(Utask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R) == 0x0002E0, "Wrong size on Utask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R");
static_assert(offsetof(Utask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R, _Self) == 0x000148, "Member 'Utask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R, _ExprResultStack_0) == 0x000188, "Member 'Utask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::_ExprResultStack_0' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R, _InvokeSureResultDummy_1) == 0x00018A, "Member 'Utask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::_InvokeSureResultDummy_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R, _Callee_2) == 0x000190, "Member 'Utask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::_Callee_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R, _ExprResult_3) == 0x0001A0, "Member 'Utask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::_ExprResult_3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R, _ExprResult_4) == 0x000208, "Member 'Utask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::_ExprResult_4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R, _ExprResult_5) == 0x000258, "Member 'Utask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::_ExprResult_5' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R, _AsyncTask_6) == 0x0002A0, "Member 'Utask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::_AsyncTask_6' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R, _AsyncTaskClass_7) == 0x0002A8, "Member 'Utask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::_AsyncTaskClass_7' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R, _AsyncResult_8) == 0x0002B8, "Member 'Utask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::_AsyncResult_8' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R, _InvokeSureResultDummy_9) == 0x0002C0, "Member 'Utask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::_InvokeSureResultDummy_9' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R, _Callee_10) == 0x0002C8, "Member 'Utask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::_Callee_10' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R, _ExprResult_11) == 0x0002D8, "Member 'Utask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::_ExprResult_11' has a wrong offset!");

class Utask_CompanionAI_companion_ai_OnBegin final : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai*              _Self;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_151[0x7];
	class UObject*                                __verse_0x963EC691_Character_1;
	FOptionProperty_                              _ExprResultStack_0;
	FVerseFunctionProperty_                       _Callee_1;
	struct CompanionAI::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R _ExprResult_2;
	FOptionProperty_                              _ExprResultStack_3;
	FVerseFunctionProperty_                       _Callee_4;
	struct CompanionAI::Ftuple_L_R                _ExprResult_5;
	struct CompanionAI::Ftuple_L_R                _ExprResult_6;
	struct CompanionAI::Ftuple_L_R                _ExprResult_7;
	uint8                                         Pad_1A3[0x5];
	class UObject*                                __verse_0xCCC0089F_Navigation_1;
	FOptionProperty_                              _ExprResultStack_8;
	FVerseFunctionProperty_                       _Callee_9;
	struct CompanionAI::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_10;
	struct CompanionAI::Ftuple_L_R                _ExprResult_11;
	struct CompanionAI::Ftuple_L_R                _ExprResult_12;
	uint8                                         Pad_1DA[0x6];
	class UObject*                                __verse_0x193FB9C5_Leash_1;
	FOptionProperty_                              _ExprResultStack_13;
	FVerseFunctionProperty_                       _Callee_14;
	struct CompanionAI::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_15;
	struct CompanionAI::Ftuple_L_R                _ExprResult_16;
	struct CompanionAI::Ftuple_L_R                _ExprResult_17;
	uint8                                         Pad_212[0x6];
	class UObject*                                __verse_0x47B0B441_CharacterMovement_1;
	FOptionProperty_                              _ExprResultStack_18;
	FVerseFunctionProperty_                       _Callee_19;
	struct CompanionAI::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_20;
	struct CompanionAI::Ftuple_L_R                _ExprResult_21;
	struct CompanionAI::Ftuple_L_R                _ExprResult_22;
	uint8                                         Pad_24A[0x6];
	class UObject*                                __verse_0x3FE20196_FortPing_1;
	FOptionProperty_                              _ExprResultStack_23;
	FVerseFunctionProperty_                       _Callee_24;
	struct CompanionAI::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_25;
	struct CompanionAI::Ftuple_L_R                _ExprResult_26;
	struct CompanionAI::Ftuple_L_R                _ExprResult_27;
	uint8                                         Pad_282[0x6];
	class UObject*                                __verse_0x03CEBA4E_CharacterActions_1;
	FOptionProperty_                              _ExprResultStack_28;
	FVerseFunctionProperty_                       _Callee_29;
	struct CompanionAI::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_30;
	struct CompanionAI::Ftuple_L_R                _ExprResult_31;
	struct CompanionAI::Ftuple_L_R                _ExprResult_32;
	uint8                                         Pad_2BA[0x6];
	class UObject*                                __verse_0xF161303F_WeaponActions_1;
	FOptionProperty_                              _ExprResultStack_33;
	FVerseFunctionProperty_                       _Callee_34;
	struct CompanionAI::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_35;
	struct CompanionAI::Ftuple_L_R                _ExprResult_36;
	struct CompanionAI::Ftuple_L_R                _ExprResult_37;
	uint8                                         Pad_2F2[0x6];
	class UObject*                                __verse_0x0F05355D_ThreatPerception_1;
	FOptionProperty_                              _ExprResultStack_38;
	FVerseFunctionProperty_                       _Callee_39;
	struct CompanionAI::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_40;
	struct CompanionAI::Ftuple_L_R                _ExprResult_41;
	struct CompanionAI::Ftuple_L_R                _ExprResult_42;
	uint8                                         Pad_32A[0x6];
	class UObject*                                __verse_0x00C33D6C_ObstaclePerception_1;
	FOptionProperty_                              _ExprResultStack_43;
	FVerseFunctionProperty_                       _Callee_44;
	struct CompanionAI::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_45;
	struct CompanionAI::Ftuple_L_R                _ExprResult_46;
	struct CompanionAI::Ftuple_L_R                _ExprResult_47;
	uint8                                         Pad_362[0x6];
	class UCompanionAI_companion_ai_runtime*      __verse_0x2B0A024B_CompanionAIRuntime_1;
	class UCompanionAI_companion_ai_runtime*      __verse_0x00000000__2;
	class UConcurrency_task*                      _AsyncTask_49;
	FVerseFunctionProperty_                       _AsyncTaskClass_50;
	struct CompanionAI::Ftuple_L_R                _ExprResult_51;
	uint8                                         Pad_391[0x7];
	int64                                         _AsyncResult_52;
	FVerseStringProperty_                         __verse_0x39263057_WarningMsg_3;
	class UDiagnostics_log*                       __verse_0x00000000__4;
	EVerseTrue                                    _InvokeSureResultDummy_53;
	uint8                                         Pad_3B9[0x7];
	FVerseFunctionProperty_                       _Callee_54;
	struct CompanionAI::Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R _ExprResult_55;
	FOptionProperty_                              _ExprResult_56;
	EVerseTrue                                    _InvokeSureResultDummy_57;
	uint8                                         Pad_3EB[0x5];
	FVerseFunctionProperty_                       _Callee_58;
	struct CompanionAI::Ftuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R _ExprResult_59;
	struct CompanionAI::Ftuple_L_Kchar_M_QColor_Ncolor_M_QDuration_Nfloat_R __verse_0x00000000__5;
	FOptionProperty_                              _ExprResult_60;
	uint8                                         Pad_499[0x7];
	FOptionProperty_                              _ExprResult_61;
	uint8                                         Pad_4A9[0x7];
	FVerseStringProperty_                         _ExprResultDummy_62;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_companion_ai$OnBegin">();
	}
	static class Utask_CompanionAI_companion_ai_OnBegin* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_companion_ai_OnBegin>();
	}
};
static_assert(alignof(Utask_CompanionAI_companion_ai_OnBegin) == 0x000008, "Wrong alignment on Utask_CompanionAI_companion_ai_OnBegin");
static_assert(sizeof(Utask_CompanionAI_companion_ai_OnBegin) == 0x0004C0, "Wrong size on Utask_CompanionAI_companion_ai_OnBegin");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _Self) == 0x000148, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_companion_ai_OnBegin::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, __verse_0x963EC691_Character_1) == 0x000158, "Member 'Utask_CompanionAI_companion_ai_OnBegin::__verse_0x963EC691_Character_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResultStack_0) == 0x000160, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResultStack_0' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _Callee_1) == 0x000168, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_Callee_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResult_2) == 0x000178, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResultStack_3) == 0x000188, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResultStack_3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _Callee_4) == 0x000190, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_Callee_4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResult_5) == 0x0001A0, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResult_5' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResult_6) == 0x0001A1, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResult_6' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResult_7) == 0x0001A2, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResult_7' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, __verse_0xCCC0089F_Navigation_1) == 0x0001A8, "Member 'Utask_CompanionAI_companion_ai_OnBegin::__verse_0xCCC0089F_Navigation_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResultStack_8) == 0x0001B0, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResultStack_8' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _Callee_9) == 0x0001B8, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_Callee_9' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResult_10) == 0x0001C8, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResult_10' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResult_11) == 0x0001D8, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResult_11' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResult_12) == 0x0001D9, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResult_12' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, __verse_0x193FB9C5_Leash_1) == 0x0001E0, "Member 'Utask_CompanionAI_companion_ai_OnBegin::__verse_0x193FB9C5_Leash_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResultStack_13) == 0x0001E8, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResultStack_13' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _Callee_14) == 0x0001F0, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_Callee_14' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResult_15) == 0x000200, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResult_15' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResult_16) == 0x000210, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResult_16' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResult_17) == 0x000211, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResult_17' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, __verse_0x47B0B441_CharacterMovement_1) == 0x000218, "Member 'Utask_CompanionAI_companion_ai_OnBegin::__verse_0x47B0B441_CharacterMovement_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResultStack_18) == 0x000220, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResultStack_18' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _Callee_19) == 0x000228, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_Callee_19' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResult_20) == 0x000238, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResult_20' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResult_21) == 0x000248, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResult_21' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResult_22) == 0x000249, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResult_22' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, __verse_0x3FE20196_FortPing_1) == 0x000250, "Member 'Utask_CompanionAI_companion_ai_OnBegin::__verse_0x3FE20196_FortPing_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResultStack_23) == 0x000258, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResultStack_23' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _Callee_24) == 0x000260, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_Callee_24' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResult_25) == 0x000270, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResult_25' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResult_26) == 0x000280, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResult_26' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResult_27) == 0x000281, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResult_27' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, __verse_0x03CEBA4E_CharacterActions_1) == 0x000288, "Member 'Utask_CompanionAI_companion_ai_OnBegin::__verse_0x03CEBA4E_CharacterActions_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResultStack_28) == 0x000290, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResultStack_28' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _Callee_29) == 0x000298, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_Callee_29' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResult_30) == 0x0002A8, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResult_30' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResult_31) == 0x0002B8, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResult_31' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResult_32) == 0x0002B9, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResult_32' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, __verse_0xF161303F_WeaponActions_1) == 0x0002C0, "Member 'Utask_CompanionAI_companion_ai_OnBegin::__verse_0xF161303F_WeaponActions_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResultStack_33) == 0x0002C8, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResultStack_33' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _Callee_34) == 0x0002D0, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_Callee_34' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResult_35) == 0x0002E0, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResult_35' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResult_36) == 0x0002F0, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResult_36' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResult_37) == 0x0002F1, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResult_37' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, __verse_0x0F05355D_ThreatPerception_1) == 0x0002F8, "Member 'Utask_CompanionAI_companion_ai_OnBegin::__verse_0x0F05355D_ThreatPerception_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResultStack_38) == 0x000300, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResultStack_38' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _Callee_39) == 0x000308, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_Callee_39' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResult_40) == 0x000318, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResult_40' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResult_41) == 0x000328, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResult_41' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResult_42) == 0x000329, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResult_42' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, __verse_0x00C33D6C_ObstaclePerception_1) == 0x000330, "Member 'Utask_CompanionAI_companion_ai_OnBegin::__verse_0x00C33D6C_ObstaclePerception_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResultStack_43) == 0x000338, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResultStack_43' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _Callee_44) == 0x000340, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_Callee_44' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResult_45) == 0x000350, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResult_45' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResult_46) == 0x000360, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResult_46' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResult_47) == 0x000361, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResult_47' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, __verse_0x2B0A024B_CompanionAIRuntime_1) == 0x000368, "Member 'Utask_CompanionAI_companion_ai_OnBegin::__verse_0x2B0A024B_CompanionAIRuntime_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, __verse_0x00000000__2) == 0x000370, "Member 'Utask_CompanionAI_companion_ai_OnBegin::__verse_0x00000000__2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _AsyncTask_49) == 0x000378, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_AsyncTask_49' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _AsyncTaskClass_50) == 0x000380, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_AsyncTaskClass_50' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResult_51) == 0x000390, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResult_51' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _AsyncResult_52) == 0x000398, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_AsyncResult_52' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, __verse_0x39263057_WarningMsg_3) == 0x0003A0, "Member 'Utask_CompanionAI_companion_ai_OnBegin::__verse_0x39263057_WarningMsg_3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, __verse_0x00000000__4) == 0x0003B0, "Member 'Utask_CompanionAI_companion_ai_OnBegin::__verse_0x00000000__4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _InvokeSureResultDummy_53) == 0x0003B8, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_InvokeSureResultDummy_53' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _Callee_54) == 0x0003C0, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_Callee_54' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResult_55) == 0x0003D0, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResult_55' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResult_56) == 0x0003E8, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResult_56' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _InvokeSureResultDummy_57) == 0x0003EA, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_InvokeSureResultDummy_57' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _Callee_58) == 0x0003F0, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_Callee_58' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResult_59) == 0x000400, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResult_59' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, __verse_0x00000000__5) == 0x000440, "Member 'Utask_CompanionAI_companion_ai_OnBegin::__verse_0x00000000__5' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResult_60) == 0x000480, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResult_60' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResult_61) == 0x0004A0, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResult_61' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_OnBegin, _ExprResultDummy_62) == 0x0004B0, "Member 'Utask_CompanionAI_companion_ai_OnBegin::_ExprResultDummy_62' has a wrong offset!");

class Utask_CompanionAI_companion_creature_GameLoop final : public UConcurrency_task
{
public:
	class UCompanionAI_companion_creature*        _Self;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_151[0x7];
	class UObject*                                __verse_0x963EC691_Character_2;
	FOptionProperty_                              _ExprResultStack_0;
	FVerseFunctionProperty_                       _Callee_1;
	struct CompanionAI::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R _ExprResult_2;
	FOptionProperty_                              _ExprResultStack_3;
	FVerseFunctionProperty_                       _Callee_4;
	struct CompanionAI::Ftuple_L_R                _ExprResult_5;
	struct CompanionAI::Ftuple_L_R                _ExprResult_6;
	struct CompanionAI::Ftuple_L_R                _ExprResult_7;
	uint8                                         Pad_1A3[0x5];
	struct FSpatialMath_vector3                   __verse_0xFE3AE8F0_OriginalPosition_2;
	struct FSpatialMath_transform                 _ExprResult_8;
	class UObject*                                __verse_0x00000000__3;
	FVerseFunctionProperty_                       _Callee_9;
	struct CompanionAI::Ftuple_L_R                _ExprResult_10;
	uint8                                         Pad_239[0x7];
	class UGame_Abilities_gameplay_ability_asset* __verse_0xC4B561B1_HowlAbility_2;
	FVerseFunctionProperty_                       _Callee_11;
	FVerseStringProperty_                         _ExprResult_12;
	class UGame_Abilities_gameplay_ability_asset* __verse_0x7F5D3678_MeleeAttackAbility_2;
	FVerseFunctionProperty_                       _Callee_13;
	FVerseStringProperty_                         _ExprResult_14;
	class UConcurrency_task*                      _AsyncTask_15;
	FVerseFunctionProperty_                       _AsyncTaskClass_16;
	int64                                         _AsyncResult_17;
	class UGame_Abilities_ability_component*      __verse_0x0C7EF844_AbilitySystem_5;
	FOptionProperty_                              _ExprResultStack_18;
	EVerseTrue                                    _InvokeSureResultDummy_19;
	uint8                                         Pad_2C1[0x7];
	FVerseFunctionProperty_                       _Callee_20;
	struct CompanionAI::Ftuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R _ExprResult_21;
	FVerseStringProperty_                         _ExprResult_22;
	FOptionProperty_                              _ExprResult_23;
	uint8                                         Pad_331[0x7];
	FOptionProperty_                              _ExprResult_24;
	uint8                                         Pad_351[0x7];
	class UGame_Abilities_ability_component*      __verse_0x00000000__6;
	EVerseTrue                                    _InvokeSureResultDummy_25;
	uint8                                         Pad_361[0x7];
	FVerseFunctionProperty_                       _Callee_26;
	class UClass*                                 _ExprResult_27;
	class UGame_Abilities_gameplay_ability_asset* __verse_0x00000000__7;
	FVerseFunctionProperty_                       _Callee_28;
	struct CompanionAI::Ftuple_L_R                _ExprResult_29;
	uint8                                         Pad_399[0x7];
	FVerseFunctionProperty_                       _AsyncTaskClass_30;
	class UGame_Abilities_ability_component*      __verse_0x0C7EF844_AbilitySystem_8;
	FOptionProperty_                              _ExprResultStack_31;
	EVerseTrue                                    _InvokeSureResultDummy_32;
	uint8                                         Pad_3C1[0x7];
	FVerseFunctionProperty_                       _Callee_33;
	struct CompanionAI::Ftuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R _ExprResult_34;
	FVerseStringProperty_                         _ExprResult_35;
	FOptionProperty_                              _ExprResult_36;
	uint8                                         Pad_431[0x7];
	FOptionProperty_                              _ExprResult_37;
	uint8                                         Pad_451[0x7];
	class UGame_Abilities_ability_component*      __verse_0x00000000__9;
	EVerseTrue                                    _InvokeSureResultDummy_38;
	uint8                                         Pad_461[0x7];
	FVerseFunctionProperty_                       _Callee_39;
	struct CompanionAI::Ftuple_Lany_Mability__component_R _ExprResult_40;
	class UClass*                                 _ExprResult_41;
	class UGame_Abilities_gameplay_ability_asset* __verse_0x00000000__10;
	FVerseFunctionProperty_                       _Callee_42;
	struct CompanionAI::Ftuple_L_R                _ExprResult_43;
	uint8                                         Pad_4A9[0x7];
	class UGame_Abilities_ability_component*      __verse_0x0C7EF844_AbilitySystem_11;
	FOptionProperty_                              _ExprResultStack_44;
	class UGame_Abilities_ability_component*      __verse_0x00000000__13;
	uint8                                         _InvokeSureResultDummy_45 : 1;
	uint8                                         Pad_4C9[0x7];
	FVerseFunctionProperty_                       _Callee_46;
	class UClass*                                 _ExprResult_47;
	class UGame_Abilities_gameplay_ability_asset* __verse_0x00000000__14;
	FVerseFunctionProperty_                       _Callee_48;
	struct CompanionAI::Ftuple_L_R                _ExprResult_49;
	uint8                                         Pad_501[0x7];
	FVerseFunctionProperty_                       _AsyncTaskClass_50;
	class UObject*                                __verse_0x93780F55_CreatureActions_15;
	FOptionProperty_                              _ExprResultStack_51;
	class UDiagnostics_log*                       __verse_0x00000000__17;
	EVerseTrue                                    _InvokeSureResultDummy_52;
	uint8                                         Pad_531[0x7];
	FVerseFunctionProperty_                       _Callee_53;
	struct CompanionAI::Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R _ExprResult_54;
	FVerseStringProperty_                         _ExprResult_55;
	FOptionProperty_                              _ExprResult_56;
	uint8                                         Pad_572[0x6];
	class UObject*                                __verse_0x00000000__18;
	FVerseFunctionProperty_                       _AsyncTaskClass_57;
	struct CompanionAI::Ftuple_L_R                _ExprResult_58;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_companion_creature$GameLoop">();
	}
	static class Utask_CompanionAI_companion_creature_GameLoop* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_companion_creature_GameLoop>();
	}
};
static_assert(alignof(Utask_CompanionAI_companion_creature_GameLoop) == 0x000010, "Wrong alignment on Utask_CompanionAI_companion_creature_GameLoop");
static_assert(sizeof(Utask_CompanionAI_companion_creature_GameLoop) == 0x0005A0, "Wrong size on Utask_CompanionAI_companion_creature_GameLoop");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _Self) == 0x000148, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_companion_creature_GameLoop::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, __verse_0x963EC691_Character_2) == 0x000158, "Member 'Utask_CompanionAI_companion_creature_GameLoop::__verse_0x963EC691_Character_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _ExprResultStack_0) == 0x000160, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_ExprResultStack_0' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _Callee_1) == 0x000168, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_Callee_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _ExprResult_2) == 0x000178, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _ExprResultStack_3) == 0x000188, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_ExprResultStack_3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _Callee_4) == 0x000190, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_Callee_4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _ExprResult_5) == 0x0001A0, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_ExprResult_5' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _ExprResult_6) == 0x0001A1, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_ExprResult_6' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _ExprResult_7) == 0x0001A2, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_ExprResult_7' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, __verse_0xFE3AE8F0_OriginalPosition_2) == 0x0001A8, "Member 'Utask_CompanionAI_companion_creature_GameLoop::__verse_0xFE3AE8F0_OriginalPosition_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _ExprResult_8) == 0x0001C0, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_ExprResult_8' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, __verse_0x00000000__3) == 0x000220, "Member 'Utask_CompanionAI_companion_creature_GameLoop::__verse_0x00000000__3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _Callee_9) == 0x000228, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_Callee_9' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _ExprResult_10) == 0x000238, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_ExprResult_10' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, __verse_0xC4B561B1_HowlAbility_2) == 0x000240, "Member 'Utask_CompanionAI_companion_creature_GameLoop::__verse_0xC4B561B1_HowlAbility_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _Callee_11) == 0x000248, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_Callee_11' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _ExprResult_12) == 0x000258, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_ExprResult_12' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, __verse_0x7F5D3678_MeleeAttackAbility_2) == 0x000268, "Member 'Utask_CompanionAI_companion_creature_GameLoop::__verse_0x7F5D3678_MeleeAttackAbility_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _Callee_13) == 0x000270, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_Callee_13' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _ExprResult_14) == 0x000280, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_ExprResult_14' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _AsyncTask_15) == 0x000290, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_AsyncTask_15' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _AsyncTaskClass_16) == 0x000298, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_AsyncTaskClass_16' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _AsyncResult_17) == 0x0002A8, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_AsyncResult_17' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, __verse_0x0C7EF844_AbilitySystem_5) == 0x0002B0, "Member 'Utask_CompanionAI_companion_creature_GameLoop::__verse_0x0C7EF844_AbilitySystem_5' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _ExprResultStack_18) == 0x0002B8, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_ExprResultStack_18' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _InvokeSureResultDummy_19) == 0x0002C0, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_InvokeSureResultDummy_19' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _Callee_20) == 0x0002C8, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_Callee_20' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _ExprResult_21) == 0x0002D8, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_ExprResult_21' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _ExprResult_22) == 0x000318, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_ExprResult_22' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _ExprResult_23) == 0x000328, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_ExprResult_23' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _ExprResult_24) == 0x000338, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_ExprResult_24' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, __verse_0x00000000__6) == 0x000358, "Member 'Utask_CompanionAI_companion_creature_GameLoop::__verse_0x00000000__6' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _InvokeSureResultDummy_25) == 0x000360, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_InvokeSureResultDummy_25' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _Callee_26) == 0x000368, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_Callee_26' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _ExprResult_27) == 0x000378, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_ExprResult_27' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, __verse_0x00000000__7) == 0x000380, "Member 'Utask_CompanionAI_companion_creature_GameLoop::__verse_0x00000000__7' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _Callee_28) == 0x000388, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_Callee_28' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _ExprResult_29) == 0x000398, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_ExprResult_29' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _AsyncTaskClass_30) == 0x0003A0, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_AsyncTaskClass_30' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, __verse_0x0C7EF844_AbilitySystem_8) == 0x0003B0, "Member 'Utask_CompanionAI_companion_creature_GameLoop::__verse_0x0C7EF844_AbilitySystem_8' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _ExprResultStack_31) == 0x0003B8, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_ExprResultStack_31' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _InvokeSureResultDummy_32) == 0x0003C0, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_InvokeSureResultDummy_32' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _Callee_33) == 0x0003C8, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_Callee_33' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _ExprResult_34) == 0x0003D8, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_ExprResult_34' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _ExprResult_35) == 0x000418, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_ExprResult_35' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _ExprResult_36) == 0x000428, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_ExprResult_36' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _ExprResult_37) == 0x000438, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_ExprResult_37' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, __verse_0x00000000__9) == 0x000458, "Member 'Utask_CompanionAI_companion_creature_GameLoop::__verse_0x00000000__9' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _InvokeSureResultDummy_38) == 0x000460, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_InvokeSureResultDummy_38' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _Callee_39) == 0x000468, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_Callee_39' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _ExprResult_40) == 0x000478, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_ExprResult_40' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _ExprResult_41) == 0x000488, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_ExprResult_41' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, __verse_0x00000000__10) == 0x000490, "Member 'Utask_CompanionAI_companion_creature_GameLoop::__verse_0x00000000__10' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _Callee_42) == 0x000498, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_Callee_42' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _ExprResult_43) == 0x0004A8, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_ExprResult_43' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, __verse_0x0C7EF844_AbilitySystem_11) == 0x0004B0, "Member 'Utask_CompanionAI_companion_creature_GameLoop::__verse_0x0C7EF844_AbilitySystem_11' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _ExprResultStack_44) == 0x0004B8, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_ExprResultStack_44' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, __verse_0x00000000__13) == 0x0004C0, "Member 'Utask_CompanionAI_companion_creature_GameLoop::__verse_0x00000000__13' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _Callee_46) == 0x0004D0, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_Callee_46' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _ExprResult_47) == 0x0004E0, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_ExprResult_47' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, __verse_0x00000000__14) == 0x0004E8, "Member 'Utask_CompanionAI_companion_creature_GameLoop::__verse_0x00000000__14' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _Callee_48) == 0x0004F0, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_Callee_48' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _ExprResult_49) == 0x000500, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_ExprResult_49' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _AsyncTaskClass_50) == 0x000508, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_AsyncTaskClass_50' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, __verse_0x93780F55_CreatureActions_15) == 0x000518, "Member 'Utask_CompanionAI_companion_creature_GameLoop::__verse_0x93780F55_CreatureActions_15' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _ExprResultStack_51) == 0x000520, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_ExprResultStack_51' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, __verse_0x00000000__17) == 0x000528, "Member 'Utask_CompanionAI_companion_creature_GameLoop::__verse_0x00000000__17' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _InvokeSureResultDummy_52) == 0x000530, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_InvokeSureResultDummy_52' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _Callee_53) == 0x000538, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_Callee_53' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _ExprResult_54) == 0x000548, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_ExprResult_54' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _ExprResult_55) == 0x000560, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_ExprResult_55' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _ExprResult_56) == 0x000570, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_ExprResult_56' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, __verse_0x00000000__18) == 0x000578, "Member 'Utask_CompanionAI_companion_creature_GameLoop::__verse_0x00000000__18' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _AsyncTaskClass_57) == 0x000580, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_AsyncTaskClass_57' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_GameLoop, _ExprResult_58) == 0x000590, "Member 'Utask_CompanionAI_companion_creature_GameLoop::_ExprResult_58' has a wrong offset!");

class Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R final : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*      _Self;
	struct FCompanionAI_ping_info                 __verse_0xB2CDDD72_Argument;
	uint8                                         _RetVal : 1;
	EVerseTrue                                    _InvokeSureResultDummy_0;
	uint8                                         Pad_18A[0x6];
	FVerseFunctionProperty_                       _Callee_1;
	FVerseStringProperty_                         _ExprResult_2;
	class USimulation_agent*                      __verse_0xFD64D7AA_Emitter_2;
	FOptionProperty_                              _ExprResultStack_3;
	class UObject*                                __verse_0x6B4100B8_EmitterCharacter_2;
	FOptionProperty_                              _ExprResultStack_4;
	FVerseFunctionProperty_                       _Callee_5;
	struct CompanionAI::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R _ExprResult_6;
	struct CompanionAI::Ftuple_L_R                _ExprResult_7;
	struct CompanionAI::Ftuple_L_R                _ExprResult_8;
	uint8                                         Pad_1F2[0x6];
	class USimulation_agent*                      __verse_0xC487D1E7_EmitterAgent_2;
	class UObject*                                __verse_0x00000000__3;
	FOptionProperty_                              _ExprResultStack_9;
	FVerseFunctionProperty_                       _Callee_10;
	struct CompanionAI::Ftuple_L_R                _ExprResult_11;
	uint8                                         Pad_221[0x7];
	FOptionProperty_                              _ExprResultStack_12;
	uint8                                         Pad_231[0x7];
	double                                        _ExprResultStack_13;
	FVerseFunctionProperty_                       _Callee_14;
	struct CompanionAI::Ftuple_Lvector3_Mvector3_R _ExprResult_15;
	struct FSpatialMath_transform                 _ExprResult_16;
	class UObject*                                __verse_0x00000000__6;
	FVerseFunctionProperty_                       _Callee_17;
	struct CompanionAI::Ftuple_L_R                _ExprResult_18;
	uint8                                         Pad_2F9[0x7];
	struct FSpatialMath_transform                 _ExprResult_19;
	class UObject*                                __verse_0x00000000__7;
	FVerseFunctionProperty_                       _Callee_20;
	struct CompanionAI::Ftuple_L_R                _ExprResult_21;
	uint8                                         __verse_0xC96E9091_HasRevivedEmitter_5 : 1;
	uint8                                         Pad_37A[0x6];
	class UConcurrency_task*                      _AsyncTask_22;
	FVerseFunctionProperty_                       _AsyncTaskClass_23;
	int64                                         _AsyncResult_24;
	FOptionProperty_                              _ExprResultStack_25;
	uint8                                         Pad_3A2[0x6];
	TArray<class USimulation_agent*>              __verse_0xBFBCE682_TeamMembers_4;
	FVerseFunctionProperty_                       _Callee_26;
	struct CompanionAI::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R _ExprResult_27;
	struct CompanionAI::Ftuple_L_R                _ExprResult_28;
	struct CompanionAI::Ftuple_L_R                _ExprResult_29;
	uint8                                         Pad_3DA[0x6];
	int64                                         _ForIndex_30;
	int64                                         _ForLength_31;
	class USimulation_agent*                      __verse_0xAE35E375_TeamMember_12;
	FOptionProperty_                              _ExprResultStack_32;
	uint8                                         Pad_401[0x7];
	double                                        _ExprResultStack_33;
	FVerseFunctionProperty_                       _Callee_34;
	struct CompanionAI::Ftuple_Lvector3_Mvector3_R _ExprResult_35;
	struct FSpatialMath_transform                 _ExprResult_36;
	class UObject*                                __verse_0x00000000__16;
	FOptionProperty_                              _ExprResultStack_37;
	FVerseFunctionProperty_                       _Callee_38;
	struct CompanionAI::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R _ExprResult_39;
	struct CompanionAI::Ftuple_L_R                _ExprResult_40;
	struct CompanionAI::Ftuple_L_R                _ExprResult_41;
	uint8                                         Pad_4E2[0x6];
	FVerseFunctionProperty_                       _Callee_42;
	struct CompanionAI::Ftuple_L_R                _ExprResult_43;
	uint8                                         Pad_4F9[0x7];
	struct FSpatialMath_transform                 _ExprResult_44;
	class UObject*                                __verse_0x00000000__17;
	FVerseFunctionProperty_                       _Callee_45;
	struct CompanionAI::Ftuple_L_R                _ExprResult_46;
	uint8                                         __verse_0x87226150_HasRevivedTeamMember_15 : 1;
	uint8                                         Pad_57A[0x6];
	FVerseFunctionProperty_                       _AsyncTaskClass_47;
	FOptionProperty_                              _ExprResultStack_48;
	EVerseTrue                                    _InvokeSureResultDummy_49;
	uint8                                         Pad_593[0x5];
	FVerseFunctionProperty_                       _Callee_50;
	FVerseStringProperty_                         _ExprResult_51;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_companion_ai_runtime$CheckForReviveTeamMembers_L_Nping__info_R">();
	}
	static class Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R>();
	}
};
static_assert(alignof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R) == 0x000010, "Wrong alignment on Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R");
static_assert(sizeof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R) == 0x0005C0, "Wrong size on Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _Self) == 0x000148, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _InvokeSureResultDummy_0) == 0x000189, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_InvokeSureResultDummy_0' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _Callee_1) == 0x000190, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_Callee_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _ExprResult_2) == 0x0001A0, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, __verse_0xFD64D7AA_Emitter_2) == 0x0001B0, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::__verse_0xFD64D7AA_Emitter_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _ExprResultStack_3) == 0x0001B8, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_ExprResultStack_3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, __verse_0x6B4100B8_EmitterCharacter_2) == 0x0001C0, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::__verse_0x6B4100B8_EmitterCharacter_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _ExprResultStack_4) == 0x0001C8, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_ExprResultStack_4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _Callee_5) == 0x0001D0, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_Callee_5' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _ExprResult_6) == 0x0001E0, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_ExprResult_6' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _ExprResult_7) == 0x0001F0, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_ExprResult_7' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _ExprResult_8) == 0x0001F1, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_ExprResult_8' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, __verse_0xC487D1E7_EmitterAgent_2) == 0x0001F8, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::__verse_0xC487D1E7_EmitterAgent_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, __verse_0x00000000__3) == 0x000200, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::__verse_0x00000000__3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _ExprResultStack_9) == 0x000208, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_ExprResultStack_9' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _Callee_10) == 0x000210, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_Callee_10' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _ExprResult_11) == 0x000220, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_ExprResult_11' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _ExprResultStack_12) == 0x000228, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_ExprResultStack_12' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _ExprResultStack_13) == 0x000238, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_ExprResultStack_13' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _Callee_14) == 0x000240, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_Callee_14' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _ExprResult_15) == 0x000250, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_ExprResult_15' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _ExprResult_16) == 0x000280, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_ExprResult_16' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, __verse_0x00000000__6) == 0x0002E0, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::__verse_0x00000000__6' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _Callee_17) == 0x0002E8, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_Callee_17' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _ExprResult_18) == 0x0002F8, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_ExprResult_18' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _ExprResult_19) == 0x000300, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_ExprResult_19' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, __verse_0x00000000__7) == 0x000360, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::__verse_0x00000000__7' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _Callee_20) == 0x000368, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_Callee_20' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _ExprResult_21) == 0x000378, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_ExprResult_21' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _AsyncTask_22) == 0x000380, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_AsyncTask_22' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _AsyncTaskClass_23) == 0x000388, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_AsyncTaskClass_23' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _AsyncResult_24) == 0x000398, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_AsyncResult_24' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _ExprResultStack_25) == 0x0003A0, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_ExprResultStack_25' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, __verse_0xBFBCE682_TeamMembers_4) == 0x0003A8, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::__verse_0xBFBCE682_TeamMembers_4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _Callee_26) == 0x0003B8, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_Callee_26' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _ExprResult_27) == 0x0003C8, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_ExprResult_27' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _ExprResult_28) == 0x0003D8, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_ExprResult_28' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _ExprResult_29) == 0x0003D9, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_ExprResult_29' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _ForIndex_30) == 0x0003E0, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_ForIndex_30' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _ForLength_31) == 0x0003E8, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_ForLength_31' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, __verse_0xAE35E375_TeamMember_12) == 0x0003F0, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::__verse_0xAE35E375_TeamMember_12' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _ExprResultStack_32) == 0x0003F8, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_ExprResultStack_32' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _ExprResultStack_33) == 0x000408, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_ExprResultStack_33' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _Callee_34) == 0x000410, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_Callee_34' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _ExprResult_35) == 0x000420, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_ExprResult_35' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _ExprResult_36) == 0x000450, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_ExprResult_36' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, __verse_0x00000000__16) == 0x0004B0, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::__verse_0x00000000__16' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _ExprResultStack_37) == 0x0004B8, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_ExprResultStack_37' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _Callee_38) == 0x0004C0, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_Callee_38' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _ExprResult_39) == 0x0004D0, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_ExprResult_39' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _ExprResult_40) == 0x0004E0, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_ExprResult_40' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _ExprResult_41) == 0x0004E1, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_ExprResult_41' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _Callee_42) == 0x0004E8, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_Callee_42' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _ExprResult_43) == 0x0004F8, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_ExprResult_43' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _ExprResult_44) == 0x000500, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_ExprResult_44' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, __verse_0x00000000__17) == 0x000560, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::__verse_0x00000000__17' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _Callee_45) == 0x000568, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_Callee_45' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _ExprResult_46) == 0x000578, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_ExprResult_46' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _AsyncTaskClass_47) == 0x000580, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_AsyncTaskClass_47' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _ExprResultStack_48) == 0x000590, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_ExprResultStack_48' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _InvokeSureResultDummy_49) == 0x000592, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_InvokeSureResultDummy_49' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _Callee_50) == 0x000598, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_Callee_50' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, _ExprResult_51) == 0x0005A8, "Member 'Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::_ExprResult_51' has a wrong offset!");

class Utask_CompanionAI_companion_creature_OnBegin final : public UConcurrency_task
{
public:
	class UCompanionAI_companion_creature*        _Self;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_151[0x7];
	class UObject*                                __verse_0x963EC691_Character_1;
	FOptionProperty_                              _ExprResultStack_0;
	FVerseFunctionProperty_                       _Callee_1;
	struct CompanionAI::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R _ExprResult_2;
	FOptionProperty_                              _ExprResultStack_3;
	FVerseFunctionProperty_                       _Callee_4;
	struct CompanionAI::Ftuple_L_R                _ExprResult_5;
	struct CompanionAI::Ftuple_L_R                _ExprResult_6;
	struct CompanionAI::Ftuple_L_R                _ExprResult_7;
	uint8                                         Pad_1A3[0x5];
	class UDiagnostics_log*                       __verse_0x00000000__2;
	EVerseTrue                                    _InvokeSureResultDummy_8;
	uint8                                         Pad_1B1[0x7];
	FVerseFunctionProperty_                       _Callee_9;
	struct CompanionAI::Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R _ExprResult_10;
	FVerseStringProperty_                         _ExprResult_11;
	FOptionProperty_                              _ExprResult_12;
	uint8                                         Pad_1F2[0x6];
	class UObject*                                __verse_0xB4DBB24F_PingActions_1;
	FOptionProperty_                              _ExprResultStack_13;
	FVerseFunctionProperty_                       _Callee_14;
	struct CompanionAI::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_15;
	struct CompanionAI::Ftuple_L_R                _ExprResult_16;
	struct CompanionAI::Ftuple_L_R                _ExprResult_17;
	uint8                                         Pad_22A[0x6];
	class UDiagnostics_log*                       __verse_0x00000000__3;
	EVerseTrue                                    _InvokeSureResultDummy_18;
	uint8                                         Pad_239[0x7];
	FVerseFunctionProperty_                       _Callee_19;
	struct CompanionAI::Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R _ExprResult_20;
	FVerseStringProperty_                         _ExprResult_21;
	FOptionProperty_                              _ExprResult_22;
	uint8                                         Pad_27A[0x6];
	class UObject*                                __verse_0x93780F55_CreatureActions_1;
	FOptionProperty_                              _ExprResultStack_23;
	FVerseFunctionProperty_                       _Callee_24;
	struct CompanionAI::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_25;
	struct CompanionAI::Ftuple_L_R                _ExprResult_26;
	struct CompanionAI::Ftuple_L_R                _ExprResult_27;
	uint8                                         Pad_2B2[0x6];
	class UDiagnostics_log*                       __verse_0x00000000__4;
	EVerseTrue                                    _InvokeSureResultDummy_28;
	uint8                                         Pad_2C1[0x7];
	FVerseFunctionProperty_                       _Callee_29;
	struct CompanionAI::Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R _ExprResult_30;
	FVerseStringProperty_                         _ExprResult_31;
	FOptionProperty_                              _ExprResult_32;
	uint8                                         Pad_302[0x6];
	class UDiagnostics_log*                       __verse_0x00000000__5;
	EVerseTrue                                    _InvokeSureResultDummy_33;
	uint8                                         Pad_311[0x7];
	FVerseFunctionProperty_                       _Callee_34;
	struct CompanionAI::Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R _ExprResult_35;
	FVerseStringProperty_                         _ExprResult_36;
	FOptionProperty_                              _ExprResult_37;
	uint8                                         Pad_352[0x6];
	class UGame_Abilities_ability_component*      __verse_0x0ACF1B4F_AbilityCpnt_1;
	FOptionProperty_                              _ExprResultStack_38;
	FVerseFunctionProperty_                       _Callee_39;
	class UDiagnostics_log*                       __verse_0x00000000__6;
	EVerseTrue                                    _InvokeSureResultDummy_40;
	uint8                                         Pad_381[0x7];
	FVerseFunctionProperty_                       _Callee_41;
	struct CompanionAI::Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R _ExprResult_42;
	FVerseStringProperty_                         _ExprResult_43;
	FOptionProperty_                              _ExprResult_44;
	uint8                                         Pad_3C2[0x6];
	FOptionProperty_                              _ExprResult_45;
	FOptionProperty_                              _ExprResult_46;
	FOptionProperty_                              _ExprResult_47;
	FOptionProperty_                              __verse_0x00000000__7;
	uint8                                         _ExprResult_48 : 1;
	FOptionProperty_                              _ExprResultStack_49;
	uint8                                         Pad_3E5[0x3];
	FOptionProperty_                              _ExprResult_50;
	class UConcurrency_task*                      _AsyncTask_51;
	FVerseFunctionProperty_                       _AsyncTaskClass_52;
	struct CompanionAI::Ftuple_L_R                _ExprResult_53;
	uint8                                         Pad_409[0x7];
	int64                                         _AsyncResult_54;
	FVerseStringProperty_                         __verse_0x39263057_WarningMsg_9;
	class UDiagnostics_log*                       __verse_0x00000000__10;
	EVerseTrue                                    _InvokeSureResultDummy_55;
	uint8                                         Pad_431[0x7];
	FVerseFunctionProperty_                       _Callee_56;
	struct CompanionAI::Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R _ExprResult_57;
	FOptionProperty_                              _ExprResult_58;
	EVerseTrue                                    _InvokeSureResultDummy_59;
	uint8                                         Pad_463[0x5];
	FVerseFunctionProperty_                       _Callee_60;
	struct CompanionAI::Ftuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R _ExprResult_61;
	struct CompanionAI::Ftuple_L_Kchar_M_QColor_Ncolor_M_QDuration_Nfloat_R __verse_0x00000000__11;
	FOptionProperty_                              _ExprResult_62;
	uint8                                         Pad_511[0x7];
	FOptionProperty_                              _ExprResult_63;
	uint8                                         Pad_521[0x7];
	FVerseStringProperty_                         _ExprResultDummy_64;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_companion_creature$OnBegin">();
	}
	static class Utask_CompanionAI_companion_creature_OnBegin* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_companion_creature_OnBegin>();
	}
};
static_assert(alignof(Utask_CompanionAI_companion_creature_OnBegin) == 0x000008, "Wrong alignment on Utask_CompanionAI_companion_creature_OnBegin");
static_assert(sizeof(Utask_CompanionAI_companion_creature_OnBegin) == 0x000538, "Wrong size on Utask_CompanionAI_companion_creature_OnBegin");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _Self) == 0x000148, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_companion_creature_OnBegin::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, __verse_0x963EC691_Character_1) == 0x000158, "Member 'Utask_CompanionAI_companion_creature_OnBegin::__verse_0x963EC691_Character_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResultStack_0) == 0x000160, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResultStack_0' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _Callee_1) == 0x000168, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_Callee_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResult_2) == 0x000178, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResultStack_3) == 0x000188, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResultStack_3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _Callee_4) == 0x000190, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_Callee_4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResult_5) == 0x0001A0, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResult_5' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResult_6) == 0x0001A1, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResult_6' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResult_7) == 0x0001A2, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResult_7' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, __verse_0x00000000__2) == 0x0001A8, "Member 'Utask_CompanionAI_companion_creature_OnBegin::__verse_0x00000000__2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _InvokeSureResultDummy_8) == 0x0001B0, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_InvokeSureResultDummy_8' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _Callee_9) == 0x0001B8, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_Callee_9' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResult_10) == 0x0001C8, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResult_10' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResult_11) == 0x0001E0, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResult_11' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResult_12) == 0x0001F0, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResult_12' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, __verse_0xB4DBB24F_PingActions_1) == 0x0001F8, "Member 'Utask_CompanionAI_companion_creature_OnBegin::__verse_0xB4DBB24F_PingActions_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResultStack_13) == 0x000200, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResultStack_13' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _Callee_14) == 0x000208, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_Callee_14' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResult_15) == 0x000218, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResult_15' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResult_16) == 0x000228, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResult_16' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResult_17) == 0x000229, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResult_17' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, __verse_0x00000000__3) == 0x000230, "Member 'Utask_CompanionAI_companion_creature_OnBegin::__verse_0x00000000__3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _InvokeSureResultDummy_18) == 0x000238, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_InvokeSureResultDummy_18' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _Callee_19) == 0x000240, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_Callee_19' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResult_20) == 0x000250, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResult_20' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResult_21) == 0x000268, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResult_21' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResult_22) == 0x000278, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResult_22' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, __verse_0x93780F55_CreatureActions_1) == 0x000280, "Member 'Utask_CompanionAI_companion_creature_OnBegin::__verse_0x93780F55_CreatureActions_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResultStack_23) == 0x000288, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResultStack_23' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _Callee_24) == 0x000290, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_Callee_24' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResult_25) == 0x0002A0, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResult_25' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResult_26) == 0x0002B0, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResult_26' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResult_27) == 0x0002B1, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResult_27' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, __verse_0x00000000__4) == 0x0002B8, "Member 'Utask_CompanionAI_companion_creature_OnBegin::__verse_0x00000000__4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _InvokeSureResultDummy_28) == 0x0002C0, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_InvokeSureResultDummy_28' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _Callee_29) == 0x0002C8, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_Callee_29' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResult_30) == 0x0002D8, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResult_30' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResult_31) == 0x0002F0, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResult_31' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResult_32) == 0x000300, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResult_32' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, __verse_0x00000000__5) == 0x000308, "Member 'Utask_CompanionAI_companion_creature_OnBegin::__verse_0x00000000__5' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _InvokeSureResultDummy_33) == 0x000310, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_InvokeSureResultDummy_33' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _Callee_34) == 0x000318, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_Callee_34' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResult_35) == 0x000328, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResult_35' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResult_36) == 0x000340, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResult_36' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResult_37) == 0x000350, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResult_37' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, __verse_0x0ACF1B4F_AbilityCpnt_1) == 0x000358, "Member 'Utask_CompanionAI_companion_creature_OnBegin::__verse_0x0ACF1B4F_AbilityCpnt_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResultStack_38) == 0x000360, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResultStack_38' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _Callee_39) == 0x000368, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_Callee_39' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, __verse_0x00000000__6) == 0x000378, "Member 'Utask_CompanionAI_companion_creature_OnBegin::__verse_0x00000000__6' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _InvokeSureResultDummy_40) == 0x000380, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_InvokeSureResultDummy_40' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _Callee_41) == 0x000388, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_Callee_41' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResult_42) == 0x000398, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResult_42' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResult_43) == 0x0003B0, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResult_43' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResult_44) == 0x0003C0, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResult_44' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResult_45) == 0x0003C8, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResult_45' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResult_46) == 0x0003D0, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResult_46' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResult_47) == 0x0003D8, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResult_47' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, __verse_0x00000000__7) == 0x0003E0, "Member 'Utask_CompanionAI_companion_creature_OnBegin::__verse_0x00000000__7' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResultStack_49) == 0x0003E3, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResultStack_49' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResult_50) == 0x0003E8, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResult_50' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _AsyncTask_51) == 0x0003F0, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_AsyncTask_51' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _AsyncTaskClass_52) == 0x0003F8, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_AsyncTaskClass_52' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResult_53) == 0x000408, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResult_53' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _AsyncResult_54) == 0x000410, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_AsyncResult_54' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, __verse_0x39263057_WarningMsg_9) == 0x000418, "Member 'Utask_CompanionAI_companion_creature_OnBegin::__verse_0x39263057_WarningMsg_9' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, __verse_0x00000000__10) == 0x000428, "Member 'Utask_CompanionAI_companion_creature_OnBegin::__verse_0x00000000__10' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _InvokeSureResultDummy_55) == 0x000430, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_InvokeSureResultDummy_55' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _Callee_56) == 0x000438, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_Callee_56' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResult_57) == 0x000448, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResult_57' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResult_58) == 0x000460, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResult_58' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _InvokeSureResultDummy_59) == 0x000462, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_InvokeSureResultDummy_59' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _Callee_60) == 0x000468, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_Callee_60' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResult_61) == 0x000478, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResult_61' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, __verse_0x00000000__11) == 0x0004B8, "Member 'Utask_CompanionAI_companion_creature_OnBegin::__verse_0x00000000__11' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResult_62) == 0x0004F8, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResult_62' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResult_63) == 0x000518, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResult_63' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_creature_OnBegin, _ExprResultDummy_64) == 0x000528, "Member 'Utask_CompanionAI_companion_creature_OnBegin::_ExprResultDummy_64' has a wrong offset!");

class Utask_CompanionAI_companion_ai_runtime_CrouchService final : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*      _Self;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_151[0x7];
	class UConcurrency_task*                      _AsyncTask_0;
	FVerseFunctionProperty_                       _AsyncTaskClass_1;
	int64                                         _AsyncResult_2;
	class UObject*                                __verse_0x00000000__3;
	FVerseFunctionProperty_                       _AsyncTaskClass_3;
	struct CompanionAI::Ftuple_L_R                _ExprResult_4;
	uint8                                         Pad_191[0x7];
	FVerseFunctionProperty_                       _AsyncTaskClass_5;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_companion_ai_runtime$CrouchService">();
	}
	static class Utask_CompanionAI_companion_ai_runtime_CrouchService* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_companion_ai_runtime_CrouchService>();
	}
};
static_assert(alignof(Utask_CompanionAI_companion_ai_runtime_CrouchService) == 0x000008, "Wrong alignment on Utask_CompanionAI_companion_ai_runtime_CrouchService");
static_assert(sizeof(Utask_CompanionAI_companion_ai_runtime_CrouchService) == 0x0001A8, "Wrong size on Utask_CompanionAI_companion_ai_runtime_CrouchService");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CrouchService, _Self) == 0x000148, "Member 'Utask_CompanionAI_companion_ai_runtime_CrouchService::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CrouchService, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_companion_ai_runtime_CrouchService::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CrouchService, _AsyncTask_0) == 0x000158, "Member 'Utask_CompanionAI_companion_ai_runtime_CrouchService::_AsyncTask_0' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CrouchService, _AsyncTaskClass_1) == 0x000160, "Member 'Utask_CompanionAI_companion_ai_runtime_CrouchService::_AsyncTaskClass_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CrouchService, _AsyncResult_2) == 0x000170, "Member 'Utask_CompanionAI_companion_ai_runtime_CrouchService::_AsyncResult_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CrouchService, __verse_0x00000000__3) == 0x000178, "Member 'Utask_CompanionAI_companion_ai_runtime_CrouchService::__verse_0x00000000__3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CrouchService, _AsyncTaskClass_3) == 0x000180, "Member 'Utask_CompanionAI_companion_ai_runtime_CrouchService::_AsyncTaskClass_3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CrouchService, _ExprResult_4) == 0x000190, "Member 'Utask_CompanionAI_companion_ai_runtime_CrouchService::_ExprResult_4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CrouchService, _AsyncTaskClass_5) == 0x000198, "Member 'Utask_CompanionAI_companion_ai_runtime_CrouchService::_AsyncTaskClass_5' has a wrong offset!");

class Utask_CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior final : public UConcurrency_task
{
public:
	class UCompanionAI_fort_br_character_actions_interface* _Self;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	EVerseAIBase_action_result                    _RetVal;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_fort_br_character_actions_interface$RunDefaultBehavior">();
	}
	static class Utask_CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior>();
	}
};
static_assert(alignof(Utask_CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior) == 0x000008, "Wrong alignment on Utask_CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior");
static_assert(sizeof(Utask_CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior) == 0x000158, "Wrong size on Utask_CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior");
static_assert(offsetof(Utask_CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior, _Self) == 0x000148, "Member 'Utask_CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior, _RetVal) == 0x000151, "Member 'Utask_CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior::_RetVal' has a wrong offset!");

class Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit final : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*      _Self;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	EVerseTrue                                    _InvokeSureResultDummy_0;
	uint8                                         Pad_152[0x6];
	FVerseFunctionProperty_                       _Callee_1;
	FVerseStringProperty_                         _ExprResult_2;
	uint8                                         _AsyncBeginCount_3 : 1;
	uint8                                         BitPad_178_1 : 7;
	uint8                                         _AsyncBeginCount_4 : 1;
	uint8                                         Pad_17A[0x6];
	class UConcurrency_task*                      _AsyncTask_5;
	FVerseFunctionProperty_                       _AsyncTaskClass_6;
	struct CompanionAI::Ftuple_L_R                _ExprResult_7;
	uint8                                         Pad_199[0x7];
	int64                                         _AsyncResult_8;
	uint8                                         _AsyncBeginCount_9 : 1;
	uint8                                         Pad_1A9[0x7];
	class UConcurrency_task*                      _AsyncTask_10;
	FVerseFunctionProperty_                       _AsyncTaskClass_11;
	struct CompanionAI::Ftuple_L_R                _ExprResult_12;
	uint8                                         Pad_1C9[0x7];
	int64                                         _AsyncResult_13;
	uint8                                         _AsyncBeginCount_14 : 1;
	uint8                                         Pad_1D9[0x7];
	class UConcurrency_task*                      _AsyncTask_15;
	FVerseFunctionProperty_                       _AsyncTaskClass_16;
	struct CompanionAI::Ftuple_L_R                _ExprResult_17;
	uint8                                         Pad_1F9[0x7];
	int64                                         _AsyncResult_18;
	EVerseTrue                                    _InvokeSureResultDummy_19;
	uint8                                         Pad_209[0x7];
	FVerseFunctionProperty_                       _Callee_20;
	FVerseStringProperty_                         _ExprResult_21;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_companion_ai_runtime$CrouchUntilHit">();
	}
	static class Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit>();
	}
};
static_assert(alignof(Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit) == 0x000008, "Wrong alignment on Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit");
static_assert(sizeof(Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit) == 0x000230, "Wrong size on Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit, _Self) == 0x000148, "Member 'Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit, _InvokeSureResultDummy_0) == 0x000151, "Member 'Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit::_InvokeSureResultDummy_0' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit, _Callee_1) == 0x000158, "Member 'Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit::_Callee_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit, _ExprResult_2) == 0x000168, "Member 'Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit, _AsyncTask_5) == 0x000180, "Member 'Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit::_AsyncTask_5' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit, _AsyncTaskClass_6) == 0x000188, "Member 'Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit::_AsyncTaskClass_6' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit, _ExprResult_7) == 0x000198, "Member 'Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit::_ExprResult_7' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit, _AsyncResult_8) == 0x0001A0, "Member 'Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit::_AsyncResult_8' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit, _AsyncTask_10) == 0x0001B0, "Member 'Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit::_AsyncTask_10' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit, _AsyncTaskClass_11) == 0x0001B8, "Member 'Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit::_AsyncTaskClass_11' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit, _ExprResult_12) == 0x0001C8, "Member 'Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit::_ExprResult_12' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit, _AsyncResult_13) == 0x0001D0, "Member 'Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit::_AsyncResult_13' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit, _AsyncTask_15) == 0x0001E0, "Member 'Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit::_AsyncTask_15' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit, _AsyncTaskClass_16) == 0x0001E8, "Member 'Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit::_AsyncTaskClass_16' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit, _ExprResult_17) == 0x0001F8, "Member 'Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit::_ExprResult_17' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit, _AsyncResult_18) == 0x000200, "Member 'Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit::_AsyncResult_18' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit, _InvokeSureResultDummy_19) == 0x000208, "Member 'Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit::_InvokeSureResultDummy_19' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit, _Callee_20) == 0x000210, "Member 'Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit::_Callee_20' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit, _ExprResult_21) == 0x000220, "Member 'Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit::_ExprResult_21' has a wrong offset!");

class Utask_CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior final : public UConcurrency_task
{
public:
	class UCompanionAI_fort_br_creature_actions_interface* _Self;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	EVerseAIBase_action_result                    _RetVal;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_fort_br_creature_actions_interface$RunDefaultBehavior">();
	}
	static class Utask_CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior>();
	}
};
static_assert(alignof(Utask_CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior) == 0x000008, "Wrong alignment on Utask_CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior");
static_assert(sizeof(Utask_CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior) == 0x000158, "Wrong size on Utask_CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior");
static_assert(offsetof(Utask_CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior, _Self) == 0x000148, "Member 'Utask_CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior, _RetVal) == 0x000151, "Member 'Utask_CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior::_RetVal' has a wrong offset!");

class Utask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R final : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*      _Self;
	struct Ftuple_Lvector3_Mfloat_Mcolor_R        __verse_0xB2CDDD72_Argument;
	FOptionProperty_                              _ExprResultStack_0;
	FOptionProperty_                              _ExprResultStack_1;
	EVerseTrue                                    _InvokeSureResultDummy_2;
	uint8                                         Pad_18D[0x3];
	FVerseFunctionProperty_                       _Callee_3;
	struct Ftuple_Lvector3_M_QParams_Nsphere__draw__params_R _ExprResult_4;
	FOptionProperty_                              _ExprResult_5;
	uint8                                         Pad_251[0x7];
	struct FVGameplayRst_DebugDraw_sphere_draw_params _ExprResult_6;
	class UConcurrency_task*                      _AsyncTask_7;
	FVerseFunctionProperty_                       _AsyncTaskClass_8;
	int64                                         _AsyncResult_9;
	EVerseTrue                                    _InvokeSureResultDummy_10;
	uint8                                         Pad_2C1[0x7];
	FVerseFunctionProperty_                       _Callee_11;
	struct CompanionAI::Ftuple_L_R                _ExprResult_12;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_companion_ai_runtime$DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R">();
	}
	static class Utask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R>();
	}
};
static_assert(alignof(Utask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R) == 0x000008, "Wrong alignment on Utask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R");
static_assert(sizeof(Utask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R) == 0x0002E0, "Wrong size on Utask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R, _Self) == 0x000148, "Member 'Utask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R, _ExprResultStack_0) == 0x000188, "Member 'Utask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::_ExprResultStack_0' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R, _ExprResultStack_1) == 0x00018A, "Member 'Utask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::_ExprResultStack_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R, _InvokeSureResultDummy_2) == 0x00018C, "Member 'Utask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::_InvokeSureResultDummy_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R, _Callee_3) == 0x000190, "Member 'Utask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::_Callee_3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R, _ExprResult_4) == 0x0001A0, "Member 'Utask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::_ExprResult_4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R, _ExprResult_5) == 0x000208, "Member 'Utask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::_ExprResult_5' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R, _ExprResult_6) == 0x000258, "Member 'Utask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::_ExprResult_6' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R, _AsyncTask_7) == 0x0002A0, "Member 'Utask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::_AsyncTask_7' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R, _AsyncTaskClass_8) == 0x0002A8, "Member 'Utask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::_AsyncTaskClass_8' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R, _AsyncResult_9) == 0x0002B8, "Member 'Utask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::_AsyncResult_9' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R, _InvokeSureResultDummy_10) == 0x0002C0, "Member 'Utask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::_InvokeSureResultDummy_10' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R, _Callee_11) == 0x0002C8, "Member 'Utask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::_Callee_11' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R, _ExprResult_12) == 0x0002D8, "Member 'Utask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::_ExprResult_12' has a wrong offset!");

class Utask_CompanionAI_fort_creature_component_RunDefaultBehavior final : public UConcurrency_task
{
public:
	class UCompanionAI_fort_creature_component*   _Self;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	EVerseAIBase_action_result                    _RetVal;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_fort_creature_component$RunDefaultBehavior">();
	}
	static class Utask_CompanionAI_fort_creature_component_RunDefaultBehavior* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_fort_creature_component_RunDefaultBehavior>();
	}
};
static_assert(alignof(Utask_CompanionAI_fort_creature_component_RunDefaultBehavior) == 0x000008, "Wrong alignment on Utask_CompanionAI_fort_creature_component_RunDefaultBehavior");
static_assert(sizeof(Utask_CompanionAI_fort_creature_component_RunDefaultBehavior) == 0x000158, "Wrong size on Utask_CompanionAI_fort_creature_component_RunDefaultBehavior");
static_assert(offsetof(Utask_CompanionAI_fort_creature_component_RunDefaultBehavior, _Self) == 0x000148, "Member 'Utask_CompanionAI_fort_creature_component_RunDefaultBehavior::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_fort_creature_component_RunDefaultBehavior, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_fort_creature_component_RunDefaultBehavior::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_fort_creature_component_RunDefaultBehavior, _RetVal) == 0x000151, "Member 'Utask_CompanionAI_fort_creature_component_RunDefaultBehavior::_RetVal' has a wrong offset!");

class Utask_CompanionAI_companion_ai_runtime_GameLoop final : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*      _Self;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_151[0x7];
	FVerseDynamicProperty_                        InvokeResultDummy_0;
	FOptionProperty_                              _ExprResultStack_1;
	uint8                                         Pad_179[0x7];
	FVerseDynamicProperty_                        _ExprResult_2;
	uint8                                         _ExprResult_3 : 1;
	uint8                                         Pad_191[0x7];
	class UObject*                                __verse_0x00000000__3;
	FVerseFunctionProperty_                       _Callee_4;
	struct CompanionAI::Ftuple_L_R                _ExprResult_5;
	uint8                                         Pad_1B1[0x7];
	FVerseDynamicProperty_                        _ExprResult_6;
	class UObject*                                __verse_0x00000000__5;
	class UConcurrency_task*                      _AsyncTask_7;
	FVerseFunctionProperty_                       _AsyncTaskClass_8;
	struct CompanionAI::Ftuple_L_R                _ExprResult_9;
	uint8                                         Pad_1E9[0x7];
	int64                                         _AsyncResult_10;
	FOptionProperty_                              __verse_0x01443115_PingInfo_1;
	FOptionProperty_                              __verse_0x00000000__6;
	uint8                                         _ExprResult_11 : 1;
	FOptionProperty_                              _ExprResultStack_12;
	uint8                                         Pad_236[0x2];
	class UObject*                                __verse_0x00000000__8;
	class UObject*                                __verse_0x00000000__9;
	FVerseFunctionProperty_                       _Callee_13;
	struct CompanionAI::Ftuple_L_R                _ExprResult_14;
	uint8                                         Pad_259[0x7];
	class UObject*                                _InvokeSureResultDummy_15;
	FVerseFunctionProperty_                       _Callee_16;
	class UObject*                                __verse_0x00000000__10;
	class UObject*                                __verse_0x00000000__11;
	FVerseFunctionProperty_                       _Callee_17;
	struct CompanionAI::Ftuple_L_R                _ExprResult_18;
	uint8                                         Pad_299[0x7];
	class UObject*                                _InvokeSureResultDummy_19;
	FVerseFunctionProperty_                       _Callee_20;
	struct FCompanionAI_ping_info                 __verse_0x78680F6D_CurrentCommand_13;
	FOptionProperty_                              _ExprResultStack_21;
	uint8                                         _AsyncBeginCount_22 : 1;
	uint8                                         BitPad_329_1 : 7;
	uint8                                         _AsyncBeginCount_23 : 1;
	uint8                                         Pad_32B[0x5];
	FOptionProperty_                              _ExprResult_24;
	uint8                                         Pad_369[0x7];
	class UObject*                                __verse_0x00000000__14;
	class UConcurrency_task*                      _AsyncTask_25;
	FVerseFunctionProperty_                       _AsyncTaskClass_26;
	struct CompanionAI::Ftuple_L_R                _ExprResult_27;
	uint8                                         Pad_391[0x7];
	int64                                         _AsyncResult_28;
	uint8                                         _AsyncBeginCount_29 : 1;
	uint8                                         Pad_3A1[0x7];
	class UConcurrency_task*                      _AsyncTask_30;
	FVerseFunctionProperty_                       _AsyncTaskClass_31;
	int64                                         _AsyncResult_32;
	class UObject*                                __verse_0x00000000__16;
	EVerseTrue                                    _InvokeSureResultDummy_33;
	uint8                                         Pad_3D1[0x7];
	FVerseFunctionProperty_                       _Callee_34;
	FOptionProperty_                              _ExprResult_35;
	FOptionProperty_                              __verse_0x00000000__17;
	uint8                                         _ExprResult_36 : 1;
	FOptionProperty_                              _ExprResultStack_37;
	uint8                                         _AsyncBeginCount_38 : 1;
	uint8                                         BitPad_426_1 : 7;
	uint8                                         _AsyncBeginCount_39 : 1;
	class UObject*                                __verse_0x00000000__20;
	class UConcurrency_task*                      _AsyncTask_40;
	FVerseFunctionProperty_                       _AsyncTaskClass_41;
	struct CompanionAI::Ftuple_L_R                _ExprResult_42;
	uint8                                         Pad_449[0x7];
	int64                                         _AsyncResult_43;
	uint8                                         _AsyncBeginCount_44 : 1;
	uint8                                         Pad_459[0x7];
	FOptionProperty_                              _ExprResult_45;
	uint8                                         Pad_499[0x7];
	class UObject*                                __verse_0x00000000__21;
	class UConcurrency_task*                      _AsyncTask_46;
	FVerseFunctionProperty_                       _AsyncTaskClass_47;
	struct CompanionAI::Ftuple_L_R                _ExprResult_48;
	uint8                                         Pad_4C1[0x7];
	int64                                         _AsyncResult_49;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_companion_ai_runtime$GameLoop">();
	}
	static class Utask_CompanionAI_companion_ai_runtime_GameLoop* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_companion_ai_runtime_GameLoop>();
	}
};
static_assert(alignof(Utask_CompanionAI_companion_ai_runtime_GameLoop) == 0x000008, "Wrong alignment on Utask_CompanionAI_companion_ai_runtime_GameLoop");
static_assert(sizeof(Utask_CompanionAI_companion_ai_runtime_GameLoop) == 0x0004D0, "Wrong size on Utask_CompanionAI_companion_ai_runtime_GameLoop");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _Self) == 0x000148, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, InvokeResultDummy_0) == 0x000158, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::InvokeResultDummy_0' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _ExprResultStack_1) == 0x000168, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_ExprResultStack_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _ExprResult_2) == 0x000180, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, __verse_0x00000000__3) == 0x000198, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::__verse_0x00000000__3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _Callee_4) == 0x0001A0, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_Callee_4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _ExprResult_5) == 0x0001B0, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_ExprResult_5' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _ExprResult_6) == 0x0001B8, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_ExprResult_6' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, __verse_0x00000000__5) == 0x0001C8, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::__verse_0x00000000__5' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _AsyncTask_7) == 0x0001D0, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_AsyncTask_7' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _AsyncTaskClass_8) == 0x0001D8, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_AsyncTaskClass_8' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _ExprResult_9) == 0x0001E8, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_ExprResult_9' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _AsyncResult_10) == 0x0001F0, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_AsyncResult_10' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, __verse_0x01443115_PingInfo_1) == 0x0001F8, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::__verse_0x01443115_PingInfo_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, __verse_0x00000000__6) == 0x000231, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::__verse_0x00000000__6' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _ExprResultStack_12) == 0x000234, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_ExprResultStack_12' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, __verse_0x00000000__8) == 0x000238, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::__verse_0x00000000__8' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, __verse_0x00000000__9) == 0x000240, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::__verse_0x00000000__9' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _Callee_13) == 0x000248, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_Callee_13' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _ExprResult_14) == 0x000258, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_ExprResult_14' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _InvokeSureResultDummy_15) == 0x000260, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_InvokeSureResultDummy_15' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _Callee_16) == 0x000268, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_Callee_16' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, __verse_0x00000000__10) == 0x000278, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::__verse_0x00000000__10' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, __verse_0x00000000__11) == 0x000280, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::__verse_0x00000000__11' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _Callee_17) == 0x000288, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_Callee_17' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _ExprResult_18) == 0x000298, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_ExprResult_18' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _InvokeSureResultDummy_19) == 0x0002A0, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_InvokeSureResultDummy_19' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _Callee_20) == 0x0002A8, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_Callee_20' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, __verse_0x78680F6D_CurrentCommand_13) == 0x0002B8, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::__verse_0x78680F6D_CurrentCommand_13' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _ExprResultStack_21) == 0x0002F0, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_ExprResultStack_21' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _ExprResult_24) == 0x000330, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_ExprResult_24' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, __verse_0x00000000__14) == 0x000370, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::__verse_0x00000000__14' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _AsyncTask_25) == 0x000378, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_AsyncTask_25' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _AsyncTaskClass_26) == 0x000380, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_AsyncTaskClass_26' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _ExprResult_27) == 0x000390, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_ExprResult_27' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _AsyncResult_28) == 0x000398, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_AsyncResult_28' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _AsyncTask_30) == 0x0003A8, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_AsyncTask_30' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _AsyncTaskClass_31) == 0x0003B0, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_AsyncTaskClass_31' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _AsyncResult_32) == 0x0003C0, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_AsyncResult_32' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, __verse_0x00000000__16) == 0x0003C8, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::__verse_0x00000000__16' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _InvokeSureResultDummy_33) == 0x0003D0, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_InvokeSureResultDummy_33' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _Callee_34) == 0x0003D8, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_Callee_34' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _ExprResult_35) == 0x0003E8, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_ExprResult_35' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, __verse_0x00000000__17) == 0x000421, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::__verse_0x00000000__17' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _ExprResultStack_37) == 0x000424, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_ExprResultStack_37' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, __verse_0x00000000__20) == 0x000428, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::__verse_0x00000000__20' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _AsyncTask_40) == 0x000430, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_AsyncTask_40' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _AsyncTaskClass_41) == 0x000438, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_AsyncTaskClass_41' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _ExprResult_42) == 0x000448, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_ExprResult_42' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _AsyncResult_43) == 0x000450, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_AsyncResult_43' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _ExprResult_45) == 0x000460, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_ExprResult_45' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, __verse_0x00000000__21) == 0x0004A0, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::__verse_0x00000000__21' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _AsyncTask_46) == 0x0004A8, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_AsyncTask_46' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _AsyncTaskClass_47) == 0x0004B0, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_AsyncTaskClass_47' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _ExprResult_48) == 0x0004C0, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_ExprResult_48' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GameLoop, _AsyncResult_49) == 0x0004C8, "Member 'Utask_CompanionAI_companion_ai_runtime_GameLoop::_AsyncResult_49' has a wrong offset!");

class Utask_CompanionAI_fort_ping_interface_OnNPCCommand final : public UConcurrency_task
{
public:
	class UCompanionAI_fort_ping_interface*       _Self;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_151[0x7];
	FOptionProperty_                              _RetVal;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_fort_ping_interface$OnNPCCommand">();
	}
	static class Utask_CompanionAI_fort_ping_interface_OnNPCCommand* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_fort_ping_interface_OnNPCCommand>();
	}
};
static_assert(alignof(Utask_CompanionAI_fort_ping_interface_OnNPCCommand) == 0x000008, "Wrong alignment on Utask_CompanionAI_fort_ping_interface_OnNPCCommand");
static_assert(sizeof(Utask_CompanionAI_fort_ping_interface_OnNPCCommand) == 0x000198, "Wrong size on Utask_CompanionAI_fort_ping_interface_OnNPCCommand");
static_assert(offsetof(Utask_CompanionAI_fort_ping_interface_OnNPCCommand, _Self) == 0x000148, "Member 'Utask_CompanionAI_fort_ping_interface_OnNPCCommand::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_fort_ping_interface_OnNPCCommand, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_fort_ping_interface_OnNPCCommand::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_fort_ping_interface_OnNPCCommand, _RetVal) == 0x000158, "Member 'Utask_CompanionAI_fort_ping_interface_OnNPCCommand::_RetVal' has a wrong offset!");

class Utask_CompanionAI_companion_ai_runtime_GetNewObstacle final : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*      _Self;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_151[0x7];
	FOptionProperty_                              _RetVal;
	uint8                                         Pad_181[0x7];
	struct FVerseAIBase_fort_obstacle_info        __verse_0x39C5E53E_ObstacleInfo_1;
	class UObject*                                __verse_0x00000000__2;
	class UObject*                                __verse_0x00000000__3;
	FVerseFunctionProperty_                       _Callee_0;
	struct CompanionAI::Ftuple_L_R                _ExprResult_1;
	uint8                                         Pad_1D1[0x7];
	FVerseDynamicProperty_                        _ExprResult_2;
	class UConcurrency_task*                      _AsyncTask_3;
	FVerseFunctionProperty_                       _AsyncTaskClass_4;
	struct CompanionAI::Ftuple_L_R                _ExprResult_5;
	uint8                                         Pad_201[0x7];
	int64                                         _AsyncResult_6;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_companion_ai_runtime$GetNewObstacle">();
	}
	static class Utask_CompanionAI_companion_ai_runtime_GetNewObstacle* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_companion_ai_runtime_GetNewObstacle>();
	}
};
static_assert(alignof(Utask_CompanionAI_companion_ai_runtime_GetNewObstacle) == 0x000008, "Wrong alignment on Utask_CompanionAI_companion_ai_runtime_GetNewObstacle");
static_assert(sizeof(Utask_CompanionAI_companion_ai_runtime_GetNewObstacle) == 0x000210, "Wrong size on Utask_CompanionAI_companion_ai_runtime_GetNewObstacle");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetNewObstacle, _Self) == 0x000148, "Member 'Utask_CompanionAI_companion_ai_runtime_GetNewObstacle::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetNewObstacle, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_companion_ai_runtime_GetNewObstacle::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetNewObstacle, _RetVal) == 0x000158, "Member 'Utask_CompanionAI_companion_ai_runtime_GetNewObstacle::_RetVal' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetNewObstacle, __verse_0x39C5E53E_ObstacleInfo_1) == 0x000188, "Member 'Utask_CompanionAI_companion_ai_runtime_GetNewObstacle::__verse_0x39C5E53E_ObstacleInfo_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetNewObstacle, __verse_0x00000000__2) == 0x0001B0, "Member 'Utask_CompanionAI_companion_ai_runtime_GetNewObstacle::__verse_0x00000000__2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetNewObstacle, __verse_0x00000000__3) == 0x0001B8, "Member 'Utask_CompanionAI_companion_ai_runtime_GetNewObstacle::__verse_0x00000000__3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetNewObstacle, _Callee_0) == 0x0001C0, "Member 'Utask_CompanionAI_companion_ai_runtime_GetNewObstacle::_Callee_0' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetNewObstacle, _ExprResult_1) == 0x0001D0, "Member 'Utask_CompanionAI_companion_ai_runtime_GetNewObstacle::_ExprResult_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetNewObstacle, _ExprResult_2) == 0x0001D8, "Member 'Utask_CompanionAI_companion_ai_runtime_GetNewObstacle::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetNewObstacle, _AsyncTask_3) == 0x0001E8, "Member 'Utask_CompanionAI_companion_ai_runtime_GetNewObstacle::_AsyncTask_3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetNewObstacle, _AsyncTaskClass_4) == 0x0001F0, "Member 'Utask_CompanionAI_companion_ai_runtime_GetNewObstacle::_AsyncTaskClass_4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetNewObstacle, _ExprResult_5) == 0x000200, "Member 'Utask_CompanionAI_companion_ai_runtime_GetNewObstacle::_ExprResult_5' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetNewObstacle, _AsyncResult_6) == 0x000208, "Member 'Utask_CompanionAI_companion_ai_runtime_GetNewObstacle::_AsyncResult_6' has a wrong offset!");

class Utask_CompanionAI_ping_component_OnNPCCommand final : public UConcurrency_task
{
public:
	class UCompanionAI_ping_component*            _Self;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_151[0x7];
	FOptionProperty_                              _RetVal;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_ping_component$OnNPCCommand">();
	}
	static class Utask_CompanionAI_ping_component_OnNPCCommand* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_ping_component_OnNPCCommand>();
	}
};
static_assert(alignof(Utask_CompanionAI_ping_component_OnNPCCommand) == 0x000008, "Wrong alignment on Utask_CompanionAI_ping_component_OnNPCCommand");
static_assert(sizeof(Utask_CompanionAI_ping_component_OnNPCCommand) == 0x000198, "Wrong size on Utask_CompanionAI_ping_component_OnNPCCommand");
static_assert(offsetof(Utask_CompanionAI_ping_component_OnNPCCommand, _Self) == 0x000148, "Member 'Utask_CompanionAI_ping_component_OnNPCCommand::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_ping_component_OnNPCCommand, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_ping_component_OnNPCCommand::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_ping_component_OnNPCCommand, _RetVal) == 0x000158, "Member 'Utask_CompanionAI_ping_component_OnNPCCommand::_RetVal' has a wrong offset!");

class Utask_CompanionAI_companion_ai_runtime_GetNewTargetPerception final : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*      _Self;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_151[0x7];
	FOptionProperty_                              _RetVal;
	uint8                                         Pad_189[0x7];
	struct FVerseAIBase_fort_threat_info          __verse_0x1EB80E5B_ThreatInfo_1;
	class UObject*                                __verse_0x00000000__2;
	class UObject*                                __verse_0x00000000__3;
	FVerseFunctionProperty_                       _Callee_0;
	struct CompanionAI::Ftuple_L_R                _ExprResult_1;
	uint8                                         Pad_1E1[0x7];
	FVerseDynamicProperty_                        _ExprResult_2;
	class UConcurrency_task*                      _AsyncTask_3;
	FVerseFunctionProperty_                       _AsyncTaskClass_4;
	struct CompanionAI::Ftuple_L_R                _ExprResult_5;
	uint8                                         Pad_211[0x7];
	int64                                         _AsyncResult_6;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_companion_ai_runtime$GetNewTargetPerception">();
	}
	static class Utask_CompanionAI_companion_ai_runtime_GetNewTargetPerception* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_companion_ai_runtime_GetNewTargetPerception>();
	}
};
static_assert(alignof(Utask_CompanionAI_companion_ai_runtime_GetNewTargetPerception) == 0x000008, "Wrong alignment on Utask_CompanionAI_companion_ai_runtime_GetNewTargetPerception");
static_assert(sizeof(Utask_CompanionAI_companion_ai_runtime_GetNewTargetPerception) == 0x000220, "Wrong size on Utask_CompanionAI_companion_ai_runtime_GetNewTargetPerception");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetNewTargetPerception, _Self) == 0x000148, "Member 'Utask_CompanionAI_companion_ai_runtime_GetNewTargetPerception::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetNewTargetPerception, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_companion_ai_runtime_GetNewTargetPerception::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetNewTargetPerception, _RetVal) == 0x000158, "Member 'Utask_CompanionAI_companion_ai_runtime_GetNewTargetPerception::_RetVal' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetNewTargetPerception, __verse_0x1EB80E5B_ThreatInfo_1) == 0x000190, "Member 'Utask_CompanionAI_companion_ai_runtime_GetNewTargetPerception::__verse_0x1EB80E5B_ThreatInfo_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetNewTargetPerception, __verse_0x00000000__2) == 0x0001C0, "Member 'Utask_CompanionAI_companion_ai_runtime_GetNewTargetPerception::__verse_0x00000000__2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetNewTargetPerception, __verse_0x00000000__3) == 0x0001C8, "Member 'Utask_CompanionAI_companion_ai_runtime_GetNewTargetPerception::__verse_0x00000000__3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetNewTargetPerception, _Callee_0) == 0x0001D0, "Member 'Utask_CompanionAI_companion_ai_runtime_GetNewTargetPerception::_Callee_0' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetNewTargetPerception, _ExprResult_1) == 0x0001E0, "Member 'Utask_CompanionAI_companion_ai_runtime_GetNewTargetPerception::_ExprResult_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetNewTargetPerception, _ExprResult_2) == 0x0001E8, "Member 'Utask_CompanionAI_companion_ai_runtime_GetNewTargetPerception::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetNewTargetPerception, _AsyncTask_3) == 0x0001F8, "Member 'Utask_CompanionAI_companion_ai_runtime_GetNewTargetPerception::_AsyncTask_3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetNewTargetPerception, _AsyncTaskClass_4) == 0x000200, "Member 'Utask_CompanionAI_companion_ai_runtime_GetNewTargetPerception::_AsyncTaskClass_4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetNewTargetPerception, _ExprResult_5) == 0x000210, "Member 'Utask_CompanionAI_companion_ai_runtime_GetNewTargetPerception::_ExprResult_5' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetNewTargetPerception, _AsyncResult_6) == 0x000218, "Member 'Utask_CompanionAI_companion_ai_runtime_GetNewTargetPerception::_AsyncResult_6' has a wrong offset!");

class Utask_CompanionAI_companion_ai_runtime_GetThreat final : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*      _Self;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_151[0x7];
	FOptionProperty_                              _RetVal;
	FOptionProperty_                              __verse_0x00000000__1;
	uint8                                         Pad_18B[0x5];
	struct FVerseAIBase_fort_threat_info          __verse_0x1EB80E5B_ThreatInfo_3;
	class UObject*                                __verse_0x00000000__4;
	FOptionProperty_                              _ExprResultStack_0;
	uint8                                         Pad_1F9[0x7];
	FVerseFunctionProperty_                       _Callee_1;
	struct CompanionAI::Ftuple_L_R                _ExprResult_2;
	uint8                                         _ExprResult_3 : 1;
	FOptionProperty_                              _ExprResultStack_4;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_companion_ai_runtime$GetThreat">();
	}
	static class Utask_CompanionAI_companion_ai_runtime_GetThreat* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_companion_ai_runtime_GetThreat>();
	}
};
static_assert(alignof(Utask_CompanionAI_companion_ai_runtime_GetThreat) == 0x000008, "Wrong alignment on Utask_CompanionAI_companion_ai_runtime_GetThreat");
static_assert(sizeof(Utask_CompanionAI_companion_ai_runtime_GetThreat) == 0x000218, "Wrong size on Utask_CompanionAI_companion_ai_runtime_GetThreat");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetThreat, _Self) == 0x000148, "Member 'Utask_CompanionAI_companion_ai_runtime_GetThreat::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetThreat, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_companion_ai_runtime_GetThreat::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetThreat, _RetVal) == 0x000158, "Member 'Utask_CompanionAI_companion_ai_runtime_GetThreat::_RetVal' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetThreat, __verse_0x00000000__1) == 0x000189, "Member 'Utask_CompanionAI_companion_ai_runtime_GetThreat::__verse_0x00000000__1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetThreat, __verse_0x1EB80E5B_ThreatInfo_3) == 0x000190, "Member 'Utask_CompanionAI_companion_ai_runtime_GetThreat::__verse_0x1EB80E5B_ThreatInfo_3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetThreat, __verse_0x00000000__4) == 0x0001C0, "Member 'Utask_CompanionAI_companion_ai_runtime_GetThreat::__verse_0x00000000__4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetThreat, _ExprResultStack_0) == 0x0001C8, "Member 'Utask_CompanionAI_companion_ai_runtime_GetThreat::_ExprResultStack_0' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetThreat, _Callee_1) == 0x000200, "Member 'Utask_CompanionAI_companion_ai_runtime_GetThreat::_Callee_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetThreat, _ExprResult_2) == 0x000210, "Member 'Utask_CompanionAI_companion_ai_runtime_GetThreat::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GetThreat, _ExprResultStack_4) == 0x000212, "Member 'Utask_CompanionAI_companion_ai_runtime_GetThreat::_ExprResultStack_4' has a wrong offset!");

class Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R final : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*      _Self;
	struct Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R __verse_0xB2CDDD72_Argument;
	uint8                                         _RetVal : 1;
	EVerseTrue                                    _InvokeSureResultDummy_0;
	uint8                                         Pad_18A[0x6];
	FVerseFunctionProperty_                       _Callee_1;
	FVerseStringProperty_                         _ExprResult_2;
	TArray<FVerseDynamicProperty_>                __verse_0xFFC68BC5_Array_2;
	FVerseFunctionProperty_                       _Callee_3;
	TArray<TArray<FVerseDynamicProperty_>>        _ExprResult_4;
	TArray<FVerseStringProperty_>                 __verse_0xFFC68BC5_Array_3;
	struct CompanionAI::Ftuple_L_Kchar_M_Kchar_R  __verse_0x00000000__4;
	FVerseStringProperty_                         _ExprResult_5;
	FVerseStringProperty_                         _ExprResultStack_6;
	FVerseFunctionProperty_                       _Callee_7;
	FVerseStringProperty_                         _ExprResultStack_8;
	FVerseFunctionProperty_                       _Callee_9;
	FVerseStringProperty_                         _ExprResultDummy_10;
	FVerseStringProperty_                         _ExprResultDummy_11;
	TArray<TArray<FVerseDynamicProperty_>>        _ForResult_12;
	int64                                         _ForIndex_13;
	int64                                         _ForLength_14;
	FVerseStringProperty_                         __verse_0xFB88B569_Item_6;
	TArray<FVerseDynamicProperty_>                _ExprResult_15;
	FVerseStringProperty_                         __verse_0xFFC68BC5_Array_7;
	TArray<FVerseDynamicProperty_>                _ForResult_16;
	int64                                         _ForIndex_17;
	int64                                         _ForLength_18;
	uint8                                         __verse_0xFB88B569_Item_9;
	uint8                                         Pad_2F1[0x7];
	FVerseDynamicProperty_                        _ExprResult_19;
	FVerseStringProperty_                         _ForResult_20;
	int64                                         _ForIndex_21;
	int64                                         _ForLength_22;
	FVerseDynamicProperty_                        __verse_0xFB88B569_Item_11;
	uint8                                         _ExprResult_23;
	FOptionProperty_                              _ExprResultStack_24;
	uint8                                         _AsyncBeginCount_25 : 1;
	uint8                                         Pad_33C[0x4];
	class UConcurrency_task*                      _AsyncTask_26;
	FVerseFunctionProperty_                       _AsyncTaskClass_27;
	struct CompanionAI::Ftuple_L_R                _ExprResult_28;
	uint8                                         Pad_359[0x7];
	int64                                         _AsyncResult_29;
	class USimulation_agent*                      __verse_0xFE707B39_TargetCharacter_14;
	FOptionProperty_                              _ExprResultStack_30;
	EVerseAIBase_navigation_result                __verse_0x95D09D0E_Result_14;
	uint8                                         Pad_379[0x7];
	class UObject*                                __verse_0x00000000__15;
	class UConcurrency_task*                      _AsyncTask_31;
	FVerseFunctionProperty_                       _AsyncTaskClass_32;
	struct Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_M_QAllowPartialPath_Nlogic_R _ExprResult_33;
	class UVerseAIBase_navigation_target*         _ExprResultStack_35;
	FVerseFunctionProperty_                       _Callee_36;
	FOptionProperty_                              _ExprResult_37;
	FOptionProperty_                              _ExprResult_38;
	uint8                                         Pad_3DB[0x5];
	int64                                         _AsyncResult_39;
	FVerseDynamicProperty_                        InvokeResultDummy_40;
	FOptionProperty_                              _ExprResultStack_41;
	uint8                                         Pad_409[0x7];
	FVerseDynamicProperty_                        _ExprResult_42;
	FVerseDynamicProperty_                        _ExprResult_43;
	EVerseTrue                                    _InvokeSureResultDummy_44;
	uint8                                         Pad_431[0x7];
	FVerseFunctionProperty_                       _Callee_45;
	FVerseStringProperty_                         _ExprResult_46;
	EVerseAIBase_navigation_result                __verse_0x95D09D0E_Result_18;
	uint8                                         Pad_459[0x7];
	class UObject*                                __verse_0x00000000__19;
	FVerseFunctionProperty_                       _AsyncTaskClass_47;
	struct Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_M_QAllowPartialPath_Nlogic_R _ExprResult_48;
	class UVerseAIBase_navigation_target*         _ExprResultStack_50;
	FVerseFunctionProperty_                       _Callee_51;
	FOptionProperty_                              _ExprResult_52;
	FOptionProperty_                              _ExprResult_53;
	uint8                                         Pad_4B3[0x5];
	FVerseDynamicProperty_                        InvokeResultDummy_54;
	FOptionProperty_                              _ExprResultStack_55;
	uint8                                         Pad_4D9[0x7];
	FVerseDynamicProperty_                        _ExprResult_56;
	FVerseDynamicProperty_                        _ExprResult_57;
	EVerseTrue                                    _InvokeSureResultDummy_58;
	uint8                                         Pad_501[0x7];
	FVerseFunctionProperty_                       _Callee_59;
	FVerseStringProperty_                         _ExprResult_60;
	EVerseTrue                                    _InvokeSureResultDummy_61;
	uint8                                         Pad_529[0x7];
	FVerseFunctionProperty_                       _Callee_62;
	FVerseStringProperty_                         _ExprResult_63;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_companion_ai_runtime$GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R">();
	}
	static class Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R>();
	}
};
static_assert(alignof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R) == 0x000008, "Wrong alignment on Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R");
static_assert(sizeof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R) == 0x000550, "Wrong size on Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _Self) == 0x000148, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _InvokeSureResultDummy_0) == 0x000189, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_InvokeSureResultDummy_0' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _Callee_1) == 0x000190, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_Callee_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _ExprResult_2) == 0x0001A0, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, __verse_0xFFC68BC5_Array_2) == 0x0001B0, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::__verse_0xFFC68BC5_Array_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _Callee_3) == 0x0001C0, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_Callee_3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _ExprResult_4) == 0x0001D0, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_ExprResult_4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, __verse_0xFFC68BC5_Array_3) == 0x0001E0, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::__verse_0xFFC68BC5_Array_3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, __verse_0x00000000__4) == 0x0001F0, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::__verse_0x00000000__4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _ExprResult_5) == 0x000210, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_ExprResult_5' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _ExprResultStack_6) == 0x000220, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_ExprResultStack_6' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _Callee_7) == 0x000230, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_Callee_7' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _ExprResultStack_8) == 0x000240, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_ExprResultStack_8' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _Callee_9) == 0x000250, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_Callee_9' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _ExprResultDummy_10) == 0x000260, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_ExprResultDummy_10' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _ExprResultDummy_11) == 0x000270, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_ExprResultDummy_11' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _ForResult_12) == 0x000280, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_ForResult_12' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _ForIndex_13) == 0x000290, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_ForIndex_13' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _ForLength_14) == 0x000298, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_ForLength_14' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, __verse_0xFB88B569_Item_6) == 0x0002A0, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::__verse_0xFB88B569_Item_6' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _ExprResult_15) == 0x0002B0, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_ExprResult_15' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, __verse_0xFFC68BC5_Array_7) == 0x0002C0, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::__verse_0xFFC68BC5_Array_7' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _ForResult_16) == 0x0002D0, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_ForResult_16' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _ForIndex_17) == 0x0002E0, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_ForIndex_17' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _ForLength_18) == 0x0002E8, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_ForLength_18' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, __verse_0xFB88B569_Item_9) == 0x0002F0, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::__verse_0xFB88B569_Item_9' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _ExprResult_19) == 0x0002F8, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_ExprResult_19' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _ForResult_20) == 0x000308, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_ForResult_20' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _ForIndex_21) == 0x000318, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_ForIndex_21' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _ForLength_22) == 0x000320, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_ForLength_22' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, __verse_0xFB88B569_Item_11) == 0x000328, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::__verse_0xFB88B569_Item_11' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _ExprResult_23) == 0x000338, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_ExprResult_23' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _ExprResultStack_24) == 0x000339, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_ExprResultStack_24' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _AsyncTask_26) == 0x000340, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_AsyncTask_26' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _AsyncTaskClass_27) == 0x000348, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_AsyncTaskClass_27' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _ExprResult_28) == 0x000358, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_ExprResult_28' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _AsyncResult_29) == 0x000360, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_AsyncResult_29' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, __verse_0xFE707B39_TargetCharacter_14) == 0x000368, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::__verse_0xFE707B39_TargetCharacter_14' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _ExprResultStack_30) == 0x000370, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_ExprResultStack_30' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, __verse_0x95D09D0E_Result_14) == 0x000378, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::__verse_0x95D09D0E_Result_14' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, __verse_0x00000000__15) == 0x000380, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::__verse_0x00000000__15' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _AsyncTask_31) == 0x000388, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_AsyncTask_31' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _AsyncTaskClass_32) == 0x000390, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_AsyncTaskClass_32' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _ExprResult_33) == 0x0003A0, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_ExprResult_33' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _ExprResultStack_35) == 0x0003B8, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_ExprResultStack_35' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _Callee_36) == 0x0003C0, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_Callee_36' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _ExprResult_37) == 0x0003D0, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_ExprResult_37' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _ExprResult_38) == 0x0003D9, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_ExprResult_38' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _AsyncResult_39) == 0x0003E0, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_AsyncResult_39' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, InvokeResultDummy_40) == 0x0003E8, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::InvokeResultDummy_40' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _ExprResultStack_41) == 0x0003F8, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_ExprResultStack_41' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _ExprResult_42) == 0x000410, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_ExprResult_42' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _ExprResult_43) == 0x000420, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_ExprResult_43' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _InvokeSureResultDummy_44) == 0x000430, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_InvokeSureResultDummy_44' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _Callee_45) == 0x000438, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_Callee_45' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _ExprResult_46) == 0x000448, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_ExprResult_46' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, __verse_0x95D09D0E_Result_18) == 0x000458, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::__verse_0x95D09D0E_Result_18' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, __verse_0x00000000__19) == 0x000460, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::__verse_0x00000000__19' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _AsyncTaskClass_47) == 0x000468, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_AsyncTaskClass_47' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _ExprResult_48) == 0x000478, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_ExprResult_48' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _ExprResultStack_50) == 0x000490, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_ExprResultStack_50' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _Callee_51) == 0x000498, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_Callee_51' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _ExprResult_52) == 0x0004A8, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_ExprResult_52' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _ExprResult_53) == 0x0004B1, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_ExprResult_53' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, InvokeResultDummy_54) == 0x0004B8, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::InvokeResultDummy_54' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _ExprResultStack_55) == 0x0004C8, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_ExprResultStack_55' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _ExprResult_56) == 0x0004E0, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_ExprResult_56' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _ExprResult_57) == 0x0004F0, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_ExprResult_57' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _InvokeSureResultDummy_58) == 0x000500, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_InvokeSureResultDummy_58' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _Callee_59) == 0x000508, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_Callee_59' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _ExprResult_60) == 0x000518, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_ExprResult_60' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _InvokeSureResultDummy_61) == 0x000528, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_InvokeSureResultDummy_61' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _Callee_62) == 0x000530, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_Callee_62' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, _ExprResult_63) == 0x000540, "Member 'Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::_ExprResult_63' has a wrong offset!");

class Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R final : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*      _Self;
	struct FCompanionAI_ping_info                 __verse_0xB2CDDD72_Argument;
	EVerseTrue                                    _InvokeSureResultDummy_0;
	uint8                                         Pad_189[0x7];
	FVerseFunctionProperty_                       _Callee_1;
	FVerseStringProperty_                         _ExprResult_2;
	class USimulation_agent*                      __verse_0xFD64D7AA_Emitter_2;
	FOptionProperty_                              _ExprResultStack_3;
	class UObject*                                __verse_0x6B4100B8_EmitterCharacter_2;
	FOptionProperty_                              _ExprResultStack_4;
	FVerseFunctionProperty_                       _Callee_5;
	struct CompanionAI::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R _ExprResult_6;
	struct CompanionAI::Ftuple_L_R                _ExprResult_7;
	struct CompanionAI::Ftuple_L_R                _ExprResult_8;
	uint8                                         Pad_1F2[0x6];
	FVerseDynamicProperty_                        InvokeResultDummy_9;
	FOptionProperty_                              _ExprResultStack_10;
	uint8                                         Pad_219[0x7];
	FVerseDynamicProperty_                        _ExprResult_11;
	FOptionProperty_                              _ExprResultStack_12;
	FVerseFunctionProperty_                       _Callee_13;
	struct CompanionAI::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_14;
	struct CompanionAI::Ftuple_L_R                _ExprResult_15;
	struct CompanionAI::Ftuple_L_R                _ExprResult_16;
	uint8                                         Pad_25A[0x6];
	FVerseDynamicProperty_                        _ExprResult_17;
	FOptionProperty_                              _ExprResultStack_18;
	FVerseFunctionProperty_                       _Callee_19;
	struct CompanionAI::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_20;
	struct CompanionAI::Ftuple_L_R                _ExprResult_21;
	struct CompanionAI::Ftuple_L_R                _ExprResult_22;
	uint8                                         _AsyncBeginCount_23 : 1;
	uint8                                         Pad_29B[0x5];
	class UConcurrency_task*                      _AsyncTask_24;
	FVerseFunctionProperty_                       _AsyncTaskClass_25;
	int64                                         _AsyncResult_26;
	uint8                                         __verse_0x7EBDC403_HasReachedPosition_2 : 1;
	uint8                                         Pad_2C1[0x7];
	class UConcurrency_task*                      _AsyncTask_27;
	FVerseFunctionProperty_                       _AsyncTaskClass_28;
	struct Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b2_2e000000e_2b02_7d_M_QAllowPartialPath_Nlogic_R _ExprResult_29;
	struct FSpatialMath_vector3                   _ExprResult_30;
	FOptionProperty_                              _ExprResult_31;
	uint8                                         __verse_0x19F8ABA1_Sprint_2 : 1;
	uint8                                         Pad_339[0x7];
	FOptionProperty_                              _ExprResult_32;
	FOptionProperty_                              _ExprResult_33;
	uint8                                         Pad_34B[0x5];
	int64                                         _AsyncResult_34;
	FOptionProperty_                              _ExprResultStack_35;
	EVerseTrue                                    _InvokeSureResultDummy_36;
	uint8                                         Pad_35B[0x5];
	FVerseFunctionProperty_                       _Callee_37;
	FVerseStringProperty_                         _ExprResult_38;
	uint8                                         __verse_0x684D9F77_IsFollowingEnabled_2 : 1;
	uint8                                         Pad_381[0x7];
	class UObject*                                __verse_0x00000000__7;
	FVerseFunctionProperty_                       _Callee_39;
	struct CompanionAI::Ftuple_L_R                _ExprResult_40;
	FOptionProperty_                              _ExprResultStack_41;
	EVerseTrue                                    _InvokeSureResultDummy_42;
	uint8                                         Pad_3A4[0x4];
	FVerseFunctionProperty_                       _Callee_43;
	FVerseStringProperty_                         _ExprResult_44;
	uint8                                         _AsyncBeginCount_45 : 1;
	uint8                                         BitPad_3C8_1 : 7;
	uint8                                         _AsyncBeginCount_46 : 1;
	uint8                                         Pad_3CA[0x6];
	class UConcurrency_task*                      _AsyncTask_47;
	FVerseFunctionProperty_                       _AsyncTaskClass_48;
	struct Ftuple_Lfort__character_Mfloat_R       _ExprResult_49;
	int64                                         _AsyncResult_50;
	uint8                                         _AsyncBeginCount_51 : 1;
	uint8                                         Pad_401[0x7];
	class UConcurrency_task*                      _AsyncTask_52;
	FVerseFunctionProperty_                       _AsyncTaskClass_53;
	struct CompanionAI::Ftuple_L_R                _ExprResult_54;
	uint8                                         Pad_421[0x7];
	int64                                         _AsyncResult_55;
	uint8                                         _AsyncBeginCount_56 : 1;
	uint8                                         Pad_431[0x7];
	class UConcurrency_task*                      _AsyncTask_57;
	FVerseFunctionProperty_                       _AsyncTaskClass_58;
	int64                                         _AsyncResult_59;
	EVerseTrue                                    _InvokeSureResultDummy_60;
	uint8                                         Pad_459[0x7];
	FVerseFunctionProperty_                       _Callee_61;
	FVerseStringProperty_                         _ExprResult_62;
	class UObject*                                __verse_0x00000000__11;
	EVerseTrue                                    _InvokeSureResultDummy_63;
	uint8                                         Pad_489[0x7];
	FVerseFunctionProperty_                       _Callee_64;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_companion_ai_runtime$HandleBackToMeCommand_L_Nping__info_R">();
	}
	static class Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R>();
	}
};
static_assert(alignof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R) == 0x000008, "Wrong alignment on Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R");
static_assert(sizeof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R) == 0x0004A0, "Wrong size on Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _Self) == 0x000148, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _InvokeSureResultDummy_0) == 0x000188, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_InvokeSureResultDummy_0' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _Callee_1) == 0x000190, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_Callee_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _ExprResult_2) == 0x0001A0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, __verse_0xFD64D7AA_Emitter_2) == 0x0001B0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::__verse_0xFD64D7AA_Emitter_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _ExprResultStack_3) == 0x0001B8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_ExprResultStack_3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, __verse_0x6B4100B8_EmitterCharacter_2) == 0x0001C0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::__verse_0x6B4100B8_EmitterCharacter_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _ExprResultStack_4) == 0x0001C8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_ExprResultStack_4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _Callee_5) == 0x0001D0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_Callee_5' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _ExprResult_6) == 0x0001E0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_ExprResult_6' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _ExprResult_7) == 0x0001F0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_ExprResult_7' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _ExprResult_8) == 0x0001F1, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_ExprResult_8' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, InvokeResultDummy_9) == 0x0001F8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::InvokeResultDummy_9' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _ExprResultStack_10) == 0x000208, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_ExprResultStack_10' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _ExprResult_11) == 0x000220, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_ExprResult_11' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _ExprResultStack_12) == 0x000230, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_ExprResultStack_12' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _Callee_13) == 0x000238, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_Callee_13' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _ExprResult_14) == 0x000248, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_ExprResult_14' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _ExprResult_15) == 0x000258, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_ExprResult_15' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _ExprResult_16) == 0x000259, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_ExprResult_16' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _ExprResult_17) == 0x000260, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_ExprResult_17' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _ExprResultStack_18) == 0x000270, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_ExprResultStack_18' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _Callee_19) == 0x000278, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_Callee_19' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _ExprResult_20) == 0x000288, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_ExprResult_20' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _ExprResult_21) == 0x000298, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_ExprResult_21' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _ExprResult_22) == 0x000299, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_ExprResult_22' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _AsyncTask_24) == 0x0002A0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_AsyncTask_24' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _AsyncTaskClass_25) == 0x0002A8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_AsyncTaskClass_25' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _AsyncResult_26) == 0x0002B8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_AsyncResult_26' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _AsyncTask_27) == 0x0002C8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_AsyncTask_27' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _AsyncTaskClass_28) == 0x0002D0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_AsyncTaskClass_28' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _ExprResult_29) == 0x0002E0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_ExprResult_29' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _ExprResult_30) == 0x000318, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_ExprResult_30' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _ExprResult_31) == 0x000330, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_ExprResult_31' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _ExprResult_32) == 0x000340, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_ExprResult_32' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _ExprResult_33) == 0x000349, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_ExprResult_33' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _AsyncResult_34) == 0x000350, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_AsyncResult_34' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _ExprResultStack_35) == 0x000358, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_ExprResultStack_35' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _InvokeSureResultDummy_36) == 0x00035A, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_InvokeSureResultDummy_36' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _Callee_37) == 0x000360, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_Callee_37' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _ExprResult_38) == 0x000370, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_ExprResult_38' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, __verse_0x00000000__7) == 0x000388, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::__verse_0x00000000__7' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _Callee_39) == 0x000390, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_Callee_39' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _ExprResult_40) == 0x0003A0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_ExprResult_40' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _ExprResultStack_41) == 0x0003A1, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_ExprResultStack_41' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _InvokeSureResultDummy_42) == 0x0003A3, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_InvokeSureResultDummy_42' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _Callee_43) == 0x0003A8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_Callee_43' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _ExprResult_44) == 0x0003B8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_ExprResult_44' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _AsyncTask_47) == 0x0003D0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_AsyncTask_47' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _AsyncTaskClass_48) == 0x0003D8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_AsyncTaskClass_48' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _ExprResult_49) == 0x0003E8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_ExprResult_49' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _AsyncResult_50) == 0x0003F8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_AsyncResult_50' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _AsyncTask_52) == 0x000408, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_AsyncTask_52' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _AsyncTaskClass_53) == 0x000410, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_AsyncTaskClass_53' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _ExprResult_54) == 0x000420, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_ExprResult_54' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _AsyncResult_55) == 0x000428, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_AsyncResult_55' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _AsyncTask_57) == 0x000438, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_AsyncTask_57' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _AsyncTaskClass_58) == 0x000440, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_AsyncTaskClass_58' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _AsyncResult_59) == 0x000450, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_AsyncResult_59' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _InvokeSureResultDummy_60) == 0x000458, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_InvokeSureResultDummy_60' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _Callee_61) == 0x000460, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_Callee_61' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _ExprResult_62) == 0x000470, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_ExprResult_62' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, __verse_0x00000000__11) == 0x000480, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::__verse_0x00000000__11' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _InvokeSureResultDummy_63) == 0x000488, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_InvokeSureResultDummy_63' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, _Callee_64) == 0x000490, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::_Callee_64' has a wrong offset!");

class Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R final : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*      _Self;
	struct FCompanionAI_ping_info                 __verse_0xB2CDDD72_Argument;
	EVerseTrue                                    _InvokeSureResultDummy_0;
	uint8                                         Pad_189[0x7];
	FVerseFunctionProperty_                       _Callee_1;
	FVerseStringProperty_                         _ExprResult_2;
	uint8                                         _AsyncBeginCount_3 : 1;
	uint8                                         Pad_1B1[0x7];
	class UConcurrency_task*                      _AsyncTask_4;
	FVerseFunctionProperty_                       _AsyncTaskClass_5;
	int64                                         _AsyncResult_6;
	FVerseDynamicProperty_                        InvokeResultDummy_7;
	FOptionProperty_                              _ExprResultStack_8;
	uint8                                         Pad_1F9[0x7];
	FVerseDynamicProperty_                        _ExprResult_9;
	FVerseDynamicProperty_                        _ExprResult_10;
	class UVerseEngine_Entity_entity*             __verse_0x459049A1_Target_3;
	FOptionProperty_                              _ExprResultStack_11;
	class UConcurrency_task*                      _AsyncTask_12;
	FVerseFunctionProperty_                       _AsyncTaskClass_13;
	struct Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R _ExprResult_14;
	struct Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b1_2e000000e_2b02_7d_R __verse_0x00000000__4;
	FOptionProperty_                              _ExprResultStack_15;
	FVerseFunctionProperty_                       _Callee_16;
	struct Ftuple_Lentity_Mtuple_L_R_Mtuple_L_R_R _ExprResult_17;
	struct CompanionAI::Ftuple_L_R                _ExprResult_18;
	struct CompanionAI::Ftuple_L_R                _ExprResult_19;
	uint8                                         __verse_0x19F8ABA1_Sprint_4 : 1;
	uint8                                         Pad_2E3[0x5];
	FOptionProperty_                              _ExprResult_20;
	FOptionProperty_                              _ExprResult_21;
	uint8                                         Pad_2F3[0x5];
	int64                                         _AsyncResult_22;
	FVerseDynamicProperty_                        InvokeResultDummy_23;
	FOptionProperty_                              _ExprResultStack_24;
	uint8                                         Pad_321[0x7];
	FVerseDynamicProperty_                        _ExprResult_25;
	FVerseDynamicProperty_                        _ExprResult_26;
	FVerseDynamicProperty_                        InvokeResultDummy_27;
	FOptionProperty_                              _ExprResultStack_28;
	uint8                                         Pad_369[0x7];
	FVerseDynamicProperty_                        _ExprResult_29;
	FVerseDynamicProperty_                        _ExprResult_30;
	FVerseDynamicProperty_                        InvokeResultDummy_31;
	FOptionProperty_                              _ExprResultStack_32;
	uint8                                         Pad_3B1[0x7];
	FVerseDynamicProperty_                        _ExprResult_33;
	FVerseDynamicProperty_                        _ExprResult_34;
	uint8                                         _AsyncBeginCount_35 : 1;
	uint8                                         BitPad_3D8_1 : 7;
	uint8                                         _AsyncBeginCount_36 : 1;
	uint8                                         Pad_3DA[0x6];
	class UConcurrency_task*                      _AsyncTask_37;
	FVerseFunctionProperty_                       _AsyncTaskClass_38;
	struct Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R _ExprResult_39;
	struct Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b1_2e000000e_2b02_7d_R __verse_0x00000000__6;
	FOptionProperty_                              __verse_0x459049A1_Target_6;
	FOptionProperty_                              __verse_0x00000000__7;
	uint8                                         _ExprResult_40 : 1;
	FOptionProperty_                              _ExprResultStack_41;
	uint8                                         __verse_0x19F8ABA1_Sprint_6 : 1;
	uint8                                         Pad_476[0x2];
	FOptionProperty_                              _ExprResult_42;
	FOptionProperty_                              _ExprResult_43;
	uint8                                         Pad_483[0x5];
	int64                                         _AsyncResult_44;
	uint8                                         _AsyncBeginCount_45 : 1;
	uint8                                         Pad_491[0x7];
	class UConcurrency_task*                      _AsyncTask_46;
	FVerseFunctionProperty_                       _AsyncTaskClass_47;
	int64                                         _AsyncResult_48;
	FOptionProperty_                              _ExprResultStack_49;
	uint8                                         _AsyncBeginCount_50 : 1;
	uint8                                         BitPad_4BA_1 : 7;
	uint8                                         _AsyncBeginCount_51 : 1;
	uint8                                         Pad_4BC[0x4];
	class UConcurrency_task*                      _AsyncTask_52;
	FVerseFunctionProperty_                       _AsyncTaskClass_53;
	struct Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R _ExprResult_54;
	struct Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b10_2e000000_7d_R __verse_0x00000000__10;
	FOptionProperty_                              __verse_0x459049A1_Target_10;
	FOptionProperty_                              __verse_0x00000000__11;
	uint8                                         _ExprResult_55 : 1;
	FOptionProperty_                              _ExprResultStack_56;
	uint8                                         __verse_0x19F8ABA1_Sprint_10 : 1;
	uint8                                         Pad_556[0x2];
	FOptionProperty_                              _ExprResult_57;
	FOptionProperty_                              _ExprResult_58;
	uint8                                         Pad_563[0x5];
	int64                                         _AsyncResult_59;
	uint8                                         _AsyncBeginCount_60 : 1;
	uint8                                         Pad_571[0x7];
	class UConcurrency_task*                      _AsyncTask_61;
	FVerseFunctionProperty_                       _AsyncTaskClass_62;
	int64                                         _AsyncResult_63;
	uint8                                         _AsyncBeginCount_64 : 1;
	uint8                                         BitPad_598_1 : 7;
	uint8                                         _AsyncBeginCount_65 : 1;
	uint8                                         Pad_59A[0x6];
	class UConcurrency_task*                      _AsyncTask_66;
	FVerseFunctionProperty_                       _AsyncTaskClass_67;
	struct Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R _ExprResult_68;
	struct Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b4_2e000000e_2b02_7d_R __verse_0x00000000__14;
	FOptionProperty_                              __verse_0x459049A1_Target_14;
	FOptionProperty_                              __verse_0x00000000__15;
	uint8                                         _ExprResult_69 : 1;
	FOptionProperty_                              _ExprResultStack_70;
	uint8                                         __verse_0x19F8ABA1_Sprint_14 : 1;
	uint8                                         Pad_636[0x2];
	FOptionProperty_                              _ExprResult_71;
	FOptionProperty_                              _ExprResult_72;
	uint8                                         Pad_643[0x5];
	int64                                         _AsyncResult_73;
	uint8                                         _AsyncBeginCount_74 : 1;
	uint8                                         Pad_651[0x7];
	class UConcurrency_task*                      _AsyncTask_75;
	FVerseFunctionProperty_                       _AsyncTaskClass_76;
	int64                                         _AsyncResult_77;
	EVerseTrue                                    _InvokeSureResultDummy_78;
	uint8                                         Pad_679[0x7];
	FVerseFunctionProperty_                       _Callee_79;
	FVerseStringProperty_                         _ExprResult_80;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_companion_ai_runtime$HandleGoTo_L_Nping__info_R">();
	}
	static class Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R>();
	}
};
static_assert(alignof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R) == 0x000008, "Wrong alignment on Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R");
static_assert(sizeof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R) == 0x0006A0, "Wrong size on Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _Self) == 0x000148, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _InvokeSureResultDummy_0) == 0x000188, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_InvokeSureResultDummy_0' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _Callee_1) == 0x000190, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_Callee_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _ExprResult_2) == 0x0001A0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _AsyncTask_4) == 0x0001B8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_AsyncTask_4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _AsyncTaskClass_5) == 0x0001C0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_AsyncTaskClass_5' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _AsyncResult_6) == 0x0001D0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_AsyncResult_6' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, InvokeResultDummy_7) == 0x0001D8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::InvokeResultDummy_7' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _ExprResultStack_8) == 0x0001E8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_ExprResultStack_8' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _ExprResult_9) == 0x000200, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_ExprResult_9' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _ExprResult_10) == 0x000210, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_ExprResult_10' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, __verse_0x459049A1_Target_3) == 0x000220, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::__verse_0x459049A1_Target_3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _ExprResultStack_11) == 0x000228, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_ExprResultStack_11' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _AsyncTask_12) == 0x000230, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_AsyncTask_12' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _AsyncTaskClass_13) == 0x000238, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_AsyncTaskClass_13' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _ExprResult_14) == 0x000248, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_ExprResult_14' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, __verse_0x00000000__4) == 0x000280, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::__verse_0x00000000__4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _ExprResultStack_15) == 0x0002B8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_ExprResultStack_15' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _Callee_16) == 0x0002C0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_Callee_16' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _ExprResult_17) == 0x0002D0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_ExprResult_17' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _ExprResult_18) == 0x0002E0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_ExprResult_18' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _ExprResult_19) == 0x0002E1, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_ExprResult_19' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _ExprResult_20) == 0x0002E8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_ExprResult_20' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _ExprResult_21) == 0x0002F1, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_ExprResult_21' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _AsyncResult_22) == 0x0002F8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_AsyncResult_22' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, InvokeResultDummy_23) == 0x000300, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::InvokeResultDummy_23' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _ExprResultStack_24) == 0x000310, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_ExprResultStack_24' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _ExprResult_25) == 0x000328, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_ExprResult_25' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _ExprResult_26) == 0x000338, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_ExprResult_26' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, InvokeResultDummy_27) == 0x000348, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::InvokeResultDummy_27' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _ExprResultStack_28) == 0x000358, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_ExprResultStack_28' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _ExprResult_29) == 0x000370, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_ExprResult_29' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _ExprResult_30) == 0x000380, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_ExprResult_30' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, InvokeResultDummy_31) == 0x000390, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::InvokeResultDummy_31' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _ExprResultStack_32) == 0x0003A0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_ExprResultStack_32' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _ExprResult_33) == 0x0003B8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_ExprResult_33' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _ExprResult_34) == 0x0003C8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_ExprResult_34' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _AsyncTask_37) == 0x0003E0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_AsyncTask_37' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _AsyncTaskClass_38) == 0x0003E8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_AsyncTaskClass_38' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _ExprResult_39) == 0x0003F8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_ExprResult_39' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, __verse_0x00000000__6) == 0x000430, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::__verse_0x00000000__6' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, __verse_0x459049A1_Target_6) == 0x000468, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::__verse_0x459049A1_Target_6' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, __verse_0x00000000__7) == 0x000470, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::__verse_0x00000000__7' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _ExprResultStack_41) == 0x000473, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_ExprResultStack_41' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _ExprResult_42) == 0x000478, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_ExprResult_42' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _ExprResult_43) == 0x000481, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_ExprResult_43' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _AsyncResult_44) == 0x000488, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_AsyncResult_44' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _AsyncTask_46) == 0x000498, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_AsyncTask_46' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _AsyncTaskClass_47) == 0x0004A0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_AsyncTaskClass_47' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _AsyncResult_48) == 0x0004B0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_AsyncResult_48' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _ExprResultStack_49) == 0x0004B8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_ExprResultStack_49' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _AsyncTask_52) == 0x0004C0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_AsyncTask_52' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _AsyncTaskClass_53) == 0x0004C8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_AsyncTaskClass_53' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _ExprResult_54) == 0x0004D8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_ExprResult_54' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, __verse_0x00000000__10) == 0x000510, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::__verse_0x00000000__10' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, __verse_0x459049A1_Target_10) == 0x000548, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::__verse_0x459049A1_Target_10' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, __verse_0x00000000__11) == 0x000550, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::__verse_0x00000000__11' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _ExprResultStack_56) == 0x000553, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_ExprResultStack_56' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _ExprResult_57) == 0x000558, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_ExprResult_57' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _ExprResult_58) == 0x000561, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_ExprResult_58' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _AsyncResult_59) == 0x000568, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_AsyncResult_59' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _AsyncTask_61) == 0x000578, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_AsyncTask_61' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _AsyncTaskClass_62) == 0x000580, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_AsyncTaskClass_62' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _AsyncResult_63) == 0x000590, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_AsyncResult_63' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _AsyncTask_66) == 0x0005A0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_AsyncTask_66' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _AsyncTaskClass_67) == 0x0005A8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_AsyncTaskClass_67' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _ExprResult_68) == 0x0005B8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_ExprResult_68' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, __verse_0x00000000__14) == 0x0005F0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::__verse_0x00000000__14' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, __verse_0x459049A1_Target_14) == 0x000628, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::__verse_0x459049A1_Target_14' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, __verse_0x00000000__15) == 0x000630, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::__verse_0x00000000__15' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _ExprResultStack_70) == 0x000633, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_ExprResultStack_70' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _ExprResult_71) == 0x000638, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_ExprResult_71' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _ExprResult_72) == 0x000641, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_ExprResult_72' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _AsyncResult_73) == 0x000648, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_AsyncResult_73' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _AsyncTask_75) == 0x000658, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_AsyncTask_75' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _AsyncTaskClass_76) == 0x000660, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_AsyncTaskClass_76' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _AsyncResult_77) == 0x000670, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_AsyncResult_77' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _InvokeSureResultDummy_78) == 0x000678, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_InvokeSureResultDummy_78' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _Callee_79) == 0x000680, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_Callee_79' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, _ExprResult_80) == 0x000690, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::_ExprResult_80' has a wrong offset!");

class Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R final : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*      _Self;
	struct FCompanionAI_ping_info                 __verse_0xB2CDDD72_Argument;
	EVerseTrue                                    _InvokeSureResultDummy_0;
	uint8                                         Pad_189[0x7];
	FVerseFunctionProperty_                       _Callee_1;
	FVerseStringProperty_                         _ExprResult_2;
	FOptionProperty_                              __verse_0x74FB0571_AttackCommandTarget_1;
	FOptionProperty_                              __verse_0x00000000__2;
	uint8                                         _ExprResult_3 : 1;
	FOptionProperty_                              _ExprResultStack_4;
	uint8                                         _AsyncBeginCount_5 : 1;
	uint8                                         BitPad_1E6_1 : 7;
	uint8                                         _AsyncBeginCount_6 : 1;
	FOptionProperty_                              _ExprResult_7;
	uint8                                         Pad_219[0x7];
	class UConcurrency_task*                      _AsyncTask_8;
	FVerseFunctionProperty_                       _AsyncTaskClass_9;
	int64                                         _AsyncResult_10;
	uint8                                         _AsyncBeginCount_11 : 1;
	uint8                                         Pad_241[0x7];
	class USimulation_agent*                      __verse_0xFD64D7AA_Emitter_5;
	FOptionProperty_                              _ExprResultStack_12;
	uint8                                         _AsyncBeginCount_13 : 1;
	uint8                                         Pad_259[0x7];
	class UConcurrency_task*                      _AsyncTask_14;
	FVerseFunctionProperty_                       _AsyncTaskClass_15;
	struct Ftuple_Lvector3_Mfloat_Magent_R        _ExprResult_16;
	int64                                         _AsyncResult_17;
	class UConcurrency_task*                      _AsyncTask_18;
	FVerseFunctionProperty_                       _AsyncTaskClass_19;
	int64                                         _AsyncResult_20;
	FOptionProperty_                              __verse_0x1EB80E5B_ThreatInfo_7;
	uint8                                         Pad_2F9[0x7];
	FVerseFunctionProperty_                       _AsyncTaskClass_21;
	struct CompanionAI::Ftuple_L_R                _ExprResult_22;
	uint8                                         _AsyncBeginCount_23 : 1;
	uint8                                         BitPad_311_1 : 7;
	uint8                                         _AsyncBeginCount_24 : 1;
	uint8                                         Pad_313[0x5];
	FOptionProperty_                              _ExprResult_25;
	uint8                                         Pad_349[0x7];
	class UConcurrency_task*                      _AsyncTask_26;
	FVerseFunctionProperty_                       _AsyncTaskClass_27;
	struct CompanionAI::Ftuple_L_R                _ExprResult_28;
	uint8                                         Pad_369[0x7];
	int64                                         _AsyncResult_29;
	uint8                                         _AsyncBeginCount_30 : 1;
	uint8                                         Pad_379[0x7];
	FOptionProperty_                              _ExprResult_31;
	uint8                                         Pad_3B1[0x7];
	class UConcurrency_task*                      _AsyncTask_32;
	FVerseFunctionProperty_                       _AsyncTaskClass_33;
	struct CompanionAI::Ftuple_L_R                _ExprResult_34;
	uint8                                         Pad_3D1[0x7];
	int64                                         _AsyncResult_35;
	uint8                                         _AsyncBeginCount_36 : 1;
	uint8                                         Pad_3E1[0x7];
	struct FVerseAIBase_fort_threat_info          __verse_0xD4ED8431_Threat_8;
	FOptionProperty_                              _ExprResultStack_37;
	FOptionProperty_                              _ExprResultStack_38;
	FOptionProperty_                              _ExprResultStack_39;
	uint8                                         Pad_44D[0x3];
	class UConcurrency_task*                      _AsyncTask_40;
	FVerseFunctionProperty_                       _AsyncTaskClass_41;
	int64                                         _AsyncResult_42;
	FOptionProperty_                              _ExprResultStack_43;
	uint8                                         Pad_4A1[0x7];
	FVerseFunctionProperty_                       _AsyncTaskClass_44;
	struct CompanionAI::Ftuple_L_R                _ExprResult_45;
	uint8                                         Pad_4B9[0x7];
	FVerseFunctionProperty_                       _AsyncTaskClass_46;
	struct Ftuple_Lvector3_Mtype_7b0_2e500000_7d_Mtype_7b1_2e500000_7d_R _ExprResult_47;
	uint8                                         __verse_0xBC1095DF_HasRevived_12 : 1;
	uint8                                         Pad_4F9[0x7];
	FVerseFunctionProperty_                       _AsyncTaskClass_48;
	FOptionProperty_                              _ExprResultStack_49;
	uint8                                         Pad_512[0x6];
	FOptionProperty_                              _ExprResultStack_50;
	uint8                                         Pad_521[0x7];
	double                                        _ExprResultStack_51;
	FVerseFunctionProperty_                       _Callee_52;
	struct CompanionAI::Ftuple_Lvector3_Mvector3_R _ExprResult_53;
	struct FSpatialMath_transform                 _ExprResult_54;
	class UObject*                                __verse_0x00000000__16;
	FVerseFunctionProperty_                       _Callee_55;
	struct CompanionAI::Ftuple_L_R                _ExprResult_56;
	uint8                                         Pad_5E9[0x7];
	struct FVerseAIBase_fort_threat_info          __verse_0x459049A1_Target_18;
	FOptionProperty_                              _ExprResultStack_57;
	EVerseTrue                                    _InvokeSureResultDummy_58;
	uint8                                         Pad_652[0x6];
	FVerseFunctionProperty_                       _Callee_59;
	FVerseStringProperty_                         _ExprResult_60;
	class USimulation_agent*                      __verse_0x93C79DDC_CharacterTarget_19;
	FOptionProperty_                              _ExprResultStack_61;
	class UObject*                                __verse_0x00000000__20;
	EVerseTrue                                    _InvokeSureResultDummy_62;
	uint8                                         Pad_691[0x7];
	FVerseFunctionProperty_                       _Callee_63;
	class UConcurrency_task*                      _AsyncTask_64;
	FVerseFunctionProperty_                       _AsyncTaskClass_65;
	int64                                         _AsyncResult_66;
	EVerseTrue                                    _InvokeSureResultDummy_67;
	uint8                                         Pad_6C9[0x7];
	FVerseFunctionProperty_                       _Callee_68;
	FVerseStringProperty_                         _ExprResult_69;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_companion_ai_runtime$HandleGoToCommand_L_Nping__info_R">();
	}
	static class Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R>();
	}
};
static_assert(alignof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R) == 0x000010, "Wrong alignment on Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R");
static_assert(sizeof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R) == 0x0006F0, "Wrong size on Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _Self) == 0x000148, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _InvokeSureResultDummy_0) == 0x000188, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_InvokeSureResultDummy_0' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _Callee_1) == 0x000190, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_Callee_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _ExprResult_2) == 0x0001A0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, __verse_0x74FB0571_AttackCommandTarget_1) == 0x0001B0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::__verse_0x74FB0571_AttackCommandTarget_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, __verse_0x00000000__2) == 0x0001E1, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::__verse_0x00000000__2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _ExprResultStack_4) == 0x0001E4, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_ExprResultStack_4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _ExprResult_7) == 0x0001E8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_ExprResult_7' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _AsyncTask_8) == 0x000220, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_AsyncTask_8' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _AsyncTaskClass_9) == 0x000228, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_AsyncTaskClass_9' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _AsyncResult_10) == 0x000238, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_AsyncResult_10' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, __verse_0xFD64D7AA_Emitter_5) == 0x000248, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::__verse_0xFD64D7AA_Emitter_5' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _ExprResultStack_12) == 0x000250, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_ExprResultStack_12' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _AsyncTask_14) == 0x000260, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_AsyncTask_14' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _AsyncTaskClass_15) == 0x000268, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_AsyncTaskClass_15' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _ExprResult_16) == 0x000278, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_ExprResult_16' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _AsyncResult_17) == 0x0002A0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_AsyncResult_17' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _AsyncTask_18) == 0x0002A8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_AsyncTask_18' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _AsyncTaskClass_19) == 0x0002B0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_AsyncTaskClass_19' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _AsyncResult_20) == 0x0002C0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_AsyncResult_20' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, __verse_0x1EB80E5B_ThreatInfo_7) == 0x0002C8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::__verse_0x1EB80E5B_ThreatInfo_7' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _AsyncTaskClass_21) == 0x000300, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_AsyncTaskClass_21' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _ExprResult_22) == 0x000310, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_ExprResult_22' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _ExprResult_25) == 0x000318, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_ExprResult_25' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _AsyncTask_26) == 0x000350, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_AsyncTask_26' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _AsyncTaskClass_27) == 0x000358, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_AsyncTaskClass_27' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _ExprResult_28) == 0x000368, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_ExprResult_28' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _AsyncResult_29) == 0x000370, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_AsyncResult_29' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _ExprResult_31) == 0x000380, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_ExprResult_31' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _AsyncTask_32) == 0x0003B8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_AsyncTask_32' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _AsyncTaskClass_33) == 0x0003C0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_AsyncTaskClass_33' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _ExprResult_34) == 0x0003D0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_ExprResult_34' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _AsyncResult_35) == 0x0003D8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_AsyncResult_35' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, __verse_0xD4ED8431_Threat_8) == 0x0003E8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::__verse_0xD4ED8431_Threat_8' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _ExprResultStack_37) == 0x000418, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_ExprResultStack_37' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _ExprResultStack_38) == 0x000449, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_ExprResultStack_38' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _ExprResultStack_39) == 0x00044B, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_ExprResultStack_39' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _AsyncTask_40) == 0x000450, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_AsyncTask_40' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _AsyncTaskClass_41) == 0x000458, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_AsyncTaskClass_41' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _AsyncResult_42) == 0x000468, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_AsyncResult_42' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _ExprResultStack_43) == 0x000470, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_ExprResultStack_43' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _AsyncTaskClass_44) == 0x0004A8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_AsyncTaskClass_44' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _ExprResult_45) == 0x0004B8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_ExprResult_45' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _AsyncTaskClass_46) == 0x0004C0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_AsyncTaskClass_46' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _ExprResult_47) == 0x0004D0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_ExprResult_47' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _AsyncTaskClass_48) == 0x000500, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_AsyncTaskClass_48' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _ExprResultStack_49) == 0x000510, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_ExprResultStack_49' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _ExprResultStack_50) == 0x000518, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_ExprResultStack_50' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _ExprResultStack_51) == 0x000528, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_ExprResultStack_51' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _Callee_52) == 0x000530, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_Callee_52' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _ExprResult_53) == 0x000540, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_ExprResult_53' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _ExprResult_54) == 0x000570, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_ExprResult_54' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, __verse_0x00000000__16) == 0x0005D0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::__verse_0x00000000__16' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _Callee_55) == 0x0005D8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_Callee_55' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _ExprResult_56) == 0x0005E8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_ExprResult_56' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, __verse_0x459049A1_Target_18) == 0x0005F0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::__verse_0x459049A1_Target_18' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _ExprResultStack_57) == 0x000620, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_ExprResultStack_57' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _InvokeSureResultDummy_58) == 0x000651, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_InvokeSureResultDummy_58' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _Callee_59) == 0x000658, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_Callee_59' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _ExprResult_60) == 0x000668, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_ExprResult_60' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, __verse_0x93C79DDC_CharacterTarget_19) == 0x000678, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::__verse_0x93C79DDC_CharacterTarget_19' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _ExprResultStack_61) == 0x000680, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_ExprResultStack_61' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, __verse_0x00000000__20) == 0x000688, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::__verse_0x00000000__20' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _InvokeSureResultDummy_62) == 0x000690, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_InvokeSureResultDummy_62' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _Callee_63) == 0x000698, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_Callee_63' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _AsyncTask_64) == 0x0006A8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_AsyncTask_64' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _AsyncTaskClass_65) == 0x0006B0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_AsyncTaskClass_65' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _AsyncResult_66) == 0x0006C0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_AsyncResult_66' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _InvokeSureResultDummy_67) == 0x0006C8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_InvokeSureResultDummy_67' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _Callee_68) == 0x0006D0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_Callee_68' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, _ExprResult_69) == 0x0006E0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::_ExprResult_69' has a wrong offset!");

class Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R final : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*      _Self;
	struct FCompanionAI_ping_info                 __verse_0xB2CDDD72_Argument;
	EVerseTrue                                    _InvokeSureResultDummy_0;
	uint8                                         Pad_189[0x7];
	FVerseFunctionProperty_                       _Callee_1;
	FVerseStringProperty_                         _ExprResult_2;
	class USimulation_agent*                      __verse_0xFD64D7AA_Emitter_2;
	FOptionProperty_                              _ExprResultStack_3;
	uint8                                         _AsyncBeginCount_4 : 1;
	uint8                                         Pad_1C1[0x7];
	class UConcurrency_task*                      _AsyncTask_5;
	FVerseFunctionProperty_                       _AsyncTaskClass_6;
	struct Ftuple_Lvector3_Mfloat_Magent_R        _ExprResult_7;
	uint8                                         Pad_208[0x8];
	struct FSpatialMath_transform                 _ExprResult_8;
	class UObject*                                __verse_0x00000000__4;
	FVerseFunctionProperty_                       _Callee_9;
	struct CompanionAI::Ftuple_L_R                _ExprResult_10;
	uint8                                         Pad_289[0x7];
	int64                                         _AsyncResult_11;
	class UConcurrency_task*                      _AsyncTask_12;
	FVerseFunctionProperty_                       _AsyncTaskClass_13;
	struct CompanionAI::Ftuple_L_R                _ExprResult_14;
	uint8                                         Pad_2B1[0x7];
	int64                                         _AsyncResult_15;
	FVerseFunctionProperty_                       _AsyncTaskClass_16;
	struct CompanionAI::Ftuple_L_R                _ExprResult_17;
	EVerseTrue                                    _InvokeSureResultDummy_18;
	uint8                                         Pad_2D2[0x6];
	FVerseFunctionProperty_                       _Callee_19;
	FVerseStringProperty_                         _ExprResult_20;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_companion_ai_runtime$HandleHoldPositionCommand_L_Nping__info_R">();
	}
	static class Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R>();
	}
};
static_assert(alignof(Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R) == 0x000010, "Wrong alignment on Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R");
static_assert(sizeof(Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R) == 0x000300, "Wrong size on Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R, _Self) == 0x000148, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R, _InvokeSureResultDummy_0) == 0x000188, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R::_InvokeSureResultDummy_0' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R, _Callee_1) == 0x000190, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R::_Callee_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R, _ExprResult_2) == 0x0001A0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R, __verse_0xFD64D7AA_Emitter_2) == 0x0001B0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R::__verse_0xFD64D7AA_Emitter_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R, _ExprResultStack_3) == 0x0001B8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R::_ExprResultStack_3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R, _AsyncTask_5) == 0x0001C8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R::_AsyncTask_5' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R, _AsyncTaskClass_6) == 0x0001D0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R::_AsyncTaskClass_6' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R, _ExprResult_7) == 0x0001E0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R::_ExprResult_7' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R, _ExprResult_8) == 0x000210, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R::_ExprResult_8' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R, __verse_0x00000000__4) == 0x000270, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R::__verse_0x00000000__4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R, _Callee_9) == 0x000278, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R::_Callee_9' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R, _ExprResult_10) == 0x000288, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R::_ExprResult_10' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R, _AsyncResult_11) == 0x000290, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R::_AsyncResult_11' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R, _AsyncTask_12) == 0x000298, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R::_AsyncTask_12' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R, _AsyncTaskClass_13) == 0x0002A0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R::_AsyncTaskClass_13' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R, _ExprResult_14) == 0x0002B0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R::_ExprResult_14' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R, _AsyncResult_15) == 0x0002B8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R::_AsyncResult_15' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R, _AsyncTaskClass_16) == 0x0002C0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R::_AsyncTaskClass_16' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R, _ExprResult_17) == 0x0002D0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R::_ExprResult_17' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R, _InvokeSureResultDummy_18) == 0x0002D1, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R::_InvokeSureResultDummy_18' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R, _Callee_19) == 0x0002D8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R::_Callee_19' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R, _ExprResult_20) == 0x0002E8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R::_ExprResult_20' has a wrong offset!");

class Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R final : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*      _Self;
	struct FCompanionAI_ping_info                 __verse_0xB2CDDD72_Argument;
	EVerseTrue                                    _InvokeSureResultDummy_0;
	uint8                                         Pad_189[0x7];
	FVerseFunctionProperty_                       _Callee_1;
	FVerseStringProperty_                         _ExprResult_2;
	TArray<FVerseDynamicProperty_>                __verse_0xFFC68BC5_Array_2;
	FVerseFunctionProperty_                       _Callee_3;
	TArray<TArray<FVerseDynamicProperty_>>        _ExprResult_4;
	TArray<FVerseStringProperty_>                 __verse_0xFFC68BC5_Array_3;
	struct Ftuple_L_Kchar_M_Kchar_M_Kchar_M_Kchar_R __verse_0x00000000__4;
	FVerseStringProperty_                         _ExprResult_5;
	FVerseStringProperty_                         _ExprResultStack_6;
	FVerseFunctionProperty_                       _Callee_7;
	FVerseStringProperty_                         _ExprResultStack_8;
	FVerseFunctionProperty_                       _Callee_9;
	FVerseStringProperty_                         _ExprResult_10;
	FVerseStringProperty_                         _ExprResultStack_11;
	FVerseFunctionProperty_                       _Callee_12;
	FVerseStringProperty_                         _ExprResultStack_13;
	FVerseFunctionProperty_                       _Callee_14;
	FVerseStringProperty_                         _ExprResultDummy_15;
	FVerseStringProperty_                         _ExprResultDummy_16;
	FVerseStringProperty_                         _ExprResultDummy_17;
	FVerseStringProperty_                         _ExprResultDummy_18;
	TArray<TArray<FVerseDynamicProperty_>>        _ForResult_19;
	int64                                         _ForIndex_20;
	int64                                         _ForLength_21;
	FVerseStringProperty_                         __verse_0xFB88B569_Item_6;
	TArray<FVerseDynamicProperty_>                _ExprResult_22;
	FVerseStringProperty_                         __verse_0xFFC68BC5_Array_7;
	TArray<FVerseDynamicProperty_>                _ForResult_23;
	int64                                         _ForIndex_24;
	int64                                         _ForLength_25;
	uint8                                         __verse_0xFB88B569_Item_9;
	uint8                                         Pad_381[0x7];
	FVerseDynamicProperty_                        _ExprResult_26;
	FVerseStringProperty_                         _ForResult_27;
	int64                                         _ForIndex_28;
	int64                                         _ForLength_29;
	FVerseDynamicProperty_                        __verse_0xFB88B569_Item_11;
	uint8                                         _ExprResult_30;
	uint8                                         Pad_3C9[0x7];
	FVerseDynamicProperty_                        InvokeResultDummy_31;
	FOptionProperty_                              _ExprResultStack_32;
	uint8                                         Pad_3F1[0x7];
	FVerseDynamicProperty_                        _ExprResult_33;
	FVerseDynamicProperty_                        _ExprResult_34;
	class UObject*                                __verse_0x00000000__14;
	class UConcurrency_task*                      _AsyncTask_35;
	FVerseFunctionProperty_                       _AsyncTaskClass_36;
	struct CompanionAI::Ftuple_L_R                _ExprResult_37;
	uint8                                         Pad_439[0x7];
	int64                                         _AsyncResult_38;
	FOptionProperty_                              _ExprResultStack_39;
	uint8                                         _ExprResult_40 : 1;
	uint8                                         Pad_44B[0x5];
	class UObject*                                __verse_0x00000000__16;
	FVerseFunctionProperty_                       _Callee_41;
	struct CompanionAI::Ftuple_L_R                _ExprResult_42;
	uint8                                         Pad_469[0x7];
	class UObject*                                __verse_0x00000000__18;
	EVerseTrue                                    _InvokeSureResultDummy_43;
	uint8                                         Pad_479[0x7];
	FVerseFunctionProperty_                       _Callee_44;
	FVerseDynamicProperty_                        InvokeResultDummy_45;
	FOptionProperty_                              _ExprResultStack_46;
	uint8                                         Pad_4B1[0x7];
	FVerseDynamicProperty_                        _ExprResult_47;
	FVerseDynamicProperty_                        _ExprResult_48;
	FVerseFunctionProperty_                       _AsyncTaskClass_49;
	FVerseDynamicProperty_                        InvokeResultDummy_50;
	FOptionProperty_                              _ExprResultStack_51;
	uint8                                         Pad_509[0x7];
	FVerseDynamicProperty_                        _ExprResult_52;
	FVerseDynamicProperty_                        _ExprResult_53;
	FVerseFunctionProperty_                       _AsyncTaskClass_54;
	FVerseDynamicProperty_                        InvokeResultDummy_55;
	FOptionProperty_                              _ExprResultStack_56;
	uint8                                         Pad_561[0x7];
	FVerseDynamicProperty_                        _ExprResult_57;
	FVerseDynamicProperty_                        _ExprResult_58;
	FVerseFunctionProperty_                       _AsyncTaskClass_59;
	FVerseDynamicProperty_                        InvokeResultDummy_60;
	FOptionProperty_                              _ExprResultStack_61;
	uint8                                         Pad_5B9[0x7];
	FVerseDynamicProperty_                        _ExprResult_62;
	FVerseDynamicProperty_                        _ExprResult_63;
	FVerseFunctionProperty_                       _AsyncTaskClass_64;
	class UObject*                                __verse_0x00000000__24;
	EVerseTrue                                    _InvokeSureResultDummy_65;
	uint8                                         Pad_5F9[0x7];
	FVerseFunctionProperty_                       _Callee_66;
	EVerseTrue                                    _InvokeSureResultDummy_67;
	uint8                                         Pad_611[0x7];
	FVerseFunctionProperty_                       _Callee_68;
	FVerseStringProperty_                         _ExprResult_69;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_companion_ai_runtime$HandleNPCCommand_L_Nping__info_R">();
	}
	static class Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R>();
	}
};
static_assert(alignof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R) == 0x000008, "Wrong alignment on Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R");
static_assert(sizeof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R) == 0x000638, "Wrong size on Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _Self) == 0x000148, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _InvokeSureResultDummy_0) == 0x000188, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_InvokeSureResultDummy_0' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _Callee_1) == 0x000190, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_Callee_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ExprResult_2) == 0x0001A0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, __verse_0xFFC68BC5_Array_2) == 0x0001B0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::__verse_0xFFC68BC5_Array_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _Callee_3) == 0x0001C0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_Callee_3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ExprResult_4) == 0x0001D0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ExprResult_4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, __verse_0xFFC68BC5_Array_3) == 0x0001E0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::__verse_0xFFC68BC5_Array_3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, __verse_0x00000000__4) == 0x0001F0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::__verse_0x00000000__4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ExprResult_5) == 0x000230, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ExprResult_5' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ExprResultStack_6) == 0x000240, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ExprResultStack_6' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _Callee_7) == 0x000250, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_Callee_7' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ExprResultStack_8) == 0x000260, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ExprResultStack_8' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _Callee_9) == 0x000270, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_Callee_9' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ExprResult_10) == 0x000280, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ExprResult_10' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ExprResultStack_11) == 0x000290, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ExprResultStack_11' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _Callee_12) == 0x0002A0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_Callee_12' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ExprResultStack_13) == 0x0002B0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ExprResultStack_13' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _Callee_14) == 0x0002C0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_Callee_14' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ExprResultDummy_15) == 0x0002D0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ExprResultDummy_15' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ExprResultDummy_16) == 0x0002E0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ExprResultDummy_16' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ExprResultDummy_17) == 0x0002F0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ExprResultDummy_17' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ExprResultDummy_18) == 0x000300, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ExprResultDummy_18' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ForResult_19) == 0x000310, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ForResult_19' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ForIndex_20) == 0x000320, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ForIndex_20' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ForLength_21) == 0x000328, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ForLength_21' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, __verse_0xFB88B569_Item_6) == 0x000330, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::__verse_0xFB88B569_Item_6' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ExprResult_22) == 0x000340, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ExprResult_22' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, __verse_0xFFC68BC5_Array_7) == 0x000350, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::__verse_0xFFC68BC5_Array_7' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ForResult_23) == 0x000360, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ForResult_23' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ForIndex_24) == 0x000370, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ForIndex_24' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ForLength_25) == 0x000378, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ForLength_25' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, __verse_0xFB88B569_Item_9) == 0x000380, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::__verse_0xFB88B569_Item_9' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ExprResult_26) == 0x000388, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ExprResult_26' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ForResult_27) == 0x000398, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ForResult_27' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ForIndex_28) == 0x0003A8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ForIndex_28' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ForLength_29) == 0x0003B0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ForLength_29' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, __verse_0xFB88B569_Item_11) == 0x0003B8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::__verse_0xFB88B569_Item_11' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ExprResult_30) == 0x0003C8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ExprResult_30' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, InvokeResultDummy_31) == 0x0003D0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::InvokeResultDummy_31' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ExprResultStack_32) == 0x0003E0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ExprResultStack_32' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ExprResult_33) == 0x0003F8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ExprResult_33' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ExprResult_34) == 0x000408, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ExprResult_34' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, __verse_0x00000000__14) == 0x000418, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::__verse_0x00000000__14' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _AsyncTask_35) == 0x000420, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_AsyncTask_35' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _AsyncTaskClass_36) == 0x000428, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_AsyncTaskClass_36' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ExprResult_37) == 0x000438, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ExprResult_37' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _AsyncResult_38) == 0x000440, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_AsyncResult_38' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ExprResultStack_39) == 0x000448, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ExprResultStack_39' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, __verse_0x00000000__16) == 0x000450, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::__verse_0x00000000__16' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _Callee_41) == 0x000458, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_Callee_41' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ExprResult_42) == 0x000468, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ExprResult_42' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, __verse_0x00000000__18) == 0x000470, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::__verse_0x00000000__18' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _InvokeSureResultDummy_43) == 0x000478, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_InvokeSureResultDummy_43' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _Callee_44) == 0x000480, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_Callee_44' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, InvokeResultDummy_45) == 0x000490, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::InvokeResultDummy_45' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ExprResultStack_46) == 0x0004A0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ExprResultStack_46' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ExprResult_47) == 0x0004B8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ExprResult_47' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ExprResult_48) == 0x0004C8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ExprResult_48' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _AsyncTaskClass_49) == 0x0004D8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_AsyncTaskClass_49' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, InvokeResultDummy_50) == 0x0004E8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::InvokeResultDummy_50' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ExprResultStack_51) == 0x0004F8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ExprResultStack_51' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ExprResult_52) == 0x000510, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ExprResult_52' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ExprResult_53) == 0x000520, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ExprResult_53' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _AsyncTaskClass_54) == 0x000530, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_AsyncTaskClass_54' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, InvokeResultDummy_55) == 0x000540, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::InvokeResultDummy_55' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ExprResultStack_56) == 0x000550, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ExprResultStack_56' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ExprResult_57) == 0x000568, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ExprResult_57' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ExprResult_58) == 0x000578, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ExprResult_58' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _AsyncTaskClass_59) == 0x000588, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_AsyncTaskClass_59' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, InvokeResultDummy_60) == 0x000598, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::InvokeResultDummy_60' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ExprResultStack_61) == 0x0005A8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ExprResultStack_61' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ExprResult_62) == 0x0005C0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ExprResult_62' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ExprResult_63) == 0x0005D0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ExprResult_63' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _AsyncTaskClass_64) == 0x0005E0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_AsyncTaskClass_64' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, __verse_0x00000000__24) == 0x0005F0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::__verse_0x00000000__24' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _InvokeSureResultDummy_65) == 0x0005F8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_InvokeSureResultDummy_65' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _Callee_66) == 0x000600, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_Callee_66' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _InvokeSureResultDummy_67) == 0x000610, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_InvokeSureResultDummy_67' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _Callee_68) == 0x000618, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_Callee_68' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, _ExprResult_69) == 0x000628, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::_ExprResult_69' has a wrong offset!");

class Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R final : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*      _Self;
	FOptionProperty_                              __verse_0xB2CDDD72_Argument;
	EVerseTrue                                    _InvokeSureResultDummy_0;
	uint8                                         Pad_159[0x7];
	FVerseFunctionProperty_                       _Callee_1;
	FVerseStringProperty_                         _ExprResult_2;
	FOptionProperty_                              __verse_0x39C5E53E_ObstacleInfo_1;
	uint8                                         Pad_1A9[0x7];
	class UConcurrency_task*                      _AsyncTask_3;
	FVerseFunctionProperty_                       _AsyncTaskClass_4;
	struct CompanionAI::Ftuple_L_R                _ExprResult_5;
	uint8                                         Pad_1C9[0x7];
	int64                                         _AsyncResult_6;
	uint8                                         _AsyncBeginCount_7 : 1;
	uint8                                         BitPad_1D8_1 : 7;
	uint8                                         _AsyncBeginCount_8 : 1;
	uint8                                         Pad_1DA[0x6];
	struct FVerseAIBase_fort_obstacle_info        __verse_0x82A44C52_Obstacle_4;
	FOptionProperty_                              _ExprResultStack_9;
	uint8                                         Pad_231[0x7];
	class UVerseEngine_Entity_entity*             __verse_0xBD80729A_CurrentTarget_5;
	FOptionProperty_                              _ExprResultStack_10;
	FOptionProperty_                              _ExprResultStack_11;
	uint8                                         _ExprResultStack_12 : 1;
	uint8                                         Pad_24B[0x5];
	FVerseFunctionProperty_                       _Callee_13;
	struct Ftuple_Lfort__obstacle__info_Mentity_R _ExprResult_14;
	class UConcurrency_task*                      _AsyncTask_15;
	FVerseFunctionProperty_                       _AsyncTaskClass_16;
	int64                                         _AsyncResult_17;
	FVerseFunctionProperty_                       _AsyncTaskClass_18;
	class UObject*                                __verse_0x00000000__7;
	FVerseFunctionProperty_                       _AsyncTaskClass_19;
	FVerseFunctionProperty_                       _AsyncTaskClass_20;
	uint8                                         _AsyncBeginCount_21 : 1;
	uint8                                         Pad_2E9[0x7];
	FOptionProperty_                              _ExprResult_22;
	uint8                                         Pad_319[0x7];
	class UConcurrency_task*                      _AsyncTask_23;
	FVerseFunctionProperty_                       _AsyncTaskClass_24;
	struct CompanionAI::Ftuple_L_R                _ExprResult_25;
	uint8                                         Pad_339[0x7];
	int64                                         _AsyncResult_26;
	EVerseTrue                                    _InvokeSureResultDummy_27;
	uint8                                         Pad_349[0x7];
	FVerseFunctionProperty_                       _Callee_28;
	FVerseStringProperty_                         _ExprResult_29;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_companion_ai_runtime$HandleObstacleTask_L_N_Qentity_R">();
	}
	static class Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R>();
	}
};
static_assert(alignof(Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R) == 0x000008, "Wrong alignment on Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R");
static_assert(sizeof(Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R) == 0x000370, "Wrong size on Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R, _Self) == 0x000148, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R, _InvokeSureResultDummy_0) == 0x000158, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R::_InvokeSureResultDummy_0' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R, _Callee_1) == 0x000160, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R::_Callee_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R, _ExprResult_2) == 0x000170, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R, __verse_0x39C5E53E_ObstacleInfo_1) == 0x000180, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R::__verse_0x39C5E53E_ObstacleInfo_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R, _AsyncTask_3) == 0x0001B0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R::_AsyncTask_3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R, _AsyncTaskClass_4) == 0x0001B8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R::_AsyncTaskClass_4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R, _ExprResult_5) == 0x0001C8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R::_ExprResult_5' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R, _AsyncResult_6) == 0x0001D0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R::_AsyncResult_6' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R, __verse_0x82A44C52_Obstacle_4) == 0x0001E0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R::__verse_0x82A44C52_Obstacle_4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R, _ExprResultStack_9) == 0x000208, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R::_ExprResultStack_9' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R, __verse_0xBD80729A_CurrentTarget_5) == 0x000238, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R::__verse_0xBD80729A_CurrentTarget_5' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R, _ExprResultStack_10) == 0x000240, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R::_ExprResultStack_10' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R, _ExprResultStack_11) == 0x000248, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R::_ExprResultStack_11' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R, _Callee_13) == 0x000250, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R::_Callee_13' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R, _ExprResult_14) == 0x000260, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R::_ExprResult_14' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R, _AsyncTask_15) == 0x000290, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R::_AsyncTask_15' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R, _AsyncTaskClass_16) == 0x000298, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R::_AsyncTaskClass_16' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R, _AsyncResult_17) == 0x0002A8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R::_AsyncResult_17' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R, _AsyncTaskClass_18) == 0x0002B0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R::_AsyncTaskClass_18' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R, __verse_0x00000000__7) == 0x0002C0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R::__verse_0x00000000__7' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R, _AsyncTaskClass_19) == 0x0002C8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R::_AsyncTaskClass_19' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R, _AsyncTaskClass_20) == 0x0002D8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R::_AsyncTaskClass_20' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R, _ExprResult_22) == 0x0002F0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R::_ExprResult_22' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R, _AsyncTask_23) == 0x000320, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R::_AsyncTask_23' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R, _AsyncTaskClass_24) == 0x000328, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R::_AsyncTaskClass_24' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R, _ExprResult_25) == 0x000338, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R::_ExprResult_25' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R, _AsyncResult_26) == 0x000340, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R::_AsyncResult_26' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R, _InvokeSureResultDummy_27) == 0x000348, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R::_InvokeSureResultDummy_27' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R, _Callee_28) == 0x000350, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R::_Callee_28' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R, _ExprResult_29) == 0x000360, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R::_ExprResult_29' has a wrong offset!");

class Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R final : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*      _Self;
	struct FCompanionAI_ping_info                 __verse_0xB2CDDD72_Argument;
	EVerseTrue                                    _InvokeSureResultDummy_0;
	uint8                                         Pad_189[0x7];
	FVerseFunctionProperty_                       _Callee_1;
	FVerseStringProperty_                         _ExprResult_2;
	class USimulation_agent*                      __verse_0xFD64D7AA_Emitter_2;
	FOptionProperty_                              _ExprResultStack_3;
	uint8                                         __verse_0xC96E9091_HasRevivedEmitter_3 : 1;
	uint8                                         Pad_1C1[0x7];
	class UConcurrency_task*                      _AsyncTask_4;
	FVerseFunctionProperty_                       _AsyncTaskClass_5;
	int64                                         _AsyncResult_6;
	FOptionProperty_                              _ExprResultStack_7;
	uint8                                         Pad_1EA[0x6];
	TArray<class USimulation_agent*>              __verse_0xBFBCE682_TeamMembers_3;
	FVerseFunctionProperty_                       _Callee_8;
	struct CompanionAI::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R _ExprResult_9;
	struct CompanionAI::Ftuple_L_R                _ExprResult_10;
	struct CompanionAI::Ftuple_L_R                _ExprResult_11;
	uint8                                         Pad_222[0x6];
	int64                                         _ForIndex_12;
	int64                                         _ForLength_13;
	class USimulation_agent*                      __verse_0xAE35E375_TeamMember_8;
	uint8                                         __verse_0x87226150_HasRevivedTeamMember_10 : 1;
	uint8                                         Pad_241[0x7];
	FVerseFunctionProperty_                       _AsyncTaskClass_14;
	FOptionProperty_                              _ExprResultStack_15;
	uint8                                         Pad_25A[0x6];
	class UObject*                                __verse_0x00000000__13;
	EVerseTrue                                    _InvokeSureResultDummy_16;
	uint8                                         Pad_269[0x7];
	FVerseFunctionProperty_                       _Callee_17;
	EVerseTrue                                    _InvokeSureResultDummy_18;
	uint8                                         Pad_281[0x7];
	FVerseFunctionProperty_                       _Callee_19;
	FVerseStringProperty_                         _ExprResult_20;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_companion_ai_runtime$HandleReviveCommand_L_Nping__info_R">();
	}
	static class Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R>();
	}
};
static_assert(alignof(Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R) == 0x000008, "Wrong alignment on Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R");
static_assert(sizeof(Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R) == 0x0002A8, "Wrong size on Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R, _Self) == 0x000148, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R, _InvokeSureResultDummy_0) == 0x000188, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R::_InvokeSureResultDummy_0' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R, _Callee_1) == 0x000190, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R::_Callee_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R, _ExprResult_2) == 0x0001A0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R, __verse_0xFD64D7AA_Emitter_2) == 0x0001B0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R::__verse_0xFD64D7AA_Emitter_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R, _ExprResultStack_3) == 0x0001B8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R::_ExprResultStack_3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R, _AsyncTask_4) == 0x0001C8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R::_AsyncTask_4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R, _AsyncTaskClass_5) == 0x0001D0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R::_AsyncTaskClass_5' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R, _AsyncResult_6) == 0x0001E0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R::_AsyncResult_6' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R, _ExprResultStack_7) == 0x0001E8, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R::_ExprResultStack_7' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R, __verse_0xBFBCE682_TeamMembers_3) == 0x0001F0, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R::__verse_0xBFBCE682_TeamMembers_3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R, _Callee_8) == 0x000200, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R::_Callee_8' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R, _ExprResult_9) == 0x000210, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R::_ExprResult_9' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R, _ExprResult_10) == 0x000220, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R::_ExprResult_10' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R, _ExprResult_11) == 0x000221, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R::_ExprResult_11' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R, _ForIndex_12) == 0x000228, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R::_ForIndex_12' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R, _ForLength_13) == 0x000230, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R::_ForLength_13' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R, __verse_0xAE35E375_TeamMember_8) == 0x000238, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R::__verse_0xAE35E375_TeamMember_8' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R, _AsyncTaskClass_14) == 0x000248, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R::_AsyncTaskClass_14' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R, _ExprResultStack_15) == 0x000258, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R::_ExprResultStack_15' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R, __verse_0x00000000__13) == 0x000260, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R::__verse_0x00000000__13' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R, _InvokeSureResultDummy_16) == 0x000268, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R::_InvokeSureResultDummy_16' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R, _Callee_17) == 0x000270, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R::_Callee_17' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R, _InvokeSureResultDummy_18) == 0x000280, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R::_InvokeSureResultDummy_18' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R, _Callee_19) == 0x000288, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R::_Callee_19' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R, _ExprResult_20) == 0x000298, "Member 'Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R::_ExprResult_20' has a wrong offset!");

class Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget final : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*      _Self;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	EVerseTrue                                    _InvokeSureResultDummy_0;
	uint8                                         Pad_152[0x6];
	FVerseFunctionProperty_                       _Callee_1;
	FVerseStringProperty_                         _ExprResult_2;
	FOptionProperty_                              __verse_0x1EB80E5B_ThreatInfo_1;
	uint8                                         Pad_1A9[0x7];
	class UConcurrency_task*                      _AsyncTask_3;
	FVerseFunctionProperty_                       _AsyncTaskClass_4;
	struct CompanionAI::Ftuple_L_R                _ExprResult_5;
	uint8                                         Pad_1C9[0x7];
	int64                                         _AsyncResult_6;
	struct FVerseAIBase_fort_threat_info          __verse_0x26CBBAEB_CurrentThreatInfo_3;
	FOptionProperty_                              _ExprResultStack_7;
	uint8                                         _AsyncBeginCount_8 : 1;
	uint8                                         BitPad_239_1 : 7;
	uint8                                         _AsyncBeginCount_9 : 1;
	uint8                                         Pad_23B[0x5];
	FOptionProperty_                              _ExprResult_10;
	uint8                                         Pad_271[0x7];
	class UConcurrency_task*                      _AsyncTask_11;
	FVerseFunctionProperty_                       _AsyncTaskClass_12;
	struct CompanionAI::Ftuple_L_R                _ExprResult_13;
	uint8                                         Pad_291[0x7];
	int64                                         _AsyncResult_14;
	uint8                                         _AsyncBeginCount_15 : 1;
	uint8                                         Pad_2A1[0x7];
	FOptionProperty_                              _ExprResult_16;
	uint8                                         Pad_2D9[0x7];
	class UConcurrency_task*                      _AsyncTask_17;
	FVerseFunctionProperty_                       _AsyncTaskClass_18;
	struct CompanionAI::Ftuple_L_R                _ExprResult_19;
	uint8                                         Pad_2F9[0x7];
	int64                                         _AsyncResult_20;
	uint8                                         _AsyncBeginCount_21 : 1;
	FOptionProperty_                              _ExprResultStack_22;
	FOptionProperty_                              _ExprResultStack_23;
	uint8                                         Pad_30D[0x3];
	class UConcurrency_task*                      _AsyncTask_24;
	FVerseFunctionProperty_                       _AsyncTaskClass_25;
	int64                                         _AsyncResult_26;
	uint8                                         _AsyncBeginCount_27 : 1;
	uint8                                         BitPad_330_1 : 7;
	uint8                                         _AsyncBeginCount_28 : 1;
	uint8                                         Pad_332[0x6];
	class UConcurrency_task*                      _AsyncTask_29;
	FVerseFunctionProperty_                       _AsyncTaskClass_30;
	struct CompanionAI::Ftuple_L_R                _ExprResult_31;
	uint8                                         Pad_351[0x7];
	int64                                         _AsyncResult_32;
	uint8                                         _AsyncBeginCount_33 : 1;
	uint8                                         Pad_361[0x7];
	class UObject*                                __verse_0x00000000__7;
	class UConcurrency_task*                      _AsyncTask_34;
	FVerseFunctionProperty_                       _AsyncTaskClass_35;
	struct FSpatialMath_vector3                   _ExprResultStack_36;
	FVerseFunctionProperty_                       _Callee_37;
	int64                                         _AsyncResult_38;
	EVerseTrue                                    _InvokeSureResultDummy_39;
	uint8                                         Pad_3B9[0x7];
	FVerseFunctionProperty_                       _Callee_40;
	FVerseStringProperty_                         _ExprResult_41;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_companion_ai_runtime$LookAtOrAttackTarget">();
	}
	static class Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget>();
	}
};
static_assert(alignof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget) == 0x000008, "Wrong alignment on Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget");
static_assert(sizeof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget) == 0x0003E0, "Wrong size on Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, _Self) == 0x000148, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, _InvokeSureResultDummy_0) == 0x000151, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::_InvokeSureResultDummy_0' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, _Callee_1) == 0x000158, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::_Callee_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, _ExprResult_2) == 0x000168, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, __verse_0x1EB80E5B_ThreatInfo_1) == 0x000178, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::__verse_0x1EB80E5B_ThreatInfo_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, _AsyncTask_3) == 0x0001B0, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::_AsyncTask_3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, _AsyncTaskClass_4) == 0x0001B8, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::_AsyncTaskClass_4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, _ExprResult_5) == 0x0001C8, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::_ExprResult_5' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, _AsyncResult_6) == 0x0001D0, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::_AsyncResult_6' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, __verse_0x26CBBAEB_CurrentThreatInfo_3) == 0x0001D8, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::__verse_0x26CBBAEB_CurrentThreatInfo_3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, _ExprResultStack_7) == 0x000208, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::_ExprResultStack_7' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, _ExprResult_10) == 0x000240, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::_ExprResult_10' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, _AsyncTask_11) == 0x000278, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::_AsyncTask_11' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, _AsyncTaskClass_12) == 0x000280, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::_AsyncTaskClass_12' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, _ExprResult_13) == 0x000290, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::_ExprResult_13' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, _AsyncResult_14) == 0x000298, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::_AsyncResult_14' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, _ExprResult_16) == 0x0002A8, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::_ExprResult_16' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, _AsyncTask_17) == 0x0002E0, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::_AsyncTask_17' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, _AsyncTaskClass_18) == 0x0002E8, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::_AsyncTaskClass_18' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, _ExprResult_19) == 0x0002F8, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::_ExprResult_19' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, _AsyncResult_20) == 0x000300, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::_AsyncResult_20' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, _ExprResultStack_22) == 0x000309, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::_ExprResultStack_22' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, _ExprResultStack_23) == 0x00030B, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::_ExprResultStack_23' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, _AsyncTask_24) == 0x000310, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::_AsyncTask_24' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, _AsyncTaskClass_25) == 0x000318, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::_AsyncTaskClass_25' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, _AsyncResult_26) == 0x000328, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::_AsyncResult_26' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, _AsyncTask_29) == 0x000338, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::_AsyncTask_29' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, _AsyncTaskClass_30) == 0x000340, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::_AsyncTaskClass_30' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, _ExprResult_31) == 0x000350, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::_ExprResult_31' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, _AsyncResult_32) == 0x000358, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::_AsyncResult_32' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, __verse_0x00000000__7) == 0x000368, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::__verse_0x00000000__7' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, _AsyncTask_34) == 0x000370, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::_AsyncTask_34' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, _AsyncTaskClass_35) == 0x000378, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::_AsyncTaskClass_35' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, _ExprResultStack_36) == 0x000388, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::_ExprResultStack_36' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, _Callee_37) == 0x0003A0, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::_Callee_37' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, _AsyncResult_38) == 0x0003B0, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::_AsyncResult_38' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, _InvokeSureResultDummy_39) == 0x0003B8, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::_InvokeSureResultDummy_39' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, _Callee_40) == 0x0003C0, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::_Callee_40' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, _ExprResult_41) == 0x0003D0, "Member 'Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::_ExprResult_41' has a wrong offset!");

class Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R final : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*      _Self;
	class USimulation_agent*                      __verse_0xB2CDDD72_Argument;
	uint8                                         _RetVal : 1;
	EVerseTrue                                    _InvokeSureResultDummy_0;
	uint8                                         Pad_15A[0x6];
	FVerseFunctionProperty_                       _Callee_1;
	FVerseStringProperty_                         _ExprResult_2;
	class UObject*                                __verse_0x00000000__3;
	FOptionProperty_                              _ExprResultStack_3;
	FVerseFunctionProperty_                       _Callee_4;
	struct CompanionAI::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R _ExprResult_5;
	struct CompanionAI::Ftuple_L_R                _ExprResult_6;
	struct CompanionAI::Ftuple_L_R                _ExprResult_7;
	FOptionProperty_                              _ExprResultStack_8;
	uint8                                         Pad_1B4[0x4];
	FVerseFunctionProperty_                       _Callee_9;
	struct CompanionAI::Ftuple_L_R                _ExprResult_10;
	FOptionProperty_                              _ExprResultStack_11;
	uint8                                         Pad_1CB[0x5];
	FVerseFunctionProperty_                       _Callee_12;
	struct CompanionAI::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_13;
	FOptionProperty_                              _ExprResultStack_14;
	FVerseFunctionProperty_                       _Callee_15;
	struct CompanionAI::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R _ExprResult_16;
	struct CompanionAI::Ftuple_L_R                _ExprResult_17;
	struct CompanionAI::Ftuple_L_R                _ExprResult_18;
	struct CompanionAI::Ftuple_L_R                _ExprResult_19;
	struct CompanionAI::Ftuple_L_R                _ExprResult_20;
	uint8                                         _AsyncBeginCount_21 : 1;
	uint8                                         Pad_21D[0x3];
	class UConcurrency_task*                      _AsyncTask_22;
	FVerseFunctionProperty_                       _AsyncTaskClass_23;
	struct CompanionAI::Ftuple_L_R                _ExprResult_24;
	uint8                                         Pad_239[0x7];
	int64                                         _AsyncResult_25;
	uint8                                         _AsyncBeginCount_26 : 1;
	uint8                                         BitPad_248_1 : 7;
	uint8                                         _AsyncBeginCount_27 : 1;
	uint8                                         Pad_24A[0x6];
	class UConcurrency_task*                      _AsyncTask_28;
	FVerseFunctionProperty_                       _AsyncTaskClass_29;
	int64                                         _AsyncResult_30;
	class UObject*                                __verse_0x00000000__6;
	FOptionProperty_                              _ExprResultStack_31;
	FVerseFunctionProperty_                       _Callee_32;
	struct CompanionAI::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R _ExprResult_33;
	struct CompanionAI::Ftuple_L_R                _ExprResult_34;
	struct CompanionAI::Ftuple_L_R                _ExprResult_35;
	FOptionProperty_                              _ExprResultStack_36;
	uint8                                         Pad_2A4[0x4];
	FVerseFunctionProperty_                       _Callee_37;
	struct CompanionAI::Ftuple_L_R                _ExprResult_38;
	FOptionProperty_                              _ExprResultStack_39;
	uint8                                         Pad_2BB[0x5];
	FVerseFunctionProperty_                       _Callee_40;
	struct CompanionAI::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_41;
	FOptionProperty_                              _ExprResultStack_42;
	FVerseFunctionProperty_                       _Callee_43;
	struct CompanionAI::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R _ExprResult_44;
	struct CompanionAI::Ftuple_L_R                _ExprResult_45;
	struct CompanionAI::Ftuple_L_R                _ExprResult_46;
	struct CompanionAI::Ftuple_L_R                _ExprResult_47;
	struct CompanionAI::Ftuple_L_R                _ExprResult_48;
	uint8                                         _AsyncBeginCount_49 : 1;
	uint8                                         BitPad_30C_1 : 7;
	uint8                                         __verse_0x7EBDC403_HasReachedPosition_8 : 1;
	uint8                                         Pad_30E[0x2];
	class UConcurrency_task*                      _AsyncTask_50;
	FVerseFunctionProperty_                       _AsyncTaskClass_51;
	struct Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b5_2e000000e_2b01_7d_M_QAllowPartialPath_Nlogic_R _ExprResult_52;
	struct FSpatialMath_vector3                   _ExprResult_53;
	FOptionProperty_                              _ExprResult_54;
	uint8                                         __verse_0x19F8ABA1_Sprint_8 : 1;
	uint8                                         Pad_381[0x7];
	FOptionProperty_                              _ExprResult_55;
	FOptionProperty_                              _ExprResult_56;
	uint8                                         Pad_393[0x5];
	int64                                         _AsyncResult_57;
	FOptionProperty_                              _ExprResultStack_58;
	EVerseAIBase_action_result                    __verse_0x40FB4916_ReviveResult_8;
	uint8                                         Pad_3A3[0x5];
	class UObject*                                __verse_0x00000000__11;
	FVerseFunctionProperty_                       _AsyncTaskClass_59;
	FVerseDynamicProperty_                        InvokeResultDummy_60;
	FOptionProperty_                              _ExprResultStack_61;
	uint8                                         Pad_3E1[0x7];
	FVerseDynamicProperty_                        _ExprResult_62;
	FVerseDynamicProperty_                        _ExprResult_63;
	EVerseTrue                                    _InvokeSureResultDummy_64;
	uint8                                         Pad_409[0x7];
	FVerseFunctionProperty_                       _Callee_65;
	FVerseStringProperty_                         _ExprResult_66;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_companion_ai_runtime$ReviveCommand_L_Nagent_R">();
	}
	static class Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R>();
	}
};
static_assert(alignof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R) == 0x000008, "Wrong alignment on Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R");
static_assert(sizeof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R) == 0x000430, "Wrong size on Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _Self) == 0x000148, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _InvokeSureResultDummy_0) == 0x000159, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_InvokeSureResultDummy_0' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _Callee_1) == 0x000160, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_Callee_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResult_2) == 0x000170, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, __verse_0x00000000__3) == 0x000180, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::__verse_0x00000000__3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResultStack_3) == 0x000188, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResultStack_3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _Callee_4) == 0x000190, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_Callee_4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResult_5) == 0x0001A0, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResult_5' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResult_6) == 0x0001B0, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResult_6' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResult_7) == 0x0001B1, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResult_7' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResultStack_8) == 0x0001B2, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResultStack_8' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _Callee_9) == 0x0001B8, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_Callee_9' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResult_10) == 0x0001C8, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResult_10' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResultStack_11) == 0x0001C9, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResultStack_11' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _Callee_12) == 0x0001D0, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_Callee_12' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResult_13) == 0x0001E0, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResult_13' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResultStack_14) == 0x0001F0, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResultStack_14' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _Callee_15) == 0x0001F8, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_Callee_15' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResult_16) == 0x000208, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResult_16' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResult_17) == 0x000218, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResult_17' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResult_18) == 0x000219, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResult_18' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResult_19) == 0x00021A, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResult_19' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResult_20) == 0x00021B, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResult_20' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _AsyncTask_22) == 0x000220, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_AsyncTask_22' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _AsyncTaskClass_23) == 0x000228, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_AsyncTaskClass_23' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResult_24) == 0x000238, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResult_24' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _AsyncResult_25) == 0x000240, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_AsyncResult_25' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _AsyncTask_28) == 0x000250, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_AsyncTask_28' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _AsyncTaskClass_29) == 0x000258, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_AsyncTaskClass_29' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _AsyncResult_30) == 0x000268, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_AsyncResult_30' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, __verse_0x00000000__6) == 0x000270, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::__verse_0x00000000__6' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResultStack_31) == 0x000278, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResultStack_31' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _Callee_32) == 0x000280, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_Callee_32' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResult_33) == 0x000290, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResult_33' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResult_34) == 0x0002A0, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResult_34' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResult_35) == 0x0002A1, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResult_35' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResultStack_36) == 0x0002A2, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResultStack_36' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _Callee_37) == 0x0002A8, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_Callee_37' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResult_38) == 0x0002B8, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResult_38' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResultStack_39) == 0x0002B9, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResultStack_39' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _Callee_40) == 0x0002C0, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_Callee_40' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResult_41) == 0x0002D0, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResult_41' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResultStack_42) == 0x0002E0, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResultStack_42' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _Callee_43) == 0x0002E8, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_Callee_43' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResult_44) == 0x0002F8, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResult_44' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResult_45) == 0x000308, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResult_45' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResult_46) == 0x000309, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResult_46' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResult_47) == 0x00030A, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResult_47' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResult_48) == 0x00030B, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResult_48' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _AsyncTask_50) == 0x000310, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_AsyncTask_50' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _AsyncTaskClass_51) == 0x000318, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_AsyncTaskClass_51' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResult_52) == 0x000328, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResult_52' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResult_53) == 0x000360, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResult_53' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResult_54) == 0x000378, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResult_54' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResult_55) == 0x000388, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResult_55' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResult_56) == 0x000391, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResult_56' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _AsyncResult_57) == 0x000398, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_AsyncResult_57' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResultStack_58) == 0x0003A0, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResultStack_58' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, __verse_0x40FB4916_ReviveResult_8) == 0x0003A2, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::__verse_0x40FB4916_ReviveResult_8' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, __verse_0x00000000__11) == 0x0003A8, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::__verse_0x00000000__11' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _AsyncTaskClass_59) == 0x0003B0, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_AsyncTaskClass_59' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, InvokeResultDummy_60) == 0x0003C0, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::InvokeResultDummy_60' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResultStack_61) == 0x0003D0, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResultStack_61' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResult_62) == 0x0003E8, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResult_62' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResult_63) == 0x0003F8, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResult_63' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _InvokeSureResultDummy_64) == 0x000408, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_InvokeSureResultDummy_64' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _Callee_65) == 0x000410, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_Callee_65' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, _ExprResult_66) == 0x000420, "Member 'Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::_ExprResult_66' has a wrong offset!");

class Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R final : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*      _Self;
	double                                        __verse_0xB2CDDD72_Argument;
	EVerseTrue                                    _InvokeSureResultDummy_0;
	uint8                                         Pad_159[0x7];
	FVerseFunctionProperty_                       _Callee_1;
	FVerseStringProperty_                         _ExprResult_2;
	class UConcurrency_task*                      _AsyncTask_3;
	FVerseFunctionProperty_                       _AsyncTaskClass_4;
	int64                                         _AsyncResult_5;
	struct FVerseAIBase_fort_threat_info          __verse_0x1EB80E5B_ThreatInfo_3;
	class UObject*                                __verse_0x00000000__4;
	FOptionProperty_                              _ExprResultStack_6;
	uint8                                         Pad_209[0x7];
	FVerseFunctionProperty_                       _Callee_7;
	struct CompanionAI::Ftuple_L_R                _ExprResult_8;
	uint8                                         _AsyncBeginCount_9 : 1;
	uint8                                         BitPad_221_1 : 7;
	uint8                                         _AsyncBeginCount_10 : 1;
	uint8                                         Pad_223[0x5];
	class UConcurrency_task*                      _AsyncTask_11;
	FVerseFunctionProperty_                       _AsyncTaskClass_12;
	struct CompanionAI::Ftuple_L_R                _ExprResult_13;
	uint8                                         Pad_241[0x7];
	int64                                         _AsyncResult_14;
	uint8                                         _AsyncBeginCount_15 : 1;
	uint8                                         Pad_251[0x7];
	class UConcurrency_task*                      _AsyncTask_16;
	FVerseFunctionProperty_                       _AsyncTaskClass_17;
	struct CompanionAI::Ftuple_L_R                _ExprResult_18;
	uint8                                         Pad_271[0x7];
	int64                                         _AsyncResult_19;
	uint8                                         _AsyncBeginCount_20 : 1;
	FOptionProperty_                              _ExprResultStack_21;
	FOptionProperty_                              _ExprResultStack_22;
	EVerseTrue                                    _InvokeSureResultDummy_23;
	uint8                                         Pad_286[0x2];
	FVerseFunctionProperty_                       _Callee_24;
	FVerseStringProperty_                         _ExprResult_25;
	FOptionProperty_                              _ExprResultStack_26;
	uint8                                         Pad_2B1[0x7];
	double                                        _ExprResultStack_27;
	FVerseFunctionProperty_                       _Callee_28;
	struct CompanionAI::Ftuple_Lvector3_Mvector3_R _ExprResult_29;
	struct FSpatialMath_vector3                   _ExprResultStack_30;
	FVerseFunctionProperty_                       _Callee_31;
	uint8                                         Pad_328[0x8];
	struct FSpatialMath_transform                 _ExprResult_32;
	class UObject*                                __verse_0x00000000__9;
	FVerseFunctionProperty_                       _Callee_33;
	struct CompanionAI::Ftuple_L_R                _ExprResult_34;
	EVerseAIBase_action_result                    __verse_0x95D09D0E_Result_8;
	uint8                                         Pad_3AA[0x6];
	class UObject*                                __verse_0x00000000__10;
	class UConcurrency_task*                      _AsyncTask_35;
	FVerseFunctionProperty_                       _AsyncTaskClass_36;
	int64                                         _AsyncResult_37;
	FVerseDynamicProperty_                        InvokeResultDummy_38;
	FOptionProperty_                              _ExprResultStack_39;
	uint8                                         Pad_3F9[0x7];
	FVerseDynamicProperty_                        _ExprResult_40;
	FVerseDynamicProperty_                        _ExprResult_41;
	FVerseFunctionProperty_                       _AsyncTaskClass_42;
	FVerseFunctionProperty_                       _AsyncTaskClass_43;
	FVerseFunctionProperty_                       _AsyncTaskClass_44;
	FVerseFunctionProperty_                       _AsyncTaskClass_45;
	FVerseFunctionProperty_                       _AsyncTaskClass_46;
	struct CompanionAI::Ftuple_L_R                _ExprResult_47;
	EVerseTrue                                    _InvokeSureResultDummy_48;
	uint8                                         Pad_472[0x6];
	FVerseFunctionProperty_                       _Callee_49;
	FVerseStringProperty_                         _ExprResult_50;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_companion_ai_runtime$ShootTargetService_L_Nfloat_R">();
	}
	static class Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R>();
	}
};
static_assert(alignof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R) == 0x000010, "Wrong alignment on Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R");
static_assert(sizeof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R) == 0x0004A0, "Wrong size on Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _Self) == 0x000148, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _InvokeSureResultDummy_0) == 0x000158, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_InvokeSureResultDummy_0' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _Callee_1) == 0x000160, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_Callee_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _ExprResult_2) == 0x000170, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _AsyncTask_3) == 0x000180, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_AsyncTask_3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _AsyncTaskClass_4) == 0x000188, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_AsyncTaskClass_4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _AsyncResult_5) == 0x000198, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_AsyncResult_5' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, __verse_0x1EB80E5B_ThreatInfo_3) == 0x0001A0, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::__verse_0x1EB80E5B_ThreatInfo_3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, __verse_0x00000000__4) == 0x0001D0, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::__verse_0x00000000__4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _ExprResultStack_6) == 0x0001D8, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_ExprResultStack_6' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _Callee_7) == 0x000210, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_Callee_7' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _ExprResult_8) == 0x000220, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_ExprResult_8' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _AsyncTask_11) == 0x000228, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_AsyncTask_11' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _AsyncTaskClass_12) == 0x000230, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_AsyncTaskClass_12' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _ExprResult_13) == 0x000240, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_ExprResult_13' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _AsyncResult_14) == 0x000248, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_AsyncResult_14' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _AsyncTask_16) == 0x000258, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_AsyncTask_16' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _AsyncTaskClass_17) == 0x000260, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_AsyncTaskClass_17' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _ExprResult_18) == 0x000270, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_ExprResult_18' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _AsyncResult_19) == 0x000278, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_AsyncResult_19' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _ExprResultStack_21) == 0x000281, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_ExprResultStack_21' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _ExprResultStack_22) == 0x000283, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_ExprResultStack_22' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _InvokeSureResultDummy_23) == 0x000285, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_InvokeSureResultDummy_23' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _Callee_24) == 0x000288, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_Callee_24' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _ExprResult_25) == 0x000298, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_ExprResult_25' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _ExprResultStack_26) == 0x0002A8, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_ExprResultStack_26' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _ExprResultStack_27) == 0x0002B8, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_ExprResultStack_27' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _Callee_28) == 0x0002C0, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_Callee_28' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _ExprResult_29) == 0x0002D0, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_ExprResult_29' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _ExprResultStack_30) == 0x000300, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_ExprResultStack_30' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _Callee_31) == 0x000318, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_Callee_31' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _ExprResult_32) == 0x000330, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_ExprResult_32' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, __verse_0x00000000__9) == 0x000390, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::__verse_0x00000000__9' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _Callee_33) == 0x000398, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_Callee_33' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _ExprResult_34) == 0x0003A8, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_ExprResult_34' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, __verse_0x95D09D0E_Result_8) == 0x0003A9, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::__verse_0x95D09D0E_Result_8' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, __verse_0x00000000__10) == 0x0003B0, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::__verse_0x00000000__10' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _AsyncTask_35) == 0x0003B8, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_AsyncTask_35' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _AsyncTaskClass_36) == 0x0003C0, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_AsyncTaskClass_36' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _AsyncResult_37) == 0x0003D0, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_AsyncResult_37' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, InvokeResultDummy_38) == 0x0003D8, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::InvokeResultDummy_38' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _ExprResultStack_39) == 0x0003E8, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_ExprResultStack_39' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _ExprResult_40) == 0x000400, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_ExprResult_40' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _ExprResult_41) == 0x000410, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_ExprResult_41' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _AsyncTaskClass_42) == 0x000420, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_AsyncTaskClass_42' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _AsyncTaskClass_43) == 0x000430, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_AsyncTaskClass_43' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _AsyncTaskClass_44) == 0x000440, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_AsyncTaskClass_44' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _AsyncTaskClass_45) == 0x000450, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_AsyncTaskClass_45' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _AsyncTaskClass_46) == 0x000460, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_AsyncTaskClass_46' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _ExprResult_47) == 0x000470, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_ExprResult_47' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _InvokeSureResultDummy_48) == 0x000471, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_InvokeSureResultDummy_48' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _Callee_49) == 0x000478, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_Callee_49' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, _ExprResult_50) == 0x000488, "Member 'Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::_ExprResult_50' has a wrong offset!");

class Utask_CompanionAI_companion_ai_runtime_SprintService final : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*      _Self;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_151[0x7];
	class UObject*                                __verse_0x00000000__2;
	class UConcurrency_task*                      _AsyncTask_0;
	FVerseFunctionProperty_                       _AsyncTaskClass_1;
	struct CompanionAI::Ftuple_L_R                _ExprResult_2;
	uint8                                         Pad_179[0x7];
	int64                                         _AsyncResult_3;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_companion_ai_runtime$SprintService">();
	}
	static class Utask_CompanionAI_companion_ai_runtime_SprintService* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_companion_ai_runtime_SprintService>();
	}
};
static_assert(alignof(Utask_CompanionAI_companion_ai_runtime_SprintService) == 0x000008, "Wrong alignment on Utask_CompanionAI_companion_ai_runtime_SprintService");
static_assert(sizeof(Utask_CompanionAI_companion_ai_runtime_SprintService) == 0x000188, "Wrong size on Utask_CompanionAI_companion_ai_runtime_SprintService");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SprintService, _Self) == 0x000148, "Member 'Utask_CompanionAI_companion_ai_runtime_SprintService::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SprintService, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_companion_ai_runtime_SprintService::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SprintService, __verse_0x00000000__2) == 0x000158, "Member 'Utask_CompanionAI_companion_ai_runtime_SprintService::__verse_0x00000000__2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SprintService, _AsyncTask_0) == 0x000160, "Member 'Utask_CompanionAI_companion_ai_runtime_SprintService::_AsyncTask_0' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SprintService, _AsyncTaskClass_1) == 0x000168, "Member 'Utask_CompanionAI_companion_ai_runtime_SprintService::_AsyncTaskClass_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SprintService, _ExprResult_2) == 0x000178, "Member 'Utask_CompanionAI_companion_ai_runtime_SprintService::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_SprintService, _AsyncResult_3) == 0x000180, "Member 'Utask_CompanionAI_companion_ai_runtime_SprintService::_AsyncResult_3' has a wrong offset!");

class Utask_CompanionAI_companion_ai_runtime_TacticalSprintService final : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*      _Self;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_151[0x7];
	class UObject*                                __verse_0x00000000__2;
	class UConcurrency_task*                      _AsyncTask_0;
	FVerseFunctionProperty_                       _AsyncTaskClass_1;
	struct CompanionAI::Ftuple_L_R                _ExprResult_2;
	uint8                                         Pad_179[0x7];
	int64                                         _AsyncResult_3;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_companion_ai_runtime$TacticalSprintService">();
	}
	static class Utask_CompanionAI_companion_ai_runtime_TacticalSprintService* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_companion_ai_runtime_TacticalSprintService>();
	}
};
static_assert(alignof(Utask_CompanionAI_companion_ai_runtime_TacticalSprintService) == 0x000008, "Wrong alignment on Utask_CompanionAI_companion_ai_runtime_TacticalSprintService");
static_assert(sizeof(Utask_CompanionAI_companion_ai_runtime_TacticalSprintService) == 0x000188, "Wrong size on Utask_CompanionAI_companion_ai_runtime_TacticalSprintService");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_TacticalSprintService, _Self) == 0x000148, "Member 'Utask_CompanionAI_companion_ai_runtime_TacticalSprintService::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_TacticalSprintService, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_companion_ai_runtime_TacticalSprintService::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_TacticalSprintService, __verse_0x00000000__2) == 0x000158, "Member 'Utask_CompanionAI_companion_ai_runtime_TacticalSprintService::__verse_0x00000000__2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_TacticalSprintService, _AsyncTask_0) == 0x000160, "Member 'Utask_CompanionAI_companion_ai_runtime_TacticalSprintService::_AsyncTask_0' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_TacticalSprintService, _AsyncTaskClass_1) == 0x000168, "Member 'Utask_CompanionAI_companion_ai_runtime_TacticalSprintService::_AsyncTaskClass_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_TacticalSprintService, _ExprResult_2) == 0x000178, "Member 'Utask_CompanionAI_companion_ai_runtime_TacticalSprintService::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_TacticalSprintService, _AsyncResult_3) == 0x000180, "Member 'Utask_CompanionAI_companion_ai_runtime_TacticalSprintService::_AsyncResult_3' has a wrong offset!");

class Utask_CompanionAI_companion_ai_runtime_WaitForDamage final : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*      _Self;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	EVerseTrue                                    _InvokeSureResultDummy_0;
	uint8                                         Pad_152[0x6];
	FVerseFunctionProperty_                       _Callee_1;
	FVerseStringProperty_                         _ExprResult_2;
	uint8                                         _AsyncBeginCount_3 : 1;
	uint8                                         BitPad_178_1 : 7;
	uint8                                         _AsyncBeginCount_4 : 1;
	uint8                                         Pad_17A[0x6];
	class UObject*                                __verse_0x00000000__2;
	class UObject*                                __verse_0x00000000__3;
	FVerseFunctionProperty_                       _Callee_5;
	struct CompanionAI::Ftuple_L_R                _ExprResult_6;
	uint8                                         Pad_1A1[0x7];
	class UConcurrency_task*                      _AsyncTask_7;
	FVerseFunctionProperty_                       _AsyncTaskClass_8;
	struct CompanionAI::Ftuple_L_R                _ExprResult_9;
	uint8                                         Pad_1C1[0x7];
	int64                                         _AsyncResult_10;
	uint8                                         _AsyncBeginCount_11 : 1;
	uint8                                         Pad_1D1[0x7];
	class UObject*                                __verse_0x00000000__4;
	class UObject*                                __verse_0x00000000__5;
	FVerseFunctionProperty_                       _Callee_12;
	struct CompanionAI::Ftuple_L_R                _ExprResult_13;
	uint8                                         Pad_1F9[0x7];
	class UConcurrency_task*                      _AsyncTask_14;
	FVerseFunctionProperty_                       _AsyncTaskClass_15;
	struct CompanionAI::Ftuple_L_R                _ExprResult_16;
	uint8                                         Pad_219[0x7];
	int64                                         _AsyncResult_17;
	EVerseTrue                                    _InvokeSureResultDummy_18;
	uint8                                         Pad_229[0x7];
	FVerseFunctionProperty_                       _Callee_19;
	FVerseStringProperty_                         _ExprResult_20;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_companion_ai_runtime$WaitForDamage">();
	}
	static class Utask_CompanionAI_companion_ai_runtime_WaitForDamage* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_companion_ai_runtime_WaitForDamage>();
	}
};
static_assert(alignof(Utask_CompanionAI_companion_ai_runtime_WaitForDamage) == 0x000008, "Wrong alignment on Utask_CompanionAI_companion_ai_runtime_WaitForDamage");
static_assert(sizeof(Utask_CompanionAI_companion_ai_runtime_WaitForDamage) == 0x000250, "Wrong size on Utask_CompanionAI_companion_ai_runtime_WaitForDamage");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForDamage, _Self) == 0x000148, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForDamage::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForDamage, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForDamage::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForDamage, _InvokeSureResultDummy_0) == 0x000151, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForDamage::_InvokeSureResultDummy_0' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForDamage, _Callee_1) == 0x000158, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForDamage::_Callee_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForDamage, _ExprResult_2) == 0x000168, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForDamage::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForDamage, __verse_0x00000000__2) == 0x000180, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForDamage::__verse_0x00000000__2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForDamage, __verse_0x00000000__3) == 0x000188, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForDamage::__verse_0x00000000__3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForDamage, _Callee_5) == 0x000190, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForDamage::_Callee_5' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForDamage, _ExprResult_6) == 0x0001A0, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForDamage::_ExprResult_6' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForDamage, _AsyncTask_7) == 0x0001A8, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForDamage::_AsyncTask_7' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForDamage, _AsyncTaskClass_8) == 0x0001B0, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForDamage::_AsyncTaskClass_8' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForDamage, _ExprResult_9) == 0x0001C0, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForDamage::_ExprResult_9' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForDamage, _AsyncResult_10) == 0x0001C8, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForDamage::_AsyncResult_10' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForDamage, __verse_0x00000000__4) == 0x0001D8, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForDamage::__verse_0x00000000__4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForDamage, __verse_0x00000000__5) == 0x0001E0, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForDamage::__verse_0x00000000__5' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForDamage, _Callee_12) == 0x0001E8, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForDamage::_Callee_12' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForDamage, _ExprResult_13) == 0x0001F8, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForDamage::_ExprResult_13' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForDamage, _AsyncTask_14) == 0x000200, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForDamage::_AsyncTask_14' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForDamage, _AsyncTaskClass_15) == 0x000208, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForDamage::_AsyncTaskClass_15' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForDamage, _ExprResult_16) == 0x000218, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForDamage::_ExprResult_16' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForDamage, _AsyncResult_17) == 0x000220, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForDamage::_AsyncResult_17' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForDamage, _InvokeSureResultDummy_18) == 0x000228, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForDamage::_InvokeSureResultDummy_18' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForDamage, _Callee_19) == 0x000230, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForDamage::_Callee_19' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForDamage, _ExprResult_20) == 0x000240, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForDamage::_ExprResult_20' has a wrong offset!");

class Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R final : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*      _Self;
	class UObject*                                __verse_0xB2CDDD72_Argument;
	EVerseTrue                                    _InvokeSureResultDummy_0;
	uint8                                         Pad_159[0x7];
	FVerseFunctionProperty_                       _Callee_1;
	FVerseStringProperty_                         _ExprResult_2;
	class UObject*                                __verse_0x4BB95041_Vehicle_3;
	FOptionProperty_                              _ExprResultStack_3;
	FVerseFunctionProperty_                       _Callee_4;
	struct CompanionAI::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R _ExprResult_5;
	struct CompanionAI::Ftuple_L_R                _ExprResult_6;
	struct CompanionAI::Ftuple_L_R                _ExprResult_7;
	uint8                                         Pad_1B2[0x6];
	class UConcurrency_task*                      _AsyncTask_8;
	FVerseFunctionProperty_                       _AsyncTaskClass_9;
	int64                                         _AsyncResult_10;
	EVerseTrue                                    _InvokeSureResultDummy_11;
	uint8                                         Pad_1D9[0x7];
	FVerseFunctionProperty_                       _Callee_12;
	FVerseStringProperty_                         _ExprResult_13;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_companion_ai_runtime$WaitForTargetInVehicle_L_Nfort__character_R">();
	}
	static class Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R>();
	}
};
static_assert(alignof(Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R) == 0x000008, "Wrong alignment on Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R");
static_assert(sizeof(Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R) == 0x000200, "Wrong size on Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R, _Self) == 0x000148, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R, _InvokeSureResultDummy_0) == 0x000158, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R::_InvokeSureResultDummy_0' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R, _Callee_1) == 0x000160, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R::_Callee_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R, _ExprResult_2) == 0x000170, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R, __verse_0x4BB95041_Vehicle_3) == 0x000180, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R::__verse_0x4BB95041_Vehicle_3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R, _ExprResultStack_3) == 0x000188, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R::_ExprResultStack_3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R, _Callee_4) == 0x000190, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R::_Callee_4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R, _ExprResult_5) == 0x0001A0, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R::_ExprResult_5' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R, _ExprResult_6) == 0x0001B0, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R::_ExprResult_6' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R, _ExprResult_7) == 0x0001B1, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R::_ExprResult_7' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R, _AsyncTask_8) == 0x0001B8, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R::_AsyncTask_8' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R, _AsyncTaskClass_9) == 0x0001C0, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R::_AsyncTaskClass_9' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R, _AsyncResult_10) == 0x0001D0, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R::_AsyncResult_10' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R, _InvokeSureResultDummy_11) == 0x0001D8, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R::_InvokeSureResultDummy_11' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R, _Callee_12) == 0x0001E0, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R::_Callee_12' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R, _ExprResult_13) == 0x0001F0, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R::_ExprResult_13' has a wrong offset!");

class Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R final : public UConcurrency_task
{
public:
	class UCompanionAI_companion_ai_runtime*      _Self;
	struct Ftuple_Lfort__character_Mfloat_R       __verse_0xB2CDDD72_Argument;
	struct FSpatialMath_vector3                   __verse_0x455F599A_ReferencePosition_1;
	uint8                                         Pad_178[0x8];
	struct FSpatialMath_transform                 _ExprResult_0;
	class UObject*                                __verse_0x00000000__2;
	FVerseFunctionProperty_                       _Callee_1;
	struct CompanionAI::Ftuple_L_R                _ExprResult_2;
	uint8                                         Pad_1F9[0x7];
	double                                        __verse_0x525BA815_DistanceFromReferencePosition_3;
	FVerseFunctionProperty_                       _Callee_3;
	struct CompanionAI::Ftuple_Lvector3_Mvector3_R _ExprResult_4;
	uint8                                         Pad_248[0x8];
	struct FSpatialMath_transform                 _ExprResult_5;
	class UObject*                                __verse_0x00000000__4;
	FVerseFunctionProperty_                       _Callee_6;
	struct CompanionAI::Ftuple_L_R                _ExprResult_7;
	uint8                                         Pad_2C9[0x7];
	FOptionProperty_                              _ExprResultStack_8;
	uint8                                         Pad_2D9[0x7];
	class UConcurrency_task*                      _AsyncTask_9;
	FVerseFunctionProperty_                       _AsyncTaskClass_10;
	int64                                         _AsyncResult_11;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_CompanionAI_companion_ai_runtime$WaitForTargetMovement_L_Nfort__character_M_Nfloat_R">();
	}
	static class Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R>();
	}
};
static_assert(alignof(Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R) == 0x000010, "Wrong alignment on Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R");
static_assert(sizeof(Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R) == 0x000300, "Wrong size on Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R, _Self) == 0x000148, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R::_Self' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R, __verse_0x455F599A_ReferencePosition_1) == 0x000160, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R::__verse_0x455F599A_ReferencePosition_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R, _ExprResult_0) == 0x000180, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R::_ExprResult_0' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R, __verse_0x00000000__2) == 0x0001E0, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R::__verse_0x00000000__2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R, _Callee_1) == 0x0001E8, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R::_Callee_1' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R, _ExprResult_2) == 0x0001F8, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R, __verse_0x525BA815_DistanceFromReferencePosition_3) == 0x000200, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R::__verse_0x525BA815_DistanceFromReferencePosition_3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R, _Callee_3) == 0x000208, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R::_Callee_3' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R, _ExprResult_4) == 0x000218, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R::_ExprResult_4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R, _ExprResult_5) == 0x000250, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R::_ExprResult_5' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R, __verse_0x00000000__4) == 0x0002B0, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R::__verse_0x00000000__4' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R, _Callee_6) == 0x0002B8, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R::_Callee_6' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R, _ExprResult_7) == 0x0002C8, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R::_ExprResult_7' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R, _ExprResultStack_8) == 0x0002D0, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R::_ExprResultStack_8' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R, _AsyncTask_9) == 0x0002E0, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R::_AsyncTask_9' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R, _AsyncTaskClass_10) == 0x0002E8, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R::_AsyncTaskClass_10' has a wrong offset!");
static_assert(offsetof(Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R, _AsyncResult_11) == 0x0002F8, "Member 'Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R::_AsyncResult_11' has a wrong offset!");

}
