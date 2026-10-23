#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UPlayerSurveyMultipleChoiceResponse_C final : public UFortPlayerSurveyMultipleChoiceResponseBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UOverlay*                               Overlay_OrthogonalIndicator;
	class UOverlay*                               Overlay_VerticalIndicator;
	class UPlayerSurveyOrthogonalIndicator_C*     PlayerSurveyOrthogonalIndicator;
	class UPlayerSurveyVerticalIndicator_C*       PlayerSurveyVerticalIndicator;
	class USizeBox*                               SizeBox_Responses;
	double                                        BaseColumnWidth;
	double                                        AdditionalColumnWidth;

public:
	void ExecuteUbergraph_PlayerSurveyMultipleChoiceResponse(int32 EntryPoint);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void SetNumberOfResponses(int32 NumberOfResponses);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerSurveyMultipleChoiceResponse_C">();
	}
	static class UPlayerSurveyMultipleChoiceResponse_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerSurveyMultipleChoiceResponse_C>();
	}
};
static_assert(alignof(UPlayerSurveyMultipleChoiceResponse_C) == 0x000008, "Wrong alignment on UPlayerSurveyMultipleChoiceResponse_C");
static_assert(sizeof(UPlayerSurveyMultipleChoiceResponse_C) == 0x000438, "Wrong size on UPlayerSurveyMultipleChoiceResponse_C");
static_assert(offsetof(UPlayerSurveyMultipleChoiceResponse_C, UberGraphFrame) == 0x0003F8, "Member 'UPlayerSurveyMultipleChoiceResponse_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerSurveyMultipleChoiceResponse_C, Overlay_OrthogonalIndicator) == 0x000400, "Member 'UPlayerSurveyMultipleChoiceResponse_C::Overlay_OrthogonalIndicator' has a wrong offset!");
static_assert(offsetof(UPlayerSurveyMultipleChoiceResponse_C, Overlay_VerticalIndicator) == 0x000408, "Member 'UPlayerSurveyMultipleChoiceResponse_C::Overlay_VerticalIndicator' has a wrong offset!");
static_assert(offsetof(UPlayerSurveyMultipleChoiceResponse_C, PlayerSurveyOrthogonalIndicator) == 0x000410, "Member 'UPlayerSurveyMultipleChoiceResponse_C::PlayerSurveyOrthogonalIndicator' has a wrong offset!");
static_assert(offsetof(UPlayerSurveyMultipleChoiceResponse_C, PlayerSurveyVerticalIndicator) == 0x000418, "Member 'UPlayerSurveyMultipleChoiceResponse_C::PlayerSurveyVerticalIndicator' has a wrong offset!");
static_assert(offsetof(UPlayerSurveyMultipleChoiceResponse_C, SizeBox_Responses) == 0x000420, "Member 'UPlayerSurveyMultipleChoiceResponse_C::SizeBox_Responses' has a wrong offset!");
static_assert(offsetof(UPlayerSurveyMultipleChoiceResponse_C, BaseColumnWidth) == 0x000428, "Member 'UPlayerSurveyMultipleChoiceResponse_C::BaseColumnWidth' has a wrong offset!");
static_assert(offsetof(UPlayerSurveyMultipleChoiceResponse_C, AdditionalColumnWidth) == 0x000430, "Member 'UPlayerSurveyMultipleChoiceResponse_C::AdditionalColumnWidth' has a wrong offset!");

}
