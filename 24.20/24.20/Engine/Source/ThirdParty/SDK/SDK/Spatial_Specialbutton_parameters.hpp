#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	bool                                          Temp_bool_Variable_1;
	bool                                          Temp_bool_Variable_2;
	int32                                         Temp_int_Variable;
	bool                                          Temp_bool_Variable_3;
	uint8                                         Pad_D[0x3];
	struct FVector2D                              Temp_struct_Variable;
	struct FVector2D                              Temp_struct_Variable_1;
	bool                                          K2Node_Event_IsDesignTime;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          CallFunc_IsValid_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_34[0x4];
	class UWidgetAnimation*                       K2Node_Select_Default_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	int32                                         K2Node_Select_Default_2;
	uint8                                         Pad_54[0x4];
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;
	struct FVector2D                              K2Node_Select_Default_3;
};
static_assert(alignof(Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton) == 0x000008, "Wrong alignment on Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton");
static_assert(sizeof(Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton) == 0x0000C0, "Wrong size on Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton");
static_assert(offsetof(Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton, EntryPoint) == 0x000000, "Member 'Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton::EntryPoint' has a wrong offset!");
static_assert(offsetof(Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton, Temp_bool_Variable) == 0x000004, "Member 'Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton, Temp_byte_Variable) == 0x000005, "Member 'Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton, Temp_bool_Variable_1) == 0x000006, "Member 'Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton, Temp_bool_Variable_2) == 0x000007, "Member 'Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton, Temp_int_Variable) == 0x000008, "Member 'Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton, Temp_bool_Variable_3) == 0x00000C, "Member 'Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton, Temp_struct_Variable) == 0x000010, "Member 'Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton, Temp_struct_Variable_1) == 0x000020, "Member 'Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton, K2Node_Event_IsDesignTime) == 0x000030, "Member 'Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton, Temp_byte_Variable_1) == 0x000031, "Member 'Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton, CallFunc_IsValid_ReturnValue) == 0x000032, "Member 'Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton, K2Node_Select_Default) == 0x000033, "Member 'Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton, K2Node_Select_Default_1) == 0x000038, "Member 'Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000040, "Member 'Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000048, "Member 'Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton, K2Node_Select_Default_2) == 0x000050, "Member 'Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton, K2Node_MakeStruct_SlateFontInfo) == 0x000058, "Member 'Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");
static_assert(offsetof(Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton, K2Node_Select_Default_3) == 0x0000B0, "Member 'Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton::K2Node_Select_Default_3' has a wrong offset!");

struct Spatial_Specialbutton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(Spatial_Specialbutton_C_PreConstruct) == 0x000001, "Wrong alignment on Spatial_Specialbutton_C_PreConstruct");
static_assert(sizeof(Spatial_Specialbutton_C_PreConstruct) == 0x000001, "Wrong size on Spatial_Specialbutton_C_PreConstruct");
static_assert(offsetof(Spatial_Specialbutton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Spatial_Specialbutton_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
