#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UWB_AudioAnalysis_UI_C final : public UFortAudioAnalysisDebugWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UVerticalBox*                           GraphBox;
	TArray<class UWB_AudioAnalysis_FloatGraph_C*> Widgets;

public:
	void AddScalarParameter(const struct FAudioAnalysisParameterScalar& Param);
	void AddVectorParameter(const struct FAudioAnalysisParameterVector& Param);
	void ClearParameters();
	void ExecuteUbergraph_WB_AudioAnalysis_UI(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_AudioAnalysis_UI_C">();
	}
	static class UWB_AudioAnalysis_UI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_AudioAnalysis_UI_C>();
	}
};
static_assert(alignof(UWB_AudioAnalysis_UI_C) == 0x000008, "Wrong alignment on UWB_AudioAnalysis_UI_C");
static_assert(sizeof(UWB_AudioAnalysis_UI_C) == 0x000288, "Wrong size on UWB_AudioAnalysis_UI_C");
static_assert(offsetof(UWB_AudioAnalysis_UI_C, UberGraphFrame) == 0x000268, "Member 'UWB_AudioAnalysis_UI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_AudioAnalysis_UI_C, GraphBox) == 0x000270, "Member 'UWB_AudioAnalysis_UI_C::GraphBox' has a wrong offset!");
static_assert(offsetof(UWB_AudioAnalysis_UI_C, Widgets) == 0x000278, "Member 'UWB_AudioAnalysis_UI_C::Widgets' has a wrong offset!");

}
