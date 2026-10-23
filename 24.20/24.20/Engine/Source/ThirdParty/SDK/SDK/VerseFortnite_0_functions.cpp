#pragma once

#include "Basic.hpp"

#include "VerseFortnite_0_classes.hpp"
#include "VerseFortnite_0_parameters.hpp"

namespace SDK
{

void UCharacters_fort_character_impl::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character_impl", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UCharacters_fort_character_impl::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character_impl", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UCharacters_fort_character_impl::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character_impl", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

class UObject* UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RCrouchedEvent(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RCrouchedEvent");

	Params::Characters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RCrouchedEvent Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

class UObject* UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_REliminatedEvent(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_REliminatedEvent");

	Params::Characters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_REliminatedEvent Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

FOptionProperty_ UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetAgent(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetAgent");

	Params::Characters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetAgent Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVerseRotation UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetViewRotation(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetViewRotation");

	Params::Characters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetViewRotation Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RHide(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RHide");

	Params::Characters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RHide Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

FOptionProperty_ UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsActive(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsActive");

	Params::Characters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsActive Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsDownButNotOut(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsDownButNotOut");

	Params::Characters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsDownButNotOut Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsVulnerable(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsVulnerable");

	Params::Characters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsVulnerable Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UObject* UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RJumpedEvent(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RJumpedEvent");

	Params::Characters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RJumpedEvent Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RPutInStasis_L_Nstasis__args_R(const struct FCharacters_stasis_args& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RPutInStasis_L_Nstasis__args_R");

	Params::Characters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RPutInStasis_L_Nstasis__args_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RReleaseFromStasis(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RReleaseFromStasis");

	Params::Characters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RReleaseFromStasis Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSetVulnerability_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSetVulnerability_L_Nlogic_R");

	Params::Characters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSetVulnerability_L_Nlogic_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RShow(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RShow");

	Params::Characters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RShow Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UObject* UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSprintedEvent(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSprintedEvent");

	Params::Characters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSprintedEvent Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Ndamage__args_R(const struct FGame_damage_args& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Ndamage__args_R");

	Params::Characters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Ndamage__args_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Nfloat_R");

	Params::Characters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Nfloat_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UObject* UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamagedEvent(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamagedEvent");

	Params::Characters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamagedEvent Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nfloat_R");

	Params::Characters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nfloat_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nhealing__args_R(const struct FGame_healing_args& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nhealing__args_R");

	Params::Characters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nhealing__args_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UObject* UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fGame_2fhealable_N_RHealedEvent(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fGame_2fhealable_N_RHealedEvent");

	Params::Characters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fhealable_N_RHealedEvent Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

double UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetHealth(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetHealth");

	Params::Characters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetHealth Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

double UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetMaxHealth(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetMaxHealth");

	Params::Characters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetMaxHealth Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetHealth_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetHealth_L_Nfloat_R");

	Params::Characters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetHealth_L_Nfloat_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetMaxHealth_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetMaxHealth_L_Nfloat_R");

	Params::Characters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetMaxHealth_L_Nfloat_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FSpatialMath_transform UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform");

	Params::Characters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UObject* UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RDamagedShieldEvent(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RDamagedShieldEvent");

	Params::Characters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RDamagedShieldEvent Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

double UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetMaxShield(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetMaxShield");

	Params::Characters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetMaxShield Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

double UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetShield(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetShield");

	Params::Characters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetShield Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UObject* UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RHealedShieldEvent(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RHealedShieldEvent");

	Params::Characters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RHealedShieldEvent Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetMaxShield_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetMaxShield_L_Nfloat_R");

	Params::Characters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetMaxShield_L_Nfloat_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetShield_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetShield_L_Nfloat_R");

	Params::Characters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetShield_L_Nfloat_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

FOptionProperty_ UCharacters::_L_2fFortnite_2ecom_2fCharacters_N_Roperator_U_2eGetFortCharacter_U_L_Nagent_M_Ntuple_L_R_R(const struct VerseFortnite_0::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Characters", "_L_2fFortnite_2ecom_2fCharacters_N_Roperator_U_2eGetFortCharacter_U_L_Nagent_M_Ntuple_L_R_R");

	Params::Characters__L_2fFortnite_2ecom_2fCharacters_N_Roperator_U_2eGetFortCharacter_U_L_Nagent_M_Ntuple_L_R_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UObject* UCharacters::_L_2fFortnite_2ecom_2fCharacters_N_Roperator_U_2eGetInstigator_U_L_Nagent_M_Ntuple_L_R_R(const struct VerseFortnite_0::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Characters", "_L_2fFortnite_2ecom_2fCharacters_N_Roperator_U_2eGetInstigator_U_L_Nagent_M_Ntuple_L_R_R");

	Params::Characters__L_2fFortnite_2ecom_2fCharacters_N_Roperator_U_2eGetInstigator_U_L_Nagent_M_Ntuple_L_R_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UCharacters::_L_2fFortnite_2ecom_2fCharacters_N_Roperator_U_2eGetInstigatorAgent_U_L_Ngame__action__instigator_M_Ntuple_L_R_R(const struct Ftuple_Lgame__action__instigator_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Characters", "_L_2fFortnite_2ecom_2fCharacters_N_Roperator_U_2eGetInstigatorAgent_U_L_Ngame__action__instigator_M_Ntuple_L_R_R");

	Params::Characters__L_2fFortnite_2ecom_2fCharacters_N_Roperator_U_2eGetInstigatorAgent_U_L_Ngame__action__instigator_M_Ntuple_L_R_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FCharacters_character_action_result UCharacters::Characters_character_action_result_Factory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Characters", "Characters_character_action_result$Factory");

	Params::Characters_Characters_character_action_result_Factory Parms{};

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FCharacters_stasis_args UCharacters::Characters_stasis_args_Factory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Characters", "Characters_stasis_args$Factory");

	Params::Characters_Characters_stasis_args_Factory Parms{};

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UCharacters::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

class UObject* UCharacters_fort_character::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RCrouchedEvent(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RCrouchedEvent");

	Params::Characters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RCrouchedEvent Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

class UObject* UCharacters_fort_character::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_REliminatedEvent(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_REliminatedEvent");

	Params::Characters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_REliminatedEvent Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

FOptionProperty_ UCharacters_fort_character::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetAgent(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetAgent");

	Params::Characters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetAgent Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FVerseRotation UCharacters_fort_character::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetViewRotation(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetViewRotation");

	Params::Characters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetViewRotation Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UCharacters_fort_character::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RHide(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RHide");

	Params::Characters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RHide Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);
}

FOptionProperty_ UCharacters_fort_character::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsActive(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsActive");

	Params::Characters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsActive Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

FOptionProperty_ UCharacters_fort_character::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsDownButNotOut(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsDownButNotOut");

	Params::Characters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsDownButNotOut Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

FOptionProperty_ UCharacters_fort_character::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsVulnerable(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsVulnerable");

	Params::Characters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsVulnerable Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

class UObject* UCharacters_fort_character::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RJumpedEvent(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RJumpedEvent");

	Params::Characters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RJumpedEvent Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UCharacters_fort_character::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RPutInStasis_L_Nstasis__args_R(const struct FCharacters_stasis_args& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RPutInStasis_L_Nstasis__args_R");

	Params::Characters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RPutInStasis_L_Nstasis__args_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);
}

void UCharacters_fort_character::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RReleaseFromStasis(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RReleaseFromStasis");

	Params::Characters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RReleaseFromStasis Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);
}

void UCharacters_fort_character::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSetVulnerability_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSetVulnerability_L_Nlogic_R");

	Params::Characters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSetVulnerability_L_Nlogic_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);
}

void UCharacters_fort_character::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RShow(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RShow");

	Params::Characters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RShow Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);
}

class UObject* UCharacters_fort_character::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSprintedEvent(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Characters_fort_character", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSprintedEvent");

	Params::Characters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSprintedEvent Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UGame_agent_instigator_impl::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_agent_instigator_impl", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_agent_instigator_impl::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_agent_instigator_impl", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_agent_instigator_impl::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_agent_instigator_impl", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

TArray<class USimulation_player*> UFortPlayerUtilities::_L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eGetPlayersSpectating_U_L_Nplayer_M_Ntuple_L_R_R(const struct Ftuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortPlayerUtilities", "_L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eGetPlayersSpectating_U_L_Nplayer_M_Ntuple_L_R_R");

	Params::FortPlayerUtilities__L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eGetPlayersSpectating_U_L_Nplayer_M_Ntuple_L_R_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UFortPlayerUtilities::_L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eIsSpectator_U_L_Nplayer_M_Ntuple_L_R_R(const struct Ftuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortPlayerUtilities", "_L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eIsSpectator_U_L_Nplayer_M_Ntuple_L_R_R");

	Params::FortPlayerUtilities__L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eIsSpectator_U_L_Nplayer_M_Ntuple_L_R_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortPlayerUtilities::_L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eRespawn_U_L_Nagent_M_Ntuple_L_R_M_Nvector3_M_Nrotation_R(const struct Ftuple_Lagent_Mtuple_L_R_Mtuple_Lvector3_Mrotation_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortPlayerUtilities", "_L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eRespawn_U_L_Nagent_M_Ntuple_L_R_M_Nvector3_M_Nrotation_R");

	Params::FortPlayerUtilities__L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eRespawn_U_L_Nagent_M_Ntuple_L_R_M_Nvector3_M_Nrotation_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerUtilities::_L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSendToLobby_U_L_Nplayer_M_Ntuple_L_R_R(const struct Ftuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortPlayerUtilities", "_L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSendToLobby_U_L_Nplayer_M_Ntuple_L_R_R");

	Params::FortPlayerUtilities__L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSendToLobby_U_L_Nplayer_M_Ntuple_L_R_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

FOptionProperty_ UFortPlayerUtilities::_L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSetSpectator_U_L_Nplayer_M_Ntuple_L_R_R(const struct Ftuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortPlayerUtilities", "_L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSetSpectator_U_L_Nplayer_M_Ntuple_L_R_R");

	Params::FortPlayerUtilities__L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSetSpectator_U_L_Nplayer_M_Ntuple_L_R_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UFortPlayerUtilities::_L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSpectateEliminator_U_L_Nplayer_M_Ntuple_L_R_R(const struct Ftuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortPlayerUtilities", "_L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSpectateEliminator_U_L_Nplayer_M_Ntuple_L_R_R");

	Params::FortPlayerUtilities__L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSpectateEliminator_U_L_Nplayer_M_Ntuple_L_R_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UFortPlayerUtilities::_L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSpectatePlayer_U_L_Nplayer_M_Ntuple_L_R_M_Nplayer_R(const struct Ftuple_Lplayer_Mtuple_L_R_Mplayer_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortPlayerUtilities", "_L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSpectatePlayer_U_L_Nplayer_M_Ntuple_L_R_M_Nplayer_R");

	Params::FortPlayerUtilities__L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSpectatePlayer_U_L_Nplayer_M_Ntuple_L_R_M_Nplayer_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortPlayerUtilities::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerUtilities", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

struct FGame_damage_args UGame::Game_damage_args_Factory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game", "Game_damage_args$Factory");

	Params::Game_Game_damage_args_Factory Parms{};

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FGame_damage_result UGame::Game_damage_result_Factory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game", "Game_damage_result$Factory");

	Params::Game_Game_damage_result_Factory Parms{};

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FGame_elimination_result UGame::Game_elimination_result_Factory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game", "Game_elimination_result$Factory");

	Params::Game_Game_elimination_result_Factory Parms{};

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FGame_healing_args UGame::Game_healing_args_Factory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game", "Game_healing_args$Factory");

	Params::Game_Game_healing_args_Factory Parms{};

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FGame_healing_result UGame::Game_healing_result_Factory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Game", "Game_healing_result$Factory");

	Params::Game_Game_healing_result_Factory Parms{};

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UGame::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UGame_damageable::_L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Ndamage__args_R(const struct FGame_damage_args& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_damageable", "_L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Ndamage__args_R");

	Params::Game_damageable__L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Ndamage__args_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);
}

void UGame_damageable::_L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_damageable", "_L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Nfloat_R");

	Params::Game_damageable__L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Nfloat_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);
}

class UObject* UGame_damageable::_L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamagedEvent(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_damageable", "_L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamagedEvent");

	Params::Game_damageable__L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamagedEvent Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UGame_healable::_L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_healable", "_L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nfloat_R");

	Params::Game_healable__L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nfloat_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);
}

void UGame_healable::_L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nhealing__args_R(const struct FGame_healing_args& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_healable", "_L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nhealing__args_R");

	Params::Game_healable__L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nhealing__args_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);
}

class UObject* UGame_healable::_L_2fFortnite_2ecom_2fGame_2fhealable_N_RHealedEvent(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_healable", "_L_2fFortnite_2ecom_2fGame_2fhealable_N_RHealedEvent");

	Params::Game_healable__L_2fFortnite_2ecom_2fGame_2fhealable_N_RHealedEvent Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

double UGame_healthful::_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetHealth(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_healthful", "_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetHealth");

	Params::Game_healthful__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetHealth Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

double UGame_healthful::_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetMaxHealth(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_healthful", "_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetMaxHealth");

	Params::Game_healthful__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetMaxHealth Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UGame_healthful::_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetHealth_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_healthful", "_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetHealth_L_Nfloat_R");

	Params::Game_healthful__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetHealth_L_Nfloat_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);
}

void UGame_healthful::_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetMaxHealth_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_healthful", "_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetMaxHealth_L_Nfloat_R");

	Params::Game_healthful__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetMaxHealth_L_Nfloat_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);
}

struct FSpatialMath_transform UGame_positional::_L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_positional", "_L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform");

	Params::Game_positional__L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

class UObject* UGame_shieldable::_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RDamagedShieldEvent(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_shieldable", "_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RDamagedShieldEvent");

	Params::Game_shieldable__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RDamagedShieldEvent Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

double UGame_shieldable::_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetMaxShield(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_shieldable", "_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetMaxShield");

	Params::Game_shieldable__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetMaxShield Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

double UGame_shieldable::_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetShield(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_shieldable", "_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetShield");

	Params::Game_shieldable__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetShield Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

class UObject* UGame_shieldable::_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RHealedShieldEvent(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_shieldable", "_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RHealedShieldEvent");

	Params::Game_shieldable__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RHealedShieldEvent Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UGame_shieldable::_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetMaxShield_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_shieldable", "_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetMaxShield_L_Nfloat_R");

	Params::Game_shieldable__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetMaxShield_L_Nfloat_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);
}

void UGame_shieldable::_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetShield_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Game_shieldable", "_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetShield_L_Nfloat_R");

	Params::Game_shieldable__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetShield_L_Nfloat_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);
}

TArray<class USimulation_player*> UPlayspaces_fort_playspace::_L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetPlayers(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Playspaces_fort_playspace", "_L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetPlayers");

	Params::Playspaces_fort_playspace__L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetPlayers Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

class UObject* UPlayspaces_fort_playspace::_L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetTeamCollection(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Playspaces_fort_playspace", "_L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetTeamCollection");

	Params::Playspaces_fort_playspace__L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetTeamCollection Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

class UObject* UPlayspaces_fort_playspace::_L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerAddedEvent(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Playspaces_fort_playspace", "_L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerAddedEvent");

	Params::Playspaces_fort_playspace__L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerAddedEvent Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

class UObject* UPlayspaces_fort_playspace::_L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerRemovedEvent(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Playspaces_fort_playspace", "_L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerRemovedEvent");

	Params::Playspaces_fort_playspace__L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerRemovedEvent Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UPlayspaces_fort_playspace_impl::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Playspaces_fort_playspace_impl", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UPlayspaces_fort_playspace_impl::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Playspaces_fort_playspace_impl", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UPlayspaces_fort_playspace_impl::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Playspaces_fort_playspace_impl", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

TArray<class USimulation_player*> UPlayspaces_fort_playspace_impl::_L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetPlayers(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Playspaces_fort_playspace_impl", "_L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetPlayers");

	Params::Playspaces_fort_playspace_impl__L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetPlayers Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UObject* UPlayspaces_fort_playspace_impl::_L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetTeamCollection(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Playspaces_fort_playspace_impl", "_L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetTeamCollection");

	Params::Playspaces_fort_playspace_impl__L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetTeamCollection Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UObject* UPlayspaces_fort_playspace_impl::_L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerAddedEvent(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Playspaces_fort_playspace_impl", "_L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerAddedEvent");

	Params::Playspaces_fort_playspace_impl__L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerAddedEvent Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

class UObject* UPlayspaces_fort_playspace_impl::_L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerRemovedEvent(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Playspaces_fort_playspace_impl", "_L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerRemovedEvent");

	Params::Playspaces_fort_playspace_impl__L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerRemovedEvent Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UTeams_fort_br_team_collection::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Teams_fort_br_team_collection", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UTeams_fort_br_team_collection::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Teams_fort_br_team_collection", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UTeams_fort_br_team_collection::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Teams_fort_br_team_collection", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

FOptionProperty_ UTeams_fort_br_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RAddToTeam_L_Nagent_M_Nteam_R(const struct Ftuple_Lagent_Mteam_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Teams_fort_br_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RAddToTeam_L_Nagent_M_Nteam_R");

	Params::Teams_fort_br_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RAddToTeam_L_Nagent_M_Nteam_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UTeams_fort_br_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetAgents_L_Nteam_R(class USimulation_team* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Teams_fort_br_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetAgents_L_Nteam_R");

	Params::Teams_fort_br_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetAgents_L_Nteam_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UTeams_fort_br_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeam_L_Nagent_R(class USimulation_agent* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Teams_fort_br_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeam_L_Nagent_R");

	Params::Teams_fort_br_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeam_L_Nagent_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UTeams_fort_br_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nagent_M_Nagent_R(const struct Ftuple_Lagent_Magent_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Teams_fort_br_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nagent_M_Nagent_R");

	Params::Teams_fort_br_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nagent_M_Nagent_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UTeams_fort_br_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nteam_M_Nteam_R(const struct Ftuple_Lteam_Mteam_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Teams_fort_br_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nteam_M_Nteam_R");

	Params::Teams_fort_br_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nteam_M_Nteam_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class USimulation_team*> UTeams_fort_br_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeams(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Teams_fort_br_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeams");

	Params::Teams_fort_br_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeams Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UTeams_fort_br_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RIsOnTeam_L_Nagent_M_Nteam_R(const struct Ftuple_Lagent_Mteam_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Teams_fort_br_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RIsOnTeam_L_Nagent_M_Nteam_R");

	Params::Teams_fort_br_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RIsOnTeam_L_Nagent_M_Nteam_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UTeams_fort_minigame_team_collection::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Teams_fort_minigame_team_collection", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UTeams_fort_minigame_team_collection::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Teams_fort_minigame_team_collection", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UTeams_fort_minigame_team_collection::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Teams_fort_minigame_team_collection", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

FOptionProperty_ UTeams_fort_minigame_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RAddToTeam_L_Nagent_M_Nteam_R(const struct Ftuple_Lagent_Mteam_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Teams_fort_minigame_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RAddToTeam_L_Nagent_M_Nteam_R");

	Params::Teams_fort_minigame_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RAddToTeam_L_Nagent_M_Nteam_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UTeams_fort_minigame_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetAgents_L_Nteam_R(class USimulation_team* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Teams_fort_minigame_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetAgents_L_Nteam_R");

	Params::Teams_fort_minigame_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetAgents_L_Nteam_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UTeams_fort_minigame_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeam_L_Nagent_R(class USimulation_agent* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Teams_fort_minigame_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeam_L_Nagent_R");

	Params::Teams_fort_minigame_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeam_L_Nagent_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UTeams_fort_minigame_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nagent_M_Nagent_R(const struct Ftuple_Lagent_Magent_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Teams_fort_minigame_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nagent_M_Nagent_R");

	Params::Teams_fort_minigame_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nagent_M_Nagent_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UTeams_fort_minigame_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nteam_M_Nteam_R(const struct Ftuple_Lteam_Mteam_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Teams_fort_minigame_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nteam_M_Nteam_R");

	Params::Teams_fort_minigame_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nteam_M_Nteam_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class USimulation_team*> UTeams_fort_minigame_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeams(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Teams_fort_minigame_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeams");

	Params::Teams_fort_minigame_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeams Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UTeams_fort_minigame_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RIsOnTeam_L_Nagent_M_Nteam_R(const struct Ftuple_Lagent_Mteam_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Teams_fort_minigame_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RIsOnTeam_L_Nagent_M_Nteam_R");

	Params::Teams_fort_minigame_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RIsOnTeam_L_Nagent_M_Nteam_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UTeams_fort_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RAddToTeam_L_Nagent_M_Nteam_R(const struct Ftuple_Lagent_Mteam_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Teams_fort_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RAddToTeam_L_Nagent_M_Nteam_R");

	Params::Teams_fort_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RAddToTeam_L_Nagent_M_Nteam_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

FOptionProperty_ UTeams_fort_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetAgents_L_Nteam_R(class USimulation_team* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Teams_fort_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetAgents_L_Nteam_R");

	Params::Teams_fort_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetAgents_L_Nteam_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

FOptionProperty_ UTeams_fort_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeam_L_Nagent_R(class USimulation_agent* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Teams_fort_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeam_L_Nagent_R");

	Params::Teams_fort_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeam_L_Nagent_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

FOptionProperty_ UTeams_fort_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nagent_M_Nagent_R(const struct Ftuple_Lagent_Magent_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Teams_fort_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nagent_M_Nagent_R");

	Params::Teams_fort_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nagent_M_Nagent_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

FOptionProperty_ UTeams_fort_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nteam_M_Nteam_R(const struct Ftuple_Lteam_Mteam_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Teams_fort_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nteam_M_Nteam_R");

	Params::Teams_fort_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nteam_M_Nteam_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

TArray<class USimulation_team*> UTeams_fort_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeams(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Teams_fort_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeams");

	Params::Teams_fort_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeams Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

FOptionProperty_ UTeams_fort_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RIsOnTeam_L_Nagent_M_Nteam_R(const struct Ftuple_Lagent_Mteam_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Teams_fort_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RIsOnTeam_L_Nagent_M_Nteam_R");

	Params::Teams_fort_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RIsOnTeam_L_Nagent_M_Nteam_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

FOptionProperty_ UVehicles::_L_2fFortnite_2ecom_2fVehicles_N_Roperator_U_2eGetVehicle_U_L_Nfort__character_M_Ntuple_L_R_R(const struct VerseFortnite_0::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("Vehicles", "_L_2fFortnite_2ecom_2fVehicles_N_Roperator_U_2eGetVehicle_U_L_Nfort__character_M_Ntuple_L_R_R");

	Params::Vehicles__L_2fFortnite_2ecom_2fVehicles_N_Roperator_U_2eGetVehicle_U_L_Nfort__character_M_Ntuple_L_R_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UVehicles::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Vehicles", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UVehicles_fort_vehicle_impl::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Vehicles_fort_vehicle_impl", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UVehicles_fort_vehicle_impl::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Vehicles_fort_vehicle_impl", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UVehicles_fort_vehicle_impl::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Vehicles_fort_vehicle_impl", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

void UVehicles_fort_vehicle_impl::_L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Ndamage__args_R(const struct FGame_damage_args& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Vehicles_fort_vehicle_impl", "_L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Ndamage__args_R");

	Params::Vehicles_fort_vehicle_impl__L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Ndamage__args_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVehicles_fort_vehicle_impl::_L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Vehicles_fort_vehicle_impl", "_L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Nfloat_R");

	Params::Vehicles_fort_vehicle_impl__L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Nfloat_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UObject* UVehicles_fort_vehicle_impl::_L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamagedEvent(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Vehicles_fort_vehicle_impl", "_L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamagedEvent");

	Params::Vehicles_fort_vehicle_impl__L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamagedEvent Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

double UVehicles_fort_vehicle_impl::_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetHealth(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Vehicles_fort_vehicle_impl", "_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetHealth");

	Params::Vehicles_fort_vehicle_impl__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetHealth Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

double UVehicles_fort_vehicle_impl::_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetMaxHealth(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Vehicles_fort_vehicle_impl", "_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetMaxHealth");

	Params::Vehicles_fort_vehicle_impl__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetMaxHealth Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UVehicles_fort_vehicle_impl::_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetHealth_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Vehicles_fort_vehicle_impl", "_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetHealth_L_Nfloat_R");

	Params::Vehicles_fort_vehicle_impl__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetHealth_L_Nfloat_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVehicles_fort_vehicle_impl::_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetMaxHealth_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Vehicles_fort_vehicle_impl", "_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetMaxHealth_L_Nfloat_R");

	Params::Vehicles_fort_vehicle_impl__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetMaxHealth_L_Nfloat_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FSpatialMath_transform UVehicles_fort_vehicle_impl::_L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform(const struct VerseFortnite_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Vehicles_fort_vehicle_impl", "_L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform");

	Params::Vehicles_fort_vehicle_impl__L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
