#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct ProgressiveTagsBase_C_UpdateText final
{
public:
	class FText                                   Text_0;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_TextIsEmpty_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(ProgressiveTagsBase_C_UpdateText) == 0x000008, "Wrong alignment on ProgressiveTagsBase_C_UpdateText");
static_assert(sizeof(ProgressiveTagsBase_C_UpdateText) == 0x000020, "Wrong size on ProgressiveTagsBase_C_UpdateText");
static_assert(offsetof(ProgressiveTagsBase_C_UpdateText, Text_0) == 0x000000, "Member 'ProgressiveTagsBase_C_UpdateText::Text_0' has a wrong offset!");
static_assert(offsetof(ProgressiveTagsBase_C_UpdateText, Temp_bool_Variable) == 0x000018, "Member 'ProgressiveTagsBase_C_UpdateText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveTagsBase_C_UpdateText, CallFunc_TextIsEmpty_ReturnValue) == 0x000019, "Member 'ProgressiveTagsBase_C_UpdateText::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveTagsBase_C_UpdateText, Temp_byte_Variable) == 0x00001A, "Member 'ProgressiveTagsBase_C_UpdateText::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveTagsBase_C_UpdateText, Temp_byte_Variable_1) == 0x00001B, "Member 'ProgressiveTagsBase_C_UpdateText::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ProgressiveTagsBase_C_UpdateText, K2Node_Select_Default) == 0x00001C, "Member 'ProgressiveTagsBase_C_UpdateText::K2Node_Select_Default' has a wrong offset!");

struct ProgressiveTagsBase_C_UpdateColor final
{
public:
	struct FLinearColor                           Background_Color_0;
	struct FSlateColor                            Text_Color_0;
};
static_assert(alignof(ProgressiveTagsBase_C_UpdateColor) == 0x000004, "Wrong alignment on ProgressiveTagsBase_C_UpdateColor");
static_assert(sizeof(ProgressiveTagsBase_C_UpdateColor) == 0x000024, "Wrong size on ProgressiveTagsBase_C_UpdateColor");
static_assert(offsetof(ProgressiveTagsBase_C_UpdateColor, Background_Color_0) == 0x000000, "Member 'ProgressiveTagsBase_C_UpdateColor::Background_Color_0' has a wrong offset!");
static_assert(offsetof(ProgressiveTagsBase_C_UpdateColor, Text_Color_0) == 0x000010, "Member 'ProgressiveTagsBase_C_UpdateColor::Text_Color_0' has a wrong offset!");

struct ProgressiveTagsBase_C_Update_Image final
{
public:
	class UTexture2D*                             Texture;
	class UMaterialInterface*                     Material;
	struct FLinearColor                           Color;
	double                                        Angle;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_2A[0x2];
	float                                         CallFunc_SetRenderTransformAngle_Angle_ImplicitCast;
};
static_assert(alignof(ProgressiveTagsBase_C_Update_Image) == 0x000008, "Wrong alignment on ProgressiveTagsBase_C_Update_Image");
static_assert(sizeof(ProgressiveTagsBase_C_Update_Image) == 0x000030, "Wrong size on ProgressiveTagsBase_C_Update_Image");
static_assert(offsetof(ProgressiveTagsBase_C_Update_Image, Texture) == 0x000000, "Member 'ProgressiveTagsBase_C_Update_Image::Texture' has a wrong offset!");
static_assert(offsetof(ProgressiveTagsBase_C_Update_Image, Material) == 0x000008, "Member 'ProgressiveTagsBase_C_Update_Image::Material' has a wrong offset!");
static_assert(offsetof(ProgressiveTagsBase_C_Update_Image, Color) == 0x000010, "Member 'ProgressiveTagsBase_C_Update_Image::Color' has a wrong offset!");
static_assert(offsetof(ProgressiveTagsBase_C_Update_Image, Angle) == 0x000020, "Member 'ProgressiveTagsBase_C_Update_Image::Angle' has a wrong offset!");
static_assert(offsetof(ProgressiveTagsBase_C_Update_Image, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'ProgressiveTagsBase_C_Update_Image::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveTagsBase_C_Update_Image, CallFunc_IsValid_ReturnValue_1) == 0x000029, "Member 'ProgressiveTagsBase_C_Update_Image::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProgressiveTagsBase_C_Update_Image, CallFunc_SetRenderTransformAngle_Angle_ImplicitCast) == 0x00002C, "Member 'ProgressiveTagsBase_C_Update_Image::CallFunc_SetRenderTransformAngle_Angle_ImplicitCast' has a wrong offset!");

struct ProgressiveTagsBase_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(ProgressiveTagsBase_C_PreConstruct) == 0x000001, "Wrong alignment on ProgressiveTagsBase_C_PreConstruct");
static_assert(sizeof(ProgressiveTagsBase_C_PreConstruct) == 0x000001, "Wrong size on ProgressiveTagsBase_C_PreConstruct");
static_assert(offsetof(ProgressiveTagsBase_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ProgressiveTagsBase_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct ProgressiveTagsBase_C_ExecuteUbergraph_ProgressiveTagsBase final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_IsDesignTime;
};
static_assert(alignof(ProgressiveTagsBase_C_ExecuteUbergraph_ProgressiveTagsBase) == 0x000004, "Wrong alignment on ProgressiveTagsBase_C_ExecuteUbergraph_ProgressiveTagsBase");
static_assert(sizeof(ProgressiveTagsBase_C_ExecuteUbergraph_ProgressiveTagsBase) == 0x000008, "Wrong size on ProgressiveTagsBase_C_ExecuteUbergraph_ProgressiveTagsBase");
static_assert(offsetof(ProgressiveTagsBase_C_ExecuteUbergraph_ProgressiveTagsBase, EntryPoint) == 0x000000, "Member 'ProgressiveTagsBase_C_ExecuteUbergraph_ProgressiveTagsBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(ProgressiveTagsBase_C_ExecuteUbergraph_ProgressiveTagsBase, K2Node_Event_IsDesignTime) == 0x000004, "Member 'ProgressiveTagsBase_C_ExecuteUbergraph_ProgressiveTagsBase::K2Node_Event_IsDesignTime' has a wrong offset!");

}
