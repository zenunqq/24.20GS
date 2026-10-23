#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct AthenaWatchers_C_SpectatorsBegan final
{
public:
	bool                                          bBigGroup;
};
static_assert(alignof(AthenaWatchers_C_SpectatorsBegan) == 0x000001, "Wrong alignment on AthenaWatchers_C_SpectatorsBegan");
static_assert(sizeof(AthenaWatchers_C_SpectatorsBegan) == 0x000001, "Wrong size on AthenaWatchers_C_SpectatorsBegan");
static_assert(offsetof(AthenaWatchers_C_SpectatorsBegan, bBigGroup) == 0x000000, "Member 'AthenaWatchers_C_SpectatorsBegan::bBigGroup' has a wrong offset!");

struct AthenaWatchers_C_SpectatorsAdded final
{
public:
	bool                                          bBigGroup;
};
static_assert(alignof(AthenaWatchers_C_SpectatorsAdded) == 0x000001, "Wrong alignment on AthenaWatchers_C_SpectatorsAdded");
static_assert(sizeof(AthenaWatchers_C_SpectatorsAdded) == 0x000001, "Wrong size on AthenaWatchers_C_SpectatorsAdded");
static_assert(offsetof(AthenaWatchers_C_SpectatorsAdded, bBigGroup) == 0x000000, "Member 'AthenaWatchers_C_SpectatorsAdded::bBigGroup' has a wrong offset!");

struct AthenaWatchers_C_SpectatorCountChanged_BP final
{
public:
	int32                                         NewCount;
};
static_assert(alignof(AthenaWatchers_C_SpectatorCountChanged_BP) == 0x000004, "Wrong alignment on AthenaWatchers_C_SpectatorCountChanged_BP");
static_assert(sizeof(AthenaWatchers_C_SpectatorCountChanged_BP) == 0x000004, "Wrong size on AthenaWatchers_C_SpectatorCountChanged_BP");
static_assert(offsetof(AthenaWatchers_C_SpectatorCountChanged_BP, NewCount) == 0x000000, "Member 'AthenaWatchers_C_SpectatorCountChanged_BP::NewCount' has a wrong offset!");

struct AthenaWatchers_C_ExecuteUbergraph_AthenaWatchers final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	bool                                          K2Node_Event_bBigGroup_1;
	bool                                          K2Node_Event_bBigGroup;
	uint8                                         Pad_12[0x2];
	int32                                         K2Node_Event_NewCount;
};
static_assert(alignof(AthenaWatchers_C_ExecuteUbergraph_AthenaWatchers) == 0x000008, "Wrong alignment on AthenaWatchers_C_ExecuteUbergraph_AthenaWatchers");
static_assert(sizeof(AthenaWatchers_C_ExecuteUbergraph_AthenaWatchers) == 0x000018, "Wrong size on AthenaWatchers_C_ExecuteUbergraph_AthenaWatchers");
static_assert(offsetof(AthenaWatchers_C_ExecuteUbergraph_AthenaWatchers, EntryPoint) == 0x000000, "Member 'AthenaWatchers_C_ExecuteUbergraph_AthenaWatchers::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaWatchers_C_ExecuteUbergraph_AthenaWatchers, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'AthenaWatchers_C_ExecuteUbergraph_AthenaWatchers::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaWatchers_C_ExecuteUbergraph_AthenaWatchers, K2Node_Event_bBigGroup_1) == 0x000010, "Member 'AthenaWatchers_C_ExecuteUbergraph_AthenaWatchers::K2Node_Event_bBigGroup_1' has a wrong offset!");
static_assert(offsetof(AthenaWatchers_C_ExecuteUbergraph_AthenaWatchers, K2Node_Event_bBigGroup) == 0x000011, "Member 'AthenaWatchers_C_ExecuteUbergraph_AthenaWatchers::K2Node_Event_bBigGroup' has a wrong offset!");
static_assert(offsetof(AthenaWatchers_C_ExecuteUbergraph_AthenaWatchers, K2Node_Event_NewCount) == 0x000014, "Member 'AthenaWatchers_C_ExecuteUbergraph_AthenaWatchers::K2Node_Event_NewCount' has a wrong offset!");

}
