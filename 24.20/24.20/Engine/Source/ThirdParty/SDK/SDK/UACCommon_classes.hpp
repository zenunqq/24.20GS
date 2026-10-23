#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class UUACNetworkComponent final : public UActorComponent
{
public:
	int32                                         PlayerId;
	uint8                                         Pad_A4[0x17C];

public:
	void SendClientHello(uint32 SessionKey);
	void SendPacketToClient(uint8 EnhPacketType, const TArray<uint8>& Data);
	void SendPacketToServer(uint8 EnhPacketType, const TArray<uint8>& Data);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UACNetworkComponent">();
	}
	static class UUACNetworkComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUACNetworkComponent>();
	}
};
static_assert(alignof(UUACNetworkComponent) == 0x000008, "Wrong alignment on UUACNetworkComponent");
static_assert(sizeof(UUACNetworkComponent) == 0x000220, "Wrong size on UUACNetworkComponent");
static_assert(offsetof(UUACNetworkComponent, PlayerId) == 0x0000A0, "Member 'UUACNetworkComponent::PlayerId' has a wrong offset!");

}
