#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"

namespace SDK
{

enum class EGameplayMessageMatchType : uint8
{
	ExactMatch                               = 0,
	PartialMatch                             = 1,
	EGameplayMessageMatchType_MAX            = 2,
};

struct FEventMessageTag final : public FGameplayTag
{
};
static_assert(alignof(FEventMessageTag) == 0x000004, "Wrong alignment on FEventMessageTag");
static_assert(sizeof(FEventMessageTag) == 0x000004, "Wrong size on FEventMessageTag");

struct alignas(0x08) FGameplayMessageReceiverHandle final
{
public:
	TWeakObjectPtr<class UGameplayMessageRouter>  Subsystem;
	struct FEventMessageTag                       Channel;
	int32                                         ID;
	uint8                                         Pad_10[0x8];
};
static_assert(alignof(FGameplayMessageReceiverHandle) == 0x000008, "Wrong alignment on FGameplayMessageReceiverHandle");
static_assert(sizeof(FGameplayMessageReceiverHandle) == 0x000018, "Wrong size on FGameplayMessageReceiverHandle");
static_assert(offsetof(FGameplayMessageReceiverHandle, Subsystem) == 0x000000, "Member 'FGameplayMessageReceiverHandle::Subsystem' has a wrong offset!");
static_assert(offsetof(FGameplayMessageReceiverHandle, Channel) == 0x000008, "Member 'FGameplayMessageReceiverHandle::Channel' has a wrong offset!");
static_assert(offsetof(FGameplayMessageReceiverHandle, ID) == 0x00000C, "Member 'FGameplayMessageReceiverHandle::ID' has a wrong offset!");

struct FReplicatedMessageData final
{
public:
	class UScriptStruct*                          StructType;
	uint8                                         Pad_8[0x10];
};
static_assert(alignof(FReplicatedMessageData) == 0x000008, "Wrong alignment on FReplicatedMessageData");
static_assert(sizeof(FReplicatedMessageData) == 0x000018, "Wrong size on FReplicatedMessageData");
static_assert(offsetof(FReplicatedMessageData, StructType) == 0x000000, "Member 'FReplicatedMessageData::StructType' has a wrong offset!");

struct alignas(0x08) FReplicatedMessage final
{
public:
	uint8                                         Pad_0[0x10];
};
static_assert(alignof(FReplicatedMessage) == 0x000008, "Wrong alignment on FReplicatedMessage");
static_assert(sizeof(FReplicatedMessage) == 0x000010, "Wrong size on FReplicatedMessage");

struct alignas(0x10) FGameplayMessageReceiverData final
{
public:
	uint8                                         Pad_0[0xA0];
};
static_assert(alignof(FGameplayMessageReceiverData) == 0x000010, "Wrong alignment on FGameplayMessageReceiverData");
static_assert(sizeof(FGameplayMessageReceiverData) == 0x0000A0, "Wrong size on FGameplayMessageReceiverData");

}
