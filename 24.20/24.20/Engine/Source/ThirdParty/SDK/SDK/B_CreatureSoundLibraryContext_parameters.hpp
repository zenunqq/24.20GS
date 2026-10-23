#pragma once

#include "Basic.hpp"

#include "SoundLibrary_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct B_CreatureSoundLibraryContext_C_PlaySound final
{
public:
	class USoundBase*                             sound;
	struct FSoundLibraryPlaySoundResult           OutResults;
	bool                                          ReturnValue;
	uint8                                         Pad_31[0x7];
	double                                        Temp_real_Variable;
	bool                                          CallFunc_MatchesTag_ReturnValue;
	uint8                                         Pad_41[0x7];
	double                                        Temp_real_Variable_1;
	double                                        CallFunc_SelectFloat_ReturnValue;
	EFortTeamAffiliation                          Temp_byte_Variable;
	uint8                                         Pad_59[0x7];
	class ANPC_Pawn_Wildlife_Parent_C*            K2Node_DynamicCast_AsNPC_Pawn_Wildlife_Parent;
	bool                                          K2Node_DynamicCast_bSuccess;
	EFortTeamAffiliation                          CallFunc_GetTeamAffiliationForActorToLocalPlayer_ReturnValue;
	uint8                                         Pad_6A[0x6];
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_79[0x7];
	double                                        K2Node_Select_Default;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_89[0x7];
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;
	TScriptInterface<class IAudioParameterControllerInterface> CallFunc_SetBoolParameter_self_CastInput;
	int32                                         CallFunc_Array_Add_ReturnValue;
	uint8                                         Pad_AC[0x4];
	class AFortPlayerPawn*                        CallFunc_GetConverterPawn_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_B9[0x7];
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	TScriptInterface<class IAudioParameterControllerInterface> CallFunc_SetFloatParameter_self_CastInput;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;
	uint8                                         Pad_D9[0x7];
	class UPawnMovementComponent*                 CallFunc_GetMovementComponent_ReturnValue;
	TScriptInterface<class IAudioParameterControllerInterface> CallFunc_SetBoolParameter_self_CastInput_1;
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue;
	double                                        CallFunc_VSize2D_ReturnValue;
	double                                        CallFunc_MapRangeClamped_ReturnValue;
	TScriptInterface<class IAudioParameterControllerInterface> CallFunc_SetFloatParameter_self_CastInput_1;
	float                                         CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast;
	float                                         CallFunc_SetFloatParameter_InFloat_ImplicitCast;
	float                                         CallFunc_SetFloatParameter_InFloat_ImplicitCast_1;
};
static_assert(alignof(B_CreatureSoundLibraryContext_C_PlaySound) == 0x000008, "Wrong alignment on B_CreatureSoundLibraryContext_C_PlaySound");
static_assert(sizeof(B_CreatureSoundLibraryContext_C_PlaySound) == 0x000138, "Wrong size on B_CreatureSoundLibraryContext_C_PlaySound");
static_assert(offsetof(B_CreatureSoundLibraryContext_C_PlaySound, sound) == 0x000000, "Member 'B_CreatureSoundLibraryContext_C_PlaySound::sound' has a wrong offset!");
static_assert(offsetof(B_CreatureSoundLibraryContext_C_PlaySound, OutResults) == 0x000008, "Member 'B_CreatureSoundLibraryContext_C_PlaySound::OutResults' has a wrong offset!");
static_assert(offsetof(B_CreatureSoundLibraryContext_C_PlaySound, ReturnValue) == 0x000030, "Member 'B_CreatureSoundLibraryContext_C_PlaySound::ReturnValue' has a wrong offset!");
static_assert(offsetof(B_CreatureSoundLibraryContext_C_PlaySound, Temp_real_Variable) == 0x000038, "Member 'B_CreatureSoundLibraryContext_C_PlaySound::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(B_CreatureSoundLibraryContext_C_PlaySound, CallFunc_MatchesTag_ReturnValue) == 0x000040, "Member 'B_CreatureSoundLibraryContext_C_PlaySound::CallFunc_MatchesTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_CreatureSoundLibraryContext_C_PlaySound, Temp_real_Variable_1) == 0x000048, "Member 'B_CreatureSoundLibraryContext_C_PlaySound::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(B_CreatureSoundLibraryContext_C_PlaySound, CallFunc_SelectFloat_ReturnValue) == 0x000050, "Member 'B_CreatureSoundLibraryContext_C_PlaySound::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_CreatureSoundLibraryContext_C_PlaySound, Temp_byte_Variable) == 0x000058, "Member 'B_CreatureSoundLibraryContext_C_PlaySound::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(B_CreatureSoundLibraryContext_C_PlaySound, K2Node_DynamicCast_AsNPC_Pawn_Wildlife_Parent) == 0x000060, "Member 'B_CreatureSoundLibraryContext_C_PlaySound::K2Node_DynamicCast_AsNPC_Pawn_Wildlife_Parent' has a wrong offset!");
static_assert(offsetof(B_CreatureSoundLibraryContext_C_PlaySound, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'B_CreatureSoundLibraryContext_C_PlaySound::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_CreatureSoundLibraryContext_C_PlaySound, CallFunc_GetTeamAffiliationForActorToLocalPlayer_ReturnValue) == 0x000069, "Member 'B_CreatureSoundLibraryContext_C_PlaySound::CallFunc_GetTeamAffiliationForActorToLocalPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_CreatureSoundLibraryContext_C_PlaySound, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000070, "Member 'B_CreatureSoundLibraryContext_C_PlaySound::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_CreatureSoundLibraryContext_C_PlaySound, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000078, "Member 'B_CreatureSoundLibraryContext_C_PlaySound::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_CreatureSoundLibraryContext_C_PlaySound, K2Node_Select_Default) == 0x000080, "Member 'B_CreatureSoundLibraryContext_C_PlaySound::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(B_CreatureSoundLibraryContext_C_PlaySound, CallFunc_IsValid_ReturnValue) == 0x000088, "Member 'B_CreatureSoundLibraryContext_C_PlaySound::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_CreatureSoundLibraryContext_C_PlaySound, CallFunc_SpawnSoundAttached_ReturnValue) == 0x000090, "Member 'B_CreatureSoundLibraryContext_C_PlaySound::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_CreatureSoundLibraryContext_C_PlaySound, CallFunc_SetBoolParameter_self_CastInput) == 0x000098, "Member 'B_CreatureSoundLibraryContext_C_PlaySound::CallFunc_SetBoolParameter_self_CastInput' has a wrong offset!");
static_assert(offsetof(B_CreatureSoundLibraryContext_C_PlaySound, CallFunc_Array_Add_ReturnValue) == 0x0000A8, "Member 'B_CreatureSoundLibraryContext_C_PlaySound::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_CreatureSoundLibraryContext_C_PlaySound, CallFunc_GetConverterPawn_ReturnValue) == 0x0000B0, "Member 'B_CreatureSoundLibraryContext_C_PlaySound::CallFunc_GetConverterPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_CreatureSoundLibraryContext_C_PlaySound, CallFunc_IsValid_ReturnValue_1) == 0x0000B8, "Member 'B_CreatureSoundLibraryContext_C_PlaySound::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_CreatureSoundLibraryContext_C_PlaySound, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0000C0, "Member 'B_CreatureSoundLibraryContext_C_PlaySound::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_CreatureSoundLibraryContext_C_PlaySound, CallFunc_SetFloatParameter_self_CastInput) == 0x0000C8, "Member 'B_CreatureSoundLibraryContext_C_PlaySound::CallFunc_SetFloatParameter_self_CastInput' has a wrong offset!");
static_assert(offsetof(B_CreatureSoundLibraryContext_C_PlaySound, CallFunc_IsLocallyControlled_ReturnValue) == 0x0000D8, "Member 'B_CreatureSoundLibraryContext_C_PlaySound::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_CreatureSoundLibraryContext_C_PlaySound, CallFunc_GetMovementComponent_ReturnValue) == 0x0000E0, "Member 'B_CreatureSoundLibraryContext_C_PlaySound::CallFunc_GetMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_CreatureSoundLibraryContext_C_PlaySound, CallFunc_SetBoolParameter_self_CastInput_1) == 0x0000E8, "Member 'B_CreatureSoundLibraryContext_C_PlaySound::CallFunc_SetBoolParameter_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(B_CreatureSoundLibraryContext_C_PlaySound, CallFunc_Conv_VectorToVector2D_ReturnValue) == 0x0000F8, "Member 'B_CreatureSoundLibraryContext_C_PlaySound::CallFunc_Conv_VectorToVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_CreatureSoundLibraryContext_C_PlaySound, CallFunc_VSize2D_ReturnValue) == 0x000108, "Member 'B_CreatureSoundLibraryContext_C_PlaySound::CallFunc_VSize2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_CreatureSoundLibraryContext_C_PlaySound, CallFunc_MapRangeClamped_ReturnValue) == 0x000110, "Member 'B_CreatureSoundLibraryContext_C_PlaySound::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_CreatureSoundLibraryContext_C_PlaySound, CallFunc_SetFloatParameter_self_CastInput_1) == 0x000118, "Member 'B_CreatureSoundLibraryContext_C_PlaySound::CallFunc_SetFloatParameter_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(B_CreatureSoundLibraryContext_C_PlaySound, CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast) == 0x000128, "Member 'B_CreatureSoundLibraryContext_C_PlaySound::CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_CreatureSoundLibraryContext_C_PlaySound, CallFunc_SetFloatParameter_InFloat_ImplicitCast) == 0x00012C, "Member 'B_CreatureSoundLibraryContext_C_PlaySound::CallFunc_SetFloatParameter_InFloat_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_CreatureSoundLibraryContext_C_PlaySound, CallFunc_SetFloatParameter_InFloat_ImplicitCast_1) == 0x000130, "Member 'B_CreatureSoundLibraryContext_C_PlaySound::CallFunc_SetFloatParameter_InFloat_ImplicitCast_1' has a wrong offset!");

}
