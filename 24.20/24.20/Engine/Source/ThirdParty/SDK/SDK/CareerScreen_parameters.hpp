#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"

namespace SDK::Params
{

struct CareerScreen_C_ExecuteUbergraph_CareerScreen final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;
	int32                                         Temp_int_Variable;
	int32                                         Temp_int_Variable_1;
	bool                                          Temp_bool_True_if_break_was_hit_Variable;
	uint8                                         Pad_19[0x3];
	int32                                         Temp_int_Array_Index_Variable;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_21[0x3];
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	bool                                          K2Node_Event_bHasCompletedFeats;
	uint8                                         Pad_2D[0x3];
	class UFortFrontEndContext*                   CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	int32                                         K2Node_Select_Default;
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate;
	TArray<class AVaultWorld_C*>                  CallFunc_GetAllActorsOfClass_OutActors;
	class AVaultWorld_C*                          CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_64[0x4];
	class AVaultRotator_C*                        CallFunc_GetVaultRotator_VaultRotator;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_ActorHasTag_ReturnValue;
	uint8                                         Pad_73[0x5];
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;
};
static_assert(alignof(CareerScreen_C_ExecuteUbergraph_CareerScreen) == 0x000008, "Wrong alignment on CareerScreen_C_ExecuteUbergraph_CareerScreen");
static_assert(sizeof(CareerScreen_C_ExecuteUbergraph_CareerScreen) == 0x000080, "Wrong size on CareerScreen_C_ExecuteUbergraph_CareerScreen");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, EntryPoint) == 0x000000, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, Temp_bool_Variable) == 0x000004, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_SpawnSound2D_ReturnValue) == 0x000008, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, Temp_int_Variable) == 0x000010, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, Temp_int_Variable_1) == 0x000014, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, Temp_bool_True_if_break_was_hit_Variable) == 0x000018, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_Not_PreBool_ReturnValue) == 0x000020, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, K2Node_Event_bHasCompletedFeats) == 0x00002C, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::K2Node_Event_bHasCompletedFeats' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000030, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, K2Node_Select_Default) == 0x000038, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, K2Node_CreateDelegate_OutputDelegate) == 0x00003C, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_GetAllActorsOfClass_OutActors) == 0x000048, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_Array_Get_Item) == 0x000058, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_GetVaultRotator_VaultRotator) == 0x000068, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_GetVaultRotator_VaultRotator' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_Less_IntInt_ReturnValue) == 0x000070, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_BooleanAND_ReturnValue) == 0x000071, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_ActorHasTag_ReturnValue) == 0x000072, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_ActorHasTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ExecuteUbergraph_CareerScreen, CallFunc_GetRuntimeOptions_ReturnValue) == 0x000078, "Member 'CareerScreen_C_ExecuteUbergraph_CareerScreen::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");

struct CareerScreen_C_PlayCinematic final
{
public:
	class UFortStreamMediaSource*                 StreamSource;
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;
	class UFortActivatableMovieWidget_C*          CallFunc_Create_ReturnValue;
	struct FVideoWidgetConfig                     K2Node_MakeStruct_VideoWidgetConfig;
};
static_assert(alignof(CareerScreen_C_PlayCinematic) == 0x000008, "Wrong alignment on CareerScreen_C_PlayCinematic");
static_assert(sizeof(CareerScreen_C_PlayCinematic) == 0x0000B8, "Wrong size on CareerScreen_C_PlayCinematic");
static_assert(offsetof(CareerScreen_C_PlayCinematic, StreamSource) == 0x000000, "Member 'CareerScreen_C_PlayCinematic::StreamSource' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_PlayCinematic, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'CareerScreen_C_PlayCinematic::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_PlayCinematic, CallFunc_GetRuntimeOptions_ReturnValue) == 0x000010, "Member 'CareerScreen_C_PlayCinematic::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_PlayCinematic, CallFunc_Create_ReturnValue) == 0x000018, "Member 'CareerScreen_C_PlayCinematic::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_PlayCinematic, K2Node_MakeStruct_VideoWidgetConfig) == 0x000020, "Member 'CareerScreen_C_PlayCinematic::K2Node_MakeStruct_VideoWidgetConfig' has a wrong offset!");

struct CareerScreen_C_ReplayCinematic final
{
public:
	bool                                          PassThrough;
	uint8                                         Pad_1[0x7];
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;
};
static_assert(alignof(CareerScreen_C_ReplayCinematic) == 0x000008, "Wrong alignment on CareerScreen_C_ReplayCinematic");
static_assert(sizeof(CareerScreen_C_ReplayCinematic) == 0x000010, "Wrong size on CareerScreen_C_ReplayCinematic");
static_assert(offsetof(CareerScreen_C_ReplayCinematic, PassThrough) == 0x000000, "Member 'CareerScreen_C_ReplayCinematic::PassThrough' has a wrong offset!");
static_assert(offsetof(CareerScreen_C_ReplayCinematic, CallFunc_SpawnSound2D_ReturnValue) == 0x000008, "Member 'CareerScreen_C_ReplayCinematic::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");

struct CareerScreen_C_ShowFeats final
{
public:
	bool                                          bHasCompletedFeats;
};
static_assert(alignof(CareerScreen_C_ShowFeats) == 0x000001, "Wrong alignment on CareerScreen_C_ShowFeats");
static_assert(sizeof(CareerScreen_C_ShowFeats) == 0x000001, "Wrong size on CareerScreen_C_ShowFeats");
static_assert(offsetof(CareerScreen_C_ShowFeats, bHasCompletedFeats) == 0x000000, "Member 'CareerScreen_C_ShowFeats::bHasCompletedFeats' has a wrong offset!");

}
