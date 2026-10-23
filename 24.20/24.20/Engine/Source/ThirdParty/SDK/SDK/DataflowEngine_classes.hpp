#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class UDataflowBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void EvaluateTerminalNodeByName(class UDataflow* Dataflow, class FName TerminalNodeName, class UObject* ResultAsset);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataflowBlueprintLibrary">();
	}
	static class UDataflowBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataflowBlueprintLibrary>();
	}
};
static_assert(alignof(UDataflowBlueprintLibrary) == 0x000008, "Wrong alignment on UDataflowBlueprintLibrary");
static_assert(sizeof(UDataflowBlueprintLibrary) == 0x000028, "Wrong size on UDataflowBlueprintLibrary");

class UDataflowEdNode final : public UEdGraphNode
{
public:
	uint8                                         Pad_98[0x20];
	bool                                          bRenderInAssetEditor;
	uint8                                         Pad_B9[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataflowEdNode">();
	}
	static class UDataflowEdNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataflowEdNode>();
	}
};
static_assert(alignof(UDataflowEdNode) == 0x000008, "Wrong alignment on UDataflowEdNode");
static_assert(sizeof(UDataflowEdNode) == 0x0000C0, "Wrong size on UDataflowEdNode");
static_assert(offsetof(UDataflowEdNode, bRenderInAssetEditor) == 0x0000B8, "Member 'UDataflowEdNode::bRenderInAssetEditor' has a wrong offset!");

class UDataflow final : public UEdGraph
{
public:
	uint8                                         Pad_60[0x28];
	bool                                          bActive;
	uint8                                         Pad_89[0x7];
	TArray<class UObject*>                        Targets;
	class UMaterial*                              Material;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Dataflow">();
	}
	static class UDataflow* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataflow>();
	}
};
static_assert(alignof(UDataflow) == 0x000008, "Wrong alignment on UDataflow");
static_assert(sizeof(UDataflow) == 0x0000A8, "Wrong size on UDataflow");
static_assert(offsetof(UDataflow, bActive) == 0x000088, "Member 'UDataflow::bActive' has a wrong offset!");
static_assert(offsetof(UDataflow, Targets) == 0x000090, "Member 'UDataflow::Targets' has a wrong offset!");
static_assert(offsetof(UDataflow, Material) == 0x0000A0, "Member 'UDataflow::Material' has a wrong offset!");

}
