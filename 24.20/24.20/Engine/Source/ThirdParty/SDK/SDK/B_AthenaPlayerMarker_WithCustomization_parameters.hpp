#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;
	struct FFortWorldMarkerData                   K2Node_Event_MarkerData;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_199[0x7];
	class UClass*                                 Temp_class_Variable;
	class UClass*                                 K2Node_ClassDynamicCast_AsFort_Map_Marker_Topper_Actor;
	bool                                          K2Node_ClassDynamicCast_bSuccess;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_1B2[0x6];
	TSubclassOf<class UObject>                    CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;
	class UClass*                                 K2Node_ClassDynamicCast_AsFort_Map_Marker_Topper_Actor_1;
	bool                                          K2Node_ClassDynamicCast_bSuccess_1;
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_1CB[0x5];
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	bool                                          CallFunc_NotEqual_ClassClass_ReturnValue;
	uint8                                         Pad_1DA[0x6];
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded;
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	class AFortMapMarkerTopperActor*              CallFunc_FinishSpawningActor_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	uint8                                         Pad_1F9[0x3];
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate;
};
static_assert(alignof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization) == 0x000008, "Wrong alignment on B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization");
static_assert(sizeof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization) == 0x000208, "Wrong size on B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, EntryPoint) == 0x000000, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000010, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, K2Node_Event_MarkerData) == 0x000018, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::K2Node_Event_MarkerData' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, CallFunc_IsValid_ReturnValue) == 0x000198, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, Temp_class_Variable) == 0x0001A0, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, K2Node_ClassDynamicCast_AsFort_Map_Marker_Topper_Actor) == 0x0001A8, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::K2Node_ClassDynamicCast_AsFort_Map_Marker_Topper_Actor' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, K2Node_ClassDynamicCast_bSuccess) == 0x0001B0, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, CallFunc_IsValid_ReturnValue_1) == 0x0001B1, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, CallFunc_Conv_SoftClassReferenceToClass_ReturnValue) == 0x0001B8, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::CallFunc_Conv_SoftClassReferenceToClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, K2Node_ClassDynamicCast_AsFort_Map_Marker_Topper_Actor_1) == 0x0001C0, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::K2Node_ClassDynamicCast_AsFort_Map_Marker_Topper_Actor_1' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, K2Node_ClassDynamicCast_bSuccess_1) == 0x0001C8, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::K2Node_ClassDynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x0001C9, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, CallFunc_IsValid_ReturnValue_2) == 0x0001CA, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, CallFunc_GetObjectClass_ReturnValue) == 0x0001D0, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, CallFunc_EqualEqual_ClassClass_ReturnValue_1) == 0x0001D8, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::CallFunc_EqualEqual_ClassClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, CallFunc_NotEqual_ClassClass_ReturnValue) == 0x0001D9, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::CallFunc_NotEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, K2Node_CustomEvent_Loaded) == 0x0001E0, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0001E8, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, CallFunc_FinishSpawningActor_ReturnValue) == 0x0001F0, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, CallFunc_IsValid_ReturnValue_3) == 0x0001F8, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization, K2Node_CreateDelegate_OutputDelegate) == 0x0001FC, "Member 'B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

struct B_AthenaPlayerMarker_WithCustomization_C_OnLoaded_8A042AD24DC8A8C0E9D8E0B4BF3B6C37 final
{
public:
	TSubclassOf<class UObject>                    Loaded;
};
static_assert(alignof(B_AthenaPlayerMarker_WithCustomization_C_OnLoaded_8A042AD24DC8A8C0E9D8E0B4BF3B6C37) == 0x000008, "Wrong alignment on B_AthenaPlayerMarker_WithCustomization_C_OnLoaded_8A042AD24DC8A8C0E9D8E0B4BF3B6C37");
static_assert(sizeof(B_AthenaPlayerMarker_WithCustomization_C_OnLoaded_8A042AD24DC8A8C0E9D8E0B4BF3B6C37) == 0x000008, "Wrong size on B_AthenaPlayerMarker_WithCustomization_C_OnLoaded_8A042AD24DC8A8C0E9D8E0B4BF3B6C37");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_OnLoaded_8A042AD24DC8A8C0E9D8E0B4BF3B6C37, Loaded) == 0x000000, "Member 'B_AthenaPlayerMarker_WithCustomization_C_OnLoaded_8A042AD24DC8A8C0E9D8E0B4BF3B6C37::Loaded' has a wrong offset!");

struct B_AthenaPlayerMarker_WithCustomization_C_OnSetupMarker final
{
public:
	struct FFortWorldMarkerData                   MarkerData_0;
};
static_assert(alignof(B_AthenaPlayerMarker_WithCustomization_C_OnSetupMarker) == 0x000008, "Wrong alignment on B_AthenaPlayerMarker_WithCustomization_C_OnSetupMarker");
static_assert(sizeof(B_AthenaPlayerMarker_WithCustomization_C_OnSetupMarker) == 0x000180, "Wrong size on B_AthenaPlayerMarker_WithCustomization_C_OnSetupMarker");
static_assert(offsetof(B_AthenaPlayerMarker_WithCustomization_C_OnSetupMarker, MarkerData_0) == 0x000000, "Member 'B_AthenaPlayerMarker_WithCustomization_C_OnSetupMarker::MarkerData_0' has a wrong offset!");

}
