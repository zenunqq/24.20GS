#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "SidebarSocialTagCategoryStructure_structs.hpp"

namespace SDK::Params
{

struct SocialTagsFunctionLibrary_C_ClearLerpColorTimer final
{
public:
	double                                        ColorLerpAlpha;
	struct FTimerHandle                           ColorLerpTimeHandle;
	class UObject*                                __WorldContext;
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;
};
static_assert(alignof(SocialTagsFunctionLibrary_C_ClearLerpColorTimer) == 0x000008, "Wrong alignment on SocialTagsFunctionLibrary_C_ClearLerpColorTimer");
static_assert(sizeof(SocialTagsFunctionLibrary_C_ClearLerpColorTimer) == 0x000020, "Wrong size on SocialTagsFunctionLibrary_C_ClearLerpColorTimer");
static_assert(offsetof(SocialTagsFunctionLibrary_C_ClearLerpColorTimer, ColorLerpAlpha) == 0x000000, "Member 'SocialTagsFunctionLibrary_C_ClearLerpColorTimer::ColorLerpAlpha' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_ClearLerpColorTimer, ColorLerpTimeHandle) == 0x000008, "Member 'SocialTagsFunctionLibrary_C_ClearLerpColorTimer::ColorLerpTimeHandle' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_ClearLerpColorTimer, __WorldContext) == 0x000010, "Member 'SocialTagsFunctionLibrary_C_ClearLerpColorTimer::__WorldContext' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_ClearLerpColorTimer, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x000018, "Member 'SocialTagsFunctionLibrary_C_ClearLerpColorTimer::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");

struct SocialTagsFunctionLibrary_C_Get_Sidebar_Social_Tag_Category_Structure final
{
public:
	class FString                                 TagCategory;
	class UObject*                                __WorldContext;
	struct FSidebarSocialTagCategoryStructure     SidebarSocialTagCategoryStructure;
	struct FSidebarSocialTagCategoryStructure     LocalSidebarSocialTagCategoryStructure;
	class FString                                 CallFunc_Replace_ReturnValue;
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;
	uint8                                         Pad_10C[0x4];
	struct FSidebarSocialTagCategoryStructure     CallFunc_GetDataTableRowFromName_OutRow;
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;
	uint8                                         Pad_181[0x7];
	struct FSidebarSocialTagCategoryStructure     CallFunc_GetDataTableRowFromName_OutRow_1;
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;
};
static_assert(alignof(SocialTagsFunctionLibrary_C_Get_Sidebar_Social_Tag_Category_Structure) == 0x000008, "Wrong alignment on SocialTagsFunctionLibrary_C_Get_Sidebar_Social_Tag_Category_Structure");
static_assert(sizeof(SocialTagsFunctionLibrary_C_Get_Sidebar_Social_Tag_Category_Structure) == 0x000200, "Wrong size on SocialTagsFunctionLibrary_C_Get_Sidebar_Social_Tag_Category_Structure");
static_assert(offsetof(SocialTagsFunctionLibrary_C_Get_Sidebar_Social_Tag_Category_Structure, TagCategory) == 0x000000, "Member 'SocialTagsFunctionLibrary_C_Get_Sidebar_Social_Tag_Category_Structure::TagCategory' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_Get_Sidebar_Social_Tag_Category_Structure, __WorldContext) == 0x000010, "Member 'SocialTagsFunctionLibrary_C_Get_Sidebar_Social_Tag_Category_Structure::__WorldContext' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_Get_Sidebar_Social_Tag_Category_Structure, SidebarSocialTagCategoryStructure) == 0x000018, "Member 'SocialTagsFunctionLibrary_C_Get_Sidebar_Social_Tag_Category_Structure::SidebarSocialTagCategoryStructure' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_Get_Sidebar_Social_Tag_Category_Structure, LocalSidebarSocialTagCategoryStructure) == 0x000088, "Member 'SocialTagsFunctionLibrary_C_Get_Sidebar_Social_Tag_Category_Structure::LocalSidebarSocialTagCategoryStructure' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_Get_Sidebar_Social_Tag_Category_Structure, CallFunc_Replace_ReturnValue) == 0x0000F8, "Member 'SocialTagsFunctionLibrary_C_Get_Sidebar_Social_Tag_Category_Structure::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_Get_Sidebar_Social_Tag_Category_Structure, CallFunc_Conv_StringToName_ReturnValue) == 0x000108, "Member 'SocialTagsFunctionLibrary_C_Get_Sidebar_Social_Tag_Category_Structure::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_Get_Sidebar_Social_Tag_Category_Structure, CallFunc_GetDataTableRowFromName_OutRow) == 0x000110, "Member 'SocialTagsFunctionLibrary_C_Get_Sidebar_Social_Tag_Category_Structure::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_Get_Sidebar_Social_Tag_Category_Structure, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000180, "Member 'SocialTagsFunctionLibrary_C_Get_Sidebar_Social_Tag_Category_Structure::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_Get_Sidebar_Social_Tag_Category_Structure, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x000188, "Member 'SocialTagsFunctionLibrary_C_Get_Sidebar_Social_Tag_Category_Structure::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_Get_Sidebar_Social_Tag_Category_Structure, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x0001F8, "Member 'SocialTagsFunctionLibrary_C_Get_Sidebar_Social_Tag_Category_Structure::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");

struct SocialTagsFunctionLibrary_C_InterpolateMaterialColor final
{
public:
	class UMaterialInstanceDynamic*               Material;
	class FName                                   ColorParameterName;
	struct FLinearColor                           CurrentColor;
	struct FLinearColor                           TargetColor;
	uint8                                         Pad_2C[0x4];
	double                                        ColorLerpAlpha;
	class UObject*                                __WorldContext;
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue;
	float                                         CallFunc_LinearColorLerp_Alpha_ImplicitCast;
};
static_assert(alignof(SocialTagsFunctionLibrary_C_InterpolateMaterialColor) == 0x000008, "Wrong alignment on SocialTagsFunctionLibrary_C_InterpolateMaterialColor");
static_assert(sizeof(SocialTagsFunctionLibrary_C_InterpolateMaterialColor) == 0x000058, "Wrong size on SocialTagsFunctionLibrary_C_InterpolateMaterialColor");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateMaterialColor, Material) == 0x000000, "Member 'SocialTagsFunctionLibrary_C_InterpolateMaterialColor::Material' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateMaterialColor, ColorParameterName) == 0x000008, "Member 'SocialTagsFunctionLibrary_C_InterpolateMaterialColor::ColorParameterName' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateMaterialColor, CurrentColor) == 0x00000C, "Member 'SocialTagsFunctionLibrary_C_InterpolateMaterialColor::CurrentColor' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateMaterialColor, TargetColor) == 0x00001C, "Member 'SocialTagsFunctionLibrary_C_InterpolateMaterialColor::TargetColor' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateMaterialColor, ColorLerpAlpha) == 0x000030, "Member 'SocialTagsFunctionLibrary_C_InterpolateMaterialColor::ColorLerpAlpha' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateMaterialColor, __WorldContext) == 0x000038, "Member 'SocialTagsFunctionLibrary_C_InterpolateMaterialColor::__WorldContext' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateMaterialColor, CallFunc_LinearColorLerp_ReturnValue) == 0x000040, "Member 'SocialTagsFunctionLibrary_C_InterpolateMaterialColor::CallFunc_LinearColorLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateMaterialColor, CallFunc_LinearColorLerp_Alpha_ImplicitCast) == 0x000050, "Member 'SocialTagsFunctionLibrary_C_InterpolateMaterialColor::CallFunc_LinearColorLerp_Alpha_ImplicitCast' has a wrong offset!");

struct SocialTagsFunctionLibrary_C_InterpolateTagBorderColors final
{
public:
	class UMaterialInstanceDynamic*               TagBorderMaterial;
	class FName                                   NameInnerColor;
	struct FLinearColor                           CurrentInnerColor;
	struct FLinearColor                           TargetInnerColor;
	class FName                                   NameOuterColor;
	struct FLinearColor                           CurrentOuterColor;
	struct FLinearColor                           TargetOuterColor;
	double                                        HoveredBorderColorLerpAlpha;
	struct FTimerHandle                           ColorLerpTimeHandle;
	class UObject*                                WorldContext;
	class UObject*                                __WorldContext;
};
static_assert(alignof(SocialTagsFunctionLibrary_C_InterpolateTagBorderColors) == 0x000008, "Wrong alignment on SocialTagsFunctionLibrary_C_InterpolateTagBorderColors");
static_assert(sizeof(SocialTagsFunctionLibrary_C_InterpolateTagBorderColors) == 0x000070, "Wrong size on SocialTagsFunctionLibrary_C_InterpolateTagBorderColors");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderColors, TagBorderMaterial) == 0x000000, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderColors::TagBorderMaterial' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderColors, NameInnerColor) == 0x000008, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderColors::NameInnerColor' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderColors, CurrentInnerColor) == 0x00000C, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderColors::CurrentInnerColor' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderColors, TargetInnerColor) == 0x00001C, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderColors::TargetInnerColor' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderColors, NameOuterColor) == 0x00002C, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderColors::NameOuterColor' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderColors, CurrentOuterColor) == 0x000030, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderColors::CurrentOuterColor' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderColors, TargetOuterColor) == 0x000040, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderColors::TargetOuterColor' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderColors, HoveredBorderColorLerpAlpha) == 0x000050, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderColors::HoveredBorderColorLerpAlpha' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderColors, ColorLerpTimeHandle) == 0x000058, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderColors::ColorLerpTimeHandle' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderColors, WorldContext) == 0x000060, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderColors::WorldContext' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderColors, __WorldContext) == 0x000068, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderColors::__WorldContext' has a wrong offset!");

struct SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor final
{
public:
	class UBorder*                                TagBorder;
	class FName                                   TagInnerColorGradient_1;
	class FName                                   TagInnerColorGradient_2;
	struct FSidebarSocialTagCategoryStructure     SidebarSocialTagCategoryStructure;
	double                                        TagBorderInnerColorHoveredLerpValue;
	struct FTimerHandle                           TagBorderInnerColorHoveredLerpTimeHandle;
	class UWidget*                                TagWidgetReference;
	class UObject*                                __WorldContext;
	bool                                          CallFunc_IsHovered_ReturnValue;
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	uint8                                         Pad_A7[0x1];
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue;
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue_1;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_D1[0x3];
	float                                         CallFunc_LinearColorLerp_Alpha_ImplicitCast;
	float                                         CallFunc_LinearColorLerp_Alpha_ImplicitCast_1;
};
static_assert(alignof(SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor) == 0x000008, "Wrong alignment on SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor");
static_assert(sizeof(SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor) == 0x0000E0, "Wrong size on SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor, TagBorder) == 0x000000, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor::TagBorder' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor, TagInnerColorGradient_1) == 0x000008, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor::TagInnerColorGradient_1' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor, TagInnerColorGradient_2) == 0x00000C, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor::TagInnerColorGradient_2' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor, SidebarSocialTagCategoryStructure) == 0x000010, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor::SidebarSocialTagCategoryStructure' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor, TagBorderInnerColorHoveredLerpValue) == 0x000080, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor::TagBorderInnerColorHoveredLerpValue' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor, TagBorderInnerColorHoveredLerpTimeHandle) == 0x000088, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor::TagBorderInnerColorHoveredLerpTimeHandle' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor, TagWidgetReference) == 0x000090, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor::TagWidgetReference' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor, __WorldContext) == 0x000098, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor::__WorldContext' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor, CallFunc_IsHovered_ReturnValue) == 0x0000A0, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor::CallFunc_IsHovered_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x0000A1, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor, CallFunc_Not_PreBool_ReturnValue) == 0x0000A2, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor, CallFunc_EqualEqual_DoubleDouble_ReturnValue_1) == 0x0000A3, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor::CallFunc_EqualEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor, CallFunc_BooleanAND_ReturnValue) == 0x0000A4, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor, CallFunc_BooleanAND_ReturnValue_1) == 0x0000A5, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor, CallFunc_BooleanOR_ReturnValue) == 0x0000A6, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor, CallFunc_LinearColorLerp_ReturnValue) == 0x0000A8, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor::CallFunc_LinearColorLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor, CallFunc_LinearColorLerp_ReturnValue_1) == 0x0000B8, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor::CallFunc_LinearColorLerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor, CallFunc_GetDynamicMaterial_ReturnValue) == 0x0000C8, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor, CallFunc_IsValid_ReturnValue) == 0x0000D0, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor, CallFunc_LinearColorLerp_Alpha_ImplicitCast) == 0x0000D4, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor::CallFunc_LinearColorLerp_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor, CallFunc_LinearColorLerp_Alpha_ImplicitCast_1) == 0x0000D8, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor::CallFunc_LinearColorLerp_Alpha_ImplicitCast_1' has a wrong offset!");

struct SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor final
{
public:
	class UBorder*                                TagBorder;
	class FName                                   TagOuterStrokeColor;
	uint8                                         Pad_C[0x4];
	struct FSidebarSocialTagCategoryStructure     SidebarSocialTagCategoryStructure;
	double                                        TagBorderInnerColorHoveredLerpValue;
	struct FTimerHandle                           TagBorderInnerColorHoveredLerpTimeHandle;
	class UWidget*                                TagWidgetReference;
	struct FLinearColor                           TagOuterStrokeColorUnhovered;
	class UObject*                                __WorldContext;
	bool                                          CallFunc_IsHovered_ReturnValue;
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	uint8                                         Pad_B7[0x1];
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_D1[0x3];
	float                                         CallFunc_LinearColorLerp_Alpha_ImplicitCast;
};
static_assert(alignof(SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor) == 0x000008, "Wrong alignment on SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor");
static_assert(sizeof(SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor) == 0x0000D8, "Wrong size on SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor, TagBorder) == 0x000000, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor::TagBorder' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor, TagOuterStrokeColor) == 0x000008, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor::TagOuterStrokeColor' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor, SidebarSocialTagCategoryStructure) == 0x000010, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor::SidebarSocialTagCategoryStructure' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor, TagBorderInnerColorHoveredLerpValue) == 0x000080, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor::TagBorderInnerColorHoveredLerpValue' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor, TagBorderInnerColorHoveredLerpTimeHandle) == 0x000088, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor::TagBorderInnerColorHoveredLerpTimeHandle' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor, TagWidgetReference) == 0x000090, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor::TagWidgetReference' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor, TagOuterStrokeColorUnhovered) == 0x000098, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor::TagOuterStrokeColorUnhovered' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor, __WorldContext) == 0x0000A8, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor::__WorldContext' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor, CallFunc_IsHovered_ReturnValue) == 0x0000B0, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor::CallFunc_IsHovered_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x0000B1, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor, CallFunc_Not_PreBool_ReturnValue) == 0x0000B2, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor, CallFunc_EqualEqual_DoubleDouble_ReturnValue_1) == 0x0000B3, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor::CallFunc_EqualEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor, CallFunc_BooleanAND_ReturnValue) == 0x0000B4, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor, CallFunc_BooleanAND_ReturnValue_1) == 0x0000B5, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor, CallFunc_BooleanOR_ReturnValue) == 0x0000B6, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor, CallFunc_LinearColorLerp_ReturnValue) == 0x0000B8, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor::CallFunc_LinearColorLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor, CallFunc_GetDynamicMaterial_ReturnValue) == 0x0000C8, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor, CallFunc_IsValid_ReturnValue) == 0x0000D0, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor, CallFunc_LinearColorLerp_Alpha_ImplicitCast) == 0x0000D4, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor::CallFunc_LinearColorLerp_Alpha_ImplicitCast' has a wrong offset!");

struct SocialTagsFunctionLibrary_C_InterpolateTagContentColors final
{
public:
	class UTextBlock*                             TagName;
	class UImage*                                 CheckMark;
	struct FLinearColor                           CurrentTagContentColor;
	struct FLinearColor                           TargetTagContentColor;
	double                                        HoveredTagContentLerpAlpha;
	class UObject*                                __WorldContext;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_41[0x3];
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue;
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_65[0x3];
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
	float                                         CallFunc_LinearColorLerp_Alpha_ImplicitCast;
	float                                         CallFunc_LinearColorLerp_Alpha_ImplicitCast_1;
};
static_assert(alignof(SocialTagsFunctionLibrary_C_InterpolateTagContentColors) == 0x000008, "Wrong alignment on SocialTagsFunctionLibrary_C_InterpolateTagContentColors");
static_assert(sizeof(SocialTagsFunctionLibrary_C_InterpolateTagContentColors) == 0x000088, "Wrong size on SocialTagsFunctionLibrary_C_InterpolateTagContentColors");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagContentColors, TagName) == 0x000000, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagContentColors::TagName' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagContentColors, CheckMark) == 0x000008, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagContentColors::CheckMark' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagContentColors, CurrentTagContentColor) == 0x000010, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagContentColors::CurrentTagContentColor' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagContentColors, TargetTagContentColor) == 0x000020, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagContentColors::TargetTagContentColor' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagContentColors, HoveredTagContentLerpAlpha) == 0x000030, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagContentColors::HoveredTagContentLerpAlpha' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagContentColors, __WorldContext) == 0x000038, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagContentColors::__WorldContext' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagContentColors, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagContentColors::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagContentColors, CallFunc_LinearColorLerp_ReturnValue) == 0x000044, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagContentColors::CallFunc_LinearColorLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagContentColors, CallFunc_LinearColorLerp_ReturnValue_1) == 0x000054, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagContentColors::CallFunc_LinearColorLerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagContentColors, CallFunc_IsValid_ReturnValue_1) == 0x000064, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagContentColors::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagContentColors, K2Node_MakeStruct_SlateColor) == 0x000068, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagContentColors::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagContentColors, CallFunc_LinearColorLerp_Alpha_ImplicitCast) == 0x00007C, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagContentColors::CallFunc_LinearColorLerp_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SocialTagsFunctionLibrary_C_InterpolateTagContentColors, CallFunc_LinearColorLerp_Alpha_ImplicitCast_1) == 0x000080, "Member 'SocialTagsFunctionLibrary_C_InterpolateTagContentColors::CallFunc_LinearColorLerp_Alpha_ImplicitCast_1' has a wrong offset!");

}
