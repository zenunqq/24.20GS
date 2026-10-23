#pragma once

#include "Basic.hpp"

#include "AudioExtensions_structs.hpp"

namespace SDK::Params
{

struct AudioParameterControllerInterface_SetBoolArrayParameter final
{
public:
	class FName                                   InName;
	uint8                                         Pad_4[0x4];
	TArray<bool>                                  InValue;
};
static_assert(alignof(AudioParameterControllerInterface_SetBoolArrayParameter) == 0x000008, "Wrong alignment on AudioParameterControllerInterface_SetBoolArrayParameter");
static_assert(sizeof(AudioParameterControllerInterface_SetBoolArrayParameter) == 0x000018, "Wrong size on AudioParameterControllerInterface_SetBoolArrayParameter");
static_assert(offsetof(AudioParameterControllerInterface_SetBoolArrayParameter, InName) == 0x000000, "Member 'AudioParameterControllerInterface_SetBoolArrayParameter::InName' has a wrong offset!");
static_assert(offsetof(AudioParameterControllerInterface_SetBoolArrayParameter, InValue) == 0x000008, "Member 'AudioParameterControllerInterface_SetBoolArrayParameter::InValue' has a wrong offset!");

struct AudioParameterControllerInterface_SetBoolParameter final
{
public:
	class FName                                   InName;
	bool                                          InBool;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(AudioParameterControllerInterface_SetBoolParameter) == 0x000004, "Wrong alignment on AudioParameterControllerInterface_SetBoolParameter");
static_assert(sizeof(AudioParameterControllerInterface_SetBoolParameter) == 0x000008, "Wrong size on AudioParameterControllerInterface_SetBoolParameter");
static_assert(offsetof(AudioParameterControllerInterface_SetBoolParameter, InName) == 0x000000, "Member 'AudioParameterControllerInterface_SetBoolParameter::InName' has a wrong offset!");
static_assert(offsetof(AudioParameterControllerInterface_SetBoolParameter, InBool) == 0x000004, "Member 'AudioParameterControllerInterface_SetBoolParameter::InBool' has a wrong offset!");

struct AudioParameterControllerInterface_SetFloatArrayParameter final
{
public:
	class FName                                   InName;
	uint8                                         Pad_4[0x4];
	TArray<float>                                 InValue;
};
static_assert(alignof(AudioParameterControllerInterface_SetFloatArrayParameter) == 0x000008, "Wrong alignment on AudioParameterControllerInterface_SetFloatArrayParameter");
static_assert(sizeof(AudioParameterControllerInterface_SetFloatArrayParameter) == 0x000018, "Wrong size on AudioParameterControllerInterface_SetFloatArrayParameter");
static_assert(offsetof(AudioParameterControllerInterface_SetFloatArrayParameter, InName) == 0x000000, "Member 'AudioParameterControllerInterface_SetFloatArrayParameter::InName' has a wrong offset!");
static_assert(offsetof(AudioParameterControllerInterface_SetFloatArrayParameter, InValue) == 0x000008, "Member 'AudioParameterControllerInterface_SetFloatArrayParameter::InValue' has a wrong offset!");

struct AudioParameterControllerInterface_SetFloatParameter final
{
public:
	class FName                                   InName;
	float                                         InFloat;
};
static_assert(alignof(AudioParameterControllerInterface_SetFloatParameter) == 0x000004, "Wrong alignment on AudioParameterControllerInterface_SetFloatParameter");
static_assert(sizeof(AudioParameterControllerInterface_SetFloatParameter) == 0x000008, "Wrong size on AudioParameterControllerInterface_SetFloatParameter");
static_assert(offsetof(AudioParameterControllerInterface_SetFloatParameter, InName) == 0x000000, "Member 'AudioParameterControllerInterface_SetFloatParameter::InName' has a wrong offset!");
static_assert(offsetof(AudioParameterControllerInterface_SetFloatParameter, InFloat) == 0x000004, "Member 'AudioParameterControllerInterface_SetFloatParameter::InFloat' has a wrong offset!");

struct AudioParameterControllerInterface_SetIntArrayParameter final
{
public:
	class FName                                   InName;
	uint8                                         Pad_4[0x4];
	TArray<int32>                                 InValue;
};
static_assert(alignof(AudioParameterControllerInterface_SetIntArrayParameter) == 0x000008, "Wrong alignment on AudioParameterControllerInterface_SetIntArrayParameter");
static_assert(sizeof(AudioParameterControllerInterface_SetIntArrayParameter) == 0x000018, "Wrong size on AudioParameterControllerInterface_SetIntArrayParameter");
static_assert(offsetof(AudioParameterControllerInterface_SetIntArrayParameter, InName) == 0x000000, "Member 'AudioParameterControllerInterface_SetIntArrayParameter::InName' has a wrong offset!");
static_assert(offsetof(AudioParameterControllerInterface_SetIntArrayParameter, InValue) == 0x000008, "Member 'AudioParameterControllerInterface_SetIntArrayParameter::InValue' has a wrong offset!");

struct AudioParameterControllerInterface_SetIntParameter final
{
public:
	class FName                                   InName;
	int32                                         inInt;
};
static_assert(alignof(AudioParameterControllerInterface_SetIntParameter) == 0x000004, "Wrong alignment on AudioParameterControllerInterface_SetIntParameter");
static_assert(sizeof(AudioParameterControllerInterface_SetIntParameter) == 0x000008, "Wrong size on AudioParameterControllerInterface_SetIntParameter");
static_assert(offsetof(AudioParameterControllerInterface_SetIntParameter, InName) == 0x000000, "Member 'AudioParameterControllerInterface_SetIntParameter::InName' has a wrong offset!");
static_assert(offsetof(AudioParameterControllerInterface_SetIntParameter, inInt) == 0x000004, "Member 'AudioParameterControllerInterface_SetIntParameter::inInt' has a wrong offset!");

struct AudioParameterControllerInterface_SetObjectArrayParameter final
{
public:
	class FName                                   InName;
	uint8                                         Pad_4[0x4];
	TArray<class UObject*>                        InValue;
};
static_assert(alignof(AudioParameterControllerInterface_SetObjectArrayParameter) == 0x000008, "Wrong alignment on AudioParameterControllerInterface_SetObjectArrayParameter");
static_assert(sizeof(AudioParameterControllerInterface_SetObjectArrayParameter) == 0x000018, "Wrong size on AudioParameterControllerInterface_SetObjectArrayParameter");
static_assert(offsetof(AudioParameterControllerInterface_SetObjectArrayParameter, InName) == 0x000000, "Member 'AudioParameterControllerInterface_SetObjectArrayParameter::InName' has a wrong offset!");
static_assert(offsetof(AudioParameterControllerInterface_SetObjectArrayParameter, InValue) == 0x000008, "Member 'AudioParameterControllerInterface_SetObjectArrayParameter::InValue' has a wrong offset!");

struct AudioParameterControllerInterface_SetObjectParameter final
{
public:
	class FName                                   InName;
	uint8                                         Pad_4[0x4];
	class UObject*                                InValue;
};
static_assert(alignof(AudioParameterControllerInterface_SetObjectParameter) == 0x000008, "Wrong alignment on AudioParameterControllerInterface_SetObjectParameter");
static_assert(sizeof(AudioParameterControllerInterface_SetObjectParameter) == 0x000010, "Wrong size on AudioParameterControllerInterface_SetObjectParameter");
static_assert(offsetof(AudioParameterControllerInterface_SetObjectParameter, InName) == 0x000000, "Member 'AudioParameterControllerInterface_SetObjectParameter::InName' has a wrong offset!");
static_assert(offsetof(AudioParameterControllerInterface_SetObjectParameter, InValue) == 0x000008, "Member 'AudioParameterControllerInterface_SetObjectParameter::InValue' has a wrong offset!");

struct AudioParameterControllerInterface_SetParameters_Blueprint final
{
public:
	TArray<struct FAudioParameter>                InParameters;
};
static_assert(alignof(AudioParameterControllerInterface_SetParameters_Blueprint) == 0x000008, "Wrong alignment on AudioParameterControllerInterface_SetParameters_Blueprint");
static_assert(sizeof(AudioParameterControllerInterface_SetParameters_Blueprint) == 0x000010, "Wrong size on AudioParameterControllerInterface_SetParameters_Blueprint");
static_assert(offsetof(AudioParameterControllerInterface_SetParameters_Blueprint, InParameters) == 0x000000, "Member 'AudioParameterControllerInterface_SetParameters_Blueprint::InParameters' has a wrong offset!");

struct AudioParameterControllerInterface_SetStringArrayParameter final
{
public:
	class FName                                   InName;
	uint8                                         Pad_4[0x4];
	TArray<class FString>                         InValue;
};
static_assert(alignof(AudioParameterControllerInterface_SetStringArrayParameter) == 0x000008, "Wrong alignment on AudioParameterControllerInterface_SetStringArrayParameter");
static_assert(sizeof(AudioParameterControllerInterface_SetStringArrayParameter) == 0x000018, "Wrong size on AudioParameterControllerInterface_SetStringArrayParameter");
static_assert(offsetof(AudioParameterControllerInterface_SetStringArrayParameter, InName) == 0x000000, "Member 'AudioParameterControllerInterface_SetStringArrayParameter::InName' has a wrong offset!");
static_assert(offsetof(AudioParameterControllerInterface_SetStringArrayParameter, InValue) == 0x000008, "Member 'AudioParameterControllerInterface_SetStringArrayParameter::InValue' has a wrong offset!");

struct AudioParameterControllerInterface_SetStringParameter final
{
public:
	class FName                                   InName;
	uint8                                         Pad_4[0x4];
	class FString                                 InValue;
};
static_assert(alignof(AudioParameterControllerInterface_SetStringParameter) == 0x000008, "Wrong alignment on AudioParameterControllerInterface_SetStringParameter");
static_assert(sizeof(AudioParameterControllerInterface_SetStringParameter) == 0x000018, "Wrong size on AudioParameterControllerInterface_SetStringParameter");
static_assert(offsetof(AudioParameterControllerInterface_SetStringParameter, InName) == 0x000000, "Member 'AudioParameterControllerInterface_SetStringParameter::InName' has a wrong offset!");
static_assert(offsetof(AudioParameterControllerInterface_SetStringParameter, InValue) == 0x000008, "Member 'AudioParameterControllerInterface_SetStringParameter::InValue' has a wrong offset!");

struct AudioParameterControllerInterface_SetTriggerParameter final
{
public:
	class FName                                   InName;
};
static_assert(alignof(AudioParameterControllerInterface_SetTriggerParameter) == 0x000004, "Wrong alignment on AudioParameterControllerInterface_SetTriggerParameter");
static_assert(sizeof(AudioParameterControllerInterface_SetTriggerParameter) == 0x000004, "Wrong size on AudioParameterControllerInterface_SetTriggerParameter");
static_assert(offsetof(AudioParameterControllerInterface_SetTriggerParameter, InName) == 0x000000, "Member 'AudioParameterControllerInterface_SetTriggerParameter::InName' has a wrong offset!");

}
