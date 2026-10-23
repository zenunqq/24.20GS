#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct Frontend_BG_Main_C_ExecuteUbergraph_Frontend_BG_Main final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UTexture*                               K2Node_ActorBoundEvent_BackgroundImage;
	class FString                                 K2Node_ActorBoundEvent_PresetEnvironmentName;
};
static_assert(alignof(Frontend_BG_Main_C_ExecuteUbergraph_Frontend_BG_Main) == 0x000008, "Wrong alignment on Frontend_BG_Main_C_ExecuteUbergraph_Frontend_BG_Main");
static_assert(sizeof(Frontend_BG_Main_C_ExecuteUbergraph_Frontend_BG_Main) == 0x000020, "Wrong size on Frontend_BG_Main_C_ExecuteUbergraph_Frontend_BG_Main");
static_assert(offsetof(Frontend_BG_Main_C_ExecuteUbergraph_Frontend_BG_Main, EntryPoint) == 0x000000, "Member 'Frontend_BG_Main_C_ExecuteUbergraph_Frontend_BG_Main::EntryPoint' has a wrong offset!");
static_assert(offsetof(Frontend_BG_Main_C_ExecuteUbergraph_Frontend_BG_Main, K2Node_ActorBoundEvent_BackgroundImage) == 0x000008, "Member 'Frontend_BG_Main_C_ExecuteUbergraph_Frontend_BG_Main::K2Node_ActorBoundEvent_BackgroundImage' has a wrong offset!");
static_assert(offsetof(Frontend_BG_Main_C_ExecuteUbergraph_Frontend_BG_Main, K2Node_ActorBoundEvent_PresetEnvironmentName) == 0x000010, "Member 'Frontend_BG_Main_C_ExecuteUbergraph_Frontend_BG_Main::K2Node_ActorBoundEvent_PresetEnvironmentName' has a wrong offset!");

struct Frontend_BG_Main_C_BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature final
{
public:
	class UTexture*                               BackgroundImage;
};
static_assert(alignof(Frontend_BG_Main_C_BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature) == 0x000008, "Wrong alignment on Frontend_BG_Main_C_BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature");
static_assert(sizeof(Frontend_BG_Main_C_BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature) == 0x000008, "Wrong size on Frontend_BG_Main_C_BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature");
static_assert(offsetof(Frontend_BG_Main_C_BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature, BackgroundImage) == 0x000000, "Member 'Frontend_BG_Main_C_BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature::BackgroundImage' has a wrong offset!");

struct Frontend_BG_Main_C_BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature final
{
public:
	class FString                                 PresetEnvironmentName;
};
static_assert(alignof(Frontend_BG_Main_C_BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature) == 0x000008, "Wrong alignment on Frontend_BG_Main_C_BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature");
static_assert(sizeof(Frontend_BG_Main_C_BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature) == 0x000010, "Wrong size on Frontend_BG_Main_C_BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature");
static_assert(offsetof(Frontend_BG_Main_C_BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature, PresetEnvironmentName) == 0x000000, "Member 'Frontend_BG_Main_C_BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature::PresetEnvironmentName' has a wrong offset!");

}
