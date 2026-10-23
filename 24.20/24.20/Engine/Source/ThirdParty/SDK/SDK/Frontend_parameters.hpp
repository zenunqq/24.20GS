#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct Frontend_C_ExecuteUbergraph_Frontend final
{
public:
	int32                                         EntryPoint;
};
static_assert(alignof(Frontend_C_ExecuteUbergraph_Frontend) == 0x000004, "Wrong alignment on Frontend_C_ExecuteUbergraph_Frontend");
static_assert(sizeof(Frontend_C_ExecuteUbergraph_Frontend) == 0x000004, "Wrong size on Frontend_C_ExecuteUbergraph_Frontend");
static_assert(offsetof(Frontend_C_ExecuteUbergraph_Frontend, EntryPoint) == 0x000000, "Member 'Frontend_C_ExecuteUbergraph_Frontend::EntryPoint' has a wrong offset!");

struct Frontend_C_PlaySpeech final
{
public:
	class FString                                 Filename;
	int32                                         SampleRate;
	uint8                                         Pad_14[0x4];
	class USoundWave*                             AssetFile;
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;
	class AFortPlayerControllerFrontEnd*          K2Node_DynamicCast_AsFort_Player_Controller_Front_End;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(Frontend_C_PlaySpeech) == 0x000008, "Wrong alignment on Frontend_C_PlaySpeech");
static_assert(sizeof(Frontend_C_PlaySpeech) == 0x000038, "Wrong size on Frontend_C_PlaySpeech");
static_assert(offsetof(Frontend_C_PlaySpeech, Filename) == 0x000000, "Member 'Frontend_C_PlaySpeech::Filename' has a wrong offset!");
static_assert(offsetof(Frontend_C_PlaySpeech, SampleRate) == 0x000010, "Member 'Frontend_C_PlaySpeech::SampleRate' has a wrong offset!");
static_assert(offsetof(Frontend_C_PlaySpeech, AssetFile) == 0x000018, "Member 'Frontend_C_PlaySpeech::AssetFile' has a wrong offset!");
static_assert(offsetof(Frontend_C_PlaySpeech, CallFunc_GetPlayerController_ReturnValue) == 0x000020, "Member 'Frontend_C_PlaySpeech::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(Frontend_C_PlaySpeech, K2Node_DynamicCast_AsFort_Player_Controller_Front_End) == 0x000028, "Member 'Frontend_C_PlaySpeech::K2Node_DynamicCast_AsFort_Player_Controller_Front_End' has a wrong offset!");
static_assert(offsetof(Frontend_C_PlaySpeech, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'Frontend_C_PlaySpeech::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}
