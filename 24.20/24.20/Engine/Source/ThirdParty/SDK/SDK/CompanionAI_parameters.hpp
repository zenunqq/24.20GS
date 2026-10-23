#pragma once

#include "Basic.hpp"

#include "CompanionAI_structs.hpp"
#include "VerseNative_structs.hpp"
#include "VerseAIBase_0_structs.hpp"

namespace SDK::Params
{

struct task_CompanionAI_companion_ai_runtime_GetObstacle_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_CompanionAI_companion_ai_runtime_GetObstacle_Update) == 0x000008, "Wrong alignment on task_CompanionAI_companion_ai_runtime_GetObstacle_Update");
static_assert(sizeof(task_CompanionAI_companion_ai_runtime_GetObstacle_Update) == 0x000008, "Wrong size on task_CompanionAI_companion_ai_runtime_GetObstacle_Update");
static_assert(offsetof(task_CompanionAI_companion_ai_runtime_GetObstacle_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_companion_ai_runtime_GetObstacle_Update::RetVal' has a wrong offset!");

struct CompanionAI_fort_creature_component_RunDefaultBehavior final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_19[0x7];
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_fort_creature_component_RunDefaultBehavior) == 0x000008, "Wrong alignment on CompanionAI_fort_creature_component_RunDefaultBehavior");
static_assert(sizeof(CompanionAI_fort_creature_component_RunDefaultBehavior) == 0x000028, "Wrong size on CompanionAI_fort_creature_component_RunDefaultBehavior");
static_assert(offsetof(CompanionAI_fort_creature_component_RunDefaultBehavior, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_fort_creature_component_RunDefaultBehavior::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_fort_creature_component_RunDefaultBehavior, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_fort_creature_component_RunDefaultBehavior::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_fort_creature_component_RunDefaultBehavior, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_fort_creature_component_RunDefaultBehavior::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_fort_creature_component_RunDefaultBehavior, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_fort_creature_component_RunDefaultBehavior::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_fort_creature_component_RunDefaultBehavior, RetVal) == 0x000020, "Member 'CompanionAI_fort_creature_component_RunDefaultBehavior::RetVal' has a wrong offset!");

struct task_CompanionAI_fort_npc_component_RunDefaultBehavior_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_CompanionAI_fort_npc_component_RunDefaultBehavior_Update) == 0x000008, "Wrong alignment on task_CompanionAI_fort_npc_component_RunDefaultBehavior_Update");
static_assert(sizeof(task_CompanionAI_fort_npc_component_RunDefaultBehavior_Update) == 0x000008, "Wrong size on task_CompanionAI_fort_npc_component_RunDefaultBehavior_Update");
static_assert(offsetof(task_CompanionAI_fort_npc_component_RunDefaultBehavior_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_fort_npc_component_RunDefaultBehavior_Update::RetVal' has a wrong offset!");

struct task_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R_Update) == 0x000008, "Wrong alignment on task_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R_Update");
static_assert(sizeof(task_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R_Update) == 0x000008, "Wrong size on task_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R_Update");
static_assert(offsetof(task_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R_Update::RetVal' has a wrong offset!");

struct CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RCompare_L_Nfort__obstacle__info_M_Nentity_R final
{
public:
	struct Ftuple_Lfort__obstacle__info_Mentity_R __verse_0xB2CDDD72_Argument;
	uint8                                         RetVal : 1;
};
static_assert(alignof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RCompare_L_Nfort__obstacle__info_M_Nentity_R) == 0x000008, "Wrong alignment on CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RCompare_L_Nfort__obstacle__info_M_Nentity_R");
static_assert(sizeof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RCompare_L_Nfort__obstacle__info_M_Nentity_R) == 0x000038, "Wrong size on CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RCompare_L_Nfort__obstacle__info_M_Nentity_R");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RCompare_L_Nfort__obstacle__info_M_Nentity_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RCompare_L_Nfort__obstacle__info_M_Nentity_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");

struct CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetAgent_U_L_Nentity_M_Ntuple_L_R_R final
{
public:
	struct Ftuple_Lentity_Mtuple_L_R_Mtuple_L_R_R __verse_0xB2CDDD72_Argument;
	FOptionProperty_                              RetVal;
};
static_assert(alignof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetAgent_U_L_Nentity_M_Ntuple_L_R_R) == 0x000008, "Wrong alignment on CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetAgent_U_L_Nentity_M_Ntuple_L_R_R");
static_assert(sizeof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetAgent_U_L_Nentity_M_Ntuple_L_R_R) == 0x000018, "Wrong size on CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetAgent_U_L_Nentity_M_Ntuple_L_R_R");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetAgent_U_L_Nentity_M_Ntuple_L_R_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetAgent_U_L_Nentity_M_Ntuple_L_R_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetAgent_U_L_Nentity_M_Ntuple_L_R_R, RetVal) == 0x000010, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetAgent_U_L_Nentity_M_Ntuple_L_R_R::RetVal' has a wrong offset!");

struct CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortBRCharacterActions_U_L_Nfort__character_M_Ntuple_L_R_R final
{
public:
	struct CompanionAI::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R __verse_0xB2CDDD72_Argument;
	FOptionProperty_                              RetVal;
};
static_assert(alignof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortBRCharacterActions_U_L_Nfort__character_M_Ntuple_L_R_R) == 0x000008, "Wrong alignment on CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortBRCharacterActions_U_L_Nfort__character_M_Ntuple_L_R_R");
static_assert(sizeof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortBRCharacterActions_U_L_Nfort__character_M_Ntuple_L_R_R) == 0x000018, "Wrong size on CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortBRCharacterActions_U_L_Nfort__character_M_Ntuple_L_R_R");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortBRCharacterActions_U_L_Nfort__character_M_Ntuple_L_R_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortBRCharacterActions_U_L_Nfort__character_M_Ntuple_L_R_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortBRCharacterActions_U_L_Nfort__character_M_Ntuple_L_R_R, RetVal) == 0x000010, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortBRCharacterActions_U_L_Nfort__character_M_Ntuple_L_R_R::RetVal' has a wrong offset!");

struct CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortBRCreatureActions_U_L_Nfort__character_M_Ntuple_L_R_R final
{
public:
	struct CompanionAI::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R __verse_0xB2CDDD72_Argument;
	FOptionProperty_                              RetVal;
};
static_assert(alignof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortBRCreatureActions_U_L_Nfort__character_M_Ntuple_L_R_R) == 0x000008, "Wrong alignment on CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortBRCreatureActions_U_L_Nfort__character_M_Ntuple_L_R_R");
static_assert(sizeof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortBRCreatureActions_U_L_Nfort__character_M_Ntuple_L_R_R) == 0x000018, "Wrong size on CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortBRCreatureActions_U_L_Nfort__character_M_Ntuple_L_R_R");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortBRCreatureActions_U_L_Nfort__character_M_Ntuple_L_R_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortBRCreatureActions_U_L_Nfort__character_M_Ntuple_L_R_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortBRCreatureActions_U_L_Nfort__character_M_Ntuple_L_R_R, RetVal) == 0x000010, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortBRCreatureActions_U_L_Nfort__character_M_Ntuple_L_R_R::RetVal' has a wrong offset!");

struct CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortPing_U_L_Nfort__character_M_Ntuple_L_R_R final
{
public:
	struct CompanionAI::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R __verse_0xB2CDDD72_Argument;
	FOptionProperty_                              RetVal;
};
static_assert(alignof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortPing_U_L_Nfort__character_M_Ntuple_L_R_R) == 0x000008, "Wrong alignment on CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortPing_U_L_Nfort__character_M_Ntuple_L_R_R");
static_assert(sizeof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortPing_U_L_Nfort__character_M_Ntuple_L_R_R) == 0x000018, "Wrong size on CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortPing_U_L_Nfort__character_M_Ntuple_L_R_R");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortPing_U_L_Nfort__character_M_Ntuple_L_R_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortPing_U_L_Nfort__character_M_Ntuple_L_R_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortPing_U_L_Nfort__character_M_Ntuple_L_R_R, RetVal) == 0x000010, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortPing_U_L_Nfort__character_M_Ntuple_L_R_R::RetVal' has a wrong offset!");

struct CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetNPCLeashRadius_U_L_Nfort__character_M_Ntuple_L_R_R final
{
public:
	struct CompanionAI::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R __verse_0xB2CDDD72_Argument;
	struct CompanionAI::Ftuple_Lfloat_Mfloat_R    RetVal;
};
static_assert(alignof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetNPCLeashRadius_U_L_Nfort__character_M_Ntuple_L_R_R) == 0x000008, "Wrong alignment on CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetNPCLeashRadius_U_L_Nfort__character_M_Ntuple_L_R_R");
static_assert(sizeof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetNPCLeashRadius_U_L_Nfort__character_M_Ntuple_L_R_R) == 0x000020, "Wrong size on CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetNPCLeashRadius_U_L_Nfort__character_M_Ntuple_L_R_R");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetNPCLeashRadius_U_L_Nfort__character_M_Ntuple_L_R_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetNPCLeashRadius_U_L_Nfort__character_M_Ntuple_L_R_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetNPCLeashRadius_U_L_Nfort__character_M_Ntuple_L_R_R, RetVal) == 0x000010, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetNPCLeashRadius_U_L_Nfort__character_M_Ntuple_L_R_R::RetVal' has a wrong offset!");

struct CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetTeamMembers_U_L_Nagent_M_Ntuple_L_R_R final
{
public:
	struct CompanionAI::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R __verse_0xB2CDDD72_Argument;
	TArray<class USimulation_agent*>              RetVal;
};
static_assert(alignof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetTeamMembers_U_L_Nagent_M_Ntuple_L_R_R) == 0x000008, "Wrong alignment on CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetTeamMembers_U_L_Nagent_M_Ntuple_L_R_R");
static_assert(sizeof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetTeamMembers_U_L_Nagent_M_Ntuple_L_R_R) == 0x000020, "Wrong size on CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetTeamMembers_U_L_Nagent_M_Ntuple_L_R_R");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetTeamMembers_U_L_Nagent_M_Ntuple_L_R_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetTeamMembers_U_L_Nagent_M_Ntuple_L_R_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetTeamMembers_U_L_Nagent_M_Ntuple_L_R_R, RetVal) == 0x000010, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetTeamMembers_U_L_Nagent_M_Ntuple_L_R_R::RetVal' has a wrong offset!");

struct CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eIsBeingDBNOCarried_U_L_Nfort__character_M_Ntuple_L_R_R final
{
public:
	struct CompanionAI::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R __verse_0xB2CDDD72_Argument;
	FOptionProperty_                              RetVal;
};
static_assert(alignof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eIsBeingDBNOCarried_U_L_Nfort__character_M_Ntuple_L_R_R) == 0x000008, "Wrong alignment on CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eIsBeingDBNOCarried_U_L_Nfort__character_M_Ntuple_L_R_R");
static_assert(sizeof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eIsBeingDBNOCarried_U_L_Nfort__character_M_Ntuple_L_R_R) == 0x000018, "Wrong size on CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eIsBeingDBNOCarried_U_L_Nfort__character_M_Ntuple_L_R_R");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eIsBeingDBNOCarried_U_L_Nfort__character_M_Ntuple_L_R_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eIsBeingDBNOCarried_U_L_Nfort__character_M_Ntuple_L_R_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eIsBeingDBNOCarried_U_L_Nfort__character_M_Ntuple_L_R_R, RetVal) == 0x000010, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eIsBeingDBNOCarried_U_L_Nfort__character_M_Ntuple_L_R_R::RetVal' has a wrong offset!");

struct alignas(0x08) CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R final
{
public:
	ECompanionAI_PingCommand_command_type         __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_1[0x7];
	FVerseStringProperty_                         RetVal;
	FVerseDynamicProperty_                        InvokeResultDummy_0;
	FOptionProperty_                              _ExprResultStack_1;
	uint8                                         Pad_39[0x7];
	FVerseDynamicProperty_                        _ExprResult_2;
	FVerseDynamicProperty_                        _ExprResult_3;
	FVerseDynamicProperty_                        InvokeResultDummy_4;
	FOptionProperty_                              _ExprResultStack_5;
	uint8                                         Pad_81[0x7];
	FVerseDynamicProperty_                        _ExprResult_6;
	FVerseDynamicProperty_                        _ExprResult_7;
	FVerseDynamicProperty_                        InvokeResultDummy_8;
	FOptionProperty_                              _ExprResultStack_9;
	uint8                                         Pad_C9[0x7];
	FVerseDynamicProperty_                        _ExprResult_10;
	FVerseDynamicProperty_                        _ExprResult_11;
	FVerseDynamicProperty_                        InvokeResultDummy_12;
	FOptionProperty_                              _ExprResultStack_13;
	uint8                                         Pad_111[0x7];
	FVerseDynamicProperty_                        _ExprResult_14;
	FVerseDynamicProperty_                        _ExprResult_15;
	FVerseDynamicProperty_                        InvokeResultDummy_16;
	FOptionProperty_                              _ExprResultStack_17;
	uint8                                         Pad_159[0x7];
	FVerseDynamicProperty_                        _ExprResult_18;
	FVerseDynamicProperty_                        _ExprResult_19;
};
static_assert(alignof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R) == 0x000008, "Wrong alignment on CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R");
static_assert(sizeof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R) == 0x000180, "Wrong size on CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R, RetVal) == 0x000008, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R::RetVal' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R, InvokeResultDummy_0) == 0x000018, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R::InvokeResultDummy_0' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R, _ExprResultStack_1) == 0x000028, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R::_ExprResultStack_1' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R, _ExprResult_2) == 0x000040, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R, _ExprResult_3) == 0x000050, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R::_ExprResult_3' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R, InvokeResultDummy_4) == 0x000060, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R::InvokeResultDummy_4' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R, _ExprResultStack_5) == 0x000070, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R::_ExprResultStack_5' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R, _ExprResult_6) == 0x000088, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R::_ExprResult_6' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R, _ExprResult_7) == 0x000098, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R::_ExprResult_7' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R, InvokeResultDummy_8) == 0x0000A8, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R::InvokeResultDummy_8' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R, _ExprResultStack_9) == 0x0000B8, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R::_ExprResultStack_9' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R, _ExprResult_10) == 0x0000D0, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R::_ExprResult_10' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R, _ExprResult_11) == 0x0000E0, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R::_ExprResult_11' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R, InvokeResultDummy_12) == 0x0000F0, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R::InvokeResultDummy_12' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R, _ExprResultStack_13) == 0x000100, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R::_ExprResultStack_13' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R, _ExprResult_14) == 0x000118, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R::_ExprResult_14' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R, _ExprResult_15) == 0x000128, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R::_ExprResult_15' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R, InvokeResultDummy_16) == 0x000138, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R::InvokeResultDummy_16' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R, _ExprResultStack_17) == 0x000148, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R::_ExprResultStack_17' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R, _ExprResult_18) == 0x000160, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R::_ExprResult_18' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R, _ExprResult_19) == 0x000170, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R::_ExprResult_19' has a wrong offset!");

struct alignas(0x08) CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R final
{
public:
	ECompanionAI_PingCommand_entity_type          __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_1[0x7];
	FVerseStringProperty_                         RetVal;
	FVerseDynamicProperty_                        InvokeResultDummy_0;
	FOptionProperty_                              _ExprResultStack_1;
	uint8                                         Pad_39[0x7];
	FVerseDynamicProperty_                        _ExprResult_2;
	FVerseDynamicProperty_                        _ExprResult_3;
	FVerseDynamicProperty_                        InvokeResultDummy_4;
	FOptionProperty_                              _ExprResultStack_5;
	uint8                                         Pad_81[0x7];
	FVerseDynamicProperty_                        _ExprResult_6;
	FVerseDynamicProperty_                        _ExprResult_7;
	FVerseDynamicProperty_                        InvokeResultDummy_8;
	FOptionProperty_                              _ExprResultStack_9;
	uint8                                         Pad_C9[0x7];
	FVerseDynamicProperty_                        _ExprResult_10;
	FVerseDynamicProperty_                        _ExprResult_11;
	FVerseDynamicProperty_                        InvokeResultDummy_12;
	FOptionProperty_                              _ExprResultStack_13;
	uint8                                         Pad_111[0x7];
	FVerseDynamicProperty_                        _ExprResult_14;
	FVerseDynamicProperty_                        _ExprResult_15;
	FVerseDynamicProperty_                        InvokeResultDummy_16;
	FOptionProperty_                              _ExprResultStack_17;
	uint8                                         Pad_159[0x7];
	FVerseDynamicProperty_                        _ExprResult_18;
	FVerseDynamicProperty_                        _ExprResult_19;
	FVerseDynamicProperty_                        InvokeResultDummy_20;
	FOptionProperty_                              _ExprResultStack_21;
	uint8                                         Pad_1A1[0x7];
	FVerseDynamicProperty_                        _ExprResult_22;
	FVerseDynamicProperty_                        _ExprResult_23;
};
static_assert(alignof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R) == 0x000008, "Wrong alignment on CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R");
static_assert(sizeof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R) == 0x0001C8, "Wrong size on CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R, RetVal) == 0x000008, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R::RetVal' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R, InvokeResultDummy_0) == 0x000018, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R::InvokeResultDummy_0' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R, _ExprResultStack_1) == 0x000028, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R::_ExprResultStack_1' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R, _ExprResult_2) == 0x000040, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R, _ExprResult_3) == 0x000050, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R::_ExprResult_3' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R, InvokeResultDummy_4) == 0x000060, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R::InvokeResultDummy_4' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R, _ExprResultStack_5) == 0x000070, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R::_ExprResultStack_5' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R, _ExprResult_6) == 0x000088, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R::_ExprResult_6' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R, _ExprResult_7) == 0x000098, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R::_ExprResult_7' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R, InvokeResultDummy_8) == 0x0000A8, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R::InvokeResultDummy_8' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R, _ExprResultStack_9) == 0x0000B8, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R::_ExprResultStack_9' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R, _ExprResult_10) == 0x0000D0, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R::_ExprResult_10' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R, _ExprResult_11) == 0x0000E0, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R::_ExprResult_11' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R, InvokeResultDummy_12) == 0x0000F0, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R::InvokeResultDummy_12' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R, _ExprResultStack_13) == 0x000100, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R::_ExprResultStack_13' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R, _ExprResult_14) == 0x000118, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R::_ExprResult_14' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R, _ExprResult_15) == 0x000128, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R::_ExprResult_15' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R, InvokeResultDummy_16) == 0x000138, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R::InvokeResultDummy_16' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R, _ExprResultStack_17) == 0x000148, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R::_ExprResultStack_17' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R, _ExprResult_18) == 0x000160, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R::_ExprResult_18' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R, _ExprResult_19) == 0x000170, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R::_ExprResult_19' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R, InvokeResultDummy_20) == 0x000180, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R::InvokeResultDummy_20' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R, _ExprResultStack_21) == 0x000190, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R::_ExprResultStack_21' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R, _ExprResult_22) == 0x0001A8, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R::_ExprResult_22' has a wrong offset!");
static_assert(offsetof(CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R, _ExprResult_23) == 0x0001B8, "Member 'CompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R::_ExprResult_23' has a wrong offset!");

struct CompanionAI_CompanionAI_ping_info_Factory final
{
public:
	struct FCompanionAI_ping_info                 RetVal;
};
static_assert(alignof(CompanionAI_CompanionAI_ping_info_Factory) == 0x000008, "Wrong alignment on CompanionAI_CompanionAI_ping_info_Factory");
static_assert(sizeof(CompanionAI_CompanionAI_ping_info_Factory) == 0x000038, "Wrong size on CompanionAI_CompanionAI_ping_info_Factory");
static_assert(offsetof(CompanionAI_CompanionAI_ping_info_Factory, RetVal) == 0x000000, "Member 'CompanionAI_CompanionAI_ping_info_Factory::RetVal' has a wrong offset!");

struct task_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R_Update) == 0x000008, "Wrong alignment on task_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R_Update");
static_assert(sizeof(task_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R_Update) == 0x000008, "Wrong size on task_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R_Update");
static_assert(offsetof(task_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R_Update::RetVal' has a wrong offset!");

struct CompanionAI_companion_ai__InitCDO final
{
public:
	class UDiagnostics_log*                       _ExprResult_0;
	uint64                                        _InstancingGraph_1;
};
static_assert(alignof(CompanionAI_companion_ai__InitCDO) == 0x000008, "Wrong alignment on CompanionAI_companion_ai__InitCDO");
static_assert(sizeof(CompanionAI_companion_ai__InitCDO) == 0x000010, "Wrong size on CompanionAI_companion_ai__InitCDO");
static_assert(offsetof(CompanionAI_companion_ai__InitCDO, _ExprResult_0) == 0x000000, "Member 'CompanionAI_companion_ai__InitCDO::_ExprResult_0' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai__InitCDO, _InstancingGraph_1) == 0x000008, "Member 'CompanionAI_companion_ai__InitCDO::_InstancingGraph_1' has a wrong offset!");

struct CompanionAI_companion_ai_OnBegin final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_19[0x7];
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_companion_ai_OnBegin) == 0x000008, "Wrong alignment on CompanionAI_companion_ai_OnBegin");
static_assert(sizeof(CompanionAI_companion_ai_OnBegin) == 0x000028, "Wrong size on CompanionAI_companion_ai_OnBegin");
static_assert(offsetof(CompanionAI_companion_ai_OnBegin, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_companion_ai_OnBegin::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_OnBegin, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_companion_ai_OnBegin::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_OnBegin, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_companion_ai_OnBegin::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_OnBegin, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_companion_ai_OnBegin::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_OnBegin, RetVal) == 0x000020, "Member 'CompanionAI_companion_ai_OnBegin::RetVal' has a wrong offset!");

struct CompanionAI_companion_creature__InitCDO final
{
public:
	class UDiagnostics_log*                       _ExprResult_0;
	uint64                                        _InstancingGraph_1;
};
static_assert(alignof(CompanionAI_companion_creature__InitCDO) == 0x000008, "Wrong alignment on CompanionAI_companion_creature__InitCDO");
static_assert(sizeof(CompanionAI_companion_creature__InitCDO) == 0x000010, "Wrong size on CompanionAI_companion_creature__InitCDO");
static_assert(offsetof(CompanionAI_companion_creature__InitCDO, _ExprResult_0) == 0x000000, "Member 'CompanionAI_companion_creature__InitCDO::_ExprResult_0' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_creature__InitCDO, _InstancingGraph_1) == 0x000008, "Member 'CompanionAI_companion_creature__InitCDO::_InstancingGraph_1' has a wrong offset!");

struct CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R final
{
public:
	FVerseStringProperty_                         __verse_0xB2CDDD72_Argument;
	FOptionProperty_                              _ExprResultStack_0;
	uint8                                         Pad_12[0x6];
	class UDiagnostics_log*                       __verse_0x00000000__2;
	EVerseTrue                                    _InvokeSureResultDummy_1;
	uint8                                         Pad_21[0x7];
	FVerseFunctionProperty_                       _Callee_2;
	struct CompanionAI::Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R _ExprResult_3;
	FOptionProperty_                              _ExprResult_4;
	EVerseTrue                                    _InvokeSureResultDummy_5;
	uint8                                         Pad_53[0x5];
	FVerseFunctionProperty_                       _Callee_6;
	struct CompanionAI::Ftuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R _ExprResult_7;
	struct CompanionAI::Ftuple_L_Kchar_M_QColor_Ncolor_M_QDuration_Nfloat_R __verse_0x00000000__3;
	FOptionProperty_                              _ExprResult_8;
	uint8                                         Pad_101[0x7];
	FOptionProperty_                              _ExprResult_9;
	uint8                                         Pad_111[0x7];
	FVerseStringProperty_                         _ExprResultDummy_10;
};
static_assert(alignof(CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R) == 0x000008, "Wrong alignment on CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R");
static_assert(sizeof(CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R) == 0x000128, "Wrong size on CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R");
static_assert(offsetof(CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R, _ExprResultStack_0) == 0x000010, "Member 'CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R::_ExprResultStack_0' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R, __verse_0x00000000__2) == 0x000018, "Member 'CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R::__verse_0x00000000__2' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R, _InvokeSureResultDummy_1) == 0x000020, "Member 'CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R::_InvokeSureResultDummy_1' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R, _Callee_2) == 0x000028, "Member 'CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R::_Callee_2' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R, _ExprResult_3) == 0x000038, "Member 'CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R::_ExprResult_3' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R, _ExprResult_4) == 0x000050, "Member 'CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R::_ExprResult_4' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R, _InvokeSureResultDummy_5) == 0x000052, "Member 'CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R::_InvokeSureResultDummy_5' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R, _Callee_6) == 0x000058, "Member 'CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R::_Callee_6' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R, _ExprResult_7) == 0x000068, "Member 'CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R::_ExprResult_7' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R, __verse_0x00000000__3) == 0x0000A8, "Member 'CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R::__verse_0x00000000__3' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R, _ExprResult_8) == 0x0000E8, "Member 'CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R::_ExprResult_8' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R, _ExprResult_9) == 0x000108, "Member 'CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R::_ExprResult_9' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R, _ExprResultDummy_10) == 0x000118, "Member 'CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R::_ExprResultDummy_10' has a wrong offset!");

struct CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnConverted final
{
public:
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_1[0x7];
	class UObject*                                __verse_0xB4DBB24F_PingActions_1;
	FOptionProperty_                              _ExprResultStack_0;
	class UObject*                                __verse_0x00000000__2;
	EVerseTrue                                    _InvokeSureResultDummy_1;
	uint8                                         Pad_21[0x7];
	FVerseFunctionProperty_                       _Callee_2;
};
static_assert(alignof(CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnConverted) == 0x000008, "Wrong alignment on CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnConverted");
static_assert(sizeof(CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnConverted) == 0x000038, "Wrong size on CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnConverted");
static_assert(offsetof(CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnConverted, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnConverted::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnConverted, __verse_0xB4DBB24F_PingActions_1) == 0x000008, "Member 'CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnConverted::__verse_0xB4DBB24F_PingActions_1' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnConverted, _ExprResultStack_0) == 0x000010, "Member 'CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnConverted::_ExprResultStack_0' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnConverted, __verse_0x00000000__2) == 0x000018, "Member 'CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnConverted::__verse_0x00000000__2' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnConverted, _InvokeSureResultDummy_1) == 0x000020, "Member 'CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnConverted::_InvokeSureResultDummy_1' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnConverted, _Callee_2) == 0x000028, "Member 'CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnConverted::_Callee_2' has a wrong offset!");

struct CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnUnconverted final
{
public:
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_1[0x7];
	class UObject*                                __verse_0xB4DBB24F_PingActions_1;
	FOptionProperty_                              _ExprResultStack_0;
	class UObject*                                __verse_0x00000000__2;
	EVerseTrue                                    _InvokeSureResultDummy_1;
	uint8                                         Pad_21[0x7];
	FVerseFunctionProperty_                       _Callee_2;
};
static_assert(alignof(CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnUnconverted) == 0x000008, "Wrong alignment on CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnUnconverted");
static_assert(sizeof(CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnUnconverted) == 0x000038, "Wrong size on CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnUnconverted");
static_assert(offsetof(CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnUnconverted, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnUnconverted::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnUnconverted, __verse_0xB4DBB24F_PingActions_1) == 0x000008, "Member 'CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnUnconverted::__verse_0xB4DBB24F_PingActions_1' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnUnconverted, _ExprResultStack_0) == 0x000010, "Member 'CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnUnconverted::_ExprResultStack_0' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnUnconverted, __verse_0x00000000__2) == 0x000018, "Member 'CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnUnconverted::__verse_0x00000000__2' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnUnconverted, _InvokeSureResultDummy_1) == 0x000020, "Member 'CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnUnconverted::_InvokeSureResultDummy_1' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnUnconverted, _Callee_2) == 0x000028, "Member 'CompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_ROnUnconverted::_Callee_2' has a wrong offset!");

struct CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct Ftuple_Lvector3_Mfloat_Mcolor_R        __verse_0xB2CDDD72_Argument;
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R) == 0x000008, "Wrong alignment on CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R");
static_assert(sizeof(CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R) == 0x000058, "Wrong size on CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R");
static_assert(offsetof(CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R, RetVal) == 0x000050, "Member 'CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::RetVal' has a wrong offset!");

struct CompanionAI_companion_creature_GameLoop final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_19[0x7];
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_companion_creature_GameLoop) == 0x000008, "Wrong alignment on CompanionAI_companion_creature_GameLoop");
static_assert(sizeof(CompanionAI_companion_creature_GameLoop) == 0x000028, "Wrong size on CompanionAI_companion_creature_GameLoop");
static_assert(offsetof(CompanionAI_companion_creature_GameLoop, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_companion_creature_GameLoop::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_creature_GameLoop, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_companion_creature_GameLoop::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_creature_GameLoop, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_companion_creature_GameLoop::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_creature_GameLoop, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_companion_creature_GameLoop::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_creature_GameLoop, RetVal) == 0x000020, "Member 'CompanionAI_companion_creature_GameLoop::RetVal' has a wrong offset!");

struct CompanionAI_companion_creature_OnBegin final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_19[0x7];
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_companion_creature_OnBegin) == 0x000008, "Wrong alignment on CompanionAI_companion_creature_OnBegin");
static_assert(sizeof(CompanionAI_companion_creature_OnBegin) == 0x000028, "Wrong size on CompanionAI_companion_creature_OnBegin");
static_assert(offsetof(CompanionAI_companion_creature_OnBegin, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_companion_creature_OnBegin::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_creature_OnBegin, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_companion_creature_OnBegin::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_creature_OnBegin, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_companion_creature_OnBegin::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_creature_OnBegin, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_companion_creature_OnBegin::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_creature_OnBegin, RetVal) == 0x000020, "Member 'CompanionAI_companion_creature_OnBegin::RetVal' has a wrong offset!");

struct CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R final
{
public:
	FVerseStringProperty_                         __verse_0xB2CDDD72_Argument;
	FOptionProperty_                              _ExprResultStack_0;
	uint8                                         Pad_12[0x6];
	class UDiagnostics_log*                       __verse_0x00000000__2;
	EVerseTrue                                    _InvokeSureResultDummy_1;
	uint8                                         Pad_21[0x7];
	FVerseFunctionProperty_                       _Callee_2;
	struct CompanionAI::Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R _ExprResult_3;
	FOptionProperty_                              _ExprResult_4;
	EVerseTrue                                    _InvokeSureResultDummy_5;
	uint8                                         Pad_53[0x5];
	FVerseFunctionProperty_                       _Callee_6;
	struct CompanionAI::Ftuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R _ExprResult_7;
	struct CompanionAI::Ftuple_L_Kchar_M_QColor_Ncolor_M_QDuration_Nfloat_R __verse_0x00000000__3;
	FOptionProperty_                              _ExprResult_8;
	uint8                                         Pad_101[0x7];
	FOptionProperty_                              _ExprResult_9;
	uint8                                         Pad_111[0x7];
	FVerseStringProperty_                         _ExprResultDummy_10;
};
static_assert(alignof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R) == 0x000008, "Wrong alignment on CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R");
static_assert(sizeof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R) == 0x000128, "Wrong size on CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R");
static_assert(offsetof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R, _ExprResultStack_0) == 0x000010, "Member 'CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R::_ExprResultStack_0' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R, __verse_0x00000000__2) == 0x000018, "Member 'CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R::__verse_0x00000000__2' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R, _InvokeSureResultDummy_1) == 0x000020, "Member 'CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R::_InvokeSureResultDummy_1' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R, _Callee_2) == 0x000028, "Member 'CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R::_Callee_2' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R, _ExprResult_3) == 0x000038, "Member 'CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R::_ExprResult_3' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R, _ExprResult_4) == 0x000050, "Member 'CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R::_ExprResult_4' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R, _InvokeSureResultDummy_5) == 0x000052, "Member 'CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R::_InvokeSureResultDummy_5' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R, _Callee_6) == 0x000058, "Member 'CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R::_Callee_6' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R, _ExprResult_7) == 0x000068, "Member 'CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R::_ExprResult_7' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R, __verse_0x00000000__3) == 0x0000A8, "Member 'CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R::__verse_0x00000000__3' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R, _ExprResult_8) == 0x0000E8, "Member 'CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R::_ExprResult_8' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R, _ExprResult_9) == 0x000108, "Member 'CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R::_ExprResult_9' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R, _ExprResultDummy_10) == 0x000118, "Member 'CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R::_ExprResultDummy_10' has a wrong offset!");

struct CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted final
{
public:
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_1[0x7];
	class UObject*                                __verse_0x00000000__1;
	EVerseTrue                                    _InvokeSureResultDummy_0;
	uint8                                         Pad_11[0x7];
	FVerseFunctionProperty_                       _Callee_1;
};
static_assert(alignof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted) == 0x000008, "Wrong alignment on CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted");
static_assert(sizeof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted) == 0x000028, "Wrong size on CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted");
static_assert(offsetof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted, __verse_0x00000000__1) == 0x000008, "Member 'CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted::__verse_0x00000000__1' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted, _InvokeSureResultDummy_0) == 0x000010, "Member 'CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted::_InvokeSureResultDummy_0' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted, _Callee_1) == 0x000018, "Member 'CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted::_Callee_1' has a wrong offset!");

struct alignas(0x08) CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted_L_Nany_R_Nvoid final
{
public:
	FVerseDynamicProperty_                        __verse_0xB2CDDD72_Argument;
	EVerseTrue                                    _InvokeSureResultDummy_0;
	uint8                                         Pad_11[0x7];
	FVerseFunctionProperty_                       _Callee_1;
	struct CompanionAI::Ftuple_L_R                _ExprResult_2;
};
static_assert(alignof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted_L_Nany_R_Nvoid) == 0x000008, "Wrong alignment on CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted_L_Nany_R_Nvoid");
static_assert(sizeof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted_L_Nany_R_Nvoid) == 0x000030, "Wrong size on CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted_L_Nany_R_Nvoid");
static_assert(offsetof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted_L_Nany_R_Nvoid, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted_L_Nany_R_Nvoid::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted_L_Nany_R_Nvoid, _InvokeSureResultDummy_0) == 0x000010, "Member 'CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted_L_Nany_R_Nvoid::_InvokeSureResultDummy_0' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted_L_Nany_R_Nvoid, _Callee_1) == 0x000018, "Member 'CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted_L_Nany_R_Nvoid::_Callee_1' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted_L_Nany_R_Nvoid, _ExprResult_2) == 0x000028, "Member 'CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted_L_Nany_R_Nvoid::_ExprResult_2' has a wrong offset!");

struct CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted final
{
public:
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_1[0x7];
	class UObject*                                __verse_0x00000000__1;
	EVerseTrue                                    _InvokeSureResultDummy_0;
	uint8                                         Pad_11[0x7];
	FVerseFunctionProperty_                       _Callee_1;
};
static_assert(alignof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted) == 0x000008, "Wrong alignment on CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted");
static_assert(sizeof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted) == 0x000028, "Wrong size on CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted");
static_assert(offsetof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted, __verse_0x00000000__1) == 0x000008, "Member 'CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted::__verse_0x00000000__1' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted, _InvokeSureResultDummy_0) == 0x000010, "Member 'CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted::_InvokeSureResultDummy_0' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted, _Callee_1) == 0x000018, "Member 'CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted::_Callee_1' has a wrong offset!");

struct alignas(0x08) CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted_L_Nany_R_Nvoid final
{
public:
	FVerseDynamicProperty_                        __verse_0xB2CDDD72_Argument;
	EVerseTrue                                    _InvokeSureResultDummy_0;
	uint8                                         Pad_11[0x7];
	FVerseFunctionProperty_                       _Callee_1;
	struct CompanionAI::Ftuple_L_R                _ExprResult_2;
};
static_assert(alignof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted_L_Nany_R_Nvoid) == 0x000008, "Wrong alignment on CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted_L_Nany_R_Nvoid");
static_assert(sizeof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted_L_Nany_R_Nvoid) == 0x000030, "Wrong size on CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted_L_Nany_R_Nvoid");
static_assert(offsetof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted_L_Nany_R_Nvoid, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted_L_Nany_R_Nvoid::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted_L_Nany_R_Nvoid, _InvokeSureResultDummy_0) == 0x000010, "Member 'CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted_L_Nany_R_Nvoid::_InvokeSureResultDummy_0' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted_L_Nany_R_Nvoid, _Callee_1) == 0x000018, "Member 'CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted_L_Nany_R_Nvoid::_Callee_1' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted_L_Nany_R_Nvoid, _ExprResult_2) == 0x000028, "Member 'CompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted_L_Nany_R_Nvoid::_ExprResult_2' has a wrong offset!");

struct CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct FCompanionAI_ping_info                 __verse_0xB2CDDD72_Argument;
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R) == 0x000008, "Wrong alignment on CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R");
static_assert(sizeof(CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R) == 0x000058, "Wrong size on CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R");
static_assert(offsetof(CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R, RetVal) == 0x000050, "Member 'CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::RetVal' has a wrong offset!");

struct CompanionAI_companion_ai_runtime_CrouchService final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_19[0x7];
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_companion_ai_runtime_CrouchService) == 0x000008, "Wrong alignment on CompanionAI_companion_ai_runtime_CrouchService");
static_assert(sizeof(CompanionAI_companion_ai_runtime_CrouchService) == 0x000028, "Wrong size on CompanionAI_companion_ai_runtime_CrouchService");
static_assert(offsetof(CompanionAI_companion_ai_runtime_CrouchService, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_companion_ai_runtime_CrouchService::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_CrouchService, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_companion_ai_runtime_CrouchService::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_CrouchService, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_companion_ai_runtime_CrouchService::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_CrouchService, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_companion_ai_runtime_CrouchService::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_CrouchService, RetVal) == 0x000020, "Member 'CompanionAI_companion_ai_runtime_CrouchService::RetVal' has a wrong offset!");

struct CompanionAI_companion_ai_runtime_CrouchUntilHit final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_19[0x7];
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_companion_ai_runtime_CrouchUntilHit) == 0x000008, "Wrong alignment on CompanionAI_companion_ai_runtime_CrouchUntilHit");
static_assert(sizeof(CompanionAI_companion_ai_runtime_CrouchUntilHit) == 0x000028, "Wrong size on CompanionAI_companion_ai_runtime_CrouchUntilHit");
static_assert(offsetof(CompanionAI_companion_ai_runtime_CrouchUntilHit, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_companion_ai_runtime_CrouchUntilHit::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_CrouchUntilHit, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_companion_ai_runtime_CrouchUntilHit::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_CrouchUntilHit, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_companion_ai_runtime_CrouchUntilHit::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_CrouchUntilHit, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_companion_ai_runtime_CrouchUntilHit::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_CrouchUntilHit, RetVal) == 0x000020, "Member 'CompanionAI_companion_ai_runtime_CrouchUntilHit::RetVal' has a wrong offset!");

struct CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct Ftuple_Lvector3_Mfloat_Mcolor_R        __verse_0xB2CDDD72_Argument;
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R) == 0x000008, "Wrong alignment on CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R");
static_assert(sizeof(CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R) == 0x000058, "Wrong size on CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R");
static_assert(offsetof(CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R, RetVal) == 0x000050, "Member 'CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::RetVal' has a wrong offset!");

struct CompanionAI_companion_ai_runtime_GameLoop final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_19[0x7];
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_companion_ai_runtime_GameLoop) == 0x000008, "Wrong alignment on CompanionAI_companion_ai_runtime_GameLoop");
static_assert(sizeof(CompanionAI_companion_ai_runtime_GameLoop) == 0x000028, "Wrong size on CompanionAI_companion_ai_runtime_GameLoop");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GameLoop, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_companion_ai_runtime_GameLoop::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GameLoop, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_companion_ai_runtime_GameLoop::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GameLoop, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_companion_ai_runtime_GameLoop::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GameLoop, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_companion_ai_runtime_GameLoop::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GameLoop, RetVal) == 0x000020, "Member 'CompanionAI_companion_ai_runtime_GameLoop::RetVal' has a wrong offset!");

struct CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct FCompanionAI_ping_info                 __verse_0xB2CDDD72_Argument;
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R) == 0x000008, "Wrong alignment on CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R");
static_assert(sizeof(CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R) == 0x000058, "Wrong size on CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R, RetVal) == 0x000050, "Member 'CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::RetVal' has a wrong offset!");

struct CompanionAI_companion_ai_runtime_GetNewObstacle final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_19[0x7];
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_companion_ai_runtime_GetNewObstacle) == 0x000008, "Wrong alignment on CompanionAI_companion_ai_runtime_GetNewObstacle");
static_assert(sizeof(CompanionAI_companion_ai_runtime_GetNewObstacle) == 0x000028, "Wrong size on CompanionAI_companion_ai_runtime_GetNewObstacle");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GetNewObstacle, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_companion_ai_runtime_GetNewObstacle::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GetNewObstacle, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_companion_ai_runtime_GetNewObstacle::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GetNewObstacle, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_companion_ai_runtime_GetNewObstacle::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GetNewObstacle, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_companion_ai_runtime_GetNewObstacle::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GetNewObstacle, RetVal) == 0x000020, "Member 'CompanionAI_companion_ai_runtime_GetNewObstacle::RetVal' has a wrong offset!");

struct CompanionAI_companion_ai_runtime_GetNewTargetPerception final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_19[0x7];
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_companion_ai_runtime_GetNewTargetPerception) == 0x000008, "Wrong alignment on CompanionAI_companion_ai_runtime_GetNewTargetPerception");
static_assert(sizeof(CompanionAI_companion_ai_runtime_GetNewTargetPerception) == 0x000028, "Wrong size on CompanionAI_companion_ai_runtime_GetNewTargetPerception");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GetNewTargetPerception, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_companion_ai_runtime_GetNewTargetPerception::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GetNewTargetPerception, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_companion_ai_runtime_GetNewTargetPerception::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GetNewTargetPerception, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_companion_ai_runtime_GetNewTargetPerception::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GetNewTargetPerception, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_companion_ai_runtime_GetNewTargetPerception::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GetNewTargetPerception, RetVal) == 0x000020, "Member 'CompanionAI_companion_ai_runtime_GetNewTargetPerception::RetVal' has a wrong offset!");

struct CompanionAI_companion_ai_runtime_GetNewThreat final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_19[0x7];
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_companion_ai_runtime_GetNewThreat) == 0x000008, "Wrong alignment on CompanionAI_companion_ai_runtime_GetNewThreat");
static_assert(sizeof(CompanionAI_companion_ai_runtime_GetNewThreat) == 0x000028, "Wrong size on CompanionAI_companion_ai_runtime_GetNewThreat");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GetNewThreat, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_companion_ai_runtime_GetNewThreat::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GetNewThreat, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_companion_ai_runtime_GetNewThreat::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GetNewThreat, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_companion_ai_runtime_GetNewThreat::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GetNewThreat, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_companion_ai_runtime_GetNewThreat::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GetNewThreat, RetVal) == 0x000020, "Member 'CompanionAI_companion_ai_runtime_GetNewThreat::RetVal' has a wrong offset!");

struct CompanionAI_companion_ai_runtime_GetObstacle final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_19[0x7];
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_companion_ai_runtime_GetObstacle) == 0x000008, "Wrong alignment on CompanionAI_companion_ai_runtime_GetObstacle");
static_assert(sizeof(CompanionAI_companion_ai_runtime_GetObstacle) == 0x000028, "Wrong size on CompanionAI_companion_ai_runtime_GetObstacle");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GetObstacle, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_companion_ai_runtime_GetObstacle::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GetObstacle, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_companion_ai_runtime_GetObstacle::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GetObstacle, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_companion_ai_runtime_GetObstacle::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GetObstacle, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_companion_ai_runtime_GetObstacle::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GetObstacle, RetVal) == 0x000020, "Member 'CompanionAI_companion_ai_runtime_GetObstacle::RetVal' has a wrong offset!");

struct CompanionAI_companion_ai_runtime_GetThreat final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_19[0x7];
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_companion_ai_runtime_GetThreat) == 0x000008, "Wrong alignment on CompanionAI_companion_ai_runtime_GetThreat");
static_assert(sizeof(CompanionAI_companion_ai_runtime_GetThreat) == 0x000028, "Wrong size on CompanionAI_companion_ai_runtime_GetThreat");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GetThreat, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_companion_ai_runtime_GetThreat::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GetThreat, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_companion_ai_runtime_GetThreat::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GetThreat, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_companion_ai_runtime_GetThreat::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GetThreat, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_companion_ai_runtime_GetThreat::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GetThreat, RetVal) == 0x000020, "Member 'CompanionAI_companion_ai_runtime_GetThreat::RetVal' has a wrong offset!");

struct CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct FVerseAIBase_fort_threat_info          __verse_0xB2CDDD72_Argument;
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R) == 0x000008, "Wrong alignment on CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R");
static_assert(sizeof(CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R) == 0x000050, "Wrong size on CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R, RetVal) == 0x000048, "Member 'CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R::RetVal' has a wrong offset!");

struct CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R __verse_0xB2CDDD72_Argument;
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R) == 0x000008, "Wrong alignment on CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R");
static_assert(sizeof(CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R) == 0x000058, "Wrong size on CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R, RetVal) == 0x000050, "Member 'CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R::RetVal' has a wrong offset!");

struct CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct FCompanionAI_ping_info                 __verse_0xB2CDDD72_Argument;
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R) == 0x000008, "Wrong alignment on CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R");
static_assert(sizeof(CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R) == 0x000058, "Wrong size on CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R");
static_assert(offsetof(CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R, RetVal) == 0x000050, "Member 'CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::RetVal' has a wrong offset!");

struct CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct FCompanionAI_ping_info                 __verse_0xB2CDDD72_Argument;
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R) == 0x000008, "Wrong alignment on CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R");
static_assert(sizeof(CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R) == 0x000058, "Wrong size on CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R");
static_assert(offsetof(CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R, RetVal) == 0x000050, "Member 'CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::RetVal' has a wrong offset!");

struct CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct FCompanionAI_ping_info                 __verse_0xB2CDDD72_Argument;
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R) == 0x000008, "Wrong alignment on CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R");
static_assert(sizeof(CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R) == 0x000058, "Wrong size on CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R");
static_assert(offsetof(CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R, RetVal) == 0x000050, "Member 'CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::RetVal' has a wrong offset!");

struct CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct FCompanionAI_ping_info                 __verse_0xB2CDDD72_Argument;
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R) == 0x000008, "Wrong alignment on CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R");
static_assert(sizeof(CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R) == 0x000058, "Wrong size on CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R");
static_assert(offsetof(CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R, RetVal) == 0x000050, "Member 'CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R::RetVal' has a wrong offset!");

struct CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct FCompanionAI_ping_info                 __verse_0xB2CDDD72_Argument;
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R) == 0x000008, "Wrong alignment on CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R");
static_assert(sizeof(CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R) == 0x000058, "Wrong size on CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R");
static_assert(offsetof(CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R, RetVal) == 0x000050, "Member 'CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::RetVal' has a wrong offset!");

struct CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	FOptionProperty_                              __verse_0xB2CDDD72_Argument;
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R) == 0x000008, "Wrong alignment on CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R");
static_assert(sizeof(CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R) == 0x000028, "Wrong size on CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R");
static_assert(offsetof(CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R, RetVal) == 0x000020, "Member 'CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R::RetVal' has a wrong offset!");

struct CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct FCompanionAI_ping_info                 __verse_0xB2CDDD72_Argument;
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R) == 0x000008, "Wrong alignment on CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R");
static_assert(sizeof(CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R) == 0x000058, "Wrong size on CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R");
static_assert(offsetof(CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R, RetVal) == 0x000050, "Member 'CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R::RetVal' has a wrong offset!");

struct CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct CompanionAI::Ftuple_Lvector3_Mfloat_Mfloat_R __verse_0xB2CDDD72_Argument;
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R) == 0x000008, "Wrong alignment on CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R");
static_assert(sizeof(CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R) == 0x000048, "Wrong size on CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R");
static_assert(offsetof(CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R, RetVal) == 0x000040, "Member 'CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::RetVal' has a wrong offset!");

struct CompanionAI_companion_ai_runtime_LookAtOrAttackTarget final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_19[0x7];
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_companion_ai_runtime_LookAtOrAttackTarget) == 0x000008, "Wrong alignment on CompanionAI_companion_ai_runtime_LookAtOrAttackTarget");
static_assert(sizeof(CompanionAI_companion_ai_runtime_LookAtOrAttackTarget) == 0x000028, "Wrong size on CompanionAI_companion_ai_runtime_LookAtOrAttackTarget");
static_assert(offsetof(CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_LookAtOrAttackTarget, RetVal) == 0x000020, "Member 'CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::RetVal' has a wrong offset!");

struct CompanionAI_companion_ai_runtime_LookAtThreatTask final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_19[0x7];
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_companion_ai_runtime_LookAtThreatTask) == 0x000008, "Wrong alignment on CompanionAI_companion_ai_runtime_LookAtThreatTask");
static_assert(sizeof(CompanionAI_companion_ai_runtime_LookAtThreatTask) == 0x000028, "Wrong size on CompanionAI_companion_ai_runtime_LookAtThreatTask");
static_assert(offsetof(CompanionAI_companion_ai_runtime_LookAtThreatTask, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_companion_ai_runtime_LookAtThreatTask::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_LookAtThreatTask, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_companion_ai_runtime_LookAtThreatTask::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_LookAtThreatTask, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_companion_ai_runtime_LookAtThreatTask::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_LookAtThreatTask, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_companion_ai_runtime_LookAtThreatTask::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_LookAtThreatTask, RetVal) == 0x000020, "Member 'CompanionAI_companion_ai_runtime_LookAtThreatTask::RetVal' has a wrong offset!");

struct CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	class USimulation_agent*                      __verse_0xB2CDDD72_Argument;
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R) == 0x000008, "Wrong alignment on CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R");
static_assert(sizeof(CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R) == 0x000028, "Wrong size on CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R");
static_assert(offsetof(CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R, RetVal) == 0x000020, "Member 'CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::RetVal' has a wrong offset!");

struct CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct Ftuple_Lvector3_Mfloat_Magent_R        __verse_0xB2CDDD72_Argument;
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R) == 0x000008, "Wrong alignment on CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R");
static_assert(sizeof(CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R) == 0x000048, "Wrong size on CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R");
static_assert(offsetof(CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R, RetVal) == 0x000040, "Member 'CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::RetVal' has a wrong offset!");

struct CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	double                                        __verse_0xB2CDDD72_Argument;
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R) == 0x000008, "Wrong alignment on CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R");
static_assert(sizeof(CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R) == 0x000028, "Wrong size on CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R");
static_assert(offsetof(CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R, RetVal) == 0x000020, "Member 'CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::RetVal' has a wrong offset!");

struct CompanionAI_companion_ai_runtime_SprintService final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_19[0x7];
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_companion_ai_runtime_SprintService) == 0x000008, "Wrong alignment on CompanionAI_companion_ai_runtime_SprintService");
static_assert(sizeof(CompanionAI_companion_ai_runtime_SprintService) == 0x000028, "Wrong size on CompanionAI_companion_ai_runtime_SprintService");
static_assert(offsetof(CompanionAI_companion_ai_runtime_SprintService, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_companion_ai_runtime_SprintService::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_SprintService, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_companion_ai_runtime_SprintService::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_SprintService, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_companion_ai_runtime_SprintService::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_SprintService, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_companion_ai_runtime_SprintService::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_SprintService, RetVal) == 0x000020, "Member 'CompanionAI_companion_ai_runtime_SprintService::RetVal' has a wrong offset!");

struct CompanionAI_companion_ai_runtime_TacticalSprintService final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_19[0x7];
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_companion_ai_runtime_TacticalSprintService) == 0x000008, "Wrong alignment on CompanionAI_companion_ai_runtime_TacticalSprintService");
static_assert(sizeof(CompanionAI_companion_ai_runtime_TacticalSprintService) == 0x000028, "Wrong size on CompanionAI_companion_ai_runtime_TacticalSprintService");
static_assert(offsetof(CompanionAI_companion_ai_runtime_TacticalSprintService, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_companion_ai_runtime_TacticalSprintService::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_TacticalSprintService, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_companion_ai_runtime_TacticalSprintService::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_TacticalSprintService, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_companion_ai_runtime_TacticalSprintService::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_TacticalSprintService, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_companion_ai_runtime_TacticalSprintService::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_TacticalSprintService, RetVal) == 0x000020, "Member 'CompanionAI_companion_ai_runtime_TacticalSprintService::RetVal' has a wrong offset!");

struct CompanionAI_companion_ai_runtime_WaitForDamage final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_19[0x7];
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_companion_ai_runtime_WaitForDamage) == 0x000008, "Wrong alignment on CompanionAI_companion_ai_runtime_WaitForDamage");
static_assert(sizeof(CompanionAI_companion_ai_runtime_WaitForDamage) == 0x000028, "Wrong size on CompanionAI_companion_ai_runtime_WaitForDamage");
static_assert(offsetof(CompanionAI_companion_ai_runtime_WaitForDamage, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_companion_ai_runtime_WaitForDamage::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_WaitForDamage, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_companion_ai_runtime_WaitForDamage::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_WaitForDamage, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_companion_ai_runtime_WaitForDamage::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_WaitForDamage, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_companion_ai_runtime_WaitForDamage::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_WaitForDamage, RetVal) == 0x000020, "Member 'CompanionAI_companion_ai_runtime_WaitForDamage::RetVal' has a wrong offset!");

struct CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	class UObject*                                __verse_0xB2CDDD72_Argument;
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R) == 0x000008, "Wrong alignment on CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R");
static_assert(sizeof(CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R) == 0x000028, "Wrong size on CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R");
static_assert(offsetof(CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R, RetVal) == 0x000020, "Member 'CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R::RetVal' has a wrong offset!");

struct CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct Ftuple_Lfort__character_Mfloat_R       __verse_0xB2CDDD72_Argument;
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R) == 0x000008, "Wrong alignment on CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R");
static_assert(sizeof(CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R) == 0x000030, "Wrong size on CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R");
static_assert(offsetof(CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R, RetVal) == 0x000028, "Member 'CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R::RetVal' has a wrong offset!");

struct CompanionAI_fort_br_character_actions_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__br__character__actions__interface_N_RIsFollowingBehaviorEnabled final
{
public:
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         RetVal : 1;
};
static_assert(alignof(CompanionAI_fort_br_character_actions_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__br__character__actions__interface_N_RIsFollowingBehaviorEnabled) == 0x000001, "Wrong alignment on CompanionAI_fort_br_character_actions_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__br__character__actions__interface_N_RIsFollowingBehaviorEnabled");
static_assert(sizeof(CompanionAI_fort_br_character_actions_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__br__character__actions__interface_N_RIsFollowingBehaviorEnabled) == 0x000002, "Wrong size on CompanionAI_fort_br_character_actions_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__br__character__actions__interface_N_RIsFollowingBehaviorEnabled");
static_assert(offsetof(CompanionAI_fort_br_character_actions_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__br__character__actions__interface_N_RIsFollowingBehaviorEnabled, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'CompanionAI_fort_br_character_actions_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__br__character__actions__interface_N_RIsFollowingBehaviorEnabled::__verse_0xB2CDDD72_Argument' has a wrong offset!");

struct CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_19[0x7];
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior) == 0x000008, "Wrong alignment on CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior");
static_assert(sizeof(CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior) == 0x000028, "Wrong size on CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior");
static_assert(offsetof(CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior, RetVal) == 0x000020, "Member 'CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior::RetVal' has a wrong offset!");

struct task_CompanionAI_companion_ai_runtime_GetNewThreat_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_CompanionAI_companion_ai_runtime_GetNewThreat_Update) == 0x000008, "Wrong alignment on task_CompanionAI_companion_ai_runtime_GetNewThreat_Update");
static_assert(sizeof(task_CompanionAI_companion_ai_runtime_GetNewThreat_Update) == 0x000008, "Wrong size on task_CompanionAI_companion_ai_runtime_GetNewThreat_Update");
static_assert(offsetof(task_CompanionAI_companion_ai_runtime_GetNewThreat_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_companion_ai_runtime_GetNewThreat_Update::RetVal' has a wrong offset!");

struct CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_19[0x7];
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior) == 0x000008, "Wrong alignment on CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior");
static_assert(sizeof(CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior) == 0x000028, "Wrong size on CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior");
static_assert(offsetof(CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior, RetVal) == 0x000020, "Member 'CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior::RetVal' has a wrong offset!");

struct CompanionAI_fort_npc_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__br__character__actions__interface_N_RIsFollowingBehaviorEnabled final
{
public:
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         RetVal : 1;
};
static_assert(alignof(CompanionAI_fort_npc_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__br__character__actions__interface_N_RIsFollowingBehaviorEnabled) == 0x000001, "Wrong alignment on CompanionAI_fort_npc_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__br__character__actions__interface_N_RIsFollowingBehaviorEnabled");
static_assert(sizeof(CompanionAI_fort_npc_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__br__character__actions__interface_N_RIsFollowingBehaviorEnabled) == 0x000002, "Wrong size on CompanionAI_fort_npc_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__br__character__actions__interface_N_RIsFollowingBehaviorEnabled");
static_assert(offsetof(CompanionAI_fort_npc_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__br__character__actions__interface_N_RIsFollowingBehaviorEnabled, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'CompanionAI_fort_npc_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__br__character__actions__interface_N_RIsFollowingBehaviorEnabled::__verse_0xB2CDDD72_Argument' has a wrong offset!");

struct CompanionAI_fort_npc_component_RunDefaultBehavior final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_19[0x7];
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_fort_npc_component_RunDefaultBehavior) == 0x000008, "Wrong alignment on CompanionAI_fort_npc_component_RunDefaultBehavior");
static_assert(sizeof(CompanionAI_fort_npc_component_RunDefaultBehavior) == 0x000028, "Wrong size on CompanionAI_fort_npc_component_RunDefaultBehavior");
static_assert(offsetof(CompanionAI_fort_npc_component_RunDefaultBehavior, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_fort_npc_component_RunDefaultBehavior::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_fort_npc_component_RunDefaultBehavior, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_fort_npc_component_RunDefaultBehavior::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_fort_npc_component_RunDefaultBehavior, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_fort_npc_component_RunDefaultBehavior::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_fort_npc_component_RunDefaultBehavior, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_fort_npc_component_RunDefaultBehavior::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_fort_npc_component_RunDefaultBehavior, RetVal) == 0x000020, "Member 'CompanionAI_fort_npc_component_RunDefaultBehavior::RetVal' has a wrong offset!");

struct CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RAreNPCCommandsEnabled final
{
public:
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         RetVal : 1;
};
static_assert(alignof(CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RAreNPCCommandsEnabled) == 0x000001, "Wrong alignment on CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RAreNPCCommandsEnabled");
static_assert(sizeof(CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RAreNPCCommandsEnabled) == 0x000002, "Wrong size on CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RAreNPCCommandsEnabled");
static_assert(offsetof(CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RAreNPCCommandsEnabled, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RAreNPCCommandsEnabled::__verse_0xB2CDDD72_Argument' has a wrong offset!");

struct CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RCanAcceptPingCommand final
{
public:
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         RetVal : 1;
};
static_assert(alignof(CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RCanAcceptPingCommand) == 0x000001, "Wrong alignment on CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RCanAcceptPingCommand");
static_assert(sizeof(CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RCanAcceptPingCommand) == 0x000002, "Wrong size on CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RCanAcceptPingCommand");
static_assert(offsetof(CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RCanAcceptPingCommand, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RCanAcceptPingCommand::__verse_0xB2CDDD72_Argument' has a wrong offset!");

struct CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertedEvent final
{
public:
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_1[0x7];
	class UObject*                                RetVal;
};
static_assert(alignof(CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertedEvent) == 0x000008, "Wrong alignment on CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertedEvent");
static_assert(sizeof(CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertedEvent) == 0x000010, "Wrong size on CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertedEvent");
static_assert(offsetof(CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertedEvent, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertedEvent::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertedEvent, RetVal) == 0x000008, "Member 'CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertedEvent::RetVal' has a wrong offset!");

struct CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertPingToAttack_L_Nagent_R final
{
public:
	class USimulation_agent*                      __verse_0xB2CDDD72_Argument;
};
static_assert(alignof(CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertPingToAttack_L_Nagent_R) == 0x000008, "Wrong alignment on CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertPingToAttack_L_Nagent_R");
static_assert(sizeof(CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertPingToAttack_L_Nagent_R) == 0x000008, "Wrong size on CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertPingToAttack_L_Nagent_R");
static_assert(offsetof(CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertPingToAttack_L_Nagent_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertPingToAttack_L_Nagent_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");

struct CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RDeclineNPCCommand_L_Nlogic_R final
{
public:
	uint8                                         __verse_0xB2CDDD72_Argument : 1;
};
static_assert(alignof(CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RDeclineNPCCommand_L_Nlogic_R) == 0x000001, "Wrong alignment on CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RDeclineNPCCommand_L_Nlogic_R");
static_assert(sizeof(CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RDeclineNPCCommand_L_Nlogic_R) == 0x000001, "Wrong size on CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RDeclineNPCCommand_L_Nlogic_R");

struct CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_REnableCommandWheel_L_Nlogic_R final
{
public:
	uint8                                         __verse_0xB2CDDD72_Argument : 1;
};
static_assert(alignof(CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_REnableCommandWheel_L_Nlogic_R) == 0x000001, "Wrong alignment on CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_REnableCommandWheel_L_Nlogic_R");
static_assert(sizeof(CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_REnableCommandWheel_L_Nlogic_R) == 0x000001, "Wrong size on CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_REnableCommandWheel_L_Nlogic_R");

struct alignas(0x08) CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RGetCurrentNPCCommand final
{
public:
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_1[0x7];
	FOptionProperty_                              RetVal;
};
static_assert(alignof(CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RGetCurrentNPCCommand) == 0x000008, "Wrong alignment on CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RGetCurrentNPCCommand");
static_assert(sizeof(CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RGetCurrentNPCCommand) == 0x000048, "Wrong size on CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RGetCurrentNPCCommand");
static_assert(offsetof(CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RGetCurrentNPCCommand, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RGetCurrentNPCCommand::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RGetCurrentNPCCommand, RetVal) == 0x000008, "Member 'CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RGetCurrentNPCCommand::RetVal' has a wrong offset!");

struct CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RIsAttackCommandEnabled final
{
public:
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         RetVal : 1;
};
static_assert(alignof(CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RIsAttackCommandEnabled) == 0x000001, "Wrong alignment on CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RIsAttackCommandEnabled");
static_assert(sizeof(CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RIsAttackCommandEnabled) == 0x000002, "Wrong size on CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RIsAttackCommandEnabled");
static_assert(offsetof(CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RIsAttackCommandEnabled, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RIsAttackCommandEnabled::__verse_0xB2CDDD72_Argument' has a wrong offset!");

struct CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RUnconvertedEvent final
{
public:
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_1[0x7];
	class UObject*                                RetVal;
};
static_assert(alignof(CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RUnconvertedEvent) == 0x000008, "Wrong alignment on CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RUnconvertedEvent");
static_assert(sizeof(CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RUnconvertedEvent) == 0x000010, "Wrong size on CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RUnconvertedEvent");
static_assert(offsetof(CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RUnconvertedEvent, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RUnconvertedEvent::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RUnconvertedEvent, RetVal) == 0x000008, "Member 'CompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RUnconvertedEvent::RetVal' has a wrong offset!");

struct CompanionAI_fort_ping_interface_OnNPCCommand final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_19[0x7];
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_fort_ping_interface_OnNPCCommand) == 0x000008, "Wrong alignment on CompanionAI_fort_ping_interface_OnNPCCommand");
static_assert(sizeof(CompanionAI_fort_ping_interface_OnNPCCommand) == 0x000028, "Wrong size on CompanionAI_fort_ping_interface_OnNPCCommand");
static_assert(offsetof(CompanionAI_fort_ping_interface_OnNPCCommand, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_fort_ping_interface_OnNPCCommand::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_fort_ping_interface_OnNPCCommand, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_fort_ping_interface_OnNPCCommand::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_fort_ping_interface_OnNPCCommand, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_fort_ping_interface_OnNPCCommand::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_fort_ping_interface_OnNPCCommand, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_fort_ping_interface_OnNPCCommand::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_fort_ping_interface_OnNPCCommand, RetVal) == 0x000020, "Member 'CompanionAI_fort_ping_interface_OnNPCCommand::RetVal' has a wrong offset!");

struct task_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R_Update) == 0x000008, "Wrong alignment on task_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R_Update");
static_assert(sizeof(task_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R_Update) == 0x000008, "Wrong size on task_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R_Update");
static_assert(offsetof(task_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R_Update::RetVal' has a wrong offset!");

struct task_CompanionAI_companion_ai_runtime_LookAtThreatTask_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_CompanionAI_companion_ai_runtime_LookAtThreatTask_Update) == 0x000008, "Wrong alignment on task_CompanionAI_companion_ai_runtime_LookAtThreatTask_Update");
static_assert(sizeof(task_CompanionAI_companion_ai_runtime_LookAtThreatTask_Update) == 0x000008, "Wrong size on task_CompanionAI_companion_ai_runtime_LookAtThreatTask_Update");
static_assert(offsetof(task_CompanionAI_companion_ai_runtime_LookAtThreatTask_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_companion_ai_runtime_LookAtThreatTask_Update::RetVal' has a wrong offset!");

struct task_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R_Update) == 0x000008, "Wrong alignment on task_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R_Update");
static_assert(sizeof(task_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R_Update) == 0x000008, "Wrong size on task_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R_Update");
static_assert(offsetof(task_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R_Update::RetVal' has a wrong offset!");

struct CompanionAI_ping_component__InitCDO final
{
public:
	class UVerseEngine_multicast_delegate*        _ExprResult_0;
	uint64                                        _InstancingGraph_1;
	class UVerseEngine_multicast_delegate*        _ExprResult_2;
	uint64                                        _InstancingGraph_3;
};
static_assert(alignof(CompanionAI_ping_component__InitCDO) == 0x000008, "Wrong alignment on CompanionAI_ping_component__InitCDO");
static_assert(sizeof(CompanionAI_ping_component__InitCDO) == 0x000020, "Wrong size on CompanionAI_ping_component__InitCDO");
static_assert(offsetof(CompanionAI_ping_component__InitCDO, _ExprResult_0) == 0x000000, "Member 'CompanionAI_ping_component__InitCDO::_ExprResult_0' has a wrong offset!");
static_assert(offsetof(CompanionAI_ping_component__InitCDO, _InstancingGraph_1) == 0x000008, "Member 'CompanionAI_ping_component__InitCDO::_InstancingGraph_1' has a wrong offset!");
static_assert(offsetof(CompanionAI_ping_component__InitCDO, _ExprResult_2) == 0x000010, "Member 'CompanionAI_ping_component__InitCDO::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(CompanionAI_ping_component__InitCDO, _InstancingGraph_3) == 0x000018, "Member 'CompanionAI_ping_component__InitCDO::_InstancingGraph_3' has a wrong offset!");

struct CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RAreNPCCommandsEnabled final
{
public:
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         RetVal : 1;
};
static_assert(alignof(CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RAreNPCCommandsEnabled) == 0x000001, "Wrong alignment on CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RAreNPCCommandsEnabled");
static_assert(sizeof(CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RAreNPCCommandsEnabled) == 0x000002, "Wrong size on CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RAreNPCCommandsEnabled");
static_assert(offsetof(CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RAreNPCCommandsEnabled, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RAreNPCCommandsEnabled::__verse_0xB2CDDD72_Argument' has a wrong offset!");

struct CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RCanAcceptPingCommand final
{
public:
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         RetVal : 1;
};
static_assert(alignof(CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RCanAcceptPingCommand) == 0x000001, "Wrong alignment on CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RCanAcceptPingCommand");
static_assert(sizeof(CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RCanAcceptPingCommand) == 0x000002, "Wrong size on CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RCanAcceptPingCommand");
static_assert(offsetof(CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RCanAcceptPingCommand, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RCanAcceptPingCommand::__verse_0xB2CDDD72_Argument' has a wrong offset!");

struct CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertedEvent final
{
public:
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_1[0x7];
	class UObject*                                RetVal;
};
static_assert(alignof(CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertedEvent) == 0x000008, "Wrong alignment on CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertedEvent");
static_assert(sizeof(CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertedEvent) == 0x000010, "Wrong size on CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertedEvent");
static_assert(offsetof(CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertedEvent, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertedEvent::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertedEvent, RetVal) == 0x000008, "Member 'CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertedEvent::RetVal' has a wrong offset!");

struct CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertPingToAttack_L_Nagent_R final
{
public:
	class USimulation_agent*                      __verse_0xB2CDDD72_Argument;
};
static_assert(alignof(CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertPingToAttack_L_Nagent_R) == 0x000008, "Wrong alignment on CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertPingToAttack_L_Nagent_R");
static_assert(sizeof(CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertPingToAttack_L_Nagent_R) == 0x000008, "Wrong size on CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertPingToAttack_L_Nagent_R");
static_assert(offsetof(CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertPingToAttack_L_Nagent_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertPingToAttack_L_Nagent_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");

struct CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RDeclineNPCCommand_L_Nlogic_R final
{
public:
	uint8                                         __verse_0xB2CDDD72_Argument : 1;
};
static_assert(alignof(CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RDeclineNPCCommand_L_Nlogic_R) == 0x000001, "Wrong alignment on CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RDeclineNPCCommand_L_Nlogic_R");
static_assert(sizeof(CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RDeclineNPCCommand_L_Nlogic_R) == 0x000001, "Wrong size on CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RDeclineNPCCommand_L_Nlogic_R");

struct CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_REnableCommandWheel_L_Nlogic_R final
{
public:
	uint8                                         __verse_0xB2CDDD72_Argument : 1;
};
static_assert(alignof(CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_REnableCommandWheel_L_Nlogic_R) == 0x000001, "Wrong alignment on CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_REnableCommandWheel_L_Nlogic_R");
static_assert(sizeof(CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_REnableCommandWheel_L_Nlogic_R) == 0x000001, "Wrong size on CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_REnableCommandWheel_L_Nlogic_R");

struct alignas(0x08) CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RGetCurrentNPCCommand final
{
public:
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_1[0x7];
	FOptionProperty_                              RetVal;
};
static_assert(alignof(CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RGetCurrentNPCCommand) == 0x000008, "Wrong alignment on CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RGetCurrentNPCCommand");
static_assert(sizeof(CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RGetCurrentNPCCommand) == 0x000048, "Wrong size on CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RGetCurrentNPCCommand");
static_assert(offsetof(CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RGetCurrentNPCCommand, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RGetCurrentNPCCommand::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RGetCurrentNPCCommand, RetVal) == 0x000008, "Member 'CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RGetCurrentNPCCommand::RetVal' has a wrong offset!");

struct CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RIsAttackCommandEnabled final
{
public:
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         RetVal : 1;
};
static_assert(alignof(CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RIsAttackCommandEnabled) == 0x000001, "Wrong alignment on CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RIsAttackCommandEnabled");
static_assert(sizeof(CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RIsAttackCommandEnabled) == 0x000002, "Wrong size on CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RIsAttackCommandEnabled");
static_assert(offsetof(CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RIsAttackCommandEnabled, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RIsAttackCommandEnabled::__verse_0xB2CDDD72_Argument' has a wrong offset!");

struct CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RUnconvertedEvent final
{
public:
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_1[0x7];
	class UObject*                                RetVal;
};
static_assert(alignof(CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RUnconvertedEvent) == 0x000008, "Wrong alignment on CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RUnconvertedEvent");
static_assert(sizeof(CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RUnconvertedEvent) == 0x000010, "Wrong size on CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RUnconvertedEvent");
static_assert(offsetof(CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RUnconvertedEvent, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RUnconvertedEvent::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RUnconvertedEvent, RetVal) == 0x000008, "Member 'CompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RUnconvertedEvent::RetVal' has a wrong offset!");

struct CompanionAI_ping_component_OnNPCCommand final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct CompanionAI::Ftuple_L_R                __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_19[0x7];
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(CompanionAI_ping_component_OnNPCCommand) == 0x000008, "Wrong alignment on CompanionAI_ping_component_OnNPCCommand");
static_assert(sizeof(CompanionAI_ping_component_OnNPCCommand) == 0x000028, "Wrong size on CompanionAI_ping_component_OnNPCCommand");
static_assert(offsetof(CompanionAI_ping_component_OnNPCCommand, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'CompanionAI_ping_component_OnNPCCommand::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(CompanionAI_ping_component_OnNPCCommand, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'CompanionAI_ping_component_OnNPCCommand::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(CompanionAI_ping_component_OnNPCCommand, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'CompanionAI_ping_component_OnNPCCommand::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(CompanionAI_ping_component_OnNPCCommand, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'CompanionAI_ping_component_OnNPCCommand::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(CompanionAI_ping_component_OnNPCCommand, RetVal) == 0x000020, "Member 'CompanionAI_ping_component_OnNPCCommand::RetVal' has a wrong offset!");

struct task_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R_Update) == 0x000008, "Wrong alignment on task_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R_Update");
static_assert(sizeof(task_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R_Update) == 0x000008, "Wrong size on task_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R_Update");
static_assert(offsetof(task_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R_Update::RetVal' has a wrong offset!");

struct task_CompanionAI_companion_ai_OnBegin_Update final
{
public:
	int64                                         RetVal;
	uint64                                        _InstancingGraph_48;
};
static_assert(alignof(task_CompanionAI_companion_ai_OnBegin_Update) == 0x000008, "Wrong alignment on task_CompanionAI_companion_ai_OnBegin_Update");
static_assert(sizeof(task_CompanionAI_companion_ai_OnBegin_Update) == 0x000010, "Wrong size on task_CompanionAI_companion_ai_OnBegin_Update");
static_assert(offsetof(task_CompanionAI_companion_ai_OnBegin_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_companion_ai_OnBegin_Update::RetVal' has a wrong offset!");
static_assert(offsetof(task_CompanionAI_companion_ai_OnBegin_Update, _InstancingGraph_48) == 0x000008, "Member 'task_CompanionAI_companion_ai_OnBegin_Update::_InstancingGraph_48' has a wrong offset!");

struct task_CompanionAI_companion_creature_GameLoop_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_CompanionAI_companion_creature_GameLoop_Update) == 0x000008, "Wrong alignment on task_CompanionAI_companion_creature_GameLoop_Update");
static_assert(sizeof(task_CompanionAI_companion_creature_GameLoop_Update) == 0x000008, "Wrong size on task_CompanionAI_companion_creature_GameLoop_Update");
static_assert(offsetof(task_CompanionAI_companion_creature_GameLoop_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_companion_creature_GameLoop_Update::RetVal' has a wrong offset!");

struct task_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R_Update) == 0x000008, "Wrong alignment on task_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R_Update");
static_assert(sizeof(task_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R_Update) == 0x000008, "Wrong size on task_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R_Update");
static_assert(offsetof(task_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R_Update::RetVal' has a wrong offset!");

struct task_CompanionAI_companion_creature_OnBegin_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_CompanionAI_companion_creature_OnBegin_Update) == 0x000008, "Wrong alignment on task_CompanionAI_companion_creature_OnBegin_Update");
static_assert(sizeof(task_CompanionAI_companion_creature_OnBegin_Update) == 0x000008, "Wrong size on task_CompanionAI_companion_creature_OnBegin_Update");
static_assert(offsetof(task_CompanionAI_companion_creature_OnBegin_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_companion_creature_OnBegin_Update::RetVal' has a wrong offset!");

struct task_CompanionAI_companion_ai_runtime_CrouchService_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_CompanionAI_companion_ai_runtime_CrouchService_Update) == 0x000008, "Wrong alignment on task_CompanionAI_companion_ai_runtime_CrouchService_Update");
static_assert(sizeof(task_CompanionAI_companion_ai_runtime_CrouchService_Update) == 0x000008, "Wrong size on task_CompanionAI_companion_ai_runtime_CrouchService_Update");
static_assert(offsetof(task_CompanionAI_companion_ai_runtime_CrouchService_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_companion_ai_runtime_CrouchService_Update::RetVal' has a wrong offset!");

struct task_CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior_Update) == 0x000008, "Wrong alignment on task_CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior_Update");
static_assert(sizeof(task_CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior_Update) == 0x000008, "Wrong size on task_CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior_Update");
static_assert(offsetof(task_CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior_Update::RetVal' has a wrong offset!");

struct task_CompanionAI_companion_ai_runtime_CrouchUntilHit_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_CompanionAI_companion_ai_runtime_CrouchUntilHit_Update) == 0x000008, "Wrong alignment on task_CompanionAI_companion_ai_runtime_CrouchUntilHit_Update");
static_assert(sizeof(task_CompanionAI_companion_ai_runtime_CrouchUntilHit_Update) == 0x000008, "Wrong size on task_CompanionAI_companion_ai_runtime_CrouchUntilHit_Update");
static_assert(offsetof(task_CompanionAI_companion_ai_runtime_CrouchUntilHit_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_companion_ai_runtime_CrouchUntilHit_Update::RetVal' has a wrong offset!");

struct task_CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior_Update) == 0x000008, "Wrong alignment on task_CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior_Update");
static_assert(sizeof(task_CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior_Update) == 0x000008, "Wrong size on task_CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior_Update");
static_assert(offsetof(task_CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior_Update::RetVal' has a wrong offset!");

struct task_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R_Update) == 0x000008, "Wrong alignment on task_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R_Update");
static_assert(sizeof(task_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R_Update) == 0x000008, "Wrong size on task_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R_Update");
static_assert(offsetof(task_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R_Update::RetVal' has a wrong offset!");

struct task_CompanionAI_fort_creature_component_RunDefaultBehavior_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_CompanionAI_fort_creature_component_RunDefaultBehavior_Update) == 0x000008, "Wrong alignment on task_CompanionAI_fort_creature_component_RunDefaultBehavior_Update");
static_assert(sizeof(task_CompanionAI_fort_creature_component_RunDefaultBehavior_Update) == 0x000008, "Wrong size on task_CompanionAI_fort_creature_component_RunDefaultBehavior_Update");
static_assert(offsetof(task_CompanionAI_fort_creature_component_RunDefaultBehavior_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_fort_creature_component_RunDefaultBehavior_Update::RetVal' has a wrong offset!");

struct task_CompanionAI_companion_ai_runtime_GameLoop_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_CompanionAI_companion_ai_runtime_GameLoop_Update) == 0x000008, "Wrong alignment on task_CompanionAI_companion_ai_runtime_GameLoop_Update");
static_assert(sizeof(task_CompanionAI_companion_ai_runtime_GameLoop_Update) == 0x000008, "Wrong size on task_CompanionAI_companion_ai_runtime_GameLoop_Update");
static_assert(offsetof(task_CompanionAI_companion_ai_runtime_GameLoop_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_companion_ai_runtime_GameLoop_Update::RetVal' has a wrong offset!");

struct task_CompanionAI_fort_ping_interface_OnNPCCommand_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_CompanionAI_fort_ping_interface_OnNPCCommand_Update) == 0x000008, "Wrong alignment on task_CompanionAI_fort_ping_interface_OnNPCCommand_Update");
static_assert(sizeof(task_CompanionAI_fort_ping_interface_OnNPCCommand_Update) == 0x000008, "Wrong size on task_CompanionAI_fort_ping_interface_OnNPCCommand_Update");
static_assert(offsetof(task_CompanionAI_fort_ping_interface_OnNPCCommand_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_fort_ping_interface_OnNPCCommand_Update::RetVal' has a wrong offset!");

struct task_CompanionAI_companion_ai_runtime_GetNewObstacle_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_CompanionAI_companion_ai_runtime_GetNewObstacle_Update) == 0x000008, "Wrong alignment on task_CompanionAI_companion_ai_runtime_GetNewObstacle_Update");
static_assert(sizeof(task_CompanionAI_companion_ai_runtime_GetNewObstacle_Update) == 0x000008, "Wrong size on task_CompanionAI_companion_ai_runtime_GetNewObstacle_Update");
static_assert(offsetof(task_CompanionAI_companion_ai_runtime_GetNewObstacle_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_companion_ai_runtime_GetNewObstacle_Update::RetVal' has a wrong offset!");

struct task_CompanionAI_ping_component_OnNPCCommand_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_CompanionAI_ping_component_OnNPCCommand_Update) == 0x000008, "Wrong alignment on task_CompanionAI_ping_component_OnNPCCommand_Update");
static_assert(sizeof(task_CompanionAI_ping_component_OnNPCCommand_Update) == 0x000008, "Wrong size on task_CompanionAI_ping_component_OnNPCCommand_Update");
static_assert(offsetof(task_CompanionAI_ping_component_OnNPCCommand_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_ping_component_OnNPCCommand_Update::RetVal' has a wrong offset!");

struct task_CompanionAI_companion_ai_runtime_GetNewTargetPerception_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_CompanionAI_companion_ai_runtime_GetNewTargetPerception_Update) == 0x000008, "Wrong alignment on task_CompanionAI_companion_ai_runtime_GetNewTargetPerception_Update");
static_assert(sizeof(task_CompanionAI_companion_ai_runtime_GetNewTargetPerception_Update) == 0x000008, "Wrong size on task_CompanionAI_companion_ai_runtime_GetNewTargetPerception_Update");
static_assert(offsetof(task_CompanionAI_companion_ai_runtime_GetNewTargetPerception_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_companion_ai_runtime_GetNewTargetPerception_Update::RetVal' has a wrong offset!");

struct task_CompanionAI_companion_ai_runtime_GetThreat_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_CompanionAI_companion_ai_runtime_GetThreat_Update) == 0x000008, "Wrong alignment on task_CompanionAI_companion_ai_runtime_GetThreat_Update");
static_assert(sizeof(task_CompanionAI_companion_ai_runtime_GetThreat_Update) == 0x000008, "Wrong size on task_CompanionAI_companion_ai_runtime_GetThreat_Update");
static_assert(offsetof(task_CompanionAI_companion_ai_runtime_GetThreat_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_companion_ai_runtime_GetThreat_Update::RetVal' has a wrong offset!");

struct task_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R_Update final
{
public:
	int64                                         RetVal;
	uint64                                        _InstancingGraph_34;
	uint64                                        _InstancingGraph_49;
};
static_assert(alignof(task_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R_Update) == 0x000008, "Wrong alignment on task_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R_Update");
static_assert(sizeof(task_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R_Update) == 0x000018, "Wrong size on task_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R_Update");
static_assert(offsetof(task_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R_Update::RetVal' has a wrong offset!");
static_assert(offsetof(task_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R_Update, _InstancingGraph_34) == 0x000008, "Member 'task_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R_Update::_InstancingGraph_34' has a wrong offset!");
static_assert(offsetof(task_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R_Update, _InstancingGraph_49) == 0x000010, "Member 'task_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_Nfloat_M_Nlogic_R_Update::_InstancingGraph_49' has a wrong offset!");

struct task_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R_Update) == 0x000008, "Wrong alignment on task_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R_Update");
static_assert(sizeof(task_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R_Update) == 0x000008, "Wrong size on task_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R_Update");
static_assert(offsetof(task_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R_Update::RetVal' has a wrong offset!");

struct task_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R_Update) == 0x000008, "Wrong alignment on task_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R_Update");
static_assert(sizeof(task_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R_Update) == 0x000008, "Wrong size on task_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R_Update");
static_assert(offsetof(task_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R_Update::RetVal' has a wrong offset!");

struct task_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R_Update) == 0x000008, "Wrong alignment on task_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R_Update");
static_assert(sizeof(task_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R_Update) == 0x000008, "Wrong size on task_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R_Update");
static_assert(offsetof(task_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R_Update::RetVal' has a wrong offset!");

struct task_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R_Update) == 0x000008, "Wrong alignment on task_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R_Update");
static_assert(sizeof(task_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R_Update) == 0x000008, "Wrong size on task_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R_Update");
static_assert(offsetof(task_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R_Update::RetVal' has a wrong offset!");

struct task_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R_Update) == 0x000008, "Wrong alignment on task_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R_Update");
static_assert(sizeof(task_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R_Update) == 0x000008, "Wrong size on task_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R_Update");
static_assert(offsetof(task_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R_Update::RetVal' has a wrong offset!");

struct task_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R_Update) == 0x000008, "Wrong alignment on task_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R_Update");
static_assert(sizeof(task_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R_Update) == 0x000008, "Wrong size on task_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R_Update");
static_assert(offsetof(task_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_companion_ai_runtime_HandleObstacleTask_L_N_Qentity_R_Update::RetVal' has a wrong offset!");

struct task_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R_Update) == 0x000008, "Wrong alignment on task_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R_Update");
static_assert(sizeof(task_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R_Update) == 0x000008, "Wrong size on task_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R_Update");
static_assert(offsetof(task_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R_Update::RetVal' has a wrong offset!");

struct task_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget_Update) == 0x000008, "Wrong alignment on task_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget_Update");
static_assert(sizeof(task_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget_Update) == 0x000008, "Wrong size on task_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget_Update");
static_assert(offsetof(task_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget_Update::RetVal' has a wrong offset!");

struct task_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R_Update) == 0x000008, "Wrong alignment on task_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R_Update");
static_assert(sizeof(task_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R_Update) == 0x000008, "Wrong size on task_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R_Update");
static_assert(offsetof(task_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R_Update::RetVal' has a wrong offset!");

struct task_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R_Update) == 0x000008, "Wrong alignment on task_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R_Update");
static_assert(sizeof(task_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R_Update) == 0x000008, "Wrong size on task_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R_Update");
static_assert(offsetof(task_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R_Update::RetVal' has a wrong offset!");

struct task_CompanionAI_companion_ai_runtime_SprintService_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_CompanionAI_companion_ai_runtime_SprintService_Update) == 0x000008, "Wrong alignment on task_CompanionAI_companion_ai_runtime_SprintService_Update");
static_assert(sizeof(task_CompanionAI_companion_ai_runtime_SprintService_Update) == 0x000008, "Wrong size on task_CompanionAI_companion_ai_runtime_SprintService_Update");
static_assert(offsetof(task_CompanionAI_companion_ai_runtime_SprintService_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_companion_ai_runtime_SprintService_Update::RetVal' has a wrong offset!");

struct task_CompanionAI_companion_ai_runtime_TacticalSprintService_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_CompanionAI_companion_ai_runtime_TacticalSprintService_Update) == 0x000008, "Wrong alignment on task_CompanionAI_companion_ai_runtime_TacticalSprintService_Update");
static_assert(sizeof(task_CompanionAI_companion_ai_runtime_TacticalSprintService_Update) == 0x000008, "Wrong size on task_CompanionAI_companion_ai_runtime_TacticalSprintService_Update");
static_assert(offsetof(task_CompanionAI_companion_ai_runtime_TacticalSprintService_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_companion_ai_runtime_TacticalSprintService_Update::RetVal' has a wrong offset!");

struct task_CompanionAI_companion_ai_runtime_WaitForDamage_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_CompanionAI_companion_ai_runtime_WaitForDamage_Update) == 0x000008, "Wrong alignment on task_CompanionAI_companion_ai_runtime_WaitForDamage_Update");
static_assert(sizeof(task_CompanionAI_companion_ai_runtime_WaitForDamage_Update) == 0x000008, "Wrong size on task_CompanionAI_companion_ai_runtime_WaitForDamage_Update");
static_assert(offsetof(task_CompanionAI_companion_ai_runtime_WaitForDamage_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_companion_ai_runtime_WaitForDamage_Update::RetVal' has a wrong offset!");

struct task_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R_Update) == 0x000008, "Wrong alignment on task_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R_Update");
static_assert(sizeof(task_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R_Update) == 0x000008, "Wrong size on task_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R_Update");
static_assert(offsetof(task_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_companion_ai_runtime_WaitForTargetInVehicle_L_Nfort__character_R_Update::RetVal' has a wrong offset!");

struct task_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R_Update) == 0x000008, "Wrong alignment on task_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R_Update");
static_assert(sizeof(task_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R_Update) == 0x000008, "Wrong size on task_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R_Update");
static_assert(offsetof(task_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R_Update, RetVal) == 0x000000, "Member 'task_CompanionAI_companion_ai_runtime_WaitForTargetMovement_L_Nfort__character_M_Nfloat_R_Update::RetVal' has a wrong offset!");

}
