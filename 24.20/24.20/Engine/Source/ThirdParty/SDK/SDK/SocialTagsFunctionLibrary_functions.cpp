#pragma once

#include "Basic.hpp"

#include "SocialTagsFunctionLibrary_classes.hpp"
#include "SocialTagsFunctionLibrary_parameters.hpp"

namespace SDK
{

void USocialTagsFunctionLibrary_C::ClearLerpColorTimer(double ColorLerpAlpha, struct FTimerHandle& ColorLerpTimeHandle, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SocialTagsFunctionLibrary_C", "ClearLerpColorTimer");

	Params::SocialTagsFunctionLibrary_C_ClearLerpColorTimer Parms{};

	Parms.ColorLerpAlpha = ColorLerpAlpha;
	Parms.ColorLerpTimeHandle = std::move(ColorLerpTimeHandle);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	ColorLerpTimeHandle = std::move(Parms.ColorLerpTimeHandle);
}

void USocialTagsFunctionLibrary_C::Get_Sidebar_Social_Tag_Category_Structure(const class FString& TagCategory, class UObject* __WorldContext, struct FSidebarSocialTagCategoryStructure* SidebarSocialTagCategoryStructure)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SocialTagsFunctionLibrary_C", "Get Sidebar Social Tag Category Structure");

	Params::SocialTagsFunctionLibrary_C_Get_Sidebar_Social_Tag_Category_Structure Parms{};

	Parms.TagCategory = std::move(TagCategory);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (SidebarSocialTagCategoryStructure != nullptr)
		*SidebarSocialTagCategoryStructure = std::move(Parms.SidebarSocialTagCategoryStructure);
}

void USocialTagsFunctionLibrary_C::InterpolateMaterialColor(class UMaterialInstanceDynamic* Material, class FName ColorParameterName, const struct FLinearColor& CurrentColor, const struct FLinearColor& TargetColor, double ColorLerpAlpha, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SocialTagsFunctionLibrary_C", "InterpolateMaterialColor");

	Params::SocialTagsFunctionLibrary_C_InterpolateMaterialColor Parms{};

	Parms.Material = Material;
	Parms.ColorParameterName = ColorParameterName;
	Parms.CurrentColor = std::move(CurrentColor);
	Parms.TargetColor = std::move(TargetColor);
	Parms.ColorLerpAlpha = ColorLerpAlpha;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USocialTagsFunctionLibrary_C::InterpolateTagBorderColors(class UMaterialInstanceDynamic* TagBorderMaterial, class FName NameInnerColor, const struct FLinearColor& CurrentInnerColor, const struct FLinearColor& TargetInnerColor, class FName NameOuterColor, const struct FLinearColor& CurrentOuterColor, const struct FLinearColor& TargetOuterColor, double HoveredBorderColorLerpAlpha, struct FTimerHandle& ColorLerpTimeHandle, class UObject* WorldContext, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SocialTagsFunctionLibrary_C", "InterpolateTagBorderColors");

	Params::SocialTagsFunctionLibrary_C_InterpolateTagBorderColors Parms{};

	Parms.TagBorderMaterial = TagBorderMaterial;
	Parms.NameInnerColor = NameInnerColor;
	Parms.CurrentInnerColor = std::move(CurrentInnerColor);
	Parms.TargetInnerColor = std::move(TargetInnerColor);
	Parms.NameOuterColor = NameOuterColor;
	Parms.CurrentOuterColor = std::move(CurrentOuterColor);
	Parms.TargetOuterColor = std::move(TargetOuterColor);
	Parms.HoveredBorderColorLerpAlpha = HoveredBorderColorLerpAlpha;
	Parms.ColorLerpTimeHandle = std::move(ColorLerpTimeHandle);
	Parms.WorldContext = WorldContext;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	ColorLerpTimeHandle = std::move(Parms.ColorLerpTimeHandle);
}

void USocialTagsFunctionLibrary_C::InterpolateTagBorderGradientColor(class UBorder* TagBorder, class FName TagInnerColorGradient_1, class FName TagInnerColorGradient_2, const struct FSidebarSocialTagCategoryStructure& SidebarSocialTagCategoryStructure, double TagBorderInnerColorHoveredLerpValue, struct FTimerHandle& TagBorderInnerColorHoveredLerpTimeHandle, class UWidget* TagWidgetReference, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SocialTagsFunctionLibrary_C", "InterpolateTagBorderGradientColor");

	Params::SocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor Parms{};

	Parms.TagBorder = TagBorder;
	Parms.TagInnerColorGradient_1 = TagInnerColorGradient_1;
	Parms.TagInnerColorGradient_2 = TagInnerColorGradient_2;
	Parms.SidebarSocialTagCategoryStructure = std::move(SidebarSocialTagCategoryStructure);
	Parms.TagBorderInnerColorHoveredLerpValue = TagBorderInnerColorHoveredLerpValue;
	Parms.TagBorderInnerColorHoveredLerpTimeHandle = std::move(TagBorderInnerColorHoveredLerpTimeHandle);
	Parms.TagWidgetReference = TagWidgetReference;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	TagBorderInnerColorHoveredLerpTimeHandle = std::move(Parms.TagBorderInnerColorHoveredLerpTimeHandle);
}

void USocialTagsFunctionLibrary_C::InterpolateTagBorderOuterStrokeColor(class UBorder* TagBorder, class FName TagOuterStrokeColor, const struct FSidebarSocialTagCategoryStructure& SidebarSocialTagCategoryStructure, double TagBorderInnerColorHoveredLerpValue, struct FTimerHandle& TagBorderInnerColorHoveredLerpTimeHandle, class UWidget* TagWidgetReference, const struct FLinearColor& TagOuterStrokeColorUnhovered, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SocialTagsFunctionLibrary_C", "InterpolateTagBorderOuterStrokeColor");

	Params::SocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor Parms{};

	Parms.TagBorder = TagBorder;
	Parms.TagOuterStrokeColor = TagOuterStrokeColor;
	Parms.SidebarSocialTagCategoryStructure = std::move(SidebarSocialTagCategoryStructure);
	Parms.TagBorderInnerColorHoveredLerpValue = TagBorderInnerColorHoveredLerpValue;
	Parms.TagBorderInnerColorHoveredLerpTimeHandle = std::move(TagBorderInnerColorHoveredLerpTimeHandle);
	Parms.TagWidgetReference = TagWidgetReference;
	Parms.TagOuterStrokeColorUnhovered = std::move(TagOuterStrokeColorUnhovered);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	TagBorderInnerColorHoveredLerpTimeHandle = std::move(Parms.TagBorderInnerColorHoveredLerpTimeHandle);
}

void USocialTagsFunctionLibrary_C::InterpolateTagContentColors(class UTextBlock* TagName, class UImage* CheckMark, const struct FLinearColor& CurrentTagContentColor, const struct FLinearColor& TargetTagContentColor, double HoveredTagContentLerpAlpha, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SocialTagsFunctionLibrary_C", "InterpolateTagContentColors");

	Params::SocialTagsFunctionLibrary_C_InterpolateTagContentColors Parms{};

	Parms.TagName = TagName;
	Parms.CheckMark = CheckMark;
	Parms.CurrentTagContentColor = std::move(CurrentTagContentColor);
	Parms.TargetTagContentColor = std::move(TargetTagContentColor);
	Parms.HoveredTagContentLerpAlpha = HoveredTagContentLerpAlpha;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}
