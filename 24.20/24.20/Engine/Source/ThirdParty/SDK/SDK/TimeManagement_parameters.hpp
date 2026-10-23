#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct TimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber final
{
public:
	struct FFrameNumber                           A;
	struct FFrameNumber                           B;
	struct FFrameNumber                           ReturnValue;
};
static_assert(alignof(TimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber) == 0x000004, "Wrong alignment on TimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber");
static_assert(sizeof(TimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber) == 0x00000C, "Wrong size on TimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber");
static_assert(offsetof(TimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber, A) == 0x000000, "Member 'TimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber::A' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber, B) == 0x000004, "Member 'TimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber::B' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber, ReturnValue) == 0x000008, "Member 'TimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber::ReturnValue' has a wrong offset!");

struct TimeManagementBlueprintLibrary_Add_FrameNumberInteger final
{
public:
	struct FFrameNumber                           A;
	int32                                         B;
	struct FFrameNumber                           ReturnValue;
};
static_assert(alignof(TimeManagementBlueprintLibrary_Add_FrameNumberInteger) == 0x000004, "Wrong alignment on TimeManagementBlueprintLibrary_Add_FrameNumberInteger");
static_assert(sizeof(TimeManagementBlueprintLibrary_Add_FrameNumberInteger) == 0x00000C, "Wrong size on TimeManagementBlueprintLibrary_Add_FrameNumberInteger");
static_assert(offsetof(TimeManagementBlueprintLibrary_Add_FrameNumberInteger, A) == 0x000000, "Member 'TimeManagementBlueprintLibrary_Add_FrameNumberInteger::A' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_Add_FrameNumberInteger, B) == 0x000004, "Member 'TimeManagementBlueprintLibrary_Add_FrameNumberInteger::B' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_Add_FrameNumberInteger, ReturnValue) == 0x000008, "Member 'TimeManagementBlueprintLibrary_Add_FrameNumberInteger::ReturnValue' has a wrong offset!");

struct TimeManagementBlueprintLibrary_Conv_FrameNumberToInteger final
{
public:
	struct FFrameNumber                           InFrameNumber;
	int32                                         ReturnValue;
};
static_assert(alignof(TimeManagementBlueprintLibrary_Conv_FrameNumberToInteger) == 0x000004, "Wrong alignment on TimeManagementBlueprintLibrary_Conv_FrameNumberToInteger");
static_assert(sizeof(TimeManagementBlueprintLibrary_Conv_FrameNumberToInteger) == 0x000008, "Wrong size on TimeManagementBlueprintLibrary_Conv_FrameNumberToInteger");
static_assert(offsetof(TimeManagementBlueprintLibrary_Conv_FrameNumberToInteger, InFrameNumber) == 0x000000, "Member 'TimeManagementBlueprintLibrary_Conv_FrameNumberToInteger::InFrameNumber' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_Conv_FrameNumberToInteger, ReturnValue) == 0x000004, "Member 'TimeManagementBlueprintLibrary_Conv_FrameNumberToInteger::ReturnValue' has a wrong offset!");

struct TimeManagementBlueprintLibrary_Conv_FrameRateToSeconds final
{
public:
	struct FFrameRate                             InFrameRate;
	float                                         ReturnValue;
};
static_assert(alignof(TimeManagementBlueprintLibrary_Conv_FrameRateToSeconds) == 0x000004, "Wrong alignment on TimeManagementBlueprintLibrary_Conv_FrameRateToSeconds");
static_assert(sizeof(TimeManagementBlueprintLibrary_Conv_FrameRateToSeconds) == 0x00000C, "Wrong size on TimeManagementBlueprintLibrary_Conv_FrameRateToSeconds");
static_assert(offsetof(TimeManagementBlueprintLibrary_Conv_FrameRateToSeconds, InFrameRate) == 0x000000, "Member 'TimeManagementBlueprintLibrary_Conv_FrameRateToSeconds::InFrameRate' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_Conv_FrameRateToSeconds, ReturnValue) == 0x000008, "Member 'TimeManagementBlueprintLibrary_Conv_FrameRateToSeconds::ReturnValue' has a wrong offset!");

struct TimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds final
{
public:
	struct FQualifiedFrameTime                    InFrameTime;
	float                                         ReturnValue;
};
static_assert(alignof(TimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds) == 0x000004, "Wrong alignment on TimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds");
static_assert(sizeof(TimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds) == 0x000014, "Wrong size on TimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds");
static_assert(offsetof(TimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds, InFrameTime) == 0x000000, "Member 'TimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds::InFrameTime' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds, ReturnValue) == 0x000010, "Member 'TimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds::ReturnValue' has a wrong offset!");

struct TimeManagementBlueprintLibrary_Conv_TimecodeToString final
{
public:
	struct FTimecode                              InTimecode;
	bool                                          bForceSignDisplay;
	uint8                                         Pad_15[0x3];
	class FString                                 ReturnValue;
};
static_assert(alignof(TimeManagementBlueprintLibrary_Conv_TimecodeToString) == 0x000008, "Wrong alignment on TimeManagementBlueprintLibrary_Conv_TimecodeToString");
static_assert(sizeof(TimeManagementBlueprintLibrary_Conv_TimecodeToString) == 0x000028, "Wrong size on TimeManagementBlueprintLibrary_Conv_TimecodeToString");
static_assert(offsetof(TimeManagementBlueprintLibrary_Conv_TimecodeToString, InTimecode) == 0x000000, "Member 'TimeManagementBlueprintLibrary_Conv_TimecodeToString::InTimecode' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_Conv_TimecodeToString, bForceSignDisplay) == 0x000014, "Member 'TimeManagementBlueprintLibrary_Conv_TimecodeToString::bForceSignDisplay' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_Conv_TimecodeToString, ReturnValue) == 0x000018, "Member 'TimeManagementBlueprintLibrary_Conv_TimecodeToString::ReturnValue' has a wrong offset!");

struct TimeManagementBlueprintLibrary_Divide_FrameNumberInteger final
{
public:
	struct FFrameNumber                           A;
	int32                                         B;
	struct FFrameNumber                           ReturnValue;
};
static_assert(alignof(TimeManagementBlueprintLibrary_Divide_FrameNumberInteger) == 0x000004, "Wrong alignment on TimeManagementBlueprintLibrary_Divide_FrameNumberInteger");
static_assert(sizeof(TimeManagementBlueprintLibrary_Divide_FrameNumberInteger) == 0x00000C, "Wrong size on TimeManagementBlueprintLibrary_Divide_FrameNumberInteger");
static_assert(offsetof(TimeManagementBlueprintLibrary_Divide_FrameNumberInteger, A) == 0x000000, "Member 'TimeManagementBlueprintLibrary_Divide_FrameNumberInteger::A' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_Divide_FrameNumberInteger, B) == 0x000004, "Member 'TimeManagementBlueprintLibrary_Divide_FrameNumberInteger::B' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_Divide_FrameNumberInteger, ReturnValue) == 0x000008, "Member 'TimeManagementBlueprintLibrary_Divide_FrameNumberInteger::ReturnValue' has a wrong offset!");

struct TimeManagementBlueprintLibrary_GetTimecode final
{
public:
	struct FTimecode                              ReturnValue;
};
static_assert(alignof(TimeManagementBlueprintLibrary_GetTimecode) == 0x000004, "Wrong alignment on TimeManagementBlueprintLibrary_GetTimecode");
static_assert(sizeof(TimeManagementBlueprintLibrary_GetTimecode) == 0x000014, "Wrong size on TimeManagementBlueprintLibrary_GetTimecode");
static_assert(offsetof(TimeManagementBlueprintLibrary_GetTimecode, ReturnValue) == 0x000000, "Member 'TimeManagementBlueprintLibrary_GetTimecode::ReturnValue' has a wrong offset!");

struct TimeManagementBlueprintLibrary_GetTimecodeFrameRate final
{
public:
	struct FFrameRate                             ReturnValue;
};
static_assert(alignof(TimeManagementBlueprintLibrary_GetTimecodeFrameRate) == 0x000004, "Wrong alignment on TimeManagementBlueprintLibrary_GetTimecodeFrameRate");
static_assert(sizeof(TimeManagementBlueprintLibrary_GetTimecodeFrameRate) == 0x000008, "Wrong size on TimeManagementBlueprintLibrary_GetTimecodeFrameRate");
static_assert(offsetof(TimeManagementBlueprintLibrary_GetTimecodeFrameRate, ReturnValue) == 0x000000, "Member 'TimeManagementBlueprintLibrary_GetTimecodeFrameRate::ReturnValue' has a wrong offset!");

struct TimeManagementBlueprintLibrary_IsValid_Framerate final
{
public:
	struct FFrameRate                             InFrameRate;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x3];
};
static_assert(alignof(TimeManagementBlueprintLibrary_IsValid_Framerate) == 0x000004, "Wrong alignment on TimeManagementBlueprintLibrary_IsValid_Framerate");
static_assert(sizeof(TimeManagementBlueprintLibrary_IsValid_Framerate) == 0x00000C, "Wrong size on TimeManagementBlueprintLibrary_IsValid_Framerate");
static_assert(offsetof(TimeManagementBlueprintLibrary_IsValid_Framerate, InFrameRate) == 0x000000, "Member 'TimeManagementBlueprintLibrary_IsValid_Framerate::InFrameRate' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_IsValid_Framerate, ReturnValue) == 0x000008, "Member 'TimeManagementBlueprintLibrary_IsValid_Framerate::ReturnValue' has a wrong offset!");

struct TimeManagementBlueprintLibrary_IsValid_MultipleOf final
{
public:
	struct FFrameRate                             InFrameRate;
	struct FFrameRate                             OtherFramerate;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x3];
};
static_assert(alignof(TimeManagementBlueprintLibrary_IsValid_MultipleOf) == 0x000004, "Wrong alignment on TimeManagementBlueprintLibrary_IsValid_MultipleOf");
static_assert(sizeof(TimeManagementBlueprintLibrary_IsValid_MultipleOf) == 0x000014, "Wrong size on TimeManagementBlueprintLibrary_IsValid_MultipleOf");
static_assert(offsetof(TimeManagementBlueprintLibrary_IsValid_MultipleOf, InFrameRate) == 0x000000, "Member 'TimeManagementBlueprintLibrary_IsValid_MultipleOf::InFrameRate' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_IsValid_MultipleOf, OtherFramerate) == 0x000008, "Member 'TimeManagementBlueprintLibrary_IsValid_MultipleOf::OtherFramerate' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_IsValid_MultipleOf, ReturnValue) == 0x000010, "Member 'TimeManagementBlueprintLibrary_IsValid_MultipleOf::ReturnValue' has a wrong offset!");

struct TimeManagementBlueprintLibrary_Multiply_FrameNumberInteger final
{
public:
	struct FFrameNumber                           A;
	int32                                         B;
	struct FFrameNumber                           ReturnValue;
};
static_assert(alignof(TimeManagementBlueprintLibrary_Multiply_FrameNumberInteger) == 0x000004, "Wrong alignment on TimeManagementBlueprintLibrary_Multiply_FrameNumberInteger");
static_assert(sizeof(TimeManagementBlueprintLibrary_Multiply_FrameNumberInteger) == 0x00000C, "Wrong size on TimeManagementBlueprintLibrary_Multiply_FrameNumberInteger");
static_assert(offsetof(TimeManagementBlueprintLibrary_Multiply_FrameNumberInteger, A) == 0x000000, "Member 'TimeManagementBlueprintLibrary_Multiply_FrameNumberInteger::A' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_Multiply_FrameNumberInteger, B) == 0x000004, "Member 'TimeManagementBlueprintLibrary_Multiply_FrameNumberInteger::B' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_Multiply_FrameNumberInteger, ReturnValue) == 0x000008, "Member 'TimeManagementBlueprintLibrary_Multiply_FrameNumberInteger::ReturnValue' has a wrong offset!");

struct TimeManagementBlueprintLibrary_Multiply_SecondsFrameRate final
{
public:
	float                                         TimeInSeconds;
	struct FFrameRate                             FrameRate;
	struct FFrameTime                             ReturnValue;
};
static_assert(alignof(TimeManagementBlueprintLibrary_Multiply_SecondsFrameRate) == 0x000004, "Wrong alignment on TimeManagementBlueprintLibrary_Multiply_SecondsFrameRate");
static_assert(sizeof(TimeManagementBlueprintLibrary_Multiply_SecondsFrameRate) == 0x000014, "Wrong size on TimeManagementBlueprintLibrary_Multiply_SecondsFrameRate");
static_assert(offsetof(TimeManagementBlueprintLibrary_Multiply_SecondsFrameRate, TimeInSeconds) == 0x000000, "Member 'TimeManagementBlueprintLibrary_Multiply_SecondsFrameRate::TimeInSeconds' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_Multiply_SecondsFrameRate, FrameRate) == 0x000004, "Member 'TimeManagementBlueprintLibrary_Multiply_SecondsFrameRate::FrameRate' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_Multiply_SecondsFrameRate, ReturnValue) == 0x00000C, "Member 'TimeManagementBlueprintLibrary_Multiply_SecondsFrameRate::ReturnValue' has a wrong offset!");

struct TimeManagementBlueprintLibrary_SnapFrameTimeToRate final
{
public:
	struct FFrameTime                             SourceTime;
	struct FFrameRate                             SourceRate;
	struct FFrameRate                             SnapToRate;
	struct FFrameTime                             ReturnValue;
};
static_assert(alignof(TimeManagementBlueprintLibrary_SnapFrameTimeToRate) == 0x000004, "Wrong alignment on TimeManagementBlueprintLibrary_SnapFrameTimeToRate");
static_assert(sizeof(TimeManagementBlueprintLibrary_SnapFrameTimeToRate) == 0x000020, "Wrong size on TimeManagementBlueprintLibrary_SnapFrameTimeToRate");
static_assert(offsetof(TimeManagementBlueprintLibrary_SnapFrameTimeToRate, SourceTime) == 0x000000, "Member 'TimeManagementBlueprintLibrary_SnapFrameTimeToRate::SourceTime' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_SnapFrameTimeToRate, SourceRate) == 0x000008, "Member 'TimeManagementBlueprintLibrary_SnapFrameTimeToRate::SourceRate' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_SnapFrameTimeToRate, SnapToRate) == 0x000010, "Member 'TimeManagementBlueprintLibrary_SnapFrameTimeToRate::SnapToRate' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_SnapFrameTimeToRate, ReturnValue) == 0x000018, "Member 'TimeManagementBlueprintLibrary_SnapFrameTimeToRate::ReturnValue' has a wrong offset!");

struct TimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber final
{
public:
	struct FFrameNumber                           A;
	struct FFrameNumber                           B;
	struct FFrameNumber                           ReturnValue;
};
static_assert(alignof(TimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber) == 0x000004, "Wrong alignment on TimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber");
static_assert(sizeof(TimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber) == 0x00000C, "Wrong size on TimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber");
static_assert(offsetof(TimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber, A) == 0x000000, "Member 'TimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber::A' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber, B) == 0x000004, "Member 'TimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber::B' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber, ReturnValue) == 0x000008, "Member 'TimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber::ReturnValue' has a wrong offset!");

struct TimeManagementBlueprintLibrary_Subtract_FrameNumberInteger final
{
public:
	struct FFrameNumber                           A;
	int32                                         B;
	struct FFrameNumber                           ReturnValue;
};
static_assert(alignof(TimeManagementBlueprintLibrary_Subtract_FrameNumberInteger) == 0x000004, "Wrong alignment on TimeManagementBlueprintLibrary_Subtract_FrameNumberInteger");
static_assert(sizeof(TimeManagementBlueprintLibrary_Subtract_FrameNumberInteger) == 0x00000C, "Wrong size on TimeManagementBlueprintLibrary_Subtract_FrameNumberInteger");
static_assert(offsetof(TimeManagementBlueprintLibrary_Subtract_FrameNumberInteger, A) == 0x000000, "Member 'TimeManagementBlueprintLibrary_Subtract_FrameNumberInteger::A' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_Subtract_FrameNumberInteger, B) == 0x000004, "Member 'TimeManagementBlueprintLibrary_Subtract_FrameNumberInteger::B' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_Subtract_FrameNumberInteger, ReturnValue) == 0x000008, "Member 'TimeManagementBlueprintLibrary_Subtract_FrameNumberInteger::ReturnValue' has a wrong offset!");

struct TimeManagementBlueprintLibrary_TransformTime final
{
public:
	struct FFrameTime                             SourceTime;
	struct FFrameRate                             SourceRate;
	struct FFrameRate                             DestinationRate;
	struct FFrameTime                             ReturnValue;
};
static_assert(alignof(TimeManagementBlueprintLibrary_TransformTime) == 0x000004, "Wrong alignment on TimeManagementBlueprintLibrary_TransformTime");
static_assert(sizeof(TimeManagementBlueprintLibrary_TransformTime) == 0x000020, "Wrong size on TimeManagementBlueprintLibrary_TransformTime");
static_assert(offsetof(TimeManagementBlueprintLibrary_TransformTime, SourceTime) == 0x000000, "Member 'TimeManagementBlueprintLibrary_TransformTime::SourceTime' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_TransformTime, SourceRate) == 0x000008, "Member 'TimeManagementBlueprintLibrary_TransformTime::SourceRate' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_TransformTime, DestinationRate) == 0x000010, "Member 'TimeManagementBlueprintLibrary_TransformTime::DestinationRate' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_TransformTime, ReturnValue) == 0x000018, "Member 'TimeManagementBlueprintLibrary_TransformTime::ReturnValue' has a wrong offset!");

}
