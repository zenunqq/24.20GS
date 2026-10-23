#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct ContentOnDemand_C_OnUpdatedState final
{
public:
	int32                                         NumActiveDownloads;
	int32                                         NumErrors;
};
static_assert(alignof(ContentOnDemand_C_OnUpdatedState) == 0x000004, "Wrong alignment on ContentOnDemand_C_OnUpdatedState");
static_assert(sizeof(ContentOnDemand_C_OnUpdatedState) == 0x000008, "Wrong size on ContentOnDemand_C_OnUpdatedState");
static_assert(offsetof(ContentOnDemand_C_OnUpdatedState, NumActiveDownloads) == 0x000000, "Member 'ContentOnDemand_C_OnUpdatedState::NumActiveDownloads' has a wrong offset!");
static_assert(offsetof(ContentOnDemand_C_OnUpdatedState, NumErrors) == 0x000004, "Member 'ContentOnDemand_C_OnUpdatedState::NumErrors' has a wrong offset!");

struct ContentOnDemand_C_ExecuteUbergraph_ContentOnDemand final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_6[0x2];
	int32                                         K2Node_Event_NumActiveDownloads;
	int32                                         K2Node_Event_NumErrors;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_23[0x5];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
};
static_assert(alignof(ContentOnDemand_C_ExecuteUbergraph_ContentOnDemand) == 0x000008, "Wrong alignment on ContentOnDemand_C_ExecuteUbergraph_ContentOnDemand");
static_assert(sizeof(ContentOnDemand_C_ExecuteUbergraph_ContentOnDemand) == 0x000030, "Wrong size on ContentOnDemand_C_ExecuteUbergraph_ContentOnDemand");
static_assert(offsetof(ContentOnDemand_C_ExecuteUbergraph_ContentOnDemand, EntryPoint) == 0x000000, "Member 'ContentOnDemand_C_ExecuteUbergraph_ContentOnDemand::EntryPoint' has a wrong offset!");
static_assert(offsetof(ContentOnDemand_C_ExecuteUbergraph_ContentOnDemand, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000004, "Member 'ContentOnDemand_C_ExecuteUbergraph_ContentOnDemand::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContentOnDemand_C_ExecuteUbergraph_ContentOnDemand, CallFunc_Greater_IntInt_ReturnValue) == 0x000005, "Member 'ContentOnDemand_C_ExecuteUbergraph_ContentOnDemand::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContentOnDemand_C_ExecuteUbergraph_ContentOnDemand, K2Node_Event_NumActiveDownloads) == 0x000008, "Member 'ContentOnDemand_C_ExecuteUbergraph_ContentOnDemand::K2Node_Event_NumActiveDownloads' has a wrong offset!");
static_assert(offsetof(ContentOnDemand_C_ExecuteUbergraph_ContentOnDemand, K2Node_Event_NumErrors) == 0x00000C, "Member 'ContentOnDemand_C_ExecuteUbergraph_ContentOnDemand::K2Node_Event_NumErrors' has a wrong offset!");
static_assert(offsetof(ContentOnDemand_C_ExecuteUbergraph_ContentOnDemand, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'ContentOnDemand_C_ExecuteUbergraph_ContentOnDemand::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContentOnDemand_C_ExecuteUbergraph_ContentOnDemand, CallFunc_PlayAnimation_ReturnValue_1) == 0x000018, "Member 'ContentOnDemand_C_ExecuteUbergraph_ContentOnDemand::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ContentOnDemand_C_ExecuteUbergraph_ContentOnDemand, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000020, "Member 'ContentOnDemand_C_ExecuteUbergraph_ContentOnDemand::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ContentOnDemand_C_ExecuteUbergraph_ContentOnDemand, CallFunc_Greater_IntInt_ReturnValue_2) == 0x000021, "Member 'ContentOnDemand_C_ExecuteUbergraph_ContentOnDemand::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ContentOnDemand_C_ExecuteUbergraph_ContentOnDemand, CallFunc_BooleanAND_ReturnValue) == 0x000022, "Member 'ContentOnDemand_C_ExecuteUbergraph_ContentOnDemand::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContentOnDemand_C_ExecuteUbergraph_ContentOnDemand, CallFunc_PlayAnimation_ReturnValue_2) == 0x000028, "Member 'ContentOnDemand_C_ExecuteUbergraph_ContentOnDemand::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");

}
