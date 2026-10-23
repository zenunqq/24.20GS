#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

struct FAssembledMeshAttachmentRules final
{
public:
	class FName                                   AttachSocketName;
	uint8                                         Pad_4[0x4];
	struct FVector                                AttachOffset;
};
static_assert(alignof(FAssembledMeshAttachmentRules) == 0x000008, "Wrong alignment on FAssembledMeshAttachmentRules");
static_assert(sizeof(FAssembledMeshAttachmentRules) == 0x000020, "Wrong size on FAssembledMeshAttachmentRules");
static_assert(offsetof(FAssembledMeshAttachmentRules, AttachSocketName) == 0x000000, "Member 'FAssembledMeshAttachmentRules::AttachSocketName' has a wrong offset!");
static_assert(offsetof(FAssembledMeshAttachmentRules, AttachOffset) == 0x000008, "Member 'FAssembledMeshAttachmentRules::AttachOffset' has a wrong offset!");

struct FBaseParamData
{
public:
	class FString                                 ParamName;
};
static_assert(alignof(FBaseParamData) == 0x000008, "Wrong alignment on FBaseParamData");
static_assert(sizeof(FBaseParamData) == 0x000010, "Wrong size on FBaseParamData");
static_assert(offsetof(FBaseParamData, ParamName) == 0x000000, "Member 'FBaseParamData::ParamName' has a wrong offset!");

struct FIntParamData final : public FBaseParamData
{
public:
	TArray<class FString>                         ParamOptions;
};
static_assert(alignof(FIntParamData) == 0x000008, "Wrong alignment on FIntParamData");
static_assert(sizeof(FIntParamData) == 0x000020, "Wrong size on FIntParamData");
static_assert(offsetof(FIntParamData, ParamOptions) == 0x000010, "Member 'FIntParamData::ParamOptions' has a wrong offset!");

struct FFloatParamData final : public FBaseParamData
{
public:
	float                                         FloatValue;
	float                                         MinFloatValue;
	float                                         MaxFloatValue;
	uint8                                         Pad_1C[0x4];
};
static_assert(alignof(FFloatParamData) == 0x000008, "Wrong alignment on FFloatParamData");
static_assert(sizeof(FFloatParamData) == 0x000020, "Wrong size on FFloatParamData");
static_assert(offsetof(FFloatParamData, FloatValue) == 0x000010, "Member 'FFloatParamData::FloatValue' has a wrong offset!");
static_assert(offsetof(FFloatParamData, MinFloatValue) == 0x000014, "Member 'FFloatParamData::MinFloatValue' has a wrong offset!");
static_assert(offsetof(FFloatParamData, MaxFloatValue) == 0x000018, "Member 'FFloatParamData::MaxFloatValue' has a wrong offset!");

struct FAssembledComponentReferences final
{
public:
	class USkeletalMeshComponent*                 SkeletalMeshComponent;
	class UCustomizableSkeletalComponent*         CustomizableComponent;
};
static_assert(alignof(FAssembledComponentReferences) == 0x000008, "Wrong alignment on FAssembledComponentReferences");
static_assert(sizeof(FAssembledComponentReferences) == 0x000010, "Wrong size on FAssembledComponentReferences");
static_assert(offsetof(FAssembledComponentReferences, SkeletalMeshComponent) == 0x000000, "Member 'FAssembledComponentReferences::SkeletalMeshComponent' has a wrong offset!");
static_assert(offsetof(FAssembledComponentReferences, CustomizableComponent) == 0x000008, "Member 'FAssembledComponentReferences::CustomizableComponent' has a wrong offset!");

}
