#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct BuildWatermark_C_ExecuteUbergraph_BuildWatermark final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_11[0x3];
	TDelegate<void(struct FFortTeamMemberInfo& PlayerInfo)> K2Node_CreateDelegate_OutputDelegate;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	uint8                                         Pad_2C[0x4];
	struct FFortTeamMemberInfo                    K2Node_CustomEvent_PlayerInfo;
};
static_assert(alignof(BuildWatermark_C_ExecuteUbergraph_BuildWatermark) == 0x000010, "Wrong alignment on BuildWatermark_C_ExecuteUbergraph_BuildWatermark");
static_assert(sizeof(BuildWatermark_C_ExecuteUbergraph_BuildWatermark) == 0x000280, "Wrong size on BuildWatermark_C_ExecuteUbergraph_BuildWatermark");
static_assert(offsetof(BuildWatermark_C_ExecuteUbergraph_BuildWatermark, EntryPoint) == 0x000000, "Member 'BuildWatermark_C_ExecuteUbergraph_BuildWatermark::EntryPoint' has a wrong offset!");
static_assert(offsetof(BuildWatermark_C_ExecuteUbergraph_BuildWatermark, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'BuildWatermark_C_ExecuteUbergraph_BuildWatermark::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(BuildWatermark_C_ExecuteUbergraph_BuildWatermark, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BuildWatermark_C_ExecuteUbergraph_BuildWatermark::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BuildWatermark_C_ExecuteUbergraph_BuildWatermark, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'BuildWatermark_C_ExecuteUbergraph_BuildWatermark::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BuildWatermark_C_ExecuteUbergraph_BuildWatermark, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'BuildWatermark_C_ExecuteUbergraph_BuildWatermark::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BuildWatermark_C_ExecuteUbergraph_BuildWatermark, K2Node_CustomEvent_PlayerInfo) == 0x000030, "Member 'BuildWatermark_C_ExecuteUbergraph_BuildWatermark::K2Node_CustomEvent_PlayerInfo' has a wrong offset!");

struct BuildWatermark_C_HandlePlayerStateChanged final
{
public:
	struct FFortTeamMemberInfo                    PlayerInfo;
};
static_assert(alignof(BuildWatermark_C_HandlePlayerStateChanged) == 0x000010, "Wrong alignment on BuildWatermark_C_HandlePlayerStateChanged");
static_assert(sizeof(BuildWatermark_C_HandlePlayerStateChanged) == 0x000250, "Wrong size on BuildWatermark_C_HandlePlayerStateChanged");
static_assert(offsetof(BuildWatermark_C_HandlePlayerStateChanged, PlayerInfo) == 0x000000, "Member 'BuildWatermark_C_HandlePlayerStateChanged::PlayerInfo' has a wrong offset!");

}
