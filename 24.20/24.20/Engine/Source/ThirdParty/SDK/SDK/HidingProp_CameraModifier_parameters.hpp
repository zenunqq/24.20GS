#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct HidingProp_CameraModifier_C_BlueprintModifyCamera final
{
public:
	float                                         DeltaTime;
	uint8                                         Pad_4[0x4];
	struct FVector                                ViewLocation;
	struct FRotator                               ViewRotation;
	float                                         FOV;
	uint8                                         Pad_3C[0x4];
	struct FVector                                NewViewLocation;
	struct FRotator                               NewViewRotation;
	float                                         NewFOV;
	uint8                                         Pad_74[0x4];
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	double                                        CallFunc_BreakVector_X_1;
	double                                        CallFunc_BreakVector_Y_1;
	double                                        CallFunc_BreakVector_Z_1;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	double                                        CallFunc_FClamp_ReturnValue;
	struct FVector                                CallFunc_MakeVector_ReturnValue;
};
static_assert(alignof(HidingProp_CameraModifier_C_BlueprintModifyCamera) == 0x000008, "Wrong alignment on HidingProp_CameraModifier_C_BlueprintModifyCamera");
static_assert(sizeof(HidingProp_CameraModifier_C_BlueprintModifyCamera) == 0x0000E8, "Wrong size on HidingProp_CameraModifier_C_BlueprintModifyCamera");
static_assert(offsetof(HidingProp_CameraModifier_C_BlueprintModifyCamera, DeltaTime) == 0x000000, "Member 'HidingProp_CameraModifier_C_BlueprintModifyCamera::DeltaTime' has a wrong offset!");
static_assert(offsetof(HidingProp_CameraModifier_C_BlueprintModifyCamera, ViewLocation) == 0x000008, "Member 'HidingProp_CameraModifier_C_BlueprintModifyCamera::ViewLocation' has a wrong offset!");
static_assert(offsetof(HidingProp_CameraModifier_C_BlueprintModifyCamera, ViewRotation) == 0x000020, "Member 'HidingProp_CameraModifier_C_BlueprintModifyCamera::ViewRotation' has a wrong offset!");
static_assert(offsetof(HidingProp_CameraModifier_C_BlueprintModifyCamera, FOV) == 0x000038, "Member 'HidingProp_CameraModifier_C_BlueprintModifyCamera::FOV' has a wrong offset!");
static_assert(offsetof(HidingProp_CameraModifier_C_BlueprintModifyCamera, NewViewLocation) == 0x000040, "Member 'HidingProp_CameraModifier_C_BlueprintModifyCamera::NewViewLocation' has a wrong offset!");
static_assert(offsetof(HidingProp_CameraModifier_C_BlueprintModifyCamera, NewViewRotation) == 0x000058, "Member 'HidingProp_CameraModifier_C_BlueprintModifyCamera::NewViewRotation' has a wrong offset!");
static_assert(offsetof(HidingProp_CameraModifier_C_BlueprintModifyCamera, NewFOV) == 0x000070, "Member 'HidingProp_CameraModifier_C_BlueprintModifyCamera::NewFOV' has a wrong offset!");
static_assert(offsetof(HidingProp_CameraModifier_C_BlueprintModifyCamera, CallFunc_BreakVector_X) == 0x000078, "Member 'HidingProp_CameraModifier_C_BlueprintModifyCamera::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(HidingProp_CameraModifier_C_BlueprintModifyCamera, CallFunc_BreakVector_Y) == 0x000080, "Member 'HidingProp_CameraModifier_C_BlueprintModifyCamera::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(HidingProp_CameraModifier_C_BlueprintModifyCamera, CallFunc_BreakVector_Z) == 0x000088, "Member 'HidingProp_CameraModifier_C_BlueprintModifyCamera::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(HidingProp_CameraModifier_C_BlueprintModifyCamera, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000090, "Member 'HidingProp_CameraModifier_C_BlueprintModifyCamera::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(HidingProp_CameraModifier_C_BlueprintModifyCamera, CallFunc_BreakVector_X_1) == 0x0000A8, "Member 'HidingProp_CameraModifier_C_BlueprintModifyCamera::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(HidingProp_CameraModifier_C_BlueprintModifyCamera, CallFunc_BreakVector_Y_1) == 0x0000B0, "Member 'HidingProp_CameraModifier_C_BlueprintModifyCamera::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(HidingProp_CameraModifier_C_BlueprintModifyCamera, CallFunc_BreakVector_Z_1) == 0x0000B8, "Member 'HidingProp_CameraModifier_C_BlueprintModifyCamera::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(HidingProp_CameraModifier_C_BlueprintModifyCamera, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0000C0, "Member 'HidingProp_CameraModifier_C_BlueprintModifyCamera::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(HidingProp_CameraModifier_C_BlueprintModifyCamera, CallFunc_FClamp_ReturnValue) == 0x0000C8, "Member 'HidingProp_CameraModifier_C_BlueprintModifyCamera::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(HidingProp_CameraModifier_C_BlueprintModifyCamera, CallFunc_MakeVector_ReturnValue) == 0x0000D0, "Member 'HidingProp_CameraModifier_C_BlueprintModifyCamera::CallFunc_MakeVector_ReturnValue' has a wrong offset!");

}
