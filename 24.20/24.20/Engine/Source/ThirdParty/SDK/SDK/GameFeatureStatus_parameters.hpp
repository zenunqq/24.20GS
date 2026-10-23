#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct GameFeatureStatus_C_ExecuteUbergraph_GameFeatureStatus final
{
public:
	int32                                         EntryPoint;
	EAthenaGameFeatureStatus                      K2Node_Event_NewStatus;
};
static_assert(alignof(GameFeatureStatus_C_ExecuteUbergraph_GameFeatureStatus) == 0x000004, "Wrong alignment on GameFeatureStatus_C_ExecuteUbergraph_GameFeatureStatus");
static_assert(sizeof(GameFeatureStatus_C_ExecuteUbergraph_GameFeatureStatus) == 0x000008, "Wrong size on GameFeatureStatus_C_ExecuteUbergraph_GameFeatureStatus");
static_assert(offsetof(GameFeatureStatus_C_ExecuteUbergraph_GameFeatureStatus, EntryPoint) == 0x000000, "Member 'GameFeatureStatus_C_ExecuteUbergraph_GameFeatureStatus::EntryPoint' has a wrong offset!");
static_assert(offsetof(GameFeatureStatus_C_ExecuteUbergraph_GameFeatureStatus, K2Node_Event_NewStatus) == 0x000004, "Member 'GameFeatureStatus_C_ExecuteUbergraph_GameFeatureStatus::K2Node_Event_NewStatus' has a wrong offset!");

struct GameFeatureStatus_C_HandleStatusChanged final
{
public:
	EAthenaGameFeatureStatus                      CurrentStatus;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	EAthenaGameFeatureStatus                      Temp_byte_Variable;
	uint8                                         Pad_3[0x5];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	EAthenaGameFeatureStatus                      Temp_byte_Variable_1;
	uint8                                         Pad_11[0x3];
	struct FLinearColor                           K2Node_Select_Default;
	uint8                                         Pad_24[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UWidget*                                K2Node_Select_Default_1;
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;
};
static_assert(alignof(GameFeatureStatus_C_HandleStatusChanged) == 0x000008, "Wrong alignment on GameFeatureStatus_C_HandleStatusChanged");
static_assert(sizeof(GameFeatureStatus_C_HandleStatusChanged) == 0x000048, "Wrong size on GameFeatureStatus_C_HandleStatusChanged");
static_assert(offsetof(GameFeatureStatus_C_HandleStatusChanged, CurrentStatus) == 0x000000, "Member 'GameFeatureStatus_C_HandleStatusChanged::CurrentStatus' has a wrong offset!");
static_assert(offsetof(GameFeatureStatus_C_HandleStatusChanged, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'GameFeatureStatus_C_HandleStatusChanged::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GameFeatureStatus_C_HandleStatusChanged, Temp_byte_Variable) == 0x000002, "Member 'GameFeatureStatus_C_HandleStatusChanged::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GameFeatureStatus_C_HandleStatusChanged, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'GameFeatureStatus_C_HandleStatusChanged::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(GameFeatureStatus_C_HandleStatusChanged, Temp_byte_Variable_1) == 0x000010, "Member 'GameFeatureStatus_C_HandleStatusChanged::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(GameFeatureStatus_C_HandleStatusChanged, K2Node_Select_Default) == 0x000014, "Member 'GameFeatureStatus_C_HandleStatusChanged::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GameFeatureStatus_C_HandleStatusChanged, CallFunc_PlayAnimationForward_ReturnValue) == 0x000028, "Member 'GameFeatureStatus_C_HandleStatusChanged::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(GameFeatureStatus_C_HandleStatusChanged, CallFunc_PlayAnimation_ReturnValue) == 0x000030, "Member 'GameFeatureStatus_C_HandleStatusChanged::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GameFeatureStatus_C_HandleStatusChanged, K2Node_Select_Default_1) == 0x000038, "Member 'GameFeatureStatus_C_HandleStatusChanged::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(GameFeatureStatus_C_HandleStatusChanged, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000040, "Member 'GameFeatureStatus_C_HandleStatusChanged::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

struct GameFeatureStatus_C_OnStatusChanged final
{
public:
	EAthenaGameFeatureStatus                      NewStatus;
};
static_assert(alignof(GameFeatureStatus_C_OnStatusChanged) == 0x000001, "Wrong alignment on GameFeatureStatus_C_OnStatusChanged");
static_assert(sizeof(GameFeatureStatus_C_OnStatusChanged) == 0x000001, "Wrong size on GameFeatureStatus_C_OnStatusChanged");
static_assert(offsetof(GameFeatureStatus_C_OnStatusChanged, NewStatus) == 0x000000, "Member 'GameFeatureStatus_C_OnStatusChanged::NewStatus' has a wrong offset!");

}
