#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct PlayerRankEmblem_C_SetBannerSurroundLevel final
{
public:
	int32                                         Level;
	bool                                          Animate;
	uint8                                         Pad_5[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(PlayerRankEmblem_C_SetBannerSurroundLevel) == 0x000008, "Wrong alignment on PlayerRankEmblem_C_SetBannerSurroundLevel");
static_assert(sizeof(PlayerRankEmblem_C_SetBannerSurroundLevel) == 0x000010, "Wrong size on PlayerRankEmblem_C_SetBannerSurroundLevel");
static_assert(offsetof(PlayerRankEmblem_C_SetBannerSurroundLevel, Level) == 0x000000, "Member 'PlayerRankEmblem_C_SetBannerSurroundLevel::Level' has a wrong offset!");
static_assert(offsetof(PlayerRankEmblem_C_SetBannerSurroundLevel, Animate) == 0x000004, "Member 'PlayerRankEmblem_C_SetBannerSurroundLevel::Animate' has a wrong offset!");
static_assert(offsetof(PlayerRankEmblem_C_SetBannerSurroundLevel, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'PlayerRankEmblem_C_SetBannerSurroundLevel::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

struct PlayerRankEmblem_C_SetBannerOwner final
{
public:
	class AFortPlayerController*                  Target;
	struct FUniqueNetIdRepl                       CallFunc_GetGameAccountId_ReturnValue;
};
static_assert(alignof(PlayerRankEmblem_C_SetBannerOwner) == 0x000008, "Wrong alignment on PlayerRankEmblem_C_SetBannerOwner");
static_assert(sizeof(PlayerRankEmblem_C_SetBannerOwner) == 0x000038, "Wrong size on PlayerRankEmblem_C_SetBannerOwner");
static_assert(offsetof(PlayerRankEmblem_C_SetBannerOwner, Target) == 0x000000, "Member 'PlayerRankEmblem_C_SetBannerOwner::Target' has a wrong offset!");
static_assert(offsetof(PlayerRankEmblem_C_SetBannerOwner, CallFunc_GetGameAccountId_ReturnValue) == 0x000008, "Member 'PlayerRankEmblem_C_SetBannerOwner::CallFunc_GetGameAccountId_ReturnValue' has a wrong offset!");

struct PlayerRankEmblem_C_SetBannerInfo final
{
public:
	struct FPlayerBannerInfo                      Banner;
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;
};
static_assert(alignof(PlayerRankEmblem_C_SetBannerInfo) == 0x000008, "Wrong alignment on PlayerRankEmblem_C_SetBannerInfo");
static_assert(sizeof(PlayerRankEmblem_C_SetBannerInfo) == 0x000030, "Wrong size on PlayerRankEmblem_C_SetBannerInfo");
static_assert(offsetof(PlayerRankEmblem_C_SetBannerInfo, Banner) == 0x000000, "Member 'PlayerRankEmblem_C_SetBannerInfo::Banner' has a wrong offset!");
static_assert(offsetof(PlayerRankEmblem_C_SetBannerInfo, CallFunc_Conv_StringToName_ReturnValue) == 0x000028, "Member 'PlayerRankEmblem_C_SetBannerInfo::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRankEmblem_C_SetBannerInfo, CallFunc_Conv_StringToName_ReturnValue_1) == 0x00002C, "Member 'PlayerRankEmblem_C_SetBannerInfo::CallFunc_Conv_StringToName_ReturnValue_1' has a wrong offset!");

struct PlayerRankEmblem_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(PlayerRankEmblem_C_PreConstruct) == 0x000001, "Wrong alignment on PlayerRankEmblem_C_PreConstruct");
static_assert(sizeof(PlayerRankEmblem_C_PreConstruct) == 0x000001, "Wrong size on PlayerRankEmblem_C_PreConstruct");
static_assert(offsetof(PlayerRankEmblem_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'PlayerRankEmblem_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct PlayerRankEmblem_C_ExecuteUbergraph_PlayerRankEmblem final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_19[0x7];
	struct FUniqueNetIdRepl                       CallFunc_GetGameAccountId_ReturnValue;
	bool                                          K2Node_Event_IsDesignTime;
};
static_assert(alignof(PlayerRankEmblem_C_ExecuteUbergraph_PlayerRankEmblem) == 0x000008, "Wrong alignment on PlayerRankEmblem_C_ExecuteUbergraph_PlayerRankEmblem");
static_assert(sizeof(PlayerRankEmblem_C_ExecuteUbergraph_PlayerRankEmblem) == 0x000058, "Wrong size on PlayerRankEmblem_C_ExecuteUbergraph_PlayerRankEmblem");
static_assert(offsetof(PlayerRankEmblem_C_ExecuteUbergraph_PlayerRankEmblem, EntryPoint) == 0x000000, "Member 'PlayerRankEmblem_C_ExecuteUbergraph_PlayerRankEmblem::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerRankEmblem_C_ExecuteUbergraph_PlayerRankEmblem, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'PlayerRankEmblem_C_ExecuteUbergraph_PlayerRankEmblem::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRankEmblem_C_ExecuteUbergraph_PlayerRankEmblem, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000010, "Member 'PlayerRankEmblem_C_ExecuteUbergraph_PlayerRankEmblem::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(PlayerRankEmblem_C_ExecuteUbergraph_PlayerRankEmblem, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'PlayerRankEmblem_C_ExecuteUbergraph_PlayerRankEmblem::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerRankEmblem_C_ExecuteUbergraph_PlayerRankEmblem, CallFunc_GetGameAccountId_ReturnValue) == 0x000020, "Member 'PlayerRankEmblem_C_ExecuteUbergraph_PlayerRankEmblem::CallFunc_GetGameAccountId_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerRankEmblem_C_ExecuteUbergraph_PlayerRankEmblem, K2Node_Event_IsDesignTime) == 0x000050, "Member 'PlayerRankEmblem_C_ExecuteUbergraph_PlayerRankEmblem::K2Node_Event_IsDesignTime' has a wrong offset!");

}
