#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "CharacterPartMidArrayStruct_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct PlayerPawn_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Generic_Parent final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0xC];
	struct FTransform                             Temp_struct_Variable;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;
	uint8                                         Pad_71[0x7];
	class UPostProcessComponent*                  CallFunc_AddComponent_ReturnValue;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	uint8                                         Pad_81[0xF];
	struct FTransform                             K2Node_CustomEvent_NewTransform;
};
static_assert(alignof(PlayerPawn_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Generic_Parent) == 0x000010, "Wrong alignment on PlayerPawn_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Generic_Parent");
static_assert(sizeof(PlayerPawn_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Generic_Parent) == 0x0000F0, "Wrong size on PlayerPawn_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Generic_Parent");
static_assert(offsetof(PlayerPawn_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Generic_Parent, EntryPoint) == 0x000000, "Member 'PlayerPawn_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Generic_Parent::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Generic_Parent, Temp_struct_Variable) == 0x000010, "Member 'PlayerPawn_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Generic_Parent::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Generic_Parent, CallFunc_IsLocallyControlled_ReturnValue) == 0x000070, "Member 'PlayerPawn_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Generic_Parent::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Generic_Parent, CallFunc_AddComponent_ReturnValue) == 0x000078, "Member 'PlayerPawn_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Generic_Parent::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Generic_Parent, CallFunc_IsDedicatedServer_ReturnValue) == 0x000080, "Member 'PlayerPawn_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Generic_Parent::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Generic_Parent, K2Node_CustomEvent_NewTransform) == 0x000090, "Member 'PlayerPawn_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Generic_Parent::K2Node_CustomEvent_NewTransform' has a wrong offset!");

struct PlayerPawn_Generic_Parent_C_Find_Stored_Char_Part_Materials final
{
public:
	EFortCustomPartType                           PartType;
	bool                                          Found;
	uint8                                         Pad_2[0x2];
	int32                                         Index_0;
	TArray<class UMaterialInstanceDynamic*>       MIDs;
	bool                                          L_Found;
	uint8                                         Pad_19[0x3];
	int32                                         L_Index;
	bool                                          Temp_bool_True_if_break_was_hit_Variable;
	uint8                                         Pad_21[0x3];
	int32                                         Temp_int_Array_Index_Variable;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_29[0x3];
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue;
	struct FCharacterPartMidArrayStruct           CallFunc_Array_Get_Item;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
};
static_assert(alignof(PlayerPawn_Generic_Parent_C_Find_Stored_Char_Part_Materials) == 0x000008, "Wrong alignment on PlayerPawn_Generic_Parent_C_Find_Stored_Char_Part_Materials");
static_assert(sizeof(PlayerPawn_Generic_Parent_C_Find_Stored_Char_Part_Materials) == 0x000058, "Wrong size on PlayerPawn_Generic_Parent_C_Find_Stored_Char_Part_Materials");
static_assert(offsetof(PlayerPawn_Generic_Parent_C_Find_Stored_Char_Part_Materials, PartType) == 0x000000, "Member 'PlayerPawn_Generic_Parent_C_Find_Stored_Char_Part_Materials::PartType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_Parent_C_Find_Stored_Char_Part_Materials, Found) == 0x000001, "Member 'PlayerPawn_Generic_Parent_C_Find_Stored_Char_Part_Materials::Found' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_Parent_C_Find_Stored_Char_Part_Materials, Index_0) == 0x000004, "Member 'PlayerPawn_Generic_Parent_C_Find_Stored_Char_Part_Materials::Index_0' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_Parent_C_Find_Stored_Char_Part_Materials, MIDs) == 0x000008, "Member 'PlayerPawn_Generic_Parent_C_Find_Stored_Char_Part_Materials::MIDs' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_Parent_C_Find_Stored_Char_Part_Materials, L_Found) == 0x000018, "Member 'PlayerPawn_Generic_Parent_C_Find_Stored_Char_Part_Materials::L_Found' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_Parent_C_Find_Stored_Char_Part_Materials, L_Index) == 0x00001C, "Member 'PlayerPawn_Generic_Parent_C_Find_Stored_Char_Part_Materials::L_Index' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_Parent_C_Find_Stored_Char_Part_Materials, Temp_bool_True_if_break_was_hit_Variable) == 0x000020, "Member 'PlayerPawn_Generic_Parent_C_Find_Stored_Char_Part_Materials::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_Parent_C_Find_Stored_Char_Part_Materials, Temp_int_Array_Index_Variable) == 0x000024, "Member 'PlayerPawn_Generic_Parent_C_Find_Stored_Char_Part_Materials::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_Parent_C_Find_Stored_Char_Part_Materials, CallFunc_Not_PreBool_ReturnValue) == 0x000028, "Member 'PlayerPawn_Generic_Parent_C_Find_Stored_Char_Part_Materials::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_Parent_C_Find_Stored_Char_Part_Materials, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'PlayerPawn_Generic_Parent_C_Find_Stored_Char_Part_Materials::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_Parent_C_Find_Stored_Char_Part_Materials, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'PlayerPawn_Generic_Parent_C_Find_Stored_Char_Part_Materials::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_Parent_C_Find_Stored_Char_Part_Materials, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'PlayerPawn_Generic_Parent_C_Find_Stored_Char_Part_Materials::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_Parent_C_Find_Stored_Char_Part_Materials, CallFunc_Array_Get_Item) == 0x000038, "Member 'PlayerPawn_Generic_Parent_C_Find_Stored_Char_Part_Materials::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_Parent_C_Find_Stored_Char_Part_Materials, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'PlayerPawn_Generic_Parent_C_Find_Stored_Char_Part_Materials::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_Parent_C_Find_Stored_Char_Part_Materials, CallFunc_BooleanAND_ReturnValue) == 0x000051, "Member 'PlayerPawn_Generic_Parent_C_Find_Stored_Char_Part_Materials::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_Parent_C_Find_Stored_Char_Part_Materials, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000052, "Member 'PlayerPawn_Generic_Parent_C_Find_Stored_Char_Part_Materials::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

struct PlayerPawn_Generic_Parent_C_Player_Creates_a_Splash final
{
public:
	struct FTransform                             NewTransform;
};
static_assert(alignof(PlayerPawn_Generic_Parent_C_Player_Creates_a_Splash) == 0x000010, "Wrong alignment on PlayerPawn_Generic_Parent_C_Player_Creates_a_Splash");
static_assert(sizeof(PlayerPawn_Generic_Parent_C_Player_Creates_a_Splash) == 0x000060, "Wrong size on PlayerPawn_Generic_Parent_C_Player_Creates_a_Splash");
static_assert(offsetof(PlayerPawn_Generic_Parent_C_Player_Creates_a_Splash, NewTransform) == 0x000000, "Member 'PlayerPawn_Generic_Parent_C_Player_Creates_a_Splash::NewTransform' has a wrong offset!");

}
