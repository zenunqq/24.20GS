#pragma once

#include "Basic.hpp"

#include "Procedural_structs.hpp"

namespace SDK::Params
{

struct ProceduralParameterModifier_GetContribution final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(ProceduralParameterModifier_GetContribution) == 0x000004, "Wrong alignment on ProceduralParameterModifier_GetContribution");
static_assert(sizeof(ProceduralParameterModifier_GetContribution) == 0x000004, "Wrong size on ProceduralParameterModifier_GetContribution");
static_assert(offsetof(ProceduralParameterModifier_GetContribution, ReturnValue) == 0x000000, "Member 'ProceduralParameterModifier_GetContribution::ReturnValue' has a wrong offset!");

struct HISMBuilderSettings_SetOverriddenLightMapRes final
{
public:
	int32                                         Value;
};
static_assert(alignof(HISMBuilderSettings_SetOverriddenLightMapRes) == 0x000004, "Wrong alignment on HISMBuilderSettings_SetOverriddenLightMapRes");
static_assert(sizeof(HISMBuilderSettings_SetOverriddenLightMapRes) == 0x000004, "Wrong size on HISMBuilderSettings_SetOverriddenLightMapRes");
static_assert(offsetof(HISMBuilderSettings_SetOverriddenLightMapRes, Value) == 0x000000, "Member 'HISMBuilderSettings_SetOverriddenLightMapRes::Value' has a wrong offset!");

struct HISMBuilderSettings_GetOverriddenLightMapRes final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(HISMBuilderSettings_GetOverriddenLightMapRes) == 0x000004, "Wrong alignment on HISMBuilderSettings_GetOverriddenLightMapRes");
static_assert(sizeof(HISMBuilderSettings_GetOverriddenLightMapRes) == 0x000004, "Wrong size on HISMBuilderSettings_GetOverriddenLightMapRes");
static_assert(offsetof(HISMBuilderSettings_GetOverriddenLightMapRes, ReturnValue) == 0x000000, "Member 'HISMBuilderSettings_GetOverriddenLightMapRes::ReturnValue' has a wrong offset!");

struct ProceduralGenerationContext_GetGenerationComponent final
{
public:
	class UProceduralGenerationComponent*         ReturnValue;
};
static_assert(alignof(ProceduralGenerationContext_GetGenerationComponent) == 0x000008, "Wrong alignment on ProceduralGenerationContext_GetGenerationComponent");
static_assert(sizeof(ProceduralGenerationContext_GetGenerationComponent) == 0x000008, "Wrong size on ProceduralGenerationContext_GetGenerationComponent");
static_assert(offsetof(ProceduralGenerationContext_GetGenerationComponent, ReturnValue) == 0x000000, "Member 'ProceduralGenerationContext_GetGenerationComponent::ReturnValue' has a wrong offset!");

struct ProceduralGenerationContext_GetGenerationVolume final
{
public:
	class AVolume*                                ReturnValue;
};
static_assert(alignof(ProceduralGenerationContext_GetGenerationVolume) == 0x000008, "Wrong alignment on ProceduralGenerationContext_GetGenerationVolume");
static_assert(sizeof(ProceduralGenerationContext_GetGenerationVolume) == 0x000008, "Wrong size on ProceduralGenerationContext_GetGenerationVolume");
static_assert(offsetof(ProceduralGenerationContext_GetGenerationVolume, ReturnValue) == 0x000000, "Member 'ProceduralGenerationContext_GetGenerationVolume::ReturnValue' has a wrong offset!");

struct ProceduralGeneratorContext_Generate final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(ProceduralGeneratorContext_Generate) == 0x000001, "Wrong alignment on ProceduralGeneratorContext_Generate");
static_assert(sizeof(ProceduralGeneratorContext_Generate) == 0x000001, "Wrong size on ProceduralGeneratorContext_Generate");
static_assert(offsetof(ProceduralGeneratorContext_Generate, ReturnValue) == 0x000000, "Member 'ProceduralGeneratorContext_Generate::ReturnValue' has a wrong offset!");

struct ProceduralGeneratorContext_GetOrCreateGeneratorContext final
{
public:
	class UProceduralGenerator*                   Generator_0;
	class UProceduralGeneratorContext*            Context;
};
static_assert(alignof(ProceduralGeneratorContext_GetOrCreateGeneratorContext) == 0x000008, "Wrong alignment on ProceduralGeneratorContext_GetOrCreateGeneratorContext");
static_assert(sizeof(ProceduralGeneratorContext_GetOrCreateGeneratorContext) == 0x000010, "Wrong size on ProceduralGeneratorContext_GetOrCreateGeneratorContext");
static_assert(offsetof(ProceduralGeneratorContext_GetOrCreateGeneratorContext, Generator_0) == 0x000000, "Member 'ProceduralGeneratorContext_GetOrCreateGeneratorContext::Generator_0' has a wrong offset!");
static_assert(offsetof(ProceduralGeneratorContext_GetOrCreateGeneratorContext, Context) == 0x000008, "Member 'ProceduralGeneratorContext_GetOrCreateGeneratorContext::Context' has a wrong offset!");

struct ProceduralGeneratorContext_OnGenerate final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(ProceduralGeneratorContext_OnGenerate) == 0x000001, "Wrong alignment on ProceduralGeneratorContext_OnGenerate");
static_assert(sizeof(ProceduralGeneratorContext_OnGenerate) == 0x000001, "Wrong size on ProceduralGeneratorContext_OnGenerate");
static_assert(offsetof(ProceduralGeneratorContext_OnGenerate, ReturnValue) == 0x000000, "Member 'ProceduralGeneratorContext_OnGenerate::ReturnValue' has a wrong offset!");

struct ProceduralGeneratorContext_GetGeneratedContexts final
{
public:
	TArray<class UProceduralGeneratorContext*>    ReturnValue;
};
static_assert(alignof(ProceduralGeneratorContext_GetGeneratedContexts) == 0x000008, "Wrong alignment on ProceduralGeneratorContext_GetGeneratedContexts");
static_assert(sizeof(ProceduralGeneratorContext_GetGeneratedContexts) == 0x000010, "Wrong size on ProceduralGeneratorContext_GetGeneratedContexts");
static_assert(offsetof(ProceduralGeneratorContext_GetGeneratedContexts, ReturnValue) == 0x000000, "Member 'ProceduralGeneratorContext_GetGeneratedContexts::ReturnValue' has a wrong offset!");

struct ProceduralPointCloud_GetPointsByTag final
{
public:
	class FName                                   InTag;
	uint8                                         Pad_4[0x4];
	TArray<struct FProceduralPointCloudPoint>     ReturnValue;
};
static_assert(alignof(ProceduralPointCloud_GetPointsByTag) == 0x000008, "Wrong alignment on ProceduralPointCloud_GetPointsByTag");
static_assert(sizeof(ProceduralPointCloud_GetPointsByTag) == 0x000018, "Wrong size on ProceduralPointCloud_GetPointsByTag");
static_assert(offsetof(ProceduralPointCloud_GetPointsByTag, InTag) == 0x000000, "Member 'ProceduralPointCloud_GetPointsByTag::InTag' has a wrong offset!");
static_assert(offsetof(ProceduralPointCloud_GetPointsByTag, ReturnValue) == 0x000008, "Member 'ProceduralPointCloud_GetPointsByTag::ReturnValue' has a wrong offset!");

struct ProceduralRotationMapModifier_SetPitchMax final
{
public:
	float                                         InValue;
};
static_assert(alignof(ProceduralRotationMapModifier_SetPitchMax) == 0x000004, "Wrong alignment on ProceduralRotationMapModifier_SetPitchMax");
static_assert(sizeof(ProceduralRotationMapModifier_SetPitchMax) == 0x000004, "Wrong size on ProceduralRotationMapModifier_SetPitchMax");
static_assert(offsetof(ProceduralRotationMapModifier_SetPitchMax, InValue) == 0x000000, "Member 'ProceduralRotationMapModifier_SetPitchMax::InValue' has a wrong offset!");

struct ProceduralRotationMapModifier_SetPitchMin final
{
public:
	float                                         InValue;
};
static_assert(alignof(ProceduralRotationMapModifier_SetPitchMin) == 0x000004, "Wrong alignment on ProceduralRotationMapModifier_SetPitchMin");
static_assert(sizeof(ProceduralRotationMapModifier_SetPitchMin) == 0x000004, "Wrong size on ProceduralRotationMapModifier_SetPitchMin");
static_assert(offsetof(ProceduralRotationMapModifier_SetPitchMin, InValue) == 0x000000, "Member 'ProceduralRotationMapModifier_SetPitchMin::InValue' has a wrong offset!");

struct ProceduralRotationMapModifier_SetRollMax final
{
public:
	float                                         InValue;
};
static_assert(alignof(ProceduralRotationMapModifier_SetRollMax) == 0x000004, "Wrong alignment on ProceduralRotationMapModifier_SetRollMax");
static_assert(sizeof(ProceduralRotationMapModifier_SetRollMax) == 0x000004, "Wrong size on ProceduralRotationMapModifier_SetRollMax");
static_assert(offsetof(ProceduralRotationMapModifier_SetRollMax, InValue) == 0x000000, "Member 'ProceduralRotationMapModifier_SetRollMax::InValue' has a wrong offset!");

struct ProceduralRotationMapModifier_SetRollMin final
{
public:
	float                                         InValue;
};
static_assert(alignof(ProceduralRotationMapModifier_SetRollMin) == 0x000004, "Wrong alignment on ProceduralRotationMapModifier_SetRollMin");
static_assert(sizeof(ProceduralRotationMapModifier_SetRollMin) == 0x000004, "Wrong size on ProceduralRotationMapModifier_SetRollMin");
static_assert(offsetof(ProceduralRotationMapModifier_SetRollMin, InValue) == 0x000000, "Member 'ProceduralRotationMapModifier_SetRollMin::InValue' has a wrong offset!");

struct ProceduralRotationMapModifier_SetYawMax final
{
public:
	float                                         InValue;
};
static_assert(alignof(ProceduralRotationMapModifier_SetYawMax) == 0x000004, "Wrong alignment on ProceduralRotationMapModifier_SetYawMax");
static_assert(sizeof(ProceduralRotationMapModifier_SetYawMax) == 0x000004, "Wrong size on ProceduralRotationMapModifier_SetYawMax");
static_assert(offsetof(ProceduralRotationMapModifier_SetYawMax, InValue) == 0x000000, "Member 'ProceduralRotationMapModifier_SetYawMax::InValue' has a wrong offset!");

struct ProceduralRotationMapModifier_SetYawMin final
{
public:
	float                                         InValue;
};
static_assert(alignof(ProceduralRotationMapModifier_SetYawMin) == 0x000004, "Wrong alignment on ProceduralRotationMapModifier_SetYawMin");
static_assert(sizeof(ProceduralRotationMapModifier_SetYawMin) == 0x000004, "Wrong size on ProceduralRotationMapModifier_SetYawMin");
static_assert(offsetof(ProceduralRotationMapModifier_SetYawMin, InValue) == 0x000000, "Member 'ProceduralRotationMapModifier_SetYawMin::InValue' has a wrong offset!");

struct ProceduralRotationMapModifier_GetPitchMax final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(ProceduralRotationMapModifier_GetPitchMax) == 0x000004, "Wrong alignment on ProceduralRotationMapModifier_GetPitchMax");
static_assert(sizeof(ProceduralRotationMapModifier_GetPitchMax) == 0x000004, "Wrong size on ProceduralRotationMapModifier_GetPitchMax");
static_assert(offsetof(ProceduralRotationMapModifier_GetPitchMax, ReturnValue) == 0x000000, "Member 'ProceduralRotationMapModifier_GetPitchMax::ReturnValue' has a wrong offset!");

struct ProceduralRotationMapModifier_GetPitchMin final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(ProceduralRotationMapModifier_GetPitchMin) == 0x000004, "Wrong alignment on ProceduralRotationMapModifier_GetPitchMin");
static_assert(sizeof(ProceduralRotationMapModifier_GetPitchMin) == 0x000004, "Wrong size on ProceduralRotationMapModifier_GetPitchMin");
static_assert(offsetof(ProceduralRotationMapModifier_GetPitchMin, ReturnValue) == 0x000000, "Member 'ProceduralRotationMapModifier_GetPitchMin::ReturnValue' has a wrong offset!");

struct ProceduralRotationMapModifier_GetRollMax final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(ProceduralRotationMapModifier_GetRollMax) == 0x000004, "Wrong alignment on ProceduralRotationMapModifier_GetRollMax");
static_assert(sizeof(ProceduralRotationMapModifier_GetRollMax) == 0x000004, "Wrong size on ProceduralRotationMapModifier_GetRollMax");
static_assert(offsetof(ProceduralRotationMapModifier_GetRollMax, ReturnValue) == 0x000000, "Member 'ProceduralRotationMapModifier_GetRollMax::ReturnValue' has a wrong offset!");

struct ProceduralRotationMapModifier_GetRollMin final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(ProceduralRotationMapModifier_GetRollMin) == 0x000004, "Wrong alignment on ProceduralRotationMapModifier_GetRollMin");
static_assert(sizeof(ProceduralRotationMapModifier_GetRollMin) == 0x000004, "Wrong size on ProceduralRotationMapModifier_GetRollMin");
static_assert(offsetof(ProceduralRotationMapModifier_GetRollMin, ReturnValue) == 0x000000, "Member 'ProceduralRotationMapModifier_GetRollMin::ReturnValue' has a wrong offset!");

struct ProceduralRotationMapModifier_GetYawMax final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(ProceduralRotationMapModifier_GetYawMax) == 0x000004, "Wrong alignment on ProceduralRotationMapModifier_GetYawMax");
static_assert(sizeof(ProceduralRotationMapModifier_GetYawMax) == 0x000004, "Wrong size on ProceduralRotationMapModifier_GetYawMax");
static_assert(offsetof(ProceduralRotationMapModifier_GetYawMax, ReturnValue) == 0x000000, "Member 'ProceduralRotationMapModifier_GetYawMax::ReturnValue' has a wrong offset!");

struct ProceduralRotationMapModifier_GetYawMin final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(ProceduralRotationMapModifier_GetYawMin) == 0x000004, "Wrong alignment on ProceduralRotationMapModifier_GetYawMin");
static_assert(sizeof(ProceduralRotationMapModifier_GetYawMin) == 0x000004, "Wrong size on ProceduralRotationMapModifier_GetYawMin");
static_assert(offsetof(ProceduralRotationMapModifier_GetYawMin, ReturnValue) == 0x000000, "Member 'ProceduralRotationMapModifier_GetYawMin::ReturnValue' has a wrong offset!");

struct ProceduralRotationNoiseModifier_SetRandomPitchMax final
{
public:
	float                                         InValue;
};
static_assert(alignof(ProceduralRotationNoiseModifier_SetRandomPitchMax) == 0x000004, "Wrong alignment on ProceduralRotationNoiseModifier_SetRandomPitchMax");
static_assert(sizeof(ProceduralRotationNoiseModifier_SetRandomPitchMax) == 0x000004, "Wrong size on ProceduralRotationNoiseModifier_SetRandomPitchMax");
static_assert(offsetof(ProceduralRotationNoiseModifier_SetRandomPitchMax, InValue) == 0x000000, "Member 'ProceduralRotationNoiseModifier_SetRandomPitchMax::InValue' has a wrong offset!");

struct ProceduralRotationNoiseModifier_SetRandomPitchMin final
{
public:
	float                                         InValue;
};
static_assert(alignof(ProceduralRotationNoiseModifier_SetRandomPitchMin) == 0x000004, "Wrong alignment on ProceduralRotationNoiseModifier_SetRandomPitchMin");
static_assert(sizeof(ProceduralRotationNoiseModifier_SetRandomPitchMin) == 0x000004, "Wrong size on ProceduralRotationNoiseModifier_SetRandomPitchMin");
static_assert(offsetof(ProceduralRotationNoiseModifier_SetRandomPitchMin, InValue) == 0x000000, "Member 'ProceduralRotationNoiseModifier_SetRandomPitchMin::InValue' has a wrong offset!");

struct ProceduralRotationNoiseModifier_SetRandomRollMax final
{
public:
	float                                         InValue;
};
static_assert(alignof(ProceduralRotationNoiseModifier_SetRandomRollMax) == 0x000004, "Wrong alignment on ProceduralRotationNoiseModifier_SetRandomRollMax");
static_assert(sizeof(ProceduralRotationNoiseModifier_SetRandomRollMax) == 0x000004, "Wrong size on ProceduralRotationNoiseModifier_SetRandomRollMax");
static_assert(offsetof(ProceduralRotationNoiseModifier_SetRandomRollMax, InValue) == 0x000000, "Member 'ProceduralRotationNoiseModifier_SetRandomRollMax::InValue' has a wrong offset!");

struct ProceduralRotationNoiseModifier_SetRandomRollMin final
{
public:
	float                                         InValue;
};
static_assert(alignof(ProceduralRotationNoiseModifier_SetRandomRollMin) == 0x000004, "Wrong alignment on ProceduralRotationNoiseModifier_SetRandomRollMin");
static_assert(sizeof(ProceduralRotationNoiseModifier_SetRandomRollMin) == 0x000004, "Wrong size on ProceduralRotationNoiseModifier_SetRandomRollMin");
static_assert(offsetof(ProceduralRotationNoiseModifier_SetRandomRollMin, InValue) == 0x000000, "Member 'ProceduralRotationNoiseModifier_SetRandomRollMin::InValue' has a wrong offset!");

struct ProceduralRotationNoiseModifier_SetRandomYawMax final
{
public:
	float                                         InValue;
};
static_assert(alignof(ProceduralRotationNoiseModifier_SetRandomYawMax) == 0x000004, "Wrong alignment on ProceduralRotationNoiseModifier_SetRandomYawMax");
static_assert(sizeof(ProceduralRotationNoiseModifier_SetRandomYawMax) == 0x000004, "Wrong size on ProceduralRotationNoiseModifier_SetRandomYawMax");
static_assert(offsetof(ProceduralRotationNoiseModifier_SetRandomYawMax, InValue) == 0x000000, "Member 'ProceduralRotationNoiseModifier_SetRandomYawMax::InValue' has a wrong offset!");

struct ProceduralRotationNoiseModifier_SetRandomYawMin final
{
public:
	float                                         InValue;
};
static_assert(alignof(ProceduralRotationNoiseModifier_SetRandomYawMin) == 0x000004, "Wrong alignment on ProceduralRotationNoiseModifier_SetRandomYawMin");
static_assert(sizeof(ProceduralRotationNoiseModifier_SetRandomYawMin) == 0x000004, "Wrong size on ProceduralRotationNoiseModifier_SetRandomYawMin");
static_assert(offsetof(ProceduralRotationNoiseModifier_SetRandomYawMin, InValue) == 0x000000, "Member 'ProceduralRotationNoiseModifier_SetRandomYawMin::InValue' has a wrong offset!");

struct ProceduralRotationNoiseModifier_GetRandomPitchMax final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(ProceduralRotationNoiseModifier_GetRandomPitchMax) == 0x000004, "Wrong alignment on ProceduralRotationNoiseModifier_GetRandomPitchMax");
static_assert(sizeof(ProceduralRotationNoiseModifier_GetRandomPitchMax) == 0x000004, "Wrong size on ProceduralRotationNoiseModifier_GetRandomPitchMax");
static_assert(offsetof(ProceduralRotationNoiseModifier_GetRandomPitchMax, ReturnValue) == 0x000000, "Member 'ProceduralRotationNoiseModifier_GetRandomPitchMax::ReturnValue' has a wrong offset!");

struct ProceduralRotationNoiseModifier_GetRandomPitchMin final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(ProceduralRotationNoiseModifier_GetRandomPitchMin) == 0x000004, "Wrong alignment on ProceduralRotationNoiseModifier_GetRandomPitchMin");
static_assert(sizeof(ProceduralRotationNoiseModifier_GetRandomPitchMin) == 0x000004, "Wrong size on ProceduralRotationNoiseModifier_GetRandomPitchMin");
static_assert(offsetof(ProceduralRotationNoiseModifier_GetRandomPitchMin, ReturnValue) == 0x000000, "Member 'ProceduralRotationNoiseModifier_GetRandomPitchMin::ReturnValue' has a wrong offset!");

struct ProceduralRotationNoiseModifier_GetRandomRollMax final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(ProceduralRotationNoiseModifier_GetRandomRollMax) == 0x000004, "Wrong alignment on ProceduralRotationNoiseModifier_GetRandomRollMax");
static_assert(sizeof(ProceduralRotationNoiseModifier_GetRandomRollMax) == 0x000004, "Wrong size on ProceduralRotationNoiseModifier_GetRandomRollMax");
static_assert(offsetof(ProceduralRotationNoiseModifier_GetRandomRollMax, ReturnValue) == 0x000000, "Member 'ProceduralRotationNoiseModifier_GetRandomRollMax::ReturnValue' has a wrong offset!");

struct ProceduralRotationNoiseModifier_GetRandomRollMin final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(ProceduralRotationNoiseModifier_GetRandomRollMin) == 0x000004, "Wrong alignment on ProceduralRotationNoiseModifier_GetRandomRollMin");
static_assert(sizeof(ProceduralRotationNoiseModifier_GetRandomRollMin) == 0x000004, "Wrong size on ProceduralRotationNoiseModifier_GetRandomRollMin");
static_assert(offsetof(ProceduralRotationNoiseModifier_GetRandomRollMin, ReturnValue) == 0x000000, "Member 'ProceduralRotationNoiseModifier_GetRandomRollMin::ReturnValue' has a wrong offset!");

struct ProceduralRotationNoiseModifier_GetRandomYawMax final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(ProceduralRotationNoiseModifier_GetRandomYawMax) == 0x000004, "Wrong alignment on ProceduralRotationNoiseModifier_GetRandomYawMax");
static_assert(sizeof(ProceduralRotationNoiseModifier_GetRandomYawMax) == 0x000004, "Wrong size on ProceduralRotationNoiseModifier_GetRandomYawMax");
static_assert(offsetof(ProceduralRotationNoiseModifier_GetRandomYawMax, ReturnValue) == 0x000000, "Member 'ProceduralRotationNoiseModifier_GetRandomYawMax::ReturnValue' has a wrong offset!");

struct ProceduralRotationNoiseModifier_GetRandomYawMin final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(ProceduralRotationNoiseModifier_GetRandomYawMin) == 0x000004, "Wrong alignment on ProceduralRotationNoiseModifier_GetRandomYawMin");
static_assert(sizeof(ProceduralRotationNoiseModifier_GetRandomYawMin) == 0x000004, "Wrong size on ProceduralRotationNoiseModifier_GetRandomYawMin");
static_assert(offsetof(ProceduralRotationNoiseModifier_GetRandomYawMin, ReturnValue) == 0x000000, "Member 'ProceduralRotationNoiseModifier_GetRandomYawMin::ReturnValue' has a wrong offset!");

struct ProceduralScaleMapModifier_SetRemapScaleMax final
{
public:
	float                                         InValue;
};
static_assert(alignof(ProceduralScaleMapModifier_SetRemapScaleMax) == 0x000004, "Wrong alignment on ProceduralScaleMapModifier_SetRemapScaleMax");
static_assert(sizeof(ProceduralScaleMapModifier_SetRemapScaleMax) == 0x000004, "Wrong size on ProceduralScaleMapModifier_SetRemapScaleMax");
static_assert(offsetof(ProceduralScaleMapModifier_SetRemapScaleMax, InValue) == 0x000000, "Member 'ProceduralScaleMapModifier_SetRemapScaleMax::InValue' has a wrong offset!");

struct ProceduralScaleMapModifier_SetRemapScaleMin final
{
public:
	float                                         InValue;
};
static_assert(alignof(ProceduralScaleMapModifier_SetRemapScaleMin) == 0x000004, "Wrong alignment on ProceduralScaleMapModifier_SetRemapScaleMin");
static_assert(sizeof(ProceduralScaleMapModifier_SetRemapScaleMin) == 0x000004, "Wrong size on ProceduralScaleMapModifier_SetRemapScaleMin");
static_assert(offsetof(ProceduralScaleMapModifier_SetRemapScaleMin, InValue) == 0x000000, "Member 'ProceduralScaleMapModifier_SetRemapScaleMin::InValue' has a wrong offset!");

struct ProceduralScaleMapModifier_GetRemapScaleMax final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(ProceduralScaleMapModifier_GetRemapScaleMax) == 0x000004, "Wrong alignment on ProceduralScaleMapModifier_GetRemapScaleMax");
static_assert(sizeof(ProceduralScaleMapModifier_GetRemapScaleMax) == 0x000004, "Wrong size on ProceduralScaleMapModifier_GetRemapScaleMax");
static_assert(offsetof(ProceduralScaleMapModifier_GetRemapScaleMax, ReturnValue) == 0x000000, "Member 'ProceduralScaleMapModifier_GetRemapScaleMax::ReturnValue' has a wrong offset!");

struct ProceduralScaleMapModifier_GetRemapScaleMin final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(ProceduralScaleMapModifier_GetRemapScaleMin) == 0x000004, "Wrong alignment on ProceduralScaleMapModifier_GetRemapScaleMin");
static_assert(sizeof(ProceduralScaleMapModifier_GetRemapScaleMin) == 0x000004, "Wrong size on ProceduralScaleMapModifier_GetRemapScaleMin");
static_assert(offsetof(ProceduralScaleMapModifier_GetRemapScaleMin, ReturnValue) == 0x000000, "Member 'ProceduralScaleMapModifier_GetRemapScaleMin::ReturnValue' has a wrong offset!");

struct ProceduralScaleNoiseModifier_SetScaleMax final
{
public:
	float                                         InValue;
};
static_assert(alignof(ProceduralScaleNoiseModifier_SetScaleMax) == 0x000004, "Wrong alignment on ProceduralScaleNoiseModifier_SetScaleMax");
static_assert(sizeof(ProceduralScaleNoiseModifier_SetScaleMax) == 0x000004, "Wrong size on ProceduralScaleNoiseModifier_SetScaleMax");
static_assert(offsetof(ProceduralScaleNoiseModifier_SetScaleMax, InValue) == 0x000000, "Member 'ProceduralScaleNoiseModifier_SetScaleMax::InValue' has a wrong offset!");

struct ProceduralScaleNoiseModifier_SetScaleMin final
{
public:
	float                                         InValue;
};
static_assert(alignof(ProceduralScaleNoiseModifier_SetScaleMin) == 0x000004, "Wrong alignment on ProceduralScaleNoiseModifier_SetScaleMin");
static_assert(sizeof(ProceduralScaleNoiseModifier_SetScaleMin) == 0x000004, "Wrong size on ProceduralScaleNoiseModifier_SetScaleMin");
static_assert(offsetof(ProceduralScaleNoiseModifier_SetScaleMin, InValue) == 0x000000, "Member 'ProceduralScaleNoiseModifier_SetScaleMin::InValue' has a wrong offset!");

struct ProceduralScaleNoiseModifier_GetScaleMax final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(ProceduralScaleNoiseModifier_GetScaleMax) == 0x000004, "Wrong alignment on ProceduralScaleNoiseModifier_GetScaleMax");
static_assert(sizeof(ProceduralScaleNoiseModifier_GetScaleMax) == 0x000004, "Wrong size on ProceduralScaleNoiseModifier_GetScaleMax");
static_assert(offsetof(ProceduralScaleNoiseModifier_GetScaleMax, ReturnValue) == 0x000000, "Member 'ProceduralScaleNoiseModifier_GetScaleMax::ReturnValue' has a wrong offset!");

struct ProceduralScaleNoiseModifier_GetScaleMin final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(ProceduralScaleNoiseModifier_GetScaleMin) == 0x000004, "Wrong alignment on ProceduralScaleNoiseModifier_GetScaleMin");
static_assert(sizeof(ProceduralScaleNoiseModifier_GetScaleMin) == 0x000004, "Wrong size on ProceduralScaleNoiseModifier_GetScaleMin");
static_assert(offsetof(ProceduralScaleNoiseModifier_GetScaleMin, ReturnValue) == 0x000000, "Member 'ProceduralScaleNoiseModifier_GetScaleMin::ReturnValue' has a wrong offset!");

struct ProceduralScatterSettings_SetSourcePointDistanceMax final
{
public:
	float                                         InValue;
};
static_assert(alignof(ProceduralScatterSettings_SetSourcePointDistanceMax) == 0x000004, "Wrong alignment on ProceduralScatterSettings_SetSourcePointDistanceMax");
static_assert(sizeof(ProceduralScatterSettings_SetSourcePointDistanceMax) == 0x000004, "Wrong size on ProceduralScatterSettings_SetSourcePointDistanceMax");
static_assert(offsetof(ProceduralScatterSettings_SetSourcePointDistanceMax, InValue) == 0x000000, "Member 'ProceduralScatterSettings_SetSourcePointDistanceMax::InValue' has a wrong offset!");

struct ProceduralScatterSettings_SetSourcePointDistanceMin final
{
public:
	float                                         InValue;
};
static_assert(alignof(ProceduralScatterSettings_SetSourcePointDistanceMin) == 0x000004, "Wrong alignment on ProceduralScatterSettings_SetSourcePointDistanceMin");
static_assert(sizeof(ProceduralScatterSettings_SetSourcePointDistanceMin) == 0x000004, "Wrong size on ProceduralScatterSettings_SetSourcePointDistanceMin");
static_assert(offsetof(ProceduralScatterSettings_SetSourcePointDistanceMin, InValue) == 0x000000, "Member 'ProceduralScatterSettings_SetSourcePointDistanceMin::InValue' has a wrong offset!");

struct ProceduralScatterSettings_GetSourcePointDistanceMax final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(ProceduralScatterSettings_GetSourcePointDistanceMax) == 0x000004, "Wrong alignment on ProceduralScatterSettings_GetSourcePointDistanceMax");
static_assert(sizeof(ProceduralScatterSettings_GetSourcePointDistanceMax) == 0x000004, "Wrong size on ProceduralScatterSettings_GetSourcePointDistanceMax");
static_assert(offsetof(ProceduralScatterSettings_GetSourcePointDistanceMax, ReturnValue) == 0x000000, "Member 'ProceduralScatterSettings_GetSourcePointDistanceMax::ReturnValue' has a wrong offset!");

struct ProceduralScatterSettings_GetSourcePointDistanceMin final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(ProceduralScatterSettings_GetSourcePointDistanceMin) == 0x000004, "Wrong alignment on ProceduralScatterSettings_GetSourcePointDistanceMin");
static_assert(sizeof(ProceduralScatterSettings_GetSourcePointDistanceMin) == 0x000004, "Wrong size on ProceduralScatterSettings_GetSourcePointDistanceMin");
static_assert(offsetof(ProceduralScatterSettings_GetSourcePointDistanceMin, ReturnValue) == 0x000000, "Member 'ProceduralScatterSettings_GetSourcePointDistanceMin::ReturnValue' has a wrong offset!");

struct ProceduralSurfaceHeightMap_SetHeightRangeMax final
{
public:
	float                                         InValue;
};
static_assert(alignof(ProceduralSurfaceHeightMap_SetHeightRangeMax) == 0x000004, "Wrong alignment on ProceduralSurfaceHeightMap_SetHeightRangeMax");
static_assert(sizeof(ProceduralSurfaceHeightMap_SetHeightRangeMax) == 0x000004, "Wrong size on ProceduralSurfaceHeightMap_SetHeightRangeMax");
static_assert(offsetof(ProceduralSurfaceHeightMap_SetHeightRangeMax, InValue) == 0x000000, "Member 'ProceduralSurfaceHeightMap_SetHeightRangeMax::InValue' has a wrong offset!");

struct ProceduralSurfaceHeightMap_SetHeightRangeMin final
{
public:
	float                                         InValue;
};
static_assert(alignof(ProceduralSurfaceHeightMap_SetHeightRangeMin) == 0x000004, "Wrong alignment on ProceduralSurfaceHeightMap_SetHeightRangeMin");
static_assert(sizeof(ProceduralSurfaceHeightMap_SetHeightRangeMin) == 0x000004, "Wrong size on ProceduralSurfaceHeightMap_SetHeightRangeMin");
static_assert(offsetof(ProceduralSurfaceHeightMap_SetHeightRangeMin, InValue) == 0x000000, "Member 'ProceduralSurfaceHeightMap_SetHeightRangeMin::InValue' has a wrong offset!");

struct ProceduralSurfaceHeightMap_GetHeightRangeMax final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(ProceduralSurfaceHeightMap_GetHeightRangeMax) == 0x000004, "Wrong alignment on ProceduralSurfaceHeightMap_GetHeightRangeMax");
static_assert(sizeof(ProceduralSurfaceHeightMap_GetHeightRangeMax) == 0x000004, "Wrong size on ProceduralSurfaceHeightMap_GetHeightRangeMax");
static_assert(offsetof(ProceduralSurfaceHeightMap_GetHeightRangeMax, ReturnValue) == 0x000000, "Member 'ProceduralSurfaceHeightMap_GetHeightRangeMax::ReturnValue' has a wrong offset!");

struct ProceduralSurfaceHeightMap_GetHeightRangeMin final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(ProceduralSurfaceHeightMap_GetHeightRangeMin) == 0x000004, "Wrong alignment on ProceduralSurfaceHeightMap_GetHeightRangeMin");
static_assert(sizeof(ProceduralSurfaceHeightMap_GetHeightRangeMin) == 0x000004, "Wrong size on ProceduralSurfaceHeightMap_GetHeightRangeMin");
static_assert(offsetof(ProceduralSurfaceHeightMap_GetHeightRangeMin, ReturnValue) == 0x000000, "Member 'ProceduralSurfaceHeightMap_GetHeightRangeMin::ReturnValue' has a wrong offset!");

struct ProceduralSurfaceHeightMap_GetValue final
{
public:
	float                                         InHeight;
	float                                         ReturnValue;
};
static_assert(alignof(ProceduralSurfaceHeightMap_GetValue) == 0x000004, "Wrong alignment on ProceduralSurfaceHeightMap_GetValue");
static_assert(sizeof(ProceduralSurfaceHeightMap_GetValue) == 0x000008, "Wrong size on ProceduralSurfaceHeightMap_GetValue");
static_assert(offsetof(ProceduralSurfaceHeightMap_GetValue, InHeight) == 0x000000, "Member 'ProceduralSurfaceHeightMap_GetValue::InHeight' has a wrong offset!");
static_assert(offsetof(ProceduralSurfaceHeightMap_GetValue, ReturnValue) == 0x000004, "Member 'ProceduralSurfaceHeightMap_GetValue::ReturnValue' has a wrong offset!");

struct ProceduralSurfaceSlopeAngleMap_SetSlopeAngleRangeMax final
{
public:
	float                                         InValue;
};
static_assert(alignof(ProceduralSurfaceSlopeAngleMap_SetSlopeAngleRangeMax) == 0x000004, "Wrong alignment on ProceduralSurfaceSlopeAngleMap_SetSlopeAngleRangeMax");
static_assert(sizeof(ProceduralSurfaceSlopeAngleMap_SetSlopeAngleRangeMax) == 0x000004, "Wrong size on ProceduralSurfaceSlopeAngleMap_SetSlopeAngleRangeMax");
static_assert(offsetof(ProceduralSurfaceSlopeAngleMap_SetSlopeAngleRangeMax, InValue) == 0x000000, "Member 'ProceduralSurfaceSlopeAngleMap_SetSlopeAngleRangeMax::InValue' has a wrong offset!");

struct ProceduralSurfaceSlopeAngleMap_SetSlopeAngleRangeMin final
{
public:
	float                                         InValue;
};
static_assert(alignof(ProceduralSurfaceSlopeAngleMap_SetSlopeAngleRangeMin) == 0x000004, "Wrong alignment on ProceduralSurfaceSlopeAngleMap_SetSlopeAngleRangeMin");
static_assert(sizeof(ProceduralSurfaceSlopeAngleMap_SetSlopeAngleRangeMin) == 0x000004, "Wrong size on ProceduralSurfaceSlopeAngleMap_SetSlopeAngleRangeMin");
static_assert(offsetof(ProceduralSurfaceSlopeAngleMap_SetSlopeAngleRangeMin, InValue) == 0x000000, "Member 'ProceduralSurfaceSlopeAngleMap_SetSlopeAngleRangeMin::InValue' has a wrong offset!");

struct ProceduralSurfaceSlopeAngleMap_GetSlopeAngleRangeMax final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(ProceduralSurfaceSlopeAngleMap_GetSlopeAngleRangeMax) == 0x000004, "Wrong alignment on ProceduralSurfaceSlopeAngleMap_GetSlopeAngleRangeMax");
static_assert(sizeof(ProceduralSurfaceSlopeAngleMap_GetSlopeAngleRangeMax) == 0x000004, "Wrong size on ProceduralSurfaceSlopeAngleMap_GetSlopeAngleRangeMax");
static_assert(offsetof(ProceduralSurfaceSlopeAngleMap_GetSlopeAngleRangeMax, ReturnValue) == 0x000000, "Member 'ProceduralSurfaceSlopeAngleMap_GetSlopeAngleRangeMax::ReturnValue' has a wrong offset!");

struct ProceduralSurfaceSlopeAngleMap_GetSlopeAngleRangeMin final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(ProceduralSurfaceSlopeAngleMap_GetSlopeAngleRangeMin) == 0x000004, "Wrong alignment on ProceduralSurfaceSlopeAngleMap_GetSlopeAngleRangeMin");
static_assert(sizeof(ProceduralSurfaceSlopeAngleMap_GetSlopeAngleRangeMin) == 0x000004, "Wrong size on ProceduralSurfaceSlopeAngleMap_GetSlopeAngleRangeMin");
static_assert(offsetof(ProceduralSurfaceSlopeAngleMap_GetSlopeAngleRangeMin, ReturnValue) == 0x000000, "Member 'ProceduralSurfaceSlopeAngleMap_GetSlopeAngleRangeMin::ReturnValue' has a wrong offset!");

struct ProceduralSurfaceSlopeAngleMap_GetValue final
{
public:
	float                                         InSlopeAngle;
	float                                         ReturnValue;
};
static_assert(alignof(ProceduralSurfaceSlopeAngleMap_GetValue) == 0x000004, "Wrong alignment on ProceduralSurfaceSlopeAngleMap_GetValue");
static_assert(sizeof(ProceduralSurfaceSlopeAngleMap_GetValue) == 0x000008, "Wrong size on ProceduralSurfaceSlopeAngleMap_GetValue");
static_assert(offsetof(ProceduralSurfaceSlopeAngleMap_GetValue, InSlopeAngle) == 0x000000, "Member 'ProceduralSurfaceSlopeAngleMap_GetValue::InSlopeAngle' has a wrong offset!");
static_assert(offsetof(ProceduralSurfaceSlopeAngleMap_GetValue, ReturnValue) == 0x000004, "Member 'ProceduralSurfaceSlopeAngleMap_GetValue::ReturnValue' has a wrong offset!");

}
