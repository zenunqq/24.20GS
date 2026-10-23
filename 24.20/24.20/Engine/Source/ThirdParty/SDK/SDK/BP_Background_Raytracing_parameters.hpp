#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct BP_Background_Raytracing_C_UserConstructionScript final
{
public:
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_1[0x7];
	class UMaterialInterface*                     Temp_object_Variable;
	class UMaterialInterface*                     Temp_object_Variable_1;
	class UMaterialInterface*                     K2Node_Select_Default;
	bool                                          CallFunc_SetStaticMesh_ReturnValue;
	uint8                                         Pad_21[0x7];
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
};
static_assert(alignof(BP_Background_Raytracing_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_Background_Raytracing_C_UserConstructionScript");
static_assert(sizeof(BP_Background_Raytracing_C_UserConstructionScript) == 0x000038, "Wrong size on BP_Background_Raytracing_C_UserConstructionScript");
static_assert(offsetof(BP_Background_Raytracing_C_UserConstructionScript, Temp_bool_Variable) == 0x000000, "Member 'BP_Background_Raytracing_C_UserConstructionScript::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_Background_Raytracing_C_UserConstructionScript, Temp_object_Variable) == 0x000008, "Member 'BP_Background_Raytracing_C_UserConstructionScript::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_Background_Raytracing_C_UserConstructionScript, Temp_object_Variable_1) == 0x000010, "Member 'BP_Background_Raytracing_C_UserConstructionScript::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Background_Raytracing_C_UserConstructionScript, K2Node_Select_Default) == 0x000018, "Member 'BP_Background_Raytracing_C_UserConstructionScript::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_Background_Raytracing_C_UserConstructionScript, CallFunc_SetStaticMesh_ReturnValue) == 0x000020, "Member 'BP_Background_Raytracing_C_UserConstructionScript::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Background_Raytracing_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000028, "Member 'BP_Background_Raytracing_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Background_Raytracing_C_UserConstructionScript, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000030, "Member 'BP_Background_Raytracing_C_UserConstructionScript::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

}
