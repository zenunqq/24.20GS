#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EAudioParameterType : uint8
{
	None                                     = 0,
	Boolean                                  = 1,
	Integer                                  = 2,
	Float                                    = 3,
	String                                   = 4,
	Object                                   = 5,
	NoneArray                                = 6,
	BooleanArray                             = 7,
	IntegerArray                             = 8,
	FloatArray                               = 9,
	StringArray                              = 10,
	ObjectArray                              = 11,
	Trigger                                  = 12,
	COUNT                                    = 13,
	EAudioParameterType_MAX                  = 14,
};

enum class EPcmBitDepthConversion : uint8
{
	SameAsSource                             = 0,
	Int16                                    = 1,
	Float32                                  = 2,
	EPcmBitDepthConversion_MAX               = 3,
};

struct FAudioParameter
{
public:
	class FName                                   ParamName;
	float                                         FloatParam;
	bool                                          BoolParam;
	uint8                                         Pad_9[0x3];
	int32                                         IntParam;
	class UObject*                                ObjectParam;
	class FString                                 StringParam;
	TArray<float>                                 ArrayFloatParam;
	TArray<bool>                                  ArrayBoolParam;
	TArray<int32>                                 ArrayIntParam;
	TArray<class UObject*>                        ArrayObjectParam;
	TArray<class FString>                         ArrayStringParam;
	EAudioParameterType                           ParamType;
	uint8                                         Pad_79[0x3];
	class FName                                   TypeName;
	uint8                                         Pad_80[0x10];
};
static_assert(alignof(FAudioParameter) == 0x000008, "Wrong alignment on FAudioParameter");
static_assert(sizeof(FAudioParameter) == 0x000090, "Wrong size on FAudioParameter");
static_assert(offsetof(FAudioParameter, ParamName) == 0x000000, "Member 'FAudioParameter::ParamName' has a wrong offset!");
static_assert(offsetof(FAudioParameter, FloatParam) == 0x000004, "Member 'FAudioParameter::FloatParam' has a wrong offset!");
static_assert(offsetof(FAudioParameter, BoolParam) == 0x000008, "Member 'FAudioParameter::BoolParam' has a wrong offset!");
static_assert(offsetof(FAudioParameter, IntParam) == 0x00000C, "Member 'FAudioParameter::IntParam' has a wrong offset!");
static_assert(offsetof(FAudioParameter, ObjectParam) == 0x000010, "Member 'FAudioParameter::ObjectParam' has a wrong offset!");
static_assert(offsetof(FAudioParameter, StringParam) == 0x000018, "Member 'FAudioParameter::StringParam' has a wrong offset!");
static_assert(offsetof(FAudioParameter, ArrayFloatParam) == 0x000028, "Member 'FAudioParameter::ArrayFloatParam' has a wrong offset!");
static_assert(offsetof(FAudioParameter, ArrayBoolParam) == 0x000038, "Member 'FAudioParameter::ArrayBoolParam' has a wrong offset!");
static_assert(offsetof(FAudioParameter, ArrayIntParam) == 0x000048, "Member 'FAudioParameter::ArrayIntParam' has a wrong offset!");
static_assert(offsetof(FAudioParameter, ArrayObjectParam) == 0x000058, "Member 'FAudioParameter::ArrayObjectParam' has a wrong offset!");
static_assert(offsetof(FAudioParameter, ArrayStringParam) == 0x000068, "Member 'FAudioParameter::ArrayStringParam' has a wrong offset!");
static_assert(offsetof(FAudioParameter, ParamType) == 0x000078, "Member 'FAudioParameter::ParamType' has a wrong offset!");
static_assert(offsetof(FAudioParameter, TypeName) == 0x00007C, "Member 'FAudioParameter::TypeName' has a wrong offset!");

}
