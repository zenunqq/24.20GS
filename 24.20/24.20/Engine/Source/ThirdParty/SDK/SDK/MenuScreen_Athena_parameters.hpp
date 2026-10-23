#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct MenuScreen_Athena_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;
};
static_assert(alignof(MenuScreen_Athena_C_AnimGraph) == 0x000008, "Wrong alignment on MenuScreen_Athena_C_AnimGraph");
static_assert(sizeof(MenuScreen_Athena_C_AnimGraph) == 0x000010, "Wrong size on MenuScreen_Athena_C_AnimGraph");
static_assert(offsetof(MenuScreen_Athena_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'MenuScreen_Athena_C_AnimGraph::AnimGraph_0' has a wrong offset!");

struct MenuScreen_Athena_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;
};
static_assert(alignof(MenuScreen_Athena_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on MenuScreen_Athena_C_BlueprintUpdateAnimation");
static_assert(sizeof(MenuScreen_Athena_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on MenuScreen_Athena_C_BlueprintUpdateAnimation");
static_assert(offsetof(MenuScreen_Athena_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'MenuScreen_Athena_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

struct MenuScreen_Athena_C_CalculateMontagePlayTiming final
{
public:
	double                                        CallFunc_RandomFloatInRange_ReturnValue;
	double                                        CallFunc_RandomFloatInRange_ReturnValue_1;
};
static_assert(alignof(MenuScreen_Athena_C_CalculateMontagePlayTiming) == 0x000008, "Wrong alignment on MenuScreen_Athena_C_CalculateMontagePlayTiming");
static_assert(sizeof(MenuScreen_Athena_C_CalculateMontagePlayTiming) == 0x000010, "Wrong size on MenuScreen_Athena_C_CalculateMontagePlayTiming");
static_assert(offsetof(MenuScreen_Athena_C_CalculateMontagePlayTiming, CallFunc_RandomFloatInRange_ReturnValue) == 0x000000, "Member 'MenuScreen_Athena_C_CalculateMontagePlayTiming::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_CalculateMontagePlayTiming, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000008, "Member 'MenuScreen_Athena_C_CalculateMontagePlayTiming::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");

struct MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class AFortPlayerPawn*                        K2Node_CustomEvent_Pawn;
	class UCustomCharacterPart*                   K2Node_CustomEvent_Part;
	class USkeletalMeshComponent*                 K2Node_CustomEvent_MeshPart;
	EFortCustomPartType                           K2Node_CustomEvent_PartType;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_22[0x6];
	class USkeletalMesh*                          CallFunc_GetSkeletalMeshAsset_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_31[0x7];
	class FString                                 CallFunc_GetObjectName_ReturnValue;
	bool                                          CallFunc_Contains_ReturnValue;
	bool                                          CallFunc_IsSkydiving_ReturnValue;
	uint8                                         Pad_4A[0x6];
	class UAnimMontage*                           CallFunc_GetFrontendAnimMontageIdleOverride_ReturnValue;
	float                                         CallFunc_GetCurveValue_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          CallFunc_Montage_IsActive_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	uint8                                         Pad_5F[0x1];
	float                                         K2Node_Event_DeltaTimeX;
	uint8                                         Pad_64[0x4];
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;
	float                                         CallFunc_BreakRotator_Roll;
	float                                         CallFunc_BreakRotator_Pitch;
	float                                         CallFunc_BreakRotator_Yaw;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	uint8                                         Pad_7D[0x3];
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_A1[0x3];
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	bool                                          CallFunc_Montage_IsActive_ReturnValue_1;
	uint8                                         Pad_AA[0x6];
	class UAnimMontage*                           CallFunc_GetFrontendAnimMontageIdleOverride_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_5;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_6;
	bool                                          CallFunc_IsValid_ReturnValue_7;
	uint8                                         Pad_BC[0x4];
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;
	class UB_AnimBP_HightowerRadish_C*            K2Node_DynamicCast_AsB_Anim_BP_Hightower_Radish;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_D1[0x7];
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue_1;
	class UB_AnimBP_HightowerRadish_C*            K2Node_DynamicCast_AsB_Anim_BP_Hightower_Radish_1;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_E9[0x7];
	class UB_MasterPetAnimBP_C*                   K2Node_DynamicCast_AsB_Master_Pet_Anim_BP;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	bool                                          CallFunc_IsValid_ReturnValue_8;
	uint8                                         Pad_FA[0x6];
	class FString                                 CallFunc_GetDisplayName_ReturnValue;
	bool                                          CallFunc_Contains_ReturnValue_1;
	uint8                                         Pad_111[0x7];
	class UB_MasterPetAnimBP_C*                   K2Node_DynamicCast_AsB_Master_Pet_Anim_BP_1;
	bool                                          K2Node_DynamicCast_bSuccess_4;
	bool                                          CallFunc_IsValid_ReturnValue_9;
	uint8                                         Pad_122[0x6];
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;
	bool                                          CallFunc_Contains_ReturnValue_2;
	bool                                          Temp_bool_Has_Been_Initd_Variable;
	uint8                                         Pad_13A[0x2];
	TDelegate<void(class UAnimMontage* Montage)>  K2Node_CreateDelegate_OutputDelegate;
	float                                         CallFunc_Montage_Play_ReturnValue;
	TDelegate<void(class UAnimMontage* Montage, bool bInterrupted)> K2Node_CreateDelegate_OutputDelegate_1;
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_159[0x7];
	class UAnimMontage*                           K2Node_CustomEvent_Montage_1;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	uint8                                         Pad_169[0x7];
	class UAnimMontage*                           K2Node_CustomEvent_Montage;
	bool                                          K2Node_CustomEvent_bInterrupted;
	uint8                                         Pad_179[0x7];
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	TDelegate<void(class AFortPlayerPawn* Pawn, class UCustomCharacterPart* Part, class USkeletalMeshComponent* MeshPart, EFortCustomPartType PartType)> K2Node_CreateDelegate_OutputDelegate_2;
	uint8                                         Pad_194[0x4];
	struct FDelegateHandleController              CallFunc_WhenCosmeticSpecificPartApplied_DelegateHandleController_Out;
	TDelegate<void(class AFortPlayerPawn* Pawn, class UCustomCharacterPart* Part, class USkeletalMeshComponent* MeshPart, EFortCustomPartType PartType)> K2Node_CreateDelegate_OutputDelegate_3;
	uint8                                         Pad_1B4[0x4];
	struct FDelegateHandleController              CallFunc_WhenCosmeticSpecificPartApplied_DelegateHandleController_Out_1;
	bool                                          CallFunc_BooleanOR_ReturnValue_2;
	bool                                          CallFunc_BooleanOR_ReturnValue_3;
	uint8                                         Pad_1CA[0x2];
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue_1;
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue_1;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess_5;
	uint8                                         Pad_1E1[0x7];
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_1;
	bool                                          K2Node_DynamicCast_bSuccess_6;
	bool                                          CallFunc_IsValid_ReturnValue_10;
	bool                                          CallFunc_IsSkydiving_ReturnValue_1;
	uint8                                         Pad_1F3[0x5];
	class UAnimMontage*                           CallFunc_GetFrontendAnimMontageIdleOverride_ReturnValue_2;
	const class UFortItemDefinition*              K2Node_Event_FocusedItem;
	const class AFortWeapon*                      K2Node_Event_EquippedWeapon;
	const class AFortPlayerParachute*             K2Node_Event_CurrentParachute;
	float                                         CallFunc_Montage_Play_ReturnValue_1;
	uint8                                         Pad_21C[0x4];
	class UAthenaPickaxeItemDefinition*           K2Node_DynamicCast_AsAthena_Pickaxe_Item_Definition;
	bool                                          K2Node_DynamicCast_bSuccess_7;
	bool                                          CallFunc_Montage_IsPlaying_ReturnValue;
	uint8                                         Pad_22A[0x6];
	class UAnimMontage*                           CallFunc_GetFrontendAnimMontageIdleOverride_ReturnValue_3;
	bool                                          CallFunc_IsValid_ReturnValue_11;
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue_4;
	uint8                                         Pad_23B[0x1];
	float                                         CallFunc_Montage_Play_ReturnValue_2;
	bool                                          Temp_bool_IsClosed_Variable;
	bool                                          CallFunc_BooleanOR_ReturnValue_5;
	uint8                                         Pad_242[0x6];
	class AFortPlayerPawn*                        K2Node_CustomEvent_Pawn_1;
	class UCustomCharacterPart*                   K2Node_CustomEvent_Part_1;
	class USkeletalMeshComponent*                 K2Node_CustomEvent_MeshPart_1;
	EFortCustomPartType                           K2Node_CustomEvent_PartType_1;
	bool                                          CallFunc_IsValid_ReturnValue_12;
	uint8                                         Pad_262[0x6];
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	float                                         CallFunc_Montage_Play_InTimeToStartMontageAt_ImplicitCast;
	float                                         CallFunc_Montage_Play_InTimeToStartMontageAt_ImplicitCast_1;
	float                                         CallFunc_Montage_Play_InPlayRate_ImplicitCast;
	float                                         CallFunc_Montage_Play_InPlayRate_ImplicitCast_1;
};
static_assert(alignof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena) == 0x000008, "Wrong alignment on MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena");
static_assert(sizeof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena) == 0x000280, "Wrong size on MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, EntryPoint) == 0x000000, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::EntryPoint' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, K2Node_CustomEvent_Pawn) == 0x000008, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::K2Node_CustomEvent_Pawn' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, K2Node_CustomEvent_Part) == 0x000010, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::K2Node_CustomEvent_Part' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, K2Node_CustomEvent_MeshPart) == 0x000018, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::K2Node_CustomEvent_MeshPart' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, K2Node_CustomEvent_PartType) == 0x000020, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::K2Node_CustomEvent_PartType' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_GetSkeletalMeshAsset_ReturnValue) == 0x000028, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_GetSkeletalMeshAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_IsValid_ReturnValue_1) == 0x000030, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_GetObjectName_ReturnValue) == 0x000038, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_GetObjectName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_Contains_ReturnValue) == 0x000048, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_IsSkydiving_ReturnValue) == 0x000049, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_IsSkydiving_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_GetFrontendAnimMontageIdleOverride_ReturnValue) == 0x000050, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_GetFrontendAnimMontageIdleOverride_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_GetCurveValue_ReturnValue) == 0x000058, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_GetCurveValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_IsValid_ReturnValue_2) == 0x00005C, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_Montage_IsActive_ReturnValue) == 0x00005D, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_Montage_IsActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_BooleanOR_ReturnValue) == 0x00005E, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, K2Node_Event_DeltaTimeX) == 0x000060, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000068, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_BreakRotator_Roll) == 0x000070, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_BreakRotator_Pitch) == 0x000074, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_BreakRotator_Yaw) == 0x000078, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_IsValid_ReturnValue_3) == 0x00007C, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_MakeRotator_ReturnValue) == 0x000080, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, K2Node_DynamicCast_AsPlayer_Pawn_Athena) == 0x000098, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::K2Node_DynamicCast_AsPlayer_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, K2Node_DynamicCast_bSuccess) == 0x0000A0, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_RandomIntegerInRange_ReturnValue) == 0x0000A4, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_IsValid_ReturnValue_4) == 0x0000A8, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_Montage_IsActive_ReturnValue_1) == 0x0000A9, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_Montage_IsActive_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_GetFrontendAnimMontageIdleOverride_ReturnValue_1) == 0x0000B0, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_GetFrontendAnimMontageIdleOverride_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_IsValid_ReturnValue_5) == 0x0000B8, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_BooleanAND_ReturnValue) == 0x0000B9, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_IsValid_ReturnValue_6) == 0x0000BA, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_IsValid_ReturnValue_7) == 0x0000BB, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_GetAnimInstance_ReturnValue) == 0x0000C0, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, K2Node_DynamicCast_AsB_Anim_BP_Hightower_Radish) == 0x0000C8, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::K2Node_DynamicCast_AsB_Anim_BP_Hightower_Radish' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, K2Node_DynamicCast_bSuccess_1) == 0x0000D0, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_GetAnimInstance_ReturnValue_1) == 0x0000D8, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_GetAnimInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, K2Node_DynamicCast_AsB_Anim_BP_Hightower_Radish_1) == 0x0000E0, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::K2Node_DynamicCast_AsB_Anim_BP_Hightower_Radish_1' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, K2Node_DynamicCast_bSuccess_2) == 0x0000E8, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, K2Node_DynamicCast_AsB_Master_Pet_Anim_BP) == 0x0000F0, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::K2Node_DynamicCast_AsB_Master_Pet_Anim_BP' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, K2Node_DynamicCast_bSuccess_3) == 0x0000F8, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_IsValid_ReturnValue_8) == 0x0000F9, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_GetDisplayName_ReturnValue) == 0x000100, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_Contains_ReturnValue_1) == 0x000110, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_Contains_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, K2Node_DynamicCast_AsB_Master_Pet_Anim_BP_1) == 0x000118, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::K2Node_DynamicCast_AsB_Master_Pet_Anim_BP_1' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, K2Node_DynamicCast_bSuccess_4) == 0x000120, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_IsValid_ReturnValue_9) == 0x000121, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_GetDisplayName_ReturnValue_1) == 0x000128, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_Contains_ReturnValue_2) == 0x000138, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_Contains_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, Temp_bool_Has_Been_Initd_Variable) == 0x000139, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, K2Node_CreateDelegate_OutputDelegate) == 0x00013C, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_Montage_Play_ReturnValue) == 0x000148, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_Montage_Play_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, K2Node_CreateDelegate_OutputDelegate_1) == 0x00014C, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000158, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, K2Node_CustomEvent_Montage_1) == 0x000160, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::K2Node_CustomEvent_Montage_1' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_BooleanOR_ReturnValue_1) == 0x000168, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, K2Node_CustomEvent_Montage) == 0x000170, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::K2Node_CustomEvent_Montage' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, K2Node_CustomEvent_bInterrupted) == 0x000178, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::K2Node_CustomEvent_bInterrupted' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000180, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, K2Node_CreateDelegate_OutputDelegate_2) == 0x000188, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_WhenCosmeticSpecificPartApplied_DelegateHandleController_Out) == 0x000198, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_WhenCosmeticSpecificPartApplied_DelegateHandleController_Out' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, K2Node_CreateDelegate_OutputDelegate_3) == 0x0001A8, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_WhenCosmeticSpecificPartApplied_DelegateHandleController_Out_1) == 0x0001B8, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_WhenCosmeticSpecificPartApplied_DelegateHandleController_Out_1' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_BooleanOR_ReturnValue_2) == 0x0001C8, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_BooleanOR_ReturnValue_3) == 0x0001C9, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_RandomIntegerInRange_ReturnValue_1) == 0x0001CC, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_RandomIntegerInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_TryGetPawnOwner_ReturnValue_1) == 0x0001D0, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_TryGetPawnOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x0001D8, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, K2Node_DynamicCast_bSuccess_5) == 0x0001E0, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, K2Node_DynamicCast_AsFort_Player_Pawn_1) == 0x0001E8, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::K2Node_DynamicCast_AsFort_Player_Pawn_1' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, K2Node_DynamicCast_bSuccess_6) == 0x0001F0, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_IsValid_ReturnValue_10) == 0x0001F1, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_IsSkydiving_ReturnValue_1) == 0x0001F2, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_IsSkydiving_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_GetFrontendAnimMontageIdleOverride_ReturnValue_2) == 0x0001F8, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_GetFrontendAnimMontageIdleOverride_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, K2Node_Event_FocusedItem) == 0x000200, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::K2Node_Event_FocusedItem' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, K2Node_Event_EquippedWeapon) == 0x000208, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::K2Node_Event_EquippedWeapon' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, K2Node_Event_CurrentParachute) == 0x000210, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::K2Node_Event_CurrentParachute' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_Montage_Play_ReturnValue_1) == 0x000218, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_Montage_Play_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, K2Node_DynamicCast_AsAthena_Pickaxe_Item_Definition) == 0x000220, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::K2Node_DynamicCast_AsAthena_Pickaxe_Item_Definition' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, K2Node_DynamicCast_bSuccess_7) == 0x000228, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_Montage_IsPlaying_ReturnValue) == 0x000229, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_Montage_IsPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_GetFrontendAnimMontageIdleOverride_ReturnValue_3) == 0x000230, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_GetFrontendAnimMontageIdleOverride_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_IsValid_ReturnValue_11) == 0x000238, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000239, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_BooleanOR_ReturnValue_4) == 0x00023A, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_BooleanOR_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_Montage_Play_ReturnValue_2) == 0x00023C, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_Montage_Play_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, Temp_bool_IsClosed_Variable) == 0x000240, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_BooleanOR_ReturnValue_5) == 0x000241, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_BooleanOR_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, K2Node_CustomEvent_Pawn_1) == 0x000248, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::K2Node_CustomEvent_Pawn_1' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, K2Node_CustomEvent_Part_1) == 0x000250, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::K2Node_CustomEvent_Part_1' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, K2Node_CustomEvent_MeshPart_1) == 0x000258, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::K2Node_CustomEvent_MeshPart_1' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, K2Node_CustomEvent_PartType_1) == 0x000260, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::K2Node_CustomEvent_PartType_1' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_IsValid_ReturnValue_12) == 0x000261, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_IsValid_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x000268, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_Montage_Play_InTimeToStartMontageAt_ImplicitCast) == 0x000270, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_Montage_Play_InTimeToStartMontageAt_ImplicitCast' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_Montage_Play_InTimeToStartMontageAt_ImplicitCast_1) == 0x000274, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_Montage_Play_InTimeToStartMontageAt_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_Montage_Play_InPlayRate_ImplicitCast) == 0x000278, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_Montage_Play_InPlayRate_ImplicitCast' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena, CallFunc_Montage_Play_InPlayRate_ImplicitCast_1) == 0x00027C, "Member 'MenuScreen_Athena_C_ExecuteUbergraph_MenuScreen_Athena::CallFunc_Montage_Play_InPlayRate_ImplicitCast_1' has a wrong offset!");

struct MenuScreen_Athena_C_HidePropsForBlend final
{
public:
	class UAnimMontage*                           NewMontage;
	float                                         CallFunc_GetDefaultBlendOutTime_ReturnValue;
	bool                                          CallFunc_ShouldHidePropsDuringBlend_ReturnValue;
	uint8                                         Pad_D[0x3];
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_29[0x7];
	class UAnimMontage*                           CallFunc_GetFrontendAnimMontageIdleOverride_ReturnValue;
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_3A[0x6];
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(MenuScreen_Athena_C_HidePropsForBlend) == 0x000008, "Wrong alignment on MenuScreen_Athena_C_HidePropsForBlend");
static_assert(sizeof(MenuScreen_Athena_C_HidePropsForBlend) == 0x000048, "Wrong size on MenuScreen_Athena_C_HidePropsForBlend");
static_assert(offsetof(MenuScreen_Athena_C_HidePropsForBlend, NewMontage) == 0x000000, "Member 'MenuScreen_Athena_C_HidePropsForBlend::NewMontage' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_HidePropsForBlend, CallFunc_GetDefaultBlendOutTime_ReturnValue) == 0x000008, "Member 'MenuScreen_Athena_C_HidePropsForBlend::CallFunc_GetDefaultBlendOutTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_HidePropsForBlend, CallFunc_ShouldHidePropsDuringBlend_ReturnValue) == 0x00000C, "Member 'MenuScreen_Athena_C_HidePropsForBlend::CallFunc_ShouldHidePropsDuringBlend_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_HidePropsForBlend, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000010, "Member 'MenuScreen_Athena_C_HidePropsForBlend::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_HidePropsForBlend, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000018, "Member 'MenuScreen_Athena_C_HidePropsForBlend::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_HidePropsForBlend, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000020, "Member 'MenuScreen_Athena_C_HidePropsForBlend::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_HidePropsForBlend, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'MenuScreen_Athena_C_HidePropsForBlend::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_HidePropsForBlend, CallFunc_GetFrontendAnimMontageIdleOverride_ReturnValue) == 0x000030, "Member 'MenuScreen_Athena_C_HidePropsForBlend::CallFunc_GetFrontendAnimMontageIdleOverride_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_HidePropsForBlend, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000038, "Member 'MenuScreen_Athena_C_HidePropsForBlend::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_HidePropsForBlend, CallFunc_IsValid_ReturnValue) == 0x000039, "Member 'MenuScreen_Athena_C_HidePropsForBlend::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_HidePropsForBlend, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000040, "Member 'MenuScreen_Athena_C_HidePropsForBlend::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct MenuScreen_Athena_C_OnBodyPart final
{
public:
	class AFortPlayerPawn*                        Pawn;
	class UCustomCharacterPart*                   Part;
	class USkeletalMeshComponent*                 MeshPart;
	EFortCustomPartType                           PartType;
};
static_assert(alignof(MenuScreen_Athena_C_OnBodyPart) == 0x000008, "Wrong alignment on MenuScreen_Athena_C_OnBodyPart");
static_assert(sizeof(MenuScreen_Athena_C_OnBodyPart) == 0x000020, "Wrong size on MenuScreen_Athena_C_OnBodyPart");
static_assert(offsetof(MenuScreen_Athena_C_OnBodyPart, Pawn) == 0x000000, "Member 'MenuScreen_Athena_C_OnBodyPart::Pawn' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_OnBodyPart, Part) == 0x000008, "Member 'MenuScreen_Athena_C_OnBodyPart::Part' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_OnBodyPart, MeshPart) == 0x000010, "Member 'MenuScreen_Athena_C_OnBodyPart::MeshPart' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_OnBodyPart, PartType) == 0x000018, "Member 'MenuScreen_Athena_C_OnBodyPart::PartType' has a wrong offset!");

struct MenuScreen_Athena_C_OnFocusedItemChanged final
{
public:
	const class UFortItemDefinition*              FocusedItem;
	const class AFortWeapon*                      EquippedWeapon;
	const class AFortPlayerParachute*             CurrentParachute;
};
static_assert(alignof(MenuScreen_Athena_C_OnFocusedItemChanged) == 0x000008, "Wrong alignment on MenuScreen_Athena_C_OnFocusedItemChanged");
static_assert(sizeof(MenuScreen_Athena_C_OnFocusedItemChanged) == 0x000018, "Wrong size on MenuScreen_Athena_C_OnFocusedItemChanged");
static_assert(offsetof(MenuScreen_Athena_C_OnFocusedItemChanged, FocusedItem) == 0x000000, "Member 'MenuScreen_Athena_C_OnFocusedItemChanged::FocusedItem' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_OnFocusedItemChanged, EquippedWeapon) == 0x000008, "Member 'MenuScreen_Athena_C_OnFocusedItemChanged::EquippedWeapon' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_OnFocusedItemChanged, CurrentParachute) == 0x000010, "Member 'MenuScreen_Athena_C_OnFocusedItemChanged::CurrentParachute' has a wrong offset!");

struct MenuScreen_Athena_C_OnMontageBlendingOut_Event_HideProps final
{
public:
	class UAnimMontage*                           Montage;
	bool                                          bInterrupted;
};
static_assert(alignof(MenuScreen_Athena_C_OnMontageBlendingOut_Event_HideProps) == 0x000008, "Wrong alignment on MenuScreen_Athena_C_OnMontageBlendingOut_Event_HideProps");
static_assert(sizeof(MenuScreen_Athena_C_OnMontageBlendingOut_Event_HideProps) == 0x000010, "Wrong size on MenuScreen_Athena_C_OnMontageBlendingOut_Event_HideProps");
static_assert(offsetof(MenuScreen_Athena_C_OnMontageBlendingOut_Event_HideProps, Montage) == 0x000000, "Member 'MenuScreen_Athena_C_OnMontageBlendingOut_Event_HideProps::Montage' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_OnMontageBlendingOut_Event_HideProps, bInterrupted) == 0x000008, "Member 'MenuScreen_Athena_C_OnMontageBlendingOut_Event_HideProps::bInterrupted' has a wrong offset!");

struct MenuScreen_Athena_C_OnMontageStarted_Event_HideProps final
{
public:
	class UAnimMontage*                           Montage;
};
static_assert(alignof(MenuScreen_Athena_C_OnMontageStarted_Event_HideProps) == 0x000008, "Wrong alignment on MenuScreen_Athena_C_OnMontageStarted_Event_HideProps");
static_assert(sizeof(MenuScreen_Athena_C_OnMontageStarted_Event_HideProps) == 0x000008, "Wrong size on MenuScreen_Athena_C_OnMontageStarted_Event_HideProps");
static_assert(offsetof(MenuScreen_Athena_C_OnMontageStarted_Event_HideProps, Montage) == 0x000000, "Member 'MenuScreen_Athena_C_OnMontageStarted_Event_HideProps::Montage' has a wrong offset!");

struct MenuScreen_Athena_C_WhenBackpackPart final
{
public:
	class AFortPlayerPawn*                        Pawn;
	class UCustomCharacterPart*                   Part;
	class USkeletalMeshComponent*                 MeshPart;
	EFortCustomPartType                           PartType;
};
static_assert(alignof(MenuScreen_Athena_C_WhenBackpackPart) == 0x000008, "Wrong alignment on MenuScreen_Athena_C_WhenBackpackPart");
static_assert(sizeof(MenuScreen_Athena_C_WhenBackpackPart) == 0x000020, "Wrong size on MenuScreen_Athena_C_WhenBackpackPart");
static_assert(offsetof(MenuScreen_Athena_C_WhenBackpackPart, Pawn) == 0x000000, "Member 'MenuScreen_Athena_C_WhenBackpackPart::Pawn' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_WhenBackpackPart, Part) == 0x000008, "Member 'MenuScreen_Athena_C_WhenBackpackPart::Part' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_WhenBackpackPart, MeshPart) == 0x000010, "Member 'MenuScreen_Athena_C_WhenBackpackPart::MeshPart' has a wrong offset!");
static_assert(offsetof(MenuScreen_Athena_C_WhenBackpackPart, PartType) == 0x000018, "Member 'MenuScreen_Athena_C_WhenBackpackPart::PartType' has a wrong offset!");

}
