#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct AOE_Commando_KeepOutExplosion_C_ExecuteUbergraph_AOE_Commando_KeepOutExplosion final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	double                                        K2Node_CustomEvent_Radius;
	float                                         CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast;
};
static_assert(alignof(AOE_Commando_KeepOutExplosion_C_ExecuteUbergraph_AOE_Commando_KeepOutExplosion) == 0x000008, "Wrong alignment on AOE_Commando_KeepOutExplosion_C_ExecuteUbergraph_AOE_Commando_KeepOutExplosion");
static_assert(sizeof(AOE_Commando_KeepOutExplosion_C_ExecuteUbergraph_AOE_Commando_KeepOutExplosion) == 0x000018, "Wrong size on AOE_Commando_KeepOutExplosion_C_ExecuteUbergraph_AOE_Commando_KeepOutExplosion");
static_assert(offsetof(AOE_Commando_KeepOutExplosion_C_ExecuteUbergraph_AOE_Commando_KeepOutExplosion, EntryPoint) == 0x000000, "Member 'AOE_Commando_KeepOutExplosion_C_ExecuteUbergraph_AOE_Commando_KeepOutExplosion::EntryPoint' has a wrong offset!");
static_assert(offsetof(AOE_Commando_KeepOutExplosion_C_ExecuteUbergraph_AOE_Commando_KeepOutExplosion, K2Node_CustomEvent_Radius) == 0x000008, "Member 'AOE_Commando_KeepOutExplosion_C_ExecuteUbergraph_AOE_Commando_KeepOutExplosion::K2Node_CustomEvent_Radius' has a wrong offset!");
static_assert(offsetof(AOE_Commando_KeepOutExplosion_C_ExecuteUbergraph_AOE_Commando_KeepOutExplosion, CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast) == 0x000010, "Member 'AOE_Commando_KeepOutExplosion_C_ExecuteUbergraph_AOE_Commando_KeepOutExplosion::CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast' has a wrong offset!");

struct AOE_Commando_KeepOutExplosion_C_OnRep_Radius final
{
public:
	struct FSoundAttenuationSettings              CallFunc_BP_GetAttenuationSettingsToApply_OutAttenuationSettings;
	bool                                          CallFunc_BP_GetAttenuationSettingsToApply_ReturnValue;
	uint8                                         Pad_3D1[0x7];
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	struct FSoundAttenuationSettings              K2Node_MakeStruct_SoundAttenuationSettings;
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast;
	float                                         K2Node_MakeStruct_FalloffDistance_ImplicitCast;
};
static_assert(alignof(AOE_Commando_KeepOutExplosion_C_OnRep_Radius) == 0x000008, "Wrong alignment on AOE_Commando_KeepOutExplosion_C_OnRep_Radius");
static_assert(sizeof(AOE_Commando_KeepOutExplosion_C_OnRep_Radius) == 0x0007C8, "Wrong size on AOE_Commando_KeepOutExplosion_C_OnRep_Radius");
static_assert(offsetof(AOE_Commando_KeepOutExplosion_C_OnRep_Radius, CallFunc_BP_GetAttenuationSettingsToApply_OutAttenuationSettings) == 0x000000, "Member 'AOE_Commando_KeepOutExplosion_C_OnRep_Radius::CallFunc_BP_GetAttenuationSettingsToApply_OutAttenuationSettings' has a wrong offset!");
static_assert(offsetof(AOE_Commando_KeepOutExplosion_C_OnRep_Radius, CallFunc_BP_GetAttenuationSettingsToApply_ReturnValue) == 0x0003D0, "Member 'AOE_Commando_KeepOutExplosion_C_OnRep_Radius::CallFunc_BP_GetAttenuationSettingsToApply_ReturnValue' has a wrong offset!");
static_assert(offsetof(AOE_Commando_KeepOutExplosion_C_OnRep_Radius, CallFunc_MakeVector_ReturnValue) == 0x0003D8, "Member 'AOE_Commando_KeepOutExplosion_C_OnRep_Radius::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(AOE_Commando_KeepOutExplosion_C_OnRep_Radius, K2Node_MakeStruct_SoundAttenuationSettings) == 0x0003F0, "Member 'AOE_Commando_KeepOutExplosion_C_OnRep_Radius::K2Node_MakeStruct_SoundAttenuationSettings' has a wrong offset!");
static_assert(offsetof(AOE_Commando_KeepOutExplosion_C_OnRep_Radius, CallFunc_SetFloatParameter_Param_ImplicitCast) == 0x0007C0, "Member 'AOE_Commando_KeepOutExplosion_C_OnRep_Radius::CallFunc_SetFloatParameter_Param_ImplicitCast' has a wrong offset!");
static_assert(offsetof(AOE_Commando_KeepOutExplosion_C_OnRep_Radius, K2Node_MakeStruct_FalloffDistance_ImplicitCast) == 0x0007C4, "Member 'AOE_Commando_KeepOutExplosion_C_OnRep_Radius::K2Node_MakeStruct_FalloffDistance_ImplicitCast' has a wrong offset!");

struct AOE_Commando_KeepOutExplosion_C_Send_Info final
{
public:
	double                                        Radius_0;
};
static_assert(alignof(AOE_Commando_KeepOutExplosion_C_Send_Info) == 0x000008, "Wrong alignment on AOE_Commando_KeepOutExplosion_C_Send_Info");
static_assert(sizeof(AOE_Commando_KeepOutExplosion_C_Send_Info) == 0x000008, "Wrong size on AOE_Commando_KeepOutExplosion_C_Send_Info");
static_assert(offsetof(AOE_Commando_KeepOutExplosion_C_Send_Info, Radius_0) == 0x000000, "Member 'AOE_Commando_KeepOutExplosion_C_Send_Info::Radius_0' has a wrong offset!");

}
