#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct SimpleMTXDisplay_C_OnUpdateAvailableMTX final
{
public:
	int32                                         AvailableBalance;
};
static_assert(alignof(SimpleMTXDisplay_C_OnUpdateAvailableMTX) == 0x000004, "Wrong alignment on SimpleMTXDisplay_C_OnUpdateAvailableMTX");
static_assert(sizeof(SimpleMTXDisplay_C_OnUpdateAvailableMTX) == 0x000004, "Wrong size on SimpleMTXDisplay_C_OnUpdateAvailableMTX");
static_assert(offsetof(SimpleMTXDisplay_C_OnUpdateAvailableMTX, AvailableBalance) == 0x000000, "Member 'SimpleMTXDisplay_C_OnUpdateAvailableMTX::AvailableBalance' has a wrong offset!");

struct SimpleMTXDisplay_C_ExecuteUbergraph_SimpleMTXDisplay final
{
public:
	int32                                         EntryPoint;
	int32                                         K2Node_Event_AvailableBalance;
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	class FText                                   CallFunc_Format_ReturnValue;
};
static_assert(alignof(SimpleMTXDisplay_C_ExecuteUbergraph_SimpleMTXDisplay) == 0x000008, "Wrong alignment on SimpleMTXDisplay_C_ExecuteUbergraph_SimpleMTXDisplay");
static_assert(sizeof(SimpleMTXDisplay_C_ExecuteUbergraph_SimpleMTXDisplay) == 0x000088, "Wrong size on SimpleMTXDisplay_C_ExecuteUbergraph_SimpleMTXDisplay");
static_assert(offsetof(SimpleMTXDisplay_C_ExecuteUbergraph_SimpleMTXDisplay, EntryPoint) == 0x000000, "Member 'SimpleMTXDisplay_C_ExecuteUbergraph_SimpleMTXDisplay::EntryPoint' has a wrong offset!");
static_assert(offsetof(SimpleMTXDisplay_C_ExecuteUbergraph_SimpleMTXDisplay, K2Node_Event_AvailableBalance) == 0x000004, "Member 'SimpleMTXDisplay_C_ExecuteUbergraph_SimpleMTXDisplay::K2Node_Event_AvailableBalance' has a wrong offset!");
static_assert(offsetof(SimpleMTXDisplay_C_ExecuteUbergraph_SimpleMTXDisplay, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000008, "Member 'SimpleMTXDisplay_C_ExecuteUbergraph_SimpleMTXDisplay::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(SimpleMTXDisplay_C_ExecuteUbergraph_SimpleMTXDisplay, K2Node_MakeStruct_FormatArgumentData) == 0x000010, "Member 'SimpleMTXDisplay_C_ExecuteUbergraph_SimpleMTXDisplay::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(SimpleMTXDisplay_C_ExecuteUbergraph_SimpleMTXDisplay, K2Node_MakeArray_Array) == 0x000060, "Member 'SimpleMTXDisplay_C_ExecuteUbergraph_SimpleMTXDisplay::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(SimpleMTXDisplay_C_ExecuteUbergraph_SimpleMTXDisplay, CallFunc_Format_ReturnValue) == 0x000070, "Member 'SimpleMTXDisplay_C_ExecuteUbergraph_SimpleMTXDisplay::CallFunc_Format_ReturnValue' has a wrong offset!");

}
