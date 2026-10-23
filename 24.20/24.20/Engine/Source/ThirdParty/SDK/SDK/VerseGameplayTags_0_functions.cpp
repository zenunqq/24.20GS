#pragma once

#include "Basic.hpp"

#include "VerseGameplayTags_0_classes.hpp"
#include "VerseGameplayTags_0_parameters.hpp"

namespace SDK
{

FOptionProperty_ UTags::_L_2fVerse_2eorg_2fSimulation_2fTags_N_REquals_L_Ntag__container_M_Ntag__container_R(const struct Ftuple_Ltag__container_Mtag__container_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Tags", "_L_2fVerse_2eorg_2fSimulation_2fTags_N_REquals_L_Ntag__container_M_Ntag__container_R");

	Params::Tags__L_2fVerse_2eorg_2fSimulation_2fTags_N_REquals_L_Ntag__container_M_Ntag__container_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UTags::_L_2fVerse_2eorg_2fSimulation_2fTags_N_REquals_L_Ntag_M_Ntag_R(const struct Ftuple_Ltag_Mtag_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Tags", "_L_2fVerse_2eorg_2fSimulation_2fTags_N_REquals_L_Ntag_M_Ntag_R");

	Params::Tags__L_2fVerse_2eorg_2fSimulation_2fTags_N_REquals_L_Ntag_M_Ntag_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UEntityComponent*> UTags::_L_2fVerse_2eorg_2fSimulation_2fTags_N_RFindObjectsWithTag_L_Ntag_R(class UTags_tag* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Tags", "_L_2fVerse_2eorg_2fSimulation_2fTags_N_RFindObjectsWithTag_L_Ntag_R");

	Params::Tags__L_2fVerse_2eorg_2fSimulation_2fTags_N_RFindObjectsWithTag_L_Ntag_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UEntityComponent*> UTags::_L_2fVerse_2eorg_2fSimulation_2fTags_N_RFindObjectsWithTags_L_Ntag__search__criteria_R(class UTags_tag_search_criteria* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Tags", "_L_2fVerse_2eorg_2fSimulation_2fTags_N_RFindObjectsWithTags_L_Ntag__search__criteria_R");

	Params::Tags__L_2fVerse_2eorg_2fSimulation_2fTags_N_RFindObjectsWithTags_L_Ntag__search__criteria_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UTags::_L_2fVerse_2eorg_2fSimulation_2fTags_N_RFindObjectWithTag_L_Ntag_R(class UTags_tag* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Tags", "_L_2fVerse_2eorg_2fSimulation_2fTags_N_RFindObjectWithTag_L_Ntag_R");

	Params::Tags__L_2fVerse_2eorg_2fSimulation_2fTags_N_RFindObjectWithTag_L_Ntag_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UTags::_L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeGameplayTag_L_Ntag__selector_R(const struct FVerseGameplayTag& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Tags", "_L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeGameplayTag_L_Ntag__selector_R");

	Params::Tags__L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeGameplayTag_L_Ntag__selector_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UTags::_L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeGameplayTagFromSubClass_L_Ntype_Lany_M_20tag_R_R(class UClass* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Tags", "_L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeGameplayTagFromSubClass_L_Ntype_Lany_M_20tag_R_R");

	Params::Tags__L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeGameplayTagFromSubClass_L_Ntype_Lany_M_20tag_R_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UTags::_L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeTagContainer_L_N_Ktag_R(const TArray<class UTags_tag*>& __verse_0xB2CDDD72_Argument, uint64 InstancingGraph, class UTags_tag_container* __verse_0xB482F2DD_CurrentlyInstantiatedObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Tags", "_L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeTagContainer_L_N_Ktag_R");

	Params::Tags__L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeTagContainer_L_N_Ktag_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);
	Parms.InstancingGraph = InstancingGraph;
	Parms.__verse_0xB482F2DD_CurrentlyInstantiatedObject = __verse_0xB482F2DD_CurrentlyInstantiatedObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

FOptionProperty_ UTags::_L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeTagContainer_L_Ntag__selector__container_R(const struct FVerseGameplayTagContainer& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Tags", "_L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeTagContainer_L_Ntag__selector__container_R");

	Params::Tags__L_2fVerse_2eorg_2fSimulation_2fTags_N_RMakeTagContainer_L_Ntag__selector__container_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FVerseStringProperty_ UTags::_L_2fVerse_2eorg_2fSimulation_2fTags_N_RToString_L_Ntag__container_R(class UTags_tag_container* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Tags", "_L_2fVerse_2eorg_2fSimulation_2fTags_N_RToString_L_Ntag__container_R");

	Params::Tags__L_2fVerse_2eorg_2fSimulation_2fTags_N_RToString_L_Ntag__container_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FVerseStringProperty_ UTags::_L_2fVerse_2eorg_2fSimulation_2fTags_N_RToString_L_Ntag_R(class UTags_tag* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Tags", "_L_2fVerse_2eorg_2fSimulation_2fTags_N_RToString_L_Ntag_R");

	Params::Tags__L_2fVerse_2eorg_2fSimulation_2fTags_N_RToString_L_Ntag_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UTags::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tags", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UTags_tag::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tags_tag", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UTags_tag::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tags_tag", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UTags_tag::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tags_tag", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

void UTags_tag_container::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tags_tag_container", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UTags_tag_container::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tags_tag_container", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UTags_tag_container::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tags_tag_container", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

void UTags_tag_container::_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RAdd_L_N_Ktag_R(const TArray<class UTags_tag*>& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tags_tag_container", "_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RAdd_L_N_Ktag_R");

	Params::Tags_tag_container__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RAdd_L_N_Ktag_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTags_tag_container::_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RAdd_L_Ntag__container_R(class UTags_tag_container* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tags_tag_container", "_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RAdd_L_Ntag__container_R");

	Params::Tags_tag_container__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RAdd_L_Ntag__container_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTags_tag_container::_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RAdd_L_Ntag_R(class UTags_tag* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tags_tag_container", "_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RAdd_L_Ntag_R");

	Params::Tags_tag_container__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RAdd_L_Ntag_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int64 UTags_tag_container::_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RNum(const struct VerseGameplayTags_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tags_tag_container", "_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RNum");

	Params::Tags_tag_container__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RNum Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UTags_tag_container::_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RRemove_L_N_Ktag_R(const TArray<class UTags_tag*>& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tags_tag_container", "_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RRemove_L_N_Ktag_R");

	Params::Tags_tag_container__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RRemove_L_N_Ktag_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTags_tag_container::_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RRemove_L_Ntag__container_R(class UTags_tag_container* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tags_tag_container", "_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RRemove_L_Ntag__container_R");

	Params::Tags_tag_container__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RRemove_L_Ntag__container_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

FOptionProperty_ UTags_tag_container::_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RRemove_L_Ntag_R(class UTags_tag* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tags_tag_container", "_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RRemove_L_Ntag_R");

	Params::Tags_tag_container__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RRemove_L_Ntag_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UTags_tag_container::_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RReset(const struct VerseGameplayTags_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tags_tag_container", "_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RReset");

	Params::Tags_tag_container__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RReset Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTags_tag_container::_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RResetWithSlack_L_Nint_R(int64 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tags_tag_container", "_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RResetWithSlack_L_Nint_R");

	Params::Tags_tag_container__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container_N_RResetWithSlack_L_Nint_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

FOptionProperty_ UTags_tag_container::_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHas_L_Ntag_R(class UTags_tag* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tags_tag_container", "_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHas_L_Ntag_R");

	Params::Tags_tag_container__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHas_L_Ntag_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UTags_tag_container::_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAll_L_N_Ktag_R(const TArray<class UTags_tag*>& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tags_tag_container", "_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAll_L_N_Ktag_R");

	Params::Tags_tag_container__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAll_L_N_Ktag_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UTags_tag_container::_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAny_L_N_Ktag_R(const TArray<class UTags_tag*>& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tags_tag_container", "_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAny_L_N_Ktag_R");

	Params::Tags_tag_container__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAny_L_N_Ktag_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UTags_tag_search_criteria::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tags_tag_search_criteria", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UTags_tag_search_criteria::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tags_tag_search_criteria", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UTags_tag_search_criteria::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tags_tag_search_criteria", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

void UTags_tag_container_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tags_tag_container_component", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UTags_tag_container_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tags_tag_container_component", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UTags_tag_container_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tags_tag_container_component", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

void UTags_tag_container_component::_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RAddTag_L_Ntag_R(class UTags_tag* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tags_tag_container_component", "_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RAddTag_L_Ntag_R");

	Params::Tags_tag_container_component__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RAddTag_L_Ntag_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UTags_tag_container* UTags_tag_container_component::_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RGetTags(const struct VerseGameplayTags_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tags_tag_container_component", "_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RGetTags");

	Params::Tags_tag_container_component__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RGetTags Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

uint8 UTags_tag_container_component::_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RRemoveTag_L_Ntag_R(class UTags_tag* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tags_tag_container_component", "_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RRemoveTag_L_Ntag_R");

	Params::Tags_tag_container_component__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RRemoveTag_L_Ntag_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UTags_tag_container_component::_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RSetTags_L_Ntag__container_R(class UTags_tag_container* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tags_tag_container_component", "_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RSetTags_L_Ntag__container_R");

	Params::Tags_tag_container_component__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__container__component_N_RSetTags_L_Ntag__container_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

FOptionProperty_ UTags_tag_view::_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHas_L_Ntag_R(class UTags_tag* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tags_tag_view", "_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHas_L_Ntag_R");

	Params::Tags_tag_view__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHas_L_Ntag_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

FOptionProperty_ UTags_tag_view::_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAll_L_N_Ktag_R(const TArray<class UTags_tag*>& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tags_tag_view", "_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAll_L_N_Ktag_R");

	Params::Tags_tag_view__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAll_L_N_Ktag_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

FOptionProperty_ UTags_tag_view::_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAny_L_N_Ktag_R(const TArray<class UTags_tag*>& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tags_tag_view", "_L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAny_L_N_Ktag_R");

	Params::Tags_tag_view__L_2fVerse_2eorg_2fSimulation_2fTags_2ftag__view_N_RHasAny_L_N_Ktag_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
