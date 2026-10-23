#pragma once

#include "Basic.hpp"

#include "BannerLibrary_classes.hpp"
#include "BannerLibrary_parameters.hpp"

namespace SDK
{

void UBannerLibrary_C::GenericUpdateMaterial(class UMaterialInstanceDynamic* Target, class UTexture* BannerIcon, const struct FLinearColor& BG_PrimaryColor, const struct FLinearColor& BG_SecondaryColor, class UTexture* ShapeIcon, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BannerLibrary_C", "GenericUpdateMaterial");

	Params::BannerLibrary_C_GenericUpdateMaterial Parms{};

	Parms.Target = Target;
	Parms.BannerIcon = BannerIcon;
	Parms.BG_PrimaryColor = std::move(BG_PrimaryColor);
	Parms.BG_SecondaryColor = std::move(BG_SecondaryColor);
	Parms.ShapeIcon = ShapeIcon;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBannerLibrary_C::UpdateBannerColorOnMaterial(class UMaterialInstanceDynamic* Material, const struct FLinearColor& PrimaryBGColor, const struct FLinearColor& SecondaryBGColor, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BannerLibrary_C", "UpdateBannerColorOnMaterial");

	Params::BannerLibrary_C_UpdateBannerColorOnMaterial Parms{};

	Parms.Material = Material;
	Parms.PrimaryBGColor = std::move(PrimaryBGColor);
	Parms.SecondaryBGColor = std::move(SecondaryBGColor);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBannerLibrary_C::UpdateBannerIconOnMaterial(class UMaterialInstanceDynamic* Material, class UTexture* Icon, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BannerLibrary_C", "UpdateBannerIconOnMaterial");

	Params::BannerLibrary_C_UpdateBannerIconOnMaterial Parms{};

	Parms.Material = Material;
	Parms.Icon = Icon;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}
