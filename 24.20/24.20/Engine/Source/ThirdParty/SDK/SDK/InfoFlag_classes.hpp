#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class UInfoFlag_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 BG_Gradient;
	class UCommonRichTextBlock*                   CommonRichTextBlock_114;
	class USizeBox*                               SizeBox_0;
	class UImage*                                 Trim;
	struct FLinearColor                           TrimColor;
	struct FLinearColor                           GradientColor;
	double                                        TrimWidth;
	class FText                                   InfoText;
	double                                        GradientDistance;
	double                                        MaxWidth;

public:
	void UpdateTrimColor(const struct FLinearColor& Color);
	void UpdateText(const class FText& Text);
	void UpdateGradientColor(const struct FLinearColor& Color);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_InfoFlag(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InfoFlag_C">();
	}
	static class UInfoFlag_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInfoFlag_C>();
	}
};
static_assert(alignof(UInfoFlag_C) == 0x000008, "Wrong alignment on UInfoFlag_C");
static_assert(sizeof(UInfoFlag_C) == 0x0002E0, "Wrong size on UInfoFlag_C");
static_assert(offsetof(UInfoFlag_C, UberGraphFrame) == 0x000268, "Member 'UInfoFlag_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UInfoFlag_C, BG_Gradient) == 0x000270, "Member 'UInfoFlag_C::BG_Gradient' has a wrong offset!");
static_assert(offsetof(UInfoFlag_C, CommonRichTextBlock_114) == 0x000278, "Member 'UInfoFlag_C::CommonRichTextBlock_114' has a wrong offset!");
static_assert(offsetof(UInfoFlag_C, SizeBox_0) == 0x000280, "Member 'UInfoFlag_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(UInfoFlag_C, Trim) == 0x000288, "Member 'UInfoFlag_C::Trim' has a wrong offset!");
static_assert(offsetof(UInfoFlag_C, TrimColor) == 0x000290, "Member 'UInfoFlag_C::TrimColor' has a wrong offset!");
static_assert(offsetof(UInfoFlag_C, GradientColor) == 0x0002A0, "Member 'UInfoFlag_C::GradientColor' has a wrong offset!");
static_assert(offsetof(UInfoFlag_C, TrimWidth) == 0x0002B0, "Member 'UInfoFlag_C::TrimWidth' has a wrong offset!");
static_assert(offsetof(UInfoFlag_C, InfoText) == 0x0002B8, "Member 'UInfoFlag_C::InfoText' has a wrong offset!");
static_assert(offsetof(UInfoFlag_C, GradientDistance) == 0x0002D0, "Member 'UInfoFlag_C::GradientDistance' has a wrong offset!");
static_assert(offsetof(UInfoFlag_C, MaxWidth) == 0x0002D8, "Member 'UInfoFlag_C::MaxWidth' has a wrong offset!");

}
