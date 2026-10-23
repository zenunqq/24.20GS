#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UPlayerSurveyRatingResponse_C final : public UFortPlayerSurveyRatingResponseBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UPlayerSurveyHorizontalIndicator_C*     PlayerSurveyHorizontalIndicator;

public:
	void ExecuteUbergraph_PlayerSurveyRatingResponse(int32 EntryPoint);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnResponsesSet_BP();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerSurveyRatingResponse_C">();
	}
	static class UPlayerSurveyRatingResponse_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerSurveyRatingResponse_C>();
	}
};
static_assert(alignof(UPlayerSurveyRatingResponse_C) == 0x000008, "Wrong alignment on UPlayerSurveyRatingResponse_C");
static_assert(sizeof(UPlayerSurveyRatingResponse_C) == 0x000400, "Wrong size on UPlayerSurveyRatingResponse_C");
static_assert(offsetof(UPlayerSurveyRatingResponse_C, UberGraphFrame) == 0x0003F0, "Member 'UPlayerSurveyRatingResponse_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerSurveyRatingResponse_C, PlayerSurveyHorizontalIndicator) == 0x0003F8, "Member 'UPlayerSurveyRatingResponse_C::PlayerSurveyHorizontalIndicator' has a wrong offset!");

}
