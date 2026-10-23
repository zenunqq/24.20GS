#pragma once

#include "Basic.hpp"

#include "VerseMovement_0_structs.hpp"
#include "VerseNative_structs.hpp"
#include "EpicGamesTemporary_0_structs.hpp"
#include "EpicGamesTemporary_structs.hpp"

namespace SDK::Params
{

struct VerseMovement__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_N_RGetPlayerMoveComponent_L_Nplayer__component_R final
{
public:
	class USimulation_player_component*           __verse_0xB2CDDD72_Argument;
	FOptionProperty_                              RetVal;
};
static_assert(alignof(VerseMovement__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_N_RGetPlayerMoveComponent_L_Nplayer__component_R) == 0x000008, "Wrong alignment on VerseMovement__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_N_RGetPlayerMoveComponent_L_Nplayer__component_R");
static_assert(sizeof(VerseMovement__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_N_RGetPlayerMoveComponent_L_Nplayer__component_R) == 0x000010, "Wrong size on VerseMovement__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_N_RGetPlayerMoveComponent_L_Nplayer__component_R");
static_assert(offsetof(VerseMovement__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_N_RGetPlayerMoveComponent_L_Nplayer__component_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'VerseMovement__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_N_RGetPlayerMoveComponent_L_Nplayer__component_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(VerseMovement__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_N_RGetPlayerMoveComponent_L_Nplayer__component_R, RetVal) == 0x000008, "Member 'VerseMovement__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_N_RGetPlayerMoveComponent_L_Nplayer__component_R::RetVal' has a wrong offset!");

struct VerseMovement_VerseMovement_move_config_Factory final
{
public:
	struct FVerseMovement_move_config             RetVal;
	TArray<struct FVerseMovement_move_config_entry> _ExprResult_0;
	TArray<EVerseFalse>                           __verse_0xFFC68BC5_Array_1;
	TArray<struct FVerseMovement_move_config_entry> _ForResult_1;
	int64                                         _ForIndex_2;
	int64                                         _ForLength_3;
	EVerseFalse                                   __verse_0xFB88B569_Item_3;
	uint8                                         _ExprResult_4 : 1;
};
static_assert(alignof(VerseMovement_VerseMovement_move_config_Factory) == 0x000008, "Wrong alignment on VerseMovement_VerseMovement_move_config_Factory");
static_assert(sizeof(VerseMovement_VerseMovement_move_config_Factory) == 0x000058, "Wrong size on VerseMovement_VerseMovement_move_config_Factory");
static_assert(offsetof(VerseMovement_VerseMovement_move_config_Factory, RetVal) == 0x000000, "Member 'VerseMovement_VerseMovement_move_config_Factory::RetVal' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovement_move_config_Factory, _ExprResult_0) == 0x000010, "Member 'VerseMovement_VerseMovement_move_config_Factory::_ExprResult_0' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovement_move_config_Factory, __verse_0xFFC68BC5_Array_1) == 0x000020, "Member 'VerseMovement_VerseMovement_move_config_Factory::__verse_0xFFC68BC5_Array_1' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovement_move_config_Factory, _ForResult_1) == 0x000030, "Member 'VerseMovement_VerseMovement_move_config_Factory::_ForResult_1' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovement_move_config_Factory, _ForIndex_2) == 0x000040, "Member 'VerseMovement_VerseMovement_move_config_Factory::_ForIndex_2' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovement_move_config_Factory, _ForLength_3) == 0x000048, "Member 'VerseMovement_VerseMovement_move_config_Factory::_ForLength_3' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovement_move_config_Factory, __verse_0xFB88B569_Item_3) == 0x000050, "Member 'VerseMovement_VerseMovement_move_config_Factory::__verse_0xFB88B569_Item_3' has a wrong offset!");

struct VerseMovement_VerseMovement_move_config_entry_Factory final
{
public:
	struct FVerseMovement_move_config_entry       RetVal;
	FVerseStringProperty_                         _ExprResult_0;
	TArray<struct FVerseMovement_move_trigger>    _ExprResult_1;
	TArray<EVerseFalse>                           __verse_0xFFC68BC5_Array_1;
	TArray<struct FVerseMovement_move_trigger>    _ForResult_2;
	int64                                         _ForIndex_3;
	int64                                         _ForLength_4;
	EVerseFalse                                   __verse_0xFB88B569_Item_3;
	uint8                                         _ExprResult_5 : 1;
	uint8                                         Pad_82[0x6];
	TArray<struct FVerseMovement_move_response>   _ExprResult_6;
	TArray<EVerseFalse>                           __verse_0xFFC68BC5_Array_5;
	TArray<struct FVerseMovement_move_response>   _ForResult_7;
	int64                                         _ForIndex_8;
	int64                                         _ForLength_9;
	EVerseFalse                                   __verse_0xFB88B569_Item_7;
	uint8                                         _ExprResult_10 : 1;
};
static_assert(alignof(VerseMovement_VerseMovement_move_config_entry_Factory) == 0x000008, "Wrong alignment on VerseMovement_VerseMovement_move_config_entry_Factory");
static_assert(sizeof(VerseMovement_VerseMovement_move_config_entry_Factory) == 0x0000D0, "Wrong size on VerseMovement_VerseMovement_move_config_entry_Factory");
static_assert(offsetof(VerseMovement_VerseMovement_move_config_entry_Factory, RetVal) == 0x000000, "Member 'VerseMovement_VerseMovement_move_config_entry_Factory::RetVal' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovement_move_config_entry_Factory, _ExprResult_0) == 0x000030, "Member 'VerseMovement_VerseMovement_move_config_entry_Factory::_ExprResult_0' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovement_move_config_entry_Factory, _ExprResult_1) == 0x000040, "Member 'VerseMovement_VerseMovement_move_config_entry_Factory::_ExprResult_1' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovement_move_config_entry_Factory, __verse_0xFFC68BC5_Array_1) == 0x000050, "Member 'VerseMovement_VerseMovement_move_config_entry_Factory::__verse_0xFFC68BC5_Array_1' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovement_move_config_entry_Factory, _ForResult_2) == 0x000060, "Member 'VerseMovement_VerseMovement_move_config_entry_Factory::_ForResult_2' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovement_move_config_entry_Factory, _ForIndex_3) == 0x000070, "Member 'VerseMovement_VerseMovement_move_config_entry_Factory::_ForIndex_3' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovement_move_config_entry_Factory, _ForLength_4) == 0x000078, "Member 'VerseMovement_VerseMovement_move_config_entry_Factory::_ForLength_4' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovement_move_config_entry_Factory, __verse_0xFB88B569_Item_3) == 0x000080, "Member 'VerseMovement_VerseMovement_move_config_entry_Factory::__verse_0xFB88B569_Item_3' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovement_move_config_entry_Factory, _ExprResult_6) == 0x000088, "Member 'VerseMovement_VerseMovement_move_config_entry_Factory::_ExprResult_6' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovement_move_config_entry_Factory, __verse_0xFFC68BC5_Array_5) == 0x000098, "Member 'VerseMovement_VerseMovement_move_config_entry_Factory::__verse_0xFFC68BC5_Array_5' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovement_move_config_entry_Factory, _ForResult_7) == 0x0000A8, "Member 'VerseMovement_VerseMovement_move_config_entry_Factory::_ForResult_7' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovement_move_config_entry_Factory, _ForIndex_8) == 0x0000B8, "Member 'VerseMovement_VerseMovement_move_config_entry_Factory::_ForIndex_8' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovement_move_config_entry_Factory, _ForLength_9) == 0x0000C0, "Member 'VerseMovement_VerseMovement_move_config_entry_Factory::_ForLength_9' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovement_move_config_entry_Factory, __verse_0xFB88B569_Item_7) == 0x0000C8, "Member 'VerseMovement_VerseMovement_move_config_entry_Factory::__verse_0xFB88B569_Item_7' has a wrong offset!");

struct VerseMovement_VerseMovement_move_input_trigger_params_Factory final
{
public:
	struct FVerseMovement_move_input_trigger_params RetVal;
	FVerseStringProperty_                         _ExprResult_0;
	FOptionProperty_                              _ExprResult_1;
	FOptionProperty_                              __verse_0x00000000__1;
	uint8                                         _ExprResult_2 : 1;
	FOptionProperty_                              _ExprResultStack_3;
	uint8                                         Pad_55[0x3];
	struct FSpatialMath_vector2                   _ExprResult_4;
};
static_assert(alignof(VerseMovement_VerseMovement_move_input_trigger_params_Factory) == 0x000008, "Wrong alignment on VerseMovement_VerseMovement_move_input_trigger_params_Factory");
static_assert(sizeof(VerseMovement_VerseMovement_move_input_trigger_params_Factory) == 0x000068, "Wrong size on VerseMovement_VerseMovement_move_input_trigger_params_Factory");
static_assert(offsetof(VerseMovement_VerseMovement_move_input_trigger_params_Factory, RetVal) == 0x000000, "Member 'VerseMovement_VerseMovement_move_input_trigger_params_Factory::RetVal' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovement_move_input_trigger_params_Factory, _ExprResult_0) == 0x000038, "Member 'VerseMovement_VerseMovement_move_input_trigger_params_Factory::_ExprResult_0' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovement_move_input_trigger_params_Factory, _ExprResult_1) == 0x000048, "Member 'VerseMovement_VerseMovement_move_input_trigger_params_Factory::_ExprResult_1' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovement_move_input_trigger_params_Factory, __verse_0x00000000__1) == 0x000050, "Member 'VerseMovement_VerseMovement_move_input_trigger_params_Factory::__verse_0x00000000__1' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovement_move_input_trigger_params_Factory, _ExprResultStack_3) == 0x000053, "Member 'VerseMovement_VerseMovement_move_input_trigger_params_Factory::_ExprResultStack_3' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovement_move_input_trigger_params_Factory, _ExprResult_4) == 0x000058, "Member 'VerseMovement_VerseMovement_move_input_trigger_params_Factory::_ExprResult_4' has a wrong offset!");

struct VerseMovement_VerseMovement_move_physics_trigger_params_Factory final
{
public:
	struct FVerseMovement_move_physics_trigger_params RetVal;
	struct FSpatialMath_vector3                   _ExprResult_0;
};
static_assert(alignof(VerseMovement_VerseMovement_move_physics_trigger_params_Factory) == 0x000008, "Wrong alignment on VerseMovement_VerseMovement_move_physics_trigger_params_Factory");
static_assert(sizeof(VerseMovement_VerseMovement_move_physics_trigger_params_Factory) == 0x000030, "Wrong size on VerseMovement_VerseMovement_move_physics_trigger_params_Factory");
static_assert(offsetof(VerseMovement_VerseMovement_move_physics_trigger_params_Factory, RetVal) == 0x000000, "Member 'VerseMovement_VerseMovement_move_physics_trigger_params_Factory::RetVal' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovement_move_physics_trigger_params_Factory, _ExprResult_0) == 0x000018, "Member 'VerseMovement_VerseMovement_move_physics_trigger_params_Factory::_ExprResult_0' has a wrong offset!");

struct VerseMovement_VerseMovement_move_response_Factory final
{
public:
	struct FVerseMovement_move_response           RetVal;
	struct FSpatialMath_vector3                   _ExprResult_0;
	FOptionProperty_                              _ExprResult_1;
	FOptionProperty_                              __verse_0x00000000__1;
	uint8                                         _ExprResult_2 : 1;
	FOptionProperty_                              _ExprResultStack_3;
	uint8                                         Pad_75[0x3];
	struct FSpatialMath_vector3                   _ExprResult_4;
};
static_assert(alignof(VerseMovement_VerseMovement_move_response_Factory) == 0x000008, "Wrong alignment on VerseMovement_VerseMovement_move_response_Factory");
static_assert(sizeof(VerseMovement_VerseMovement_move_response_Factory) == 0x000090, "Wrong size on VerseMovement_VerseMovement_move_response_Factory");
static_assert(offsetof(VerseMovement_VerseMovement_move_response_Factory, RetVal) == 0x000000, "Member 'VerseMovement_VerseMovement_move_response_Factory::RetVal' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovement_move_response_Factory, _ExprResult_0) == 0x000050, "Member 'VerseMovement_VerseMovement_move_response_Factory::_ExprResult_0' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovement_move_response_Factory, _ExprResult_1) == 0x000068, "Member 'VerseMovement_VerseMovement_move_response_Factory::_ExprResult_1' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovement_move_response_Factory, __verse_0x00000000__1) == 0x000070, "Member 'VerseMovement_VerseMovement_move_response_Factory::__verse_0x00000000__1' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovement_move_response_Factory, _ExprResultStack_3) == 0x000073, "Member 'VerseMovement_VerseMovement_move_response_Factory::_ExprResultStack_3' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovement_move_response_Factory, _ExprResult_4) == 0x000078, "Member 'VerseMovement_VerseMovement_move_response_Factory::_ExprResult_4' has a wrong offset!");

struct VerseMovement_VerseMovement_move_trace_trigger_params_Factory final
{
public:
	struct FVerseMovement_move_trace_trigger_params RetVal;
	struct FSpatialMath_vector3                   _ExprResult_0;
	FOptionProperty_                              _ExprResult_1;
	FOptionProperty_                              __verse_0x00000000__1;
	uint8                                         _ExprResult_2 : 1;
	FOptionProperty_                              _ExprResultStack_3;
};
static_assert(alignof(VerseMovement_VerseMovement_move_trace_trigger_params_Factory) == 0x000008, "Wrong alignment on VerseMovement_VerseMovement_move_trace_trigger_params_Factory");
static_assert(sizeof(VerseMovement_VerseMovement_move_trace_trigger_params_Factory) == 0x000060, "Wrong size on VerseMovement_VerseMovement_move_trace_trigger_params_Factory");
static_assert(offsetof(VerseMovement_VerseMovement_move_trace_trigger_params_Factory, RetVal) == 0x000000, "Member 'VerseMovement_VerseMovement_move_trace_trigger_params_Factory::RetVal' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovement_move_trace_trigger_params_Factory, _ExprResult_0) == 0x000038, "Member 'VerseMovement_VerseMovement_move_trace_trigger_params_Factory::_ExprResult_0' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovement_move_trace_trigger_params_Factory, _ExprResult_1) == 0x000050, "Member 'VerseMovement_VerseMovement_move_trace_trigger_params_Factory::_ExprResult_1' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovement_move_trace_trigger_params_Factory, __verse_0x00000000__1) == 0x000058, "Member 'VerseMovement_VerseMovement_move_trace_trigger_params_Factory::__verse_0x00000000__1' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovement_move_trace_trigger_params_Factory, _ExprResultStack_3) == 0x00005B, "Member 'VerseMovement_VerseMovement_move_trace_trigger_params_Factory::_ExprResultStack_3' has a wrong offset!");

struct VerseMovement_VerseMovement_move_trigger_Factory final
{
public:
	struct FVerseMovement_move_trigger            RetVal;
	struct FVerseMovement_move_input_trigger_params _ExprResult_0;
	struct FVerseMovement_move_physics_trigger_params _ExprResult_1;
	struct FVerseMovement_move_trace_trigger_params _ExprResult_2;
};
static_assert(alignof(VerseMovement_VerseMovement_move_trigger_Factory) == 0x000008, "Wrong alignment on VerseMovement_VerseMovement_move_trigger_Factory");
static_assert(sizeof(VerseMovement_VerseMovement_move_trigger_Factory) == 0x000118, "Wrong size on VerseMovement_VerseMovement_move_trigger_Factory");
static_assert(offsetof(VerseMovement_VerseMovement_move_trigger_Factory, RetVal) == 0x000000, "Member 'VerseMovement_VerseMovement_move_trigger_Factory::RetVal' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovement_move_trigger_Factory, _ExprResult_0) == 0x000090, "Member 'VerseMovement_VerseMovement_move_trigger_Factory::_ExprResult_0' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovement_move_trigger_Factory, _ExprResult_1) == 0x0000C8, "Member 'VerseMovement_VerseMovement_move_trigger_Factory::_ExprResult_1' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovement_move_trigger_Factory, _ExprResult_2) == 0x0000E0, "Member 'VerseMovement_VerseMovement_move_trigger_Factory::_ExprResult_2' has a wrong offset!");

struct VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RAddAngularImpulse_L_Nvector3_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0xB2CDDD72_Argument;
};
static_assert(alignof(VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RAddAngularImpulse_L_Nvector3_R) == 0x000008, "Wrong alignment on VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RAddAngularImpulse_L_Nvector3_R");
static_assert(sizeof(VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RAddAngularImpulse_L_Nvector3_R) == 0x000018, "Wrong size on VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RAddAngularImpulse_L_Nvector3_R");
static_assert(offsetof(VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RAddAngularImpulse_L_Nvector3_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RAddAngularImpulse_L_Nvector3_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");

struct VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RAddImpulse_L_Nvector3_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0xB2CDDD72_Argument;
};
static_assert(alignof(VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RAddImpulse_L_Nvector3_R) == 0x000008, "Wrong alignment on VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RAddImpulse_L_Nvector3_R");
static_assert(sizeof(VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RAddImpulse_L_Nvector3_R) == 0x000018, "Wrong size on VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RAddImpulse_L_Nvector3_R");
static_assert(offsetof(VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RAddImpulse_L_Nvector3_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RAddImpulse_L_Nvector3_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");

struct VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RDisableInput_L_Nplayer__component_R final
{
public:
	class USimulation_player_component*           __verse_0xB2CDDD72_Argument;
};
static_assert(alignof(VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RDisableInput_L_Nplayer__component_R) == 0x000008, "Wrong alignment on VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RDisableInput_L_Nplayer__component_R");
static_assert(sizeof(VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RDisableInput_L_Nplayer__component_R) == 0x000008, "Wrong size on VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RDisableInput_L_Nplayer__component_R");
static_assert(offsetof(VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RDisableInput_L_Nplayer__component_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RDisableInput_L_Nplayer__component_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");

struct VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_REnableInput_L_Nplayer__component_R final
{
public:
	class USimulation_player_component*           __verse_0xB2CDDD72_Argument;
};
static_assert(alignof(VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_REnableInput_L_Nplayer__component_R) == 0x000008, "Wrong alignment on VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_REnableInput_L_Nplayer__component_R");
static_assert(sizeof(VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_REnableInput_L_Nplayer__component_R) == 0x000008, "Wrong size on VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_REnableInput_L_Nplayer__component_R");
static_assert(offsetof(VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_REnableInput_L_Nplayer__component_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_REnableInput_L_Nplayer__component_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");

struct VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetConfig_L_Nmove__config__asset_R final
{
public:
	class UVerseMovement_move_config_asset*       __verse_0xB2CDDD72_Argument;
};
static_assert(alignof(VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetConfig_L_Nmove__config__asset_R) == 0x000008, "Wrong alignment on VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetConfig_L_Nmove__config__asset_R");
static_assert(sizeof(VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetConfig_L_Nmove__config__asset_R) == 0x000008, "Wrong size on VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetConfig_L_Nmove__config__asset_R");
static_assert(offsetof(VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetConfig_L_Nmove__config__asset_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetConfig_L_Nmove__config__asset_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");

struct VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetConfig_L_Nmove__config_R final
{
public:
	struct FVerseMovement_move_config             __verse_0xB2CDDD72_Argument;
};
static_assert(alignof(VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetConfig_L_Nmove__config_R) == 0x000008, "Wrong alignment on VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetConfig_L_Nmove__config_R");
static_assert(sizeof(VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetConfig_L_Nmove__config_R) == 0x000010, "Wrong size on VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetConfig_L_Nmove__config_R");
static_assert(offsetof(VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetConfig_L_Nmove__config_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetConfig_L_Nmove__config_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");

struct VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetEnabled_L_Nlogic_R final
{
public:
	uint8                                         __verse_0xB2CDDD72_Argument : 1;
};
static_assert(alignof(VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetEnabled_L_Nlogic_R) == 0x000001, "Wrong alignment on VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetEnabled_L_Nlogic_R");
static_assert(sizeof(VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetEnabled_L_Nlogic_R) == 0x000001, "Wrong size on VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetEnabled_L_Nlogic_R");

struct VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetPosition_L_Nvector3_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0xB2CDDD72_Argument;
};
static_assert(alignof(VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetPosition_L_Nvector3_R) == 0x000008, "Wrong alignment on VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetPosition_L_Nvector3_R");
static_assert(sizeof(VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetPosition_L_Nvector3_R) == 0x000018, "Wrong size on VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetPosition_L_Nvector3_R");
static_assert(offsetof(VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetPosition_L_Nvector3_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetPosition_L_Nvector3_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");

struct VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetRotation_L_Nrotation_R final
{
public:
	struct FVerseRotation                         __verse_0xB2CDDD72_Argument;
};
static_assert(alignof(VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetRotation_L_Nrotation_R) == 0x000010, "Wrong alignment on VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetRotation_L_Nrotation_R");
static_assert(sizeof(VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetRotation_L_Nrotation_R) == 0x000020, "Wrong size on VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetRotation_L_Nrotation_R");
static_assert(offsetof(VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetRotation_L_Nrotation_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetRotation_L_Nrotation_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");

struct VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetVelocity_L_Nvector3_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0xB2CDDD72_Argument;
};
static_assert(alignof(VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetVelocity_L_Nvector3_R) == 0x000008, "Wrong alignment on VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetVelocity_L_Nvector3_R");
static_assert(sizeof(VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetVelocity_L_Nvector3_R) == 0x000018, "Wrong size on VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetVelocity_L_Nvector3_R");
static_assert(offsetof(VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetVelocity_L_Nvector3_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'VerseMovement_movement_component__L_2fUnrealEngine_2ecom_2fEngine_2fVerseMovement_2fmovement__component_N_RSetVelocity_L_Nvector3_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");

struct VerseMovement_VerseMovementUtil__InitCDO final
{
public:
	struct FVerseMovement_move_config             _ExprResult_0;
	TArray<struct FVerseMovement_move_config_entry> _ExprResult_1;
	struct FVerseMovement_move_config_entry       _ExprResult_2;
	FVerseStringProperty_                         _ExprResult_3;
	TArray<struct FVerseMovement_move_trigger>    _ExprResult_4;
	struct FVerseMovement_move_trigger            _ExprResult_5;
	struct FVerseMovement_move_input_trigger_params _ExprResult_6;
	FVerseStringProperty_                         _ExprResult_7;
	FOptionProperty_                              _ExprResult_8;
	FOptionProperty_                              __verse_0x00000000__1;
	uint8                                         _ExprResult_9 : 1;
	FOptionProperty_                              _ExprResultStack_10;
	uint8                                         Pad_155[0x3];
	struct FSpatialMath_vector2                   _ExprResult_11;
	TArray<struct FVerseMovement_move_response>   _ExprResult_12;
	struct FVerseMovement_move_response           _ExprResult_13;
	struct FSpatialMath_vector3                   _ExprResult_14;
	FOptionProperty_                              _ExprResult_15;
	FOptionProperty_                              __verse_0x00000000__3;
	uint8                                         _ExprResult_16 : 1;
	FOptionProperty_                              _ExprResultStack_17;
	uint8                                         Pad_1ED[0x3];
	struct FSpatialMath_vector3                   _ExprResult_18;
	struct FVerseMovement_move_config_entry       _ExprResult_19;
	FVerseStringProperty_                         _ExprResult_20;
	TArray<struct FVerseMovement_move_trigger>    _ExprResult_21;
	struct FVerseMovement_move_trigger            _ExprResult_22;
	struct FVerseMovement_move_input_trigger_params _ExprResult_23;
	FVerseStringProperty_                         _ExprResult_24;
	FOptionProperty_                              _ExprResult_25;
	FOptionProperty_                              __verse_0x00000000__5;
	uint8                                         _ExprResult_26 : 1;
	FOptionProperty_                              _ExprResultStack_27;
	uint8                                         Pad_33D[0x3];
	struct FSpatialMath_vector2                   _ExprResult_28;
	TArray<struct FVerseMovement_move_response>   _ExprResult_29;
	struct FVerseMovement_move_response           _ExprResult_30;
	struct FSpatialMath_vector3                   _ExprResult_31;
	FOptionProperty_                              _ExprResult_32;
	FOptionProperty_                              __verse_0x00000000__7;
	uint8                                         _ExprResult_33 : 1;
	FOptionProperty_                              _ExprResultStack_34;
	uint8                                         Pad_3D5[0x3];
	struct FSpatialMath_vector3                   _ExprResult_35;
	struct FVerseMovement_move_config_entry       _ExprResult_36;
	FVerseStringProperty_                         _ExprResult_37;
	TArray<struct FVerseMovement_move_trigger>    _ExprResult_38;
	struct FVerseMovement_move_trigger            _ExprResult_39;
	struct FVerseMovement_move_input_trigger_params _ExprResult_40;
	FVerseStringProperty_                         _ExprResult_41;
	FOptionProperty_                              _ExprResult_42;
	FOptionProperty_                              __verse_0x00000000__9;
	uint8                                         _ExprResult_43 : 1;
	FOptionProperty_                              _ExprResultStack_44;
	uint8                                         Pad_525[0x3];
	struct FSpatialMath_vector2                   _ExprResult_45;
	struct FVerseMovement_move_trigger            _ExprResult_46;
	struct FVerseMovement_move_trace_trigger_params _ExprResult_47;
	struct FSpatialMath_vector3                   _ExprResult_48;
	FOptionProperty_                              _ExprResult_49;
	FOptionProperty_                              __verse_0x00000000__11;
	uint8                                         _ExprResult_50 : 1;
	FOptionProperty_                              _ExprResultStack_51;
	uint8                                         Pad_625[0x3];
	TArray<struct FVerseMovement_move_response>   _ExprResult_52;
	struct FVerseMovement_move_response           _ExprResult_53;
	struct FSpatialMath_vector3                   _ExprResult_54;
	FOptionProperty_                              _ExprResult_55;
	FOptionProperty_                              __verse_0x00000000__13;
	uint8                                         _ExprResult_56 : 1;
	FOptionProperty_                              _ExprResultStack_57;
	uint8                                         Pad_6AD[0x3];
	struct FSpatialMath_vector3                   _ExprResult_58;
	struct FVerseMovement_move_config_entry       _ExprResult_59;
	FVerseStringProperty_                         _ExprResult_60;
	TArray<struct FVerseMovement_move_trigger>    _ExprResult_61;
	struct FVerseMovement_move_trigger            _ExprResult_62;
	struct FVerseMovement_move_input_trigger_params _ExprResult_63;
	FVerseStringProperty_                         _ExprResult_64;
	FOptionProperty_                              _ExprResult_65;
	FOptionProperty_                              __verse_0x00000000__15;
	uint8                                         _ExprResult_66 : 1;
	FOptionProperty_                              _ExprResultStack_67;
	uint8                                         Pad_7FD[0x3];
	struct FSpatialMath_vector2                   _ExprResult_68;
	struct FVerseMovement_move_trigger            _ExprResult_69;
	struct FVerseMovement_move_trace_trigger_params _ExprResult_70;
	struct FSpatialMath_vector3                   _ExprResult_71;
	FOptionProperty_                              _ExprResult_72;
	FOptionProperty_                              __verse_0x00000000__17;
	uint8                                         _ExprResult_73 : 1;
	FOptionProperty_                              _ExprResultStack_74;
	uint8                                         Pad_8FD[0x3];
	TArray<struct FVerseMovement_move_response>   _ExprResult_75;
	struct FVerseMovement_move_response           _ExprResult_76;
	struct FSpatialMath_vector3                   _ExprResult_77;
	FOptionProperty_                              _ExprResult_78;
	FOptionProperty_                              __verse_0x00000000__19;
	uint8                                         _ExprResult_79 : 1;
	FOptionProperty_                              _ExprResultStack_80;
	uint8                                         Pad_985[0x3];
	struct FSpatialMath_vector3                   _ExprResult_81;
	struct FVerseMovement_move_config_entry       _ExprResult_82;
	FVerseStringProperty_                         _ExprResult_83;
	TArray<struct FVerseMovement_move_trigger>    _ExprResult_84;
	struct FVerseMovement_move_trigger            _ExprResult_85;
	struct FVerseMovement_move_input_trigger_params _ExprResult_86;
	FVerseStringProperty_                         _ExprResult_87;
	FOptionProperty_                              _ExprResult_88;
	FOptionProperty_                              __verse_0x00000000__21;
	uint8                                         _ExprResult_89 : 1;
	FOptionProperty_                              _ExprResultStack_90;
	uint8                                         Pad_AD5[0x3];
	struct FSpatialMath_vector2                   _ExprResult_91;
	TArray<struct FVerseMovement_move_response>   _ExprResult_92;
	struct FVerseMovement_move_response           _ExprResult_93;
	struct FSpatialMath_vector3                   _ExprResult_94;
	FOptionProperty_                              _ExprResult_95;
	FOptionProperty_                              __verse_0x00000000__23;
	uint8                                         _ExprResult_96 : 1;
	FOptionProperty_                              _ExprResultStack_97;
	uint8                                         Pad_B6D[0x3];
	struct FSpatialMath_vector3                   _ExprResult_98;
	struct FVerseMovement_move_config_entry       _ExprResult_99;
	FVerseStringProperty_                         _ExprResult_100;
	TArray<struct FVerseMovement_move_trigger>    _ExprResult_101;
	struct FVerseMovement_move_trigger            _ExprResult_102;
	struct FVerseMovement_move_trace_trigger_params _ExprResult_103;
	struct FSpatialMath_vector3                   _ExprResult_104;
	FOptionProperty_                              _ExprResult_105;
	FOptionProperty_                              __verse_0x00000000__25;
	uint8                                         _ExprResult_106 : 1;
	FOptionProperty_                              _ExprResultStack_107;
	uint8                                         Pad_CC5[0x3];
	TArray<struct FVerseMovement_move_response>   _ExprResult_108;
	struct FVerseMovement_move_response           _ExprResult_109;
	struct FSpatialMath_vector3                   _ExprResult_110;
	FOptionProperty_                              _ExprResult_111;
	FOptionProperty_                              __verse_0x00000000__27;
	uint8                                         _ExprResult_112 : 1;
	FOptionProperty_                              _ExprResultStack_113;
	uint8                                         Pad_D4D[0x3];
	struct FSpatialMath_vector3                   _ExprResult_114;
};
static_assert(alignof(VerseMovement_VerseMovementUtil__InitCDO) == 0x000008, "Wrong alignment on VerseMovement_VerseMovementUtil__InitCDO");
static_assert(sizeof(VerseMovement_VerseMovementUtil__InitCDO) == 0x000D68, "Wrong size on VerseMovement_VerseMovementUtil__InitCDO");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_0) == 0x000000, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_0' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_1) == 0x000010, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_1' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_2) == 0x000020, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_3) == 0x000050, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_3' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_4) == 0x000060, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_4' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_5) == 0x000070, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_5' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_6) == 0x000100, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_6' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_7) == 0x000138, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_7' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_8) == 0x000148, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_8' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, __verse_0x00000000__1) == 0x000150, "Member 'VerseMovement_VerseMovementUtil__InitCDO::__verse_0x00000000__1' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResultStack_10) == 0x000153, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResultStack_10' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_11) == 0x000158, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_11' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_12) == 0x000168, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_12' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_13) == 0x000178, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_13' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_14) == 0x0001C8, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_14' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_15) == 0x0001E0, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_15' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, __verse_0x00000000__3) == 0x0001E8, "Member 'VerseMovement_VerseMovementUtil__InitCDO::__verse_0x00000000__3' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResultStack_17) == 0x0001EB, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResultStack_17' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_18) == 0x0001F0, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_18' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_19) == 0x000208, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_19' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_20) == 0x000238, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_20' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_21) == 0x000248, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_21' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_22) == 0x000258, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_22' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_23) == 0x0002E8, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_23' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_24) == 0x000320, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_24' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_25) == 0x000330, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_25' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, __verse_0x00000000__5) == 0x000338, "Member 'VerseMovement_VerseMovementUtil__InitCDO::__verse_0x00000000__5' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResultStack_27) == 0x00033B, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResultStack_27' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_28) == 0x000340, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_28' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_29) == 0x000350, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_29' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_30) == 0x000360, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_30' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_31) == 0x0003B0, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_31' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_32) == 0x0003C8, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_32' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, __verse_0x00000000__7) == 0x0003D0, "Member 'VerseMovement_VerseMovementUtil__InitCDO::__verse_0x00000000__7' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResultStack_34) == 0x0003D3, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResultStack_34' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_35) == 0x0003D8, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_35' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_36) == 0x0003F0, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_36' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_37) == 0x000420, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_37' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_38) == 0x000430, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_38' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_39) == 0x000440, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_39' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_40) == 0x0004D0, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_40' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_41) == 0x000508, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_41' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_42) == 0x000518, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_42' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, __verse_0x00000000__9) == 0x000520, "Member 'VerseMovement_VerseMovementUtil__InitCDO::__verse_0x00000000__9' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResultStack_44) == 0x000523, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResultStack_44' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_45) == 0x000528, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_45' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_46) == 0x000538, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_46' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_47) == 0x0005C8, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_47' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_48) == 0x000600, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_48' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_49) == 0x000618, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_49' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, __verse_0x00000000__11) == 0x000620, "Member 'VerseMovement_VerseMovementUtil__InitCDO::__verse_0x00000000__11' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResultStack_51) == 0x000623, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResultStack_51' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_52) == 0x000628, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_52' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_53) == 0x000638, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_53' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_54) == 0x000688, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_54' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_55) == 0x0006A0, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_55' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, __verse_0x00000000__13) == 0x0006A8, "Member 'VerseMovement_VerseMovementUtil__InitCDO::__verse_0x00000000__13' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResultStack_57) == 0x0006AB, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResultStack_57' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_58) == 0x0006B0, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_58' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_59) == 0x0006C8, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_59' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_60) == 0x0006F8, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_60' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_61) == 0x000708, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_61' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_62) == 0x000718, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_62' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_63) == 0x0007A8, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_63' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_64) == 0x0007E0, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_64' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_65) == 0x0007F0, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_65' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, __verse_0x00000000__15) == 0x0007F8, "Member 'VerseMovement_VerseMovementUtil__InitCDO::__verse_0x00000000__15' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResultStack_67) == 0x0007FB, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResultStack_67' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_68) == 0x000800, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_68' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_69) == 0x000810, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_69' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_70) == 0x0008A0, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_70' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_71) == 0x0008D8, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_71' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_72) == 0x0008F0, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_72' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, __verse_0x00000000__17) == 0x0008F8, "Member 'VerseMovement_VerseMovementUtil__InitCDO::__verse_0x00000000__17' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResultStack_74) == 0x0008FB, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResultStack_74' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_75) == 0x000900, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_75' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_76) == 0x000910, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_76' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_77) == 0x000960, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_77' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_78) == 0x000978, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_78' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, __verse_0x00000000__19) == 0x000980, "Member 'VerseMovement_VerseMovementUtil__InitCDO::__verse_0x00000000__19' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResultStack_80) == 0x000983, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResultStack_80' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_81) == 0x000988, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_81' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_82) == 0x0009A0, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_82' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_83) == 0x0009D0, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_83' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_84) == 0x0009E0, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_84' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_85) == 0x0009F0, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_85' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_86) == 0x000A80, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_86' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_87) == 0x000AB8, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_87' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_88) == 0x000AC8, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_88' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, __verse_0x00000000__21) == 0x000AD0, "Member 'VerseMovement_VerseMovementUtil__InitCDO::__verse_0x00000000__21' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResultStack_90) == 0x000AD3, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResultStack_90' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_91) == 0x000AD8, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_91' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_92) == 0x000AE8, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_92' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_93) == 0x000AF8, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_93' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_94) == 0x000B48, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_94' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_95) == 0x000B60, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_95' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, __verse_0x00000000__23) == 0x000B68, "Member 'VerseMovement_VerseMovementUtil__InitCDO::__verse_0x00000000__23' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResultStack_97) == 0x000B6B, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResultStack_97' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_98) == 0x000B70, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_98' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_99) == 0x000B88, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_99' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_100) == 0x000BB8, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_100' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_101) == 0x000BC8, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_101' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_102) == 0x000BD8, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_102' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_103) == 0x000C68, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_103' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_104) == 0x000CA0, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_104' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_105) == 0x000CB8, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_105' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, __verse_0x00000000__25) == 0x000CC0, "Member 'VerseMovement_VerseMovementUtil__InitCDO::__verse_0x00000000__25' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResultStack_107) == 0x000CC3, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResultStack_107' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_108) == 0x000CC8, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_108' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_109) == 0x000CD8, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_109' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_110) == 0x000D28, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_110' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_111) == 0x000D40, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_111' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, __verse_0x00000000__27) == 0x000D48, "Member 'VerseMovement_VerseMovementUtil__InitCDO::__verse_0x00000000__27' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResultStack_113) == 0x000D4B, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResultStack_113' has a wrong offset!");
static_assert(offsetof(VerseMovement_VerseMovementUtil__InitCDO, _ExprResult_114) == 0x000D50, "Member 'VerseMovement_VerseMovementUtil__InitCDO::_ExprResult_114' has a wrong offset!");

}
