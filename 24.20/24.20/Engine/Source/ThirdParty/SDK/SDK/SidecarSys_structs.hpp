#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EInventoryPersistenceMode : uint8
{
	Normal                                   = 0,
	Deferred                                 = 1,
	Disabled                                 = 2,
	ReadOnly                                 = 3,
	EInventoryPersistenceMode_MAX            = 4,
};

struct FSidecarFileInfo final
{
public:
	TMap<class FString, class FString>            Meta;
	bool                                          bIsCheckedOut;
	bool                                          bOperationPending;
	uint8                                         Pad_52[0x6];
	class FString                                 CheckoutGuid;
};
static_assert(alignof(FSidecarFileInfo) == 0x000008, "Wrong alignment on FSidecarFileInfo");
static_assert(sizeof(FSidecarFileInfo) == 0x000068, "Wrong size on FSidecarFileInfo");
static_assert(offsetof(FSidecarFileInfo, Meta) == 0x000000, "Member 'FSidecarFileInfo::Meta' has a wrong offset!");
static_assert(offsetof(FSidecarFileInfo, bIsCheckedOut) == 0x000050, "Member 'FSidecarFileInfo::bIsCheckedOut' has a wrong offset!");
static_assert(offsetof(FSidecarFileInfo, bOperationPending) == 0x000051, "Member 'FSidecarFileInfo::bOperationPending' has a wrong offset!");
static_assert(offsetof(FSidecarFileInfo, CheckoutGuid) == 0x000058, "Member 'FSidecarFileInfo::CheckoutGuid' has a wrong offset!");

}
