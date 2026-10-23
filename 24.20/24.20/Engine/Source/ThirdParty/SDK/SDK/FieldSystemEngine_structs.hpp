#pragma once

#include "Basic.hpp"

namespace SDK
{

struct FFieldObjectCommands final
{
public:
	TArray<class FName>                           TargetNames;
	TArray<class UFieldNodeBase*>                 RootNodes;
	TArray<class UFieldSystemMetaData*>           MetaDatas;
};
static_assert(alignof(FFieldObjectCommands) == 0x000008, "Wrong alignment on FFieldObjectCommands");
static_assert(sizeof(FFieldObjectCommands) == 0x000030, "Wrong size on FFieldObjectCommands");
static_assert(offsetof(FFieldObjectCommands, TargetNames) == 0x000000, "Member 'FFieldObjectCommands::TargetNames' has a wrong offset!");
static_assert(offsetof(FFieldObjectCommands, RootNodes) == 0x000010, "Member 'FFieldObjectCommands::RootNodes' has a wrong offset!");
static_assert(offsetof(FFieldObjectCommands, MetaDatas) == 0x000020, "Member 'FFieldObjectCommands::MetaDatas' has a wrong offset!");

}
