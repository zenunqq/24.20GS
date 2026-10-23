#pragma once

#include "Basic.hpp"

#include "SoundLibrary_structs.hpp"

namespace SDK::Params
{

struct B_Athena_PartModifier_Headband_LimaBean_C_ExecuteUbergraph_B_Athena_PartModifier_Headband_LimaBean final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsInFrontend_ReturnValue;
	uint8                                         Pad_5[0x3];
	class AFortPlayerPawn*                        CallFunc_GetAssociatedPlayerPawn_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_11[0x7];
	class UMeshComponent*                         CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue;
	class USoundLibrarySubsystem*                 CallFunc_GetWorldSubsystem_ReturnValue;
	struct FSoundLibrarySimpleContextSettings     K2Node_MakeStruct_SoundLibrarySimpleContextSettings;
	class AFortPlayerPawn*                        CallFunc_GetAssociatedPlayerPawn_ReturnValue_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	bool                                          CallFunc_IsLocallyViewed_ReturnValue;
	uint8                                         Pad_95[0x3];
	struct FSoundLibraryPlaySoundResult           CallFunc_PlaySoundSimple_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_C1[0x7];
	class UAudioComponent*                        CallFunc_Array_Get_Item;
	TScriptInterface<class IAudioParameterControllerInterface> CallFunc_SetBoolParameter_self_CastInput;
};
static_assert(alignof(B_Athena_PartModifier_Headband_LimaBean_C_ExecuteUbergraph_B_Athena_PartModifier_Headband_LimaBean) == 0x000008, "Wrong alignment on B_Athena_PartModifier_Headband_LimaBean_C_ExecuteUbergraph_B_Athena_PartModifier_Headband_LimaBean");
static_assert(sizeof(B_Athena_PartModifier_Headband_LimaBean_C_ExecuteUbergraph_B_Athena_PartModifier_Headband_LimaBean) == 0x0000E0, "Wrong size on B_Athena_PartModifier_Headband_LimaBean_C_ExecuteUbergraph_B_Athena_PartModifier_Headband_LimaBean");
static_assert(offsetof(B_Athena_PartModifier_Headband_LimaBean_C_ExecuteUbergraph_B_Athena_PartModifier_Headband_LimaBean, EntryPoint) == 0x000000, "Member 'B_Athena_PartModifier_Headband_LimaBean_C_ExecuteUbergraph_B_Athena_PartModifier_Headband_LimaBean::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Headband_LimaBean_C_ExecuteUbergraph_B_Athena_PartModifier_Headband_LimaBean, CallFunc_IsInFrontend_ReturnValue) == 0x000004, "Member 'B_Athena_PartModifier_Headband_LimaBean_C_ExecuteUbergraph_B_Athena_PartModifier_Headband_LimaBean::CallFunc_IsInFrontend_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Headband_LimaBean_C_ExecuteUbergraph_B_Athena_PartModifier_Headband_LimaBean, CallFunc_GetAssociatedPlayerPawn_ReturnValue) == 0x000008, "Member 'B_Athena_PartModifier_Headband_LimaBean_C_ExecuteUbergraph_B_Athena_PartModifier_Headband_LimaBean::CallFunc_GetAssociatedPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Headband_LimaBean_C_ExecuteUbergraph_B_Athena_PartModifier_Headband_LimaBean, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'B_Athena_PartModifier_Headband_LimaBean_C_ExecuteUbergraph_B_Athena_PartModifier_Headband_LimaBean::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Headband_LimaBean_C_ExecuteUbergraph_B_Athena_PartModifier_Headband_LimaBean, CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue) == 0x000018, "Member 'B_Athena_PartModifier_Headband_LimaBean_C_ExecuteUbergraph_B_Athena_PartModifier_Headband_LimaBean::CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Headband_LimaBean_C_ExecuteUbergraph_B_Athena_PartModifier_Headband_LimaBean, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000020, "Member 'B_Athena_PartModifier_Headband_LimaBean_C_ExecuteUbergraph_B_Athena_PartModifier_Headband_LimaBean::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Headband_LimaBean_C_ExecuteUbergraph_B_Athena_PartModifier_Headband_LimaBean, K2Node_MakeStruct_SoundLibrarySimpleContextSettings) == 0x000028, "Member 'B_Athena_PartModifier_Headband_LimaBean_C_ExecuteUbergraph_B_Athena_PartModifier_Headband_LimaBean::K2Node_MakeStruct_SoundLibrarySimpleContextSettings' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Headband_LimaBean_C_ExecuteUbergraph_B_Athena_PartModifier_Headband_LimaBean, CallFunc_GetAssociatedPlayerPawn_ReturnValue_1) == 0x000080, "Member 'B_Athena_PartModifier_Headband_LimaBean_C_ExecuteUbergraph_B_Athena_PartModifier_Headband_LimaBean::CallFunc_GetAssociatedPlayerPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Headband_LimaBean_C_ExecuteUbergraph_B_Athena_PartModifier_Headband_LimaBean, K2Node_CreateDelegate_OutputDelegate) == 0x000088, "Member 'B_Athena_PartModifier_Headband_LimaBean_C_ExecuteUbergraph_B_Athena_PartModifier_Headband_LimaBean::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Headband_LimaBean_C_ExecuteUbergraph_B_Athena_PartModifier_Headband_LimaBean, CallFunc_IsLocallyViewed_ReturnValue) == 0x000094, "Member 'B_Athena_PartModifier_Headband_LimaBean_C_ExecuteUbergraph_B_Athena_PartModifier_Headband_LimaBean::CallFunc_IsLocallyViewed_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Headband_LimaBean_C_ExecuteUbergraph_B_Athena_PartModifier_Headband_LimaBean, CallFunc_PlaySoundSimple_ReturnValue) == 0x000098, "Member 'B_Athena_PartModifier_Headband_LimaBean_C_ExecuteUbergraph_B_Athena_PartModifier_Headband_LimaBean::CallFunc_PlaySoundSimple_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Headband_LimaBean_C_ExecuteUbergraph_B_Athena_PartModifier_Headband_LimaBean, CallFunc_IsValid_ReturnValue_1) == 0x0000C0, "Member 'B_Athena_PartModifier_Headband_LimaBean_C_ExecuteUbergraph_B_Athena_PartModifier_Headband_LimaBean::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Headband_LimaBean_C_ExecuteUbergraph_B_Athena_PartModifier_Headband_LimaBean, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'B_Athena_PartModifier_Headband_LimaBean_C_ExecuteUbergraph_B_Athena_PartModifier_Headband_LimaBean::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Headband_LimaBean_C_ExecuteUbergraph_B_Athena_PartModifier_Headband_LimaBean, CallFunc_SetBoolParameter_self_CastInput) == 0x0000D0, "Member 'B_Athena_PartModifier_Headband_LimaBean_C_ExecuteUbergraph_B_Athena_PartModifier_Headband_LimaBean::CallFunc_SetBoolParameter_self_CastInput' has a wrong offset!");

}
