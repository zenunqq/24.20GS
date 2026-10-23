#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer final
{
public:
	int32                                         EntryPoint;
	TDelegate<void(bool bFullscreenMapVisible)>   K2Node_CreateDelegate_OutputDelegate;
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;
	bool                                          CallFunc_IsInPlayMode_Play_Mode;
	uint8                                         Pad_19[0x7];
	class AFortPlayerControllerAthena*            K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_2A[0x6];
	class AFortMinigame*                          CallFunc_GetMinigame_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_BooleanNOR_ReturnValue;
	uint8                                         Pad_3A[0x6];
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;
	TDelegate<void(bool bFullscreenMapVisible)>   K2Node_CreateDelegate_OutputDelegate_1;
	uint8                                         Pad_54[0x4];
	class AFortPlayerControllerAthena*            K2Node_DynamicCast_AsFort_Player_Controller_Athena_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	bool                                          K2Node_CustomEvent_bFullscreenMapVisible;
	uint8                                         Pad_62[0x6];
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_2;
	class AFortPlayerControllerAthena*            K2Node_DynamicCast_AsFort_Player_Controller_Athena_2;
	bool                                          K2Node_DynamicCast_bSuccess_2;
};
static_assert(alignof(AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer) == 0x000008, "Wrong alignment on AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer");
static_assert(sizeof(AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer) == 0x000080, "Wrong size on AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer");
static_assert(offsetof(AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer, EntryPoint) == 0x000000, "Member 'AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer, CallFunc_GetOwningPlayer_ReturnValue) == 0x000010, "Member 'AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer, CallFunc_IsInPlayMode_Play_Mode) == 0x000018, "Member 'AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer::CallFunc_IsInPlayMode_Play_Mode' has a wrong offset!");
static_assert(offsetof(AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer, K2Node_DynamicCast_AsFort_Player_Controller_Athena) == 0x000020, "Member 'AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer::K2Node_DynamicCast_AsFort_Player_Controller_Athena' has a wrong offset!");
static_assert(offsetof(AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer, CallFunc_Not_PreBool_ReturnValue) == 0x000029, "Member 'AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer, CallFunc_GetMinigame_ReturnValue) == 0x000030, "Member 'AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer::CallFunc_GetMinigame_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer, CallFunc_BooleanNOR_ReturnValue) == 0x000039, "Member 'AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer::CallFunc_BooleanNOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x000040, "Member 'AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer, K2Node_CreateDelegate_OutputDelegate_1) == 0x000048, "Member 'AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer, K2Node_DynamicCast_AsFort_Player_Controller_Athena_1) == 0x000058, "Member 'AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer::K2Node_DynamicCast_AsFort_Player_Controller_Athena_1' has a wrong offset!");
static_assert(offsetof(AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer, K2Node_DynamicCast_bSuccess_1) == 0x000060, "Member 'AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer, K2Node_CustomEvent_bFullscreenMapVisible) == 0x000061, "Member 'AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer::K2Node_CustomEvent_bFullscreenMapVisible' has a wrong offset!");
static_assert(offsetof(AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer, CallFunc_GetOwningPlayer_ReturnValue_2) == 0x000068, "Member 'AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer::CallFunc_GetOwningPlayer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer, K2Node_DynamicCast_AsFort_Player_Controller_Athena_2) == 0x000070, "Member 'AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer::K2Node_DynamicCast_AsFort_Player_Controller_Athena_2' has a wrong offset!");
static_assert(offsetof(AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer, K2Node_DynamicCast_bSuccess_2) == 0x000078, "Member 'AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

struct AthenaMapLayerContainer_C_OnFullScreenMapToggle final
{
public:
	bool                                          bFullscreenMapVisible;
};
static_assert(alignof(AthenaMapLayerContainer_C_OnFullScreenMapToggle) == 0x000001, "Wrong alignment on AthenaMapLayerContainer_C_OnFullScreenMapToggle");
static_assert(sizeof(AthenaMapLayerContainer_C_OnFullScreenMapToggle) == 0x000001, "Wrong size on AthenaMapLayerContainer_C_OnFullScreenMapToggle");
static_assert(offsetof(AthenaMapLayerContainer_C_OnFullScreenMapToggle, bFullscreenMapVisible) == 0x000000, "Member 'AthenaMapLayerContainer_C_OnFullScreenMapToggle::bFullscreenMapVisible' has a wrong offset!");

}
