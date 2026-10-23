#pragma once

#include "Basic.hpp"

#include "ENUM_NiagaraParameterSetup_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

struct FStruc_NiagaraParameters final
{
public:
	ENUM_NiagaraParameterSetup                    ParameterSelection_14_A6D4854946F722970AD7D0AEC96E4705;
	uint8                                         Pad_1[0x3];
	class FName                                   FloatParameterName_17_6AFBA48F43B44BD1ED9841983BEFA202;
	float                                         FloatParameterValue_28_AC98B6464E1CD803B50B47AEC91741EC;
	class FName                                   VectorParameterName_20_71917CFB490B3D5D3E0864A3EE90C666;
	struct FVector                                VectorParameterValue_27_248856604659F589FF5D4FA5FF52E013;
	class FName                                   LinearColorparameterName_22_69C61F8D45C74F98203920856CAD5ADE;
	struct FLinearColor                           LinearColorParameterValue_29_861B08ED408F0F612BF509A2A94F377F;
	class FName                                   IntegerParameterName_24_98306BA7452D90289F6EE9954C4F2B1D;
	int32                                         IntegerParameterValue_25_BB84ADEA4515AABD3B9AC6A04453D826;
};
static_assert(alignof(FStruc_NiagaraParameters) == 0x000008, "Wrong alignment on FStruc_NiagaraParameters");
static_assert(sizeof(FStruc_NiagaraParameters) == 0x000048, "Wrong size on FStruc_NiagaraParameters");
static_assert(offsetof(FStruc_NiagaraParameters, ParameterSelection_14_A6D4854946F722970AD7D0AEC96E4705) == 0x000000, "Member 'FStruc_NiagaraParameters::ParameterSelection_14_A6D4854946F722970AD7D0AEC96E4705' has a wrong offset!");
static_assert(offsetof(FStruc_NiagaraParameters, FloatParameterName_17_6AFBA48F43B44BD1ED9841983BEFA202) == 0x000004, "Member 'FStruc_NiagaraParameters::FloatParameterName_17_6AFBA48F43B44BD1ED9841983BEFA202' has a wrong offset!");
static_assert(offsetof(FStruc_NiagaraParameters, FloatParameterValue_28_AC98B6464E1CD803B50B47AEC91741EC) == 0x000008, "Member 'FStruc_NiagaraParameters::FloatParameterValue_28_AC98B6464E1CD803B50B47AEC91741EC' has a wrong offset!");
static_assert(offsetof(FStruc_NiagaraParameters, VectorParameterName_20_71917CFB490B3D5D3E0864A3EE90C666) == 0x00000C, "Member 'FStruc_NiagaraParameters::VectorParameterName_20_71917CFB490B3D5D3E0864A3EE90C666' has a wrong offset!");
static_assert(offsetof(FStruc_NiagaraParameters, VectorParameterValue_27_248856604659F589FF5D4FA5FF52E013) == 0x000010, "Member 'FStruc_NiagaraParameters::VectorParameterValue_27_248856604659F589FF5D4FA5FF52E013' has a wrong offset!");
static_assert(offsetof(FStruc_NiagaraParameters, LinearColorparameterName_22_69C61F8D45C74F98203920856CAD5ADE) == 0x000028, "Member 'FStruc_NiagaraParameters::LinearColorparameterName_22_69C61F8D45C74F98203920856CAD5ADE' has a wrong offset!");
static_assert(offsetof(FStruc_NiagaraParameters, LinearColorParameterValue_29_861B08ED408F0F612BF509A2A94F377F) == 0x00002C, "Member 'FStruc_NiagaraParameters::LinearColorParameterValue_29_861B08ED408F0F612BF509A2A94F377F' has a wrong offset!");
static_assert(offsetof(FStruc_NiagaraParameters, IntegerParameterName_24_98306BA7452D90289F6EE9954C4F2B1D) == 0x00003C, "Member 'FStruc_NiagaraParameters::IntegerParameterName_24_98306BA7452D90289F6EE9954C4F2B1D' has a wrong offset!");
static_assert(offsetof(FStruc_NiagaraParameters, IntegerParameterValue_25_BB84ADEA4515AABD3B9AC6A04453D826) == 0x000040, "Member 'FStruc_NiagaraParameters::IntegerParameterValue_25_BB84ADEA4515AABD3B9AC6A04453D826' has a wrong offset!");

}
