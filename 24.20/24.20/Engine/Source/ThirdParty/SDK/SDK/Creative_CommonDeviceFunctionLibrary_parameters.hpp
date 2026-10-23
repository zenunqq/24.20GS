#pragma once

#include "Basic.hpp"

#include "ECreativeColorSetType_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "EBoolWithUnset_structs.hpp"
#include "ECreativeTeamColor_structs.hpp"
#include "EAwardScoreType_structs.hpp"

namespace SDK::Params
{

struct Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger final
{
public:
	class AActor*                                 Actor_To_Check;
	class UPrimitiveComponent*                    Overlap_Component;
	class UObject*                                __WorldContext;
	bool                                          CanTrigger;
	uint8                                         Pad_19[0x7];
	class AController*                            Controller;
	bool                                          local_CanTrigger;
	uint8                                         Pad_29[0x7];
	struct FGameplayTagContainer                  DeviceDontTriggerTags;
	class AController*                            local_controller;
	class AFortPlayerPawn*                        Temp_object_Variable;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_61[0x7];
	class AController*                            CallFunc_GetController_ReturnValue;
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput;
	bool                                          CallFunc_HasAllMatchingGameplayTags_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_94[0x4];
	TScriptInterface<class IFortVehicleInterface> K2Node_DynamicCast_AsFort_Vehicle_Interface;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_A9[0x7];
	class AFortPlayerPawn*                        CallFunc_GetDriver_ReturnValue;
	ECollisionChannel                             CallFunc_GetCollisionObjectType_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
};
static_assert(alignof(Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger) == 0x000008, "Wrong alignment on Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger");
static_assert(sizeof(Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger) == 0x0000C0, "Wrong size on Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger, Actor_To_Check) == 0x000000, "Member 'Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger::Actor_To_Check' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger, Overlap_Component) == 0x000008, "Member 'Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger::Overlap_Component' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger, __WorldContext) == 0x000010, "Member 'Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger::__WorldContext' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger, CanTrigger) == 0x000018, "Member 'Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger::CanTrigger' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger, Controller) == 0x000020, "Member 'Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger::Controller' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger, local_CanTrigger) == 0x000028, "Member 'Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger::local_CanTrigger' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger, DeviceDontTriggerTags) == 0x000030, "Member 'Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger::DeviceDontTriggerTags' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger, local_controller) == 0x000050, "Member 'Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger::local_controller' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger, Temp_object_Variable) == 0x000058, "Member 'Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger, CallFunc_GetController_ReturnValue) == 0x000068, "Member 'Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger, CallFunc_GetFortPlayerControllerFromActor_ReturnValue) == 0x000070, "Member 'Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger::CallFunc_GetFortPlayerControllerFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000078, "Member 'Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger, CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput) == 0x000080, "Member 'Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger::CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger, CallFunc_HasAllMatchingGameplayTags_ReturnValue) == 0x000090, "Member 'Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger::CallFunc_HasAllMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger, CallFunc_IsValid_ReturnValue_1) == 0x000091, "Member 'Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger, CallFunc_Not_PreBool_ReturnValue) == 0x000092, "Member 'Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger, CallFunc_IsValid_ReturnValue_2) == 0x000093, "Member 'Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger, K2Node_DynamicCast_AsFort_Vehicle_Interface) == 0x000098, "Member 'Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger::K2Node_DynamicCast_AsFort_Vehicle_Interface' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger, CallFunc_GetDriver_ReturnValue) == 0x0000B0, "Member 'Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger::CallFunc_GetDriver_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger, CallFunc_GetCollisionObjectType_ReturnValue) == 0x0000B8, "Member 'Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger::CallFunc_GetCollisionObjectType_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000B9, "Member 'Creative_CommonDeviceFunctionLibrary_C_ActorCanTrigger::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

struct Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve final
{
public:
	double                                        Delta_Time;
	double                                        Current_Time;
	class UCurveFloat*                            FCurve;
	double                                        Animation_Time;
	bool                                          Invert_Time;
	uint8                                         Pad_21[0x7];
	class UObject*                                __WorldContext;
	double                                        Value;
	bool                                          bIsComplete;
	uint8                                         Pad_39[0x7];
	double                                        EndTime;
	double                                        CurveFloatResult;
	double                                        TimeAlpha;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5A[0x6];
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	double                                        K2Node_Select_Default;
	double                                        CallFunc_FClamp_ReturnValue;
	float                                         CallFunc_GetFloatValue_ReturnValue;
	uint8                                         Pad_8C[0x4];
	double                                        Temp_real_Variable;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_99[0x7];
	double                                        K2Node_Select_Default_1;
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_A9[0x3];
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast;
	double                                        K2Node_VariableSet_CurveFloatResult_ImplicitCast;
};
static_assert(alignof(Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve) == 0x000008, "Wrong alignment on Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve");
static_assert(sizeof(Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve) == 0x0000B8, "Wrong size on Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve, Delta_Time) == 0x000000, "Member 'Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve::Delta_Time' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve, Current_Time) == 0x000008, "Member 'Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve::Current_Time' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve, FCurve) == 0x000010, "Member 'Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve::FCurve' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve, Animation_Time) == 0x000018, "Member 'Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve::Animation_Time' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve, Invert_Time) == 0x000020, "Member 'Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve::Invert_Time' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve, __WorldContext) == 0x000028, "Member 'Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve::__WorldContext' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve, Value) == 0x000030, "Member 'Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve::Value' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve, bIsComplete) == 0x000038, "Member 'Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve::bIsComplete' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve, EndTime) == 0x000040, "Member 'Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve::EndTime' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve, CurveFloatResult) == 0x000048, "Member 'Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve::CurveFloatResult' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve, TimeAlpha) == 0x000050, "Member 'Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve::TimeAlpha' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve, Temp_bool_Variable) == 0x000059, "Member 'Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000060, "Member 'Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000068, "Member 'Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000070, "Member 'Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve, K2Node_Select_Default) == 0x000078, "Member 'Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve, CallFunc_FClamp_ReturnValue) == 0x000080, "Member 'Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve, CallFunc_GetFloatValue_ReturnValue) == 0x000088, "Member 'Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve, Temp_real_Variable) == 0x000090, "Member 'Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve, Temp_bool_Variable_1) == 0x000098, "Member 'Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve, K2Node_Select_Default_1) == 0x0000A0, "Member 'Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x0000A8, "Member 'Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve, CallFunc_GetFloatValue_InTime_ImplicitCast) == 0x0000AC, "Member 'Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve::CallFunc_GetFloatValue_InTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve, K2Node_VariableSet_CurveFloatResult_ImplicitCast) == 0x0000B0, "Member 'Creative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve::K2Node_VariableSet_CurveFloatResult_ImplicitCast' has a wrong offset!");

struct Creative_CommonDeviceFunctionLibrary_C_Apply_Vent_Recently_Launched_Tag_or_Abort_Launch final
{
public:
	class AActor*                                 Actor_To_Launch;
	class AActor*                                 Vent_Actor;
	class UObject*                                __WorldContext;
	bool                                          ShouldLaunch;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_1A[0x6];
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_29[0x7];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_49[0x7];
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_63[0x5];
	TArray<TSubclassOf<class UGameplayEffect>>    K2Node_MakeArray_Array;
};
static_assert(alignof(Creative_CommonDeviceFunctionLibrary_C_Apply_Vent_Recently_Launched_Tag_or_Abort_Launch) == 0x000008, "Wrong alignment on Creative_CommonDeviceFunctionLibrary_C_Apply_Vent_Recently_Launched_Tag_or_Abort_Launch");
static_assert(sizeof(Creative_CommonDeviceFunctionLibrary_C_Apply_Vent_Recently_Launched_Tag_or_Abort_Launch) == 0x000078, "Wrong size on Creative_CommonDeviceFunctionLibrary_C_Apply_Vent_Recently_Launched_Tag_or_Abort_Launch");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Apply_Vent_Recently_Launched_Tag_or_Abort_Launch, Actor_To_Launch) == 0x000000, "Member 'Creative_CommonDeviceFunctionLibrary_C_Apply_Vent_Recently_Launched_Tag_or_Abort_Launch::Actor_To_Launch' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Apply_Vent_Recently_Launched_Tag_or_Abort_Launch, Vent_Actor) == 0x000008, "Member 'Creative_CommonDeviceFunctionLibrary_C_Apply_Vent_Recently_Launched_Tag_or_Abort_Launch::Vent_Actor' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Apply_Vent_Recently_Launched_Tag_or_Abort_Launch, __WorldContext) == 0x000010, "Member 'Creative_CommonDeviceFunctionLibrary_C_Apply_Vent_Recently_Launched_Tag_or_Abort_Launch::__WorldContext' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Apply_Vent_Recently_Launched_Tag_or_Abort_Launch, ShouldLaunch) == 0x000018, "Member 'Creative_CommonDeviceFunctionLibrary_C_Apply_Vent_Recently_Launched_Tag_or_Abort_Launch::ShouldLaunch' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Apply_Vent_Recently_Launched_Tag_or_Abort_Launch, Temp_bool_Variable) == 0x000019, "Member 'Creative_CommonDeviceFunctionLibrary_C_Apply_Vent_Recently_Launched_Tag_or_Abort_Launch::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Apply_Vent_Recently_Launched_Tag_or_Abort_Launch, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000020, "Member 'Creative_CommonDeviceFunctionLibrary_C_Apply_Vent_Recently_Launched_Tag_or_Abort_Launch::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Apply_Vent_Recently_Launched_Tag_or_Abort_Launch, CallFunc_Not_PreBool_ReturnValue) == 0x000028, "Member 'Creative_CommonDeviceFunctionLibrary_C_Apply_Vent_Recently_Launched_Tag_or_Abort_Launch::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Apply_Vent_Recently_Launched_Tag_or_Abort_Launch, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000030, "Member 'Creative_CommonDeviceFunctionLibrary_C_Apply_Vent_Recently_Launched_Tag_or_Abort_Launch::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Apply_Vent_Recently_Launched_Tag_or_Abort_Launch, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'Creative_CommonDeviceFunctionLibrary_C_Apply_Vent_Recently_Launched_Tag_or_Abort_Launch::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Apply_Vent_Recently_Launched_Tag_or_Abort_Launch, K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface) == 0x000050, "Member 'Creative_CommonDeviceFunctionLibrary_C_Apply_Vent_Recently_Launched_Tag_or_Abort_Launch::K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Apply_Vent_Recently_Launched_Tag_or_Abort_Launch, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'Creative_CommonDeviceFunctionLibrary_C_Apply_Vent_Recently_Launched_Tag_or_Abort_Launch::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Apply_Vent_Recently_Launched_Tag_or_Abort_Launch, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000061, "Member 'Creative_CommonDeviceFunctionLibrary_C_Apply_Vent_Recently_Launched_Tag_or_Abort_Launch::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Apply_Vent_Recently_Launched_Tag_or_Abort_Launch, CallFunc_IsValid_ReturnValue_1) == 0x000062, "Member 'Creative_CommonDeviceFunctionLibrary_C_Apply_Vent_Recently_Launched_Tag_or_Abort_Launch::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Apply_Vent_Recently_Launched_Tag_or_Abort_Launch, K2Node_MakeArray_Array) == 0x000068, "Member 'Creative_CommonDeviceFunctionLibrary_C_Apply_Vent_Recently_Launched_Tag_or_Abort_Launch::K2Node_MakeArray_Array' has a wrong offset!");

struct Creative_CommonDeviceFunctionLibrary_C_AwardScore final
{
public:
	class AActor*                                 Actor;
	int32                                         Score;
	EAwardScoreType                               Type;
	uint8                                         Pad_D[0x3];
	class AController*                            Controller;
	class UFortMinigameLogicComponent*            Minigame_Logic;
	struct FGameplayTagContainer                  TargetTags;
	class UObject*                                __WorldContext;
	int32                                         local_Score;
	uint8                                         Pad_4C[0x4];
	class UFortMinigameManager*                   local_MinigameManager;
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_5A[0x2];
	int32                                         Temp_int_Variable;
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;
	EAwardScoreType                               Temp_byte_Variable;
	uint8                                         Pad_65[0x3];
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_71[0x7];
	class UFortMinigameManager*                   CallFunc_GetMinigameManager_ReturnValue;
	class UFortMinigameStatsComponent*            CallFunc_GetMinigameStatsComponent_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_89[0x7];
	class UFortMinigameStatFilter*                CallFunc_GetLoadedStatFromClass_ReturnValue;
	class AFortPlayerState*                       K2Node_DynamicCast_AsFort_Player_State;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_A1[0x3];
	int32                                         CallFunc_GetStatForPlayer_ReturnValue;
	struct FGameplayTagContainer                  CallFunc_GetSourceAndContextTags_OutSourceTags;
	struct FGameplayTagContainer                  CallFunc_GetSourceAndContextTags_OutContextTags;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	int32                                         K2Node_Select_Default;
};
static_assert(alignof(Creative_CommonDeviceFunctionLibrary_C_AwardScore) == 0x000008, "Wrong alignment on Creative_CommonDeviceFunctionLibrary_C_AwardScore");
static_assert(sizeof(Creative_CommonDeviceFunctionLibrary_C_AwardScore) == 0x0000F0, "Wrong size on Creative_CommonDeviceFunctionLibrary_C_AwardScore");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_AwardScore, Actor) == 0x000000, "Member 'Creative_CommonDeviceFunctionLibrary_C_AwardScore::Actor' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_AwardScore, Score) == 0x000008, "Member 'Creative_CommonDeviceFunctionLibrary_C_AwardScore::Score' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_AwardScore, Type) == 0x00000C, "Member 'Creative_CommonDeviceFunctionLibrary_C_AwardScore::Type' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_AwardScore, Controller) == 0x000010, "Member 'Creative_CommonDeviceFunctionLibrary_C_AwardScore::Controller' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_AwardScore, Minigame_Logic) == 0x000018, "Member 'Creative_CommonDeviceFunctionLibrary_C_AwardScore::Minigame_Logic' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_AwardScore, TargetTags) == 0x000020, "Member 'Creative_CommonDeviceFunctionLibrary_C_AwardScore::TargetTags' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_AwardScore, __WorldContext) == 0x000040, "Member 'Creative_CommonDeviceFunctionLibrary_C_AwardScore::__WorldContext' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_AwardScore, local_Score) == 0x000048, "Member 'Creative_CommonDeviceFunctionLibrary_C_AwardScore::local_Score' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_AwardScore, local_MinigameManager) == 0x000050, "Member 'Creative_CommonDeviceFunctionLibrary_C_AwardScore::local_MinigameManager' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_AwardScore, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000058, "Member 'Creative_CommonDeviceFunctionLibrary_C_AwardScore::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_AwardScore, CallFunc_IsValid_ReturnValue) == 0x000059, "Member 'Creative_CommonDeviceFunctionLibrary_C_AwardScore::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_AwardScore, Temp_int_Variable) == 0x00005C, "Member 'Creative_CommonDeviceFunctionLibrary_C_AwardScore::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_AwardScore, CallFunc_Multiply_IntInt_ReturnValue) == 0x000060, "Member 'Creative_CommonDeviceFunctionLibrary_C_AwardScore::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_AwardScore, Temp_byte_Variable) == 0x000064, "Member 'Creative_CommonDeviceFunctionLibrary_C_AwardScore::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_AwardScore, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000068, "Member 'Creative_CommonDeviceFunctionLibrary_C_AwardScore::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_AwardScore, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'Creative_CommonDeviceFunctionLibrary_C_AwardScore::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_AwardScore, CallFunc_GetMinigameManager_ReturnValue) == 0x000078, "Member 'Creative_CommonDeviceFunctionLibrary_C_AwardScore::CallFunc_GetMinigameManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_AwardScore, CallFunc_GetMinigameStatsComponent_ReturnValue) == 0x000080, "Member 'Creative_CommonDeviceFunctionLibrary_C_AwardScore::CallFunc_GetMinigameStatsComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_AwardScore, CallFunc_IsValid_ReturnValue_1) == 0x000088, "Member 'Creative_CommonDeviceFunctionLibrary_C_AwardScore::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_AwardScore, CallFunc_GetLoadedStatFromClass_ReturnValue) == 0x000090, "Member 'Creative_CommonDeviceFunctionLibrary_C_AwardScore::CallFunc_GetLoadedStatFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_AwardScore, K2Node_DynamicCast_AsFort_Player_State) == 0x000098, "Member 'Creative_CommonDeviceFunctionLibrary_C_AwardScore::K2Node_DynamicCast_AsFort_Player_State' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_AwardScore, K2Node_DynamicCast_bSuccess_1) == 0x0000A0, "Member 'Creative_CommonDeviceFunctionLibrary_C_AwardScore::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_AwardScore, CallFunc_GetStatForPlayer_ReturnValue) == 0x0000A4, "Member 'Creative_CommonDeviceFunctionLibrary_C_AwardScore::CallFunc_GetStatForPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_AwardScore, CallFunc_GetSourceAndContextTags_OutSourceTags) == 0x0000A8, "Member 'Creative_CommonDeviceFunctionLibrary_C_AwardScore::CallFunc_GetSourceAndContextTags_OutSourceTags' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_AwardScore, CallFunc_GetSourceAndContextTags_OutContextTags) == 0x0000C8, "Member 'Creative_CommonDeviceFunctionLibrary_C_AwardScore::CallFunc_GetSourceAndContextTags_OutContextTags' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_AwardScore, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000E8, "Member 'Creative_CommonDeviceFunctionLibrary_C_AwardScore::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_AwardScore, K2Node_Select_Default) == 0x0000EC, "Member 'Creative_CommonDeviceFunctionLibrary_C_AwardScore::K2Node_Select_Default' has a wrong offset!");

struct Creative_CommonDeviceFunctionLibrary_C_Bool_to_Bool_with_Unset final
{
public:
	bool                                          Input;
	uint8                                         Pad_1[0x7];
	class UObject*                                __WorldContext;
	EBoolWithUnset                                Output;
	bool                                          Temp_bool_Variable;
	EBoolWithUnset                                Temp_byte_Variable;
	EBoolWithUnset                                Temp_byte_Variable_1;
	EBoolWithUnset                                K2Node_Select_Default;
};
static_assert(alignof(Creative_CommonDeviceFunctionLibrary_C_Bool_to_Bool_with_Unset) == 0x000008, "Wrong alignment on Creative_CommonDeviceFunctionLibrary_C_Bool_to_Bool_with_Unset");
static_assert(sizeof(Creative_CommonDeviceFunctionLibrary_C_Bool_to_Bool_with_Unset) == 0x000018, "Wrong size on Creative_CommonDeviceFunctionLibrary_C_Bool_to_Bool_with_Unset");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Bool_to_Bool_with_Unset, Input) == 0x000000, "Member 'Creative_CommonDeviceFunctionLibrary_C_Bool_to_Bool_with_Unset::Input' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Bool_to_Bool_with_Unset, __WorldContext) == 0x000008, "Member 'Creative_CommonDeviceFunctionLibrary_C_Bool_to_Bool_with_Unset::__WorldContext' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Bool_to_Bool_with_Unset, Output) == 0x000010, "Member 'Creative_CommonDeviceFunctionLibrary_C_Bool_to_Bool_with_Unset::Output' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Bool_to_Bool_with_Unset, Temp_bool_Variable) == 0x000011, "Member 'Creative_CommonDeviceFunctionLibrary_C_Bool_to_Bool_with_Unset::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Bool_to_Bool_with_Unset, Temp_byte_Variable) == 0x000012, "Member 'Creative_CommonDeviceFunctionLibrary_C_Bool_to_Bool_with_Unset::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Bool_to_Bool_with_Unset, Temp_byte_Variable_1) == 0x000013, "Member 'Creative_CommonDeviceFunctionLibrary_C_Bool_to_Bool_with_Unset::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Bool_to_Bool_with_Unset, K2Node_Select_Default) == 0x000014, "Member 'Creative_CommonDeviceFunctionLibrary_C_Bool_to_Bool_with_Unset::K2Node_Select_Default' has a wrong offset!");

struct Creative_CommonDeviceFunctionLibrary_C_Current_Material_Matches_Base final
{
public:
	class UStaticMeshComponent*                   Static_Mesh_Component;
	int32                                         MatID;
	uint8                                         Pad_C[0x4];
	class UObject*                                __WorldContext;
	bool                                          Material_Matches;
	uint8                                         Pad_19[0x7];
	class UMaterialInterface*                     Base_Material;
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_32[0x6];
	TArray<struct FStaticMaterial>                CallFunc_GetStaticMaterials_ReturnValue;
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;
	uint8                                         Pad_49[0x7];
	struct FStaticMaterial                        CallFunc_Array_Get_Item;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;
};
static_assert(alignof(Creative_CommonDeviceFunctionLibrary_C_Current_Material_Matches_Base) == 0x000008, "Wrong alignment on Creative_CommonDeviceFunctionLibrary_C_Current_Material_Matches_Base");
static_assert(sizeof(Creative_CommonDeviceFunctionLibrary_C_Current_Material_Matches_Base) == 0x000080, "Wrong size on Creative_CommonDeviceFunctionLibrary_C_Current_Material_Matches_Base");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Current_Material_Matches_Base, Static_Mesh_Component) == 0x000000, "Member 'Creative_CommonDeviceFunctionLibrary_C_Current_Material_Matches_Base::Static_Mesh_Component' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Current_Material_Matches_Base, MatID) == 0x000008, "Member 'Creative_CommonDeviceFunctionLibrary_C_Current_Material_Matches_Base::MatID' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Current_Material_Matches_Base, __WorldContext) == 0x000010, "Member 'Creative_CommonDeviceFunctionLibrary_C_Current_Material_Matches_Base::__WorldContext' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Current_Material_Matches_Base, Material_Matches) == 0x000018, "Member 'Creative_CommonDeviceFunctionLibrary_C_Current_Material_Matches_Base::Material_Matches' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Current_Material_Matches_Base, Base_Material) == 0x000020, "Member 'Creative_CommonDeviceFunctionLibrary_C_Current_Material_Matches_Base::Base_Material' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Current_Material_Matches_Base, CallFunc_GetMaterial_ReturnValue) == 0x000028, "Member 'Creative_CommonDeviceFunctionLibrary_C_Current_Material_Matches_Base::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Current_Material_Matches_Base, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'Creative_CommonDeviceFunctionLibrary_C_Current_Material_Matches_Base::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Current_Material_Matches_Base, CallFunc_IsValid_ReturnValue_1) == 0x000031, "Member 'Creative_CommonDeviceFunctionLibrary_C_Current_Material_Matches_Base::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Current_Material_Matches_Base, CallFunc_GetStaticMaterials_ReturnValue) == 0x000038, "Member 'Creative_CommonDeviceFunctionLibrary_C_Current_Material_Matches_Base::CallFunc_GetStaticMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Current_Material_Matches_Base, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000048, "Member 'Creative_CommonDeviceFunctionLibrary_C_Current_Material_Matches_Base::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Current_Material_Matches_Base, CallFunc_Array_Get_Item) == 0x000050, "Member 'Creative_CommonDeviceFunctionLibrary_C_Current_Material_Matches_Base::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Current_Material_Matches_Base, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000078, "Member 'Creative_CommonDeviceFunctionLibrary_C_Current_Material_Matches_Base::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

struct Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName final
{
public:
	class UPrimitiveComponent*                    PrimitiveComponent;
	class FString                                 Name_0;
	class UObject*                                __WorldContext;
	class FName                                   UniqueName;
	int32                                         Max_Length;
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;
	struct FGuid                                  CallFunc_GenerateGuidFromObject_ReturnValue;
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	class FString                                 CallFunc_Conv_GuidToString_ReturnValue;
	struct FGuid                                  CallFunc_GenerateGuidFromObject_ReturnValue_1;
	class FString                                 CallFunc_Right_ReturnValue;
	class FString                                 CallFunc_Conv_GuidToString_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_91[0x7];
	class FString                                 CallFunc_Right_ReturnValue_1;
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_B9[0x7];
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;
	class FString                                 CallFunc_Left_ReturnValue;
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;
};
static_assert(alignof(Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName) == 0x000008, "Wrong alignment on Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName");
static_assert(sizeof(Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName) == 0x0000E8, "Wrong size on Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName, PrimitiveComponent) == 0x000000, "Member 'Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName::PrimitiveComponent' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName, Name_0) == 0x000008, "Member 'Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName::Name_0' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName, __WorldContext) == 0x000018, "Member 'Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName::__WorldContext' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName, UniqueName) == 0x000020, "Member 'Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName::UniqueName' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName, Max_Length) == 0x000024, "Member 'Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName::Max_Length' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName, CallFunc_Concat_StrStr_ReturnValue) == 0x000028, "Member 'Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName, CallFunc_GenerateGuidFromObject_ReturnValue) == 0x000038, "Member 'Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName::CallFunc_GenerateGuidFromObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName, CallFunc_GetOwner_ReturnValue) == 0x000048, "Member 'Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName, CallFunc_Conv_GuidToString_ReturnValue) == 0x000050, "Member 'Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName::CallFunc_Conv_GuidToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName, CallFunc_GenerateGuidFromObject_ReturnValue_1) == 0x000060, "Member 'Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName::CallFunc_GenerateGuidFromObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName, CallFunc_Right_ReturnValue) == 0x000070, "Member 'Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName::CallFunc_Right_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName, CallFunc_Conv_GuidToString_ReturnValue_1) == 0x000080, "Member 'Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName::CallFunc_Conv_GuidToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName, CallFunc_IsValid_ReturnValue) == 0x000090, "Member 'Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName, CallFunc_Right_ReturnValue_1) == 0x000098, "Member 'Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName::CallFunc_Right_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000A8, "Member 'Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName, CallFunc_IsValid_ReturnValue_1) == 0x0000B8, "Member 'Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000C0, "Member 'Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName, CallFunc_Left_ReturnValue) == 0x0000D0, "Member 'Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName::CallFunc_Left_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName, CallFunc_Conv_StringToName_ReturnValue) == 0x0000E0, "Member 'Creative_CommonDeviceFunctionLibrary_C_GenerateUniqueMaterialName::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");

struct Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller final
{
public:
	class AActor*                                 Actor_To_Check;
	class UObject*                                __WorldContext;
	bool                                          Valid_Controller;
	uint8                                         Pad_11[0x7];
	class AController*                            Controller;
	struct FGameplayTagContainer                  DeviceDontTriggerTags;
	class AController*                            _Controller;
	class AFortPlayerPawn*                        Temp_object_Variable;
	class AController*                            K2Node_DynamicCast_AsController;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_5A[0x6];
	class AController*                            CallFunc_GetController_ReturnValue;
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_71[0x7];
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_81[0x7];
	TScriptInterface<class IFortVehicleInterface> K2Node_DynamicCast_AsFort_Vehicle_Interface;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_99[0x7];
	class AFortPlayerPawn*                        CallFunc_GetDriver_ReturnValue;
};
static_assert(alignof(Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller) == 0x000008, "Wrong alignment on Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller");
static_assert(sizeof(Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller) == 0x0000A8, "Wrong size on Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller, Actor_To_Check) == 0x000000, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller::Actor_To_Check' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller, __WorldContext) == 0x000008, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller::__WorldContext' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller, Valid_Controller) == 0x000010, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller::Valid_Controller' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller, Controller) == 0x000018, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller::Controller' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller, DeviceDontTriggerTags) == 0x000020, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller::DeviceDontTriggerTags' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller, _Controller) == 0x000040, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller::_Controller' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller, Temp_object_Variable) == 0x000048, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller, K2Node_DynamicCast_AsController) == 0x000050, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller::K2Node_DynamicCast_AsController' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller, CallFunc_IsValid_ReturnValue) == 0x000059, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller, CallFunc_GetController_ReturnValue) == 0x000060, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller, CallFunc_GetFortPlayerControllerFromActor_ReturnValue) == 0x000068, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller::CallFunc_GetFortPlayerControllerFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller, CallFunc_IsValid_ReturnValue_1) == 0x000070, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000078, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller, CallFunc_IsValid_ReturnValue_2) == 0x000080, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller, K2Node_DynamicCast_AsFort_Vehicle_Interface) == 0x000088, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller::K2Node_DynamicCast_AsFort_Vehicle_Interface' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller, K2Node_DynamicCast_bSuccess_1) == 0x000098, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller, CallFunc_GetDriver_ReturnValue) == 0x0000A0, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller::CallFunc_GetDriver_ReturnValue' has a wrong offset!");

struct Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color final
{
public:
	class AActor*                                 Actor;
	class AFortMinigame*                          Minigame;
	ECreativeColorSetType                         Color_Type;
	uint8                                         Pad_11[0x7];
	class UObject*                                __WorldContext;
	int32                                         Array_Index;
	uint8                                         Pad_24[0x4];
	TArray<struct FGameplayTag>                   GameplayTags;
	TArray<struct FGameplayTag>                   GameplayColorTags;
	ECreativeTeamColor                            Temp_byte_Variable;
	uint8                                         Pad_49[0x7];
	class AFortPlayerController*                  CallFunc_GetFirstLocalFortPlayerController_ReturnValue;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	ECreativeTeamColor                            Temp_byte_Variable_1;
	ECreativeTeamColor                            Temp_byte_Variable_2;
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;
	uint8                                         Pad_5C[0x4];
	TArray<struct FGameplayTag>                   K2Node_MakeArray_Array;
	EFortTeamAffiliation                          Temp_byte_Variable_3;
	EFortTeamAffiliation                          CallFunc_GetTeamAffiliation_ReturnValue;
	uint8                                         CallFunc_GetActorPvPTeamIndex_TeamIndex;
	bool                                          CallFunc_GetActorPvPTeamIndex_ReturnValue;
	uint8                                         CallFunc_Add_ByteByte_ReturnValue;
	ECreativeTeamColor                            K2Node_Select_Default;
	uint8                                         Pad_76[0x2];
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;
	int32                                         CallFunc_GetTeamColorIndex_ReturnValue;
};
static_assert(alignof(Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color) == 0x000008, "Wrong alignment on Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color");
static_assert(sizeof(Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color) == 0x000080, "Wrong size on Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color, Actor) == 0x000000, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color::Actor' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color, Minigame) == 0x000008, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color::Minigame' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color, Color_Type) == 0x000010, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color::Color_Type' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color, __WorldContext) == 0x000018, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color::__WorldContext' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color, Array_Index) == 0x000020, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color::Array_Index' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color, GameplayTags) == 0x000028, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color::GameplayTags' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color, GameplayColorTags) == 0x000038, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color::GameplayColorTags' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color, Temp_byte_Variable) == 0x000048, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color, CallFunc_GetFirstLocalFortPlayerController_ReturnValue) == 0x000050, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color::CallFunc_GetFirstLocalFortPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color, K2Node_SwitchEnum_CmpSuccess) == 0x000058, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color, Temp_byte_Variable_1) == 0x000059, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color, Temp_byte_Variable_2) == 0x00005A, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color, CallFunc_MakeLiteralByte_ReturnValue) == 0x00005B, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color, K2Node_MakeArray_Array) == 0x000060, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color, Temp_byte_Variable_3) == 0x000070, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color, CallFunc_GetTeamAffiliation_ReturnValue) == 0x000071, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color::CallFunc_GetTeamAffiliation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color, CallFunc_GetActorPvPTeamIndex_TeamIndex) == 0x000072, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color::CallFunc_GetActorPvPTeamIndex_TeamIndex' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color, CallFunc_GetActorPvPTeamIndex_ReturnValue) == 0x000073, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color::CallFunc_GetActorPvPTeamIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color, CallFunc_Add_ByteByte_ReturnValue) == 0x000074, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color::CallFunc_Add_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color, K2Node_Select_Default) == 0x000075, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000078, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color, CallFunc_GetTeamColorIndex_ReturnValue) == 0x00007C, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color::CallFunc_GetTeamColorIndex_ReturnValue' has a wrong offset!");

struct Creative_CommonDeviceFunctionLibrary_C_Get_PlayerState_from_NetID final
{
public:
	struct FUniqueNetIdRepl                       Unique_Net_Id;
	class UObject*                                __WorldContext;
	class AFortPlayerState*                       Fort_Player_State;
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_4D[0x3];
	int32                                         Temp_int_Loop_Counter_Variable;
	uint8                                         Pad_54[0x4];
	class APlayerState*                           CallFunc_Array_Get_Item;
	class AFortPlayerState*                       K2Node_DynamicCast_AsFort_Player_State;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_69[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	struct FUniqueNetIdRepl                       CallFunc_GetPlayerUniqueNetID_ReturnValue;
	bool                                          CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue;
	uint8                                         Pad_A1[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
};
static_assert(alignof(Creative_CommonDeviceFunctionLibrary_C_Get_PlayerState_from_NetID) == 0x000008, "Wrong alignment on Creative_CommonDeviceFunctionLibrary_C_Get_PlayerState_from_NetID");
static_assert(sizeof(Creative_CommonDeviceFunctionLibrary_C_Get_PlayerState_from_NetID) == 0x0000B0, "Wrong size on Creative_CommonDeviceFunctionLibrary_C_Get_PlayerState_from_NetID");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_PlayerState_from_NetID, Unique_Net_Id) == 0x000000, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_PlayerState_from_NetID::Unique_Net_Id' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_PlayerState_from_NetID, __WorldContext) == 0x000030, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_PlayerState_from_NetID::__WorldContext' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_PlayerState_from_NetID, Fort_Player_State) == 0x000038, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_PlayerState_from_NetID::Fort_Player_State' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_PlayerState_from_NetID, CallFunc_GetGameState_ReturnValue) == 0x000040, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_PlayerState_from_NetID::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_PlayerState_from_NetID, Temp_int_Array_Index_Variable) == 0x000048, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_PlayerState_from_NetID::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_PlayerState_from_NetID, CallFunc_IsValid_ReturnValue) == 0x00004C, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_PlayerState_from_NetID::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_PlayerState_from_NetID, Temp_int_Loop_Counter_Variable) == 0x000050, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_PlayerState_from_NetID::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_PlayerState_from_NetID, CallFunc_Array_Get_Item) == 0x000058, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_PlayerState_from_NetID::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_PlayerState_from_NetID, K2Node_DynamicCast_AsFort_Player_State) == 0x000060, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_PlayerState_from_NetID::K2Node_DynamicCast_AsFort_Player_State' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_PlayerState_from_NetID, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_PlayerState_from_NetID::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_PlayerState_from_NetID, CallFunc_Add_IntInt_ReturnValue) == 0x00006C, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_PlayerState_from_NetID::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_PlayerState_from_NetID, CallFunc_GetPlayerUniqueNetID_ReturnValue) == 0x000070, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_PlayerState_from_NetID::CallFunc_GetPlayerUniqueNetID_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_PlayerState_from_NetID, CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue) == 0x0000A0, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_PlayerState_from_NetID::CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_PlayerState_from_NetID, CallFunc_Array_Length_ReturnValue) == 0x0000A4, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_PlayerState_from_NetID::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_PlayerState_from_NetID, CallFunc_Less_IntInt_ReturnValue) == 0x0000A8, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_PlayerState_from_NetID::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

struct Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option final
{
public:
	class AActor*                                 ContextActor;
	struct FCreativeTeamOption                    TeamOption;
	class UObject*                                __WorldContext;
	struct FLinearColor                           Base_Color;
	struct FLinearColor                           Light_Color;
	struct FLinearColor                           Bold_Color;
	int32                                         ColorIndex;
	uint8                                         Pad_4C[0x4];
	TArray<struct FLinearColor>                   Temp_struct_Variable;
	EFortTeam                                     CallFunc_ConvertToTeam_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_63[0x1];
	int32                                         CallFunc_SelectInt_ReturnValue;
	class AFortMinigame*                          CallFunc_GetMinigame_ReturnValue;
	TArray<struct FLinearColor>                   Temp_struct_Variable_1;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_81[0x3];
	int32                                         CallFunc_GetTeamColorIndex_ReturnValue;
	TArray<struct FLinearColor>                   Temp_struct_Variable_2;
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         CallFunc_Percent_IntInt_ReturnValue;
	int32                                         CallFunc_Max_ReturnValue;
	struct FLinearColor                           CallFunc_Array_Get_Item;
	struct FLinearColor                           CallFunc_Array_Get_Item_1;
	struct FLinearColor                           CallFunc_Array_Get_Item_2;
};
static_assert(alignof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option) == 0x000008, "Wrong alignment on Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option");
static_assert(sizeof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option) == 0x0000D8, "Wrong size on Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option, ContextActor) == 0x000000, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option::ContextActor' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option, TeamOption) == 0x000008, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option::TeamOption' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option, __WorldContext) == 0x000010, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option::__WorldContext' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option, Base_Color) == 0x000018, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option::Base_Color' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option, Light_Color) == 0x000028, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option::Light_Color' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option, Bold_Color) == 0x000038, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option::Bold_Color' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option, ColorIndex) == 0x000048, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option::ColorIndex' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option, Temp_struct_Variable) == 0x000050, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option, CallFunc_ConvertToTeam_ReturnValue) == 0x000060, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option::CallFunc_ConvertToTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000061, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option, CallFunc_IsValid_ReturnValue) == 0x000062, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option, CallFunc_SelectInt_ReturnValue) == 0x000064, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option, CallFunc_GetMinigame_ReturnValue) == 0x000068, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option::CallFunc_GetMinigame_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option, Temp_struct_Variable_1) == 0x000070, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option, CallFunc_IsValid_ReturnValue_1) == 0x000080, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option, CallFunc_GetTeamColorIndex_ReturnValue) == 0x000084, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option::CallFunc_GetTeamColorIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option, Temp_struct_Variable_2) == 0x000088, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option, CallFunc_Array_Length_ReturnValue) == 0x000098, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option, CallFunc_Percent_IntInt_ReturnValue) == 0x00009C, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option, CallFunc_Max_ReturnValue) == 0x0000A0, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option, CallFunc_Array_Get_Item) == 0x0000A4, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option, CallFunc_Array_Get_Item_1) == 0x0000B4, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option, CallFunc_Array_Get_Item_2) == 0x0000C4, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_For_Team_Option::CallFunc_Array_Get_Item_2' has a wrong offset!");

struct Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag final
{
public:
	class AActor*                                 Actor_with_Tag;
	class AFortMinigame*                          Minigame;
	class UObject*                                __WorldContext;
	int32                                         Array_Index;
	ECreativeColorSetType                         Color_Type_Out;
	uint8                                         Pad_1D[0x3];
	struct FGameplayTag                           Check_Tag;
	uint8                                         Pad_24[0x4];
	TArray<struct FGameplayTag>                   GameplayTags;
	TArray<struct FGameplayTag>                   GameplayColorTags;
	struct FGameplayTagContainer                  Temp_struct_Variable;
	TArray<struct FGameplayTag>                   K2Node_MakeArray_Array;
	TArray<struct FGameplayTag>                   CallFunc_BreakGameplayTagContainer_GameplayTags;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	struct FGameplayTag                           CallFunc_Array_Get_Item;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;
	uint8                                         Pad_99[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;
	int32                                         CallFunc_Max_ReturnValue;
	int32                                         CallFunc_Get_Dynamic_Team_Color_Array_Index;
	int32                                         CallFunc_Get_Dynamic_Team_Color_Array_Index_1;
	bool                                          CallFunc_EqualEqual_GameplayTag_ReturnValue;
	bool                                          CallFunc_EqualEqual_GameplayTag_ReturnValue_1;
	uint8                                         Pad_B2[0x2];
	int32                                         CallFunc_Array_Find_ReturnValue;
	bool                                          CallFunc_MatchesTag_ReturnValue;
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;
	uint8                                         Pad_BA[0x6];
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_D1[0x7];
	struct FGameplayTagContainer                  CallFunc_GetOwnedGameplayTags_TagContainer;
};
static_assert(alignof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag) == 0x000008, "Wrong alignment on Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag");
static_assert(sizeof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag) == 0x0000F8, "Wrong size on Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag, Actor_with_Tag) == 0x000000, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag::Actor_with_Tag' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag, Minigame) == 0x000008, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag::Minigame' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag, __WorldContext) == 0x000010, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag::__WorldContext' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag, Array_Index) == 0x000018, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag::Array_Index' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag, Color_Type_Out) == 0x00001C, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag::Color_Type_Out' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag, Check_Tag) == 0x000020, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag::Check_Tag' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag, GameplayTags) == 0x000028, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag::GameplayTags' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag, GameplayColorTags) == 0x000038, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag::GameplayColorTags' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag, Temp_struct_Variable) == 0x000048, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag, K2Node_MakeArray_Array) == 0x000068, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag, CallFunc_BreakGameplayTagContainer_GameplayTags) == 0x000078, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag::CallFunc_BreakGameplayTagContainer_GameplayTags' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag, Temp_int_Array_Index_Variable) == 0x000088, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag, Temp_int_Loop_Counter_Variable) == 0x00008C, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag, CallFunc_Array_Get_Item) == 0x000090, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag, CallFunc_Subtract_IntInt_ReturnValue) == 0x000094, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000098, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag, CallFunc_Array_Length_ReturnValue) == 0x00009C, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0000A0, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag, CallFunc_Max_ReturnValue) == 0x0000A4, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag, CallFunc_Get_Dynamic_Team_Color_Array_Index) == 0x0000A8, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag::CallFunc_Get_Dynamic_Team_Color_Array_Index' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag, CallFunc_Get_Dynamic_Team_Color_Array_Index_1) == 0x0000AC, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag::CallFunc_Get_Dynamic_Team_Color_Array_Index_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag, CallFunc_EqualEqual_GameplayTag_ReturnValue) == 0x0000B0, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag::CallFunc_EqualEqual_GameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag, CallFunc_EqualEqual_GameplayTag_ReturnValue_1) == 0x0000B1, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag::CallFunc_EqualEqual_GameplayTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag, CallFunc_Array_Find_ReturnValue) == 0x0000B4, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag, CallFunc_MatchesTag_ReturnValue) == 0x0000B8, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag::CallFunc_MatchesTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0000B9, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag, K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface) == 0x0000C0, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag::K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag, K2Node_DynamicCast_bSuccess) == 0x0000D0, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag, CallFunc_GetOwnedGameplayTags_TagContainer) == 0x0000D8, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag::CallFunc_GetOwnedGameplayTags_TagContainer' has a wrong offset!");

struct Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_or_Team_Index final
{
public:
	class UFortMinigameLogicComponent*            Minigame_Logic;
	int32                                         Team_Index;
	uint8                                         Pad_C[0x4];
	class UObject*                                __WorldContext;
	int32                                         ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         CallFunc_IndexToTeam_Team;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	int32                                         CallFunc_GetTeamColorIndex_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	uint8                                         Pad_25[0x3];
	int32                                         K2Node_Select_Default;
};
static_assert(alignof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_or_Team_Index) == 0x000008, "Wrong alignment on Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_or_Team_Index");
static_assert(sizeof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_or_Team_Index) == 0x000030, "Wrong size on Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_or_Team_Index");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_or_Team_Index, Minigame_Logic) == 0x000000, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_or_Team_Index::Minigame_Logic' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_or_Team_Index, Team_Index) == 0x000008, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_or_Team_Index::Team_Index' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_or_Team_Index, __WorldContext) == 0x000010, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_or_Team_Index::__WorldContext' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_or_Team_Index, ReturnValue) == 0x000018, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_or_Team_Index::ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_or_Team_Index, Temp_bool_Variable) == 0x00001C, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_or_Team_Index::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_or_Team_Index, CallFunc_IndexToTeam_Team) == 0x00001D, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_or_Team_Index::CallFunc_IndexToTeam_Team' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_or_Team_Index, CallFunc_IsValid_ReturnValue) == 0x00001E, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_or_Team_Index::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_or_Team_Index, CallFunc_IsValid_ReturnValue_1) == 0x00001F, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_or_Team_Index::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_or_Team_Index, CallFunc_GetTeamColorIndex_ReturnValue) == 0x000020, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_or_Team_Index::CallFunc_GetTeamColorIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_or_Team_Index, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000024, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_or_Team_Index::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_or_Team_Index, K2Node_Select_Default) == 0x000028, "Member 'Creative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_or_Team_Index::K2Node_Select_Default' has a wrong offset!");

struct Creative_CommonDeviceFunctionLibrary_C_GetMID final
{
public:
	class UPrimitiveComponent*                    Target;
	class UObject*                                __WorldContext;
	class UMaterialInstanceDynamic*               Mid;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_19[0x7];
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_29[0x7];
	class FString                                 CallFunc_GetDisplayName_ReturnValue;
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;
	class UMaterialInstanceDynamic*               K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_59[0x7];
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;
	class FName                                   CallFunc_GenerateUniqueMaterialName_UniqueName;
	uint8                                         Pad_74[0x4];
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue;
};
static_assert(alignof(Creative_CommonDeviceFunctionLibrary_C_GetMID) == 0x000008, "Wrong alignment on Creative_CommonDeviceFunctionLibrary_C_GetMID");
static_assert(sizeof(Creative_CommonDeviceFunctionLibrary_C_GetMID) == 0x000080, "Wrong size on Creative_CommonDeviceFunctionLibrary_C_GetMID");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GetMID, Target) == 0x000000, "Member 'Creative_CommonDeviceFunctionLibrary_C_GetMID::Target' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GetMID, __WorldContext) == 0x000008, "Member 'Creative_CommonDeviceFunctionLibrary_C_GetMID::__WorldContext' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GetMID, Mid) == 0x000010, "Member 'Creative_CommonDeviceFunctionLibrary_C_GetMID::Mid' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GetMID, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'Creative_CommonDeviceFunctionLibrary_C_GetMID::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GetMID, CallFunc_GetMaterial_ReturnValue) == 0x000020, "Member 'Creative_CommonDeviceFunctionLibrary_C_GetMID::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GetMID, CallFunc_IsValid_ReturnValue_1) == 0x000028, "Member 'Creative_CommonDeviceFunctionLibrary_C_GetMID::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GetMID, CallFunc_GetDisplayName_ReturnValue) == 0x000030, "Member 'Creative_CommonDeviceFunctionLibrary_C_GetMID::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GetMID, CallFunc_Concat_StrStr_ReturnValue) == 0x000040, "Member 'Creative_CommonDeviceFunctionLibrary_C_GetMID::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GetMID, K2Node_DynamicCast_AsMaterial_Instance_Dynamic) == 0x000050, "Member 'Creative_CommonDeviceFunctionLibrary_C_GetMID::K2Node_DynamicCast_AsMaterial_Instance_Dynamic' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GetMID, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'Creative_CommonDeviceFunctionLibrary_C_GetMID::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GetMID, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000060, "Member 'Creative_CommonDeviceFunctionLibrary_C_GetMID::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GetMID, CallFunc_GenerateUniqueMaterialName_UniqueName) == 0x000070, "Member 'Creative_CommonDeviceFunctionLibrary_C_GetMID::CallFunc_GenerateUniqueMaterialName_UniqueName' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GetMID, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000078, "Member 'Creative_CommonDeviceFunctionLibrary_C_GetMID::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

struct Creative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial final
{
public:
	class UPrimitiveComponent*                    Target;
	int32                                         Index_0;
	uint8                                         Pad_C[0x4];
	class UMaterialInterface*                     SourceMaterial;
	class UObject*                                __WorldContext;
	class UMaterialInstanceDynamic*               Mid;
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;
	class UMaterialInstanceDynamic*               K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_39[0x7];
	class FString                                 CallFunc_GetDisplayName_ReturnValue;
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;
	uint8                                         Pad_62[0x6];
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;
	class FName                                   CallFunc_GenerateUniqueMaterialName_UniqueName;
	uint8                                         Pad_8C[0x4];
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue;
};
static_assert(alignof(Creative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial) == 0x000008, "Wrong alignment on Creative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial");
static_assert(sizeof(Creative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial) == 0x000098, "Wrong size on Creative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial, Target) == 0x000000, "Member 'Creative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial::Target' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial, Index_0) == 0x000008, "Member 'Creative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial::Index_0' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial, SourceMaterial) == 0x000010, "Member 'Creative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial::SourceMaterial' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial, __WorldContext) == 0x000018, "Member 'Creative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial::__WorldContext' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial, Mid) == 0x000020, "Member 'Creative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial::Mid' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial, CallFunc_GetMaterial_ReturnValue) == 0x000028, "Member 'Creative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial, K2Node_DynamicCast_AsMaterial_Instance_Dynamic) == 0x000030, "Member 'Creative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial::K2Node_DynamicCast_AsMaterial_Instance_Dynamic' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'Creative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial, CallFunc_GetDisplayName_ReturnValue) == 0x000040, "Member 'Creative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial, CallFunc_Concat_StrStr_ReturnValue) == 0x000050, "Member 'Creative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'Creative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000061, "Member 'Creative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial, CallFunc_Conv_IntToString_ReturnValue) == 0x000068, "Member 'Creative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000078, "Member 'Creative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial, CallFunc_GenerateUniqueMaterialName_UniqueName) == 0x000088, "Member 'Creative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial::CallFunc_GenerateUniqueMaterialName_UniqueName' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000090, "Member 'Creative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

struct Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner final
{
public:
	TScriptInterface<class IFortInventoryOwnerInterface> Inventory_Owner;
	class UFortWorldItemDefinition*               World_Item_Definition;
	int32                                         Pickup_Instigator_Handle;
	uint8                                         Pad_1C[0x4];
	TMap<TSoftObjectPtr<class UFortWorldItemDefinition>, int32> AmmoToGiveItemDefinitionMap;
	int32                                         DefaultAmmoToGive;
	uint8                                         Pad_74[0x4];
	class UObject*                                __WorldContext;
	int32                                         NumAmmoToGive;
	uint8                                         Pad_84[0x4];
	class AFortPlayerController*                  PlayerController;
	class UFortWorldItemDefinition*               TargetAmmoDef;
	class UFortWeaponItemDefinition*              K2Node_DynamicCast_AsFort_Weapon_Item_Definition;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_A2[0x6];
	TSubclassOf<class UFortGameplayAbility>       CallFunc_GetReloadAbility_ReturnValue;
	bool                                          CallFunc_IsValidClass_ReturnValue;
	uint8                                         Pad_B1[0x7];
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_C1[0x7];
	class UFortWorldItemDefinition*               CallFunc_GetAmmoWorldItemDefinition_BP_ReturnValue;
	TSoftObjectPtr<class UFortWorldItemDefinition> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_F9[0x3];
	int32                                         CallFunc_Map_Find_Value;
	bool                                          CallFunc_Map_Find_ReturnValue;
	uint8                                         Pad_101[0x3];
	int32                                         K2Node_Select_Default;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_109[0x7];
	const class UFortWorldItem*                   CallFunc_GiveItemToInventoryOwner_ReturnValue;
	int32                                         CallFunc_K2_GetItemQuantityOnPlayer_ReturnValue;
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner) == 0x000008, "Wrong alignment on Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner");
static_assert(sizeof(Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner) == 0x000120, "Wrong size on Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner, Inventory_Owner) == 0x000000, "Member 'Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner::Inventory_Owner' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner, World_Item_Definition) == 0x000010, "Member 'Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner::World_Item_Definition' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner, Pickup_Instigator_Handle) == 0x000018, "Member 'Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner::Pickup_Instigator_Handle' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner, AmmoToGiveItemDefinitionMap) == 0x000020, "Member 'Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner::AmmoToGiveItemDefinitionMap' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner, DefaultAmmoToGive) == 0x000070, "Member 'Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner::DefaultAmmoToGive' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner, __WorldContext) == 0x000078, "Member 'Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner::__WorldContext' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner, NumAmmoToGive) == 0x000080, "Member 'Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner::NumAmmoToGive' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner, PlayerController) == 0x000088, "Member 'Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner::PlayerController' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner, TargetAmmoDef) == 0x000090, "Member 'Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner::TargetAmmoDef' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner, K2Node_DynamicCast_AsFort_Weapon_Item_Definition) == 0x000098, "Member 'Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner::K2Node_DynamicCast_AsFort_Weapon_Item_Definition' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner, K2Node_DynamicCast_bSuccess) == 0x0000A0, "Member 'Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner, CallFunc_IsValid_ReturnValue) == 0x0000A1, "Member 'Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner, CallFunc_GetReloadAbility_ReturnValue) == 0x0000A8, "Member 'Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner::CallFunc_GetReloadAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner, CallFunc_IsValidClass_ReturnValue) == 0x0000B0, "Member 'Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner, K2Node_DynamicCast_AsFort_Player_Controller) == 0x0000B8, "Member 'Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner, K2Node_DynamicCast_bSuccess_1) == 0x0000C0, "Member 'Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner, CallFunc_GetAmmoWorldItemDefinition_BP_ReturnValue) == 0x0000C8, "Member 'Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner::CallFunc_GetAmmoWorldItemDefinition_BP_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner, CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue) == 0x0000D0, "Member 'Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner::CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner, Temp_bool_Variable) == 0x0000F8, "Member 'Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner, CallFunc_Map_Find_Value) == 0x0000FC, "Member 'Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner, CallFunc_Map_Find_ReturnValue) == 0x000100, "Member 'Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner, K2Node_Select_Default) == 0x000104, "Member 'Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner, CallFunc_Greater_IntInt_ReturnValue) == 0x000108, "Member 'Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner, CallFunc_GiveItemToInventoryOwner_ReturnValue) == 0x000110, "Member 'Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner::CallFunc_GiveItemToInventoryOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner, CallFunc_K2_GetItemQuantityOnPlayer_ReturnValue) == 0x000118, "Member 'Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner::CallFunc_K2_GetItemQuantityOnPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x00011C, "Member 'Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00011D, "Member 'Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner, CallFunc_IsValid_ReturnValue_1) == 0x00011E, "Member 'Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner, CallFunc_BooleanAND_ReturnValue) == 0x00011F, "Member 'Creative_CommonDeviceFunctionLibrary_C_Give_Ammo_To_Inventory_Owner::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

struct Creative_CommonDeviceFunctionLibrary_C_IndexToTeam final
{
public:
	int32                                         Index_0;
	uint8                                         Pad_4[0x4];
	class UObject*                                __WorldContext;
	uint8                                         Team;
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;
	uint8                                         CallFunc_Add_ByteByte_ReturnValue;
};
static_assert(alignof(Creative_CommonDeviceFunctionLibrary_C_IndexToTeam) == 0x000008, "Wrong alignment on Creative_CommonDeviceFunctionLibrary_C_IndexToTeam");
static_assert(sizeof(Creative_CommonDeviceFunctionLibrary_C_IndexToTeam) == 0x000018, "Wrong size on Creative_CommonDeviceFunctionLibrary_C_IndexToTeam");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IndexToTeam, Index_0) == 0x000000, "Member 'Creative_CommonDeviceFunctionLibrary_C_IndexToTeam::Index_0' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IndexToTeam, __WorldContext) == 0x000008, "Member 'Creative_CommonDeviceFunctionLibrary_C_IndexToTeam::__WorldContext' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IndexToTeam, Team) == 0x000010, "Member 'Creative_CommonDeviceFunctionLibrary_C_IndexToTeam::Team' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IndexToTeam, CallFunc_MakeLiteralByte_ReturnValue) == 0x000011, "Member 'Creative_CommonDeviceFunctionLibrary_C_IndexToTeam::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IndexToTeam, CallFunc_Conv_IntToByte_ReturnValue) == 0x000012, "Member 'Creative_CommonDeviceFunctionLibrary_C_IndexToTeam::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IndexToTeam, CallFunc_Add_ByteByte_ReturnValue) == 0x000013, "Member 'Creative_CommonDeviceFunctionLibrary_C_IndexToTeam::CallFunc_Add_ByteByte_ReturnValue' has a wrong offset!");

struct Creative_CommonDeviceFunctionLibrary_C_Is_Matching_Channel_ID final
{
public:
	class UFortGameplayMessageComponentBase*      A;
	class UFortGameplayMessageComponentBase*      B;
	class UObject*                                __WorldContext;
	bool                                          Matches;
	uint8                                         Pad_19[0x7];
	struct FGameplayTagContainer                  CallFunc_GetChannelId_ReturnValue;
	struct FGameplayTagContainer                  CallFunc_GetChannelId_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_GameplayTagContainer_ReturnValue;
};
static_assert(alignof(Creative_CommonDeviceFunctionLibrary_C_Is_Matching_Channel_ID) == 0x000008, "Wrong alignment on Creative_CommonDeviceFunctionLibrary_C_Is_Matching_Channel_ID");
static_assert(sizeof(Creative_CommonDeviceFunctionLibrary_C_Is_Matching_Channel_ID) == 0x000068, "Wrong size on Creative_CommonDeviceFunctionLibrary_C_Is_Matching_Channel_ID");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Is_Matching_Channel_ID, A) == 0x000000, "Member 'Creative_CommonDeviceFunctionLibrary_C_Is_Matching_Channel_ID::A' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Is_Matching_Channel_ID, B) == 0x000008, "Member 'Creative_CommonDeviceFunctionLibrary_C_Is_Matching_Channel_ID::B' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Is_Matching_Channel_ID, __WorldContext) == 0x000010, "Member 'Creative_CommonDeviceFunctionLibrary_C_Is_Matching_Channel_ID::__WorldContext' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Is_Matching_Channel_ID, Matches) == 0x000018, "Member 'Creative_CommonDeviceFunctionLibrary_C_Is_Matching_Channel_ID::Matches' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Is_Matching_Channel_ID, CallFunc_GetChannelId_ReturnValue) == 0x000020, "Member 'Creative_CommonDeviceFunctionLibrary_C_Is_Matching_Channel_ID::CallFunc_GetChannelId_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Is_Matching_Channel_ID, CallFunc_GetChannelId_ReturnValue_1) == 0x000040, "Member 'Creative_CommonDeviceFunctionLibrary_C_Is_Matching_Channel_ID::CallFunc_GetChannelId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Is_Matching_Channel_ID, CallFunc_EqualEqual_GameplayTagContainer_ReturnValue) == 0x000060, "Member 'Creative_CommonDeviceFunctionLibrary_C_Is_Matching_Channel_ID::CallFunc_EqualEqual_GameplayTagContainer_ReturnValue' has a wrong offset!");

struct Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase final
{
public:
	EFortMinigameState                            State;
	uint8                                         Pad_1[0x3];
	int32                                         PhaseIndex;
	const class AActor*                           Actor;
	class UObject*                                __WorldContext;
	bool                                          Enabled;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_IsInPlayMode_Play_Mode;
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;
	bool                                          CallFunc_BooleanAND_ReturnValue_2;
	bool                                          CallFunc_BooleanAND_ReturnValue_3;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
};
static_assert(alignof(Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase) == 0x000008, "Wrong alignment on Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase");
static_assert(sizeof(Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase) == 0x000028, "Wrong size on Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase, State) == 0x000000, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase::State' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase, PhaseIndex) == 0x000004, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase::PhaseIndex' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase, Actor) == 0x000008, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase::Actor' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase, __WorldContext) == 0x000010, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase::__WorldContext' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase, Enabled) == 0x000018, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase::Enabled' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000019, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00001A, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase, CallFunc_BooleanAND_ReturnValue) == 0x00001B, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase, CallFunc_IsInPlayMode_Play_Mode) == 0x00001C, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase::CallFunc_IsInPlayMode_Play_Mode' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase, CallFunc_MakeLiteralByte_ReturnValue) == 0x00001D, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00001E, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x00001F, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000020, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase, CallFunc_BooleanAND_ReturnValue_1) == 0x000021, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000022, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase, CallFunc_BooleanAND_ReturnValue_2) == 0x000023, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase, CallFunc_BooleanAND_ReturnValue_3) == 0x000024, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase, CallFunc_BooleanOR_ReturnValue) == 0x000025, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase, CallFunc_BooleanOR_ReturnValue_1) == 0x000026, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");

struct Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch final
{
public:
	EFortMinigameState                            State;
	uint8                                         Pad_1[0x3];
	int32                                         PhaseIndex;
	const class AActor*                           Actor;
	class UObject*                                __WorldContext;
	bool                                          Enabled;
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;
	bool                                          CallFunc_InEditor_ReturnValue;
	bool                                          CallFunc_IsInPlayMode_Play_Mode;
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_IsInPlayMode_Play_Mode_1;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue_2;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;
	bool                                          CallFunc_Less_ByteByte_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	bool                                          CallFunc_BooleanAND_ReturnValue_3;
	bool                                          CallFunc_BooleanAND_ReturnValue_4;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_4;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue_5;
	bool                                          CallFunc_BooleanAND_ReturnValue_6;
	bool                                          CallFunc_BooleanOR_ReturnValue_2;
	bool                                          CallFunc_BooleanOR_ReturnValue_3;
	bool                                          CallFunc_BooleanOR_ReturnValue_4;
};
static_assert(alignof(Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch) == 0x000008, "Wrong alignment on Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch");
static_assert(sizeof(Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch) == 0x000038, "Wrong size on Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch, State) == 0x000000, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch::State' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch, PhaseIndex) == 0x000004, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch::PhaseIndex' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch, Actor) == 0x000008, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch::Actor' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch, __WorldContext) == 0x000010, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch::__WorldContext' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch, Enabled) == 0x000018, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch::Enabled' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch, CallFunc_MakeLiteralByte_ReturnValue) == 0x000019, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch, CallFunc_InEditor_ReturnValue) == 0x00001A, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch::CallFunc_InEditor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch, CallFunc_IsInPlayMode_Play_Mode) == 0x00001B, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch::CallFunc_IsInPlayMode_Play_Mode' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00001C, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch, CallFunc_Not_PreBool_ReturnValue) == 0x00001D, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00001E, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00001F, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch, CallFunc_BooleanAND_ReturnValue) == 0x000020, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch, CallFunc_IsInPlayMode_Play_Mode_1) == 0x000021, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch::CallFunc_IsInPlayMode_Play_Mode_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch, CallFunc_BooleanAND_ReturnValue_1) == 0x000022, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch, CallFunc_BooleanAND_ReturnValue_2) == 0x000023, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch, CallFunc_BooleanOR_ReturnValue) == 0x000024, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000025, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch, CallFunc_Less_ByteByte_ReturnValue) == 0x000026, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch::CallFunc_Less_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000027, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000028, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000029, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x00002A, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch, CallFunc_BooleanAND_ReturnValue_3) == 0x00002B, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch, CallFunc_BooleanAND_ReturnValue_4) == 0x00002C, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x00002D, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch, CallFunc_EqualEqual_IntInt_ReturnValue_4) == 0x00002E, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch::CallFunc_EqualEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch, CallFunc_BooleanOR_ReturnValue_1) == 0x00002F, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch, CallFunc_BooleanAND_ReturnValue_5) == 0x000030, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch::CallFunc_BooleanAND_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch, CallFunc_BooleanAND_ReturnValue_6) == 0x000031, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch::CallFunc_BooleanAND_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch, CallFunc_BooleanOR_ReturnValue_2) == 0x000032, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch, CallFunc_BooleanOR_ReturnValue_3) == 0x000033, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch, CallFunc_BooleanOR_ReturnValue_4) == 0x000034, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch::CallFunc_BooleanOR_ReturnValue_4' has a wrong offset!");

struct Creative_CommonDeviceFunctionLibrary_C_IsInEditor final
{
public:
	class UObject*                                __WorldContext;
	bool                                          TRUE_0;
	bool                                          CallFunc_InEditor_ReturnValue;
};
static_assert(alignof(Creative_CommonDeviceFunctionLibrary_C_IsInEditor) == 0x000008, "Wrong alignment on Creative_CommonDeviceFunctionLibrary_C_IsInEditor");
static_assert(sizeof(Creative_CommonDeviceFunctionLibrary_C_IsInEditor) == 0x000010, "Wrong size on Creative_CommonDeviceFunctionLibrary_C_IsInEditor");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsInEditor, __WorldContext) == 0x000000, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsInEditor::__WorldContext' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsInEditor, TRUE_0) == 0x000008, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsInEditor::TRUE_0' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsInEditor, CallFunc_InEditor_ReturnValue) == 0x000009, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsInEditor::CallFunc_InEditor_ReturnValue' has a wrong offset!");

struct Creative_CommonDeviceFunctionLibrary_C_IsInPlayMode final
{
public:
	const class AActor*                           Actor;
	class UObject*                                __WorldContext;
	bool                                          Play_Mode;
	uint8                                         Pad_11[0x7];
	class AFortMinigame*                          Minigame;
	bool                                          CallFunc_IsInPlayMode_ReturnValue;
};
static_assert(alignof(Creative_CommonDeviceFunctionLibrary_C_IsInPlayMode) == 0x000008, "Wrong alignment on Creative_CommonDeviceFunctionLibrary_C_IsInPlayMode");
static_assert(sizeof(Creative_CommonDeviceFunctionLibrary_C_IsInPlayMode) == 0x000028, "Wrong size on Creative_CommonDeviceFunctionLibrary_C_IsInPlayMode");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsInPlayMode, Actor) == 0x000000, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsInPlayMode::Actor' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsInPlayMode, __WorldContext) == 0x000008, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsInPlayMode::__WorldContext' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsInPlayMode, Play_Mode) == 0x000010, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsInPlayMode::Play_Mode' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsInPlayMode, Minigame) == 0x000018, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsInPlayMode::Minigame' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsInPlayMode, CallFunc_IsInPlayMode_ReturnValue) == 0x000020, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsInPlayMode::CallFunc_IsInPlayMode_ReturnValue' has a wrong offset!");

struct Creative_CommonDeviceFunctionLibrary_C_IsLocalPawn final
{
public:
	class AActor*                                 Actor;
	class UObject*                                __WorldContext;
	bool                                          IsLocalPawn_0;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	uint8                                         Pad_12[0x6];
	TArray<class AFortPlayerController*>          CallFunc_GetLocalFortPlayerControllers_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	uint8                                         Pad_34[0x4];
	class AFortPlayerController*                  CallFunc_Array_Get_Item;
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;
	uint8                                         Pad_4B[0x1];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
};
static_assert(alignof(Creative_CommonDeviceFunctionLibrary_C_IsLocalPawn) == 0x000008, "Wrong alignment on Creative_CommonDeviceFunctionLibrary_C_IsLocalPawn");
static_assert(sizeof(Creative_CommonDeviceFunctionLibrary_C_IsLocalPawn) == 0x000050, "Wrong size on Creative_CommonDeviceFunctionLibrary_C_IsLocalPawn");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsLocalPawn, Actor) == 0x000000, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsLocalPawn::Actor' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsLocalPawn, __WorldContext) == 0x000008, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsLocalPawn::__WorldContext' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsLocalPawn, IsLocalPawn_0) == 0x000010, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsLocalPawn::IsLocalPawn_0' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsLocalPawn, CallFunc_IsDedicatedServer_ReturnValue) == 0x000011, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsLocalPawn::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsLocalPawn, CallFunc_GetLocalFortPlayerControllers_ReturnValue) == 0x000018, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsLocalPawn::CallFunc_GetLocalFortPlayerControllers_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsLocalPawn, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsLocalPawn::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsLocalPawn, Temp_int_Array_Index_Variable) == 0x00002C, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsLocalPawn::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsLocalPawn, Temp_int_Loop_Counter_Variable) == 0x000030, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsLocalPawn::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsLocalPawn, CallFunc_Array_Get_Item) == 0x000038, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsLocalPawn::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsLocalPawn, CallFunc_K2_GetPawn_ReturnValue) == 0x000040, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsLocalPawn::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsLocalPawn, CallFunc_Less_IntInt_ReturnValue) == 0x000048, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsLocalPawn::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsLocalPawn, CallFunc_IsValid_ReturnValue) == 0x000049, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsLocalPawn::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsLocalPawn, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x00004A, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsLocalPawn::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsLocalPawn, CallFunc_Add_IntInt_ReturnValue) == 0x00004C, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsLocalPawn::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

struct Creative_CommonDeviceFunctionLibrary_C_IsLogicInPlayMode final
{
public:
	const class UFortMinigameLogicComponent*      Logic;
	class UObject*                                __WorldContext;
	bool                                          Play_Mode;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_IsInPlayMode_ReturnValue;
};
static_assert(alignof(Creative_CommonDeviceFunctionLibrary_C_IsLogicInPlayMode) == 0x000008, "Wrong alignment on Creative_CommonDeviceFunctionLibrary_C_IsLogicInPlayMode");
static_assert(sizeof(Creative_CommonDeviceFunctionLibrary_C_IsLogicInPlayMode) == 0x000018, "Wrong size on Creative_CommonDeviceFunctionLibrary_C_IsLogicInPlayMode");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsLogicInPlayMode, Logic) == 0x000000, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsLogicInPlayMode::Logic' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsLogicInPlayMode, __WorldContext) == 0x000008, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsLogicInPlayMode::__WorldContext' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsLogicInPlayMode, Play_Mode) == 0x000010, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsLogicInPlayMode::Play_Mode' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsLogicInPlayMode, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsLogicInPlayMode::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsLogicInPlayMode, CallFunc_IsValid_ReturnValue_1) == 0x000012, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsLogicInPlayMode::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsLogicInPlayMode, CallFunc_IsInPlayMode_ReturnValue) == 0x000013, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsLogicInPlayMode::CallFunc_IsInPlayMode_ReturnValue' has a wrong offset!");

struct Creative_CommonDeviceFunctionLibrary_C_IsOnUnpublishedIsland final
{
public:
	const class AActor*                           Actor;
	class UObject*                                __WorldContext;
	bool                                          Edit_Mode;
	EFortVolumeType                               CallFunc_GetExperienceType_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
};
static_assert(alignof(Creative_CommonDeviceFunctionLibrary_C_IsOnUnpublishedIsland) == 0x000008, "Wrong alignment on Creative_CommonDeviceFunctionLibrary_C_IsOnUnpublishedIsland");
static_assert(sizeof(Creative_CommonDeviceFunctionLibrary_C_IsOnUnpublishedIsland) == 0x000018, "Wrong size on Creative_CommonDeviceFunctionLibrary_C_IsOnUnpublishedIsland");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsOnUnpublishedIsland, Actor) == 0x000000, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsOnUnpublishedIsland::Actor' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsOnUnpublishedIsland, __WorldContext) == 0x000008, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsOnUnpublishedIsland::__WorldContext' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsOnUnpublishedIsland, Edit_Mode) == 0x000010, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsOnUnpublishedIsland::Edit_Mode' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsOnUnpublishedIsland, CallFunc_GetExperienceType_ReturnValue) == 0x000011, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsOnUnpublishedIsland::CallFunc_GetExperienceType_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsOnUnpublishedIsland, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000012, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsOnUnpublishedIsland::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

struct Creative_CommonDeviceFunctionLibrary_C_IsValidTeam final
{
public:
	int32                                         Team_to_Check;
	uint8                                         Pad_4[0x4];
	const class AActor*                           Actor_To_Check;
	class UObject*                                __WorldContext;
	bool                                          Valid;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;
	uint8                                         CallFunc_GetActorPvPTeamIndex_TeamIndex;
	bool                                          CallFunc_GetActorPvPTeamIndex_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
};
static_assert(alignof(Creative_CommonDeviceFunctionLibrary_C_IsValidTeam) == 0x000008, "Wrong alignment on Creative_CommonDeviceFunctionLibrary_C_IsValidTeam");
static_assert(sizeof(Creative_CommonDeviceFunctionLibrary_C_IsValidTeam) == 0x000020, "Wrong size on Creative_CommonDeviceFunctionLibrary_C_IsValidTeam");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsValidTeam, Team_to_Check) == 0x000000, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsValidTeam::Team_to_Check' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsValidTeam, Actor_To_Check) == 0x000008, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsValidTeam::Actor_To_Check' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsValidTeam, __WorldContext) == 0x000010, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsValidTeam::__WorldContext' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsValidTeam, Valid) == 0x000018, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsValidTeam::Valid' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsValidTeam, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsValidTeam::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsValidTeam, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00001A, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsValidTeam::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsValidTeam, CallFunc_Conv_IntToByte_ReturnValue) == 0x00001B, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsValidTeam::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsValidTeam, CallFunc_GetActorPvPTeamIndex_TeamIndex) == 0x00001C, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsValidTeam::CallFunc_GetActorPvPTeamIndex_TeamIndex' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsValidTeam, CallFunc_GetActorPvPTeamIndex_ReturnValue) == 0x00001D, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsValidTeam::CallFunc_GetActorPvPTeamIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsValidTeam, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00001E, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsValidTeam::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_IsValidTeam, CallFunc_BooleanOR_ReturnValue) == 0x00001F, "Member 'Creative_CommonDeviceFunctionLibrary_C_IsValidTeam::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

struct Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch final
{
public:
	struct FGameplayTagContainer                  TagContainer;
	struct FGameplayTag                           tag;
	bool                                          ExactMatch;
	uint8                                         Pad_25[0x3];
	class UObject*                                __WorldContext;
	bool                                          TagFound;
	uint8                                         Pad_31[0x3];
	struct FGameplayTag                           FirstMatchingTag;
	struct FGameplayTag                           FoundTag;
	int32                                         Temp_int_Array_Index_Variable;
	TArray<struct FGameplayTag>                   CallFunc_BreakGameplayTagContainer_GameplayTags;
	struct FGameplayTag                           CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_MatchesTag_ReturnValue;
	uint8                                         Pad_59[0x3];
	int32                                         Temp_int_Loop_Counter_Variable;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_61[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	bool                                          Temp_bool_True_if_break_was_hit_Variable;
	bool                                          CallFunc_IsGameplayTagValid_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch) == 0x000008, "Wrong alignment on Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch");
static_assert(sizeof(Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch) == 0x000070, "Wrong size on Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch, TagContainer) == 0x000000, "Member 'Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch::TagContainer' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch, tag) == 0x000020, "Member 'Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch::tag' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch, ExactMatch) == 0x000024, "Member 'Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch::ExactMatch' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch, __WorldContext) == 0x000028, "Member 'Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch::__WorldContext' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch, TagFound) == 0x000030, "Member 'Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch::TagFound' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch, FirstMatchingTag) == 0x000034, "Member 'Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch::FirstMatchingTag' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch, FoundTag) == 0x000038, "Member 'Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch::FoundTag' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch, Temp_int_Array_Index_Variable) == 0x00003C, "Member 'Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch, CallFunc_BreakGameplayTagContainer_GameplayTags) == 0x000040, "Member 'Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch::CallFunc_BreakGameplayTagContainer_GameplayTags' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch, CallFunc_Array_Get_Item) == 0x000050, "Member 'Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch, CallFunc_Array_Length_ReturnValue) == 0x000054, "Member 'Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch, CallFunc_MatchesTag_ReturnValue) == 0x000058, "Member 'Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch::CallFunc_MatchesTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch, Temp_int_Loop_Counter_Variable) == 0x00005C, "Member 'Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch, CallFunc_Add_IntInt_ReturnValue) == 0x000064, "Member 'Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch, Temp_bool_True_if_break_was_hit_Variable) == 0x000068, "Member 'Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch, CallFunc_IsGameplayTagValid_ReturnValue) == 0x000069, "Member 'Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch::CallFunc_IsGameplayTagValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch, CallFunc_Not_PreBool_ReturnValue) == 0x00006A, "Member 'Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch, CallFunc_BooleanAND_ReturnValue) == 0x00006B, "Member 'Creative_CommonDeviceFunctionLibrary_C_MatchesTagReturnMatch::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

struct Creative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID final
{
public:
	class UPrimitiveComponent*                    Mesh;
	class UMaterialInstanceDynamic*               Target_MID;
	int32                                         MatID;
	uint8                                         Pad_14[0x4];
	class UObject*                                __WorldContext;
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_29[0x7];
	class FString                                 CallFunc_GetDisplayName_ReturnValue;
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_61[0x7];
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;
	class FName                                   CallFunc_GenerateUniqueMaterialName_UniqueName;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_7D[0x3];
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue_1;
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;
};
static_assert(alignof(Creative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID) == 0x000008, "Wrong alignment on Creative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID");
static_assert(sizeof(Creative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID) == 0x000098, "Wrong size on Creative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID, Mesh) == 0x000000, "Member 'Creative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID::Mesh' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID, Target_MID) == 0x000008, "Member 'Creative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID::Target_MID' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID, MatID) == 0x000010, "Member 'Creative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID::MatID' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID, __WorldContext) == 0x000018, "Member 'Creative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID::__WorldContext' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID, CallFunc_GetMaterial_ReturnValue) == 0x000020, "Member 'Creative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'Creative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID, CallFunc_GetDisplayName_ReturnValue) == 0x000030, "Member 'Creative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID, CallFunc_Concat_StrStr_ReturnValue) == 0x000040, "Member 'Creative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID, CallFunc_Conv_IntToString_ReturnValue) == 0x000050, "Member 'Creative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID, CallFunc_IsValid_ReturnValue_1) == 0x000060, "Member 'Creative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000068, "Member 'Creative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID, CallFunc_GenerateUniqueMaterialName_UniqueName) == 0x000078, "Member 'Creative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID::CallFunc_GenerateUniqueMaterialName_UniqueName' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID, CallFunc_IsValid_ReturnValue_2) == 0x00007C, "Member 'Creative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000080, "Member 'Creative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID, CallFunc_GetMaterial_ReturnValue_1) == 0x000088, "Member 'Creative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID::CallFunc_GetMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000090, "Member 'Creative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");

struct Creative_CommonDeviceFunctionLibrary_C_Refresh_Team_Change_Binding final
{
public:
	class UFortMinigameLogicComponent*            Minigame_Logic;
	bool                                          Unbind;
	uint8                                         Pad_9[0x3];
	TDelegate<void()>                             Event;
	class UObject*                                __WorldContext;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
};
static_assert(alignof(Creative_CommonDeviceFunctionLibrary_C_Refresh_Team_Change_Binding) == 0x000008, "Wrong alignment on Creative_CommonDeviceFunctionLibrary_C_Refresh_Team_Change_Binding");
static_assert(sizeof(Creative_CommonDeviceFunctionLibrary_C_Refresh_Team_Change_Binding) == 0x000028, "Wrong size on Creative_CommonDeviceFunctionLibrary_C_Refresh_Team_Change_Binding");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Refresh_Team_Change_Binding, Minigame_Logic) == 0x000000, "Member 'Creative_CommonDeviceFunctionLibrary_C_Refresh_Team_Change_Binding::Minigame_Logic' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Refresh_Team_Change_Binding, Unbind) == 0x000008, "Member 'Creative_CommonDeviceFunctionLibrary_C_Refresh_Team_Change_Binding::Unbind' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Refresh_Team_Change_Binding, Event) == 0x00000C, "Member 'Creative_CommonDeviceFunctionLibrary_C_Refresh_Team_Change_Binding::Event' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Refresh_Team_Change_Binding, __WorldContext) == 0x000018, "Member 'Creative_CommonDeviceFunctionLibrary_C_Refresh_Team_Change_Binding::__WorldContext' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Refresh_Team_Change_Binding, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'Creative_CommonDeviceFunctionLibrary_C_Refresh_Team_Change_Binding::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Refresh_Team_Change_Binding, CallFunc_IsDedicatedServer_ReturnValue) == 0x000021, "Member 'Creative_CommonDeviceFunctionLibrary_C_Refresh_Team_Change_Binding::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Refresh_Team_Change_Binding, CallFunc_IsValid_ReturnValue_1) == 0x000022, "Member 'Creative_CommonDeviceFunctionLibrary_C_Refresh_Team_Change_Binding::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

struct Creative_CommonDeviceFunctionLibrary_C_Simple_Apply_Gameplay_Effect_to_Actor final
{
public:
	class UClass*                                 GameplayEffect;
	class AActor*                                 Actor;
	class UObject*                                __WorldContext;
	class UAbilitySystemComponent*                PlayerAbilitySystemComp;
	bool                                          CallFunc_IsValidClass_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_22[0x6];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	TArray<TSubclassOf<class UGameplayEffect>>    K2Node_MakeArray_Array;
};
static_assert(alignof(Creative_CommonDeviceFunctionLibrary_C_Simple_Apply_Gameplay_Effect_to_Actor) == 0x000008, "Wrong alignment on Creative_CommonDeviceFunctionLibrary_C_Simple_Apply_Gameplay_Effect_to_Actor");
static_assert(sizeof(Creative_CommonDeviceFunctionLibrary_C_Simple_Apply_Gameplay_Effect_to_Actor) == 0x000050, "Wrong size on Creative_CommonDeviceFunctionLibrary_C_Simple_Apply_Gameplay_Effect_to_Actor");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Simple_Apply_Gameplay_Effect_to_Actor, GameplayEffect) == 0x000000, "Member 'Creative_CommonDeviceFunctionLibrary_C_Simple_Apply_Gameplay_Effect_to_Actor::GameplayEffect' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Simple_Apply_Gameplay_Effect_to_Actor, Actor) == 0x000008, "Member 'Creative_CommonDeviceFunctionLibrary_C_Simple_Apply_Gameplay_Effect_to_Actor::Actor' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Simple_Apply_Gameplay_Effect_to_Actor, __WorldContext) == 0x000010, "Member 'Creative_CommonDeviceFunctionLibrary_C_Simple_Apply_Gameplay_Effect_to_Actor::__WorldContext' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Simple_Apply_Gameplay_Effect_to_Actor, PlayerAbilitySystemComp) == 0x000018, "Member 'Creative_CommonDeviceFunctionLibrary_C_Simple_Apply_Gameplay_Effect_to_Actor::PlayerAbilitySystemComp' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Simple_Apply_Gameplay_Effect_to_Actor, CallFunc_IsValidClass_ReturnValue) == 0x000020, "Member 'Creative_CommonDeviceFunctionLibrary_C_Simple_Apply_Gameplay_Effect_to_Actor::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Simple_Apply_Gameplay_Effect_to_Actor, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'Creative_CommonDeviceFunctionLibrary_C_Simple_Apply_Gameplay_Effect_to_Actor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Simple_Apply_Gameplay_Effect_to_Actor, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'Creative_CommonDeviceFunctionLibrary_C_Simple_Apply_Gameplay_Effect_to_Actor::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Simple_Apply_Gameplay_Effect_to_Actor, K2Node_MakeArray_Array) == 0x000040, "Member 'Creative_CommonDeviceFunctionLibrary_C_Simple_Apply_Gameplay_Effect_to_Actor::K2Node_MakeArray_Array' has a wrong offset!");

struct Creative_CommonDeviceFunctionLibrary_C_TeamToIndex final
{
public:
	uint8                                         Team;
	uint8                                         Pad_1[0x7];
	class UObject*                                __WorldContext;
	int32                                         Index_0;
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;
	uint8                                         CallFunc_Subtract_ByteByte_ReturnValue;
	uint8                                         Pad_16[0x2];
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;
};
static_assert(alignof(Creative_CommonDeviceFunctionLibrary_C_TeamToIndex) == 0x000008, "Wrong alignment on Creative_CommonDeviceFunctionLibrary_C_TeamToIndex");
static_assert(sizeof(Creative_CommonDeviceFunctionLibrary_C_TeamToIndex) == 0x000020, "Wrong size on Creative_CommonDeviceFunctionLibrary_C_TeamToIndex");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_TeamToIndex, Team) == 0x000000, "Member 'Creative_CommonDeviceFunctionLibrary_C_TeamToIndex::Team' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_TeamToIndex, __WorldContext) == 0x000008, "Member 'Creative_CommonDeviceFunctionLibrary_C_TeamToIndex::__WorldContext' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_TeamToIndex, Index_0) == 0x000010, "Member 'Creative_CommonDeviceFunctionLibrary_C_TeamToIndex::Index_0' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_TeamToIndex, CallFunc_MakeLiteralByte_ReturnValue) == 0x000014, "Member 'Creative_CommonDeviceFunctionLibrary_C_TeamToIndex::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_TeamToIndex, CallFunc_Subtract_ByteByte_ReturnValue) == 0x000015, "Member 'Creative_CommonDeviceFunctionLibrary_C_TeamToIndex::CallFunc_Subtract_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_TeamToIndex, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000018, "Member 'Creative_CommonDeviceFunctionLibrary_C_TeamToIndex::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");

struct Creative_CommonDeviceFunctionLibrary_C_Update_Team_Color final
{
public:
	class UFortMinigameLogicComponent*            Minigame_Logic;
	class UPrimitiveComponent*                    Mesh;
	int32                                         Team;
	uint8                                         Pad_14[0x4];
	class UObject*                                __WorldContext;
	class UMaterialInstanceDynamic*               CallFunc_GetMID_MID;
	int32                                         CallFunc_Get_Team_Color_Index_or_Team_Index_ReturnValue;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;
};
static_assert(alignof(Creative_CommonDeviceFunctionLibrary_C_Update_Team_Color) == 0x000008, "Wrong alignment on Creative_CommonDeviceFunctionLibrary_C_Update_Team_Color");
static_assert(sizeof(Creative_CommonDeviceFunctionLibrary_C_Update_Team_Color) == 0x000030, "Wrong size on Creative_CommonDeviceFunctionLibrary_C_Update_Team_Color");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Update_Team_Color, Minigame_Logic) == 0x000000, "Member 'Creative_CommonDeviceFunctionLibrary_C_Update_Team_Color::Minigame_Logic' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Update_Team_Color, Mesh) == 0x000008, "Member 'Creative_CommonDeviceFunctionLibrary_C_Update_Team_Color::Mesh' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Update_Team_Color, Team) == 0x000010, "Member 'Creative_CommonDeviceFunctionLibrary_C_Update_Team_Color::Team' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Update_Team_Color, __WorldContext) == 0x000018, "Member 'Creative_CommonDeviceFunctionLibrary_C_Update_Team_Color::__WorldContext' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Update_Team_Color, CallFunc_GetMID_MID) == 0x000020, "Member 'Creative_CommonDeviceFunctionLibrary_C_Update_Team_Color::CallFunc_GetMID_MID' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Update_Team_Color, CallFunc_Get_Team_Color_Index_or_Team_Index_ReturnValue) == 0x000028, "Member 'Creative_CommonDeviceFunctionLibrary_C_Update_Team_Color::CallFunc_Get_Team_Color_Index_or_Team_Index_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Update_Team_Color, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00002C, "Member 'Creative_CommonDeviceFunctionLibrary_C_Update_Team_Color::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");

struct Creative_CommonDeviceFunctionLibrary_C_Wrapping_Modulo final
{
public:
	int32                                         A;
	int32                                         B;
	class UObject*                                __WorldContext;
	int32                                         Out;
	int32                                         __Result;
	int32                                         CallFunc_Percent_IntInt_ReturnValue;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
};
static_assert(alignof(Creative_CommonDeviceFunctionLibrary_C_Wrapping_Modulo) == 0x000008, "Wrong alignment on Creative_CommonDeviceFunctionLibrary_C_Wrapping_Modulo");
static_assert(sizeof(Creative_CommonDeviceFunctionLibrary_C_Wrapping_Modulo) == 0x000028, "Wrong size on Creative_CommonDeviceFunctionLibrary_C_Wrapping_Modulo");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Wrapping_Modulo, A) == 0x000000, "Member 'Creative_CommonDeviceFunctionLibrary_C_Wrapping_Modulo::A' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Wrapping_Modulo, B) == 0x000004, "Member 'Creative_CommonDeviceFunctionLibrary_C_Wrapping_Modulo::B' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Wrapping_Modulo, __WorldContext) == 0x000008, "Member 'Creative_CommonDeviceFunctionLibrary_C_Wrapping_Modulo::__WorldContext' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Wrapping_Modulo, Out) == 0x000010, "Member 'Creative_CommonDeviceFunctionLibrary_C_Wrapping_Modulo::Out' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Wrapping_Modulo, __Result) == 0x000014, "Member 'Creative_CommonDeviceFunctionLibrary_C_Wrapping_Modulo::__Result' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Wrapping_Modulo, CallFunc_Percent_IntInt_ReturnValue) == 0x000018, "Member 'Creative_CommonDeviceFunctionLibrary_C_Wrapping_Modulo::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Wrapping_Modulo, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'Creative_CommonDeviceFunctionLibrary_C_Wrapping_Modulo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Creative_CommonDeviceFunctionLibrary_C_Wrapping_Modulo, CallFunc_Less_IntInt_ReturnValue) == 0x000020, "Member 'Creative_CommonDeviceFunctionLibrary_C_Wrapping_Modulo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}
