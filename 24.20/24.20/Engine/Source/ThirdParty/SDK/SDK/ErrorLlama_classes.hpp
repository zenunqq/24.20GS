#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class UErrorLlama_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 Image_0;
	class UMaterialInstanceDynamic*               MID_Llama;
	bool                                          bFlippedTexture;
	uint8                                         Pad_281[0x7];
	struct FVector2D                              CurLookAt2D;
	ECommonInputType                              CurInputType;
	uint8                                         Pad_299[0x7];
	double                                        EyeInterpSpeed;
	double                                        MaterialInputScale;

public:
	void Construct();
	void ExecuteUbergraph_ErrorLlama(int32 EntryPoint);
	void HandleInputTypeChanged(ECommonInputType NewInputType);
	void HandleNormalizedInputDirection(const struct FVector2D& TwoDInputVec);
	void RandomizeColor();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ErrorLlama_C">();
	}
	static class UErrorLlama_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UErrorLlama_C>();
	}
};
static_assert(alignof(UErrorLlama_C) == 0x000008, "Wrong alignment on UErrorLlama_C");
static_assert(sizeof(UErrorLlama_C) == 0x0002B0, "Wrong size on UErrorLlama_C");
static_assert(offsetof(UErrorLlama_C, UberGraphFrame) == 0x000268, "Member 'UErrorLlama_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UErrorLlama_C, Image_0) == 0x000270, "Member 'UErrorLlama_C::Image_0' has a wrong offset!");
static_assert(offsetof(UErrorLlama_C, MID_Llama) == 0x000278, "Member 'UErrorLlama_C::MID_Llama' has a wrong offset!");
static_assert(offsetof(UErrorLlama_C, bFlippedTexture) == 0x000280, "Member 'UErrorLlama_C::bFlippedTexture' has a wrong offset!");
static_assert(offsetof(UErrorLlama_C, CurLookAt2D) == 0x000288, "Member 'UErrorLlama_C::CurLookAt2D' has a wrong offset!");
static_assert(offsetof(UErrorLlama_C, CurInputType) == 0x000298, "Member 'UErrorLlama_C::CurInputType' has a wrong offset!");
static_assert(offsetof(UErrorLlama_C, EyeInterpSpeed) == 0x0002A0, "Member 'UErrorLlama_C::EyeInterpSpeed' has a wrong offset!");
static_assert(offsetof(UErrorLlama_C, MaterialInputScale) == 0x0002A8, "Member 'UErrorLlama_C::MaterialInputScale' has a wrong offset!");

}
