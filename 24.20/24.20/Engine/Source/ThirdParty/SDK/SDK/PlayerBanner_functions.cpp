#pragma once

#include "Basic.hpp"

#include "PlayerBanner_classes.hpp"
#include "PlayerBanner_parameters.hpp"

namespace SDK
{

void UPlayerBanner_C::Account_Info_Changed(const struct FFortPublicAccountInfo& NewInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerBanner_C", "Account Info Changed");

	Params::PlayerBanner_C_Account_Info_Changed Parms{};

	Parms.NewInfo = std::move(NewInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerBanner_C::ClearBannerState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerBanner_C", "ClearBannerState");

	UObject::ProcessEvent(Func, nullptr);
}

void UPlayerBanner_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerBanner_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}

void UPlayerBanner_C::EnableSurround()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerBanner_C", "EnableSurround");

	UObject::ProcessEvent(Func, nullptr);
}

void UPlayerBanner_C::ExecuteUbergraph_PlayerBanner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerBanner_C", "ExecuteUbergraph_PlayerBanner");

	Params::PlayerBanner_C_ExecuteUbergraph_PlayerBanner Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerBanner_C::GetBannerMID(class UMaterialInstanceDynamic** BannerMID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerBanner_C", "GetBannerMID");

	Params::PlayerBanner_C_GetBannerMID Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (BannerMID != nullptr)
		*BannerMID = Parms.BannerMID;
}

void UPlayerBanner_C::OnBannerIconLoaded(class UObject* LoadedObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerBanner_C", "OnBannerIconLoaded");

	Params::PlayerBanner_C_OnBannerIconLoaded Parms{};

	Parms.LoadedObject = LoadedObject;

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerBanner_C::OnSurroundIconLoaded(class UObject* LoadedObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerBanner_C", "OnSurroundIconLoaded");

	Params::PlayerBanner_C_OnSurroundIconLoaded Parms{};

	Parms.LoadedObject = LoadedObject;

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerBanner_C::RefreshSurround(int32 Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerBanner_C", "RefreshSurround");

	Params::PlayerBanner_C_RefreshSurround Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerBanner_C::SetBannerColorId(class FName InBannerColorId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerBanner_C", "SetBannerColorId");

	Params::PlayerBanner_C_SetBannerColorId Parms{};

	Parms.InBannerColorId = InBannerColorId;

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerBanner_C::SetBannerIconAndColor(class FName IconId, class FName ColorId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerBanner_C", "SetBannerIconAndColor");

	Params::PlayerBanner_C_SetBannerIconAndColor Parms{};

	Parms.IconId = IconId;
	Parms.ColorId = ColorId;

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerBanner_C::SetBannerIconAndColorFromProfile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerBanner_C", "SetBannerIconAndColorFromProfile");

	UObject::ProcessEvent(Func, nullptr);
}

void UPlayerBanner_C::SetBannerIconId(class FName InBannerIconId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerBanner_C", "SetBannerIconId");

	Params::PlayerBanner_C_SetBannerIconId Parms{};

	Parms.InBannerIconId = InBannerIconId;

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerBanner_C::SetBannerImage(const struct FFortHomeBaseInfo& Image_info, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerBanner_C", "SetBannerImage");

	Params::PlayerBanner_C_SetBannerImage Parms{};

	Parms.Image_info = std::move(Image_info);

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}

void UPlayerBanner_C::SetBannerOwner(const struct FUniqueNetIdRepl& OwnerId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerBanner_C", "SetBannerOwner");

	Params::PlayerBanner_C_SetBannerOwner Parms{};

	Parms.OwnerId = std::move(OwnerId);

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerBanner_C::SetupSurround()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerBanner_C", "SetupSurround");

	UObject::ProcessEvent(Func, nullptr);
}

void UPlayerBanner_C::ToggleBannerMask(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerBanner_C", "ToggleBannerMask");

	Params::PlayerBanner_C_ToggleBannerMask Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerBanner_C::UnbindDelegates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerBanner_C", "UnbindDelegates");

	UObject::ProcessEvent(Func, nullptr);
}

}
