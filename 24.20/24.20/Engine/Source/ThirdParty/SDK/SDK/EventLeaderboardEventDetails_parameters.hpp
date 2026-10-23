#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsSeriesPointLeaderboardAvailable_ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_6[0x2];
	class FText                                   CallFunc_GetCurrentRegionName_ReturnValue;
	class FText                                   CallFunc_TextToUpper_ReturnValue;
	class FText                                   CallFunc_TextToUpper_ReturnValue_1;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	class FText                                   CallFunc_TextToUpper_ReturnValue_2;
	class FText                                   CallFunc_Format_ReturnValue;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;
	class FString                                 CallFunc_GetEventId_ReturnValue;
	class FText                                   CallFunc_Format_ReturnValue_1;
	bool                                          CallFunc_IsEmpty_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_1BA[0x6];
	class FText                                   K2Node_Select_Default;
};
static_assert(alignof(EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails) == 0x000008, "Wrong alignment on EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails");
static_assert(sizeof(EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails) == 0x0001D8, "Wrong size on EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails");
static_assert(offsetof(EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails, EntryPoint) == 0x000000, "Member 'EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails::EntryPoint' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails, CallFunc_IsSeriesPointLeaderboardAvailable_ReturnValue) == 0x000004, "Member 'EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails::CallFunc_IsSeriesPointLeaderboardAvailable_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails, Temp_bool_Variable) == 0x000005, "Member 'EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails, CallFunc_GetCurrentRegionName_ReturnValue) == 0x000008, "Member 'EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails::CallFunc_GetCurrentRegionName_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails, CallFunc_TextToUpper_ReturnValue) == 0x000020, "Member 'EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails, CallFunc_TextToUpper_ReturnValue_1) == 0x000038, "Member 'EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails::CallFunc_TextToUpper_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails, K2Node_MakeStruct_FormatArgumentData) == 0x000050, "Member 'EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000A0, "Member 'EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails, K2Node_MakeArray_Array) == 0x0000F0, "Member 'EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails, CallFunc_TextToUpper_ReturnValue_2) == 0x000100, "Member 'EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails::CallFunc_TextToUpper_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails, CallFunc_Format_ReturnValue) == 0x000118, "Member 'EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails, K2Node_MakeStruct_FormatArgumentData_2) == 0x000130, "Member 'EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails, K2Node_MakeArray_Array_1) == 0x000180, "Member 'EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails, CallFunc_GetEventId_ReturnValue) == 0x000190, "Member 'EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails::CallFunc_GetEventId_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails, CallFunc_Format_ReturnValue_1) == 0x0001A0, "Member 'EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails, CallFunc_IsEmpty_ReturnValue) == 0x0001B8, "Member 'EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails, CallFunc_BooleanAND_ReturnValue) == 0x0001B9, "Member 'EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails, K2Node_Select_Default) == 0x0001C0, "Member 'EventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails::K2Node_Select_Default' has a wrong offset!");

}
