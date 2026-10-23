#pragma once

#include "Basic.hpp"

#include "PhysicsCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "En_ShellTypes_01_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct B_Ranged_Generic_C_ActivateOrDeactivateWindParticle final
{
public:
	bool                                          bNewActive;
};
static_assert(alignof(B_Ranged_Generic_C_ActivateOrDeactivateWindParticle) == 0x000001, "Wrong alignment on B_Ranged_Generic_C_ActivateOrDeactivateWindParticle");
static_assert(sizeof(B_Ranged_Generic_C_ActivateOrDeactivateWindParticle) == 0x000001, "Wrong size on B_Ranged_Generic_C_ActivateOrDeactivateWindParticle");
static_assert(offsetof(B_Ranged_Generic_C_ActivateOrDeactivateWindParticle, bNewActive) == 0x000000, "Member 'B_Ranged_Generic_C_ActivateOrDeactivateWindParticle::bNewActive' has a wrong offset!");

struct B_Ranged_Generic_C_ActivateReloadSmokeFX final
{
public:
	bool                                          CallFunc_ShouldPlayReloadFX_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(B_Ranged_Generic_C_ActivateReloadSmokeFX) == 0x000001, "Wrong alignment on B_Ranged_Generic_C_ActivateReloadSmokeFX");
static_assert(sizeof(B_Ranged_Generic_C_ActivateReloadSmokeFX) == 0x000002, "Wrong size on B_Ranged_Generic_C_ActivateReloadSmokeFX");
static_assert(offsetof(B_Ranged_Generic_C_ActivateReloadSmokeFX, CallFunc_ShouldPlayReloadFX_ReturnValue) == 0x000000, "Member 'B_Ranged_Generic_C_ActivateReloadSmokeFX::CallFunc_ShouldPlayReloadFX_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ActivateReloadSmokeFX, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'B_Ranged_Generic_C_ActivateReloadSmokeFX::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct B_Ranged_Generic_C_ActivateShellsFX final
{
public:
	bool                                          Bool;
	uint8                                         Pad_1[0x3];
	int32                                         Temp_int_Variable;
	int32                                         Temp_int_Variable_1;
	int32                                         Temp_int_Variable_2;
	int32                                         Temp_int_Variable_3;
	bool                                          CallFunc_GetValueAsBool_ReturnValue;
	uint8                                         Pad_15[0x3];
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_31[0x3];
	int32                                         Temp_int_Variable_4;
	En_ShellTypes_01                              Temp_byte_Variable;
	uint8                                         Pad_39[0x3];
	int32                                         K2Node_Select_Default;
	float                                         CallFunc_ActivateShellsFXNative_SpawnRateScale_ImplicitCast;
	float                                         CallFunc_Conv_FloatToVector_InFloat_ImplicitCast;
	float                                         CallFunc_ActivateShellsFXNative_Radius_ImplicitCast;
	float                                         CallFunc_ActivateShellsFXNative_Height_ImplicitCast;
	float                                         CallFunc_ActivateShellsFXNative_CullDistance_ImplicitCast;
};
static_assert(alignof(B_Ranged_Generic_C_ActivateShellsFX) == 0x000008, "Wrong alignment on B_Ranged_Generic_C_ActivateShellsFX");
static_assert(sizeof(B_Ranged_Generic_C_ActivateShellsFX) == 0x000058, "Wrong size on B_Ranged_Generic_C_ActivateShellsFX");
static_assert(offsetof(B_Ranged_Generic_C_ActivateShellsFX, Bool) == 0x000000, "Member 'B_Ranged_Generic_C_ActivateShellsFX::Bool' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ActivateShellsFX, Temp_int_Variable) == 0x000004, "Member 'B_Ranged_Generic_C_ActivateShellsFX::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ActivateShellsFX, Temp_int_Variable_1) == 0x000008, "Member 'B_Ranged_Generic_C_ActivateShellsFX::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ActivateShellsFX, Temp_int_Variable_2) == 0x00000C, "Member 'B_Ranged_Generic_C_ActivateShellsFX::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ActivateShellsFX, Temp_int_Variable_3) == 0x000010, "Member 'B_Ranged_Generic_C_ActivateShellsFX::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ActivateShellsFX, CallFunc_GetValueAsBool_ReturnValue) == 0x000014, "Member 'B_Ranged_Generic_C_ActivateShellsFX::CallFunc_GetValueAsBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ActivateShellsFX, CallFunc_Conv_FloatToVector_ReturnValue) == 0x000018, "Member 'B_Ranged_Generic_C_ActivateShellsFX::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ActivateShellsFX, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'B_Ranged_Generic_C_ActivateShellsFX::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ActivateShellsFX, Temp_int_Variable_4) == 0x000034, "Member 'B_Ranged_Generic_C_ActivateShellsFX::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ActivateShellsFX, Temp_byte_Variable) == 0x000038, "Member 'B_Ranged_Generic_C_ActivateShellsFX::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ActivateShellsFX, K2Node_Select_Default) == 0x00003C, "Member 'B_Ranged_Generic_C_ActivateShellsFX::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ActivateShellsFX, CallFunc_ActivateShellsFXNative_SpawnRateScale_ImplicitCast) == 0x000040, "Member 'B_Ranged_Generic_C_ActivateShellsFX::CallFunc_ActivateShellsFXNative_SpawnRateScale_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ActivateShellsFX, CallFunc_Conv_FloatToVector_InFloat_ImplicitCast) == 0x000044, "Member 'B_Ranged_Generic_C_ActivateShellsFX::CallFunc_Conv_FloatToVector_InFloat_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ActivateShellsFX, CallFunc_ActivateShellsFXNative_Radius_ImplicitCast) == 0x000048, "Member 'B_Ranged_Generic_C_ActivateShellsFX::CallFunc_ActivateShellsFXNative_Radius_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ActivateShellsFX, CallFunc_ActivateShellsFXNative_Height_ImplicitCast) == 0x00004C, "Member 'B_Ranged_Generic_C_ActivateShellsFX::CallFunc_ActivateShellsFXNative_Height_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ActivateShellsFX, CallFunc_ActivateShellsFXNative_CullDistance_ImplicitCast) == 0x000050, "Member 'B_Ranged_Generic_C_ActivateShellsFX::CallFunc_ActivateShellsFXNative_CullDistance_ImplicitCast' has a wrong offset!");

struct B_Ranged_Generic_C_AddRandomScale final
{
public:
	int32                                         Temp_int_Variable;
	int32                                         Temp_int_Variable_1;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	double                                        CallFunc_RandomFloatInRange_ReturnValue;
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	double                                        CallFunc_RandomFloatInRange_ReturnValue_1;
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;
	TArray<class UFXSystemComponent*>             CallFunc_GetActiveMuzzleComponents_NewParam;
	double                                        CallFunc_RandomFloatInRange_ReturnValue_2;
	class UFXSystemComponent*                     CallFunc_Array_Get_Item;
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_71[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue;
	class UFXSystemComponent*                     CallFunc_Array_Get_Item_1;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_81[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;
};
static_assert(alignof(B_Ranged_Generic_C_AddRandomScale) == 0x000008, "Wrong alignment on B_Ranged_Generic_C_AddRandomScale");
static_assert(sizeof(B_Ranged_Generic_C_AddRandomScale) == 0x000090, "Wrong size on B_Ranged_Generic_C_AddRandomScale");
static_assert(offsetof(B_Ranged_Generic_C_AddRandomScale, Temp_int_Variable) == 0x000000, "Member 'B_Ranged_Generic_C_AddRandomScale::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_AddRandomScale, Temp_int_Variable_1) == 0x000004, "Member 'B_Ranged_Generic_C_AddRandomScale::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_AddRandomScale, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'B_Ranged_Generic_C_AddRandomScale::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_AddRandomScale, CallFunc_Add_IntInt_ReturnValue_1) == 0x00000C, "Member 'B_Ranged_Generic_C_AddRandomScale::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_AddRandomScale, CallFunc_RandomFloatInRange_ReturnValue) == 0x000010, "Member 'B_Ranged_Generic_C_AddRandomScale::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_AddRandomScale, CallFunc_MakeVector_ReturnValue) == 0x000018, "Member 'B_Ranged_Generic_C_AddRandomScale::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_AddRandomScale, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000030, "Member 'B_Ranged_Generic_C_AddRandomScale::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_AddRandomScale, CallFunc_MakeVector_ReturnValue_1) == 0x000038, "Member 'B_Ranged_Generic_C_AddRandomScale::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_AddRandomScale, CallFunc_GetActiveMuzzleComponents_NewParam) == 0x000050, "Member 'B_Ranged_Generic_C_AddRandomScale::CallFunc_GetActiveMuzzleComponents_NewParam' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_AddRandomScale, CallFunc_RandomFloatInRange_ReturnValue_2) == 0x000060, "Member 'B_Ranged_Generic_C_AddRandomScale::CallFunc_RandomFloatInRange_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_AddRandomScale, CallFunc_Array_Get_Item) == 0x000068, "Member 'B_Ranged_Generic_C_AddRandomScale::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_AddRandomScale, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000070, "Member 'B_Ranged_Generic_C_AddRandomScale::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_AddRandomScale, CallFunc_Array_Length_ReturnValue) == 0x000074, "Member 'B_Ranged_Generic_C_AddRandomScale::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_AddRandomScale, CallFunc_Array_Get_Item_1) == 0x000078, "Member 'B_Ranged_Generic_C_AddRandomScale::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_AddRandomScale, CallFunc_Less_IntInt_ReturnValue) == 0x000080, "Member 'B_Ranged_Generic_C_AddRandomScale::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_AddRandomScale, CallFunc_Array_Length_ReturnValue_1) == 0x000084, "Member 'B_Ranged_Generic_C_AddRandomScale::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_AddRandomScale, CallFunc_Less_IntInt_ReturnValue_1) == 0x000088, "Member 'B_Ranged_Generic_C_AddRandomScale::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

struct B_Ranged_Generic_C_DeactivateMuzzleFX final
{
public:
	int32                                         Temp_int_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	bool                                          CallFunc_GetValueAsBool_ReturnValue;
	uint8                                         Pad_9[0x7];
	TArray<class UFXSystemComponent*>             CallFunc_GetActiveMuzzleComponents_NewParam;
	class UFXSystemComponent*                     CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
};
static_assert(alignof(B_Ranged_Generic_C_DeactivateMuzzleFX) == 0x000008, "Wrong alignment on B_Ranged_Generic_C_DeactivateMuzzleFX");
static_assert(sizeof(B_Ranged_Generic_C_DeactivateMuzzleFX) == 0x000030, "Wrong size on B_Ranged_Generic_C_DeactivateMuzzleFX");
static_assert(offsetof(B_Ranged_Generic_C_DeactivateMuzzleFX, Temp_int_Variable) == 0x000000, "Member 'B_Ranged_Generic_C_DeactivateMuzzleFX::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_DeactivateMuzzleFX, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'B_Ranged_Generic_C_DeactivateMuzzleFX::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_DeactivateMuzzleFX, CallFunc_GetValueAsBool_ReturnValue) == 0x000008, "Member 'B_Ranged_Generic_C_DeactivateMuzzleFX::CallFunc_GetValueAsBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_DeactivateMuzzleFX, CallFunc_GetActiveMuzzleComponents_NewParam) == 0x000010, "Member 'B_Ranged_Generic_C_DeactivateMuzzleFX::CallFunc_GetActiveMuzzleComponents_NewParam' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_DeactivateMuzzleFX, CallFunc_Array_Get_Item) == 0x000020, "Member 'B_Ranged_Generic_C_DeactivateMuzzleFX::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_DeactivateMuzzleFX, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'B_Ranged_Generic_C_DeactivateMuzzleFX::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_DeactivateMuzzleFX, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'B_Ranged_Generic_C_DeactivateMuzzleFX::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

struct B_Ranged_Generic_C_DeactivateReloadSmokeFX final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(B_Ranged_Generic_C_DeactivateReloadSmokeFX) == 0x000001, "Wrong alignment on B_Ranged_Generic_C_DeactivateReloadSmokeFX");
static_assert(sizeof(B_Ranged_Generic_C_DeactivateReloadSmokeFX) == 0x000001, "Wrong size on B_Ranged_Generic_C_DeactivateReloadSmokeFX");
static_assert(offsetof(B_Ranged_Generic_C_DeactivateReloadSmokeFX, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'B_Ranged_Generic_C_DeactivateReloadSmokeFX::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct B_Ranged_Generic_C_DeactivateShellsFX final
{
public:
	bool                                          CallFunc_GetValueAsBool_ReturnValue;
	bool                                          CallFunc_IsActive_ReturnValue;
};
static_assert(alignof(B_Ranged_Generic_C_DeactivateShellsFX) == 0x000001, "Wrong alignment on B_Ranged_Generic_C_DeactivateShellsFX");
static_assert(sizeof(B_Ranged_Generic_C_DeactivateShellsFX) == 0x000002, "Wrong size on B_Ranged_Generic_C_DeactivateShellsFX");
static_assert(offsetof(B_Ranged_Generic_C_DeactivateShellsFX, CallFunc_GetValueAsBool_ReturnValue) == 0x000000, "Member 'B_Ranged_Generic_C_DeactivateShellsFX::CallFunc_GetValueAsBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_DeactivateShellsFX, CallFunc_IsActive_ReturnValue) == 0x000001, "Member 'B_Ranged_Generic_C_DeactivateShellsFX::CallFunc_IsActive_ReturnValue' has a wrong offset!");

struct B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	double                                        CallFunc_GetPI_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_1C[0x4];
	double                                        CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	uint8                                         Pad_39[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;
	uint8                                         Pad_51[0x7];
	class APawn*                                  CallFunc_GetInstigator_ReturnValue;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          K2Node_Event_bPersistentFire;
	bool                                          K2Node_Event_bSecondaryFire;
	uint8                                         Pad_6D[0x3];
	int32                                         Temp_int_Loop_Counter_Variable;
	EFortReloadFXState                            K2Node_Event_ReloadStage;
	uint8                                         Pad_75[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	uint8                                         Pad_7C[0x4];
	class APawn*                                  CallFunc_GetInstigator_ReturnValue_1;
	double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_99[0x7];
	double                                        K2Node_MathExpression_ReturnValue;
	class APlayerController*                      CallFunc_GetLocalViewingPlayerController_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          K2Node_MathExpression_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	bool                                          Temp_bool_IsClosed_Variable;
	bool                                          K2Node_Event_bNewIsTargeting;
	bool                                          CallFunc_SetHiddenInGameControllerOnly_ReturnValue;
	uint8                                         Pad_B6[0x2];
	class APawn*                                  CallFunc_GetInstigator_ReturnValue_2;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn_2;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	uint8                                         Pad_CA[0x6];
	TArray<class AFortAIPawn*>                    CallFunc_GetAllActorsOfClass_OutActors;
	bool                                          K2Node_CustomEvent_Enable_Or_Disable;
	uint8                                         Pad_E1[0x3];
	int32                                         K2Node_CustomEvent_StencilBufferValue;
	class APawn*                                  CallFunc_GetInstigator_ReturnValue_3;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn_3;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	bool                                          CallFunc_IsValid_ReturnValue_5;
	uint8                                         Pad_FA[0x6];
	class APlayerController*                      CallFunc_GetLocalViewingPlayerController_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_6;
	bool                                          Temp_bool_Has_Been_Initd_Variable;
	uint8                                         Pad_10A[0x6];
	class UFortAlterationItemDefinition*          K2Node_Event_NewAlteration;
	struct FFortCosmeticModification              K2Node_Event_CosmeticMod;
	TSoftObjectPtr<class UFXSystemAsset>          CallFunc_SelectAltSystemAsset_ReturnValue;
	bool                                          CallFunc_IsAssetNull_ReturnValue;
	bool                                          CallFunc_IsAssetNull_ReturnValue_1;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_7E3[0x5];
	TSoftObjectPtr<class UFXSystemAsset>          CallFunc_SelectAltSystemAsset_ReturnValue_1;
	bool                                          CallFunc_IsAssetNull_ReturnValue_2;
	bool                                          CallFunc_IsAssetNull_ReturnValue_3;
	uint8                                         Pad_812[0x6];
	class UStaticMeshComponent*                   CallFunc_getScopeComp_scopeComponent;
	bool                                          CallFunc_UseScopeTargeting_ReturnValue;
	bool                                          CallFunc_SetHiddenInGameOtherLocalControllersOnly_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_7;
	uint8                                         Pad_823[0x5];
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;
	int32                                         Temp_int_Variable;
	uint8                                         Pad_84C[0x4];
	class UStaticMeshComponent*                   CallFunc_getScopeComp_scopeComponent_1;
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	uint8                                         Pad_85C[0x4];
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue_1;
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue_2;
	struct FVector                                CallFunc_InverseTransformLocation_ReturnValue;
	struct FVector                                CallFunc_InverseTransformLocation_ReturnValue_1;
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue;
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_8;
	bool                                          K2Node_CustomEvent_Enable_1;
	uint8                                         Pad_942[0x2];
	int32                                         K2Node_CustomEvent_TargetLimit_1;
	int32                                         CallFunc_SelectInt_ReturnValue;
	uint8                                         Pad_94C[0x4];
	class UObject*                                K2Node_CustomEvent_Loaded_3;
	class UStaticMeshComponent*                   CallFunc_getScopeComp_scopeComponent_2;
	bool                                          K2Node_CustomEvent_Enable;
	uint8                                         Pad_961[0x3];
	int32                                         K2Node_CustomEvent_TargetLimit;
	int32                                         CallFunc_SelectInt_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_9;
	bool                                          CallFunc_IsUsingFirstPersonCamera_ReturnValue;
	uint8                                         Pad_96E[0x2];
	class AController*                            CallFunc_GetInstigatorController_ReturnValue;
	class AFortPlayerControllerZone*              K2Node_DynamicCast_AsFort_Player_Controller_Zone;
	bool                                          K2Node_DynamicCast_bSuccess_4;
	uint8                                         Pad_981[0x7];
	class AFortWindManager*                       CallFunc_GetWindManager_ReturnValue;
	class APawn*                                  CallFunc_GetInstigator_ReturnValue_4;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn_4;
	bool                                          K2Node_DynamicCast_bSuccess_5;
	bool                                          CallFunc_IsValid_ReturnValue_10;
	uint8                                         Pad_9A2[0x6];
	class APlayerController*                      CallFunc_GetLocalViewingPlayerController_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue_11;
	bool                                          CallFunc_UseScopeTargeting_ReturnValue_1;
	uint8                                         Pad_9B2[0x6];
	class UObject*                                Temp_object_Variable;
	bool                                          CallFunc_UseScopeTargeting_ReturnValue_2;
	bool                                          K2Node_Event_bVisible;
	bool                                          K2Node_Event_bSetForLocalControllerOnly;
	uint8                                         Pad_9C3[0x1];
	int32                                         CallFunc_GetRenderingDetailMode_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_12;
	bool                                          CallFunc_SetHiddenInGameControllerOnly_ReturnValue_1;
	uint8                                         Pad_9CC[0x4];
	class UObject*                                K2Node_CustomEvent_Loaded_4;
	int32                                         K2Node_CustomEvent_Which_Call;
	uint8                                         Pad_9DC[0x4];
	class APawn*                                  CallFunc_GetInstigator_ReturnValue_5;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn_5;
	bool                                          K2Node_DynamicCast_bSuccess_6;
	bool                                          CallFunc_IsValid_ReturnValue_13;
	uint8                                         Pad_9F2[0x6];
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	float                                         K2Node_CustomEvent_NewRateOfFire;
	float                                         CallFunc_GetWeaponRateOfFireModifier_ReturnValue;
	float                                         CallFunc_GetFloatValue_ReturnValue;
	bool                                          CallFunc_IsInAthena_ReturnValue;
	bool                                          CallFunc_HasAuthority_ReturnValue;
	uint8                                         Pad_A16[0x2];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	uint8                                         Pad_A24[0x4];
	class UFortGameUserSettings*                  CallFunc_GetFortGameUserSettings_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	uint8                                         Pad_A34[0x4];
	class UObject*                                Temp_object_Variable_1;
	class UParticleSystem*                        K2Node_DynamicCast_AsParticle_System;
	bool                                          K2Node_DynamicCast_bSuccess_7;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_2;
	uint8                                         Pad_A4A[0x6];
	struct FHitResult                             K2Node_Event_HitResult;
	EPhysicalSurface                              K2Node_Event_ImpactPhysicalSurface;
	uint8                                         Pad_B31[0x7];
	class UFXSystemComponent*                     K2Node_Event_SpawnedPSC;
	TDelegate<void(float NewRateOfFire)>          K2Node_CreateDelegate_OutputDelegate_3;
	bool                                          CallFunc_GetIsTargeting_ReturnValue;
	bool                                          CallFunc_GetIsTargeting_ReturnValue_1;
	bool                                          CallFunc_GetIsTargeting_ReturnValue_2;
	uint8                                         Pad_B4F[0x1];
	struct FSlateBrush                            CallFunc_GetWeaponDataSmallPreviewImageBrush_ReturnValue;
	EFortWeaponTriggerType                        CallFunc_GetWeaponDataTriggerType_ReturnValue;
	uint8                                         Pad_C11[0x7];
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;
	bool                                          K2Node_DynamicCast_bSuccess_8;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	bool                                          CallFunc_ShouldPlayPersistentFireFX_ReturnValue;
	uint8                                         Pad_C23[0x5];
	class AFortAIPawn*                            CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_14;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_C37[0x1];
	class APawn*                                  CallFunc_GetInstigator_ReturnValue_6;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess_9;
	bool                                          CallFunc_IsValid_ReturnValue_15;
	bool                                          CallFunc_IsInVehicle_ReturnValue;
	uint8                                         Pad_C4B[0x1];
	int32                                         Temp_int_Array_Index_Variable_1;
	bool                                          CallFunc_ShouldPlayShellFX_ReturnValue;
	uint8                                         Pad_C51[0x7];
	class UFortWeaponFireModeData*                K2Node_Event_FireModeData;
	bool                                          CallFunc_IsValid_ReturnValue_16;
	bool                                          CallFunc_IsValid_ReturnValue_17;
	uint8                                         Pad_C62[0x6];
	class UParticleSystemComponent*               CallFunc_Array_Get_Item_1;
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_3;
	bool                                          CallFunc_IsValid_ReturnValue_18;
	bool                                          CallFunc_IsValid_ReturnValue_19;
	bool                                          CallFunc_GetValueAsBool_ReturnValue;
	TSoftObjectPtr<class UNiagaraSystem>          CallFunc_GetCorrectMuzzleNiagaraSystem_OutNiagaraSystem;
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	bool                                          CallFunc_IsAssetNull_ReturnValue_4;
	uint8                                         Pad_CA9[0x7];
	class UNiagaraSystem*                         K2Node_DynamicCast_AsNiagara_System;
	bool                                          K2Node_DynamicCast_bSuccess_10;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_20;
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	uint8                                         Pad_CBD[0x3];
	int32                                         Temp_int_Loop_Counter_Variable_1;
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;
	uint8                                         Pad_CC5[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;
	uint8                                         Pad_CCC[0x4];
	class UObject*                                K2Node_CustomEvent_Loaded_2;
	class APawn*                                  CallFunc_GetInstigator_ReturnValue_7;
	TDelegate<void(float ReloadTime, EFortWeaponReloadType ReloadType)> K2Node_CreateDelegate_OutputDelegate_4;
	uint8                                         Pad_CEC[0x4];
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_1;
	bool                                          K2Node_DynamicCast_bSuccess_11;
	bool                                          CallFunc_IsInVehicle_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_21;
	uint8                                         Pad_CFB[0x5];
	TArray<class UFXSystemComponent*>             CallFunc_GetActiveMuzzleComponents_NewParam;
	bool                                          CallFunc_IsValid_ReturnValue_22;
	uint8                                         Pad_D11[0x7];
	class UFXSystemComponent*                     CallFunc_Array_Get_Item_2;
	int32                                         CallFunc_Array_Length_ReturnValue_2;
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;
	uint8                                         Pad_D25[0x3];
	class UParticleSystemComponent*               CallFunc_GetBeamPSC_ReturnValue;
	bool                                          CallFunc_GetUseBeamParticles_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_2;
	uint8                                         Pad_D32[0x6];
	class APawn*                                  CallFunc_GetInstigator_ReturnValue_8;
	class APlayerPawn_Generic_Parent_C*           K2Node_DynamicCast_AsPlayer_Pawn_Generic_Parent;
	bool                                          K2Node_DynamicCast_bSuccess_12;
	uint8                                         Pad_D49[0x3];
	float                                         CallFunc_GetNumericCVar_OutValue;
	bool                                          CallFunc_GetNumericCVar_ReturnValue;
	uint8                                         Pad_D51[0x7];
	double                                        CallFunc_FMax_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_5;
	float                                         CallFunc_GetNumericCVar_OutValue_1;
	bool                                          CallFunc_GetNumericCVar_ReturnValue_1;
	uint8                                         Pad_D79[0x7];
	double                                        CallFunc_FMax_ReturnValue_1;
	float                                         CallFunc_GetNumericCVar_OutValue_2;
	bool                                          CallFunc_GetNumericCVar_ReturnValue_2;
	uint8                                         Pad_D8D[0x3];
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;
	double                                        CallFunc_FMax_ReturnValue_2;
	float                                         CallFunc_GetNumericCVar_OutValue_3;
	bool                                          CallFunc_GetNumericCVar_ReturnValue_3;
	uint8                                         Pad_DA5[0x3];
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_2;
	double                                        CallFunc_FMax_ReturnValue_3;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_3;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	class UObject*                                Temp_object_Variable_2;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	class UParticleSystem*                        K2Node_DynamicCast_AsParticle_System_1;
	bool                                          K2Node_DynamicCast_bSuccess_13;
	uint8                                         Pad_DE1[0x7];
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	class UObject*                                K2Node_CustomEvent_Loaded;
	class UObject*                                Temp_object_Variable_3;
	class UNiagaraSystem*                         K2Node_DynamicCast_AsNiagara_System_1;
	bool                                          K2Node_DynamicCast_bSuccess_14;
	uint8                                         Pad_E11[0x3];
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_6;
	class UParticleSystem*                        K2Node_DynamicCast_AsParticle_System_2;
	bool                                          K2Node_DynamicCast_bSuccess_15;
	uint8                                         Pad_E29[0x7];
	class UObject*                                K2Node_CustomEvent_Loaded_1;
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_7;
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_8;
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_9;
	uint8                                         Pad_E5C[0x4];
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue;
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue_1;
	struct FVector                                CallFunc_BreakTransform_Location;
	struct FRotator                               CallFunc_BreakTransform_Rotation;
	struct FVector                                CallFunc_BreakTransform_Scale;
	struct FVector                                CallFunc_BreakTransform_Location_1;
	struct FRotator                               CallFunc_BreakTransform_Rotation_1;
	struct FVector                                CallFunc_BreakTransform_Scale_1;
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	double                                        CallFunc_BreakVector_X_1;
	double                                        CallFunc_BreakVector_Y_1;
	double                                        CallFunc_BreakVector_Z_1;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue_3;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_4;
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue_4;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_5;
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue_1;
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;
	double                                        CallFunc_VSize_ReturnValue;
	bool                                          CallFunc_DoesSocketExist_ReturnValue;
	uint8                                         Pad_1149[0x7];
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_6;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_5;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_6;
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_7;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_8;
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;
	struct FVector                                CallFunc_MakeVector_ReturnValue_2;
	bool                                          CallFunc_DoesSocketExist_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue_3;
	uint8                                         Pad_11C2[0x6];
	class APawn*                                  CallFunc_GetInstigator_ReturnValue_9;
	class UObject*                                Temp_object_Variable_4;
	class UNiagaraSystem*                         K2Node_DynamicCast_AsNiagara_System_2;
	bool                                          K2Node_DynamicCast_bSuccess_16;
	uint8                                         Pad_11E1[0x7];
	class UParticleSystem*                        K2Node_DynamicCast_AsParticle_System_3;
	bool                                          K2Node_DynamicCast_bSuccess_17;
	uint8                                         Pad_11F1[0x7];
	class UNiagaraSystem*                         CallFunc_SetBeamNiagaraSystem_ReturnValue;
	class UParticleSystem*                        CallFunc_SetBeamParticleSystem_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_23;
	uint8                                         Pad_1209[0x3];
	float                                         CallFunc_RetriggerableDelay_Duration_ImplicitCast;
	double                                        CallFunc_SetPostProcessParams_InputPin_ImplicitCast;
	double                                        CallFunc_FMax_A_ImplicitCast;
	double                                        CallFunc_FMax_A_ImplicitCast_1;
	double                                        CallFunc_FMax_A_ImplicitCast_2;
	double                                        CallFunc_FMax_A_ImplicitCast_3;
	float                                         CallFunc_SetCullDistance_NewCullDistance_ImplicitCast;
	float                                         CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_1;
	float                                         CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_2;
	float                                         CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_3;
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast;
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast_1;
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast_2;
};
static_assert(alignof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic) == 0x000010, "Wrong alignment on B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic");
static_assert(sizeof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic) == 0x001260, "Wrong size on B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, EntryPoint) == 0x000000, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetPI_ReturnValue) == 0x000008, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetPI_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue) == 0x000020, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000028, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000030, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_IsDedicatedServer_ReturnValue) == 0x000038, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_CreateDelegate_OutputDelegate_1) == 0x00003C, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000048, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x000050, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetInstigator_ReturnValue) == 0x000058, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetInstigator_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_DynamicCast_AsFort_Pawn) == 0x000060, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_IsValid_ReturnValue) == 0x000069, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_IsValid_ReturnValue_1) == 0x00006A, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_Event_bPersistentFire) == 0x00006B, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_Event_bPersistentFire' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_Event_bSecondaryFire) == 0x00006C, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_Event_bSecondaryFire' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, Temp_int_Loop_Counter_Variable) == 0x000070, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_Event_ReloadStage) == 0x000074, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_Event_ReloadStage' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_Add_IntInt_ReturnValue) == 0x000078, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetInstigator_ReturnValue_1) == 0x000080, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetInstigator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x000088, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_DynamicCast_AsFort_Pawn_1) == 0x000090, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_DynamicCast_AsFort_Pawn_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_DynamicCast_bSuccess_1) == 0x000098, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_MathExpression_ReturnValue) == 0x0000A0, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_MathExpression_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetLocalViewingPlayerController_ReturnValue) == 0x0000A8, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetLocalViewingPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_IsValid_ReturnValue_2) == 0x0000B0, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_MathExpression_ReturnValue_1) == 0x0000B1, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_MathExpression_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_IsValid_ReturnValue_3) == 0x0000B2, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, Temp_bool_IsClosed_Variable) == 0x0000B3, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_Event_bNewIsTargeting) == 0x0000B4, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_Event_bNewIsTargeting' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_SetHiddenInGameControllerOnly_ReturnValue) == 0x0000B5, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_SetHiddenInGameControllerOnly_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetInstigator_ReturnValue_2) == 0x0000B8, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetInstigator_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_DynamicCast_AsFort_Pawn_2) == 0x0000C0, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_DynamicCast_AsFort_Pawn_2' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_DynamicCast_bSuccess_2) == 0x0000C8, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_IsValid_ReturnValue_4) == 0x0000C9, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetAllActorsOfClass_OutActors) == 0x0000D0, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_CustomEvent_Enable_Or_Disable) == 0x0000E0, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_CustomEvent_Enable_Or_Disable' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_CustomEvent_StencilBufferValue) == 0x0000E4, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_CustomEvent_StencilBufferValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetInstigator_ReturnValue_3) == 0x0000E8, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetInstigator_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_DynamicCast_AsFort_Pawn_3) == 0x0000F0, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_DynamicCast_AsFort_Pawn_3' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_DynamicCast_bSuccess_3) == 0x0000F8, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_IsValid_ReturnValue_5) == 0x0000F9, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetLocalViewingPlayerController_ReturnValue_1) == 0x000100, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetLocalViewingPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_IsValid_ReturnValue_6) == 0x000108, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, Temp_bool_Has_Been_Initd_Variable) == 0x000109, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_Event_NewAlteration) == 0x000110, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_Event_NewAlteration' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_Event_CosmeticMod) == 0x000118, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_Event_CosmeticMod' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_SelectAltSystemAsset_ReturnValue) == 0x0007B8, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_SelectAltSystemAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_IsAssetNull_ReturnValue) == 0x0007E0, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_IsAssetNull_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_IsAssetNull_ReturnValue_1) == 0x0007E1, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_IsAssetNull_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_Not_PreBool_ReturnValue) == 0x0007E2, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_SelectAltSystemAsset_ReturnValue_1) == 0x0007E8, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_SelectAltSystemAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_IsAssetNull_ReturnValue_2) == 0x000810, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_IsAssetNull_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_IsAssetNull_ReturnValue_3) == 0x000811, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_IsAssetNull_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_getScopeComp_scopeComponent) == 0x000818, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_getScopeComp_scopeComponent' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_UseScopeTargeting_ReturnValue) == 0x000820, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_UseScopeTargeting_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_SetHiddenInGameOtherLocalControllersOnly_ReturnValue) == 0x000821, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_SetHiddenInGameOtherLocalControllersOnly_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_IsValid_ReturnValue_7) == 0x000822, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetSocketLocation_ReturnValue) == 0x000828, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000840, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, Temp_int_Variable) == 0x000848, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_getScopeComp_scopeComponent_1) == 0x000850, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_getScopeComp_scopeComponent_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_Add_IntInt_ReturnValue_1) == 0x000858, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000860, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetSocketLocation_ReturnValue_1) == 0x0008C0, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetSocketLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetSocketLocation_ReturnValue_2) == 0x0008D8, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetSocketLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_InverseTransformLocation_ReturnValue) == 0x0008F0, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_InverseTransformLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_InverseTransformLocation_ReturnValue_1) == 0x000908, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_InverseTransformLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_Conv_VectorToLinearColor_ReturnValue) == 0x000920, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_Conv_VectorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_Conv_VectorToLinearColor_ReturnValue_1) == 0x000930, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_Conv_VectorToLinearColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_IsValid_ReturnValue_8) == 0x000940, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_CustomEvent_Enable_1) == 0x000941, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_CustomEvent_Enable_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_CustomEvent_TargetLimit_1) == 0x000944, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_CustomEvent_TargetLimit_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_SelectInt_ReturnValue) == 0x000948, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_CustomEvent_Loaded_3) == 0x000950, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_CustomEvent_Loaded_3' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_getScopeComp_scopeComponent_2) == 0x000958, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_getScopeComp_scopeComponent_2' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_CustomEvent_Enable) == 0x000960, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_CustomEvent_Enable' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_CustomEvent_TargetLimit) == 0x000964, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_CustomEvent_TargetLimit' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_SelectInt_ReturnValue_1) == 0x000968, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_SelectInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_IsValid_ReturnValue_9) == 0x00096C, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_IsUsingFirstPersonCamera_ReturnValue) == 0x00096D, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_IsUsingFirstPersonCamera_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetInstigatorController_ReturnValue) == 0x000970, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetInstigatorController_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_DynamicCast_AsFort_Player_Controller_Zone) == 0x000978, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_DynamicCast_AsFort_Player_Controller_Zone' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_DynamicCast_bSuccess_4) == 0x000980, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetWindManager_ReturnValue) == 0x000988, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetWindManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetInstigator_ReturnValue_4) == 0x000990, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetInstigator_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_DynamicCast_AsFort_Pawn_4) == 0x000998, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_DynamicCast_AsFort_Pawn_4' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_DynamicCast_bSuccess_5) == 0x0009A0, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_IsValid_ReturnValue_10) == 0x0009A1, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetLocalViewingPlayerController_ReturnValue_2) == 0x0009A8, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetLocalViewingPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_IsValid_ReturnValue_11) == 0x0009B0, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_UseScopeTargeting_ReturnValue_1) == 0x0009B1, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_UseScopeTargeting_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, Temp_object_Variable) == 0x0009B8, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_UseScopeTargeting_ReturnValue_2) == 0x0009C0, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_UseScopeTargeting_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_Event_bVisible) == 0x0009C1, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_Event_bVisible' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_Event_bSetForLocalControllerOnly) == 0x0009C2, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_Event_bSetForLocalControllerOnly' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetRenderingDetailMode_ReturnValue) == 0x0009C4, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetRenderingDetailMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_Greater_IntInt_ReturnValue) == 0x0009C8, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_BooleanAND_ReturnValue) == 0x0009C9, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_IsValid_ReturnValue_12) == 0x0009CA, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_IsValid_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_SetHiddenInGameControllerOnly_ReturnValue_1) == 0x0009CB, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_SetHiddenInGameControllerOnly_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_CustomEvent_Loaded_4) == 0x0009D0, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_CustomEvent_Loaded_4' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_CustomEvent_Which_Call) == 0x0009D8, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_CustomEvent_Which_Call' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetInstigator_ReturnValue_5) == 0x0009E0, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetInstigator_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_DynamicCast_AsFort_Pawn_5) == 0x0009E8, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_DynamicCast_AsFort_Pawn_5' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_DynamicCast_bSuccess_6) == 0x0009F0, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_IsValid_ReturnValue_13) == 0x0009F1, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_IsValid_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x0009F8, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000A00, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_CustomEvent_NewRateOfFire) == 0x000A08, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_CustomEvent_NewRateOfFire' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetWeaponRateOfFireModifier_ReturnValue) == 0x000A0C, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetWeaponRateOfFireModifier_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetFloatValue_ReturnValue) == 0x000A10, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_IsInAthena_ReturnValue) == 0x000A14, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_IsInAthena_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_HasAuthority_ReturnValue) == 0x000A15, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_CreateDelegate_OutputDelegate_2) == 0x000A18, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetFortGameUserSettings_ReturnValue) == 0x000A28, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetFortGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, Temp_int_Array_Index_Variable) == 0x000A30, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, Temp_object_Variable_1) == 0x000A38, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_DynamicCast_AsParticle_System) == 0x000A40, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_DynamicCast_AsParticle_System' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_DynamicCast_bSuccess_7) == 0x000A48, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_IsDedicatedServer_ReturnValue_2) == 0x000A49, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_IsDedicatedServer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_Event_HitResult) == 0x000A50, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_Event_HitResult' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_Event_ImpactPhysicalSurface) == 0x000B30, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_Event_ImpactPhysicalSurface' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_Event_SpawnedPSC) == 0x000B38, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_Event_SpawnedPSC' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_CreateDelegate_OutputDelegate_3) == 0x000B40, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetIsTargeting_ReturnValue) == 0x000B4C, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetIsTargeting_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetIsTargeting_ReturnValue_1) == 0x000B4D, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetIsTargeting_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetIsTargeting_ReturnValue_2) == 0x000B4E, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetIsTargeting_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetWeaponDataSmallPreviewImageBrush_ReturnValue) == 0x000B50, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetWeaponDataSmallPreviewImageBrush_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetWeaponDataTriggerType_ReturnValue) == 0x000C10, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetWeaponDataTriggerType_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_DynamicCast_AsTexture_2D) == 0x000C18, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_DynamicCast_bSuccess_8) == 0x000C20, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_DynamicCast_bSuccess_8' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_SwitchEnum_CmpSuccess) == 0x000C21, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_ShouldPlayPersistentFireFX_ReturnValue) == 0x000C22, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_ShouldPlayPersistentFireFX_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_Array_Get_Item) == 0x000C28, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_Array_Length_ReturnValue) == 0x000C30, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_Less_IntInt_ReturnValue) == 0x000C34, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_IsValid_ReturnValue_14) == 0x000C35, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_IsValid_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000C36, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetInstigator_ReturnValue_6) == 0x000C38, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetInstigator_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000C40, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_DynamicCast_bSuccess_9) == 0x000C48, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_DynamicCast_bSuccess_9' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_IsValid_ReturnValue_15) == 0x000C49, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_IsValid_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_IsInVehicle_ReturnValue) == 0x000C4A, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_IsInVehicle_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, Temp_int_Array_Index_Variable_1) == 0x000C4C, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_ShouldPlayShellFX_ReturnValue) == 0x000C50, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_ShouldPlayShellFX_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_Event_FireModeData) == 0x000C58, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_Event_FireModeData' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_IsValid_ReturnValue_16) == 0x000C60, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_IsValid_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_IsValid_ReturnValue_17) == 0x000C61, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_IsValid_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_Array_Get_Item_1) == 0x000C68, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_Array_Length_ReturnValue_1) == 0x000C70, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_IsDedicatedServer_ReturnValue_3) == 0x000C74, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_IsDedicatedServer_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_IsValid_ReturnValue_18) == 0x000C75, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_IsValid_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_IsValid_ReturnValue_19) == 0x000C76, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_IsValid_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetValueAsBool_ReturnValue) == 0x000C77, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetValueAsBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetCorrectMuzzleNiagaraSystem_OutNiagaraSystem) == 0x000C78, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetCorrectMuzzleNiagaraSystem_OutNiagaraSystem' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000CA0, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_IsAssetNull_ReturnValue_4) == 0x000CA8, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_IsAssetNull_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_DynamicCast_AsNiagara_System) == 0x000CB0, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_DynamicCast_AsNiagara_System' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_DynamicCast_bSuccess_10) == 0x000CB8, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_DynamicCast_bSuccess_10' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_Not_PreBool_ReturnValue_1) == 0x000CB9, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_IsValid_ReturnValue_20) == 0x000CBA, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_IsValid_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_Not_PreBool_ReturnValue_2) == 0x000CBB, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_BooleanAND_ReturnValue_1) == 0x000CBC, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, Temp_int_Loop_Counter_Variable_1) == 0x000CC0, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_Less_IntInt_ReturnValue_1) == 0x000CC4, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_Add_IntInt_ReturnValue_2) == 0x000CC8, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_CustomEvent_Loaded_2) == 0x000CD0, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_CustomEvent_Loaded_2' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetInstigator_ReturnValue_7) == 0x000CD8, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetInstigator_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_CreateDelegate_OutputDelegate_4) == 0x000CE0, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_DynamicCast_AsFort_Player_Pawn_1) == 0x000CF0, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_DynamicCast_AsFort_Player_Pawn_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_DynamicCast_bSuccess_11) == 0x000CF8, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_DynamicCast_bSuccess_11' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_IsInVehicle_ReturnValue_1) == 0x000CF9, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_IsInVehicle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_IsValid_ReturnValue_21) == 0x000CFA, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_IsValid_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetActiveMuzzleComponents_NewParam) == 0x000D00, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetActiveMuzzleComponents_NewParam' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_IsValid_ReturnValue_22) == 0x000D10, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_IsValid_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_Array_Get_Item_2) == 0x000D18, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_Array_Length_ReturnValue_2) == 0x000D20, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_Less_IntInt_ReturnValue_2) == 0x000D24, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetBeamPSC_ReturnValue) == 0x000D28, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetBeamPSC_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetUseBeamParticles_ReturnValue) == 0x000D30, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetUseBeamParticles_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_BooleanAND_ReturnValue_2) == 0x000D31, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetInstigator_ReturnValue_8) == 0x000D38, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetInstigator_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_DynamicCast_AsPlayer_Pawn_Generic_Parent) == 0x000D40, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_DynamicCast_AsPlayer_Pawn_Generic_Parent' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_DynamicCast_bSuccess_12) == 0x000D48, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_DynamicCast_bSuccess_12' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetNumericCVar_OutValue) == 0x000D4C, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetNumericCVar_OutValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetNumericCVar_ReturnValue) == 0x000D50, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetNumericCVar_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_FMax_ReturnValue) == 0x000D58, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000D60, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_CreateDelegate_OutputDelegate_5) == 0x000D68, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetNumericCVar_OutValue_1) == 0x000D74, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetNumericCVar_OutValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetNumericCVar_ReturnValue_1) == 0x000D78, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetNumericCVar_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_FMax_ReturnValue_1) == 0x000D80, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_FMax_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetNumericCVar_OutValue_2) == 0x000D88, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetNumericCVar_OutValue_2' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetNumericCVar_ReturnValue_2) == 0x000D8C, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetNumericCVar_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000D90, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_FMax_ReturnValue_2) == 0x000D98, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_FMax_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetNumericCVar_OutValue_3) == 0x000DA0, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetNumericCVar_OutValue_3' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetNumericCVar_ReturnValue_3) == 0x000DA4, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetNumericCVar_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_Divide_DoubleDouble_ReturnValue_2) == 0x000DA8, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_Divide_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_FMax_ReturnValue_3) == 0x000DB0, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_FMax_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_Divide_DoubleDouble_ReturnValue_3) == 0x000DB8, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_Divide_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000DC0, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, Temp_object_Variable_2) == 0x000DC8, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x000DD0, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_DynamicCast_AsParticle_System_1) == 0x000DD8, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_DynamicCast_AsParticle_System_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_DynamicCast_bSuccess_13) == 0x000DE0, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_DynamicCast_bSuccess_13' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_Multiply_DoubleDouble_ReturnValue_3) == 0x000DE8, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_Multiply_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_Multiply_DoubleDouble_ReturnValue_4) == 0x000DF0, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_Multiply_DoubleDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_CustomEvent_Loaded) == 0x000DF8, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, Temp_object_Variable_3) == 0x000E00, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_DynamicCast_AsNiagara_System_1) == 0x000E08, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_DynamicCast_AsNiagara_System_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_DynamicCast_bSuccess_14) == 0x000E10, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_DynamicCast_bSuccess_14' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_CreateDelegate_OutputDelegate_6) == 0x000E14, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_DynamicCast_AsParticle_System_2) == 0x000E20, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_DynamicCast_AsParticle_System_2' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_DynamicCast_bSuccess_15) == 0x000E28, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_DynamicCast_bSuccess_15' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_CustomEvent_Loaded_1) == 0x000E30, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_CustomEvent_Loaded_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_CreateDelegate_OutputDelegate_7) == 0x000E38, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_CreateDelegate_OutputDelegate_8) == 0x000E44, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_CreateDelegate_OutputDelegate_9) == 0x000E50, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetSocketTransform_ReturnValue) == 0x000E60, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetSocketTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetSocketTransform_ReturnValue_1) == 0x000EC0, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetSocketTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_BreakTransform_Location) == 0x000F20, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_BreakTransform_Rotation) == 0x000F38, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_BreakTransform_Scale) == 0x000F50, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_BreakTransform_Location_1) == 0x000F68, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_BreakTransform_Location_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_BreakTransform_Rotation_1) == 0x000F80, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_BreakTransform_Rotation_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_BreakTransform_Scale_1) == 0x000F98, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_BreakTransform_Scale_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_BreakVector_X) == 0x000FB0, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_BreakVector_Y) == 0x000FB8, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_BreakVector_Z) == 0x000FC0, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_BreakVector_X_1) == 0x000FC8, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_BreakVector_Y_1) == 0x000FD0, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_BreakVector_Z_1) == 0x000FD8, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000FE0, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetSocketLocation_ReturnValue_3) == 0x000FE8, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetSocketLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_Divide_DoubleDouble_ReturnValue_4) == 0x001000, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_Divide_DoubleDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetSocketLocation_ReturnValue_4) == 0x001008, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetSocketLocation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_Multiply_DoubleDouble_ReturnValue_5) == 0x001020, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_Multiply_DoubleDouble_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_Subtract_VectorVector_ReturnValue) == 0x001028, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_SpawnEmitterAttached_ReturnValue_1) == 0x001040, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_SpawnEmitterAttached_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x001048, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x001060, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_VSize_ReturnValue) == 0x001140, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_DoesSocketExist_ReturnValue) == 0x001148, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_DoesSocketExist_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_Multiply_DoubleDouble_ReturnValue_6) == 0x001150, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_Multiply_DoubleDouble_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_Divide_DoubleDouble_ReturnValue_5) == 0x001158, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_Divide_DoubleDouble_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_Divide_DoubleDouble_ReturnValue_6) == 0x001160, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_Divide_DoubleDouble_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_MakeVector_ReturnValue) == 0x001168, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_Divide_DoubleDouble_ReturnValue_7) == 0x001180, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_Divide_DoubleDouble_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_Divide_DoubleDouble_ReturnValue_8) == 0x001188, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_Divide_DoubleDouble_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_MakeVector_ReturnValue_1) == 0x001190, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_MakeVector_ReturnValue_2) == 0x0011A8, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_MakeVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_DoesSocketExist_ReturnValue_1) == 0x0011C0, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_DoesSocketExist_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_BooleanAND_ReturnValue_3) == 0x0011C1, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_GetInstigator_ReturnValue_9) == 0x0011C8, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_GetInstigator_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, Temp_object_Variable_4) == 0x0011D0, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_DynamicCast_AsNiagara_System_2) == 0x0011D8, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_DynamicCast_AsNiagara_System_2' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_DynamicCast_bSuccess_16) == 0x0011E0, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_DynamicCast_bSuccess_16' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_DynamicCast_AsParticle_System_3) == 0x0011E8, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_DynamicCast_AsParticle_System_3' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, K2Node_DynamicCast_bSuccess_17) == 0x0011F0, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::K2Node_DynamicCast_bSuccess_17' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_SetBeamNiagaraSystem_ReturnValue) == 0x0011F8, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_SetBeamNiagaraSystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_SetBeamParticleSystem_ReturnValue) == 0x001200, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_SetBeamParticleSystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_IsValid_ReturnValue_23) == 0x001208, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_IsValid_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_RetriggerableDelay_Duration_ImplicitCast) == 0x00120C, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_RetriggerableDelay_Duration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_SetPostProcessParams_InputPin_ImplicitCast) == 0x001210, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_SetPostProcessParams_InputPin_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_FMax_A_ImplicitCast) == 0x001218, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_FMax_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_FMax_A_ImplicitCast_1) == 0x001220, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_FMax_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_FMax_A_ImplicitCast_2) == 0x001228, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_FMax_A_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_FMax_A_ImplicitCast_3) == 0x001230, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_FMax_A_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_SetCullDistance_NewCullDistance_ImplicitCast) == 0x001238, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_SetCullDistance_NewCullDistance_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_1) == 0x00123C, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_2) == 0x001240, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_3) == 0x001244, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_SetFloatParameter_Param_ImplicitCast) == 0x001248, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_SetFloatParameter_Param_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_SetFloatParameter_Param_ImplicitCast_1) == 0x00124C, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_SetFloatParameter_Param_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic, CallFunc_SetFloatParameter_Param_ImplicitCast_2) == 0x001250, "Member 'B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic::CallFunc_SetFloatParameter_Param_ImplicitCast_2' has a wrong offset!");

struct B_Ranged_Generic_C_GetActiveMuzzleComponents final
{
public:
	TArray<class UFXSystemComponent*>             NewParam;
	TSoftObjectPtr<class UNiagaraSystem>          CallFunc_GetCorrectMuzzleNiagaraSystem_OutNiagaraSystem;
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	class UNiagaraSystem*                         K2Node_DynamicCast_AsNiagara_System;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_49[0x7];
	TArray<class UFXSystemComponent*>             K2Node_MakeArray_Array;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_61[0x7];
	TSoftObjectPtr<class UNiagaraSystem>          CallFunc_GetCorrectMuzzleNiagaraSystem_OutNiagaraSystem_1;
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_99[0x7];
	class UNiagaraSystem*                         K2Node_DynamicCast_AsNiagara_System_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_A9[0x3];
	class FName                                   CallFunc_GetMuzzleSocketName_ReturnValue;
	class UNiagaraComponent*                      CallFunc_SpawnSystemAttached_ReturnValue;
	TArray<class UFXSystemComponent*>             K2Node_MakeArray_Array_1;
	bool                                          CallFunc_IsValid_ReturnValue_2;
};
static_assert(alignof(B_Ranged_Generic_C_GetActiveMuzzleComponents) == 0x000008, "Wrong alignment on B_Ranged_Generic_C_GetActiveMuzzleComponents");
static_assert(sizeof(B_Ranged_Generic_C_GetActiveMuzzleComponents) == 0x0000D0, "Wrong size on B_Ranged_Generic_C_GetActiveMuzzleComponents");
static_assert(offsetof(B_Ranged_Generic_C_GetActiveMuzzleComponents, NewParam) == 0x000000, "Member 'B_Ranged_Generic_C_GetActiveMuzzleComponents::NewParam' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_GetActiveMuzzleComponents, CallFunc_GetCorrectMuzzleNiagaraSystem_OutNiagaraSystem) == 0x000010, "Member 'B_Ranged_Generic_C_GetActiveMuzzleComponents::CallFunc_GetCorrectMuzzleNiagaraSystem_OutNiagaraSystem' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_GetActiveMuzzleComponents, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000038, "Member 'B_Ranged_Generic_C_GetActiveMuzzleComponents::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_GetActiveMuzzleComponents, K2Node_DynamicCast_AsNiagara_System) == 0x000040, "Member 'B_Ranged_Generic_C_GetActiveMuzzleComponents::K2Node_DynamicCast_AsNiagara_System' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_GetActiveMuzzleComponents, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'B_Ranged_Generic_C_GetActiveMuzzleComponents::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_GetActiveMuzzleComponents, K2Node_MakeArray_Array) == 0x000050, "Member 'B_Ranged_Generic_C_GetActiveMuzzleComponents::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_GetActiveMuzzleComponents, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'B_Ranged_Generic_C_GetActiveMuzzleComponents::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_GetActiveMuzzleComponents, CallFunc_GetCorrectMuzzleNiagaraSystem_OutNiagaraSystem_1) == 0x000068, "Member 'B_Ranged_Generic_C_GetActiveMuzzleComponents::CallFunc_GetCorrectMuzzleNiagaraSystem_OutNiagaraSystem_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_GetActiveMuzzleComponents, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1) == 0x000090, "Member 'B_Ranged_Generic_C_GetActiveMuzzleComponents::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_GetActiveMuzzleComponents, CallFunc_IsValid_ReturnValue_1) == 0x000098, "Member 'B_Ranged_Generic_C_GetActiveMuzzleComponents::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_GetActiveMuzzleComponents, K2Node_DynamicCast_AsNiagara_System_1) == 0x0000A0, "Member 'B_Ranged_Generic_C_GetActiveMuzzleComponents::K2Node_DynamicCast_AsNiagara_System_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_GetActiveMuzzleComponents, K2Node_DynamicCast_bSuccess_1) == 0x0000A8, "Member 'B_Ranged_Generic_C_GetActiveMuzzleComponents::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_GetActiveMuzzleComponents, CallFunc_GetMuzzleSocketName_ReturnValue) == 0x0000AC, "Member 'B_Ranged_Generic_C_GetActiveMuzzleComponents::CallFunc_GetMuzzleSocketName_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_GetActiveMuzzleComponents, CallFunc_SpawnSystemAttached_ReturnValue) == 0x0000B0, "Member 'B_Ranged_Generic_C_GetActiveMuzzleComponents::CallFunc_SpawnSystemAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_GetActiveMuzzleComponents, K2Node_MakeArray_Array_1) == 0x0000B8, "Member 'B_Ranged_Generic_C_GetActiveMuzzleComponents::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_GetActiveMuzzleComponents, CallFunc_IsValid_ReturnValue_2) == 0x0000C8, "Member 'B_Ranged_Generic_C_GetActiveMuzzleComponents::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

struct B_Ranged_Generic_C_GetCorrectMuzzleNiagaraSystem final
{
public:
	TSoftObjectPtr<class UNiagaraSystem>          OutNiagaraSystem;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsQuartzGunfireEnabled_ReturnValue;
	uint8                                         Pad_2B[0x5];
	TSoftObjectPtr<class UNiagaraSystem>          K2Node_Select_Default;
};
static_assert(alignof(B_Ranged_Generic_C_GetCorrectMuzzleNiagaraSystem) == 0x000008, "Wrong alignment on B_Ranged_Generic_C_GetCorrectMuzzleNiagaraSystem");
static_assert(sizeof(B_Ranged_Generic_C_GetCorrectMuzzleNiagaraSystem) == 0x000058, "Wrong size on B_Ranged_Generic_C_GetCorrectMuzzleNiagaraSystem");
static_assert(offsetof(B_Ranged_Generic_C_GetCorrectMuzzleNiagaraSystem, OutNiagaraSystem) == 0x000000, "Member 'B_Ranged_Generic_C_GetCorrectMuzzleNiagaraSystem::OutNiagaraSystem' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_GetCorrectMuzzleNiagaraSystem, Temp_bool_Variable) == 0x000028, "Member 'B_Ranged_Generic_C_GetCorrectMuzzleNiagaraSystem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_GetCorrectMuzzleNiagaraSystem, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'B_Ranged_Generic_C_GetCorrectMuzzleNiagaraSystem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_GetCorrectMuzzleNiagaraSystem, CallFunc_IsQuartzGunfireEnabled_ReturnValue) == 0x00002A, "Member 'B_Ranged_Generic_C_GetCorrectMuzzleNiagaraSystem::CallFunc_IsQuartzGunfireEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_GetCorrectMuzzleNiagaraSystem, K2Node_Select_Default) == 0x000030, "Member 'B_Ranged_Generic_C_GetCorrectMuzzleNiagaraSystem::K2Node_Select_Default' has a wrong offset!");

struct B_Ranged_Generic_C_getScopeComp final
{
public:
	class UStaticMeshComponent*                   ScopeComponent;
};
static_assert(alignof(B_Ranged_Generic_C_getScopeComp) == 0x000008, "Wrong alignment on B_Ranged_Generic_C_getScopeComp");
static_assert(sizeof(B_Ranged_Generic_C_getScopeComp) == 0x000008, "Wrong size on B_Ranged_Generic_C_getScopeComp");
static_assert(offsetof(B_Ranged_Generic_C_getScopeComp, ScopeComponent) == 0x000000, "Member 'B_Ranged_Generic_C_getScopeComp::ScopeComponent' has a wrong offset!");

struct B_Ranged_Generic_C_GetScopeParameters final
{
public:
	class UStaticMeshComponent*                   ScopeComponent;
	struct FVector2D                              DepthOfFieldVignetteRange;
	struct FVector                                WeaponSightsOffset;
	class UStaticMeshComponent*                   CallFunc_getScopeComp_scopeComponent;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_39[0x7];
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;
	struct FVector                                CallFunc_MakeVector_ReturnValue;
};
static_assert(alignof(B_Ranged_Generic_C_GetScopeParameters) == 0x000008, "Wrong alignment on B_Ranged_Generic_C_GetScopeParameters");
static_assert(sizeof(B_Ranged_Generic_C_GetScopeParameters) == 0x000068, "Wrong size on B_Ranged_Generic_C_GetScopeParameters");
static_assert(offsetof(B_Ranged_Generic_C_GetScopeParameters, ScopeComponent) == 0x000000, "Member 'B_Ranged_Generic_C_GetScopeParameters::ScopeComponent' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_GetScopeParameters, DepthOfFieldVignetteRange) == 0x000008, "Member 'B_Ranged_Generic_C_GetScopeParameters::DepthOfFieldVignetteRange' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_GetScopeParameters, WeaponSightsOffset) == 0x000018, "Member 'B_Ranged_Generic_C_GetScopeParameters::WeaponSightsOffset' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_GetScopeParameters, CallFunc_getScopeComp_scopeComponent) == 0x000030, "Member 'B_Ranged_Generic_C_GetScopeParameters::CallFunc_getScopeComp_scopeComponent' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_GetScopeParameters, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'B_Ranged_Generic_C_GetScopeParameters::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_GetScopeParameters, CallFunc_MakeVector2D_ReturnValue) == 0x000040, "Member 'B_Ranged_Generic_C_GetScopeParameters::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_GetScopeParameters, CallFunc_MakeVector_ReturnValue) == 0x000050, "Member 'B_Ranged_Generic_C_GetScopeParameters::CallFunc_MakeVector_ReturnValue' has a wrong offset!");

struct B_Ranged_Generic_C_HideReticle final
{
public:
	class AController*                            CallFunc_GetInstigatorController_ReturnValue;
	class AFortPlayerControllerZone*              K2Node_DynamicCast_AsFort_Player_Controller_Zone;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(B_Ranged_Generic_C_HideReticle) == 0x000008, "Wrong alignment on B_Ranged_Generic_C_HideReticle");
static_assert(sizeof(B_Ranged_Generic_C_HideReticle) == 0x000018, "Wrong size on B_Ranged_Generic_C_HideReticle");
static_assert(offsetof(B_Ranged_Generic_C_HideReticle, CallFunc_GetInstigatorController_ReturnValue) == 0x000000, "Member 'B_Ranged_Generic_C_HideReticle::CallFunc_GetInstigatorController_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_HideReticle, K2Node_DynamicCast_AsFort_Player_Controller_Zone) == 0x000008, "Member 'B_Ranged_Generic_C_HideReticle::K2Node_DynamicCast_AsFort_Player_Controller_Zone' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_HideReticle, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'B_Ranged_Generic_C_HideReticle::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct B_Ranged_Generic_C_initScope final
{
public:
	int32                                         Temp_int_Array_Index_Variable;
	uint8                                         Pad_4[0x4];
	class UStaticMeshComponent*                   CallFunc_getScopeComp_scopeComponent;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	uint8                                         Pad_12[0xE];
	struct FTransform                             Temp_struct_Variable;
	class UStaticMeshComponent*                   CallFunc_getScopeComp_scopeComponent_1;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_89[0x7];
	class UStaticMeshComponent*                   CallFunc_AddComponent_ReturnValue;
	int32                                         Temp_int_Loop_Counter_Variable;
	uint8                                         Pad_9C[0x4];
	class UMaterialInterface*                     CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_AE[0x2];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	bool                                          CallFunc_UseScopeTargeting_ReturnValue;
	bool                                          CallFunc_SetStaticMesh_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_3;
};
static_assert(alignof(B_Ranged_Generic_C_initScope) == 0x000010, "Wrong alignment on B_Ranged_Generic_C_initScope");
static_assert(sizeof(B_Ranged_Generic_C_initScope) == 0x0000C0, "Wrong size on B_Ranged_Generic_C_initScope");
static_assert(offsetof(B_Ranged_Generic_C_initScope, Temp_int_Array_Index_Variable) == 0x000000, "Member 'B_Ranged_Generic_C_initScope::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_initScope, CallFunc_getScopeComp_scopeComponent) == 0x000008, "Member 'B_Ranged_Generic_C_initScope::CallFunc_getScopeComp_scopeComponent' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_initScope, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'B_Ranged_Generic_C_initScope::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_initScope, CallFunc_IsDedicatedServer_ReturnValue) == 0x000011, "Member 'B_Ranged_Generic_C_initScope::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_initScope, Temp_struct_Variable) == 0x000020, "Member 'B_Ranged_Generic_C_initScope::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_initScope, CallFunc_getScopeComp_scopeComponent_1) == 0x000080, "Member 'B_Ranged_Generic_C_initScope::CallFunc_getScopeComp_scopeComponent_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_initScope, CallFunc_IsValid_ReturnValue_1) == 0x000088, "Member 'B_Ranged_Generic_C_initScope::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_initScope, CallFunc_AddComponent_ReturnValue) == 0x000090, "Member 'B_Ranged_Generic_C_initScope::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_initScope, Temp_int_Loop_Counter_Variable) == 0x000098, "Member 'B_Ranged_Generic_C_initScope::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_initScope, CallFunc_Array_Get_Item) == 0x0000A0, "Member 'B_Ranged_Generic_C_initScope::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_initScope, CallFunc_Array_Length_ReturnValue) == 0x0000A8, "Member 'B_Ranged_Generic_C_initScope::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_initScope, CallFunc_IsValid_ReturnValue_2) == 0x0000AC, "Member 'B_Ranged_Generic_C_initScope::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_initScope, CallFunc_Less_IntInt_ReturnValue) == 0x0000AD, "Member 'B_Ranged_Generic_C_initScope::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_initScope, CallFunc_Add_IntInt_ReturnValue) == 0x0000B0, "Member 'B_Ranged_Generic_C_initScope::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_initScope, CallFunc_UseScopeTargeting_ReturnValue) == 0x0000B4, "Member 'B_Ranged_Generic_C_initScope::CallFunc_UseScopeTargeting_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_initScope, CallFunc_SetStaticMesh_ReturnValue) == 0x0000B5, "Member 'B_Ranged_Generic_C_initScope::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_initScope, CallFunc_IsValid_ReturnValue_3) == 0x0000B6, "Member 'B_Ranged_Generic_C_initScope::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

struct B_Ranged_Generic_C_IsNewFeedbackEnabled final
{
public:
	bool                                          Enabled;
	uint8                                         Pad_1[0x3];
	float                                         CallFunc_GetValueAtLevel_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_9[0x7];
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(B_Ranged_Generic_C_IsNewFeedbackEnabled) == 0x000008, "Wrong alignment on B_Ranged_Generic_C_IsNewFeedbackEnabled");
static_assert(sizeof(B_Ranged_Generic_C_IsNewFeedbackEnabled) == 0x000018, "Wrong size on B_Ranged_Generic_C_IsNewFeedbackEnabled");
static_assert(offsetof(B_Ranged_Generic_C_IsNewFeedbackEnabled, Enabled) == 0x000000, "Member 'B_Ranged_Generic_C_IsNewFeedbackEnabled::Enabled' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_IsNewFeedbackEnabled, CallFunc_GetValueAtLevel_ReturnValue) == 0x000004, "Member 'B_Ranged_Generic_C_IsNewFeedbackEnabled::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_IsNewFeedbackEnabled, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000008, "Member 'B_Ranged_Generic_C_IsNewFeedbackEnabled::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_IsNewFeedbackEnabled, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000010, "Member 'B_Ranged_Generic_C_IsNewFeedbackEnabled::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct B_Ranged_Generic_C_LocalReloadStarted final
{
public:
	float                                         ReloadTime;
	EFortWeaponReloadType                         ReloadType;
};
static_assert(alignof(B_Ranged_Generic_C_LocalReloadStarted) == 0x000004, "Wrong alignment on B_Ranged_Generic_C_LocalReloadStarted");
static_assert(sizeof(B_Ranged_Generic_C_LocalReloadStarted) == 0x000008, "Wrong size on B_Ranged_Generic_C_LocalReloadStarted");
static_assert(offsetof(B_Ranged_Generic_C_LocalReloadStarted, ReloadTime) == 0x000000, "Member 'B_Ranged_Generic_C_LocalReloadStarted::ReloadTime' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_LocalReloadStarted, ReloadType) == 0x000004, "Member 'B_Ranged_Generic_C_LocalReloadStarted::ReloadType' has a wrong offset!");

struct B_Ranged_Generic_C_Muzzle_Flash_FX final
{
public:
	bool                                          Persistent_Fire;
	uint8                                         Pad_1[0x3];
	int32                                         Temp_int_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	uint8                                         Pad_C[0x4];
	TArray<class UFXSystemComponent*>             CallFunc_GetActiveMuzzleComponents_NewParam;
	bool                                          CallFunc_IsUsingScope_ReturnValue;
	uint8                                         Pad_21[0x7];
	class UFXSystemComponent*                     CallFunc_Array_Get_Item;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_31[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_GetValueAsBool_ReturnValue;
	uint8                                         Pad_3A[0x6];
	double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;
	TSoftObjectPtr<class UNiagaraSystem>          CallFunc_GetCorrectMuzzleNiagaraSystem_OutNiagaraSystem;
	float                                         CallFunc_ActivateMuzzleFlashFXNative_MuzzleFlashSmallMaxScale_ImplicitCast;
	float                                         CallFunc_ActivateMuzzleFlashFXNative_MuzzleFlashSmallMinScale_ImplicitCast;
	float                                         CallFunc_ActivateMuzzleFlashFXNative_MuzzleFlashLargeMaxScale_ImplicitCast;
	float                                         CallFunc_ActivateMuzzleFlashFXNative_MuzzleFlashLargeMinScale_ImplicitCast;
	float                                         CallFunc_ActivateMuzzleFlashFXNative_MuzzleChanceOfLargeFlash_ImplicitCast;
};
static_assert(alignof(B_Ranged_Generic_C_Muzzle_Flash_FX) == 0x000008, "Wrong alignment on B_Ranged_Generic_C_Muzzle_Flash_FX");
static_assert(sizeof(B_Ranged_Generic_C_Muzzle_Flash_FX) == 0x000088, "Wrong size on B_Ranged_Generic_C_Muzzle_Flash_FX");
static_assert(offsetof(B_Ranged_Generic_C_Muzzle_Flash_FX, Persistent_Fire) == 0x000000, "Member 'B_Ranged_Generic_C_Muzzle_Flash_FX::Persistent_Fire' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_Muzzle_Flash_FX, Temp_int_Variable) == 0x000004, "Member 'B_Ranged_Generic_C_Muzzle_Flash_FX::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_Muzzle_Flash_FX, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'B_Ranged_Generic_C_Muzzle_Flash_FX::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_Muzzle_Flash_FX, CallFunc_GetActiveMuzzleComponents_NewParam) == 0x000010, "Member 'B_Ranged_Generic_C_Muzzle_Flash_FX::CallFunc_GetActiveMuzzleComponents_NewParam' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_Muzzle_Flash_FX, CallFunc_IsUsingScope_ReturnValue) == 0x000020, "Member 'B_Ranged_Generic_C_Muzzle_Flash_FX::CallFunc_IsUsingScope_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_Muzzle_Flash_FX, CallFunc_Array_Get_Item) == 0x000028, "Member 'B_Ranged_Generic_C_Muzzle_Flash_FX::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_Muzzle_Flash_FX, CallFunc_Not_PreBool_ReturnValue) == 0x000030, "Member 'B_Ranged_Generic_C_Muzzle_Flash_FX::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_Muzzle_Flash_FX, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'B_Ranged_Generic_C_Muzzle_Flash_FX::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_Muzzle_Flash_FX, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'B_Ranged_Generic_C_Muzzle_Flash_FX::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_Muzzle_Flash_FX, CallFunc_GetValueAsBool_ReturnValue) == 0x000039, "Member 'B_Ranged_Generic_C_Muzzle_Flash_FX::CallFunc_GetValueAsBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_Muzzle_Flash_FX, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x000040, "Member 'B_Ranged_Generic_C_Muzzle_Flash_FX::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_Muzzle_Flash_FX, CallFunc_GetCorrectMuzzleNiagaraSystem_OutNiagaraSystem) == 0x000048, "Member 'B_Ranged_Generic_C_Muzzle_Flash_FX::CallFunc_GetCorrectMuzzleNiagaraSystem_OutNiagaraSystem' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_Muzzle_Flash_FX, CallFunc_ActivateMuzzleFlashFXNative_MuzzleFlashSmallMaxScale_ImplicitCast) == 0x000070, "Member 'B_Ranged_Generic_C_Muzzle_Flash_FX::CallFunc_ActivateMuzzleFlashFXNative_MuzzleFlashSmallMaxScale_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_Muzzle_Flash_FX, CallFunc_ActivateMuzzleFlashFXNative_MuzzleFlashSmallMinScale_ImplicitCast) == 0x000074, "Member 'B_Ranged_Generic_C_Muzzle_Flash_FX::CallFunc_ActivateMuzzleFlashFXNative_MuzzleFlashSmallMinScale_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_Muzzle_Flash_FX, CallFunc_ActivateMuzzleFlashFXNative_MuzzleFlashLargeMaxScale_ImplicitCast) == 0x000078, "Member 'B_Ranged_Generic_C_Muzzle_Flash_FX::CallFunc_ActivateMuzzleFlashFXNative_MuzzleFlashLargeMaxScale_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_Muzzle_Flash_FX, CallFunc_ActivateMuzzleFlashFXNative_MuzzleFlashLargeMinScale_ImplicitCast) == 0x00007C, "Member 'B_Ranged_Generic_C_Muzzle_Flash_FX::CallFunc_ActivateMuzzleFlashFXNative_MuzzleFlashLargeMinScale_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_Muzzle_Flash_FX, CallFunc_ActivateMuzzleFlashFXNative_MuzzleChanceOfLargeFlash_ImplicitCast) == 0x000080, "Member 'B_Ranged_Generic_C_Muzzle_Flash_FX::CallFunc_ActivateMuzzleFlashFXNative_MuzzleChanceOfLargeFlash_ImplicitCast' has a wrong offset!");

struct B_Ranged_Generic_C_Muzzle_Play_Reload_FX final
{
public:
	EFortReloadFXState                            Selection;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
};
static_assert(alignof(B_Ranged_Generic_C_Muzzle_Play_Reload_FX) == 0x000001, "Wrong alignment on B_Ranged_Generic_C_Muzzle_Play_Reload_FX");
static_assert(sizeof(B_Ranged_Generic_C_Muzzle_Play_Reload_FX) == 0x000002, "Wrong size on B_Ranged_Generic_C_Muzzle_Play_Reload_FX");
static_assert(offsetof(B_Ranged_Generic_C_Muzzle_Play_Reload_FX, Selection) == 0x000000, "Member 'B_Ranged_Generic_C_Muzzle_Play_Reload_FX::Selection' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_Muzzle_Play_Reload_FX, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'B_Ranged_Generic_C_Muzzle_Play_Reload_FX::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

struct B_Ranged_Generic_C_OnApplyFireModeData final
{
public:
	class UFortWeaponFireModeData*                FireModeData;
};
static_assert(alignof(B_Ranged_Generic_C_OnApplyFireModeData) == 0x000008, "Wrong alignment on B_Ranged_Generic_C_OnApplyFireModeData");
static_assert(sizeof(B_Ranged_Generic_C_OnApplyFireModeData) == 0x000008, "Wrong size on B_Ranged_Generic_C_OnApplyFireModeData");
static_assert(offsetof(B_Ranged_Generic_C_OnApplyFireModeData, FireModeData) == 0x000000, "Member 'B_Ranged_Generic_C_OnApplyFireModeData::FireModeData' has a wrong offset!");

struct B_Ranged_Generic_C_OnInitAlteration final
{
public:
	class UFortAlterationItemDefinition*          NewAlteration;
};
static_assert(alignof(B_Ranged_Generic_C_OnInitAlteration) == 0x000008, "Wrong alignment on B_Ranged_Generic_C_OnInitAlteration");
static_assert(sizeof(B_Ranged_Generic_C_OnInitAlteration) == 0x000008, "Wrong size on B_Ranged_Generic_C_OnInitAlteration");
static_assert(offsetof(B_Ranged_Generic_C_OnInitAlteration, NewAlteration) == 0x000000, "Member 'B_Ranged_Generic_C_OnInitAlteration::NewAlteration' has a wrong offset!");

struct B_Ranged_Generic_C_OnInitCosmeticAlterations final
{
public:
	struct FFortCosmeticModification              CosmeticMod;
};
static_assert(alignof(B_Ranged_Generic_C_OnInitCosmeticAlterations) == 0x000008, "Wrong alignment on B_Ranged_Generic_C_OnInitCosmeticAlterations");
static_assert(sizeof(B_Ranged_Generic_C_OnInitCosmeticAlterations) == 0x0006A0, "Wrong size on B_Ranged_Generic_C_OnInitCosmeticAlterations");
static_assert(offsetof(B_Ranged_Generic_C_OnInitCosmeticAlterations, CosmeticMod) == 0x000000, "Member 'B_Ranged_Generic_C_OnInitCosmeticAlterations::CosmeticMod' has a wrong offset!");

struct B_Ranged_Generic_C_OnLoaded_3A9BBE884A5C5966375089938B7DC0CA final
{
public:
	class UObject*                                Loaded;
};
static_assert(alignof(B_Ranged_Generic_C_OnLoaded_3A9BBE884A5C5966375089938B7DC0CA) == 0x000008, "Wrong alignment on B_Ranged_Generic_C_OnLoaded_3A9BBE884A5C5966375089938B7DC0CA");
static_assert(sizeof(B_Ranged_Generic_C_OnLoaded_3A9BBE884A5C5966375089938B7DC0CA) == 0x000008, "Wrong size on B_Ranged_Generic_C_OnLoaded_3A9BBE884A5C5966375089938B7DC0CA");
static_assert(offsetof(B_Ranged_Generic_C_OnLoaded_3A9BBE884A5C5966375089938B7DC0CA, Loaded) == 0x000000, "Member 'B_Ranged_Generic_C_OnLoaded_3A9BBE884A5C5966375089938B7DC0CA::Loaded' has a wrong offset!");

struct B_Ranged_Generic_C_OnLoaded_4D1409A247BFDB4C074B628406FC7A72 final
{
public:
	class UObject*                                Loaded;
};
static_assert(alignof(B_Ranged_Generic_C_OnLoaded_4D1409A247BFDB4C074B628406FC7A72) == 0x000008, "Wrong alignment on B_Ranged_Generic_C_OnLoaded_4D1409A247BFDB4C074B628406FC7A72");
static_assert(sizeof(B_Ranged_Generic_C_OnLoaded_4D1409A247BFDB4C074B628406FC7A72) == 0x000008, "Wrong size on B_Ranged_Generic_C_OnLoaded_4D1409A247BFDB4C074B628406FC7A72");
static_assert(offsetof(B_Ranged_Generic_C_OnLoaded_4D1409A247BFDB4C074B628406FC7A72, Loaded) == 0x000000, "Member 'B_Ranged_Generic_C_OnLoaded_4D1409A247BFDB4C074B628406FC7A72::Loaded' has a wrong offset!");

struct B_Ranged_Generic_C_OnLoaded_4DE6158742ED7EE528BC98A240A81632 final
{
public:
	class UObject*                                Loaded;
};
static_assert(alignof(B_Ranged_Generic_C_OnLoaded_4DE6158742ED7EE528BC98A240A81632) == 0x000008, "Wrong alignment on B_Ranged_Generic_C_OnLoaded_4DE6158742ED7EE528BC98A240A81632");
static_assert(sizeof(B_Ranged_Generic_C_OnLoaded_4DE6158742ED7EE528BC98A240A81632) == 0x000008, "Wrong size on B_Ranged_Generic_C_OnLoaded_4DE6158742ED7EE528BC98A240A81632");
static_assert(offsetof(B_Ranged_Generic_C_OnLoaded_4DE6158742ED7EE528BC98A240A81632, Loaded) == 0x000000, "Member 'B_Ranged_Generic_C_OnLoaded_4DE6158742ED7EE528BC98A240A81632::Loaded' has a wrong offset!");

struct B_Ranged_Generic_C_OnLoaded_5B08633343C4DA6FF40449A8A36357E4 final
{
public:
	class UObject*                                Loaded;
};
static_assert(alignof(B_Ranged_Generic_C_OnLoaded_5B08633343C4DA6FF40449A8A36357E4) == 0x000008, "Wrong alignment on B_Ranged_Generic_C_OnLoaded_5B08633343C4DA6FF40449A8A36357E4");
static_assert(sizeof(B_Ranged_Generic_C_OnLoaded_5B08633343C4DA6FF40449A8A36357E4) == 0x000008, "Wrong size on B_Ranged_Generic_C_OnLoaded_5B08633343C4DA6FF40449A8A36357E4");
static_assert(offsetof(B_Ranged_Generic_C_OnLoaded_5B08633343C4DA6FF40449A8A36357E4, Loaded) == 0x000000, "Member 'B_Ranged_Generic_C_OnLoaded_5B08633343C4DA6FF40449A8A36357E4::Loaded' has a wrong offset!");

struct B_Ranged_Generic_C_OnLoaded_83457BA843174AC6288682A342EBEAD9 final
{
public:
	class UObject*                                Loaded;
};
static_assert(alignof(B_Ranged_Generic_C_OnLoaded_83457BA843174AC6288682A342EBEAD9) == 0x000008, "Wrong alignment on B_Ranged_Generic_C_OnLoaded_83457BA843174AC6288682A342EBEAD9");
static_assert(sizeof(B_Ranged_Generic_C_OnLoaded_83457BA843174AC6288682A342EBEAD9) == 0x000008, "Wrong size on B_Ranged_Generic_C_OnLoaded_83457BA843174AC6288682A342EBEAD9");
static_assert(offsetof(B_Ranged_Generic_C_OnLoaded_83457BA843174AC6288682A342EBEAD9, Loaded) == 0x000000, "Member 'B_Ranged_Generic_C_OnLoaded_83457BA843174AC6288682A342EBEAD9::Loaded' has a wrong offset!");

struct B_Ranged_Generic_C_OnPlayImpactFX final
{
public:
	struct FHitResult                             HitResult;
	EPhysicalSurface                              ImpactPhysicalSurface;
	uint8                                         Pad_E1[0x7];
	class UFXSystemComponent*                     SpawnedPSC;
};
static_assert(alignof(B_Ranged_Generic_C_OnPlayImpactFX) == 0x000008, "Wrong alignment on B_Ranged_Generic_C_OnPlayImpactFX");
static_assert(sizeof(B_Ranged_Generic_C_OnPlayImpactFX) == 0x0000F0, "Wrong size on B_Ranged_Generic_C_OnPlayImpactFX");
static_assert(offsetof(B_Ranged_Generic_C_OnPlayImpactFX, HitResult) == 0x000000, "Member 'B_Ranged_Generic_C_OnPlayImpactFX::HitResult' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_OnPlayImpactFX, ImpactPhysicalSurface) == 0x0000E0, "Member 'B_Ranged_Generic_C_OnPlayImpactFX::ImpactPhysicalSurface' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_OnPlayImpactFX, SpawnedPSC) == 0x0000E8, "Member 'B_Ranged_Generic_C_OnPlayImpactFX::SpawnedPSC' has a wrong offset!");

struct B_Ranged_Generic_C_OnPlayReloadFX final
{
public:
	EFortReloadFXState                            ReloadStage;
};
static_assert(alignof(B_Ranged_Generic_C_OnPlayReloadFX) == 0x000001, "Wrong alignment on B_Ranged_Generic_C_OnPlayReloadFX");
static_assert(sizeof(B_Ranged_Generic_C_OnPlayReloadFX) == 0x000001, "Wrong size on B_Ranged_Generic_C_OnPlayReloadFX");
static_assert(offsetof(B_Ranged_Generic_C_OnPlayReloadFX, ReloadStage) == 0x000000, "Member 'B_Ranged_Generic_C_OnPlayReloadFX::ReloadStage' has a wrong offset!");

struct B_Ranged_Generic_C_OnPlayWeaponFireFX final
{
public:
	bool                                          bPersistentFire;
	bool                                          bSecondaryFire;
};
static_assert(alignof(B_Ranged_Generic_C_OnPlayWeaponFireFX) == 0x000001, "Wrong alignment on B_Ranged_Generic_C_OnPlayWeaponFireFX");
static_assert(sizeof(B_Ranged_Generic_C_OnPlayWeaponFireFX) == 0x000002, "Wrong size on B_Ranged_Generic_C_OnPlayWeaponFireFX");
static_assert(offsetof(B_Ranged_Generic_C_OnPlayWeaponFireFX, bPersistentFire) == 0x000000, "Member 'B_Ranged_Generic_C_OnPlayWeaponFireFX::bPersistentFire' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_OnPlayWeaponFireFX, bSecondaryFire) == 0x000001, "Member 'B_Ranged_Generic_C_OnPlayWeaponFireFX::bSecondaryFire' has a wrong offset!");

struct B_Ranged_Generic_C_OnSetTargeting final
{
public:
	bool                                          bNewIsTargeting;
};
static_assert(alignof(B_Ranged_Generic_C_OnSetTargeting) == 0x000001, "Wrong alignment on B_Ranged_Generic_C_OnSetTargeting");
static_assert(sizeof(B_Ranged_Generic_C_OnSetTargeting) == 0x000001, "Wrong size on B_Ranged_Generic_C_OnSetTargeting");
static_assert(offsetof(B_Ranged_Generic_C_OnSetTargeting, bNewIsTargeting) == 0x000000, "Member 'B_Ranged_Generic_C_OnSetTargeting::bNewIsTargeting' has a wrong offset!");

struct B_Ranged_Generic_C_OnWeaponVisibilityChanged final
{
public:
	bool                                          bVisible;
	bool                                          bSetForLocalControllerOnly;
};
static_assert(alignof(B_Ranged_Generic_C_OnWeaponVisibilityChanged) == 0x000001, "Wrong alignment on B_Ranged_Generic_C_OnWeaponVisibilityChanged");
static_assert(sizeof(B_Ranged_Generic_C_OnWeaponVisibilityChanged) == 0x000002, "Wrong size on B_Ranged_Generic_C_OnWeaponVisibilityChanged");
static_assert(offsetof(B_Ranged_Generic_C_OnWeaponVisibilityChanged, bVisible) == 0x000000, "Member 'B_Ranged_Generic_C_OnWeaponVisibilityChanged::bVisible' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_OnWeaponVisibilityChanged, bSetForLocalControllerOnly) == 0x000001, "Member 'B_Ranged_Generic_C_OnWeaponVisibilityChanged::bSetForLocalControllerOnly' has a wrong offset!");

struct B_Ranged_Generic_C_PitchUpOnRateOfFireChange final
{
public:
	float                                         NewRateOfFire;
};
static_assert(alignof(B_Ranged_Generic_C_PitchUpOnRateOfFireChange) == 0x000004, "Wrong alignment on B_Ranged_Generic_C_PitchUpOnRateOfFireChange");
static_assert(sizeof(B_Ranged_Generic_C_PitchUpOnRateOfFireChange) == 0x000004, "Wrong size on B_Ranged_Generic_C_PitchUpOnRateOfFireChange");
static_assert(offsetof(B_Ranged_Generic_C_PitchUpOnRateOfFireChange, NewRateOfFire) == 0x000000, "Member 'B_Ranged_Generic_C_PitchUpOnRateOfFireChange::NewRateOfFire' has a wrong offset!");

struct B_Ranged_Generic_C_PlayLocalForceFeedback final
{
public:
	class UForceFeedbackEffect*                   ForceFeedbackEffect;
	class FName                                   tag;
	bool                                          bLooping;
	uint8                                         Pad_D[0x3];
	class AController*                            CallFunc_GetInstigatorController_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_19[0x7];
	class APlayerController*                      K2Node_DynamicCast_AsPlayer_Controller;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsLocalController_ReturnValue;
};
static_assert(alignof(B_Ranged_Generic_C_PlayLocalForceFeedback) == 0x000008, "Wrong alignment on B_Ranged_Generic_C_PlayLocalForceFeedback");
static_assert(sizeof(B_Ranged_Generic_C_PlayLocalForceFeedback) == 0x000030, "Wrong size on B_Ranged_Generic_C_PlayLocalForceFeedback");
static_assert(offsetof(B_Ranged_Generic_C_PlayLocalForceFeedback, ForceFeedbackEffect) == 0x000000, "Member 'B_Ranged_Generic_C_PlayLocalForceFeedback::ForceFeedbackEffect' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_PlayLocalForceFeedback, tag) == 0x000008, "Member 'B_Ranged_Generic_C_PlayLocalForceFeedback::tag' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_PlayLocalForceFeedback, bLooping) == 0x00000C, "Member 'B_Ranged_Generic_C_PlayLocalForceFeedback::bLooping' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_PlayLocalForceFeedback, CallFunc_GetInstigatorController_ReturnValue) == 0x000010, "Member 'B_Ranged_Generic_C_PlayLocalForceFeedback::CallFunc_GetInstigatorController_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_PlayLocalForceFeedback, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'B_Ranged_Generic_C_PlayLocalForceFeedback::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_PlayLocalForceFeedback, K2Node_DynamicCast_AsPlayer_Controller) == 0x000020, "Member 'B_Ranged_Generic_C_PlayLocalForceFeedback::K2Node_DynamicCast_AsPlayer_Controller' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_PlayLocalForceFeedback, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'B_Ranged_Generic_C_PlayLocalForceFeedback::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_PlayLocalForceFeedback, CallFunc_IsLocalController_ReturnValue) == 0x000029, "Member 'B_Ranged_Generic_C_PlayLocalForceFeedback::CallFunc_IsLocalController_ReturnValue' has a wrong offset!");

struct B_Ranged_Generic_C_PlayScopeOutAudio final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_1[0x7];
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;
};
static_assert(alignof(B_Ranged_Generic_C_PlayScopeOutAudio) == 0x000008, "Wrong alignment on B_Ranged_Generic_C_PlayScopeOutAudio");
static_assert(sizeof(B_Ranged_Generic_C_PlayScopeOutAudio) == 0x000010, "Wrong size on B_Ranged_Generic_C_PlayScopeOutAudio");
static_assert(offsetof(B_Ranged_Generic_C_PlayScopeOutAudio, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'B_Ranged_Generic_C_PlayScopeOutAudio::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_PlayScopeOutAudio, CallFunc_SpawnSoundAttached_ReturnValue) == 0x000008, "Member 'B_Ranged_Generic_C_PlayScopeOutAudio::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");

struct B_Ranged_Generic_C_SetActiveAlterationIdleParticles final
{
public:
	bool                                          Active;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(B_Ranged_Generic_C_SetActiveAlterationIdleParticles) == 0x000001, "Wrong alignment on B_Ranged_Generic_C_SetActiveAlterationIdleParticles");
static_assert(sizeof(B_Ranged_Generic_C_SetActiveAlterationIdleParticles) == 0x000003, "Wrong size on B_Ranged_Generic_C_SetActiveAlterationIdleParticles");
static_assert(offsetof(B_Ranged_Generic_C_SetActiveAlterationIdleParticles, Active) == 0x000000, "Member 'B_Ranged_Generic_C_SetActiveAlterationIdleParticles::Active' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_SetActiveAlterationIdleParticles, CallFunc_IsDedicatedServer_ReturnValue) == 0x000001, "Member 'B_Ranged_Generic_C_SetActiveAlterationIdleParticles::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_SetActiveAlterationIdleParticles, CallFunc_IsValid_ReturnValue) == 0x000002, "Member 'B_Ranged_Generic_C_SetActiveAlterationIdleParticles::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct B_Ranged_Generic_C_SetActiveMuzzleComponent final
{
public:
	bool                                          NiagaraEnabled;
};
static_assert(alignof(B_Ranged_Generic_C_SetActiveMuzzleComponent) == 0x000001, "Wrong alignment on B_Ranged_Generic_C_SetActiveMuzzleComponent");
static_assert(sizeof(B_Ranged_Generic_C_SetActiveMuzzleComponent) == 0x000001, "Wrong size on B_Ranged_Generic_C_SetActiveMuzzleComponent");
static_assert(offsetof(B_Ranged_Generic_C_SetActiveMuzzleComponent, NiagaraEnabled) == 0x000000, "Member 'B_Ranged_Generic_C_SetActiveMuzzleComponent::NiagaraEnabled' has a wrong offset!");

struct B_Ranged_Generic_C_SetPostProcessParams final
{
public:
	double                                        InputPin;
};
static_assert(alignof(B_Ranged_Generic_C_SetPostProcessParams) == 0x000008, "Wrong alignment on B_Ranged_Generic_C_SetPostProcessParams");
static_assert(sizeof(B_Ranged_Generic_C_SetPostProcessParams) == 0x000008, "Wrong size on B_Ranged_Generic_C_SetPostProcessParams");
static_assert(offsetof(B_Ranged_Generic_C_SetPostProcessParams, InputPin) == 0x000000, "Member 'B_Ranged_Generic_C_SetPostProcessParams::InputPin' has a wrong offset!");

struct B_Ranged_Generic_C_SetupShellFX final
{
public:
	class UNiagaraSystem*                         Temp_object_Variable;
	class UNiagaraSystem*                         Temp_object_Variable_1;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_11[0x3];
	int32                                         Temp_int_Variable;
	int32                                         Temp_int_Variable_1;
	int32                                         Temp_int_Variable_2;
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;
	bool                                          CallFunc_ShouldPlayPersistentFireFX_ReturnValue;
	En_ShellTypes_01                              Temp_byte_Variable;
	uint8                                         Pad_3A[0x6];
	class UNiagaraSystem*                         K2Node_Select_Default;
	float                                         CallFunc_GetNumericCVar_OutValue;
	bool                                          CallFunc_GetNumericCVar_ReturnValue;
	uint8                                         Pad_4D[0x3];
	class UNiagaraComponent*                      CallFunc_SpawnSystemAttached_ReturnValue;
	double                                        CallFunc_FMax_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	int32                                         Temp_int_Variable_3;
	uint8                                         Pad_6C[0x4];
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	int32                                         Temp_int_Variable_4;
	bool                                          CallFunc_DoesSocketExist_ReturnValue;
	uint8                                         Pad_7D[0x3];
	int32                                         K2Node_Select_Default_1;
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast;
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast_1;
	float                                         CallFunc_Conv_FloatToVector_InFloat_ImplicitCast;
	double                                        CallFunc_FMax_A_ImplicitCast;
	float                                         CallFunc_SetCullDistance_NewCullDistance_ImplicitCast;
};
static_assert(alignof(B_Ranged_Generic_C_SetupShellFX) == 0x000008, "Wrong alignment on B_Ranged_Generic_C_SetupShellFX");
static_assert(sizeof(B_Ranged_Generic_C_SetupShellFX) == 0x0000A0, "Wrong size on B_Ranged_Generic_C_SetupShellFX");
static_assert(offsetof(B_Ranged_Generic_C_SetupShellFX, Temp_object_Variable) == 0x000000, "Member 'B_Ranged_Generic_C_SetupShellFX::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_SetupShellFX, Temp_object_Variable_1) == 0x000008, "Member 'B_Ranged_Generic_C_SetupShellFX::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_SetupShellFX, Temp_bool_Variable) == 0x000010, "Member 'B_Ranged_Generic_C_SetupShellFX::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_SetupShellFX, Temp_int_Variable) == 0x000014, "Member 'B_Ranged_Generic_C_SetupShellFX::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_SetupShellFX, Temp_int_Variable_1) == 0x000018, "Member 'B_Ranged_Generic_C_SetupShellFX::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_SetupShellFX, Temp_int_Variable_2) == 0x00001C, "Member 'B_Ranged_Generic_C_SetupShellFX::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_SetupShellFX, CallFunc_Conv_FloatToVector_ReturnValue) == 0x000020, "Member 'B_Ranged_Generic_C_SetupShellFX::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_SetupShellFX, CallFunc_ShouldPlayPersistentFireFX_ReturnValue) == 0x000038, "Member 'B_Ranged_Generic_C_SetupShellFX::CallFunc_ShouldPlayPersistentFireFX_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_SetupShellFX, Temp_byte_Variable) == 0x000039, "Member 'B_Ranged_Generic_C_SetupShellFX::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_SetupShellFX, K2Node_Select_Default) == 0x000040, "Member 'B_Ranged_Generic_C_SetupShellFX::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_SetupShellFX, CallFunc_GetNumericCVar_OutValue) == 0x000048, "Member 'B_Ranged_Generic_C_SetupShellFX::CallFunc_GetNumericCVar_OutValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_SetupShellFX, CallFunc_GetNumericCVar_ReturnValue) == 0x00004C, "Member 'B_Ranged_Generic_C_SetupShellFX::CallFunc_GetNumericCVar_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_SetupShellFX, CallFunc_SpawnSystemAttached_ReturnValue) == 0x000050, "Member 'B_Ranged_Generic_C_SetupShellFX::CallFunc_SpawnSystemAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_SetupShellFX, CallFunc_FMax_ReturnValue) == 0x000058, "Member 'B_Ranged_Generic_C_SetupShellFX::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_SetupShellFX, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000060, "Member 'B_Ranged_Generic_C_SetupShellFX::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_SetupShellFX, Temp_int_Variable_3) == 0x000068, "Member 'B_Ranged_Generic_C_SetupShellFX::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_SetupShellFX, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000070, "Member 'B_Ranged_Generic_C_SetupShellFX::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_SetupShellFX, Temp_int_Variable_4) == 0x000078, "Member 'B_Ranged_Generic_C_SetupShellFX::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_SetupShellFX, CallFunc_DoesSocketExist_ReturnValue) == 0x00007C, "Member 'B_Ranged_Generic_C_SetupShellFX::CallFunc_DoesSocketExist_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_SetupShellFX, K2Node_Select_Default_1) == 0x000080, "Member 'B_Ranged_Generic_C_SetupShellFX::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_SetupShellFX, CallFunc_SetVariableFloat_InValue_ImplicitCast) == 0x000084, "Member 'B_Ranged_Generic_C_SetupShellFX::CallFunc_SetVariableFloat_InValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_SetupShellFX, CallFunc_SetVariableFloat_InValue_ImplicitCast_1) == 0x000088, "Member 'B_Ranged_Generic_C_SetupShellFX::CallFunc_SetVariableFloat_InValue_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_SetupShellFX, CallFunc_Conv_FloatToVector_InFloat_ImplicitCast) == 0x00008C, "Member 'B_Ranged_Generic_C_SetupShellFX::CallFunc_Conv_FloatToVector_InFloat_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_SetupShellFX, CallFunc_FMax_A_ImplicitCast) == 0x000090, "Member 'B_Ranged_Generic_C_SetupShellFX::CallFunc_FMax_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_SetupShellFX, CallFunc_SetCullDistance_NewCullDistance_ImplicitCast) == 0x000098, "Member 'B_Ranged_Generic_C_SetupShellFX::CallFunc_SetCullDistance_NewCullDistance_ImplicitCast' has a wrong offset!");

struct B_Ranged_Generic_C_SetWeaponPierceThrough final
{
public:
	bool                                          Enable;
	uint8                                         Pad_1[0x3];
	int32                                         TargetLimit;
};
static_assert(alignof(B_Ranged_Generic_C_SetWeaponPierceThrough) == 0x000004, "Wrong alignment on B_Ranged_Generic_C_SetWeaponPierceThrough");
static_assert(sizeof(B_Ranged_Generic_C_SetWeaponPierceThrough) == 0x000008, "Wrong size on B_Ranged_Generic_C_SetWeaponPierceThrough");
static_assert(offsetof(B_Ranged_Generic_C_SetWeaponPierceThrough, Enable) == 0x000000, "Member 'B_Ranged_Generic_C_SetWeaponPierceThrough::Enable' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_SetWeaponPierceThrough, TargetLimit) == 0x000004, "Member 'B_Ranged_Generic_C_SetWeaponPierceThrough::TargetLimit' has a wrong offset!");

struct B_Ranged_Generic_C_SetWeaponPierceThrough_ClientRep final
{
public:
	bool                                          Enable;
	uint8                                         Pad_1[0x3];
	int32                                         TargetLimit;
};
static_assert(alignof(B_Ranged_Generic_C_SetWeaponPierceThrough_ClientRep) == 0x000004, "Wrong alignment on B_Ranged_Generic_C_SetWeaponPierceThrough_ClientRep");
static_assert(sizeof(B_Ranged_Generic_C_SetWeaponPierceThrough_ClientRep) == 0x000008, "Wrong size on B_Ranged_Generic_C_SetWeaponPierceThrough_ClientRep");
static_assert(offsetof(B_Ranged_Generic_C_SetWeaponPierceThrough_ClientRep, Enable) == 0x000000, "Member 'B_Ranged_Generic_C_SetWeaponPierceThrough_ClientRep::Enable' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_SetWeaponPierceThrough_ClientRep, TargetLimit) == 0x000004, "Member 'B_Ranged_Generic_C_SetWeaponPierceThrough_ClientRep::TargetLimit' has a wrong offset!");

struct B_Ranged_Generic_C_ShowReticle final
{
public:
	class AController*                            CallFunc_GetInstigatorController_ReturnValue;
	class AFortPlayerControllerZone*              K2Node_DynamicCast_AsFort_Player_Controller_Zone;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(B_Ranged_Generic_C_ShowReticle) == 0x000008, "Wrong alignment on B_Ranged_Generic_C_ShowReticle");
static_assert(sizeof(B_Ranged_Generic_C_ShowReticle) == 0x000018, "Wrong size on B_Ranged_Generic_C_ShowReticle");
static_assert(offsetof(B_Ranged_Generic_C_ShowReticle, CallFunc_GetInstigatorController_ReturnValue) == 0x000000, "Member 'B_Ranged_Generic_C_ShowReticle::CallFunc_GetInstigatorController_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ShowReticle, K2Node_DynamicCast_AsFort_Player_Controller_Zone) == 0x000008, "Member 'B_Ranged_Generic_C_ShowReticle::K2Node_DynamicCast_AsFort_Player_Controller_Zone' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_ShowReticle, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'B_Ranged_Generic_C_ShowReticle::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct B_Ranged_Generic_C_StartScopedAudio final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_3[0x5];
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue_1;
};
static_assert(alignof(B_Ranged_Generic_C_StartScopedAudio) == 0x000008, "Wrong alignment on B_Ranged_Generic_C_StartScopedAudio");
static_assert(sizeof(B_Ranged_Generic_C_StartScopedAudio) == 0x000018, "Wrong size on B_Ranged_Generic_C_StartScopedAudio");
static_assert(offsetof(B_Ranged_Generic_C_StartScopedAudio, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'B_Ranged_Generic_C_StartScopedAudio::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_StartScopedAudio, CallFunc_IsValid_ReturnValue_1) == 0x000001, "Member 'B_Ranged_Generic_C_StartScopedAudio::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_StartScopedAudio, CallFunc_IsValid_ReturnValue_2) == 0x000002, "Member 'B_Ranged_Generic_C_StartScopedAudio::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_StartScopedAudio, CallFunc_SpawnSoundAttached_ReturnValue) == 0x000008, "Member 'B_Ranged_Generic_C_StartScopedAudio::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_StartScopedAudio, CallFunc_SpawnSoundAttached_ReturnValue_1) == 0x000010, "Member 'B_Ranged_Generic_C_StartScopedAudio::CallFunc_SpawnSoundAttached_ReturnValue_1' has a wrong offset!");

struct B_Ranged_Generic_C_StopLocalForceFeedback final
{
public:
	class UForceFeedbackEffect*                   ForceFeedbackEffect;
	class FName                                   tag;
	uint8                                         Pad_C[0x4];
	class AController*                            CallFunc_GetInstigatorController_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_19[0x7];
	class APlayerController*                      K2Node_DynamicCast_AsPlayer_Controller;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsLocalController_ReturnValue;
};
static_assert(alignof(B_Ranged_Generic_C_StopLocalForceFeedback) == 0x000008, "Wrong alignment on B_Ranged_Generic_C_StopLocalForceFeedback");
static_assert(sizeof(B_Ranged_Generic_C_StopLocalForceFeedback) == 0x000030, "Wrong size on B_Ranged_Generic_C_StopLocalForceFeedback");
static_assert(offsetof(B_Ranged_Generic_C_StopLocalForceFeedback, ForceFeedbackEffect) == 0x000000, "Member 'B_Ranged_Generic_C_StopLocalForceFeedback::ForceFeedbackEffect' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_StopLocalForceFeedback, tag) == 0x000008, "Member 'B_Ranged_Generic_C_StopLocalForceFeedback::tag' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_StopLocalForceFeedback, CallFunc_GetInstigatorController_ReturnValue) == 0x000010, "Member 'B_Ranged_Generic_C_StopLocalForceFeedback::CallFunc_GetInstigatorController_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_StopLocalForceFeedback, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'B_Ranged_Generic_C_StopLocalForceFeedback::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_StopLocalForceFeedback, K2Node_DynamicCast_AsPlayer_Controller) == 0x000020, "Member 'B_Ranged_Generic_C_StopLocalForceFeedback::K2Node_DynamicCast_AsPlayer_Controller' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_StopLocalForceFeedback, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'B_Ranged_Generic_C_StopLocalForceFeedback::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_StopLocalForceFeedback, CallFunc_IsLocalController_ReturnValue) == 0x000029, "Member 'B_Ranged_Generic_C_StopLocalForceFeedback::CallFunc_IsLocalController_ReturnValue' has a wrong offset!");

struct B_Ranged_Generic_C_StopScopedAudio final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
};
static_assert(alignof(B_Ranged_Generic_C_StopScopedAudio) == 0x000001, "Wrong alignment on B_Ranged_Generic_C_StopScopedAudio");
static_assert(sizeof(B_Ranged_Generic_C_StopScopedAudio) == 0x000002, "Wrong size on B_Ranged_Generic_C_StopScopedAudio");
static_assert(offsetof(B_Ranged_Generic_C_StopScopedAudio, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'B_Ranged_Generic_C_StopScopedAudio::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_StopScopedAudio, CallFunc_IsValid_ReturnValue_1) == 0x000001, "Member 'B_Ranged_Generic_C_StopScopedAudio::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

struct B_Ranged_Generic_C_UnhideFirstPersonStuffPart2 final
{
public:
	int32                                         Which_Call;
};
static_assert(alignof(B_Ranged_Generic_C_UnhideFirstPersonStuffPart2) == 0x000004, "Wrong alignment on B_Ranged_Generic_C_UnhideFirstPersonStuffPart2");
static_assert(sizeof(B_Ranged_Generic_C_UnhideFirstPersonStuffPart2) == 0x000004, "Wrong size on B_Ranged_Generic_C_UnhideFirstPersonStuffPart2");
static_assert(offsetof(B_Ranged_Generic_C_UnhideFirstPersonStuffPart2, Which_Call) == 0x000000, "Member 'B_Ranged_Generic_C_UnhideFirstPersonStuffPart2::Which_Call' has a wrong offset!");

struct B_Ranged_Generic_C_Update_Enemy_Custom_Depths final
{
public:
	bool                                          Enable_Or_Disable;
	uint8                                         Pad_1[0x3];
	int32                                         StencilBufferValue_0;
};
static_assert(alignof(B_Ranged_Generic_C_Update_Enemy_Custom_Depths) == 0x000004, "Wrong alignment on B_Ranged_Generic_C_Update_Enemy_Custom_Depths");
static_assert(sizeof(B_Ranged_Generic_C_Update_Enemy_Custom_Depths) == 0x000008, "Wrong size on B_Ranged_Generic_C_Update_Enemy_Custom_Depths");
static_assert(offsetof(B_Ranged_Generic_C_Update_Enemy_Custom_Depths, Enable_Or_Disable) == 0x000000, "Member 'B_Ranged_Generic_C_Update_Enemy_Custom_Depths::Enable_Or_Disable' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_Update_Enemy_Custom_Depths, StencilBufferValue_0) == 0x000004, "Member 'B_Ranged_Generic_C_Update_Enemy_Custom_Depths::StencilBufferValue_0' has a wrong offset!");

struct B_Ranged_Generic_C_UpdateShellEmittersFX final
{
public:
	TArray<En_ShellTypes_01>                      Keys_to_Check;
	TArray<class FName>                           Values_to_Run_Through;
	int32                                         CallFunc_GetShellReloadCounter_ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_25[0x3];
	int32                                         CallFunc_Max_ReturnValue;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;
	double                                        K2Node_Select_Default;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_39[0x7];
	double                                        K2Node_Select_Option_1_ImplicitCast;
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast;
};
static_assert(alignof(B_Ranged_Generic_C_UpdateShellEmittersFX) == 0x000008, "Wrong alignment on B_Ranged_Generic_C_UpdateShellEmittersFX");
static_assert(sizeof(B_Ranged_Generic_C_UpdateShellEmittersFX) == 0x000050, "Wrong size on B_Ranged_Generic_C_UpdateShellEmittersFX");
static_assert(offsetof(B_Ranged_Generic_C_UpdateShellEmittersFX, Keys_to_Check) == 0x000000, "Member 'B_Ranged_Generic_C_UpdateShellEmittersFX::Keys_to_Check' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_UpdateShellEmittersFX, Values_to_Run_Through) == 0x000010, "Member 'B_Ranged_Generic_C_UpdateShellEmittersFX::Values_to_Run_Through' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_UpdateShellEmittersFX, CallFunc_GetShellReloadCounter_ReturnValue) == 0x000020, "Member 'B_Ranged_Generic_C_UpdateShellEmittersFX::CallFunc_GetShellReloadCounter_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_UpdateShellEmittersFX, Temp_bool_Variable) == 0x000024, "Member 'B_Ranged_Generic_C_UpdateShellEmittersFX::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_UpdateShellEmittersFX, CallFunc_Max_ReturnValue) == 0x000028, "Member 'B_Ranged_Generic_C_UpdateShellEmittersFX::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_UpdateShellEmittersFX, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00002C, "Member 'B_Ranged_Generic_C_UpdateShellEmittersFX::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_UpdateShellEmittersFX, K2Node_Select_Default) == 0x000030, "Member 'B_Ranged_Generic_C_UpdateShellEmittersFX::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_UpdateShellEmittersFX, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'B_Ranged_Generic_C_UpdateShellEmittersFX::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_UpdateShellEmittersFX, K2Node_Select_Option_1_ImplicitCast) == 0x000040, "Member 'B_Ranged_Generic_C_UpdateShellEmittersFX::K2Node_Select_Option_1_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_UpdateShellEmittersFX, CallFunc_SetVariableFloat_InValue_ImplicitCast) == 0x000048, "Member 'B_Ranged_Generic_C_UpdateShellEmittersFX::CallFunc_SetVariableFloat_InValue_ImplicitCast' has a wrong offset!");

struct B_Ranged_Generic_C_UserConstructionScript final
{
public:
	int32                                         ValidMuzzleSocketCount;
	int32                                         Temp_int_Array_Index_Variable;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;
	uint8                                         Pad_9[0x3];
	float                                         CallFunc_GetScalarParameterValue_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_11[0x7];
	TSoftObjectPtr<class UNiagaraSystem>          CallFunc_GetCorrectMuzzleNiagaraSystem_OutNiagaraSystem;
	struct FTransform                             Temp_struct_Variable;
	bool                                          CallFunc_IsNiagaraEffectEnabledSoftPtr_ReturnValue;
	uint8                                         Pad_A1[0x7];
	class UParticleSystemComponent*               CallFunc_AddComponent_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable_1;
	uint8                                         Pad_B4[0x4];
	TArray<class FName>                           CallFunc_GetUniqueMuzzleSocketNames_Names;
	TArray<class FName>                           CallFunc_GetUniqueMuzzleSocketNames_Names_1;
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	uint8                                         Pad_E1[0x7];
	class UParticleSystemComponent*               CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue_2;
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;
	uint8                                         Pad_F5[0x3];
	class FName                                   CallFunc_GetMuzzleSocketName_ReturnValue;
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue_1;
	uint8                                         Pad_FD[0x3];
	int32                                         Temp_int_Loop_Counter_Variable;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_105[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         Temp_int_Loop_Counter_Variable_1;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;
	uint8                                         Pad_112[0x2];
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	uint8                                         Pad_118[0x8];
	struct FTransform                             Temp_struct_Variable_1;
	class UParticleSystemComponent*               CallFunc_AddComponent_ReturnValue_1;
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(B_Ranged_Generic_C_UserConstructionScript) == 0x000010, "Wrong alignment on B_Ranged_Generic_C_UserConstructionScript");
static_assert(sizeof(B_Ranged_Generic_C_UserConstructionScript) == 0x000190, "Wrong size on B_Ranged_Generic_C_UserConstructionScript");
static_assert(offsetof(B_Ranged_Generic_C_UserConstructionScript, ValidMuzzleSocketCount) == 0x000000, "Member 'B_Ranged_Generic_C_UserConstructionScript::ValidMuzzleSocketCount' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_UserConstructionScript, Temp_int_Array_Index_Variable) == 0x000004, "Member 'B_Ranged_Generic_C_UserConstructionScript::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_UserConstructionScript, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000008, "Member 'B_Ranged_Generic_C_UserConstructionScript::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_UserConstructionScript, CallFunc_GetScalarParameterValue_ReturnValue) == 0x00000C, "Member 'B_Ranged_Generic_C_UserConstructionScript::CallFunc_GetScalarParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_UserConstructionScript, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000010, "Member 'B_Ranged_Generic_C_UserConstructionScript::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_UserConstructionScript, CallFunc_GetCorrectMuzzleNiagaraSystem_OutNiagaraSystem) == 0x000018, "Member 'B_Ranged_Generic_C_UserConstructionScript::CallFunc_GetCorrectMuzzleNiagaraSystem_OutNiagaraSystem' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_UserConstructionScript, Temp_struct_Variable) == 0x000040, "Member 'B_Ranged_Generic_C_UserConstructionScript::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_UserConstructionScript, CallFunc_IsNiagaraEffectEnabledSoftPtr_ReturnValue) == 0x0000A0, "Member 'B_Ranged_Generic_C_UserConstructionScript::CallFunc_IsNiagaraEffectEnabledSoftPtr_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_UserConstructionScript, CallFunc_AddComponent_ReturnValue) == 0x0000A8, "Member 'B_Ranged_Generic_C_UserConstructionScript::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_UserConstructionScript, Temp_int_Array_Index_Variable_1) == 0x0000B0, "Member 'B_Ranged_Generic_C_UserConstructionScript::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_UserConstructionScript, CallFunc_GetUniqueMuzzleSocketNames_Names) == 0x0000B8, "Member 'B_Ranged_Generic_C_UserConstructionScript::CallFunc_GetUniqueMuzzleSocketNames_Names' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_UserConstructionScript, CallFunc_GetUniqueMuzzleSocketNames_Names_1) == 0x0000C8, "Member 'B_Ranged_Generic_C_UserConstructionScript::CallFunc_GetUniqueMuzzleSocketNames_Names_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_UserConstructionScript, CallFunc_Array_Length_ReturnValue) == 0x0000D8, "Member 'B_Ranged_Generic_C_UserConstructionScript::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_UserConstructionScript, CallFunc_Array_Length_ReturnValue_1) == 0x0000DC, "Member 'B_Ranged_Generic_C_UserConstructionScript::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_UserConstructionScript, CallFunc_IsDedicatedServer_ReturnValue) == 0x0000E0, "Member 'B_Ranged_Generic_C_UserConstructionScript::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_UserConstructionScript, CallFunc_Array_Get_Item) == 0x0000E8, "Member 'B_Ranged_Generic_C_UserConstructionScript::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_UserConstructionScript, CallFunc_Array_Length_ReturnValue_2) == 0x0000F0, "Member 'B_Ranged_Generic_C_UserConstructionScript::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_UserConstructionScript, CallFunc_Array_IsValidIndex_ReturnValue) == 0x0000F4, "Member 'B_Ranged_Generic_C_UserConstructionScript::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_UserConstructionScript, CallFunc_GetMuzzleSocketName_ReturnValue) == 0x0000F8, "Member 'B_Ranged_Generic_C_UserConstructionScript::CallFunc_GetMuzzleSocketName_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_UserConstructionScript, CallFunc_Array_IsValidIndex_ReturnValue_1) == 0x0000FC, "Member 'B_Ranged_Generic_C_UserConstructionScript::CallFunc_Array_IsValidIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_UserConstructionScript, Temp_int_Loop_Counter_Variable) == 0x000100, "Member 'B_Ranged_Generic_C_UserConstructionScript::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_UserConstructionScript, CallFunc_Less_IntInt_ReturnValue) == 0x000104, "Member 'B_Ranged_Generic_C_UserConstructionScript::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x000108, "Member 'B_Ranged_Generic_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_UserConstructionScript, Temp_int_Loop_Counter_Variable_1) == 0x00010C, "Member 'B_Ranged_Generic_C_UserConstructionScript::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_UserConstructionScript, CallFunc_IsValid_ReturnValue) == 0x000110, "Member 'B_Ranged_Generic_C_UserConstructionScript::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_UserConstructionScript, CallFunc_Less_IntInt_ReturnValue_1) == 0x000111, "Member 'B_Ranged_Generic_C_UserConstructionScript::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue_1) == 0x000114, "Member 'B_Ranged_Generic_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_UserConstructionScript, Temp_struct_Variable_1) == 0x000120, "Member 'B_Ranged_Generic_C_UserConstructionScript::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_UserConstructionScript, CallFunc_AddComponent_ReturnValue_1) == 0x000180, "Member 'B_Ranged_Generic_C_UserConstructionScript::CallFunc_AddComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Ranged_Generic_C_UserConstructionScript, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000188, "Member 'B_Ranged_Generic_C_UserConstructionScript::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");

}
