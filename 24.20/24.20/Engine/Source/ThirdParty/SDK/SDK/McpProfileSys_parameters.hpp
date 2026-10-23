#pragma once

#include "Basic.hpp"

#include "McpProfileSys_structs.hpp"

namespace SDK::Params
{

struct McpProfile_DeleteAllProfiles final
{
public:
	struct FClientUrlContext                      Context;
};
static_assert(alignof(McpProfile_DeleteAllProfiles) == 0x000010, "Wrong alignment on McpProfile_DeleteAllProfiles");
static_assert(sizeof(McpProfile_DeleteAllProfiles) == 0x000080, "Wrong size on McpProfile_DeleteAllProfiles");
static_assert(offsetof(McpProfile_DeleteAllProfiles, Context) == 0x000000, "Member 'McpProfile_DeleteAllProfiles::Context' has a wrong offset!");

struct McpProfile_DeleteProfile final
{
public:
	struct FClientUrlContext                      Context;
};
static_assert(alignof(McpProfile_DeleteProfile) == 0x000010, "Wrong alignment on McpProfile_DeleteProfile");
static_assert(sizeof(McpProfile_DeleteProfile) == 0x000080, "Wrong size on McpProfile_DeleteProfile");
static_assert(offsetof(McpProfile_DeleteProfile, Context) == 0x000000, "Member 'McpProfile_DeleteProfile::Context' has a wrong offset!");

struct McpProfile_LockProfileForWrite final
{
public:
	class FString                                 Code;
	int32                                         Timeout;
	uint8                                         Pad_14[0xC];
	struct FDedicatedServerUrlContext             Context;
};
static_assert(alignof(McpProfile_LockProfileForWrite) == 0x000010, "Wrong alignment on McpProfile_LockProfileForWrite");
static_assert(sizeof(McpProfile_LockProfileForWrite) == 0x0000A0, "Wrong size on McpProfile_LockProfileForWrite");
static_assert(offsetof(McpProfile_LockProfileForWrite, Code) == 0x000000, "Member 'McpProfile_LockProfileForWrite::Code' has a wrong offset!");
static_assert(offsetof(McpProfile_LockProfileForWrite, Timeout) == 0x000010, "Member 'McpProfile_LockProfileForWrite::Timeout' has a wrong offset!");
static_assert(offsetof(McpProfile_LockProfileForWrite, Context) == 0x000020, "Member 'McpProfile_LockProfileForWrite::Context' has a wrong offset!");

struct McpProfile_QueryProfile final
{
public:
	struct FBaseUrlContext                        Context;
};
static_assert(alignof(McpProfile_QueryProfile) == 0x000010, "Wrong alignment on McpProfile_QueryProfile");
static_assert(sizeof(McpProfile_QueryProfile) == 0x000080, "Wrong size on McpProfile_QueryProfile");
static_assert(offsetof(McpProfile_QueryProfile, Context) == 0x000000, "Member 'McpProfile_QueryProfile::Context' has a wrong offset!");

struct McpProfile_QueryPublicProfile final
{
public:
	struct FBaseUrlContext                        Context;
};
static_assert(alignof(McpProfile_QueryPublicProfile) == 0x000010, "Wrong alignment on McpProfile_QueryPublicProfile");
static_assert(sizeof(McpProfile_QueryPublicProfile) == 0x000080, "Wrong size on McpProfile_QueryPublicProfile");
static_assert(offsetof(McpProfile_QueryPublicProfile, Context) == 0x000000, "Member 'McpProfile_QueryPublicProfile::Context' has a wrong offset!");

struct McpProfile_UnlockProfileForWrite final
{
public:
	class FString                                 Code;
	struct FDedicatedServerUrlContext             Context;
};
static_assert(alignof(McpProfile_UnlockProfileForWrite) == 0x000010, "Wrong alignment on McpProfile_UnlockProfileForWrite");
static_assert(sizeof(McpProfile_UnlockProfileForWrite) == 0x000090, "Wrong size on McpProfile_UnlockProfileForWrite");
static_assert(offsetof(McpProfile_UnlockProfileForWrite, Code) == 0x000000, "Member 'McpProfile_UnlockProfileForWrite::Code' has a wrong offset!");
static_assert(offsetof(McpProfile_UnlockProfileForWrite, Context) == 0x000010, "Member 'McpProfile_UnlockProfileForWrite::Context' has a wrong offset!");

}
