#pragma once

#include "Basic.hpp"

#include "PhysicsCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	TArray<class AActor*>                         Temp_object_Variable;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;
	bool                                          CallFunc_LineTraceSingle_ReturnValue;
	uint8                                         Pad_159[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	EPhysicalSurface                              CallFunc_GetFortPhysicalSurface_ReturnValue;
	uint8                                         Pad_169[0x7];
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_179[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	bool                                          K2Node_Event_bWasCancelled;
	uint8                                         Pad_191[0x7];
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_K2_IsTimerActiveHandle_ReturnValue;
	uint8                                         Pad_1AA[0x6];
	TArray<class AActor*>                         Temp_object_Variable_1;
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit_1;
	bool                                          CallFunc_LineTraceSingle_ReturnValue_1;
	EPhysicalSurface                              CallFunc_GetFortPhysicalSurface_ReturnValue_1;
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;
};
static_assert(alignof(GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer) == 0x000008, "Wrong alignment on GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer");
static_assert(sizeof(GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer) == 0x0002A8, "Wrong size on GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer");
static_assert(offsetof(GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer, EntryPoint) == 0x000000, "Member 'GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer, Temp_object_Variable) == 0x000008, "Member 'GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000030, "Member 'GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000048, "Member 'GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x000060, "Member 'GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer, CallFunc_LineTraceSingle_OutHit) == 0x000078, "Member 'GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer, CallFunc_LineTraceSingle_ReturnValue) == 0x000158, "Member 'GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer, K2Node_CreateDelegate_OutputDelegate) == 0x00015C, "Member 'GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer, CallFunc_GetFortPhysicalSurface_ReturnValue) == 0x000168, "Member 'GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer::CallFunc_GetFortPhysicalSurface_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000170, "Member 'GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer, K2Node_SwitchEnum_CmpSuccess) == 0x000178, "Member 'GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer, K2Node_CreateDelegate_OutputDelegate_1) == 0x00017C, "Member 'GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000188, "Member 'GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer, K2Node_Event_bWasCancelled) == 0x000190, "Member 'GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000198, "Member 'GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x0001A0, "Member 'GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer, K2Node_DynamicCast_bSuccess) == 0x0001A8, "Member 'GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer, CallFunc_K2_IsTimerActiveHandle_ReturnValue) == 0x0001A9, "Member 'GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer::CallFunc_K2_IsTimerActiveHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer, Temp_object_Variable_1) == 0x0001B0, "Member 'GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer, CallFunc_LineTraceSingle_OutHit_1) == 0x0001C0, "Member 'GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer::CallFunc_LineTraceSingle_OutHit_1' has a wrong offset!");
static_assert(offsetof(GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer, CallFunc_LineTraceSingle_ReturnValue_1) == 0x0002A0, "Member 'GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer::CallFunc_LineTraceSingle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer, CallFunc_GetFortPhysicalSurface_ReturnValue_1) == 0x0002A1, "Member 'GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer::CallFunc_GetFortPhysicalSurface_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer, K2Node_SwitchEnum_CmpSuccess_1) == 0x0002A2, "Member 'GA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");

struct GA_SurfaceChange_Ice_IceCheckOnTimer_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;
};
static_assert(alignof(GA_SurfaceChange_Ice_IceCheckOnTimer_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_SurfaceChange_Ice_IceCheckOnTimer_C_K2_OnEndAbility");
static_assert(sizeof(GA_SurfaceChange_Ice_IceCheckOnTimer_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_SurfaceChange_Ice_IceCheckOnTimer_C_K2_OnEndAbility");
static_assert(offsetof(GA_SurfaceChange_Ice_IceCheckOnTimer_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_SurfaceChange_Ice_IceCheckOnTimer_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}
