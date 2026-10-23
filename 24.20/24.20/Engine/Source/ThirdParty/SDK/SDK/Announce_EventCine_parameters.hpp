#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct Announce_EventCine_C_HandleClientEvent_CinematicFinishedPlaying final
{
public:
	class UObject*                                EventSource;
	class UObject*                                EventFocus;
	struct FFortClientEvent                       ClientEvent;
};
static_assert(alignof(Announce_EventCine_C_HandleClientEvent_CinematicFinishedPlaying) == 0x000008, "Wrong alignment on Announce_EventCine_C_HandleClientEvent_CinematicFinishedPlaying");
static_assert(sizeof(Announce_EventCine_C_HandleClientEvent_CinematicFinishedPlaying) == 0x000028, "Wrong size on Announce_EventCine_C_HandleClientEvent_CinematicFinishedPlaying");
static_assert(offsetof(Announce_EventCine_C_HandleClientEvent_CinematicFinishedPlaying, EventSource) == 0x000000, "Member 'Announce_EventCine_C_HandleClientEvent_CinematicFinishedPlaying::EventSource' has a wrong offset!");
static_assert(offsetof(Announce_EventCine_C_HandleClientEvent_CinematicFinishedPlaying, EventFocus) == 0x000008, "Member 'Announce_EventCine_C_HandleClientEvent_CinematicFinishedPlaying::EventFocus' has a wrong offset!");
static_assert(offsetof(Announce_EventCine_C_HandleClientEvent_CinematicFinishedPlaying, ClientEvent) == 0x000010, "Member 'Announce_EventCine_C_HandleClientEvent_CinematicFinishedPlaying::ClientEvent' has a wrong offset!");

struct Announce_EventCine_C_ExecuteUbergraph_Announce_EventCine final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_IsClosed_Variable;
	uint8                                         Pad_5[0x3];
	class UObject*                                K2Node_HandleClientEvent_EventSource;
	class UObject*                                K2Node_HandleClientEvent_EventFocus;
	struct FFortClientEvent                       K2Node_HandleClientEvent_ClientEvent;
	bool                                          Temp_bool_Has_Been_Initd_Variable;
	uint8                                         Pad_31[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	class UFortMediaInfo*                         CallFunc_SpawnObject_ReturnValue;
};
static_assert(alignof(Announce_EventCine_C_ExecuteUbergraph_Announce_EventCine) == 0x000008, "Wrong alignment on Announce_EventCine_C_ExecuteUbergraph_Announce_EventCine");
static_assert(sizeof(Announce_EventCine_C_ExecuteUbergraph_Announce_EventCine) == 0x000050, "Wrong size on Announce_EventCine_C_ExecuteUbergraph_Announce_EventCine");
static_assert(offsetof(Announce_EventCine_C_ExecuteUbergraph_Announce_EventCine, EntryPoint) == 0x000000, "Member 'Announce_EventCine_C_ExecuteUbergraph_Announce_EventCine::EntryPoint' has a wrong offset!");
static_assert(offsetof(Announce_EventCine_C_ExecuteUbergraph_Announce_EventCine, Temp_bool_IsClosed_Variable) == 0x000004, "Member 'Announce_EventCine_C_ExecuteUbergraph_Announce_EventCine::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(Announce_EventCine_C_ExecuteUbergraph_Announce_EventCine, K2Node_HandleClientEvent_EventSource) == 0x000008, "Member 'Announce_EventCine_C_ExecuteUbergraph_Announce_EventCine::K2Node_HandleClientEvent_EventSource' has a wrong offset!");
static_assert(offsetof(Announce_EventCine_C_ExecuteUbergraph_Announce_EventCine, K2Node_HandleClientEvent_EventFocus) == 0x000010, "Member 'Announce_EventCine_C_ExecuteUbergraph_Announce_EventCine::K2Node_HandleClientEvent_EventFocus' has a wrong offset!");
static_assert(offsetof(Announce_EventCine_C_ExecuteUbergraph_Announce_EventCine, K2Node_HandleClientEvent_ClientEvent) == 0x000018, "Member 'Announce_EventCine_C_ExecuteUbergraph_Announce_EventCine::K2Node_HandleClientEvent_ClientEvent' has a wrong offset!");
static_assert(offsetof(Announce_EventCine_C_ExecuteUbergraph_Announce_EventCine, Temp_bool_Has_Been_Initd_Variable) == 0x000030, "Member 'Announce_EventCine_C_ExecuteUbergraph_Announce_EventCine::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(Announce_EventCine_C_ExecuteUbergraph_Announce_EventCine, K2Node_CreateDelegate_OutputDelegate) == 0x000034, "Member 'Announce_EventCine_C_ExecuteUbergraph_Announce_EventCine::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Announce_EventCine_C_ExecuteUbergraph_Announce_EventCine, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000040, "Member 'Announce_EventCine_C_ExecuteUbergraph_Announce_EventCine::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(Announce_EventCine_C_ExecuteUbergraph_Announce_EventCine, CallFunc_SpawnObject_ReturnValue) == 0x000048, "Member 'Announce_EventCine_C_ExecuteUbergraph_Announce_EventCine::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");

}
