#pragma once

#include "Basic.hpp"

#include "VerseNative_structs.hpp"

namespace SDK::Params
{

struct VerseStmLibrary_StmSave final
{
public:
	struct FakeType                               Property;
};
static_assert(alignof(VerseStmLibrary_StmSave) == 0x000001, "Wrong alignment on VerseStmLibrary_StmSave");
static_assert(sizeof(VerseStmLibrary_StmSave) == 0x000001, "Wrong size on VerseStmLibrary_StmSave");
static_assert(offsetof(VerseStmLibrary_StmSave, Property) == 0x000000, "Member 'VerseStmLibrary_StmSave::Property' has a wrong offset!");

}
