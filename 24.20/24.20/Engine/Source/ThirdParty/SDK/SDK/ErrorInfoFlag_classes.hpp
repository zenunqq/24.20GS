#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class UErrorInfoFlag_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 Image_ErrorBG;
	class UImage*                                 Image_ErrorBG_Accent;
	class UImage*                                 OptionalIcon;
	class URichTextBlock*                         RichText_UserInformation;
	class UScaleBox*                              ScaleBox_Mobile;
	struct FLinearColor                           AccentColor;
	class UMaterialInterface*                     IconMaterial;

public:
	void UpdateText(const class FText& Text);
	void UpdateIconMaterial(class UMaterialInterface* Material);
	void UpdateAccentColor(const struct FLinearColor& Color);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ErrorInfoFlag(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ErrorInfoFlag_C">();
	}
	static class UErrorInfoFlag_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UErrorInfoFlag_C>();
	}
};
static_assert(alignof(UErrorInfoFlag_C) == 0x000008, "Wrong alignment on UErrorInfoFlag_C");
static_assert(sizeof(UErrorInfoFlag_C) == 0x0002B0, "Wrong size on UErrorInfoFlag_C");
static_assert(offsetof(UErrorInfoFlag_C, UberGraphFrame) == 0x000268, "Member 'UErrorInfoFlag_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UErrorInfoFlag_C, Image_ErrorBG) == 0x000270, "Member 'UErrorInfoFlag_C::Image_ErrorBG' has a wrong offset!");
static_assert(offsetof(UErrorInfoFlag_C, Image_ErrorBG_Accent) == 0x000278, "Member 'UErrorInfoFlag_C::Image_ErrorBG_Accent' has a wrong offset!");
static_assert(offsetof(UErrorInfoFlag_C, OptionalIcon) == 0x000280, "Member 'UErrorInfoFlag_C::OptionalIcon' has a wrong offset!");
static_assert(offsetof(UErrorInfoFlag_C, RichText_UserInformation) == 0x000288, "Member 'UErrorInfoFlag_C::RichText_UserInformation' has a wrong offset!");
static_assert(offsetof(UErrorInfoFlag_C, ScaleBox_Mobile) == 0x000290, "Member 'UErrorInfoFlag_C::ScaleBox_Mobile' has a wrong offset!");
static_assert(offsetof(UErrorInfoFlag_C, AccentColor) == 0x000298, "Member 'UErrorInfoFlag_C::AccentColor' has a wrong offset!");
static_assert(offsetof(UErrorInfoFlag_C, IconMaterial) == 0x0002A8, "Member 'UErrorInfoFlag_C::IconMaterial' has a wrong offset!");

}
