#pragma once

#include "Basic.hpp"

namespace SDK
{

struct FNiagaraVariableCommonReference final
{
public:
	class FName                                   Name;
	uint8                                         Pad_4[0x4];
	class UObject*                                UnderlyingType;
};
static_assert(alignof(FNiagaraVariableCommonReference) == 0x000008, "Wrong alignment on FNiagaraVariableCommonReference");
static_assert(sizeof(FNiagaraVariableCommonReference) == 0x000010, "Wrong size on FNiagaraVariableCommonReference");
static_assert(offsetof(FNiagaraVariableCommonReference, Name) == 0x000000, "Member 'FNiagaraVariableCommonReference::Name' has a wrong offset!");
static_assert(offsetof(FNiagaraVariableCommonReference, UnderlyingType) == 0x000008, "Member 'FNiagaraVariableCommonReference::UnderlyingType' has a wrong offset!");

struct FNiagaraCompileHash final
{
public:
	TArray<uint8>                                 DataHash;
};
static_assert(alignof(FNiagaraCompileHash) == 0x000008, "Wrong alignment on FNiagaraCompileHash");
static_assert(sizeof(FNiagaraCompileHash) == 0x000010, "Wrong size on FNiagaraCompileHash");
static_assert(offsetof(FNiagaraCompileHash, DataHash) == 0x000000, "Member 'FNiagaraCompileHash::DataHash' has a wrong offset!");

}
