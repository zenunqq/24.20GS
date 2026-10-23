#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK
{

enum class ENetPhysicsMoveTriggerType : uint8
{
	Input                                    = 0,
	Constraint                               = 1,
	Physics                                  = 2,
	Trace                                    = 3,
	Constant                                 = 4,
	ENetPhysicsMoveTriggerType_MAX           = 5,
};

enum class ENetPhysicsMoveResponseType : uint8
{
	Linear                                   = 0,
	Angular                                  = 1,
	ENetPhysicsMoveResponseType_MAX          = 2,
};

enum class ENetPhysicsMoveResponseFrame : uint8
{
	Absolute                                 = 0,
	Object                                   = 1,
	Camera                                   = 2,
	ENetPhysicsMoveResponseFrame_MAX         = 3,
};

enum class ENetPhysicsMoveResponseEffect : uint8
{
	Force                                    = 0,
	VelocityChange                           = 1,
	Transform                                = 2,
	ENetPhysicsMoveResponseEffect_MAX        = 3,
};

enum class ENetPhysicsMoveResponseModifier : uint8
{
	Add                                      = 0,
	TargetTransform                          = 1,
	TargetVelocity                           = 2,
	OverrideTransform                        = 3,
	OverrideVelocity                         = 4,
	ENetPhysicsMoveResponseModifier_MAX      = 5,
};

struct FNetPhysicsMoveInputTriggerParams final
{
public:
	bool                                          bIsAxis;
	uint8                                         Pad_1[0x3];
	class FName                                   Name;
	class UCurveFloat*                            AxisToMagnitudeCurve;
	bool                                          AccumulateAxisInput;
	uint8                                         Pad_11[0x7];
	struct FVector2D                              ClampAxis;
};
static_assert(alignof(FNetPhysicsMoveInputTriggerParams) == 0x000008, "Wrong alignment on FNetPhysicsMoveInputTriggerParams");
static_assert(sizeof(FNetPhysicsMoveInputTriggerParams) == 0x000028, "Wrong size on FNetPhysicsMoveInputTriggerParams");
static_assert(offsetof(FNetPhysicsMoveInputTriggerParams, bIsAxis) == 0x000000, "Member 'FNetPhysicsMoveInputTriggerParams::bIsAxis' has a wrong offset!");
static_assert(offsetof(FNetPhysicsMoveInputTriggerParams, Name) == 0x000004, "Member 'FNetPhysicsMoveInputTriggerParams::Name' has a wrong offset!");
static_assert(offsetof(FNetPhysicsMoveInputTriggerParams, AxisToMagnitudeCurve) == 0x000008, "Member 'FNetPhysicsMoveInputTriggerParams::AxisToMagnitudeCurve' has a wrong offset!");
static_assert(offsetof(FNetPhysicsMoveInputTriggerParams, AccumulateAxisInput) == 0x000010, "Member 'FNetPhysicsMoveInputTriggerParams::AccumulateAxisInput' has a wrong offset!");
static_assert(offsetof(FNetPhysicsMoveInputTriggerParams, ClampAxis) == 0x000018, "Member 'FNetPhysicsMoveInputTriggerParams::ClampAxis' has a wrong offset!");

struct FNetPhysicsMovePhysicsTriggerParams final
{
public:
	struct FVector                                SpeedInDirection;
};
static_assert(alignof(FNetPhysicsMovePhysicsTriggerParams) == 0x000008, "Wrong alignment on FNetPhysicsMovePhysicsTriggerParams");
static_assert(sizeof(FNetPhysicsMovePhysicsTriggerParams) == 0x000018, "Wrong size on FNetPhysicsMovePhysicsTriggerParams");
static_assert(offsetof(FNetPhysicsMovePhysicsTriggerParams, SpeedInDirection) == 0x000000, "Member 'FNetPhysicsMovePhysicsTriggerParams::SpeedInDirection' has a wrong offset!");

struct FNetPhysicsMoveTraceTriggerParams final
{
public:
	struct FVector                                Direction;
	ENetPhysicsMoveResponseFrame                  Frame;
	uint8                                         Pad_19[0x3];
	float                                         Length;
	ECollisionChannel                             CollisionChannel;
	struct FCollisionResponseContainer            ResponseParams;
	bool                                          bProportionalToHitDistance;
	uint8                                         Pad_42[0x6];
	class UCurveFloat*                            HitDistanceToMagnitudeCurve;
};
static_assert(alignof(FNetPhysicsMoveTraceTriggerParams) == 0x000008, "Wrong alignment on FNetPhysicsMoveTraceTriggerParams");
static_assert(sizeof(FNetPhysicsMoveTraceTriggerParams) == 0x000050, "Wrong size on FNetPhysicsMoveTraceTriggerParams");
static_assert(offsetof(FNetPhysicsMoveTraceTriggerParams, Direction) == 0x000000, "Member 'FNetPhysicsMoveTraceTriggerParams::Direction' has a wrong offset!");
static_assert(offsetof(FNetPhysicsMoveTraceTriggerParams, Frame) == 0x000018, "Member 'FNetPhysicsMoveTraceTriggerParams::Frame' has a wrong offset!");
static_assert(offsetof(FNetPhysicsMoveTraceTriggerParams, Length) == 0x00001C, "Member 'FNetPhysicsMoveTraceTriggerParams::Length' has a wrong offset!");
static_assert(offsetof(FNetPhysicsMoveTraceTriggerParams, CollisionChannel) == 0x000020, "Member 'FNetPhysicsMoveTraceTriggerParams::CollisionChannel' has a wrong offset!");
static_assert(offsetof(FNetPhysicsMoveTraceTriggerParams, ResponseParams) == 0x000021, "Member 'FNetPhysicsMoveTraceTriggerParams::ResponseParams' has a wrong offset!");
static_assert(offsetof(FNetPhysicsMoveTraceTriggerParams, bProportionalToHitDistance) == 0x000041, "Member 'FNetPhysicsMoveTraceTriggerParams::bProportionalToHitDistance' has a wrong offset!");
static_assert(offsetof(FNetPhysicsMoveTraceTriggerParams, HitDistanceToMagnitudeCurve) == 0x000048, "Member 'FNetPhysicsMoveTraceTriggerParams::HitDistanceToMagnitudeCurve' has a wrong offset!");

struct FNetPhysicsMoveTrigger final
{
public:
	ENetPhysicsMoveTriggerType                    Type;
	uint8                                         Pad_1[0x7];
	struct FNetPhysicsMoveInputTriggerParams      InputParams;
	struct FNetPhysicsMovePhysicsTriggerParams    PhysicsParams;
	struct FNetPhysicsMoveTraceTriggerParams      TraceParams;
};
static_assert(alignof(FNetPhysicsMoveTrigger) == 0x000008, "Wrong alignment on FNetPhysicsMoveTrigger");
static_assert(sizeof(FNetPhysicsMoveTrigger) == 0x000098, "Wrong size on FNetPhysicsMoveTrigger");
static_assert(offsetof(FNetPhysicsMoveTrigger, Type) == 0x000000, "Member 'FNetPhysicsMoveTrigger::Type' has a wrong offset!");
static_assert(offsetof(FNetPhysicsMoveTrigger, InputParams) == 0x000008, "Member 'FNetPhysicsMoveTrigger::InputParams' has a wrong offset!");
static_assert(offsetof(FNetPhysicsMoveTrigger, PhysicsParams) == 0x000030, "Member 'FNetPhysicsMoveTrigger::PhysicsParams' has a wrong offset!");
static_assert(offsetof(FNetPhysicsMoveTrigger, TraceParams) == 0x000048, "Member 'FNetPhysicsMoveTrigger::TraceParams' has a wrong offset!");

struct FNetPhysicsMoveResponse final
{
public:
	struct FVector                                Vector;
	float                                         Magnitude;
	uint8                                         Pad_1C[0x4];
	class UCurveFloat*                            MagnitudeCurve;
	ENetPhysicsMoveResponseType                   Type;
	ENetPhysicsMoveResponseFrame                  Frame;
	ENetPhysicsMoveResponseEffect                 Effect;
	ENetPhysicsMoveResponseModifier               Modifier;
	uint8                                         Pad_2C[0x4];
	struct FVector                                ClampVector;
	ENetPhysicsMoveResponseFrame                  ClampFrame;
	uint8                                         Pad_49[0x7];
};
static_assert(alignof(FNetPhysicsMoveResponse) == 0x000008, "Wrong alignment on FNetPhysicsMoveResponse");
static_assert(sizeof(FNetPhysicsMoveResponse) == 0x000050, "Wrong size on FNetPhysicsMoveResponse");
static_assert(offsetof(FNetPhysicsMoveResponse, Vector) == 0x000000, "Member 'FNetPhysicsMoveResponse::Vector' has a wrong offset!");
static_assert(offsetof(FNetPhysicsMoveResponse, Magnitude) == 0x000018, "Member 'FNetPhysicsMoveResponse::Magnitude' has a wrong offset!");
static_assert(offsetof(FNetPhysicsMoveResponse, MagnitudeCurve) == 0x000020, "Member 'FNetPhysicsMoveResponse::MagnitudeCurve' has a wrong offset!");
static_assert(offsetof(FNetPhysicsMoveResponse, Type) == 0x000028, "Member 'FNetPhysicsMoveResponse::Type' has a wrong offset!");
static_assert(offsetof(FNetPhysicsMoveResponse, Frame) == 0x000029, "Member 'FNetPhysicsMoveResponse::Frame' has a wrong offset!");
static_assert(offsetof(FNetPhysicsMoveResponse, Effect) == 0x00002A, "Member 'FNetPhysicsMoveResponse::Effect' has a wrong offset!");
static_assert(offsetof(FNetPhysicsMoveResponse, Modifier) == 0x00002B, "Member 'FNetPhysicsMoveResponse::Modifier' has a wrong offset!");
static_assert(offsetof(FNetPhysicsMoveResponse, ClampVector) == 0x000030, "Member 'FNetPhysicsMoveResponse::ClampVector' has a wrong offset!");
static_assert(offsetof(FNetPhysicsMoveResponse, ClampFrame) == 0x000048, "Member 'FNetPhysicsMoveResponse::ClampFrame' has a wrong offset!");

struct FNetPhysicsMoveConfigEntry final
{
public:
	class FString                                 Name;
	TArray<struct FNetPhysicsMoveTrigger>         Triggers;
	TArray<struct FNetPhysicsMoveResponse>        Responses;
};
static_assert(alignof(FNetPhysicsMoveConfigEntry) == 0x000008, "Wrong alignment on FNetPhysicsMoveConfigEntry");
static_assert(sizeof(FNetPhysicsMoveConfigEntry) == 0x000030, "Wrong size on FNetPhysicsMoveConfigEntry");
static_assert(offsetof(FNetPhysicsMoveConfigEntry, Name) == 0x000000, "Member 'FNetPhysicsMoveConfigEntry::Name' has a wrong offset!");
static_assert(offsetof(FNetPhysicsMoveConfigEntry, Triggers) == 0x000010, "Member 'FNetPhysicsMoveConfigEntry::Triggers' has a wrong offset!");
static_assert(offsetof(FNetPhysicsMoveConfigEntry, Responses) == 0x000020, "Member 'FNetPhysicsMoveConfigEntry::Responses' has a wrong offset!");

struct FNetPhysicsMoveLimits final
{
public:
	bool                                          bClampVelocity;
	uint8                                         Pad_1[0x7];
	struct FVector                                MaxVelocity;
	bool                                          bClampAngularVelocity;
	uint8                                         Pad_21[0x7];
	struct FVector                                MaxAngularVelocity;
	bool                                          bClampMaxPosition;
	uint8                                         Pad_41[0x7];
	struct FVector                                MaxPosition;
	bool                                          bClampMinPosition;
	uint8                                         Pad_61[0x7];
	struct FVector                                MinPosition;
};
static_assert(alignof(FNetPhysicsMoveLimits) == 0x000008, "Wrong alignment on FNetPhysicsMoveLimits");
static_assert(sizeof(FNetPhysicsMoveLimits) == 0x000080, "Wrong size on FNetPhysicsMoveLimits");
static_assert(offsetof(FNetPhysicsMoveLimits, bClampVelocity) == 0x000000, "Member 'FNetPhysicsMoveLimits::bClampVelocity' has a wrong offset!");
static_assert(offsetof(FNetPhysicsMoveLimits, MaxVelocity) == 0x000008, "Member 'FNetPhysicsMoveLimits::MaxVelocity' has a wrong offset!");
static_assert(offsetof(FNetPhysicsMoveLimits, bClampAngularVelocity) == 0x000020, "Member 'FNetPhysicsMoveLimits::bClampAngularVelocity' has a wrong offset!");
static_assert(offsetof(FNetPhysicsMoveLimits, MaxAngularVelocity) == 0x000028, "Member 'FNetPhysicsMoveLimits::MaxAngularVelocity' has a wrong offset!");
static_assert(offsetof(FNetPhysicsMoveLimits, bClampMaxPosition) == 0x000040, "Member 'FNetPhysicsMoveLimits::bClampMaxPosition' has a wrong offset!");
static_assert(offsetof(FNetPhysicsMoveLimits, MaxPosition) == 0x000048, "Member 'FNetPhysicsMoveLimits::MaxPosition' has a wrong offset!");
static_assert(offsetof(FNetPhysicsMoveLimits, bClampMinPosition) == 0x000060, "Member 'FNetPhysicsMoveLimits::bClampMinPosition' has a wrong offset!");
static_assert(offsetof(FNetPhysicsMoveLimits, MinPosition) == 0x000068, "Member 'FNetPhysicsMoveLimits::MinPosition' has a wrong offset!");

struct FNetPhysicsMoveInputCmd final
{
public:
	TArray<float>                                 AxisValues;
	TArray<bool>                                  ActionValues;
	struct FRotator                               ViewRotation;
};
static_assert(alignof(FNetPhysicsMoveInputCmd) == 0x000008, "Wrong alignment on FNetPhysicsMoveInputCmd");
static_assert(sizeof(FNetPhysicsMoveInputCmd) == 0x000038, "Wrong size on FNetPhysicsMoveInputCmd");
static_assert(offsetof(FNetPhysicsMoveInputCmd, AxisValues) == 0x000000, "Member 'FNetPhysicsMoveInputCmd::AxisValues' has a wrong offset!");
static_assert(offsetof(FNetPhysicsMoveInputCmd, ActionValues) == 0x000010, "Member 'FNetPhysicsMoveInputCmd::ActionValues' has a wrong offset!");
static_assert(offsetof(FNetPhysicsMoveInputCmd, ViewRotation) == 0x000020, "Member 'FNetPhysicsMoveInputCmd::ViewRotation' has a wrong offset!");

struct FNetPhysicsMoveObject final
{
public:
	bool                                          bEnabled;
};
static_assert(alignof(FNetPhysicsMoveObject) == 0x000001, "Wrong alignment on FNetPhysicsMoveObject");
static_assert(sizeof(FNetPhysicsMoveObject) == 0x000001, "Wrong size on FNetPhysicsMoveObject");
static_assert(offsetof(FNetPhysicsMoveObject, bEnabled) == 0x000000, "Member 'FNetPhysicsMoveObject::bEnabled' has a wrong offset!");

struct alignas(0x08) FNetPhysicsMoveObjectLocal final
{
public:
	uint8                                         Pad_0[0x88];
};
static_assert(alignof(FNetPhysicsMoveObjectLocal) == 0x000008, "Wrong alignment on FNetPhysicsMoveObjectLocal");
static_assert(sizeof(FNetPhysicsMoveObjectLocal) == 0x000088, "Wrong size on FNetPhysicsMoveObjectLocal");

}
