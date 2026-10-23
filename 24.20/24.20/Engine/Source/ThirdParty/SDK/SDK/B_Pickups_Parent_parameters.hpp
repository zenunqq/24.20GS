#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	double                                        Temp_real_Variable;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_11[0x7];
	double                                        Temp_real_Variable_1;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	ESubGame                                      CallFunc_GetSubGame_ReturnValue;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	ESubGame                                      CallFunc_GetSubGame_ReturnValue_1;
	uint8                                         Pad_24[0x4];
	double                                        Temp_real_Variable_2;
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;
	double                                        Temp_real_Variable_3;
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;
	class AActor*                                 CallFunc_GetAttachParentActor_ReturnValue;
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;
	class AFortPickup*                            K2Node_DynamicCast_AsFort_Pickup;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_161[0x7];
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	float                                         CallFunc_GetMovementCapsuleHalfHeight_ReturnValue;
	uint8                                         Pad_184[0x4];
	struct FVector                                CallFunc_GetComponentBounds_Origin;
	struct FVector                                CallFunc_GetComponentBounds_BoxExtent;
	float                                         CallFunc_GetComponentBounds_SphereRadius;
	uint8                                         Pad_1BC[0x4];
	double                                        CallFunc_BreakVector_X_1;
	double                                        CallFunc_BreakVector_Y_1;
	double                                        CallFunc_BreakVector_Z_1;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_1E1[0x7];
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;
	float                                         K2Node_Event_DeltaSeconds;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	uint8                                         Pad_2ED[0x3];
	class AFortPawn*                              K2Node_Event_PickupTarget_1;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_2FA[0x6];
	class AController*                            CallFunc_GetController_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_309[0x7];
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_319[0x7];
	class AFortPawn*                              K2Node_Event_PickupTarget;
	class UFortIngredientItemDefinition*          K2Node_DynamicCast_AsFort_Ingredient_Item_Definition;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_331[0x7];
	class UFortResourceItemDefinition*            K2Node_DynamicCast_AsFort_Resource_Item_Definition;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;
	uint8                                         Pad_342[0x2];
	int32                                         Temp_int_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_2;
	uint8                                         Pad_34D[0x3];
	double                                        Temp_real_Variable_4;
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_LastIndex_ReturnValue;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	uint8                                         Pad_365[0x3];
	int32                                         CallFunc_Setup_View_Distances_viewDistanceQuality;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;
	ESubGame                                      Temp_byte_Variable;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	uint8                                         Pad_36F[0x1];
	double                                        K2Node_Select_Default;
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;
	ESubGame                                      CallFunc_GetSubGame_ReturnValue_2;
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;
	uint8                                         Pad_37B[0x5];
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_2;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_3;
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	float                                         K2Node_VariableSet_CustomTimeDilation_ImplicitCast;
	float                                         CallFunc_Delay_Duration_ImplicitCast;
	float                                         CallFunc_Delay_Duration_ImplicitCast_1;
	float                                         CallFunc_Delay_Duration_ImplicitCast_2;
};
static_assert(alignof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent) == 0x000008, "Wrong alignment on B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent");
static_assert(sizeof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent) == 0x0003C8, "Wrong size on B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, EntryPoint) == 0x000000, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, Temp_real_Variable) == 0x000008, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, Temp_real_Variable_1) == 0x000018, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_IsValid_ReturnValue_1) == 0x000020, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_GetSubGame_ReturnValue) == 0x000021, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_GetSubGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, K2Node_SwitchEnum_CmpSuccess) == 0x000022, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_GetSubGame_ReturnValue_1) == 0x000023, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_GetSubGame_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, Temp_real_Variable_2) == 0x000028, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::Temp_real_Variable_2' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000030, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000048, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, Temp_real_Variable_3) == 0x000050, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::Temp_real_Variable_3' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000058, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_GetAttachParentActor_ReturnValue) == 0x000138, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_GetAttachParentActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x000140, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, K2Node_DynamicCast_AsFort_Pickup) == 0x000158, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::K2Node_DynamicCast_AsFort_Pickup' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, K2Node_DynamicCast_bSuccess) == 0x000160, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_BreakVector_X) == 0x000168, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_BreakVector_Y) == 0x000170, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_BreakVector_Z) == 0x000178, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_GetMovementCapsuleHalfHeight_ReturnValue) == 0x000180, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_GetMovementCapsuleHalfHeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_GetComponentBounds_Origin) == 0x000188, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_GetComponentBounds_Origin' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_GetComponentBounds_BoxExtent) == 0x0001A0, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_GetComponentBounds_BoxExtent' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_GetComponentBounds_SphereRadius) == 0x0001B8, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_GetComponentBounds_SphereRadius' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_BreakVector_X_1) == 0x0001C0, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_BreakVector_Y_1) == 0x0001C8, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_BreakVector_Z_1) == 0x0001D0, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0001D8, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0001E0, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0001E8, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_MakeVector_ReturnValue) == 0x0001F0, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000208, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, K2Node_Event_DeltaSeconds) == 0x0002E8, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_IsDedicatedServer_ReturnValue) == 0x0002EC, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, K2Node_Event_PickupTarget_1) == 0x0002F0, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::K2Node_Event_PickupTarget_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_IsLocallyControlled_ReturnValue) == 0x0002F8, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_BooleanAND_ReturnValue) == 0x0002F9, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_GetController_ReturnValue) == 0x000300, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_IsValid_ReturnValue_2) == 0x000308, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000310, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, K2Node_DynamicCast_bSuccess_1) == 0x000318, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, K2Node_Event_PickupTarget) == 0x000320, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::K2Node_Event_PickupTarget' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, K2Node_DynamicCast_AsFort_Ingredient_Item_Definition) == 0x000328, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::K2Node_DynamicCast_AsFort_Ingredient_Item_Definition' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, K2Node_DynamicCast_bSuccess_2) == 0x000330, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, K2Node_DynamicCast_AsFort_Resource_Item_Definition) == 0x000338, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::K2Node_DynamicCast_AsFort_Resource_Item_Definition' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, K2Node_DynamicCast_bSuccess_3) == 0x000340, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x000341, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, Temp_int_Variable) == 0x000344, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_Add_IntInt_ReturnValue) == 0x000348, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_IsDedicatedServer_ReturnValue_2) == 0x00034C, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_IsDedicatedServer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, Temp_real_Variable_4) == 0x000350, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::Temp_real_Variable_4' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_Array_Get_Item) == 0x000358, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_Array_LastIndex_ReturnValue) == 0x000360, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000364, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_Setup_View_Distances_viewDistanceQuality) == 0x000368, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_Setup_View_Distances_viewDistanceQuality' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00036C, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, Temp_byte_Variable) == 0x00036D, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00036E, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, K2Node_Select_Default) == 0x000370, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, K2Node_SwitchEnum_CmpSuccess_1) == 0x000378, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_GetSubGame_ReturnValue_2) == 0x000379, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_GetSubGame_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, K2Node_SwitchEnum_CmpSuccess_2) == 0x00037A, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_Conv_FloatToVector_ReturnValue) == 0x000380, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x000398, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_Add_DoubleDouble_ReturnValue_2) == 0x0003A0, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_Add_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_Add_DoubleDouble_ReturnValue_3) == 0x0003A8, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_Add_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x0003B0, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, K2Node_VariableSet_CustomTimeDilation_ImplicitCast) == 0x0003B8, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::K2Node_VariableSet_CustomTimeDilation_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_Delay_Duration_ImplicitCast) == 0x0003BC, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_Delay_Duration_ImplicitCast_1) == 0x0003C0, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_Delay_Duration_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent, CallFunc_Delay_Duration_ImplicitCast_2) == 0x0003C4, "Member 'B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent::CallFunc_Delay_Duration_ImplicitCast_2' has a wrong offset!");

struct B_Pickups_Parent_C_GetViewDistanceQuality final
{
public:
	int32                                         ReturnValue;
	bool                                          CallFunc_InEditorOrPIE_ReturnValue;
	uint8                                         Pad_5[0x3];
	class UFortGameUserSettings*                  CallFunc_GetFortGameUserSettings_ReturnValue;
	int32                                         CallFunc_GetViewDistanceQuality_ReturnValue;
	int32                                         CallFunc_GetConsoleVariableIntValue_ReturnValue;
};
static_assert(alignof(B_Pickups_Parent_C_GetViewDistanceQuality) == 0x000008, "Wrong alignment on B_Pickups_Parent_C_GetViewDistanceQuality");
static_assert(sizeof(B_Pickups_Parent_C_GetViewDistanceQuality) == 0x000018, "Wrong size on B_Pickups_Parent_C_GetViewDistanceQuality");
static_assert(offsetof(B_Pickups_Parent_C_GetViewDistanceQuality, ReturnValue) == 0x000000, "Member 'B_Pickups_Parent_C_GetViewDistanceQuality::ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_GetViewDistanceQuality, CallFunc_InEditorOrPIE_ReturnValue) == 0x000004, "Member 'B_Pickups_Parent_C_GetViewDistanceQuality::CallFunc_InEditorOrPIE_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_GetViewDistanceQuality, CallFunc_GetFortGameUserSettings_ReturnValue) == 0x000008, "Member 'B_Pickups_Parent_C_GetViewDistanceQuality::CallFunc_GetFortGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_GetViewDistanceQuality, CallFunc_GetViewDistanceQuality_ReturnValue) == 0x000010, "Member 'B_Pickups_Parent_C_GetViewDistanceQuality::CallFunc_GetViewDistanceQuality_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_GetViewDistanceQuality, CallFunc_GetConsoleVariableIntValue_ReturnValue) == 0x000014, "Member 'B_Pickups_Parent_C_GetViewDistanceQuality::CallFunc_GetConsoleVariableIntValue_ReturnValue' has a wrong offset!");

struct B_Pickups_Parent_C_Mobile_Interation_Icon_Setup final
{
public:
	int32                                         Temp_int_Variable;
	uint8                                         Pad_4[0x4];
	class UMaterialInterface*                     Temp_object_Variable;
	class UMaterialInterface*                     Temp_object_Variable_1;
	class UMaterialInterface*                     Temp_object_Variable_2;
	class UMaterialInterface*                     Temp_object_Variable_3;
	class UMaterialInterface*                     Temp_object_Variable_4;
	class UMaterialInterface*                     K2Node_Select_Default;
};
static_assert(alignof(B_Pickups_Parent_C_Mobile_Interation_Icon_Setup) == 0x000008, "Wrong alignment on B_Pickups_Parent_C_Mobile_Interation_Icon_Setup");
static_assert(sizeof(B_Pickups_Parent_C_Mobile_Interation_Icon_Setup) == 0x000038, "Wrong size on B_Pickups_Parent_C_Mobile_Interation_Icon_Setup");
static_assert(offsetof(B_Pickups_Parent_C_Mobile_Interation_Icon_Setup, Temp_int_Variable) == 0x000000, "Member 'B_Pickups_Parent_C_Mobile_Interation_Icon_Setup::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_Mobile_Interation_Icon_Setup, Temp_object_Variable) == 0x000008, "Member 'B_Pickups_Parent_C_Mobile_Interation_Icon_Setup::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_Mobile_Interation_Icon_Setup, Temp_object_Variable_1) == 0x000010, "Member 'B_Pickups_Parent_C_Mobile_Interation_Icon_Setup::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_Mobile_Interation_Icon_Setup, Temp_object_Variable_2) == 0x000018, "Member 'B_Pickups_Parent_C_Mobile_Interation_Icon_Setup::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_Mobile_Interation_Icon_Setup, Temp_object_Variable_3) == 0x000020, "Member 'B_Pickups_Parent_C_Mobile_Interation_Icon_Setup::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_Mobile_Interation_Icon_Setup, Temp_object_Variable_4) == 0x000028, "Member 'B_Pickups_Parent_C_Mobile_Interation_Icon_Setup::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_Mobile_Interation_Icon_Setup, K2Node_Select_Default) == 0x000030, "Member 'B_Pickups_Parent_C_Mobile_Interation_Icon_Setup::K2Node_Select_Default' has a wrong offset!");

struct B_Pickups_Parent_C_OnAboutToEnterBackpack final
{
public:
	class AFortPawn*                              PickupTarget;
};
static_assert(alignof(B_Pickups_Parent_C_OnAboutToEnterBackpack) == 0x000008, "Wrong alignment on B_Pickups_Parent_C_OnAboutToEnterBackpack");
static_assert(sizeof(B_Pickups_Parent_C_OnAboutToEnterBackpack) == 0x000008, "Wrong size on B_Pickups_Parent_C_OnAboutToEnterBackpack");
static_assert(offsetof(B_Pickups_Parent_C_OnAboutToEnterBackpack, PickupTarget) == 0x000000, "Member 'B_Pickups_Parent_C_OnAboutToEnterBackpack::PickupTarget' has a wrong offset!");

struct B_Pickups_Parent_C_OnPickedUp final
{
public:
	class AFortPawn*                              PickupTarget;
};
static_assert(alignof(B_Pickups_Parent_C_OnPickedUp) == 0x000008, "Wrong alignment on B_Pickups_Parent_C_OnPickedUp");
static_assert(sizeof(B_Pickups_Parent_C_OnPickedUp) == 0x000008, "Wrong size on B_Pickups_Parent_C_OnPickedUp");
static_assert(offsetof(B_Pickups_Parent_C_OnPickedUp, PickupTarget) == 0x000000, "Member 'B_Pickups_Parent_C_OnPickedUp::PickupTarget' has a wrong offset!");

struct B_Pickups_Parent_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;
};
static_assert(alignof(B_Pickups_Parent_C_ReceiveTick) == 0x000004, "Wrong alignment on B_Pickups_Parent_C_ReceiveTick");
static_assert(sizeof(B_Pickups_Parent_C_ReceiveTick) == 0x000004, "Wrong size on B_Pickups_Parent_C_ReceiveTick");
static_assert(offsetof(B_Pickups_Parent_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'B_Pickups_Parent_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

struct B_Pickups_Parent_C_ScaleHologramTimingsForPvP final
{
public:
	double                                        PVP_TimeScale;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	ESubGame                                      CallFunc_GetSubGame_ReturnValue;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_2A[0x6];
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_4;
};
static_assert(alignof(B_Pickups_Parent_C_ScaleHologramTimingsForPvP) == 0x000008, "Wrong alignment on B_Pickups_Parent_C_ScaleHologramTimingsForPvP");
static_assert(sizeof(B_Pickups_Parent_C_ScaleHologramTimingsForPvP) == 0x000038, "Wrong size on B_Pickups_Parent_C_ScaleHologramTimingsForPvP");
static_assert(offsetof(B_Pickups_Parent_C_ScaleHologramTimingsForPvP, PVP_TimeScale) == 0x000000, "Member 'B_Pickups_Parent_C_ScaleHologramTimingsForPvP::PVP_TimeScale' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ScaleHologramTimingsForPvP, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000008, "Member 'B_Pickups_Parent_C_ScaleHologramTimingsForPvP::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ScaleHologramTimingsForPvP, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000010, "Member 'B_Pickups_Parent_C_ScaleHologramTimingsForPvP::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ScaleHologramTimingsForPvP, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x000018, "Member 'B_Pickups_Parent_C_ScaleHologramTimingsForPvP::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ScaleHologramTimingsForPvP, CallFunc_Multiply_DoubleDouble_ReturnValue_3) == 0x000020, "Member 'B_Pickups_Parent_C_ScaleHologramTimingsForPvP::CallFunc_Multiply_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ScaleHologramTimingsForPvP, CallFunc_GetSubGame_ReturnValue) == 0x000028, "Member 'B_Pickups_Parent_C_ScaleHologramTimingsForPvP::CallFunc_GetSubGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ScaleHologramTimingsForPvP, K2Node_SwitchEnum_CmpSuccess) == 0x000029, "Member 'B_Pickups_Parent_C_ScaleHologramTimingsForPvP::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_ScaleHologramTimingsForPvP, CallFunc_Multiply_DoubleDouble_ReturnValue_4) == 0x000030, "Member 'B_Pickups_Parent_C_ScaleHologramTimingsForPvP::CallFunc_Multiply_DoubleDouble_ReturnValue_4' has a wrong offset!");

struct B_Pickups_Parent_C_SetActiveBackgroundParticleSystem final
{
public:
	bool                                          Active;
	bool                                          Reset;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(B_Pickups_Parent_C_SetActiveBackgroundParticleSystem) == 0x000001, "Wrong alignment on B_Pickups_Parent_C_SetActiveBackgroundParticleSystem");
static_assert(sizeof(B_Pickups_Parent_C_SetActiveBackgroundParticleSystem) == 0x000003, "Wrong size on B_Pickups_Parent_C_SetActiveBackgroundParticleSystem");
static_assert(offsetof(B_Pickups_Parent_C_SetActiveBackgroundParticleSystem, Active) == 0x000000, "Member 'B_Pickups_Parent_C_SetActiveBackgroundParticleSystem::Active' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetActiveBackgroundParticleSystem, Reset) == 0x000001, "Member 'B_Pickups_Parent_C_SetActiveBackgroundParticleSystem::Reset' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetActiveBackgroundParticleSystem, CallFunc_IsValid_ReturnValue) == 0x000002, "Member 'B_Pickups_Parent_C_SetActiveBackgroundParticleSystem::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct B_Pickups_Parent_C_SetHiddenBackgroundVisualComponents final
{
public:
	bool                                          Hidden;
};
static_assert(alignof(B_Pickups_Parent_C_SetHiddenBackgroundVisualComponents) == 0x000001, "Wrong alignment on B_Pickups_Parent_C_SetHiddenBackgroundVisualComponents");
static_assert(sizeof(B_Pickups_Parent_C_SetHiddenBackgroundVisualComponents) == 0x000001, "Wrong size on B_Pickups_Parent_C_SetHiddenBackgroundVisualComponents");
static_assert(offsetof(B_Pickups_Parent_C_SetHiddenBackgroundVisualComponents, Hidden) == 0x000000, "Member 'B_Pickups_Parent_C_SetHiddenBackgroundVisualComponents::Hidden' has a wrong offset!");

struct B_Pickups_Parent_C_SetHologramPickedUpParams final
{
public:
	bool                                          Tier_0;
	uint8                                         Pad_1[0x3];
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         Temp_int_Loop_Counter_Variable_1;
	uint8                                         Pad_14[0x4];
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_21[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;
	uint8                                         Pad_32[0x2];
	int32                                         Temp_int_Array_Index_Variable_1;
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item_1;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_41[0x7];
	double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;
	double                                        CallFunc_GetGameTimeInSeconds_ReturnValue_1;
	double                                        CallFunc_Fraction_ReturnValue;
	double                                        CallFunc_Fraction_ReturnValue_1;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	double                                        CallFunc_GetGameTimeInSeconds_ReturnValue_2;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;
	double                                        CallFunc_GetGameTimeInSeconds_ReturnValue_3;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_2;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_3;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_4;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_5;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_6;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_7;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_8;
};
static_assert(alignof(B_Pickups_Parent_C_SetHologramPickedUpParams) == 0x000008, "Wrong alignment on B_Pickups_Parent_C_SetHologramPickedUpParams");
static_assert(sizeof(B_Pickups_Parent_C_SetHologramPickedUpParams) == 0x0000C0, "Wrong size on B_Pickups_Parent_C_SetHologramPickedUpParams");
static_assert(offsetof(B_Pickups_Parent_C_SetHologramPickedUpParams, Tier_0) == 0x000000, "Member 'B_Pickups_Parent_C_SetHologramPickedUpParams::Tier_0' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetHologramPickedUpParams, Temp_int_Array_Index_Variable) == 0x000004, "Member 'B_Pickups_Parent_C_SetHologramPickedUpParams::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetHologramPickedUpParams, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'B_Pickups_Parent_C_SetHologramPickedUpParams::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetHologramPickedUpParams, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'B_Pickups_Parent_C_SetHologramPickedUpParams::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetHologramPickedUpParams, Temp_int_Loop_Counter_Variable_1) == 0x000010, "Member 'B_Pickups_Parent_C_SetHologramPickedUpParams::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetHologramPickedUpParams, CallFunc_Array_Get_Item) == 0x000018, "Member 'B_Pickups_Parent_C_SetHologramPickedUpParams::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetHologramPickedUpParams, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'B_Pickups_Parent_C_SetHologramPickedUpParams::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetHologramPickedUpParams, CallFunc_Add_IntInt_ReturnValue_1) == 0x000024, "Member 'B_Pickups_Parent_C_SetHologramPickedUpParams::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetHologramPickedUpParams, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'B_Pickups_Parent_C_SetHologramPickedUpParams::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetHologramPickedUpParams, CallFunc_Array_Length_ReturnValue_1) == 0x00002C, "Member 'B_Pickups_Parent_C_SetHologramPickedUpParams::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetHologramPickedUpParams, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'B_Pickups_Parent_C_SetHologramPickedUpParams::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetHologramPickedUpParams, CallFunc_Less_IntInt_ReturnValue_1) == 0x000031, "Member 'B_Pickups_Parent_C_SetHologramPickedUpParams::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetHologramPickedUpParams, Temp_int_Array_Index_Variable_1) == 0x000034, "Member 'B_Pickups_Parent_C_SetHologramPickedUpParams::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetHologramPickedUpParams, CallFunc_Array_Get_Item_1) == 0x000038, "Member 'B_Pickups_Parent_C_SetHologramPickedUpParams::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetHologramPickedUpParams, CallFunc_IsValid_ReturnValue_1) == 0x000040, "Member 'B_Pickups_Parent_C_SetHologramPickedUpParams::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetHologramPickedUpParams, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x000048, "Member 'B_Pickups_Parent_C_SetHologramPickedUpParams::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetHologramPickedUpParams, CallFunc_GetGameTimeInSeconds_ReturnValue_1) == 0x000050, "Member 'B_Pickups_Parent_C_SetHologramPickedUpParams::CallFunc_GetGameTimeInSeconds_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetHologramPickedUpParams, CallFunc_Fraction_ReturnValue) == 0x000058, "Member 'B_Pickups_Parent_C_SetHologramPickedUpParams::CallFunc_Fraction_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetHologramPickedUpParams, CallFunc_Fraction_ReturnValue_1) == 0x000060, "Member 'B_Pickups_Parent_C_SetHologramPickedUpParams::CallFunc_Fraction_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetHologramPickedUpParams, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000068, "Member 'B_Pickups_Parent_C_SetHologramPickedUpParams::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetHologramPickedUpParams, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000070, "Member 'B_Pickups_Parent_C_SetHologramPickedUpParams::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetHologramPickedUpParams, CallFunc_GetGameTimeInSeconds_ReturnValue_2) == 0x000078, "Member 'B_Pickups_Parent_C_SetHologramPickedUpParams::CallFunc_GetGameTimeInSeconds_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetHologramPickedUpParams, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000080, "Member 'B_Pickups_Parent_C_SetHologramPickedUpParams::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetHologramPickedUpParams, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x000088, "Member 'B_Pickups_Parent_C_SetHologramPickedUpParams::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetHologramPickedUpParams, CallFunc_GetGameTimeInSeconds_ReturnValue_3) == 0x000090, "Member 'B_Pickups_Parent_C_SetHologramPickedUpParams::CallFunc_GetGameTimeInSeconds_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetHologramPickedUpParams, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000098, "Member 'B_Pickups_Parent_C_SetHologramPickedUpParams::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetHologramPickedUpParams, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x00009C, "Member 'B_Pickups_Parent_C_SetHologramPickedUpParams::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetHologramPickedUpParams, CallFunc_SetScalarParameterValue_Value_ImplicitCast_2) == 0x0000A0, "Member 'B_Pickups_Parent_C_SetHologramPickedUpParams::CallFunc_SetScalarParameterValue_Value_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetHologramPickedUpParams, CallFunc_SetScalarParameterValue_Value_ImplicitCast_3) == 0x0000A4, "Member 'B_Pickups_Parent_C_SetHologramPickedUpParams::CallFunc_SetScalarParameterValue_Value_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetHologramPickedUpParams, CallFunc_SetScalarParameterValue_Value_ImplicitCast_4) == 0x0000A8, "Member 'B_Pickups_Parent_C_SetHologramPickedUpParams::CallFunc_SetScalarParameterValue_Value_ImplicitCast_4' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetHologramPickedUpParams, CallFunc_SetScalarParameterValue_Value_ImplicitCast_5) == 0x0000AC, "Member 'B_Pickups_Parent_C_SetHologramPickedUpParams::CallFunc_SetScalarParameterValue_Value_ImplicitCast_5' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetHologramPickedUpParams, CallFunc_SetScalarParameterValue_Value_ImplicitCast_6) == 0x0000B0, "Member 'B_Pickups_Parent_C_SetHologramPickedUpParams::CallFunc_SetScalarParameterValue_Value_ImplicitCast_6' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetHologramPickedUpParams, CallFunc_SetScalarParameterValue_Value_ImplicitCast_7) == 0x0000B4, "Member 'B_Pickups_Parent_C_SetHologramPickedUpParams::CallFunc_SetScalarParameterValue_Value_ImplicitCast_7' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetHologramPickedUpParams, CallFunc_SetScalarParameterValue_Value_ImplicitCast_8) == 0x0000B8, "Member 'B_Pickups_Parent_C_SetHologramPickedUpParams::CallFunc_SetScalarParameterValue_Value_ImplicitCast_8' has a wrong offset!");

struct B_Pickups_Parent_C_Setup_View_Distances final
{
public:
	int32                                         viewDistanceQuality;
	int32                                         l_viewQuality;
	int32                                         CallFunc_GetViewDistanceQuality_ReturnValue;
};
static_assert(alignof(B_Pickups_Parent_C_Setup_View_Distances) == 0x000004, "Wrong alignment on B_Pickups_Parent_C_Setup_View_Distances");
static_assert(sizeof(B_Pickups_Parent_C_Setup_View_Distances) == 0x00000C, "Wrong size on B_Pickups_Parent_C_Setup_View_Distances");
static_assert(offsetof(B_Pickups_Parent_C_Setup_View_Distances, viewDistanceQuality) == 0x000000, "Member 'B_Pickups_Parent_C_Setup_View_Distances::viewDistanceQuality' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_Setup_View_Distances, l_viewQuality) == 0x000004, "Member 'B_Pickups_Parent_C_Setup_View_Distances::l_viewQuality' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_Setup_View_Distances, CallFunc_GetViewDistanceQuality_ReturnValue) == 0x000008, "Member 'B_Pickups_Parent_C_Setup_View_Distances::CallFunc_GetViewDistanceQuality_ReturnValue' has a wrong offset!");

struct B_Pickups_Parent_C_SetVisibleMobileInteractIcon final
{
public:
	bool                                          Visible;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_3[0x5];
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_11[0x7];
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;
	class UStaticMeshComponent*                   CallFunc_AddComponent_ReturnValue;
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;
};
static_assert(alignof(B_Pickups_Parent_C_SetVisibleMobileInteractIcon) == 0x000010, "Wrong alignment on B_Pickups_Parent_C_SetVisibleMobileInteractIcon");
static_assert(sizeof(B_Pickups_Parent_C_SetVisibleMobileInteractIcon) == 0x0000A0, "Wrong size on B_Pickups_Parent_C_SetVisibleMobileInteractIcon");
static_assert(offsetof(B_Pickups_Parent_C_SetVisibleMobileInteractIcon, Visible) == 0x000000, "Member 'B_Pickups_Parent_C_SetVisibleMobileInteractIcon::Visible' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetVisibleMobileInteractIcon, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'B_Pickups_Parent_C_SetVisibleMobileInteractIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetVisibleMobileInteractIcon, CallFunc_IsValid_ReturnValue_1) == 0x000002, "Member 'B_Pickups_Parent_C_SetVisibleMobileInteractIcon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetVisibleMobileInteractIcon, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000008, "Member 'B_Pickups_Parent_C_SetVisibleMobileInteractIcon::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetVisibleMobileInteractIcon, CallFunc_IsValid_ReturnValue_2) == 0x000010, "Member 'B_Pickups_Parent_C_SetVisibleMobileInteractIcon::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetVisibleMobileInteractIcon, CallFunc_MakeRotator_ReturnValue) == 0x000018, "Member 'B_Pickups_Parent_C_SetVisibleMobileInteractIcon::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetVisibleMobileInteractIcon, CallFunc_MakeTransform_ReturnValue) == 0x000030, "Member 'B_Pickups_Parent_C_SetVisibleMobileInteractIcon::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetVisibleMobileInteractIcon, CallFunc_AddComponent_ReturnValue) == 0x000090, "Member 'B_Pickups_Parent_C_SetVisibleMobileInteractIcon::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SetVisibleMobileInteractIcon, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x000098, "Member 'B_Pickups_Parent_C_SetVisibleMobileInteractIcon::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");

struct B_Pickups_Parent_C_SpawnPickedUpTrailPS final
{
public:
	class UParticleSystemComponent*               TrailPS;
	struct FVector                                CallFunc_Conv_LinearColorToVector_ReturnValue;
	double                                        CallFunc_Array_Get_Item;
	double                                        CallFunc_Array_Get_Item_1;
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast;
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast_1;
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast_2;
};
static_assert(alignof(B_Pickups_Parent_C_SpawnPickedUpTrailPS) == 0x000008, "Wrong alignment on B_Pickups_Parent_C_SpawnPickedUpTrailPS");
static_assert(sizeof(B_Pickups_Parent_C_SpawnPickedUpTrailPS) == 0x000048, "Wrong size on B_Pickups_Parent_C_SpawnPickedUpTrailPS");
static_assert(offsetof(B_Pickups_Parent_C_SpawnPickedUpTrailPS, TrailPS) == 0x000000, "Member 'B_Pickups_Parent_C_SpawnPickedUpTrailPS::TrailPS' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SpawnPickedUpTrailPS, CallFunc_Conv_LinearColorToVector_ReturnValue) == 0x000008, "Member 'B_Pickups_Parent_C_SpawnPickedUpTrailPS::CallFunc_Conv_LinearColorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SpawnPickedUpTrailPS, CallFunc_Array_Get_Item) == 0x000020, "Member 'B_Pickups_Parent_C_SpawnPickedUpTrailPS::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SpawnPickedUpTrailPS, CallFunc_Array_Get_Item_1) == 0x000028, "Member 'B_Pickups_Parent_C_SpawnPickedUpTrailPS::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SpawnPickedUpTrailPS, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x000030, "Member 'B_Pickups_Parent_C_SpawnPickedUpTrailPS::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SpawnPickedUpTrailPS, CallFunc_SetFloatParameter_Param_ImplicitCast) == 0x000038, "Member 'B_Pickups_Parent_C_SpawnPickedUpTrailPS::CallFunc_SetFloatParameter_Param_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SpawnPickedUpTrailPS, CallFunc_SetFloatParameter_Param_ImplicitCast_1) == 0x00003C, "Member 'B_Pickups_Parent_C_SpawnPickedUpTrailPS::CallFunc_SetFloatParameter_Param_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_SpawnPickedUpTrailPS, CallFunc_SetFloatParameter_Param_ImplicitCast_2) == 0x000040, "Member 'B_Pickups_Parent_C_SpawnPickedUpTrailPS::CallFunc_SetFloatParameter_Param_ImplicitCast_2' has a wrong offset!");

struct B_Pickups_Parent_C_UserConstructionScript final
{
public:
	int32                                         l_viewQuality;
	uint8                                         Pad_4[0x4];
	class UPrimitiveComponent*                    CallFunc_SetupPickupMesh_ReturnValue;
	struct FVector                                CallFunc_GetComponentBounds_Origin;
	struct FVector                                CallFunc_GetComponentBounds_BoxExtent;
	float                                         CallFunc_GetComponentBounds_SphereRadius;
	uint8                                         Pad_44[0x4];
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	double                                        K2Node_VariableSet_Component_Radius_ImplicitCast;
};
static_assert(alignof(B_Pickups_Parent_C_UserConstructionScript) == 0x000008, "Wrong alignment on B_Pickups_Parent_C_UserConstructionScript");
static_assert(sizeof(B_Pickups_Parent_C_UserConstructionScript) == 0x000060, "Wrong size on B_Pickups_Parent_C_UserConstructionScript");
static_assert(offsetof(B_Pickups_Parent_C_UserConstructionScript, l_viewQuality) == 0x000000, "Member 'B_Pickups_Parent_C_UserConstructionScript::l_viewQuality' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_UserConstructionScript, CallFunc_SetupPickupMesh_ReturnValue) == 0x000008, "Member 'B_Pickups_Parent_C_UserConstructionScript::CallFunc_SetupPickupMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_UserConstructionScript, CallFunc_GetComponentBounds_Origin) == 0x000010, "Member 'B_Pickups_Parent_C_UserConstructionScript::CallFunc_GetComponentBounds_Origin' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_UserConstructionScript, CallFunc_GetComponentBounds_BoxExtent) == 0x000028, "Member 'B_Pickups_Parent_C_UserConstructionScript::CallFunc_GetComponentBounds_BoxExtent' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_UserConstructionScript, CallFunc_GetComponentBounds_SphereRadius) == 0x000040, "Member 'B_Pickups_Parent_C_UserConstructionScript::CallFunc_GetComponentBounds_SphereRadius' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_UserConstructionScript, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000048, "Member 'B_Pickups_Parent_C_UserConstructionScript::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_UserConstructionScript, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000050, "Member 'B_Pickups_Parent_C_UserConstructionScript::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Pickups_Parent_C_UserConstructionScript, K2Node_VariableSet_Component_Radius_ImplicitCast) == 0x000058, "Member 'B_Pickups_Parent_C_UserConstructionScript::K2Node_VariableSet_Component_Radius_ImplicitCast' has a wrong offset!");

}
