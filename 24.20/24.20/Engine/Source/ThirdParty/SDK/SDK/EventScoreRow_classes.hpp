#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class UEventScoreRow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 ImageDivider;
	class UCommonTextBlock*                       StatLabelText;
	class UCommonTextBlock*                       StatValueText;
	bool                                          FinalEntry;

public:
	void SetData(const class FText& Label, int32 Value);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_EventScoreRow(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventScoreRow_C">();
	}
	static class UEventScoreRow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventScoreRow_C>();
	}
};
static_assert(alignof(UEventScoreRow_C) == 0x000008, "Wrong alignment on UEventScoreRow_C");
static_assert(sizeof(UEventScoreRow_C) == 0x000290, "Wrong size on UEventScoreRow_C");
static_assert(offsetof(UEventScoreRow_C, UberGraphFrame) == 0x000268, "Member 'UEventScoreRow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEventScoreRow_C, ImageDivider) == 0x000270, "Member 'UEventScoreRow_C::ImageDivider' has a wrong offset!");
static_assert(offsetof(UEventScoreRow_C, StatLabelText) == 0x000278, "Member 'UEventScoreRow_C::StatLabelText' has a wrong offset!");
static_assert(offsetof(UEventScoreRow_C, StatValueText) == 0x000280, "Member 'UEventScoreRow_C::StatValueText' has a wrong offset!");
static_assert(offsetof(UEventScoreRow_C, FinalEntry) == 0x000288, "Member 'UEventScoreRow_C::FinalEntry' has a wrong offset!");

}
