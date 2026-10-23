#pragma once

#include "Basic.hpp"

#include "VerseAIBase_classes.hpp"
#include "FortniteAI_structs.hpp"

namespace SDK
{

class UPingComponentBase : public UAIComponent
{
public:
	uint8                                         Pad_98[0x10];
	class UFortPawnComponent_AIBotPingCommand*    CachedAIBotPingCommand;

public:
	void HandleOnNPCConvertedEvent(class AFortPawn* InstigatorPawn, class AFortPawn* ConvertedPawn);
	void HandleOnNPCUnconvertedEvent(class AFortPawn* UnconvertedFortPawn, EUnconvertReason UnconvertReason);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PingComponentBase">();
	}
	static class UPingComponentBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPingComponentBase>();
	}
};
static_assert(alignof(UPingComponentBase) == 0x000008, "Wrong alignment on UPingComponentBase");
static_assert(sizeof(UPingComponentBase) == 0x0000B0, "Wrong size on UPingComponentBase");
static_assert(offsetof(UPingComponentBase, CachedAIBotPingCommand) == 0x0000A8, "Member 'UPingComponentBase::CachedAIBotPingCommand' has a wrong offset!");

}
