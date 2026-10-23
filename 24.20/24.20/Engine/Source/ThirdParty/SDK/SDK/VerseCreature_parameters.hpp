#pragma once

#include "Basic.hpp"

#include "VerseCreature_structs.hpp"
#include "VerseAIBase_0_structs.hpp"

namespace SDK::Params
{

struct task_VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R_Update) == 0x000008, "Wrong alignment on task_VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R_Update");
static_assert(sizeof(task_VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R_Update) == 0x000008, "Wrong size on task_VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R_Update");
static_assert(offsetof(task_VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R_Update, RetVal) == 0x000000, "Member 'task_VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R_Update::RetVal' has a wrong offset!");

struct task_VerseCreature_creature_component_MoveInRangeToAttack_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_VerseCreature_creature_component_MoveInRangeToAttack_Update) == 0x000008, "Wrong alignment on task_VerseCreature_creature_component_MoveInRangeToAttack_Update");
static_assert(sizeof(task_VerseCreature_creature_component_MoveInRangeToAttack_Update) == 0x000008, "Wrong size on task_VerseCreature_creature_component_MoveInRangeToAttack_Update");
static_assert(offsetof(task_VerseCreature_creature_component_MoveInRangeToAttack_Update, RetVal) == 0x000000, "Member 'task_VerseCreature_creature_component_MoveInRangeToAttack_Update::RetVal' has a wrong offset!");

struct task_VerseCreature_creature_component_RoamAround_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_VerseCreature_creature_component_RoamAround_Update) == 0x000008, "Wrong alignment on task_VerseCreature_creature_component_RoamAround_Update");
static_assert(sizeof(task_VerseCreature_creature_component_RoamAround_Update) == 0x000008, "Wrong size on task_VerseCreature_creature_component_RoamAround_Update");
static_assert(offsetof(task_VerseCreature_creature_component_RoamAround_Update, RetVal) == 0x000000, "Member 'task_VerseCreature_creature_component_RoamAround_Update::RetVal' has a wrong offset!");

struct alignas(0x08) VerseCreature_creature_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fnavigation__interface_N_RGetCurrentDestination final
{
public:
	struct VerseCreature::Ftuple_L_R              __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_1[0x7];
	FOptionProperty_                              RetVal;
};
static_assert(alignof(VerseCreature_creature_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fnavigation__interface_N_RGetCurrentDestination) == 0x000008, "Wrong alignment on VerseCreature_creature_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fnavigation__interface_N_RGetCurrentDestination");
static_assert(sizeof(VerseCreature_creature_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fnavigation__interface_N_RGetCurrentDestination) == 0x000028, "Wrong size on VerseCreature_creature_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fnavigation__interface_N_RGetCurrentDestination");
static_assert(offsetof(VerseCreature_creature_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fnavigation__interface_N_RGetCurrentDestination, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'VerseCreature_creature_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fnavigation__interface_N_RGetCurrentDestination::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(VerseCreature_creature_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fnavigation__interface_N_RGetCurrentDestination, RetVal) == 0x000008, "Member 'VerseCreature_creature_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fnavigation__interface_N_RGetCurrentDestination::RetVal' has a wrong offset!");

struct VerseCreature_creature_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fnavigation__interface_N_RStopNavigation final
{
public:
	struct VerseCreature::Ftuple_L_R              __verse_0xB2CDDD72_Argument;
	EVerseAIBase_action_result                    RetVal;
};
static_assert(alignof(VerseCreature_creature_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fnavigation__interface_N_RStopNavigation) == 0x000001, "Wrong alignment on VerseCreature_creature_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fnavigation__interface_N_RStopNavigation");
static_assert(sizeof(VerseCreature_creature_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fnavigation__interface_N_RStopNavigation) == 0x000002, "Wrong size on VerseCreature_creature_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fnavigation__interface_N_RStopNavigation");
static_assert(offsetof(VerseCreature_creature_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fnavigation__interface_N_RStopNavigation, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'VerseCreature_creature_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fnavigation__interface_N_RStopNavigation::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(VerseCreature_creature_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fnavigation__interface_N_RStopNavigation, RetVal) == 0x000001, "Member 'VerseCreature_creature_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fnavigation__interface_N_RStopNavigation::RetVal' has a wrong offset!");

struct VerseCreature_creature_component_MoveInRangeToAttack final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct VerseCreature::Ftuple_L_R              __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_19[0x7];
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(VerseCreature_creature_component_MoveInRangeToAttack) == 0x000008, "Wrong alignment on VerseCreature_creature_component_MoveInRangeToAttack");
static_assert(sizeof(VerseCreature_creature_component_MoveInRangeToAttack) == 0x000028, "Wrong size on VerseCreature_creature_component_MoveInRangeToAttack");
static_assert(offsetof(VerseCreature_creature_component_MoveInRangeToAttack, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'VerseCreature_creature_component_MoveInRangeToAttack::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(VerseCreature_creature_component_MoveInRangeToAttack, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'VerseCreature_creature_component_MoveInRangeToAttack::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(VerseCreature_creature_component_MoveInRangeToAttack, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'VerseCreature_creature_component_MoveInRangeToAttack::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(VerseCreature_creature_component_MoveInRangeToAttack, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'VerseCreature_creature_component_MoveInRangeToAttack::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(VerseCreature_creature_component_MoveInRangeToAttack, RetVal) == 0x000020, "Member 'VerseCreature_creature_component_MoveInRangeToAttack::RetVal' has a wrong offset!");

struct VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct VerseCreature::Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R __verse_0xB2CDDD72_Argument;
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R) == 0x000008, "Wrong alignment on VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R");
static_assert(sizeof(VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R) == 0x000038, "Wrong size on VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R");
static_assert(offsetof(VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R, RetVal) == 0x000030, "Member 'VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R::RetVal' has a wrong offset!");

struct VerseCreature_creature_component_RoamAround final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct VerseCreature::Ftuple_L_R              __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_19[0x7];
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(VerseCreature_creature_component_RoamAround) == 0x000008, "Wrong alignment on VerseCreature_creature_component_RoamAround");
static_assert(sizeof(VerseCreature_creature_component_RoamAround) == 0x000028, "Wrong size on VerseCreature_creature_component_RoamAround");
static_assert(offsetof(VerseCreature_creature_component_RoamAround, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'VerseCreature_creature_component_RoamAround::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(VerseCreature_creature_component_RoamAround, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'VerseCreature_creature_component_RoamAround::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(VerseCreature_creature_component_RoamAround, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'VerseCreature_creature_component_RoamAround::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(VerseCreature_creature_component_RoamAround, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'VerseCreature_creature_component_RoamAround::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(VerseCreature_creature_component_RoamAround, RetVal) == 0x000020, "Member 'VerseCreature_creature_component_RoamAround::RetVal' has a wrong offset!");

}
