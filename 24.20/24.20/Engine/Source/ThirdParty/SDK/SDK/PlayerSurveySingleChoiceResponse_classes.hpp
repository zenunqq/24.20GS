#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UPlayerSurveySingleChoiceResponse_C final : public UFortPlayerSurveySingleChoiceResponseBase
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
	void ExecuteUbergraph_PlayerSurveySingleChoiceResponse(int32 EntryPoint);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void SetNumberOfResponses(int32 NumberOfResponses);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerSurveySingleChoiceResponse_C">();
	}
	static class UPlayerSurveySingleChoiceResponse_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerSurveySingleChoiceResponse_C>();
	}
};
static_assert(alignof(UPlayerSurveySingleChoiceResponse_C) == 0x000008, "Wrong alignment on UPlayerSurveySingleChoiceResponse_C");
static_assert(sizeof(UPlayerSurveySingleChoiceResponse_C) == 0x000438, "Wrong size on UPlayerSurveySingleChoiceResponse_C");
static_assert(offsetof(UPlayerSurveySingleChoiceResponse_C, UberGraphFrame) == 0x0003F8, "Member 'UPlayerSurveySingleChoiceResponse_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerSurveySingleChoiceResponse_C, Overlay_OrthogonalIndicator) == 0x000400, "Member 'UPlayerSurveySingleChoiceResponse_C::Overlay_OrthogonalIndicator' has a wrong offset!");
static_assert(offsetof(UPlayerSurveySingleChoiceResponse_C, Overlay_VerticalIndicator) == 0x000408, "Member 'UPlayerSurveySingleChoiceResponse_C::Overlay_VerticalIndicator' has a wrong offset!");
static_assert(offsetof(UPlayerSurveySingleChoiceResponse_C, PlayerSurveyOrthogonalIndicator) == 0x000410, "Member 'UPlayerSurveySingleChoiceResponse_C::PlayerSurveyOrthogonalIndicator' has a wrong offset!");
static_assert(offsetof(UPlayerSurveySingleChoiceResponse_C, PlayerSurveyVerticalIndicator) == 0x000418, "Member 'UPlayerSurveySingleChoiceResponse_C::PlayerSurveyVerticalIndicator' has a wrong offset!");
static_assert(offsetof(UPlayerSurveySingleChoiceResponse_C, SizeBox_Responses) == 0x000420, "Member 'UPlayerSurveySingleChoiceResponse_C::SizeBox_Responses' has a wrong offset!");
static_assert(offsetof(UPlayerSurveySingleChoiceResponse_C, BaseColumnWidth) == 0x000428, "Member 'UPlayerSurveySingleChoiceResponse_C::BaseColumnWidth' has a wrong offset!");
static_assert(offsetof(UPlayerSurveySingleChoiceResponse_C, AdditionalColumnWidth) == 0x000430, "Member 'UPlayerSurveySingleChoiceResponse_C::AdditionalColumnWidth' has a wrong offset!");

}
