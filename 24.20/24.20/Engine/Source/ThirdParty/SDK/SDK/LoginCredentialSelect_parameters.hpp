#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct LoginCredentialSelect_C_ExecuteUbergraph_LoginCredentialSelect final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue;
};
static_assert(alignof(LoginCredentialSelect_C_ExecuteUbergraph_LoginCredentialSelect) == 0x000008, "Wrong alignment on LoginCredentialSelect_C_ExecuteUbergraph_LoginCredentialSelect");
static_assert(sizeof(LoginCredentialSelect_C_ExecuteUbergraph_LoginCredentialSelect) == 0x000010, "Wrong size on LoginCredentialSelect_C_ExecuteUbergraph_LoginCredentialSelect");
static_assert(offsetof(LoginCredentialSelect_C_ExecuteUbergraph_LoginCredentialSelect, EntryPoint) == 0x000000, "Member 'LoginCredentialSelect_C_ExecuteUbergraph_LoginCredentialSelect::EntryPoint' has a wrong offset!");
static_assert(offsetof(LoginCredentialSelect_C_ExecuteUbergraph_LoginCredentialSelect, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000008, "Member 'LoginCredentialSelect_C_ExecuteUbergraph_LoginCredentialSelect::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

}
