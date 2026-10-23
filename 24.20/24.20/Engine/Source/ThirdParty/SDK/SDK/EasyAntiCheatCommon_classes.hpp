#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class UEasyAntiCheatNetComponent final : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x8];

public:
	void ClientMessage(const TArray<uint8>& message);
	void ServerMessage(const TArray<uint8>& message);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EasyAntiCheatNetComponent">();
	}
	static class UEasyAntiCheatNetComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEasyAntiCheatNetComponent>();
	}
};
static_assert(alignof(UEasyAntiCheatNetComponent) == 0x000008, "Wrong alignment on UEasyAntiCheatNetComponent");
static_assert(sizeof(UEasyAntiCheatNetComponent) == 0x0000A8, "Wrong size on UEasyAntiCheatNetComponent");

}
