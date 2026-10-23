#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct Fort_Entry_Music_Controller_BP_C_OnMusicPackChanged final
{
public:
	const class UAthenaMusicPackItemDefinition*   NewMusicPack;
	float                                         StartTimeOffset;
};
static_assert(alignof(Fort_Entry_Music_Controller_BP_C_OnMusicPackChanged) == 0x000008, "Wrong alignment on Fort_Entry_Music_Controller_BP_C_OnMusicPackChanged");
static_assert(sizeof(Fort_Entry_Music_Controller_BP_C_OnMusicPackChanged) == 0x000010, "Wrong size on Fort_Entry_Music_Controller_BP_C_OnMusicPackChanged");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_OnMusicPackChanged, NewMusicPack) == 0x000000, "Member 'Fort_Entry_Music_Controller_BP_C_OnMusicPackChanged::NewMusicPack' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_OnMusicPackChanged, StartTimeOffset) == 0x000008, "Member 'Fort_Entry_Music_Controller_BP_C_OnMusicPackChanged::StartTimeOffset' has a wrong offset!");

struct Fort_Entry_Music_Controller_BP_C_SetCanRetriggerNextMusicPack final
{
public:
	bool                                          bCanRetriggerNextMusicPack_0;
};
static_assert(alignof(Fort_Entry_Music_Controller_BP_C_SetCanRetriggerNextMusicPack) == 0x000001, "Wrong alignment on Fort_Entry_Music_Controller_BP_C_SetCanRetriggerNextMusicPack");
static_assert(sizeof(Fort_Entry_Music_Controller_BP_C_SetCanRetriggerNextMusicPack) == 0x000001, "Wrong size on Fort_Entry_Music_Controller_BP_C_SetCanRetriggerNextMusicPack");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_SetCanRetriggerNextMusicPack, bCanRetriggerNextMusicPack_0) == 0x000000, "Member 'Fort_Entry_Music_Controller_BP_C_SetCanRetriggerNextMusicPack::bCanRetriggerNextMusicPack_0' has a wrong offset!");

struct Fort_Entry_Music_Controller_BP_C_Lobby_Music_Override final
{
public:
	bool                                          Lobby_Music_Activate;
	uint8                                         Pad_1[0x7];
	class USoundBase*                             New_Music;
};
static_assert(alignof(Fort_Entry_Music_Controller_BP_C_Lobby_Music_Override) == 0x000008, "Wrong alignment on Fort_Entry_Music_Controller_BP_C_Lobby_Music_Override");
static_assert(sizeof(Fort_Entry_Music_Controller_BP_C_Lobby_Music_Override) == 0x000010, "Wrong size on Fort_Entry_Music_Controller_BP_C_Lobby_Music_Override");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_Lobby_Music_Override, Lobby_Music_Activate) == 0x000000, "Member 'Fort_Entry_Music_Controller_BP_C_Lobby_Music_Override::Lobby_Music_Activate' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_Lobby_Music_Override, New_Music) == 0x000008, "Member 'Fort_Entry_Music_Controller_BP_C_Lobby_Music_Override::New_Music' has a wrong offset!");

struct Fort_Entry_Music_Controller_BP_C_Change_Music final
{
public:
	class USoundBase*                             New_Music;
	double                                        StartTime;
	struct FGameplayTag                           Event_Tag;
};
static_assert(alignof(Fort_Entry_Music_Controller_BP_C_Change_Music) == 0x000008, "Wrong alignment on Fort_Entry_Music_Controller_BP_C_Change_Music");
static_assert(sizeof(Fort_Entry_Music_Controller_BP_C_Change_Music) == 0x000018, "Wrong size on Fort_Entry_Music_Controller_BP_C_Change_Music");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_Change_Music, New_Music) == 0x000000, "Member 'Fort_Entry_Music_Controller_BP_C_Change_Music::New_Music' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_Change_Music, StartTime) == 0x000008, "Member 'Fort_Entry_Music_Controller_BP_C_Change_Music::StartTime' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_Change_Music, Event_Tag) == 0x000010, "Member 'Fort_Entry_Music_Controller_BP_C_Change_Music::Event_Tag' has a wrong offset!");

struct Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class USoundBase*                             K2Node_CustomEvent_New_Music_1;
	double                                        K2Node_CustomEvent_StartTime;
	struct FGameplayTag                           K2Node_CustomEvent_Event_Tag;
	uint8                                         Pad_1C[0x4];
	const class UAthenaMusicPackItemDefinition*   K2Node_CustomEvent_NewMusicPack;
	float                                         K2Node_CustomEvent_StartTimeOffset;
	bool                                          CallFunc_IsGameplayTagValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_2E[0x2];
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	class USoundBase*                             K2Node_DynamicCast_AsSound_Base;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          K2Node_CustomEvent_Lobby_Music_Activate;
	uint8                                         Pad_42[0x6];
	class USoundBase*                             K2Node_CustomEvent_New_Music;
	bool                                          K2Node_CustomEvent_bCanRetriggerNextMusicPack;
	uint8                                         Pad_51[0x7];
	class UFortAudioAnalysisSubsystem*            CallFunc_GetWorldSubsystem_ReturnValue;
	class UMusicEventSubsystem*                   CallFunc_GetGameInstanceSubsystem_ReturnValue;
	class UMusicEventSubsystem*                   CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	struct FGameplayTagContainer                  Temp_struct_Variable;
	struct FGameplayTagContainer                  Temp_struct_Variable_1;
	class UFortMusicContext*                      CallFunc_GetContext_ReturnValue;
	class UAthenaMusicPackItemDefinition*         CallFunc_GetEquippedMusicPack_ReturnValue;
	TDelegate<void(class UAthenaMusicPackItemDefinition* NewMusicPack, float StartTimeOffset)> K2Node_CreateDelegate_OutputDelegate;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_CD[0x3];
	struct FGameplayTag                           Temp_struct_Variable_2;
	uint8                                         Pad_D4[0x4];
	struct FGameplayTagContainer                  K2Node_Select_Default;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_F9[0x7];
	class UFortMusicContext*                      CallFunc_GetContext_ReturnValue_1;
	struct FGameplayTag                           K2Node_Select_Default_1;
	bool                                          CallFunc_IsDefaultMusicEquipped_ReturnValue;
	uint8                                         Pad_10D[0x3];
	class UAudioComponent*                        CallFunc_AddEvent_ReturnValue;
	class UFortMusicContext*                      CallFunc_GetContext_ReturnValue_2;
	class UAthenaMusicPackItemDefinition*         CallFunc_GetEquippedMusicPack_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_129[0x7];
	class UFortMusicContext*                      CallFunc_GetContext_ReturnValue_3;
	double                                        CallFunc_Change_Music_StartTime_ImplicitCast;
};
static_assert(alignof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP) == 0x000008, "Wrong alignment on Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP");
static_assert(sizeof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP) == 0x000140, "Wrong size on Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, EntryPoint) == 0x000000, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, K2Node_CustomEvent_New_Music_1) == 0x000008, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::K2Node_CustomEvent_New_Music_1' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, K2Node_CustomEvent_StartTime) == 0x000010, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::K2Node_CustomEvent_StartTime' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, K2Node_CustomEvent_Event_Tag) == 0x000018, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::K2Node_CustomEvent_Event_Tag' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, K2Node_CustomEvent_NewMusicPack) == 0x000020, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::K2Node_CustomEvent_NewMusicPack' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, K2Node_CustomEvent_StartTimeOffset) == 0x000028, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::K2Node_CustomEvent_StartTimeOffset' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, CallFunc_IsGameplayTagValid_ReturnValue) == 0x00002C, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::CallFunc_IsGameplayTagValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, CallFunc_IsValid_ReturnValue) == 0x00002D, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000030, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, K2Node_DynamicCast_AsSound_Base) == 0x000038, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::K2Node_DynamicCast_AsSound_Base' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, K2Node_CustomEvent_Lobby_Music_Activate) == 0x000041, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::K2Node_CustomEvent_Lobby_Music_Activate' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, K2Node_CustomEvent_New_Music) == 0x000048, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::K2Node_CustomEvent_New_Music' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, K2Node_CustomEvent_bCanRetriggerNextMusicPack) == 0x000050, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::K2Node_CustomEvent_bCanRetriggerNextMusicPack' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000058, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000060, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, CallFunc_GetGameInstanceSubsystem_ReturnValue_1) == 0x000068, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::CallFunc_GetGameInstanceSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, Temp_struct_Variable) == 0x000070, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, Temp_struct_Variable_1) == 0x000090, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, CallFunc_GetContext_ReturnValue) == 0x0000B0, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, CallFunc_GetEquippedMusicPack_ReturnValue) == 0x0000B8, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::CallFunc_GetEquippedMusicPack_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, K2Node_CreateDelegate_OutputDelegate) == 0x0000C0, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, Temp_bool_Variable) == 0x0000CC, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, Temp_struct_Variable_2) == 0x0000D0, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, K2Node_Select_Default) == 0x0000D8, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, Temp_bool_Variable_1) == 0x0000F8, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, CallFunc_GetContext_ReturnValue_1) == 0x000100, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::CallFunc_GetContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, K2Node_Select_Default_1) == 0x000108, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, CallFunc_IsDefaultMusicEquipped_ReturnValue) == 0x00010C, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::CallFunc_IsDefaultMusicEquipped_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, CallFunc_AddEvent_ReturnValue) == 0x000110, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::CallFunc_AddEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, CallFunc_GetContext_ReturnValue_2) == 0x000118, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::CallFunc_GetContext_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, CallFunc_GetEquippedMusicPack_ReturnValue_1) == 0x000120, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::CallFunc_GetEquippedMusicPack_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, CallFunc_IsValid_ReturnValue_1) == 0x000128, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, CallFunc_GetContext_ReturnValue_3) == 0x000130, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::CallFunc_GetContext_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, CallFunc_Change_Music_StartTime_ImplicitCast) == 0x000138, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::CallFunc_Change_Music_StartTime_ImplicitCast' has a wrong offset!");

}
