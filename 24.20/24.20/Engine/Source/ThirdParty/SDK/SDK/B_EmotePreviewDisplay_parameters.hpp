#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct B_EmotePreviewDisplay_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;
};
static_assert(alignof(B_EmotePreviewDisplay_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on B_EmotePreviewDisplay_C_ReceiveEndPlay");
static_assert(sizeof(B_EmotePreviewDisplay_C_ReceiveEndPlay) == 0x000001, "Wrong size on B_EmotePreviewDisplay_C_ReceiveEndPlay");
static_assert(offsetof(B_EmotePreviewDisplay_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'B_EmotePreviewDisplay_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

struct B_EmotePreviewDisplay_C_PreviewEmote final
{
public:
	const class UFortMontageItemDefinitionBase*   Emote;
};
static_assert(alignof(B_EmotePreviewDisplay_C_PreviewEmote) == 0x000008, "Wrong alignment on B_EmotePreviewDisplay_C_PreviewEmote");
static_assert(sizeof(B_EmotePreviewDisplay_C_PreviewEmote) == 0x000008, "Wrong size on B_EmotePreviewDisplay_C_PreviewEmote");
static_assert(offsetof(B_EmotePreviewDisplay_C_PreviewEmote, Emote) == 0x000000, "Member 'B_EmotePreviewDisplay_C_PreviewEmote::Emote' has a wrong offset!");

struct B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_5[0x3];
	class FName                                   K2Node_Event_ActionName;
	EEndPlayReason                                K2Node_Event_EndPlayReason;
	uint8                                         Pad_D[0x3];
	class UObject*                                Temp_object_Variable;
	class UAnimMontage*                           K2Node_DynamicCast_AsAnim_Montage;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_21[0x7];
	const class UFortMontageItemDefinitionBase*   K2Node_Event_Emote;
	class UObject*                                K2Node_CustomEvent_Loaded;
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_4C[0x4];
	class AFortPlayerPawn*                        CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue;
	class UFortEmojiPreviewComponent*             CallFunc_GetComponentByClass_ReturnValue;
	struct FTransform                             Temp_struct_Variable;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_C1[0x7];
	class UFortEmojiPreviewComponent*             CallFunc_AddComponent_ReturnValue;
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue_1;
	class AFortPlayerPawn*                        CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue_1;
	class UAthenaShoutItemDefinition*             K2Node_DynamicCast_AsAthena_Shout_Item_Definition;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_EA[0x6];
	struct FTransform                             CallFunc_GetTransform_ReturnValue;
	struct FVector                                CallFunc_BreakTransform_Location;
	struct FRotator                               CallFunc_BreakTransform_Rotation;
	struct FVector                                CallFunc_BreakTransform_Scale;
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;
	class UAthenaEmojiItemDefinition*             K2Node_DynamicCast_AsAthena_Emoji_Item_Definition;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_1B1[0x7];
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue_2;
	class AFortPlayerPawn*                        CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue_2;
	EFortCustomGender                             CallFunc_GetCharacterGender_ReturnValue;
	EFortCustomBodyType                           CallFunc_GetCharacterBodyType_ReturnValue;
	uint8                                         Pad_1CA[0x6];
	TSoftObjectPtr<class UAnimMontage>            CallFunc_GetFrontendPreviewAnimation_ReturnValue;
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;
	uint8                                         Pad_1F9[0x7];
	struct FTransform                             Temp_struct_Variable_1;
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue_3;
	class UAudioComponent*                        CallFunc_SpawnSoundComponent_SpawnedComponent;
	class AFortPlayerPawn*                        CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue_3;
	class UFortEmojiPreviewComponent*             CallFunc_AddComponent_ReturnValue_1;
	class UFortEmojiPreviewComponent*             CallFunc_GetComponentByClass_ReturnValue_1;
	float                                         CallFunc_PlayLocalAnimMontage_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	uint8                                         Pad_28D[0x3];
	class FName                                   CallFunc_PickMontageSection_ReturnValue;
	int32                                         CallFunc_Array_Add_ReturnValue;
};
static_assert(alignof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay) == 0x000010, "Wrong alignment on B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay");
static_assert(sizeof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay) == 0x0002A0, "Wrong size on B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, EntryPoint) == 0x000000, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, K2Node_Event_ActionName) == 0x000008, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::K2Node_Event_ActionName' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, K2Node_Event_EndPlayReason) == 0x00000C, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, Temp_object_Variable) == 0x000010, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, K2Node_DynamicCast_AsAnim_Montage) == 0x000018, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::K2Node_DynamicCast_AsAnim_Montage' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, K2Node_Event_Emote) == 0x000028, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::K2Node_Event_Emote' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, K2Node_CustomEvent_Loaded) == 0x000030, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_GetContext_ReturnValue) == 0x000038, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, K2Node_CreateDelegate_OutputDelegate) == 0x000040, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue) == 0x000050, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_GetComponentByClass_ReturnValue) == 0x000058, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, Temp_struct_Variable) == 0x000060, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_IsValid_ReturnValue_1) == 0x0000C0, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_AddComponent_ReturnValue) == 0x0000C8, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_GetContext_ReturnValue_1) == 0x0000D0, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_GetContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue_1) == 0x0000D8, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, K2Node_DynamicCast_AsAthena_Shout_Item_Definition) == 0x0000E0, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::K2Node_DynamicCast_AsAthena_Shout_Item_Definition' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, K2Node_DynamicCast_bSuccess_1) == 0x0000E8, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_IsValid_ReturnValue_2) == 0x0000E9, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_GetTransform_ReturnValue) == 0x0000F0, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_BreakTransform_Location) == 0x000150, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_BreakTransform_Rotation) == 0x000168, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_BreakTransform_Scale) == 0x000180, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_GetAnimInstance_ReturnValue) == 0x000198, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x0001A0, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, K2Node_DynamicCast_AsAthena_Emoji_Item_Definition) == 0x0001A8, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::K2Node_DynamicCast_AsAthena_Emoji_Item_Definition' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, K2Node_DynamicCast_bSuccess_2) == 0x0001B0, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_GetContext_ReturnValue_2) == 0x0001B8, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_GetContext_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue_2) == 0x0001C0, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_GetCharacterGender_ReturnValue) == 0x0001C8, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_GetCharacterGender_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_GetCharacterBodyType_ReturnValue) == 0x0001C9, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_GetCharacterBodyType_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_GetFrontendPreviewAnimation_ReturnValue) == 0x0001D0, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_GetFrontendPreviewAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x0001F8, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, Temp_struct_Variable_1) == 0x000200, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_GetContext_ReturnValue_3) == 0x000260, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_GetContext_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_SpawnSoundComponent_SpawnedComponent) == 0x000268, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_SpawnSoundComponent_SpawnedComponent' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue_3) == 0x000270, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_AddComponent_ReturnValue_1) == 0x000278, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_AddComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000280, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_PlayLocalAnimMontage_ReturnValue) == 0x000288, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_PlayLocalAnimMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_IsValid_ReturnValue_3) == 0x00028C, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_PickMontageSection_ReturnValue) == 0x000290, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_PickMontageSection_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay, CallFunc_Array_Add_ReturnValue) == 0x000294, "Member 'B_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

struct B_EmotePreviewDisplay_C_PerformSpecialAction final
{
public:
	class FName                                   ActionName;
};
static_assert(alignof(B_EmotePreviewDisplay_C_PerformSpecialAction) == 0x000004, "Wrong alignment on B_EmotePreviewDisplay_C_PerformSpecialAction");
static_assert(sizeof(B_EmotePreviewDisplay_C_PerformSpecialAction) == 0x000004, "Wrong size on B_EmotePreviewDisplay_C_PerformSpecialAction");
static_assert(offsetof(B_EmotePreviewDisplay_C_PerformSpecialAction, ActionName) == 0x000000, "Member 'B_EmotePreviewDisplay_C_PerformSpecialAction::ActionName' has a wrong offset!");

struct B_EmotePreviewDisplay_C_CleanupDynamicSounds final
{
public:
	int32                                         Temp_int_Variable;
	int32                                         Temp_int_Variable_1;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	class UAudioComponent*                        CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_1D[0x3];
	class UAudioComponent*                        CallFunc_Array_Get_Item_1;
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;
};
static_assert(alignof(B_EmotePreviewDisplay_C_CleanupDynamicSounds) == 0x000008, "Wrong alignment on B_EmotePreviewDisplay_C_CleanupDynamicSounds");
static_assert(sizeof(B_EmotePreviewDisplay_C_CleanupDynamicSounds) == 0x000030, "Wrong size on B_EmotePreviewDisplay_C_CleanupDynamicSounds");
static_assert(offsetof(B_EmotePreviewDisplay_C_CleanupDynamicSounds, Temp_int_Variable) == 0x000000, "Member 'B_EmotePreviewDisplay_C_CleanupDynamicSounds::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_CleanupDynamicSounds, Temp_int_Variable_1) == 0x000004, "Member 'B_EmotePreviewDisplay_C_CleanupDynamicSounds::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_CleanupDynamicSounds, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'B_EmotePreviewDisplay_C_CleanupDynamicSounds::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_CleanupDynamicSounds, CallFunc_Add_IntInt_ReturnValue_1) == 0x00000C, "Member 'B_EmotePreviewDisplay_C_CleanupDynamicSounds::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_CleanupDynamicSounds, CallFunc_Array_Get_Item) == 0x000010, "Member 'B_EmotePreviewDisplay_C_CleanupDynamicSounds::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_CleanupDynamicSounds, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'B_EmotePreviewDisplay_C_CleanupDynamicSounds::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_CleanupDynamicSounds, CallFunc_Less_IntInt_ReturnValue) == 0x00001C, "Member 'B_EmotePreviewDisplay_C_CleanupDynamicSounds::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_CleanupDynamicSounds, CallFunc_Array_Get_Item_1) == 0x000020, "Member 'B_EmotePreviewDisplay_C_CleanupDynamicSounds::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_CleanupDynamicSounds, CallFunc_Array_Length_ReturnValue_1) == 0x000028, "Member 'B_EmotePreviewDisplay_C_CleanupDynamicSounds::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_CleanupDynamicSounds, CallFunc_Less_IntInt_ReturnValue_1) == 0x00002C, "Member 'B_EmotePreviewDisplay_C_CleanupDynamicSounds::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

struct B_EmotePreviewDisplay_C_OnLoaded_638F148342254A777E929B88915A8958 final
{
public:
	class UObject*                                Loaded;
};
static_assert(alignof(B_EmotePreviewDisplay_C_OnLoaded_638F148342254A777E929B88915A8958) == 0x000008, "Wrong alignment on B_EmotePreviewDisplay_C_OnLoaded_638F148342254A777E929B88915A8958");
static_assert(sizeof(B_EmotePreviewDisplay_C_OnLoaded_638F148342254A777E929B88915A8958) == 0x000008, "Wrong size on B_EmotePreviewDisplay_C_OnLoaded_638F148342254A777E929B88915A8958");
static_assert(offsetof(B_EmotePreviewDisplay_C_OnLoaded_638F148342254A777E929B88915A8958, Loaded) == 0x000000, "Member 'B_EmotePreviewDisplay_C_OnLoaded_638F148342254A777E929B88915A8958::Loaded' has a wrong offset!");

struct B_EmotePreviewDisplay_C_ApplyEmoteToPet final
{
public:
	bool                                          IsRemoval;
	uint8                                         Pad_1[0x7];
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_11[0x7];
	class AFortPlayerPawn*                        CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_22[0x6];
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;
	class UFortPetAnimInstance*                   K2Node_DynamicCast_AsFort_Pet_Anim_Instance;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(B_EmotePreviewDisplay_C_ApplyEmoteToPet) == 0x000008, "Wrong alignment on B_EmotePreviewDisplay_C_ApplyEmoteToPet");
static_assert(sizeof(B_EmotePreviewDisplay_C_ApplyEmoteToPet) == 0x000040, "Wrong size on B_EmotePreviewDisplay_C_ApplyEmoteToPet");
static_assert(offsetof(B_EmotePreviewDisplay_C_ApplyEmoteToPet, IsRemoval) == 0x000000, "Member 'B_EmotePreviewDisplay_C_ApplyEmoteToPet::IsRemoval' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ApplyEmoteToPet, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'B_EmotePreviewDisplay_C_ApplyEmoteToPet::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ApplyEmoteToPet, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'B_EmotePreviewDisplay_C_ApplyEmoteToPet::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ApplyEmoteToPet, CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue) == 0x000018, "Member 'B_EmotePreviewDisplay_C_ApplyEmoteToPet::CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ApplyEmoteToPet, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'B_EmotePreviewDisplay_C_ApplyEmoteToPet::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ApplyEmoteToPet, CallFunc_IsValid_ReturnValue_1) == 0x000021, "Member 'B_EmotePreviewDisplay_C_ApplyEmoteToPet::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ApplyEmoteToPet, CallFunc_GetAnimInstance_ReturnValue) == 0x000028, "Member 'B_EmotePreviewDisplay_C_ApplyEmoteToPet::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ApplyEmoteToPet, K2Node_DynamicCast_AsFort_Pet_Anim_Instance) == 0x000030, "Member 'B_EmotePreviewDisplay_C_ApplyEmoteToPet::K2Node_DynamicCast_AsFort_Pet_Anim_Instance' has a wrong offset!");
static_assert(offsetof(B_EmotePreviewDisplay_C_ApplyEmoteToPet, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'B_EmotePreviewDisplay_C_ApplyEmoteToPet::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}
