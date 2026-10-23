#pragma once

#include "Basic.hpp"

#include "CinematicLanuageToTrackStruct_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct Cinematic_C_ClearMovieWidget final
{
public:
	class UFortMovieWidget*                       MovieWidgetToClear;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_15[0x3];
	class UMediaPlayer*                           CallFunc_GetMediaPlayer_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
};
static_assert(alignof(Cinematic_C_ClearMovieWidget) == 0x000008, "Wrong alignment on Cinematic_C_ClearMovieWidget");
static_assert(sizeof(Cinematic_C_ClearMovieWidget) == 0x000028, "Wrong size on Cinematic_C_ClearMovieWidget");
static_assert(offsetof(Cinematic_C_ClearMovieWidget, MovieWidgetToClear) == 0x000000, "Member 'Cinematic_C_ClearMovieWidget::MovieWidgetToClear' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ClearMovieWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'Cinematic_C_ClearMovieWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ClearMovieWidget, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'Cinematic_C_ClearMovieWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ClearMovieWidget, CallFunc_GetMediaPlayer_ReturnValue) == 0x000018, "Member 'Cinematic_C_ClearMovieWidget::CallFunc_GetMediaPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ClearMovieWidget, CallFunc_IsValid_ReturnValue_1) == 0x000020, "Member 'Cinematic_C_ClearMovieWidget::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

struct Cinematic_C_ClearOldSubtitlesIfNecessary final
{
public:
	bool                                          NewSubtitlesExist;
	uint8                                         Pad_1[0x7];
	class UFortMediaSubtitlesPlayer*              NewSubtitles;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(Cinematic_C_ClearOldSubtitlesIfNecessary) == 0x000008, "Wrong alignment on Cinematic_C_ClearOldSubtitlesIfNecessary");
static_assert(sizeof(Cinematic_C_ClearOldSubtitlesIfNecessary) == 0x000018, "Wrong size on Cinematic_C_ClearOldSubtitlesIfNecessary");
static_assert(offsetof(Cinematic_C_ClearOldSubtitlesIfNecessary, NewSubtitlesExist) == 0x000000, "Member 'Cinematic_C_ClearOldSubtitlesIfNecessary::NewSubtitlesExist' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ClearOldSubtitlesIfNecessary, NewSubtitles) == 0x000008, "Member 'Cinematic_C_ClearOldSubtitlesIfNecessary::NewSubtitles' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ClearOldSubtitlesIfNecessary, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'Cinematic_C_ClearOldSubtitlesIfNecessary::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct Cinematic_C_ExecuteUbergraph_Cinematic final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UObject*                                K2Node_HandleClientEvent_EventSource;
	class UObject*                                K2Node_HandleClientEvent_EventFocus;
	struct FFortClientEvent                       K2Node_HandleClientEvent_ClientEvent;
	class UObject*                                K2Node_HandleClientEvent_EventSource_1;
	class UObject*                                K2Node_HandleClientEvent_EventFocus_1;
	struct FFortClientEvent                       K2Node_HandleClientEvent_ClientEvent_1;
	class UFortMediaSubtitlesPlayer*              K2Node_DynamicCast_AsFort_Media_Subtitles_Player;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_61[0x7];
	class UFortMediaInfo*                         K2Node_DynamicCast_AsFort_Media_Info;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_71[0x7];
	class UWidget*                                K2Node_Event_Widget;
	struct FContentPushState                      K2Node_Event_State;
	EFortUIState                                  K2Node_Event_PreviousUIState;
	EFortUIState                                  K2Node_Event_NextUIState;
	uint8                                         Pad_85[0x3];
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_99[0x7];
	class UMediaPlayer*                           CallFunc_GetMediaPlayer_ReturnValue;
	class UMediaPlayer*                           CallFunc_GetMediaPlayer_ReturnValue_1;
	bool                                          CallFunc_IsPreparing_ReturnValue;
	bool                                          CallFunc_IsPlaying_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
};
static_assert(alignof(Cinematic_C_ExecuteUbergraph_Cinematic) == 0x000008, "Wrong alignment on Cinematic_C_ExecuteUbergraph_Cinematic");
static_assert(sizeof(Cinematic_C_ExecuteUbergraph_Cinematic) == 0x0000B8, "Wrong size on Cinematic_C_ExecuteUbergraph_Cinematic");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, EntryPoint) == 0x000000, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::EntryPoint' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, K2Node_HandleClientEvent_EventSource) == 0x000008, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::K2Node_HandleClientEvent_EventSource' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, K2Node_HandleClientEvent_EventFocus) == 0x000010, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::K2Node_HandleClientEvent_EventFocus' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, K2Node_HandleClientEvent_ClientEvent) == 0x000018, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::K2Node_HandleClientEvent_ClientEvent' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, K2Node_HandleClientEvent_EventSource_1) == 0x000030, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::K2Node_HandleClientEvent_EventSource_1' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, K2Node_HandleClientEvent_EventFocus_1) == 0x000038, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::K2Node_HandleClientEvent_EventFocus_1' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, K2Node_HandleClientEvent_ClientEvent_1) == 0x000040, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::K2Node_HandleClientEvent_ClientEvent_1' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, K2Node_DynamicCast_AsFort_Media_Subtitles_Player) == 0x000058, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::K2Node_DynamicCast_AsFort_Media_Subtitles_Player' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, K2Node_DynamicCast_AsFort_Media_Info) == 0x000068, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::K2Node_DynamicCast_AsFort_Media_Info' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, K2Node_DynamicCast_bSuccess_1) == 0x000070, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, K2Node_Event_Widget) == 0x000078, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::K2Node_Event_Widget' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, K2Node_Event_State) == 0x000080, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::K2Node_Event_State' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, K2Node_Event_PreviousUIState) == 0x000083, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::K2Node_Event_PreviousUIState' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, K2Node_Event_NextUIState) == 0x000084, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::K2Node_Event_NextUIState' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, CallFunc_GetPlayerController_ReturnValue) == 0x000088, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, CallFunc_GetPlayerController_ReturnValue_1) == 0x000090, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, CallFunc_IsValid_ReturnValue) == 0x000098, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, CallFunc_GetMediaPlayer_ReturnValue) == 0x0000A0, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::CallFunc_GetMediaPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, CallFunc_GetMediaPlayer_ReturnValue_1) == 0x0000A8, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::CallFunc_GetMediaPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, CallFunc_IsPreparing_ReturnValue) == 0x0000B0, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::CallFunc_IsPreparing_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, CallFunc_IsPlaying_ReturnValue) == 0x0000B1, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::CallFunc_IsPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_ExecuteUbergraph_Cinematic, CallFunc_BooleanOR_ReturnValue) == 0x0000B2, "Member 'Cinematic_C_ExecuteUbergraph_Cinematic::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

struct Cinematic_C_GetAudioTrackIndex final
{
public:
	int32                                         AudioTrack;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Array_Index_Variable_1;
	int32                                         Temp_int_Loop_Counter_Variable_1;
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	uint8                                         Pad_1C[0x4];
	TArray<class FString>                         CallFunc_GetPreferredLanguages_ReturnValue;
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;
	class FString                                 CallFunc_Array_Get_Item;
	class FName                                   CallFunc_Array_Get_Item_1;
	int32                                         CallFunc_Array_Length_ReturnValue;
	struct FCinematicLanuageToTrackStruct         CallFunc_GetDataTableRowFromName_OutRow;
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_5E[0x2];
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;
	bool                                          CallFunc_EqualEqual_StriStri_ReturnValue;
	uint8                                         Pad_71[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;
};
static_assert(alignof(Cinematic_C_GetAudioTrackIndex) == 0x000008, "Wrong alignment on Cinematic_C_GetAudioTrackIndex");
static_assert(sizeof(Cinematic_C_GetAudioTrackIndex) == 0x000080, "Wrong size on Cinematic_C_GetAudioTrackIndex");
static_assert(offsetof(Cinematic_C_GetAudioTrackIndex, AudioTrack) == 0x000000, "Member 'Cinematic_C_GetAudioTrackIndex::AudioTrack' has a wrong offset!");
static_assert(offsetof(Cinematic_C_GetAudioTrackIndex, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'Cinematic_C_GetAudioTrackIndex::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Cinematic_C_GetAudioTrackIndex, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'Cinematic_C_GetAudioTrackIndex::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_GetAudioTrackIndex, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'Cinematic_C_GetAudioTrackIndex::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Cinematic_C_GetAudioTrackIndex, Temp_int_Array_Index_Variable_1) == 0x000010, "Member 'Cinematic_C_GetAudioTrackIndex::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(Cinematic_C_GetAudioTrackIndex, Temp_int_Loop_Counter_Variable_1) == 0x000014, "Member 'Cinematic_C_GetAudioTrackIndex::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(Cinematic_C_GetAudioTrackIndex, CallFunc_Add_IntInt_ReturnValue_1) == 0x000018, "Member 'Cinematic_C_GetAudioTrackIndex::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Cinematic_C_GetAudioTrackIndex, CallFunc_GetPreferredLanguages_ReturnValue) == 0x000020, "Member 'Cinematic_C_GetAudioTrackIndex::CallFunc_GetPreferredLanguages_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_GetAudioTrackIndex, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000030, "Member 'Cinematic_C_GetAudioTrackIndex::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(Cinematic_C_GetAudioTrackIndex, CallFunc_Array_Get_Item) == 0x000040, "Member 'Cinematic_C_GetAudioTrackIndex::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Cinematic_C_GetAudioTrackIndex, CallFunc_Array_Get_Item_1) == 0x000050, "Member 'Cinematic_C_GetAudioTrackIndex::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Cinematic_C_GetAudioTrackIndex, CallFunc_Array_Length_ReturnValue) == 0x000054, "Member 'Cinematic_C_GetAudioTrackIndex::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_GetAudioTrackIndex, CallFunc_GetDataTableRowFromName_OutRow) == 0x000058, "Member 'Cinematic_C_GetAudioTrackIndex::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(Cinematic_C_GetAudioTrackIndex, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x00005C, "Member 'Cinematic_C_GetAudioTrackIndex::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_GetAudioTrackIndex, CallFunc_Less_IntInt_ReturnValue) == 0x00005D, "Member 'Cinematic_C_GetAudioTrackIndex::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_GetAudioTrackIndex, CallFunc_Conv_NameToString_ReturnValue) == 0x000060, "Member 'Cinematic_C_GetAudioTrackIndex::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_GetAudioTrackIndex, CallFunc_EqualEqual_StriStri_ReturnValue) == 0x000070, "Member 'Cinematic_C_GetAudioTrackIndex::CallFunc_EqualEqual_StriStri_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_GetAudioTrackIndex, CallFunc_Array_Length_ReturnValue_1) == 0x000074, "Member 'Cinematic_C_GetAudioTrackIndex::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Cinematic_C_GetAudioTrackIndex, CallFunc_Less_IntInt_ReturnValue_1) == 0x000078, "Member 'Cinematic_C_GetAudioTrackIndex::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

struct Cinematic_C_HandleClientEvent_QueueCinematic final
{
public:
	class UObject*                                EventSource;
	class UObject*                                EventFocus;
	struct FFortClientEvent                       ClientEvent;
};
static_assert(alignof(Cinematic_C_HandleClientEvent_QueueCinematic) == 0x000008, "Wrong alignment on Cinematic_C_HandleClientEvent_QueueCinematic");
static_assert(sizeof(Cinematic_C_HandleClientEvent_QueueCinematic) == 0x000028, "Wrong size on Cinematic_C_HandleClientEvent_QueueCinematic");
static_assert(offsetof(Cinematic_C_HandleClientEvent_QueueCinematic, EventSource) == 0x000000, "Member 'Cinematic_C_HandleClientEvent_QueueCinematic::EventSource' has a wrong offset!");
static_assert(offsetof(Cinematic_C_HandleClientEvent_QueueCinematic, EventFocus) == 0x000008, "Member 'Cinematic_C_HandleClientEvent_QueueCinematic::EventFocus' has a wrong offset!");
static_assert(offsetof(Cinematic_C_HandleClientEvent_QueueCinematic, ClientEvent) == 0x000010, "Member 'Cinematic_C_HandleClientEvent_QueueCinematic::ClientEvent' has a wrong offset!");

struct Cinematic_C_HandleClientEvent_SkipCinematic final
{
public:
	class UObject*                                EventSource;
	class UObject*                                EventFocus;
	struct FFortClientEvent                       ClientEvent;
};
static_assert(alignof(Cinematic_C_HandleClientEvent_SkipCinematic) == 0x000008, "Wrong alignment on Cinematic_C_HandleClientEvent_SkipCinematic");
static_assert(sizeof(Cinematic_C_HandleClientEvent_SkipCinematic) == 0x000028, "Wrong size on Cinematic_C_HandleClientEvent_SkipCinematic");
static_assert(offsetof(Cinematic_C_HandleClientEvent_SkipCinematic, EventSource) == 0x000000, "Member 'Cinematic_C_HandleClientEvent_SkipCinematic::EventSource' has a wrong offset!");
static_assert(offsetof(Cinematic_C_HandleClientEvent_SkipCinematic, EventFocus) == 0x000008, "Member 'Cinematic_C_HandleClientEvent_SkipCinematic::EventFocus' has a wrong offset!");
static_assert(offsetof(Cinematic_C_HandleClientEvent_SkipCinematic, ClientEvent) == 0x000010, "Member 'Cinematic_C_HandleClientEvent_SkipCinematic::ClientEvent' has a wrong offset!");

struct Cinematic_C_OnEnterState final
{
public:
	EFortUIState                                  PreviousUIState;
};
static_assert(alignof(Cinematic_C_OnEnterState) == 0x000001, "Wrong alignment on Cinematic_C_OnEnterState");
static_assert(sizeof(Cinematic_C_OnEnterState) == 0x000001, "Wrong size on Cinematic_C_OnEnterState");
static_assert(offsetof(Cinematic_C_OnEnterState, PreviousUIState) == 0x000000, "Member 'Cinematic_C_OnEnterState::PreviousUIState' has a wrong offset!");

struct Cinematic_C_OnExitState final
{
public:
	EFortUIState                                  NextUIState;
};
static_assert(alignof(Cinematic_C_OnExitState) == 0x000001, "Wrong alignment on Cinematic_C_OnExitState");
static_assert(sizeof(Cinematic_C_OnExitState) == 0x000001, "Wrong size on Cinematic_C_OnExitState");
static_assert(offsetof(Cinematic_C_OnExitState, NextUIState) == 0x000000, "Member 'Cinematic_C_OnExitState::NextUIState' has a wrong offset!");

struct Cinematic_C_PopContentWidgetInternal final
{
public:
	struct FContentPushState                      State;
	uint8                                         Pad_3[0x5];
	class UWidget*                                ReturnValue;
	class UWidget*                                CallFunc_PopWidget_ReturnValue;
};
static_assert(alignof(Cinematic_C_PopContentWidgetInternal) == 0x000008, "Wrong alignment on Cinematic_C_PopContentWidgetInternal");
static_assert(sizeof(Cinematic_C_PopContentWidgetInternal) == 0x000018, "Wrong size on Cinematic_C_PopContentWidgetInternal");
static_assert(offsetof(Cinematic_C_PopContentWidgetInternal, State) == 0x000000, "Member 'Cinematic_C_PopContentWidgetInternal::State' has a wrong offset!");
static_assert(offsetof(Cinematic_C_PopContentWidgetInternal, ReturnValue) == 0x000008, "Member 'Cinematic_C_PopContentWidgetInternal::ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_PopContentWidgetInternal, CallFunc_PopWidget_ReturnValue) == 0x000010, "Member 'Cinematic_C_PopContentWidgetInternal::CallFunc_PopWidget_ReturnValue' has a wrong offset!");

struct Cinematic_C_PushContentWidgetInternal final
{
public:
	class UWidget*                                Widget;
	struct FContentPushState                      State;
};
static_assert(alignof(Cinematic_C_PushContentWidgetInternal) == 0x000008, "Wrong alignment on Cinematic_C_PushContentWidgetInternal");
static_assert(sizeof(Cinematic_C_PushContentWidgetInternal) == 0x000010, "Wrong size on Cinematic_C_PushContentWidgetInternal");
static_assert(offsetof(Cinematic_C_PushContentWidgetInternal, Widget) == 0x000000, "Member 'Cinematic_C_PushContentWidgetInternal::Widget' has a wrong offset!");
static_assert(offsetof(Cinematic_C_PushContentWidgetInternal, State) == 0x000008, "Member 'Cinematic_C_PushContentWidgetInternal::State' has a wrong offset!");

struct Cinematic_C_SetMoviePlaying final
{
public:
	bool                                          MoviePlaying;
};
static_assert(alignof(Cinematic_C_SetMoviePlaying) == 0x000001, "Wrong alignment on Cinematic_C_SetMoviePlaying");
static_assert(sizeof(Cinematic_C_SetMoviePlaying) == 0x000001, "Wrong size on Cinematic_C_SetMoviePlaying");
static_assert(offsetof(Cinematic_C_SetMoviePlaying, MoviePlaying) == 0x000000, "Member 'Cinematic_C_SetMoviePlaying::MoviePlaying' has a wrong offset!");

struct Cinematic_C_Show_Movie final
{
public:
	class UMediaPlayer*                           MediaPlayer;
	class UMediaSource*                           MediaSource;
	int32                                         CallFunc_GetAudioTrackIndex_AudioTrack;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	class UMediaPlayer*                           CallFunc_GetMediaPlayer_ReturnValue;
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;
	class ULegacy_MovieWidget_C*                  CallFunc_Create_ReturnValue;
};
static_assert(alignof(Cinematic_C_Show_Movie) == 0x000008, "Wrong alignment on Cinematic_C_Show_Movie");
static_assert(sizeof(Cinematic_C_Show_Movie) == 0x000040, "Wrong size on Cinematic_C_Show_Movie");
static_assert(offsetof(Cinematic_C_Show_Movie, MediaPlayer) == 0x000000, "Member 'Cinematic_C_Show_Movie::MediaPlayer' has a wrong offset!");
static_assert(offsetof(Cinematic_C_Show_Movie, MediaSource) == 0x000008, "Member 'Cinematic_C_Show_Movie::MediaSource' has a wrong offset!");
static_assert(offsetof(Cinematic_C_Show_Movie, CallFunc_GetAudioTrackIndex_AudioTrack) == 0x000010, "Member 'Cinematic_C_Show_Movie::CallFunc_GetAudioTrackIndex_AudioTrack' has a wrong offset!");
static_assert(offsetof(Cinematic_C_Show_Movie, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'Cinematic_C_Show_Movie::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Cinematic_C_Show_Movie, CallFunc_GetMediaPlayer_ReturnValue) == 0x000020, "Member 'Cinematic_C_Show_Movie::CallFunc_GetMediaPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_Show_Movie, CallFunc_GetOwningPlayer_ReturnValue) == 0x000028, "Member 'Cinematic_C_Show_Movie::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_Show_Movie, CallFunc_AddChild_ReturnValue) == 0x000030, "Member 'Cinematic_C_Show_Movie::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_Show_Movie, CallFunc_Create_ReturnValue) == 0x000038, "Member 'Cinematic_C_Show_Movie::CallFunc_Create_ReturnValue' has a wrong offset!");

struct Cinematic_C_SkipMovie final
{
public:
	class UMediaPlayer*                           CallFunc_GetMediaPlayer_ReturnValue;
	bool                                          CallFunc_IsPlaying_ReturnValue;
	bool                                          CallFunc_Pause_ReturnValue;
};
static_assert(alignof(Cinematic_C_SkipMovie) == 0x000008, "Wrong alignment on Cinematic_C_SkipMovie");
static_assert(sizeof(Cinematic_C_SkipMovie) == 0x000010, "Wrong size on Cinematic_C_SkipMovie");
static_assert(offsetof(Cinematic_C_SkipMovie, CallFunc_GetMediaPlayer_ReturnValue) == 0x000000, "Member 'Cinematic_C_SkipMovie::CallFunc_GetMediaPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_SkipMovie, CallFunc_IsPlaying_ReturnValue) == 0x000008, "Member 'Cinematic_C_SkipMovie::CallFunc_IsPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_C_SkipMovie, CallFunc_Pause_ReturnValue) == 0x000009, "Member 'Cinematic_C_SkipMovie::CallFunc_Pause_ReturnValue' has a wrong offset!");

struct Cinematic_C_StopAndClearSubtitles final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(Cinematic_C_StopAndClearSubtitles) == 0x000001, "Wrong alignment on Cinematic_C_StopAndClearSubtitles");
static_assert(sizeof(Cinematic_C_StopAndClearSubtitles) == 0x000001, "Wrong size on Cinematic_C_StopAndClearSubtitles");
static_assert(offsetof(Cinematic_C_StopAndClearSubtitles, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'Cinematic_C_StopAndClearSubtitles::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}
