#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct MilitaryBase_Door_01_C_BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;
	class AActor*                                 OtherActor;
	class UPrimitiveComponent*                    OtherComp;
	int32                                         OtherBodyIndex;
	bool                                          bFromSweep;
	uint8                                         Pad_1D[0x3];
	struct FHitResult                             SweepResult;
};
static_assert(alignof(MilitaryBase_Door_01_C_BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on MilitaryBase_Door_01_C_BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(MilitaryBase_Door_01_C_BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000100, "Wrong size on MilitaryBase_Door_01_C_BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(MilitaryBase_Door_01_C_BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'MilitaryBase_Door_01_C_BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'MilitaryBase_Door_01_C_BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'MilitaryBase_Door_01_C_BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'MilitaryBase_Door_01_C_BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'MilitaryBase_Door_01_C_BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'MilitaryBase_Door_01_C_BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

struct MilitaryBase_Door_01_C_BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;
	class AActor*                                 OtherActor;
	class UPrimitiveComponent*                    OtherComp;
	int32                                         OtherBodyIndex;
};
static_assert(alignof(MilitaryBase_Door_01_C_BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on MilitaryBase_Door_01_C_BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(MilitaryBase_Door_01_C_BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on MilitaryBase_Door_01_C_BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(MilitaryBase_Door_01_C_BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'MilitaryBase_Door_01_C_BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'MilitaryBase_Door_01_C_BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'MilitaryBase_Door_01_C_BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'MilitaryBase_Door_01_C_BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

struct MilitaryBase_Door_01_C_Close final
{
public:
	class AController*                            ControllerInstigator;
};
static_assert(alignof(MilitaryBase_Door_01_C_Close) == 0x000008, "Wrong alignment on MilitaryBase_Door_01_C_Close");
static_assert(sizeof(MilitaryBase_Door_01_C_Close) == 0x000008, "Wrong size on MilitaryBase_Door_01_C_Close");
static_assert(offsetof(MilitaryBase_Door_01_C_Close, ControllerInstigator) == 0x000000, "Member 'MilitaryBase_Door_01_C_Close::ControllerInstigator' has a wrong offset!");

struct MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01 final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	bool                                          CallFunc_HasAuthority_ReturnValue;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;
	uint8                                         Pad_7[0x1];
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;
	uint8                                         Pad_25[0x3];
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;
	class AFortAthenaVehicle*                     K2Node_DynamicCast_AsFort_Athena_Vehicle;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_111[0x7];
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	bool                                          CallFunc_HasAuthority_ReturnValue_1;
	uint8                                         Pad_122[0x6];
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;
	uint8                                         Pad_144[0x4];
	class AFortAthenaVehicle*                     K2Node_DynamicCast_AsFort_Athena_Vehicle_1;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_151[0x7];
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_1;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	uint8                                         Pad_161[0x3];
	int32                                         Temp_int_Variable;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	uint8                                         Pad_169[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	int32                                         CallFunc_Max_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_179[0x3];
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;
	uint8                                         Pad_18E[0x2];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;
	class AController*                            K2Node_Event_ControllerInstigator_1;
	bool                                          K2Node_Event_bRequestFastOpen;
	uint8                                         Pad_1C9[0x7];
	class AController*                            K2Node_Event_ControllerInstigator;
};
static_assert(alignof(MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01) == 0x000008, "Wrong alignment on MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01");
static_assert(sizeof(MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01) == 0x0001D8, "Wrong size on MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01");
static_assert(offsetof(MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01, EntryPoint) == 0x000000, "Member 'MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01::EntryPoint' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01, CallFunc_IsDedicatedServer_ReturnValue) == 0x000004, "Member 'MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01, CallFunc_HasAuthority_ReturnValue) == 0x000005, "Member 'MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x000006, "Member 'MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x000008, "Member 'MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000010, "Member 'MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000018, "Member 'MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x000020, "Member 'MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01, K2Node_ComponentBoundEvent_bFromSweep) == 0x000024, "Member 'MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01, K2Node_ComponentBoundEvent_SweepResult) == 0x000028, "Member 'MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01, K2Node_DynamicCast_AsFort_Athena_Vehicle) == 0x000108, "Member 'MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01::K2Node_DynamicCast_AsFort_Athena_Vehicle' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01, K2Node_DynamicCast_bSuccess) == 0x000110, "Member 'MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000118, "Member 'MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01, K2Node_DynamicCast_bSuccess_1) == 0x000120, "Member 'MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01, CallFunc_HasAuthority_ReturnValue_1) == 0x000121, "Member 'MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000128, "Member 'MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01, K2Node_ComponentBoundEvent_OtherActor) == 0x000130, "Member 'MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01, K2Node_ComponentBoundEvent_OtherComp) == 0x000138, "Member 'MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000140, "Member 'MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01, K2Node_DynamicCast_AsFort_Athena_Vehicle_1) == 0x000148, "Member 'MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01::K2Node_DynamicCast_AsFort_Athena_Vehicle_1' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01, K2Node_DynamicCast_bSuccess_2) == 0x000150, "Member 'MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01, K2Node_DynamicCast_AsFort_Player_Pawn_1) == 0x000158, "Member 'MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01::K2Node_DynamicCast_AsFort_Player_Pawn_1' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01, K2Node_DynamicCast_bSuccess_3) == 0x000160, "Member 'MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01, Temp_int_Variable) == 0x000164, "Member 'MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000168, "Member 'MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01, CallFunc_Add_IntInt_ReturnValue) == 0x00016C, "Member 'MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01, CallFunc_Subtract_IntInt_ReturnValue) == 0x000170, "Member 'MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01, CallFunc_Max_ReturnValue) == 0x000174, "Member 'MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01, CallFunc_IsValid_ReturnValue) == 0x000178, "Member 'MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01, CallFunc_LinearColorLerp_ReturnValue) == 0x00017C, "Member 'MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01::CallFunc_LinearColorLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01, K2Node_SwitchEnum_CmpSuccess) == 0x00018C, "Member 'MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01, K2Node_SwitchEnum_CmpSuccess_1) == 0x00018D, "Member 'MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000190, "Member 'MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0001A8, "Member 'MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01, K2Node_Event_ControllerInstigator_1) == 0x0001C0, "Member 'MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01::K2Node_Event_ControllerInstigator_1' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01, K2Node_Event_bRequestFastOpen) == 0x0001C8, "Member 'MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01::K2Node_Event_bRequestFastOpen' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01, K2Node_Event_ControllerInstigator) == 0x0001D0, "Member 'MilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01::K2Node_Event_ControllerInstigator' has a wrong offset!");

struct MilitaryBase_Door_01_C_GetComponentToLock final
{
public:
	TArray<class UPrimitiveComponent*>            ReturnValue;
	TArray<class UPrimitiveComponent*>            K2Node_MakeArray_Array;
};
static_assert(alignof(MilitaryBase_Door_01_C_GetComponentToLock) == 0x000008, "Wrong alignment on MilitaryBase_Door_01_C_GetComponentToLock");
static_assert(sizeof(MilitaryBase_Door_01_C_GetComponentToLock) == 0x000020, "Wrong size on MilitaryBase_Door_01_C_GetComponentToLock");
static_assert(offsetof(MilitaryBase_Door_01_C_GetComponentToLock, ReturnValue) == 0x000000, "Member 'MilitaryBase_Door_01_C_GetComponentToLock::ReturnValue' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_GetComponentToLock, K2Node_MakeArray_Array) == 0x000010, "Member 'MilitaryBase_Door_01_C_GetComponentToLock::K2Node_MakeArray_Array' has a wrong offset!");

struct MilitaryBase_Door_01_C_GetDoorMID final
{
public:
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	class UMaterialInstanceDynamic*               K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(MilitaryBase_Door_01_C_GetDoorMID) == 0x000008, "Wrong alignment on MilitaryBase_Door_01_C_GetDoorMID");
static_assert(sizeof(MilitaryBase_Door_01_C_GetDoorMID) == 0x000020, "Wrong size on MilitaryBase_Door_01_C_GetDoorMID");
static_assert(offsetof(MilitaryBase_Door_01_C_GetDoorMID, CallFunc_GetMaterial_ReturnValue) == 0x000000, "Member 'MilitaryBase_Door_01_C_GetDoorMID::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_GetDoorMID, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000008, "Member 'MilitaryBase_Door_01_C_GetDoorMID::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_GetDoorMID, K2Node_DynamicCast_AsMaterial_Instance_Dynamic) == 0x000010, "Member 'MilitaryBase_Door_01_C_GetDoorMID::K2Node_DynamicCast_AsMaterial_Instance_Dynamic' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_GetDoorMID, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'MilitaryBase_Door_01_C_GetDoorMID::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct MilitaryBase_Door_01_C_Open final
{
public:
	class AController*                            ControllerInstigator;
	bool                                          bRequestFastOpen;
};
static_assert(alignof(MilitaryBase_Door_01_C_Open) == 0x000008, "Wrong alignment on MilitaryBase_Door_01_C_Open");
static_assert(sizeof(MilitaryBase_Door_01_C_Open) == 0x000010, "Wrong size on MilitaryBase_Door_01_C_Open");
static_assert(offsetof(MilitaryBase_Door_01_C_Open, ControllerInstigator) == 0x000000, "Member 'MilitaryBase_Door_01_C_Open::ControllerInstigator' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_Open, bRequestFastOpen) == 0x000008, "Member 'MilitaryBase_Door_01_C_Open::bRequestFastOpen' has a wrong offset!");

struct MilitaryBase_Door_01_C_UserConstructionScript final
{
public:
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	uint8                                         Pad_1[0x7];
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;
	class UMaterialInstanceConstant*              K2Node_DynamicCast_AsMaterial_Instance_Constant;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_19[0x3];
	struct FLinearColor                           CallFunc_K2_GetVectorParameterValue_ReturnValue;
};
static_assert(alignof(MilitaryBase_Door_01_C_UserConstructionScript) == 0x000008, "Wrong alignment on MilitaryBase_Door_01_C_UserConstructionScript");
static_assert(sizeof(MilitaryBase_Door_01_C_UserConstructionScript) == 0x000030, "Wrong size on MilitaryBase_Door_01_C_UserConstructionScript");
static_assert(offsetof(MilitaryBase_Door_01_C_UserConstructionScript, CallFunc_IsDedicatedServer_ReturnValue) == 0x000000, "Member 'MilitaryBase_Door_01_C_UserConstructionScript::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_UserConstructionScript, CallFunc_GetMaterial_ReturnValue) == 0x000008, "Member 'MilitaryBase_Door_01_C_UserConstructionScript::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_UserConstructionScript, K2Node_DynamicCast_AsMaterial_Instance_Constant) == 0x000010, "Member 'MilitaryBase_Door_01_C_UserConstructionScript::K2Node_DynamicCast_AsMaterial_Instance_Constant' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_UserConstructionScript, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'MilitaryBase_Door_01_C_UserConstructionScript::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MilitaryBase_Door_01_C_UserConstructionScript, CallFunc_K2_GetVectorParameterValue_ReturnValue) == 0x00001C, "Member 'MilitaryBase_Door_01_C_UserConstructionScript::CallFunc_K2_GetVectorParameterValue_ReturnValue' has a wrong offset!");

struct MilitaryBase_Door_01_C_IsOpen final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(MilitaryBase_Door_01_C_IsOpen) == 0x000001, "Wrong alignment on MilitaryBase_Door_01_C_IsOpen");
static_assert(sizeof(MilitaryBase_Door_01_C_IsOpen) == 0x000001, "Wrong size on MilitaryBase_Door_01_C_IsOpen");
static_assert(offsetof(MilitaryBase_Door_01_C_IsOpen, ReturnValue) == 0x000000, "Member 'MilitaryBase_Door_01_C_IsOpen::ReturnValue' has a wrong offset!");

}
