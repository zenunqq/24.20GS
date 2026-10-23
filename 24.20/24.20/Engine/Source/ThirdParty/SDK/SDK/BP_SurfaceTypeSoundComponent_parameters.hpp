#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "PhysicsCore_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct BP_SurfaceTypeSoundComponent_C_ActuallyPlaySound final
{
public:
	class USoundBase*                             CallFunc_Map_Find_Value;
	bool                                          CallFunc_Map_Find_ReturnValue;
};
static_assert(alignof(BP_SurfaceTypeSoundComponent_C_ActuallyPlaySound) == 0x000008, "Wrong alignment on BP_SurfaceTypeSoundComponent_C_ActuallyPlaySound");
static_assert(sizeof(BP_SurfaceTypeSoundComponent_C_ActuallyPlaySound) == 0x000010, "Wrong size on BP_SurfaceTypeSoundComponent_C_ActuallyPlaySound");
static_assert(offsetof(BP_SurfaceTypeSoundComponent_C_ActuallyPlaySound, CallFunc_Map_Find_Value) == 0x000000, "Member 'BP_SurfaceTypeSoundComponent_C_ActuallyPlaySound::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_SurfaceTypeSoundComponent_C_ActuallyPlaySound, CallFunc_Map_Find_ReturnValue) == 0x000008, "Member 'BP_SurfaceTypeSoundComponent_C_ActuallyPlaySound::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

struct BP_SurfaceTypeSoundComponent_C_ExecuteUbergraph_BP_SurfaceTypeSoundComponent final
{
public:
	int32                                         EntryPoint;
};
static_assert(alignof(BP_SurfaceTypeSoundComponent_C_ExecuteUbergraph_BP_SurfaceTypeSoundComponent) == 0x000004, "Wrong alignment on BP_SurfaceTypeSoundComponent_C_ExecuteUbergraph_BP_SurfaceTypeSoundComponent");
static_assert(sizeof(BP_SurfaceTypeSoundComponent_C_ExecuteUbergraph_BP_SurfaceTypeSoundComponent) == 0x000004, "Wrong size on BP_SurfaceTypeSoundComponent_C_ExecuteUbergraph_BP_SurfaceTypeSoundComponent");
static_assert(offsetof(BP_SurfaceTypeSoundComponent_C_ExecuteUbergraph_BP_SurfaceTypeSoundComponent, EntryPoint) == 0x000000, "Member 'BP_SurfaceTypeSoundComponent_C_ExecuteUbergraph_BP_SurfaceTypeSoundComponent::EntryPoint' has a wrong offset!");

struct BP_SurfaceTypeSoundComponent_C_PlaySound final
{
public:
	struct FVector                                Location_0;
	class USoundBase*                             CallFunc_Map_Find_Value;
	bool                                          CallFunc_Map_Find_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(BP_SurfaceTypeSoundComponent_C_PlaySound) == 0x000008, "Wrong alignment on BP_SurfaceTypeSoundComponent_C_PlaySound");
static_assert(sizeof(BP_SurfaceTypeSoundComponent_C_PlaySound) == 0x000028, "Wrong size on BP_SurfaceTypeSoundComponent_C_PlaySound");
static_assert(offsetof(BP_SurfaceTypeSoundComponent_C_PlaySound, Location_0) == 0x000000, "Member 'BP_SurfaceTypeSoundComponent_C_PlaySound::Location_0' has a wrong offset!");
static_assert(offsetof(BP_SurfaceTypeSoundComponent_C_PlaySound, CallFunc_Map_Find_Value) == 0x000018, "Member 'BP_SurfaceTypeSoundComponent_C_PlaySound::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_SurfaceTypeSoundComponent_C_PlaySound, CallFunc_Map_Find_ReturnValue) == 0x000020, "Member 'BP_SurfaceTypeSoundComponent_C_PlaySound::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SurfaceTypeSoundComponent_C_PlaySound, CallFunc_BooleanAND_ReturnValue) == 0x000021, "Member 'BP_SurfaceTypeSoundComponent_C_PlaySound::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

struct BP_SurfaceTypeSoundComponent_C_SetSurfaceType final
{
public:
	EPhysicalSurface                              SurfaceType_0;
	uint8                                         Pad_1[0x7];
	class AActor*                                 Actor;
	EPhysicalSurface                              Temp_byte_Variable;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_12[0x6];
	class ABuildingSMActor*                       K2Node_DynamicCast_AsBuilding_Static_Mesh;
	bool                                          K2Node_DynamicCast_bSuccess;
	EPhysicalSurface                              Temp_byte_Variable_1;
	EPhysicalSurface                              Temp_byte_Variable_2;
	EPhysicalSurface                              Temp_byte_Variable_3;
	EPhysicalSurface                              Temp_byte_Variable_4;
	EPhysicalSurface                              Temp_byte_Variable_5;
	EFortResourceType                             Temp_byte_Variable_6;
	EPhysicalSurface                              Temp_byte_Variable_7;
	EPhysicalSurface                              K2Node_Select_Default;
};
static_assert(alignof(BP_SurfaceTypeSoundComponent_C_SetSurfaceType) == 0x000008, "Wrong alignment on BP_SurfaceTypeSoundComponent_C_SetSurfaceType");
static_assert(sizeof(BP_SurfaceTypeSoundComponent_C_SetSurfaceType) == 0x000030, "Wrong size on BP_SurfaceTypeSoundComponent_C_SetSurfaceType");
static_assert(offsetof(BP_SurfaceTypeSoundComponent_C_SetSurfaceType, SurfaceType_0) == 0x000000, "Member 'BP_SurfaceTypeSoundComponent_C_SetSurfaceType::SurfaceType_0' has a wrong offset!");
static_assert(offsetof(BP_SurfaceTypeSoundComponent_C_SetSurfaceType, Actor) == 0x000008, "Member 'BP_SurfaceTypeSoundComponent_C_SetSurfaceType::Actor' has a wrong offset!");
static_assert(offsetof(BP_SurfaceTypeSoundComponent_C_SetSurfaceType, Temp_byte_Variable) == 0x000010, "Member 'BP_SurfaceTypeSoundComponent_C_SetSurfaceType::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_SurfaceTypeSoundComponent_C_SetSurfaceType, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'BP_SurfaceTypeSoundComponent_C_SetSurfaceType::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SurfaceTypeSoundComponent_C_SetSurfaceType, K2Node_DynamicCast_AsBuilding_Static_Mesh) == 0x000018, "Member 'BP_SurfaceTypeSoundComponent_C_SetSurfaceType::K2Node_DynamicCast_AsBuilding_Static_Mesh' has a wrong offset!");
static_assert(offsetof(BP_SurfaceTypeSoundComponent_C_SetSurfaceType, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_SurfaceTypeSoundComponent_C_SetSurfaceType::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SurfaceTypeSoundComponent_C_SetSurfaceType, Temp_byte_Variable_1) == 0x000021, "Member 'BP_SurfaceTypeSoundComponent_C_SetSurfaceType::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SurfaceTypeSoundComponent_C_SetSurfaceType, Temp_byte_Variable_2) == 0x000022, "Member 'BP_SurfaceTypeSoundComponent_C_SetSurfaceType::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SurfaceTypeSoundComponent_C_SetSurfaceType, Temp_byte_Variable_3) == 0x000023, "Member 'BP_SurfaceTypeSoundComponent_C_SetSurfaceType::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_SurfaceTypeSoundComponent_C_SetSurfaceType, Temp_byte_Variable_4) == 0x000024, "Member 'BP_SurfaceTypeSoundComponent_C_SetSurfaceType::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_SurfaceTypeSoundComponent_C_SetSurfaceType, Temp_byte_Variable_5) == 0x000025, "Member 'BP_SurfaceTypeSoundComponent_C_SetSurfaceType::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_SurfaceTypeSoundComponent_C_SetSurfaceType, Temp_byte_Variable_6) == 0x000026, "Member 'BP_SurfaceTypeSoundComponent_C_SetSurfaceType::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_SurfaceTypeSoundComponent_C_SetSurfaceType, Temp_byte_Variable_7) == 0x000027, "Member 'BP_SurfaceTypeSoundComponent_C_SetSurfaceType::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_SurfaceTypeSoundComponent_C_SetSurfaceType, K2Node_Select_Default) == 0x000028, "Member 'BP_SurfaceTypeSoundComponent_C_SetSurfaceType::K2Node_Select_Default' has a wrong offset!");

}
