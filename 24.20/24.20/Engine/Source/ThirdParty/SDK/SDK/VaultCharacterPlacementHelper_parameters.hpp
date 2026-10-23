#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct VaultCharacterPlacementHelper_C_UpdatePosition_For_Camera final
{
public:
	EFrontEndCamera                               FrontEndCamera;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	uint8                                         Pad_4[0x4];
	TArray<EFrontEndCamera>                       K2Node_MakeArray_Array;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_Array_Contains_ReturnValue;
	uint8                                         Pad_1A[0x6];
	struct FVector                                CallFunc_BreakTransform_Location;
	struct FRotator                               CallFunc_BreakTransform_Rotation;
	struct FVector                                CallFunc_BreakTransform_Scale;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;
	uint8                                         Pad_98[0x8];
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;
	struct FHitResult                             CallFunc_K2_SetActorTransform_SweepHitResult;
	bool                                          CallFunc_K2_SetActorTransform_ReturnValue;
};
static_assert(alignof(VaultCharacterPlacementHelper_C_UpdatePosition_For_Camera) == 0x000010, "Wrong alignment on VaultCharacterPlacementHelper_C_UpdatePosition_For_Camera");
static_assert(sizeof(VaultCharacterPlacementHelper_C_UpdatePosition_For_Camera) == 0x0001F0, "Wrong size on VaultCharacterPlacementHelper_C_UpdatePosition_For_Camera");
static_assert(offsetof(VaultCharacterPlacementHelper_C_UpdatePosition_For_Camera, FrontEndCamera) == 0x000000, "Member 'VaultCharacterPlacementHelper_C_UpdatePosition_For_Camera::FrontEndCamera' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_UpdatePosition_For_Camera, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000001, "Member 'VaultCharacterPlacementHelper_C_UpdatePosition_For_Camera::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_UpdatePosition_For_Camera, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000002, "Member 'VaultCharacterPlacementHelper_C_UpdatePosition_For_Camera::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_UpdatePosition_For_Camera, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000003, "Member 'VaultCharacterPlacementHelper_C_UpdatePosition_For_Camera::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_UpdatePosition_For_Camera, K2Node_MakeArray_Array) == 0x000008, "Member 'VaultCharacterPlacementHelper_C_UpdatePosition_For_Camera::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_UpdatePosition_For_Camera, CallFunc_Not_PreBool_ReturnValue) == 0x000018, "Member 'VaultCharacterPlacementHelper_C_UpdatePosition_For_Camera::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_UpdatePosition_For_Camera, CallFunc_Array_Contains_ReturnValue) == 0x000019, "Member 'VaultCharacterPlacementHelper_C_UpdatePosition_For_Camera::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_UpdatePosition_For_Camera, CallFunc_BreakTransform_Location) == 0x000020, "Member 'VaultCharacterPlacementHelper_C_UpdatePosition_For_Camera::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_UpdatePosition_For_Camera, CallFunc_BreakTransform_Rotation) == 0x000038, "Member 'VaultCharacterPlacementHelper_C_UpdatePosition_For_Camera::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_UpdatePosition_For_Camera, CallFunc_BreakTransform_Scale) == 0x000050, "Member 'VaultCharacterPlacementHelper_C_UpdatePosition_For_Camera::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_UpdatePosition_For_Camera, CallFunc_Add_VectorVector_ReturnValue) == 0x000068, "Member 'VaultCharacterPlacementHelper_C_UpdatePosition_For_Camera::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_UpdatePosition_For_Camera, CallFunc_ComposeRotators_ReturnValue) == 0x000080, "Member 'VaultCharacterPlacementHelper_C_UpdatePosition_For_Camera::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_UpdatePosition_For_Camera, CallFunc_MakeTransform_ReturnValue) == 0x0000A0, "Member 'VaultCharacterPlacementHelper_C_UpdatePosition_For_Camera::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_UpdatePosition_For_Camera, CallFunc_K2_SetActorTransform_SweepHitResult) == 0x000100, "Member 'VaultCharacterPlacementHelper_C_UpdatePosition_For_Camera::CallFunc_K2_SetActorTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_UpdatePosition_For_Camera, CallFunc_K2_SetActorTransform_ReturnValue) == 0x0001E0, "Member 'VaultCharacterPlacementHelper_C_UpdatePosition_For_Camera::CallFunc_K2_SetActorTransform_ReturnValue' has a wrong offset!");

struct VaultCharacterPlacementHelper_C_SubGameChanged_Event_0 final
{
public:
	ESubGame                                      SubGame;
};
static_assert(alignof(VaultCharacterPlacementHelper_C_SubGameChanged_Event_0) == 0x000001, "Wrong alignment on VaultCharacterPlacementHelper_C_SubGameChanged_Event_0");
static_assert(sizeof(VaultCharacterPlacementHelper_C_SubGameChanged_Event_0) == 0x000001, "Wrong size on VaultCharacterPlacementHelper_C_SubGameChanged_Event_0");
static_assert(offsetof(VaultCharacterPlacementHelper_C_SubGameChanged_Event_0, SubGame) == 0x000000, "Member 'VaultCharacterPlacementHelper_C_SubGameChanged_Event_0::SubGame' has a wrong offset!");

struct VaultCharacterPlacementHelper_C_UserConstructionScript final
{
public:
	struct FTransform                             CallFunc_GetTransform_ReturnValue;
};
static_assert(alignof(VaultCharacterPlacementHelper_C_UserConstructionScript) == 0x000010, "Wrong alignment on VaultCharacterPlacementHelper_C_UserConstructionScript");
static_assert(sizeof(VaultCharacterPlacementHelper_C_UserConstructionScript) == 0x000060, "Wrong size on VaultCharacterPlacementHelper_C_UserConstructionScript");
static_assert(offsetof(VaultCharacterPlacementHelper_C_UserConstructionScript, CallFunc_GetTransform_ReturnValue) == 0x000000, "Member 'VaultCharacterPlacementHelper_C_UserConstructionScript::CallFunc_GetTransform_ReturnValue' has a wrong offset!");

struct VaultCharacterPlacementHelper_C_OnFrontEndCameraChanged final
{
public:
	EFrontEndCamera                               NewCamera;
	EFrontEndCamera                               OldCamera;
};
static_assert(alignof(VaultCharacterPlacementHelper_C_OnFrontEndCameraChanged) == 0x000001, "Wrong alignment on VaultCharacterPlacementHelper_C_OnFrontEndCameraChanged");
static_assert(sizeof(VaultCharacterPlacementHelper_C_OnFrontEndCameraChanged) == 0x000002, "Wrong size on VaultCharacterPlacementHelper_C_OnFrontEndCameraChanged");
static_assert(offsetof(VaultCharacterPlacementHelper_C_OnFrontEndCameraChanged, NewCamera) == 0x000000, "Member 'VaultCharacterPlacementHelper_C_OnFrontEndCameraChanged::NewCamera' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_OnFrontEndCameraChanged, OldCamera) == 0x000001, "Member 'VaultCharacterPlacementHelper_C_OnFrontEndCameraChanged::OldCamera' has a wrong offset!");

struct VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;
	ESubGame                                      CallFunc_GetSubGame_ReturnValue;
	uint8                                         Pad_11[0x3];
	TDelegate<void(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera)> K2Node_CreateDelegate_OutputDelegate;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_21[0x7];
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue_1;
	ESubGame                                      CallFunc_GetSubGame_ReturnValue_1;
	bool                                          CallFunc_IsInZone_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	ESubGame                                      K2Node_CustomEvent_SubGame;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_35[0x3];
	struct FHitResult                             CallFunc_K2_SetActorTransform_SweepHitResult;
	bool                                          CallFunc_K2_SetActorTransform_ReturnValue;
	uint8                                         Pad_119[0x7];
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue_2;
	EFrontEndCamera                               K2Node_CustomEvent_NewCamera;
	EFrontEndCamera                               K2Node_CustomEvent_OldCamera;
	uint8                                         Pad_12A[0x2];
	TDelegate<void(ESubGame SubGame)>             K2Node_CreateDelegate_OutputDelegate_1;
	uint8                                         Pad_138[0x8];
	struct FTransform                             CallFunc_GetTransform_ReturnValue;
};
static_assert(alignof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper) == 0x000010, "Wrong alignment on VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper");
static_assert(sizeof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper) == 0x0001A0, "Wrong size on VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, EntryPoint) == 0x000000, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::EntryPoint' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, CallFunc_GetSubGame_ReturnValue) == 0x000010, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::CallFunc_GetSubGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, K2Node_SwitchEnum_CmpSuccess) == 0x000020, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, CallFunc_GetContext_ReturnValue_1) == 0x000028, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::CallFunc_GetContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, CallFunc_GetSubGame_ReturnValue_1) == 0x000030, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::CallFunc_GetSubGame_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, CallFunc_IsInZone_ReturnValue) == 0x000031, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::CallFunc_IsInZone_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000032, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, K2Node_CustomEvent_SubGame) == 0x000033, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::K2Node_CustomEvent_SubGame' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, CallFunc_BooleanAND_ReturnValue) == 0x000034, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, CallFunc_K2_SetActorTransform_SweepHitResult) == 0x000038, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::CallFunc_K2_SetActorTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, CallFunc_K2_SetActorTransform_ReturnValue) == 0x000118, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::CallFunc_K2_SetActorTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, CallFunc_GetContext_ReturnValue_2) == 0x000120, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::CallFunc_GetContext_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, K2Node_CustomEvent_NewCamera) == 0x000128, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::K2Node_CustomEvent_NewCamera' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, K2Node_CustomEvent_OldCamera) == 0x000129, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::K2Node_CustomEvent_OldCamera' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, K2Node_CreateDelegate_OutputDelegate_1) == 0x00012C, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, CallFunc_GetTransform_ReturnValue) == 0x000140, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::CallFunc_GetTransform_ReturnValue' has a wrong offset!");

}
