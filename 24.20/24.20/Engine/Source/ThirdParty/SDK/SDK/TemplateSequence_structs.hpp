#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "MovieScene_structs.hpp"

namespace SDK
{

enum class ETemplateSectionPropertyScaleType : uint32
{
	FloatProperty                            = 0,
	TransformPropertyLocationOnly            = 1,
	TransformPropertyRotationOnly            = 2,
	ETemplateSectionPropertyScaleType_MAX    = 3,
};

struct FTemplateSectionPropertyScale final
{
public:
	struct FGuid                                  ObjectBinding;
	struct FMovieScenePropertyBinding             PropertyBinding;
	ETemplateSectionPropertyScaleType             PropertyScaleType;
	struct FMovieSceneFloatChannel                FloatChannel;
};
static_assert(alignof(FTemplateSectionPropertyScale) == 0x000008, "Wrong alignment on FTemplateSectionPropertyScale");
static_assert(sizeof(FTemplateSectionPropertyScale) == 0x000130, "Wrong size on FTemplateSectionPropertyScale");
static_assert(offsetof(FTemplateSectionPropertyScale, ObjectBinding) == 0x000000, "Member 'FTemplateSectionPropertyScale::ObjectBinding' has a wrong offset!");
static_assert(offsetof(FTemplateSectionPropertyScale, PropertyBinding) == 0x000010, "Member 'FTemplateSectionPropertyScale::PropertyBinding' has a wrong offset!");
static_assert(offsetof(FTemplateSectionPropertyScale, PropertyScaleType) == 0x00001C, "Member 'FTemplateSectionPropertyScale::PropertyScaleType' has a wrong offset!");
static_assert(offsetof(FTemplateSectionPropertyScale, FloatChannel) == 0x000020, "Member 'FTemplateSectionPropertyScale::FloatChannel' has a wrong offset!");

struct FTemplateSequenceBindingOverrideData final
{
public:
	TWeakObjectPtr<class UObject>                 Object;
	bool                                          bOverridesDefault;
	uint8                                         Pad_9[0x3];
};
static_assert(alignof(FTemplateSequenceBindingOverrideData) == 0x000004, "Wrong alignment on FTemplateSequenceBindingOverrideData");
static_assert(sizeof(FTemplateSequenceBindingOverrideData) == 0x00000C, "Wrong size on FTemplateSequenceBindingOverrideData");
static_assert(offsetof(FTemplateSequenceBindingOverrideData, Object) == 0x000000, "Member 'FTemplateSequenceBindingOverrideData::Object' has a wrong offset!");
static_assert(offsetof(FTemplateSequenceBindingOverrideData, bOverridesDefault) == 0x000008, "Member 'FTemplateSequenceBindingOverrideData::bOverridesDefault' has a wrong offset!");

}
