#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct ChooserFunctionLibrary_EvaluateChooser final
{
public:
	const class UObject*                          ContextObject;
	const class UChooserTable*                    ChooserTable;
	TSubclassOf<class UObject>                    ObjectClass;
	class UObject*                                ReturnValue;
};
static_assert(alignof(ChooserFunctionLibrary_EvaluateChooser) == 0x000008, "Wrong alignment on ChooserFunctionLibrary_EvaluateChooser");
static_assert(sizeof(ChooserFunctionLibrary_EvaluateChooser) == 0x000020, "Wrong size on ChooserFunctionLibrary_EvaluateChooser");
static_assert(offsetof(ChooserFunctionLibrary_EvaluateChooser, ContextObject) == 0x000000, "Member 'ChooserFunctionLibrary_EvaluateChooser::ContextObject' has a wrong offset!");
static_assert(offsetof(ChooserFunctionLibrary_EvaluateChooser, ChooserTable) == 0x000008, "Member 'ChooserFunctionLibrary_EvaluateChooser::ChooserTable' has a wrong offset!");
static_assert(offsetof(ChooserFunctionLibrary_EvaluateChooser, ObjectClass) == 0x000010, "Member 'ChooserFunctionLibrary_EvaluateChooser::ObjectClass' has a wrong offset!");
static_assert(offsetof(ChooserFunctionLibrary_EvaluateChooser, ReturnValue) == 0x000018, "Member 'ChooserFunctionLibrary_EvaluateChooser::ReturnValue' has a wrong offset!");

struct ChooserFunctionLibrary_EvaluateChooserMulti final
{
public:
	const class UObject*                          ContextObject;
	const class UChooserTable*                    ChooserTable;
	TSubclassOf<class UObject>                    ObjectClass;
	TArray<class UObject*>                        ReturnValue;
};
static_assert(alignof(ChooserFunctionLibrary_EvaluateChooserMulti) == 0x000008, "Wrong alignment on ChooserFunctionLibrary_EvaluateChooserMulti");
static_assert(sizeof(ChooserFunctionLibrary_EvaluateChooserMulti) == 0x000028, "Wrong size on ChooserFunctionLibrary_EvaluateChooserMulti");
static_assert(offsetof(ChooserFunctionLibrary_EvaluateChooserMulti, ContextObject) == 0x000000, "Member 'ChooserFunctionLibrary_EvaluateChooserMulti::ContextObject' has a wrong offset!");
static_assert(offsetof(ChooserFunctionLibrary_EvaluateChooserMulti, ChooserTable) == 0x000008, "Member 'ChooserFunctionLibrary_EvaluateChooserMulti::ChooserTable' has a wrong offset!");
static_assert(offsetof(ChooserFunctionLibrary_EvaluateChooserMulti, ObjectClass) == 0x000010, "Member 'ChooserFunctionLibrary_EvaluateChooserMulti::ObjectClass' has a wrong offset!");
static_assert(offsetof(ChooserFunctionLibrary_EvaluateChooserMulti, ReturnValue) == 0x000018, "Member 'ChooserFunctionLibrary_EvaluateChooserMulti::ReturnValue' has a wrong offset!");

}
