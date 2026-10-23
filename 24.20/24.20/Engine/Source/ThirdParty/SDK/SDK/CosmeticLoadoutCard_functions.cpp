#pragma once

#include "Basic.hpp"

#include "CosmeticLoadoutCard_classes.hpp"
#include "CosmeticLoadoutCard_parameters.hpp"

namespace SDK
{

void UCosmeticLoadoutCard_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticLoadoutCard_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UCosmeticLoadoutCard_C::ExecuteUbergraph_CosmeticLoadoutCard(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticLoadoutCard_C", "ExecuteUbergraph_CosmeticLoadoutCard");

	Params::CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UCosmeticLoadoutCard_C::Get_First_Item(TArray<class UFortItemDefinition*>& inArray, class UFortItemDefinition** Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticLoadoutCard_C", "Get First Item");

	Params::CosmeticLoadoutCard_C_Get_First_Item Parms{};

	Parms.inArray = std::move(inArray);

	UObject::ProcessEvent(Func, &Parms);

	inArray = std::move(Parms.inArray);

	if (Result != nullptr)
		*Result = Parms.Result;
}

void UCosmeticLoadoutCard_C::IsBlank(bool* Blank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticLoadoutCard_C", "IsBlank");

	Params::CosmeticLoadoutCard_C_IsBlank Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Blank != nullptr)
		*Blank = Parms.Blank;
}

void UCosmeticLoadoutCard_C::OnLoaded_1E2615E24358EA93BCC3BBB4925113EE(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticLoadoutCard_C", "OnLoaded_1E2615E24358EA93BCC3BBB4925113EE");

	Params::CosmeticLoadoutCard_C_OnLoaded_1E2615E24358EA93BCC3BBB4925113EE Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

void UCosmeticLoadoutCard_C::OnLoaded_720B049647023D90A92C789B29FB1060(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticLoadoutCard_C", "OnLoaded_720B049647023D90A92C789B29FB1060");

	Params::CosmeticLoadoutCard_C_OnLoaded_720B049647023D90A92C789B29FB1060 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

void UCosmeticLoadoutCard_C::OnLoaded_9C1753664F831A575C95389EB3050D6D(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticLoadoutCard_C", "OnLoaded_9C1753664F831A575C95389EB3050D6D");

	Params::CosmeticLoadoutCard_C_OnLoaded_9C1753664F831A575C95389EB3050D6D Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

void UCosmeticLoadoutCard_C::OnLoaded_B0945C234A1D7EE9DB994DA20F20FC55(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticLoadoutCard_C", "OnLoaded_B0945C234A1D7EE9DB994DA20F20FC55");

	Params::CosmeticLoadoutCard_C_OnLoaded_B0945C234A1D7EE9DB994DA20F20FC55 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

void UCosmeticLoadoutCard_C::OnLoaded_C53A1CD444E6E41E6696819693452D69(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticLoadoutCard_C", "OnLoaded_C53A1CD444E6E41E6696819693452D69");

	Params::CosmeticLoadoutCard_C_OnLoaded_C53A1CD444E6E41E6696819693452D69 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

void UCosmeticLoadoutCard_C::OnUpdateCard()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticLoadoutCard_C", "OnUpdateCard");

	UObject::ProcessEvent(Func, nullptr);
}

void UCosmeticLoadoutCard_C::PlayHoverForward()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticLoadoutCard_C", "PlayHoverForward");

	UObject::ProcessEvent(Func, nullptr);
}

void UCosmeticLoadoutCard_C::PlayHoverReverse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticLoadoutCard_C", "PlayHoverReverse");

	UObject::ProcessEvent(Func, nullptr);
}

void UCosmeticLoadoutCard_C::PlaySelectedForward()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticLoadoutCard_C", "PlaySelectedForward");

	UObject::ProcessEvent(Func, nullptr);
}

void UCosmeticLoadoutCard_C::PlaySelectedReverse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticLoadoutCard_C", "PlaySelectedReverse");

	UObject::ProcessEvent(Func, nullptr);
}

void UCosmeticLoadoutCard_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticLoadoutCard_C", "PreConstruct");

	Params::CosmeticLoadoutCard_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UCosmeticLoadoutCard_C::UpdateLoadoutSlotVisuals(class FName PreviewImageTextureParameterName, class FName DefaultSwitchScalarName, class UObject* Object, class UTexture2D* DefaultTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticLoadoutCard_C", "UpdateLoadoutSlotVisuals");

	Params::CosmeticLoadoutCard_C_UpdateLoadoutSlotVisuals Parms{};

	Parms.PreviewImageTextureParameterName = PreviewImageTextureParameterName;
	Parms.DefaultSwitchScalarName = DefaultSwitchScalarName;
	Parms.Object = Object;
	Parms.DefaultTexture = DefaultTexture;

	UObject::ProcessEvent(Func, &Parms);
}

}
