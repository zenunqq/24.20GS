#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct PlayerSurveyRatingResponse_C_ExecuteUbergraph_PlayerSurveyRatingResponse final
{
public:
	int32                                         EntryPoint;
	struct FFocusEvent                            K2Node_Event_InFocusEvent;
	int32                                         CallFunc_GetNumEntries_ReturnValue;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	uint8                                         Pad_11[0x7];
	double                                        CallFunc_SelectFloat_ReturnValue;
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;
};
static_assert(alignof(PlayerSurveyRatingResponse_C_ExecuteUbergraph_PlayerSurveyRatingResponse) == 0x000008, "Wrong alignment on PlayerSurveyRatingResponse_C_ExecuteUbergraph_PlayerSurveyRatingResponse");
static_assert(sizeof(PlayerSurveyRatingResponse_C_ExecuteUbergraph_PlayerSurveyRatingResponse) == 0x000030, "Wrong size on PlayerSurveyRatingResponse_C_ExecuteUbergraph_PlayerSurveyRatingResponse");
static_assert(offsetof(PlayerSurveyRatingResponse_C_ExecuteUbergraph_PlayerSurveyRatingResponse, EntryPoint) == 0x000000, "Member 'PlayerSurveyRatingResponse_C_ExecuteUbergraph_PlayerSurveyRatingResponse::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerSurveyRatingResponse_C_ExecuteUbergraph_PlayerSurveyRatingResponse, K2Node_Event_InFocusEvent) == 0x000004, "Member 'PlayerSurveyRatingResponse_C_ExecuteUbergraph_PlayerSurveyRatingResponse::K2Node_Event_InFocusEvent' has a wrong offset!");
static_assert(offsetof(PlayerSurveyRatingResponse_C_ExecuteUbergraph_PlayerSurveyRatingResponse, CallFunc_GetNumEntries_ReturnValue) == 0x00000C, "Member 'PlayerSurveyRatingResponse_C_ExecuteUbergraph_PlayerSurveyRatingResponse::CallFunc_GetNumEntries_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSurveyRatingResponse_C_ExecuteUbergraph_PlayerSurveyRatingResponse, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000010, "Member 'PlayerSurveyRatingResponse_C_ExecuteUbergraph_PlayerSurveyRatingResponse::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSurveyRatingResponse_C_ExecuteUbergraph_PlayerSurveyRatingResponse, CallFunc_SelectFloat_ReturnValue) == 0x000018, "Member 'PlayerSurveyRatingResponse_C_ExecuteUbergraph_PlayerSurveyRatingResponse::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSurveyRatingResponse_C_ExecuteUbergraph_PlayerSurveyRatingResponse, CallFunc_MakeVector2D_ReturnValue) == 0x000020, "Member 'PlayerSurveyRatingResponse_C_ExecuteUbergraph_PlayerSurveyRatingResponse::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

struct PlayerSurveyRatingResponse_C_OnAddedToFocusPath final
{
public:
	struct FFocusEvent                            InFocusEvent;
};
static_assert(alignof(PlayerSurveyRatingResponse_C_OnAddedToFocusPath) == 0x000004, "Wrong alignment on PlayerSurveyRatingResponse_C_OnAddedToFocusPath");
static_assert(sizeof(PlayerSurveyRatingResponse_C_OnAddedToFocusPath) == 0x000008, "Wrong size on PlayerSurveyRatingResponse_C_OnAddedToFocusPath");
static_assert(offsetof(PlayerSurveyRatingResponse_C_OnAddedToFocusPath, InFocusEvent) == 0x000000, "Member 'PlayerSurveyRatingResponse_C_OnAddedToFocusPath::InFocusEvent' has a wrong offset!");

}
