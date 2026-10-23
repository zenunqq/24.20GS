#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "InputCore_structs.hpp"
#include "NetCore_structs.hpp"

namespace SDK
{

struct FVerseActionMapping final : public FFastArraySerializerItem
{
public:
	class FName                                   Name;
	class FString                                 UIText;
	TArray<struct FKey>                           Keys;
};
static_assert(alignof(FVerseActionMapping) == 0x000008, "Wrong alignment on FVerseActionMapping");
static_assert(sizeof(FVerseActionMapping) == 0x000030, "Wrong size on FVerseActionMapping");
static_assert(offsetof(FVerseActionMapping, Name) == 0x00000C, "Member 'FVerseActionMapping::Name' has a wrong offset!");
static_assert(offsetof(FVerseActionMapping, UIText) == 0x000010, "Member 'FVerseActionMapping::UIText' has a wrong offset!");
static_assert(offsetof(FVerseActionMapping, Keys) == 0x000020, "Member 'FVerseActionMapping::Keys' has a wrong offset!");

struct FVerseActionMappingArray final : public FFastArraySerializer
{
public:
	TArray<struct FVerseActionMapping>            ActionMappingArray;
	class UVerseUEInputComponentBase*             OwningComponent;
};
static_assert(alignof(FVerseActionMappingArray) == 0x000008, "Wrong alignment on FVerseActionMappingArray");
static_assert(sizeof(FVerseActionMappingArray) == 0x000120, "Wrong size on FVerseActionMappingArray");
static_assert(offsetof(FVerseActionMappingArray, ActionMappingArray) == 0x000108, "Member 'FVerseActionMappingArray::ActionMappingArray' has a wrong offset!");
static_assert(offsetof(FVerseActionMappingArray, OwningComponent) == 0x000118, "Member 'FVerseActionMappingArray::OwningComponent' has a wrong offset!");

struct FVerseAxisMapping final : public FFastArraySerializerItem
{
public:
	class FName                                   AxisName;
	float                                         Scale;
	uint8                                         Pad_14[0x4];
	class FString                                 UIText;
	TArray<struct FKey>                           Keys;
};
static_assert(alignof(FVerseAxisMapping) == 0x000008, "Wrong alignment on FVerseAxisMapping");
static_assert(sizeof(FVerseAxisMapping) == 0x000038, "Wrong size on FVerseAxisMapping");
static_assert(offsetof(FVerseAxisMapping, AxisName) == 0x00000C, "Member 'FVerseAxisMapping::AxisName' has a wrong offset!");
static_assert(offsetof(FVerseAxisMapping, Scale) == 0x000010, "Member 'FVerseAxisMapping::Scale' has a wrong offset!");
static_assert(offsetof(FVerseAxisMapping, UIText) == 0x000018, "Member 'FVerseAxisMapping::UIText' has a wrong offset!");
static_assert(offsetof(FVerseAxisMapping, Keys) == 0x000028, "Member 'FVerseAxisMapping::Keys' has a wrong offset!");

struct FVerseAxisMappingArray final : public FFastArraySerializer
{
public:
	TArray<struct FVerseAxisMapping>              AxisMappingArray;
	class UVerseUEInputComponentBase*             OwningComponent;
};
static_assert(alignof(FVerseAxisMappingArray) == 0x000008, "Wrong alignment on FVerseAxisMappingArray");
static_assert(sizeof(FVerseAxisMappingArray) == 0x000120, "Wrong size on FVerseAxisMappingArray");
static_assert(offsetof(FVerseAxisMappingArray, AxisMappingArray) == 0x000108, "Member 'FVerseAxisMappingArray::AxisMappingArray' has a wrong offset!");
static_assert(offsetof(FVerseAxisMappingArray, OwningComponent) == 0x000118, "Member 'FVerseAxisMappingArray::OwningComponent' has a wrong offset!");

struct FVerseInputBinding final : public FFastArraySerializerItem
{
public:
	class FName                                   Name;
	EInputEvent                                   InputEvent;
	uint8                                         Pad_11[0xB];
};
static_assert(alignof(FVerseInputBinding) == 0x000004, "Wrong alignment on FVerseInputBinding");
static_assert(sizeof(FVerseInputBinding) == 0x00001C, "Wrong size on FVerseInputBinding");
static_assert(offsetof(FVerseInputBinding, Name) == 0x00000C, "Member 'FVerseInputBinding::Name' has a wrong offset!");
static_assert(offsetof(FVerseInputBinding, InputEvent) == 0x000010, "Member 'FVerseInputBinding::InputEvent' has a wrong offset!");

struct FVerseInputBindingArray final : public FFastArraySerializer
{
public:
	TArray<struct FVerseInputBinding>             InputBindingArray;
	class UVerseUEInputComponentBase*             OwningComponent;
};
static_assert(alignof(FVerseInputBindingArray) == 0x000008, "Wrong alignment on FVerseInputBindingArray");
static_assert(sizeof(FVerseInputBindingArray) == 0x000120, "Wrong size on FVerseInputBindingArray");
static_assert(offsetof(FVerseInputBindingArray, InputBindingArray) == 0x000108, "Member 'FVerseInputBindingArray::InputBindingArray' has a wrong offset!");
static_assert(offsetof(FVerseInputBindingArray, OwningComponent) == 0x000118, "Member 'FVerseInputBindingArray::OwningComponent' has a wrong offset!");

}
