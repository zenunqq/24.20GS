#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class UWBP_Violator_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 Image_Icon;
	class UCommonTextBlock*                       Text_Violator;
	class UTexture2D*                             Icon_Texture;
	class UMaterialInterface*                     IconMaterial;
	struct FVector2D                              IconSize;
	struct FVector2D                              IconShear;
	float                                         IconAngle;
	struct FLinearColor                           IconColor;
	uint8                                         Pad_2C4[0x4];
	class FText                                   ViolatorText;
	double                                        IconToTextSpacing;

public:
	void ExecuteUbergraph_WBP_Violator(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void UpdateViolatorText(const class FText& InText, bool bDisplayTimeIcon);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Violator_C">();
	}
	static class UWBP_Violator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Violator_C>();
	}
};
static_assert(alignof(UWBP_Violator_C) == 0x000008, "Wrong alignment on UWBP_Violator_C");
static_assert(sizeof(UWBP_Violator_C) == 0x0002E8, "Wrong size on UWBP_Violator_C");
static_assert(offsetof(UWBP_Violator_C, UberGraphFrame) == 0x000268, "Member 'UWBP_Violator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Violator_C, Image_Icon) == 0x000270, "Member 'UWBP_Violator_C::Image_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_Violator_C, Text_Violator) == 0x000278, "Member 'UWBP_Violator_C::Text_Violator' has a wrong offset!");
static_assert(offsetof(UWBP_Violator_C, Icon_Texture) == 0x000280, "Member 'UWBP_Violator_C::Icon_Texture' has a wrong offset!");
static_assert(offsetof(UWBP_Violator_C, IconMaterial) == 0x000288, "Member 'UWBP_Violator_C::IconMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_Violator_C, IconSize) == 0x000290, "Member 'UWBP_Violator_C::IconSize' has a wrong offset!");
static_assert(offsetof(UWBP_Violator_C, IconShear) == 0x0002A0, "Member 'UWBP_Violator_C::IconShear' has a wrong offset!");
static_assert(offsetof(UWBP_Violator_C, IconAngle) == 0x0002B0, "Member 'UWBP_Violator_C::IconAngle' has a wrong offset!");
static_assert(offsetof(UWBP_Violator_C, IconColor) == 0x0002B4, "Member 'UWBP_Violator_C::IconColor' has a wrong offset!");
static_assert(offsetof(UWBP_Violator_C, ViolatorText) == 0x0002C8, "Member 'UWBP_Violator_C::ViolatorText' has a wrong offset!");
static_assert(offsetof(UWBP_Violator_C, IconToTextSpacing) == 0x0002E0, "Member 'UWBP_Violator_C::IconToTextSpacing' has a wrong offset!");

}
