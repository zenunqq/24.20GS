#pragma once

#include "Basic.hpp"

#include "UdpMessaging_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class UUdpMessagingSettings final : public UObject
{
public:
	bool                                          EnabledByDefault;
	bool                                          EnableTransport;
	bool                                          bAutoRepair;
	uint8                                         Pad_2B[0x1];
	float                                         MaxSendRate;
	uint32                                        AutoRepairAttemptLimit;
	uint16                                        WorkQueueSize;
	bool                                          bStopServiceWhenAppDeactivates;
	uint8                                         Pad_37[0x1];
	class FString                                 UnicastEndpoint;
	class FString                                 MulticastEndpoint;
	EUdpMessageFormat                             MessageFormat;
	uint8                                         MulticastTimeToLive;
	uint8                                         Pad_5A[0x6];
	TArray<class FString>                         StaticEndpoints;
	TArray<class FString>                         ExcludedEndpoints;
	bool                                          EnableTunnel;
	uint8                                         Pad_81[0x7];
	class FString                                 TunnelUnicastEndpoint;
	class FString                                 TunnelMulticastEndpoint;
	TArray<class FString>                         RemoteTunnelEndpoints;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UdpMessagingSettings">();
	}
	static class UUdpMessagingSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUdpMessagingSettings>();
	}
};
static_assert(alignof(UUdpMessagingSettings) == 0x000008, "Wrong alignment on UUdpMessagingSettings");
static_assert(sizeof(UUdpMessagingSettings) == 0x0000B8, "Wrong size on UUdpMessagingSettings");
static_assert(offsetof(UUdpMessagingSettings, EnabledByDefault) == 0x000028, "Member 'UUdpMessagingSettings::EnabledByDefault' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, EnableTransport) == 0x000029, "Member 'UUdpMessagingSettings::EnableTransport' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, bAutoRepair) == 0x00002A, "Member 'UUdpMessagingSettings::bAutoRepair' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, MaxSendRate) == 0x00002C, "Member 'UUdpMessagingSettings::MaxSendRate' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, AutoRepairAttemptLimit) == 0x000030, "Member 'UUdpMessagingSettings::AutoRepairAttemptLimit' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, WorkQueueSize) == 0x000034, "Member 'UUdpMessagingSettings::WorkQueueSize' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, bStopServiceWhenAppDeactivates) == 0x000036, "Member 'UUdpMessagingSettings::bStopServiceWhenAppDeactivates' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, UnicastEndpoint) == 0x000038, "Member 'UUdpMessagingSettings::UnicastEndpoint' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, MulticastEndpoint) == 0x000048, "Member 'UUdpMessagingSettings::MulticastEndpoint' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, MessageFormat) == 0x000058, "Member 'UUdpMessagingSettings::MessageFormat' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, MulticastTimeToLive) == 0x000059, "Member 'UUdpMessagingSettings::MulticastTimeToLive' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, StaticEndpoints) == 0x000060, "Member 'UUdpMessagingSettings::StaticEndpoints' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, ExcludedEndpoints) == 0x000070, "Member 'UUdpMessagingSettings::ExcludedEndpoints' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, EnableTunnel) == 0x000080, "Member 'UUdpMessagingSettings::EnableTunnel' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, TunnelUnicastEndpoint) == 0x000088, "Member 'UUdpMessagingSettings::TunnelUnicastEndpoint' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, TunnelMulticastEndpoint) == 0x000098, "Member 'UUdpMessagingSettings::TunnelMulticastEndpoint' has a wrong offset!");
static_assert(offsetof(UUdpMessagingSettings, RemoteTunnelEndpoints) == 0x0000A8, "Member 'UUdpMessagingSettings::RemoteTunnelEndpoints' has a wrong offset!");

}
