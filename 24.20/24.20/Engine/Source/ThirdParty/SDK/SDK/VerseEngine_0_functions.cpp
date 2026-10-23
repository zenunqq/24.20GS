#pragma once

#include "Basic.hpp"

#include "VerseEngine_0_classes.hpp"
#include "VerseEngine_0_parameters.hpp"

namespace SDK
{

void UVerseEngine_multicast_delegate_subscription::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseEngine_multicast_delegate_subscription", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UVerseEngine_multicast_delegate_subscription::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseEngine_multicast_delegate_subscription", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UVerseEngine_multicast_delegate_subscription::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseEngine_multicast_delegate_subscription", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

void UVerseEngine_multicast_delegate_subscription::_L_2fVerse_2eorg_2fVerse_2fcancelable_N_RCancel(const struct VerseEngine_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseEngine_multicast_delegate_subscription", "_L_2fVerse_2eorg_2fVerse_2fcancelable_N_RCancel");

	Params::VerseEngine_multicast_delegate_subscription__L_2fVerse_2eorg_2fVerse_2fcancelable_N_RCancel Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

uint8 UVerseEngine_Entity_EntityHelpers::_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RDestroyObject_L_Ncomponent_R(class UEntityComponent* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseEngine_Entity_EntityHelpers", "_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RDestroyObject_L_Ncomponent_R");

	Params::VerseEngine_Entity_EntityHelpers__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RDestroyObject_L_Ncomponent_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UVerseEngine_Entity_EntityHelpers::_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RGetComponentOfTypeC_L_Ncomponent_M_Nany_R(const struct VerseEngine_0::Ftuple_Lcomponent_Many_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseEngine_Entity_EntityHelpers", "_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RGetComponentOfTypeC_L_Ncomponent_M_Nany_R");

	Params::VerseEngine_Entity_EntityHelpers__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RGetComponentOfTypeC_L_Ncomponent_M_Nany_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UVerseEngine_Entity_EntityHelpers::_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RGetEntityFromComponent_L_Ncomponent_R(class UEntityComponent* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseEngine_Entity_EntityHelpers", "_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RGetEntityFromComponent_L_Ncomponent_R");

	Params::VerseEngine_Entity_EntityHelpers__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RGetEntityFromComponent_L_Ncomponent_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UVerseEngine_Entity_EntityHelpers::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseEngine_Entity_EntityHelpers", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UVerseEngine_multicast_delegate_base::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseEngine_multicast_delegate_base", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UVerseEngine_multicast_delegate_base::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseEngine_multicast_delegate_base", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UVerseEngine_multicast_delegate_base::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseEngine_multicast_delegate_base", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

void UVerseEngine_multicast_delegate::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseEngine_multicast_delegate", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UVerseEngine_multicast_delegate::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseEngine_multicast_delegate", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UVerseEngine_multicast_delegate::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseEngine_multicast_delegate", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

class UObject* UVerseEngine_multicast_delegate::_L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R(FVerseFunctionProperty_ __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseEngine_multicast_delegate", "_L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R");

	Params::VerseEngine_multicast_delegate__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UVerseEngine_multicast_delegate::_L_2fVerse_2eorg_2fVerseEngine_2fmulticast__delegate_2fmulticast__delegate_Lt_R_N_RBroadcast_L_Nt_R(FVerseDynamicProperty_ __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseEngine_multicast_delegate", "_L_2fVerse_2eorg_2fVerseEngine_2fmulticast__delegate_2fmulticast__delegate_Lt_R_N_RBroadcast_L_Nt_R");

	Params::VerseEngine_multicast_delegate__L_2fVerse_2eorg_2fVerseEngine_2fmulticast__delegate_2fmulticast__delegate_Lt_R_N_RBroadcast_L_Nt_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVerseEngine_multicast_delegate::_L_2fVerse_2eorg_2fVerseEngine_2fmulticast__delegate_2fmulticast__delegate_Lt_R_N_REmpty(const struct VerseEngine_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseEngine_multicast_delegate", "_L_2fVerse_2eorg_2fVerseEngine_2fmulticast__delegate_2fmulticast__delegate_Lt_R_N_REmpty");

	Params::VerseEngine_multicast_delegate__L_2fVerse_2eorg_2fVerseEngine_2fmulticast__delegate_2fmulticast__delegate_Lt_R_N_REmpty Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVerseEngine_Entity_entity::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseEngine_Entity_entity", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UVerseEngine_Entity_entity::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseEngine_Entity_entity", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UVerseEngine_Entity_entity::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseEngine_Entity_entity", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

FOptionProperty_ UVerseEngine_Entity_entity::_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RAddComponent_L_Nany_R(class UClass* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseEngine_Entity_entity", "_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RAddComponent_L_Nany_R");

	Params::VerseEngine_Entity_entity__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RAddComponent_L_Nany_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

uint8 UVerseEngine_Entity_entity::_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RDestroy(const struct VerseEngine_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseEngine_Entity_entity", "_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RDestroy");

	Params::VerseEngine_Entity_entity__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RDestroy Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UVerseEngine_Entity_entity::_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_REnsureComponents_L_N_Ktype_Lany_M_20component_R_R(const TArray<class UClass*>& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseEngine_Entity_entity", "_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_REnsureComponents_L_N_Ktype_Lany_M_20component_R_R");

	Params::VerseEngine_Entity_entity__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_REnsureComponents_L_N_Ktype_Lany_M_20component_R_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);
}

TArray<class UEntityComponent*> UVerseEngine_Entity_entity::_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetAllComponentsOfType_L_Nany_R(class UClass* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseEngine_Entity_entity", "_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetAllComponentsOfType_L_Nany_R");

	Params::VerseEngine_Entity_entity__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetAllComponentsOfType_L_Nany_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UVerseEngine_Entity_entity::_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetComponentOfType_L_Nany_R(class UClass* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseEngine_Entity_entity", "_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetComponentOfType_L_Nany_R");

	Params::VerseEngine_Entity_entity__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetComponentOfType_L_Nany_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FVerseStringProperty_ UVerseEngine_Entity_entity::_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetFullname(const struct VerseEngine_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseEngine_Entity_entity", "_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetFullname");

	Params::VerseEngine_Entity_entity__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetFullname Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FVerseStringProperty_ UVerseEngine_Entity_entity::_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetName(const struct VerseEngine_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseEngine_Entity_entity", "_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetName");

	Params::VerseEngine_Entity_entity__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetName Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UVerseEngine_Entity_entity::_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetOrCreateComponentOfType_L_Nany_R(class UClass* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseEngine_Entity_entity", "_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetOrCreateComponentOfType_L_Nany_R");

	Params::VerseEngine_Entity_entity__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetOrCreateComponentOfType_L_Nany_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

FOptionProperty_ UVerseEngine_Entity_entity::_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RHasComponents_L_N_Ktype_Lany_M_20component_R_R(const TArray<class UClass*>& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseEngine_Entity_entity", "_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RHasComponents_L_N_Ktype_Lany_M_20component_R_R");

	Params::VerseEngine_Entity_entity__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RHasComponents_L_N_Ktype_Lany_M_20component_R_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

uint8 UVerseEngine_Entity_entity::_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RIsEqual_L_Nentity_R(class UVerseEngine_Entity_entity* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseEngine_Entity_entity", "_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RIsEqual_L_Nentity_R");

	Params::VerseEngine_Entity_entity__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RIsEqual_L_Nentity_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

uint8 UVerseEngine_Entity_entity::_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RRemoveComponent_L_Ncomponent_R(class UEntityComponent* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseEngine_Entity_entity", "_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RRemoveComponent_L_Ncomponent_R");

	Params::VerseEngine_Entity_entity__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RRemoveComponent_L_Ncomponent_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int64 Utask_VerseEngine_subscribable_event_Await::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("task_VerseEngine_subscribable_event$Await", "Update");

	Params::task_VerseEngine_subscribable_event_Await_Update Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UClass* UVerseEngine::_L_2fVerse_2eorg_2fVerseEngine_N_Rmulticast__delegate(const struct VerseEngine_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseEngine", "_L_2fVerse_2eorg_2fVerseEngine_N_Rmulticast__delegate");

	Params::VerseEngine__L_2fVerse_2eorg_2fVerseEngine_N_Rmulticast__delegate Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

class UClass* UVerseEngine::_L_2fVerse_2eorg_2fVerseEngine_N_Rmulticast__delegate_L_Nany_R(class UClass* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseEngine", "_L_2fVerse_2eorg_2fVerseEngine_N_Rmulticast__delegate_L_Nany_R");

	Params::VerseEngine__L_2fVerse_2eorg_2fVerseEngine_N_Rmulticast__delegate_L_Nany_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

class UClass* UVerseEngine::_L_2fVerse_2eorg_2fVerseEngine_N_Rsubscribable__event(const struct VerseEngine_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseEngine", "_L_2fVerse_2eorg_2fVerseEngine_N_Rsubscribable__event");

	Params::VerseEngine__L_2fVerse_2eorg_2fVerseEngine_N_Rsubscribable__event Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

class UClass* UVerseEngine::_L_2fVerse_2eorg_2fVerseEngine_N_Rsubscribable__event_L_Nany_R(class UClass* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VerseEngine", "_L_2fVerse_2eorg_2fVerseEngine_N_Rsubscribable__event_L_Nany_R");

	Params::VerseEngine__L_2fVerse_2eorg_2fVerseEngine_N_Rsubscribable__event_L_Nany_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UVerseEngine::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseEngine", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UVerseEngine_subscribable_event::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseEngine_subscribable_event", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UVerseEngine_subscribable_event::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseEngine_subscribable_event", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UVerseEngine_subscribable_event::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseEngine_subscribable_event", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

class UConcurrency_task* UVerseEngine_subscribable_event::Await(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct VerseEngine_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseEngine_subscribable_event", "Await");

	Params::VerseEngine_subscribable_event_Await Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
