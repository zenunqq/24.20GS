#pragma once

#include "Basic.hpp"

#include "Slate_structs.hpp"
#include "MediaUtils_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct Legacy_MovieWidget_C_ExecuteUbergraph_Legacy_MovieWidget final
{
public:
	int32                                         EntryPoint;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	float                                         K2Node_Event_NewWidth;
	float                                         K2Node_Event_NewHeight;
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;
	uint8                                         Pad_28[0x8];
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;
	double                                        CallFunc_MakeVector2D_X_ImplicitCast;
	double                                        CallFunc_MakeVector2D_Y_ImplicitCast;
};
static_assert(alignof(Legacy_MovieWidget_C_ExecuteUbergraph_Legacy_MovieWidget) == 0x000010, "Wrong alignment on Legacy_MovieWidget_C_ExecuteUbergraph_Legacy_MovieWidget");
static_assert(sizeof(Legacy_MovieWidget_C_ExecuteUbergraph_Legacy_MovieWidget) == 0x000100, "Wrong size on Legacy_MovieWidget_C_ExecuteUbergraph_Legacy_MovieWidget");
static_assert(offsetof(Legacy_MovieWidget_C_ExecuteUbergraph_Legacy_MovieWidget, EntryPoint) == 0x000000, "Member 'Legacy_MovieWidget_C_ExecuteUbergraph_Legacy_MovieWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(Legacy_MovieWidget_C_ExecuteUbergraph_Legacy_MovieWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'Legacy_MovieWidget_C_ExecuteUbergraph_Legacy_MovieWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Legacy_MovieWidget_C_ExecuteUbergraph_Legacy_MovieWidget, K2Node_Event_NewWidth) == 0x000010, "Member 'Legacy_MovieWidget_C_ExecuteUbergraph_Legacy_MovieWidget::K2Node_Event_NewWidth' has a wrong offset!");
static_assert(offsetof(Legacy_MovieWidget_C_ExecuteUbergraph_Legacy_MovieWidget, K2Node_Event_NewHeight) == 0x000014, "Member 'Legacy_MovieWidget_C_ExecuteUbergraph_Legacy_MovieWidget::K2Node_Event_NewHeight' has a wrong offset!");
static_assert(offsetof(Legacy_MovieWidget_C_ExecuteUbergraph_Legacy_MovieWidget, CallFunc_MakeVector2D_ReturnValue) == 0x000018, "Member 'Legacy_MovieWidget_C_ExecuteUbergraph_Legacy_MovieWidget::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(Legacy_MovieWidget_C_ExecuteUbergraph_Legacy_MovieWidget, K2Node_MakeStruct_SlateBrush) == 0x000030, "Member 'Legacy_MovieWidget_C_ExecuteUbergraph_Legacy_MovieWidget::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(Legacy_MovieWidget_C_ExecuteUbergraph_Legacy_MovieWidget, CallFunc_MakeVector2D_X_ImplicitCast) == 0x0000F0, "Member 'Legacy_MovieWidget_C_ExecuteUbergraph_Legacy_MovieWidget::CallFunc_MakeVector2D_X_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Legacy_MovieWidget_C_ExecuteUbergraph_Legacy_MovieWidget, CallFunc_MakeVector2D_Y_ImplicitCast) == 0x0000F8, "Member 'Legacy_MovieWidget_C_ExecuteUbergraph_Legacy_MovieWidget::CallFunc_MakeVector2D_Y_ImplicitCast' has a wrong offset!");

struct Legacy_MovieWidget_C_Init final
{
public:
	class UMediaPlayer*                           InMediaPlayer;
	class UMediaSource*                           InMediaSource;
	class UObject*                                InMediaSoundWave;
	int32                                         AudioTrack;
	struct FMediaPlayerTrackOptions               K2Node_MakeStruct_MediaPlayerTrackOptions;
	bool                                          CallFunc_HasPlayerForSource_ReturnValue;
	uint8                                         Pad_39[0x7];
	struct FMediaPlayerOptions                    K2Node_MakeStruct_MediaPlayerOptions;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	bool                                          CallFunc_SetMediaSource_ReturnValue;
	bool                                          CallFunc_SetMediaSource_ReturnValue_1;
};
static_assert(alignof(Legacy_MovieWidget_C_Init) == 0x000008, "Wrong alignment on Legacy_MovieWidget_C_Init");
static_assert(sizeof(Legacy_MovieWidget_C_Init) == 0x000080, "Wrong size on Legacy_MovieWidget_C_Init");
static_assert(offsetof(Legacy_MovieWidget_C_Init, InMediaPlayer) == 0x000000, "Member 'Legacy_MovieWidget_C_Init::InMediaPlayer' has a wrong offset!");
static_assert(offsetof(Legacy_MovieWidget_C_Init, InMediaSource) == 0x000008, "Member 'Legacy_MovieWidget_C_Init::InMediaSource' has a wrong offset!");
static_assert(offsetof(Legacy_MovieWidget_C_Init, InMediaSoundWave) == 0x000010, "Member 'Legacy_MovieWidget_C_Init::InMediaSoundWave' has a wrong offset!");
static_assert(offsetof(Legacy_MovieWidget_C_Init, AudioTrack) == 0x000018, "Member 'Legacy_MovieWidget_C_Init::AudioTrack' has a wrong offset!");
static_assert(offsetof(Legacy_MovieWidget_C_Init, K2Node_MakeStruct_MediaPlayerTrackOptions) == 0x00001C, "Member 'Legacy_MovieWidget_C_Init::K2Node_MakeStruct_MediaPlayerTrackOptions' has a wrong offset!");
static_assert(offsetof(Legacy_MovieWidget_C_Init, CallFunc_HasPlayerForSource_ReturnValue) == 0x000038, "Member 'Legacy_MovieWidget_C_Init::CallFunc_HasPlayerForSource_ReturnValue' has a wrong offset!");
static_assert(offsetof(Legacy_MovieWidget_C_Init, K2Node_MakeStruct_MediaPlayerOptions) == 0x000040, "Member 'Legacy_MovieWidget_C_Init::K2Node_MakeStruct_MediaPlayerOptions' has a wrong offset!");
static_assert(offsetof(Legacy_MovieWidget_C_Init, K2Node_CreateDelegate_OutputDelegate) == 0x000070, "Member 'Legacy_MovieWidget_C_Init::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Legacy_MovieWidget_C_Init, CallFunc_SetMediaSource_ReturnValue) == 0x00007C, "Member 'Legacy_MovieWidget_C_Init::CallFunc_SetMediaSource_ReturnValue' has a wrong offset!");
static_assert(offsetof(Legacy_MovieWidget_C_Init, CallFunc_SetMediaSource_ReturnValue_1) == 0x00007D, "Member 'Legacy_MovieWidget_C_Init::CallFunc_SetMediaSource_ReturnValue_1' has a wrong offset!");

struct Legacy_MovieWidget_C_MediaDimensionsUpdated final
{
public:
	float                                         NewWidth;
	float                                         NewHeight;
};
static_assert(alignof(Legacy_MovieWidget_C_MediaDimensionsUpdated) == 0x000004, "Wrong alignment on Legacy_MovieWidget_C_MediaDimensionsUpdated");
static_assert(sizeof(Legacy_MovieWidget_C_MediaDimensionsUpdated) == 0x000008, "Wrong size on Legacy_MovieWidget_C_MediaDimensionsUpdated");
static_assert(offsetof(Legacy_MovieWidget_C_MediaDimensionsUpdated, NewWidth) == 0x000000, "Member 'Legacy_MovieWidget_C_MediaDimensionsUpdated::NewWidth' has a wrong offset!");
static_assert(offsetof(Legacy_MovieWidget_C_MediaDimensionsUpdated, NewHeight) == 0x000004, "Member 'Legacy_MovieWidget_C_MediaDimensionsUpdated::NewHeight' has a wrong offset!");

struct Legacy_MovieWidget_C_Play final
{
public:
	bool                                          ShouldRewind;
};
static_assert(alignof(Legacy_MovieWidget_C_Play) == 0x000001, "Wrong alignment on Legacy_MovieWidget_C_Play");
static_assert(sizeof(Legacy_MovieWidget_C_Play) == 0x000001, "Wrong size on Legacy_MovieWidget_C_Play");
static_assert(offsetof(Legacy_MovieWidget_C_Play, ShouldRewind) == 0x000000, "Member 'Legacy_MovieWidget_C_Play::ShouldRewind' has a wrong offset!");

struct Legacy_MovieWidget_C_SetDelayedContentValues final
{
public:
	bool                                          Temp_bool_Variable;
	EStretch                                      Temp_byte_Variable;
	EStretch                                      Temp_byte_Variable_1;
	EStretch                                      K2Node_Select_Default;
	uint8                                         Pad_4[0x4];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class UMediaTexture*                          CallFunc_GetMediaTexture_ReturnValue;
};
static_assert(alignof(Legacy_MovieWidget_C_SetDelayedContentValues) == 0x000008, "Wrong alignment on Legacy_MovieWidget_C_SetDelayedContentValues");
static_assert(sizeof(Legacy_MovieWidget_C_SetDelayedContentValues) == 0x000018, "Wrong size on Legacy_MovieWidget_C_SetDelayedContentValues");
static_assert(offsetof(Legacy_MovieWidget_C_SetDelayedContentValues, Temp_bool_Variable) == 0x000000, "Member 'Legacy_MovieWidget_C_SetDelayedContentValues::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Legacy_MovieWidget_C_SetDelayedContentValues, Temp_byte_Variable) == 0x000001, "Member 'Legacy_MovieWidget_C_SetDelayedContentValues::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Legacy_MovieWidget_C_SetDelayedContentValues, Temp_byte_Variable_1) == 0x000002, "Member 'Legacy_MovieWidget_C_SetDelayedContentValues::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Legacy_MovieWidget_C_SetDelayedContentValues, K2Node_Select_Default) == 0x000003, "Member 'Legacy_MovieWidget_C_SetDelayedContentValues::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Legacy_MovieWidget_C_SetDelayedContentValues, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'Legacy_MovieWidget_C_SetDelayedContentValues::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(Legacy_MovieWidget_C_SetDelayedContentValues, CallFunc_GetMediaTexture_ReturnValue) == 0x000010, "Member 'Legacy_MovieWidget_C_SetDelayedContentValues::CallFunc_GetMediaTexture_ReturnValue' has a wrong offset!");

}
