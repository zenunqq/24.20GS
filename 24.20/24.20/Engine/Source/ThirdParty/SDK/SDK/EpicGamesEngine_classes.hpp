#pragma once

#include "Basic.hpp"

#include "EpicGamesEngine_structs.hpp"
#include "EntityActor_classes.hpp"
#include "Engine_structs.hpp"

namespace SDK
{

class UVerseUEInputComponentBase : public UEntityActorPlayerComponent
{
public:
	class UInputComponent*                        InputComponent;
	struct FVerseActionMappingArray               ReplicatedActionMappingArray;
	struct FVerseAxisMappingArray                 ReplicatedAxisMappingArray;
	struct FVerseInputBindingArray                ReplicatedInputBindingArray;
	uint8                                         Pad_450[0x8];

public:
	void ServerTriggerAction(const class FName& ActionName, EInputEvent InputEvent);
	void ServerTriggerAxis(const class FName& AxisName, float Value);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseUEInputComponentBase">();
	}
	static class UVerseUEInputComponentBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseUEInputComponentBase>();
	}
};
static_assert(alignof(UVerseUEInputComponentBase) == 0x000008, "Wrong alignment on UVerseUEInputComponentBase");
static_assert(sizeof(UVerseUEInputComponentBase) == 0x000458, "Wrong size on UVerseUEInputComponentBase");
static_assert(offsetof(UVerseUEInputComponentBase, InputComponent) == 0x0000E8, "Member 'UVerseUEInputComponentBase::InputComponent' has a wrong offset!");
static_assert(offsetof(UVerseUEInputComponentBase, ReplicatedActionMappingArray) == 0x0000F0, "Member 'UVerseUEInputComponentBase::ReplicatedActionMappingArray' has a wrong offset!");
static_assert(offsetof(UVerseUEInputComponentBase, ReplicatedAxisMappingArray) == 0x000210, "Member 'UVerseUEInputComponentBase::ReplicatedAxisMappingArray' has a wrong offset!");
static_assert(offsetof(UVerseUEInputComponentBase, ReplicatedInputBindingArray) == 0x000330, "Member 'UVerseUEInputComponentBase::ReplicatedInputBindingArray' has a wrong offset!");

}
