#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"

namespace SDK::Params
{

struct Squad_C_ExecuteUbergraph_Squad final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UObject*                                K2Node_CustomEvent_Loaded_1;
	class UObject*                                Temp_object_Variable;
	class UTexture*                               K2Node_DynamicCast_AsTexture;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_21[0x7];
	class UObject*                                K2Node_CustomEvent_Loaded;
	class UObject*                                Temp_object_Variable_1;
	class UTexture*                               K2Node_DynamicCast_AsTexture_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_41[0x7];
	struct FAthenaTeamDisplayInfo                 K2Node_Event_SquadStyle;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_1;
	bool                                          K2Node_Event_bSquadIsEmpty;
	bool                                          K2Node_Event_bMultipleSquadsPopulated;
	uint8                                         Pad_FA[0x6];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_2;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_3;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_4;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_5;
};
static_assert(alignof(Squad_C_ExecuteUbergraph_Squad) == 0x000008, "Wrong alignment on Squad_C_ExecuteUbergraph_Squad");
static_assert(sizeof(Squad_C_ExecuteUbergraph_Squad) == 0x000120, "Wrong size on Squad_C_ExecuteUbergraph_Squad");
static_assert(offsetof(Squad_C_ExecuteUbergraph_Squad, EntryPoint) == 0x000000, "Member 'Squad_C_ExecuteUbergraph_Squad::EntryPoint' has a wrong offset!");
static_assert(offsetof(Squad_C_ExecuteUbergraph_Squad, K2Node_CustomEvent_Loaded_1) == 0x000008, "Member 'Squad_C_ExecuteUbergraph_Squad::K2Node_CustomEvent_Loaded_1' has a wrong offset!");
static_assert(offsetof(Squad_C_ExecuteUbergraph_Squad, Temp_object_Variable) == 0x000010, "Member 'Squad_C_ExecuteUbergraph_Squad::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Squad_C_ExecuteUbergraph_Squad, K2Node_DynamicCast_AsTexture) == 0x000018, "Member 'Squad_C_ExecuteUbergraph_Squad::K2Node_DynamicCast_AsTexture' has a wrong offset!");
static_assert(offsetof(Squad_C_ExecuteUbergraph_Squad, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'Squad_C_ExecuteUbergraph_Squad::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Squad_C_ExecuteUbergraph_Squad, K2Node_CustomEvent_Loaded) == 0x000028, "Member 'Squad_C_ExecuteUbergraph_Squad::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(Squad_C_ExecuteUbergraph_Squad, Temp_object_Variable_1) == 0x000030, "Member 'Squad_C_ExecuteUbergraph_Squad::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(Squad_C_ExecuteUbergraph_Squad, K2Node_DynamicCast_AsTexture_1) == 0x000038, "Member 'Squad_C_ExecuteUbergraph_Squad::K2Node_DynamicCast_AsTexture_1' has a wrong offset!");
static_assert(offsetof(Squad_C_ExecuteUbergraph_Squad, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'Squad_C_ExecuteUbergraph_Squad::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Squad_C_ExecuteUbergraph_Squad, K2Node_Event_SquadStyle) == 0x000048, "Member 'Squad_C_ExecuteUbergraph_Squad::K2Node_Event_SquadStyle' has a wrong offset!");
static_assert(offsetof(Squad_C_ExecuteUbergraph_Squad, CallFunc_GetDynamicMaterial_ReturnValue) == 0x0000D0, "Member 'Squad_C_ExecuteUbergraph_Squad::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(Squad_C_ExecuteUbergraph_Squad, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x0000D8, "Member 'Squad_C_ExecuteUbergraph_Squad::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Squad_C_ExecuteUbergraph_Squad, K2Node_CreateDelegate_OutputDelegate) == 0x0000E0, "Member 'Squad_C_ExecuteUbergraph_Squad::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Squad_C_ExecuteUbergraph_Squad, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000EC, "Member 'Squad_C_ExecuteUbergraph_Squad::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Squad_C_ExecuteUbergraph_Squad, K2Node_Event_bSquadIsEmpty) == 0x0000F8, "Member 'Squad_C_ExecuteUbergraph_Squad::K2Node_Event_bSquadIsEmpty' has a wrong offset!");
static_assert(offsetof(Squad_C_ExecuteUbergraph_Squad, K2Node_Event_bMultipleSquadsPopulated) == 0x0000F9, "Member 'Squad_C_ExecuteUbergraph_Squad::K2Node_Event_bMultipleSquadsPopulated' has a wrong offset!");
static_assert(offsetof(Squad_C_ExecuteUbergraph_Squad, CallFunc_GetDynamicMaterial_ReturnValue_2) == 0x000100, "Member 'Squad_C_ExecuteUbergraph_Squad::CallFunc_GetDynamicMaterial_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Squad_C_ExecuteUbergraph_Squad, CallFunc_GetDynamicMaterial_ReturnValue_3) == 0x000108, "Member 'Squad_C_ExecuteUbergraph_Squad::CallFunc_GetDynamicMaterial_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Squad_C_ExecuteUbergraph_Squad, CallFunc_GetDynamicMaterial_ReturnValue_4) == 0x000110, "Member 'Squad_C_ExecuteUbergraph_Squad::CallFunc_GetDynamicMaterial_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Squad_C_ExecuteUbergraph_Squad, CallFunc_GetDynamicMaterial_ReturnValue_5) == 0x000118, "Member 'Squad_C_ExecuteUbergraph_Squad::CallFunc_GetDynamicMaterial_ReturnValue_5' has a wrong offset!");

struct Squad_C_OnLoaded_2EC4A7E44D1A9CF51A66D8904054E26E final
{
public:
	class UObject*                                Loaded;
};
static_assert(alignof(Squad_C_OnLoaded_2EC4A7E44D1A9CF51A66D8904054E26E) == 0x000008, "Wrong alignment on Squad_C_OnLoaded_2EC4A7E44D1A9CF51A66D8904054E26E");
static_assert(sizeof(Squad_C_OnLoaded_2EC4A7E44D1A9CF51A66D8904054E26E) == 0x000008, "Wrong size on Squad_C_OnLoaded_2EC4A7E44D1A9CF51A66D8904054E26E");
static_assert(offsetof(Squad_C_OnLoaded_2EC4A7E44D1A9CF51A66D8904054E26E, Loaded) == 0x000000, "Member 'Squad_C_OnLoaded_2EC4A7E44D1A9CF51A66D8904054E26E::Loaded' has a wrong offset!");

struct Squad_C_OnLoaded_68F5F01141304474DB5D18BD77CD085C final
{
public:
	class UObject*                                Loaded;
};
static_assert(alignof(Squad_C_OnLoaded_68F5F01141304474DB5D18BD77CD085C) == 0x000008, "Wrong alignment on Squad_C_OnLoaded_68F5F01141304474DB5D18BD77CD085C");
static_assert(sizeof(Squad_C_OnLoaded_68F5F01141304474DB5D18BD77CD085C) == 0x000008, "Wrong size on Squad_C_OnLoaded_68F5F01141304474DB5D18BD77CD085C");
static_assert(offsetof(Squad_C_OnLoaded_68F5F01141304474DB5D18BD77CD085C, Loaded) == 0x000000, "Member 'Squad_C_OnLoaded_68F5F01141304474DB5D18BD77CD085C::Loaded' has a wrong offset!");

struct Squad_C_OnSquadAssigned final
{
public:
	struct FAthenaTeamDisplayInfo                 SquadStyle;
};
static_assert(alignof(Squad_C_OnSquadAssigned) == 0x000008, "Wrong alignment on Squad_C_OnSquadAssigned");
static_assert(sizeof(Squad_C_OnSquadAssigned) == 0x000088, "Wrong size on Squad_C_OnSquadAssigned");
static_assert(offsetof(Squad_C_OnSquadAssigned, SquadStyle) == 0x000000, "Member 'Squad_C_OnSquadAssigned::SquadStyle' has a wrong offset!");

struct Squad_C_OnSquadIsEmptyChanged final
{
public:
	bool                                          bSquadIsEmpty;
	bool                                          bMultipleSquadsPopulated;
};
static_assert(alignof(Squad_C_OnSquadIsEmptyChanged) == 0x000001, "Wrong alignment on Squad_C_OnSquadIsEmptyChanged");
static_assert(sizeof(Squad_C_OnSquadIsEmptyChanged) == 0x000002, "Wrong size on Squad_C_OnSquadIsEmptyChanged");
static_assert(offsetof(Squad_C_OnSquadIsEmptyChanged, bSquadIsEmpty) == 0x000000, "Member 'Squad_C_OnSquadIsEmptyChanged::bSquadIsEmpty' has a wrong offset!");
static_assert(offsetof(Squad_C_OnSquadIsEmptyChanged, bMultipleSquadsPopulated) == 0x000001, "Member 'Squad_C_OnSquadIsEmptyChanged::bMultipleSquadsPopulated' has a wrong offset!");

}
