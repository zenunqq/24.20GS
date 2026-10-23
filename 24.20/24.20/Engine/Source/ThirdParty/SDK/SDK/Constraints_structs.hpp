#pragma once

#include "Basic.hpp"

#include "MovieScene_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK
{

enum class EHandleEvent : uint8
{
	LocalTransformUpdated                    = 0,
	GlobalTransformUpdated                   = 1,
	ComponentUpdated                         = 2,
	Max                                      = 3,
};

struct FMovieSceneConstraintChannel final : public FMovieSceneBoolChannel
{
};
static_assert(alignof(FMovieSceneConstraintChannel) == 0x000008, "Wrong alignment on FMovieSceneConstraintChannel");
static_assert(sizeof(FMovieSceneConstraintChannel) == 0x000100, "Wrong size on FMovieSceneConstraintChannel");

struct FConstraintAndActiveChannel final
{
public:
	TSoftObjectPtr<class UTickableConstraint>     Constraint;
	struct FMovieSceneConstraintChannel           ActiveChannel;
	class UTickableConstraint*                    ConstraintCopyToSpawn;
};
static_assert(alignof(FConstraintAndActiveChannel) == 0x000008, "Wrong alignment on FConstraintAndActiveChannel");
static_assert(sizeof(FConstraintAndActiveChannel) == 0x000130, "Wrong size on FConstraintAndActiveChannel");
static_assert(offsetof(FConstraintAndActiveChannel, Constraint) == 0x000000, "Member 'FConstraintAndActiveChannel::Constraint' has a wrong offset!");
static_assert(offsetof(FConstraintAndActiveChannel, ActiveChannel) == 0x000028, "Member 'FConstraintAndActiveChannel::ActiveChannel' has a wrong offset!");
static_assert(offsetof(FConstraintAndActiveChannel, ConstraintCopyToSpawn) == 0x000128, "Member 'FConstraintAndActiveChannel::ConstraintCopyToSpawn' has a wrong offset!");

struct FConstraintTickFunction final : public FTickFunction
{
public:
	uint8                                         Pad_28[0x18];
};
static_assert(alignof(FConstraintTickFunction) == 0x000008, "Wrong alignment on FConstraintTickFunction");
static_assert(sizeof(FConstraintTickFunction) == 0x000040, "Wrong size on FConstraintTickFunction");

}
