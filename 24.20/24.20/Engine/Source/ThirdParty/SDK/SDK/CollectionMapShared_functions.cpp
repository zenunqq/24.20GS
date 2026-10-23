#pragma once

#include "Basic.hpp"

#include "CollectionMapShared_classes.hpp"
#include "CollectionMapShared_parameters.hpp"

namespace SDK
{

void UAthenaMapCollectionIcon::SetIsKnown(const bool bIsKnown)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapCollectionIcon", "SetIsKnown");

	Params::AthenaMapCollectionIcon_SetIsKnown Parms{};

	Parms.bIsKnown = bIsKnown;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMapCollectionIcon::SetSecondaryIcon(const TSoftObjectPtr<class UObject>& SecondaryIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapCollectionIcon", "SetSecondaryIcon");

	Params::AthenaMapCollectionIcon_SetSecondaryIcon Parms{};

	Parms.SecondaryIcon = SecondaryIcon;

	UObject::ProcessEvent(Func, &Parms);
}

}
