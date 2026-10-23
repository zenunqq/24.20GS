#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

struct alignas(0x08) FDataflowConnection
{
public:
	uint8                                         Pad_0[0x38];
};
static_assert(alignof(FDataflowConnection) == 0x000008, "Wrong alignment on FDataflowConnection");
static_assert(sizeof(FDataflowConnection) == 0x000038, "Wrong size on FDataflowConnection");

struct FDataflowInput final : public FDataflowConnection
{
public:
	uint8                                         Pad_38[0x8];
};
static_assert(alignof(FDataflowInput) == 0x000008, "Wrong alignment on FDataflowInput");
static_assert(sizeof(FDataflowInput) == 0x000040, "Wrong size on FDataflowInput");

struct FDataflowOutput final : public FDataflowConnection
{
public:
	uint8                                         Pad_38[0x28];
};
static_assert(alignof(FDataflowOutput) == 0x000008, "Wrong alignment on FDataflowOutput");
static_assert(sizeof(FDataflowOutput) == 0x000060, "Wrong size on FDataflowOutput");

struct alignas(0x08) FDataflowNode
{
public:
	uint8                                         Pad_0[0xC8];
	bool                                          bActive;
	uint8                                         Pad_C9[0x1F];
};
static_assert(alignof(FDataflowNode) == 0x000008, "Wrong alignment on FDataflowNode");
static_assert(sizeof(FDataflowNode) == 0x0000E8, "Wrong size on FDataflowNode");
static_assert(offsetof(FDataflowNode, bActive) == 0x0000C8, "Member 'FDataflowNode::bActive' has a wrong offset!");

struct alignas(0x08) FDataflowSelection
{
public:
	uint8                                         Pad_0[0x20];
};
static_assert(alignof(FDataflowSelection) == 0x000008, "Wrong alignment on FDataflowSelection");
static_assert(sizeof(FDataflowSelection) == 0x000020, "Wrong size on FDataflowSelection");

struct FDataflowTransformSelection final : public FDataflowSelection
{
};
static_assert(alignof(FDataflowTransformSelection) == 0x000008, "Wrong alignment on FDataflowTransformSelection");
static_assert(sizeof(FDataflowTransformSelection) == 0x000020, "Wrong size on FDataflowTransformSelection");

struct FDataflowVertexSelection final : public FDataflowSelection
{
};
static_assert(alignof(FDataflowVertexSelection) == 0x000008, "Wrong alignment on FDataflowVertexSelection");
static_assert(sizeof(FDataflowVertexSelection) == 0x000020, "Wrong size on FDataflowVertexSelection");

struct FDataflowFaceSelection final : public FDataflowSelection
{
};
static_assert(alignof(FDataflowFaceSelection) == 0x000008, "Wrong alignment on FDataflowFaceSelection");
static_assert(sizeof(FDataflowFaceSelection) == 0x000020, "Wrong size on FDataflowFaceSelection");

struct FNodeColors final
{
public:
	struct FLinearColor                           NodeTitleColor;
	struct FLinearColor                           NodeBodyTintColor;
};
static_assert(alignof(FNodeColors) == 0x000004, "Wrong alignment on FNodeColors");
static_assert(sizeof(FNodeColors) == 0x000020, "Wrong size on FNodeColors");
static_assert(offsetof(FNodeColors, NodeTitleColor) == 0x000000, "Member 'FNodeColors::NodeTitleColor' has a wrong offset!");
static_assert(offsetof(FNodeColors, NodeBodyTintColor) == 0x000010, "Member 'FNodeColors::NodeBodyTintColor' has a wrong offset!");

struct FDataflowTerminalNode final : public FDataflowNode
{
};
static_assert(alignof(FDataflowTerminalNode) == 0x000008, "Wrong alignment on FDataflowTerminalNode");
static_assert(sizeof(FDataflowTerminalNode) == 0x0000E8, "Wrong size on FDataflowTerminalNode");

}
