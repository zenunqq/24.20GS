#pragma once

#include "Basic.hpp"

#include "EpicGamesTemporary_0_structs.hpp"
#include "Verse_structs.hpp"
#include "EpicGamesTemporary_structs.hpp"
#include "VerseExperimental_structs.hpp"

namespace SDK
{

enum class EVGameplayRst_Components_activation_state : uint8
{
	Active                                   = 0,
	Inactive                                 = 1,
	VGameplayRst_Components_activation_MAX   = 2,
};

enum class EVGameplayRst_DebugDraw_draw_duration_policy : uint8
{
	SingleFrame                              = 0,
	FiniteDuration                           = 1,
	Persistent                               = 2,
	VGameplayRst_DebugDraw_draw_duration_MAX = 3,
};

enum class EVGameplayRst_Geometry_collision_type : uint8
{
	NoCollision                              = 0,
	QueryOnly                                = 1,
	SimulationOnly                           = 2,
	QueryAndSimulation                       = 3,
	VGameplayRst_Geometry_collision_MAX      = 4,
};

enum class EVGameplayRst_Geometry_default_animation_mode_type : uint8
{
	UseAnimationBlueprint                    = 0,
	UseAnimationInstance                     = 1,
	UseAnimationAsset                        = 2,
	UseCustomMode                            = 3,
	VGameplayRst_Geometry_default_animation_mode_MAX = 4,
};

enum class EVGameplayRst_Geometry_default_mesh_type : uint8
{
	Cube                                     = 0,
	Sphere                                   = 1,
	Cylinder                                 = 2,
	Cone                                     = 3,
	Plane                                    = 4,
	VGameplayRst_Geometry_default_mesh_MAX   = 5,
};

enum class EVGameplayRst_Physics_collision_shape_mode : uint8
{
	CollisionMesh                            = 0,
	CollisionBox                             = 1,
	CollisionCapsule                         = 2,
	CollisionSphere                          = 3,
	VGameplayRst_Physics_collision_shape_MAX = 4,
};

enum class EVGameplayRst_Physics_dof_movement_mode : uint8
{
	Default                                  = 0,
	SixDOF                                   = 1,
	YZPlane                                  = 2,
	XZPlane                                  = 3,
	XYPlane                                  = 4,
	CustomPlane                              = 5,
	NoConstraints                            = 6,
	VGameplayRst_Physics_dof_movement_MAX    = 7,
};

enum class EVGameplayRst_Physics_physics_trace_category : uint8
{
	Channel                                  = 0,
	Profile                                  = 1,
	Object                                   = 2,
	VGameplayRst_Physics_physics_trace_MAX   = 3,
};

enum class EVGameplayRst_Physics_physics_trace_channel : uint8
{
	WorldStatic                              = 0,
	WorldDynamic                             = 1,
	Pawn                                     = 2,
	Visibility                               = 3,
	Camera                                   = 4,
	PhysicsBody                              = 5,
	Vehicle                                  = 6,
	Destructible                             = 7,
	GameTraceChannel1                        = 8,
	GameTraceChannel2                        = 9,
	GameTraceChannel3                        = 10,
	GameTraceChannel4                        = 11,
	GameTraceChannel5                        = 12,
	GameTraceChannel6                        = 13,
	VGameplayRst_Physics_physics_trace_MAX   = 14,
};

enum class EVGameplayRst_Physics_physics_trace_shape : uint8
{
	Line                                     = 0,
	Box                                      = 1,
	ShapeSphere                              = 2,
	VGameplayRst_Physics_physics_trace_MAX   = 3,
};

enum class EVGameplayRst_Physics_physics_trace_type : uint8
{
	Single                                   = 0,
	Multi                                    = 1,
	Test                                     = 2,
	VGameplayRst_Physics_physics_trace_MAX   = 3,
};

struct Ftuple_L_Kchar_Mtransform_M_Kchar_R final
{
public:
	FVerseStringProperty_                         __verse_0x18E3F084_Elem0;
	struct FSpatialMath_transform                 __verse_0x7D844C3C_Elem1;
	FVerseStringProperty_                         __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_L_Kchar_Mtransform_M_Kchar_R) == 0x000010, "Wrong alignment on Ftuple_L_Kchar_Mtransform_M_Kchar_R");
static_assert(sizeof(Ftuple_L_Kchar_Mtransform_M_Kchar_R) == 0x000080, "Wrong size on Ftuple_L_Kchar_Mtransform_M_Kchar_R");
static_assert(offsetof(Ftuple_L_Kchar_Mtransform_M_Kchar_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_L_Kchar_Mtransform_M_Kchar_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Kchar_Mtransform_M_Kchar_R, __verse_0x7D844C3C_Elem1) == 0x000010, "Member 'Ftuple_L_Kchar_Mtransform_M_Kchar_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Kchar_Mtransform_M_Kchar_R, __verse_0x932BF92E_Elem2) == 0x000070, "Member 'Ftuple_L_Kchar_Mtransform_M_Kchar_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mstatic__mesh_Mmaterial_R final
{
public:
	TArray<class UClass*>                         __verse_0x18E3F084_Elem0;
	struct FSpatialMath_transform                 __verse_0x7D844C3C_Elem1;
	FVerseStringProperty_                         __verse_0x932BF92E_Elem2;
	class UAssets_static_mesh*                    __verse_0xF64C4596_Elem3;
	class UAssets_material*                       __verse_0x4F74920B_Elem4;
};
static_assert(alignof(Ftuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mstatic__mesh_Mmaterial_R) == 0x000010, "Wrong alignment on Ftuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mstatic__mesh_Mmaterial_R");
static_assert(sizeof(Ftuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mstatic__mesh_Mmaterial_R) == 0x000090, "Wrong size on Ftuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mstatic__mesh_Mmaterial_R");
static_assert(offsetof(Ftuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mstatic__mesh_Mmaterial_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mstatic__mesh_Mmaterial_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mstatic__mesh_Mmaterial_R, __verse_0x7D844C3C_Elem1) == 0x000010, "Member 'Ftuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mstatic__mesh_Mmaterial_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mstatic__mesh_Mmaterial_R, __verse_0x932BF92E_Elem2) == 0x000070, "Member 'Ftuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mstatic__mesh_Mmaterial_R::__verse_0x932BF92E_Elem2' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mstatic__mesh_Mmaterial_R, __verse_0xF64C4596_Elem3) == 0x000080, "Member 'Ftuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mstatic__mesh_Mmaterial_R::__verse_0xF64C4596_Elem3' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mstatic__mesh_Mmaterial_R, __verse_0x4F74920B_Elem4) == 0x000088, "Member 'Ftuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mstatic__mesh_Mmaterial_R::__verse_0x4F74920B_Elem4' has a wrong offset!");

struct Ftuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mstatic__mesh_R final
{
public:
	TArray<class UClass*>                         __verse_0x18E3F084_Elem0;
	struct FSpatialMath_transform                 __verse_0x7D844C3C_Elem1;
	FVerseStringProperty_                         __verse_0x932BF92E_Elem2;
	class UAssets_static_mesh*                    __verse_0xF64C4596_Elem3;
};
static_assert(alignof(Ftuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mstatic__mesh_R) == 0x000010, "Wrong alignment on Ftuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mstatic__mesh_R");
static_assert(sizeof(Ftuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mstatic__mesh_R) == 0x000090, "Wrong size on Ftuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mstatic__mesh_R");
static_assert(offsetof(Ftuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mstatic__mesh_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mstatic__mesh_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mstatic__mesh_R, __verse_0x7D844C3C_Elem1) == 0x000010, "Member 'Ftuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mstatic__mesh_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mstatic__mesh_R, __verse_0x932BF92E_Elem2) == 0x000070, "Member 'Ftuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mstatic__mesh_R::__verse_0x932BF92E_Elem2' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mstatic__mesh_R, __verse_0xF64C4596_Elem3) == 0x000080, "Member 'Ftuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mstatic__mesh_R::__verse_0xF64C4596_Elem3' has a wrong offset!");

struct Ftuple_L_Ksubtype_Lcomponent_R_Mvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R final
{
public:
	TArray<class UClass*>                         __verse_0x18E3F084_Elem0;
	struct FSpatialMath_vector3                   __verse_0x7D844C3C_Elem1;
	uint8                                         Pad_28[0x8];
	struct FVerseRotation                         __verse_0x932BF92E_Elem2;
	struct FSpatialMath_vector3                   __verse_0xF64C4596_Elem3;
	FVerseStringProperty_                         __verse_0x4F74920B_Elem4;
	class UAssets_static_mesh*                    __verse_0x2A132EB3_Elem5;
	class UAssets_material*                       __verse_0xC4BC9BA1_Elem6;
};
static_assert(alignof(Ftuple_L_Ksubtype_Lcomponent_R_Mvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R) == 0x000010, "Wrong alignment on Ftuple_L_Ksubtype_Lcomponent_R_Mvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R");
static_assert(sizeof(Ftuple_L_Ksubtype_Lcomponent_R_Mvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R) == 0x000090, "Wrong size on Ftuple_L_Ksubtype_Lcomponent_R_Mvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R");
static_assert(offsetof(Ftuple_L_Ksubtype_Lcomponent_R_Mvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_L_Ksubtype_Lcomponent_R_Mvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Ksubtype_Lcomponent_R_Mvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R, __verse_0x7D844C3C_Elem1) == 0x000010, "Member 'Ftuple_L_Ksubtype_Lcomponent_R_Mvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Ksubtype_Lcomponent_R_Mvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R, __verse_0x932BF92E_Elem2) == 0x000030, "Member 'Ftuple_L_Ksubtype_Lcomponent_R_Mvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R::__verse_0x932BF92E_Elem2' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Ksubtype_Lcomponent_R_Mvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R, __verse_0xF64C4596_Elem3) == 0x000050, "Member 'Ftuple_L_Ksubtype_Lcomponent_R_Mvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R::__verse_0xF64C4596_Elem3' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Ksubtype_Lcomponent_R_Mvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R, __verse_0x4F74920B_Elem4) == 0x000068, "Member 'Ftuple_L_Ksubtype_Lcomponent_R_Mvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R::__verse_0x4F74920B_Elem4' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Ksubtype_Lcomponent_R_Mvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R, __verse_0x2A132EB3_Elem5) == 0x000078, "Member 'Ftuple_L_Ksubtype_Lcomponent_R_Mvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R::__verse_0x2A132EB3_Elem5' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Ksubtype_Lcomponent_R_Mvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R, __verse_0xC4BC9BA1_Elem6) == 0x000080, "Member 'Ftuple_L_Ksubtype_Lcomponent_R_Mvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R::__verse_0xC4BC9BA1_Elem6' has a wrong offset!");

struct Ftuple_L_Ktype_Lany_M_20component_R_Mtransform_M_Kchar_Mstatic__mesh_R final
{
public:
	TArray<class UClass*>                         __verse_0x18E3F084_Elem0;
	struct FSpatialMath_transform                 __verse_0x7D844C3C_Elem1;
	FVerseStringProperty_                         __verse_0x932BF92E_Elem2;
	class UAssets_static_mesh*                    __verse_0xF64C4596_Elem3;
};
static_assert(alignof(Ftuple_L_Ktype_Lany_M_20component_R_Mtransform_M_Kchar_Mstatic__mesh_R) == 0x000010, "Wrong alignment on Ftuple_L_Ktype_Lany_M_20component_R_Mtransform_M_Kchar_Mstatic__mesh_R");
static_assert(sizeof(Ftuple_L_Ktype_Lany_M_20component_R_Mtransform_M_Kchar_Mstatic__mesh_R) == 0x000090, "Wrong size on Ftuple_L_Ktype_Lany_M_20component_R_Mtransform_M_Kchar_Mstatic__mesh_R");
static_assert(offsetof(Ftuple_L_Ktype_Lany_M_20component_R_Mtransform_M_Kchar_Mstatic__mesh_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_L_Ktype_Lany_M_20component_R_Mtransform_M_Kchar_Mstatic__mesh_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Ktype_Lany_M_20component_R_Mtransform_M_Kchar_Mstatic__mesh_R, __verse_0x7D844C3C_Elem1) == 0x000010, "Member 'Ftuple_L_Ktype_Lany_M_20component_R_Mtransform_M_Kchar_Mstatic__mesh_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Ktype_Lany_M_20component_R_Mtransform_M_Kchar_Mstatic__mesh_R, __verse_0x932BF92E_Elem2) == 0x000070, "Member 'Ftuple_L_Ktype_Lany_M_20component_R_Mtransform_M_Kchar_Mstatic__mesh_R::__verse_0x932BF92E_Elem2' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Ktype_Lany_M_20component_R_Mtransform_M_Kchar_Mstatic__mesh_R, __verse_0xF64C4596_Elem3) == 0x000080, "Member 'Ftuple_L_Ktype_Lany_M_20component_R_Mtransform_M_Kchar_Mstatic__mesh_R::__verse_0xF64C4596_Elem3' has a wrong offset!");

struct VGameplayRst_0::Ftuple_L_R final
{
public:
	uint8                                         _StructPaddingDummy;
};
static_assert(alignof(VGameplayRst_0::Ftuple_L_R) == 0x000001, "Wrong alignment on VGameplayRst_0::Ftuple_L_R");
static_assert(sizeof(VGameplayRst_0::Ftuple_L_R) == 0x000001, "Wrong size on VGameplayRst_0::Ftuple_L_R");
static_assert(offsetof(VGameplayRst_0::Ftuple_L_R, _StructPaddingDummy) == 0x000000, "Member 'VGameplayRst_0::Ftuple_L_R::_StructPaddingDummy' has a wrong offset!");

struct VGameplayRst_0::Ftuple_Lcomponent_Many_R final
{
public:
	class UEntityComponent*                       __verse_0x18E3F084_Elem0;
	class UClass*                                 __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(VGameplayRst_0::Ftuple_Lcomponent_Many_R) == 0x000008, "Wrong alignment on VGameplayRst_0::Ftuple_Lcomponent_Many_R");
static_assert(sizeof(VGameplayRst_0::Ftuple_Lcomponent_Many_R) == 0x000010, "Wrong size on VGameplayRst_0::Ftuple_Lcomponent_Many_R");
static_assert(offsetof(VGameplayRst_0::Ftuple_Lcomponent_Many_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'VGameplayRst_0::Ftuple_Lcomponent_Many_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(VGameplayRst_0::Ftuple_Lcomponent_Many_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'VGameplayRst_0::Ftuple_Lcomponent_Many_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lcomponent_Mint_Many_R final
{
public:
	class UEntityComponent*                       __verse_0x18E3F084_Elem0;
	int64                                         __verse_0x7D844C3C_Elem1;
	class UClass*                                 __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_Lcomponent_Mint_Many_R) == 0x000008, "Wrong alignment on Ftuple_Lcomponent_Mint_Many_R");
static_assert(sizeof(Ftuple_Lcomponent_Mint_Many_R) == 0x000018, "Wrong size on Ftuple_Lcomponent_Mint_Many_R");
static_assert(offsetof(Ftuple_Lcomponent_Mint_Many_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lcomponent_Mint_Many_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lcomponent_Mint_Many_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lcomponent_Mint_Many_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lcomponent_Mint_Many_R, __verse_0x932BF92E_Elem2) == 0x000010, "Member 'Ftuple_Lcomponent_Mint_Many_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Lcomponent_Mphysics__trace__category_Mphysics__trace__type_Mphysics__trace__shape_Mphysics__trace__channel_Mvector3_Mvector3_Mlogic_Mvector3_Mfloat_M_Kchar_R final
{
public:
	class UEntityComponent*                       __verse_0x18E3F084_Elem0;
	EVGameplayRst_Physics_physics_trace_category  __verse_0x7D844C3C_Elem1;
	EVGameplayRst_Physics_physics_trace_type      __verse_0x932BF92E_Elem2;
	EVGameplayRst_Physics_physics_trace_shape     __verse_0xF64C4596_Elem3;
	EVGameplayRst_Physics_physics_trace_channel   __verse_0x4F74920B_Elem4;
	uint8                                         Pad_C[0x4];
	struct FSpatialMath_vector3                   __verse_0x2A132EB3_Elem5;
	struct FSpatialMath_vector3                   __verse_0xC4BC9BA1_Elem6;
	uint8                                         __verse_0xA1DB2719_Elem7 : 1;
	uint8                                         Pad_41[0x7];
	struct FSpatialMath_vector3                   __verse_0xF7CB4441_Elem8;
	double                                        __verse_0x92ACF8F9_Elem9;
	FVerseStringProperty_                         __verse_0x2E90A5DD_Elem10;
};
static_assert(alignof(Ftuple_Lcomponent_Mphysics__trace__category_Mphysics__trace__type_Mphysics__trace__shape_Mphysics__trace__channel_Mvector3_Mvector3_Mlogic_Mvector3_Mfloat_M_Kchar_R) == 0x000008, "Wrong alignment on Ftuple_Lcomponent_Mphysics__trace__category_Mphysics__trace__type_Mphysics__trace__shape_Mphysics__trace__channel_Mvector3_Mvector3_Mlogic_Mvector3_Mfloat_M_Kchar_R");
static_assert(sizeof(Ftuple_Lcomponent_Mphysics__trace__category_Mphysics__trace__type_Mphysics__trace__shape_Mphysics__trace__channel_Mvector3_Mvector3_Mlogic_Mvector3_Mfloat_M_Kchar_R) == 0x000078, "Wrong size on Ftuple_Lcomponent_Mphysics__trace__category_Mphysics__trace__type_Mphysics__trace__shape_Mphysics__trace__channel_Mvector3_Mvector3_Mlogic_Mvector3_Mfloat_M_Kchar_R");
static_assert(offsetof(Ftuple_Lcomponent_Mphysics__trace__category_Mphysics__trace__type_Mphysics__trace__shape_Mphysics__trace__channel_Mvector3_Mvector3_Mlogic_Mvector3_Mfloat_M_Kchar_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lcomponent_Mphysics__trace__category_Mphysics__trace__type_Mphysics__trace__shape_Mphysics__trace__channel_Mvector3_Mvector3_Mlogic_Mvector3_Mfloat_M_Kchar_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lcomponent_Mphysics__trace__category_Mphysics__trace__type_Mphysics__trace__shape_Mphysics__trace__channel_Mvector3_Mvector3_Mlogic_Mvector3_Mfloat_M_Kchar_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lcomponent_Mphysics__trace__category_Mphysics__trace__type_Mphysics__trace__shape_Mphysics__trace__channel_Mvector3_Mvector3_Mlogic_Mvector3_Mfloat_M_Kchar_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lcomponent_Mphysics__trace__category_Mphysics__trace__type_Mphysics__trace__shape_Mphysics__trace__channel_Mvector3_Mvector3_Mlogic_Mvector3_Mfloat_M_Kchar_R, __verse_0x932BF92E_Elem2) == 0x000009, "Member 'Ftuple_Lcomponent_Mphysics__trace__category_Mphysics__trace__type_Mphysics__trace__shape_Mphysics__trace__channel_Mvector3_Mvector3_Mlogic_Mvector3_Mfloat_M_Kchar_R::__verse_0x932BF92E_Elem2' has a wrong offset!");
static_assert(offsetof(Ftuple_Lcomponent_Mphysics__trace__category_Mphysics__trace__type_Mphysics__trace__shape_Mphysics__trace__channel_Mvector3_Mvector3_Mlogic_Mvector3_Mfloat_M_Kchar_R, __verse_0xF64C4596_Elem3) == 0x00000A, "Member 'Ftuple_Lcomponent_Mphysics__trace__category_Mphysics__trace__type_Mphysics__trace__shape_Mphysics__trace__channel_Mvector3_Mvector3_Mlogic_Mvector3_Mfloat_M_Kchar_R::__verse_0xF64C4596_Elem3' has a wrong offset!");
static_assert(offsetof(Ftuple_Lcomponent_Mphysics__trace__category_Mphysics__trace__type_Mphysics__trace__shape_Mphysics__trace__channel_Mvector3_Mvector3_Mlogic_Mvector3_Mfloat_M_Kchar_R, __verse_0x4F74920B_Elem4) == 0x00000B, "Member 'Ftuple_Lcomponent_Mphysics__trace__category_Mphysics__trace__type_Mphysics__trace__shape_Mphysics__trace__channel_Mvector3_Mvector3_Mlogic_Mvector3_Mfloat_M_Kchar_R::__verse_0x4F74920B_Elem4' has a wrong offset!");
static_assert(offsetof(Ftuple_Lcomponent_Mphysics__trace__category_Mphysics__trace__type_Mphysics__trace__shape_Mphysics__trace__channel_Mvector3_Mvector3_Mlogic_Mvector3_Mfloat_M_Kchar_R, __verse_0x2A132EB3_Elem5) == 0x000010, "Member 'Ftuple_Lcomponent_Mphysics__trace__category_Mphysics__trace__type_Mphysics__trace__shape_Mphysics__trace__channel_Mvector3_Mvector3_Mlogic_Mvector3_Mfloat_M_Kchar_R::__verse_0x2A132EB3_Elem5' has a wrong offset!");
static_assert(offsetof(Ftuple_Lcomponent_Mphysics__trace__category_Mphysics__trace__type_Mphysics__trace__shape_Mphysics__trace__channel_Mvector3_Mvector3_Mlogic_Mvector3_Mfloat_M_Kchar_R, __verse_0xC4BC9BA1_Elem6) == 0x000028, "Member 'Ftuple_Lcomponent_Mphysics__trace__category_Mphysics__trace__type_Mphysics__trace__shape_Mphysics__trace__channel_Mvector3_Mvector3_Mlogic_Mvector3_Mfloat_M_Kchar_R::__verse_0xC4BC9BA1_Elem6' has a wrong offset!");
static_assert(offsetof(Ftuple_Lcomponent_Mphysics__trace__category_Mphysics__trace__type_Mphysics__trace__shape_Mphysics__trace__channel_Mvector3_Mvector3_Mlogic_Mvector3_Mfloat_M_Kchar_R, __verse_0xF7CB4441_Elem8) == 0x000048, "Member 'Ftuple_Lcomponent_Mphysics__trace__category_Mphysics__trace__type_Mphysics__trace__shape_Mphysics__trace__channel_Mvector3_Mvector3_Mlogic_Mvector3_Mfloat_M_Kchar_R::__verse_0xF7CB4441_Elem8' has a wrong offset!");
static_assert(offsetof(Ftuple_Lcomponent_Mphysics__trace__category_Mphysics__trace__type_Mphysics__trace__shape_Mphysics__trace__channel_Mvector3_Mvector3_Mlogic_Mvector3_Mfloat_M_Kchar_R, __verse_0x92ACF8F9_Elem9) == 0x000060, "Member 'Ftuple_Lcomponent_Mphysics__trace__category_Mphysics__trace__type_Mphysics__trace__shape_Mphysics__trace__channel_Mvector3_Mvector3_Mlogic_Mvector3_Mfloat_M_Kchar_R::__verse_0x92ACF8F9_Elem9' has a wrong offset!");
static_assert(offsetof(Ftuple_Lcomponent_Mphysics__trace__category_Mphysics__trace__type_Mphysics__trace__shape_Mphysics__trace__channel_Mvector3_Mvector3_Mlogic_Mvector3_Mfloat_M_Kchar_R, __verse_0x2E90A5DD_Elem10) == 0x000068, "Member 'Ftuple_Lcomponent_Mphysics__trace__category_Mphysics__trace__type_Mphysics__trace__shape_Mphysics__trace__channel_Mvector3_Mvector3_Mlogic_Mvector3_Mfloat_M_Kchar_R::__verse_0x2E90A5DD_Elem10' has a wrong offset!");

struct Ftuple_Lentity_M_Ksubtype_Lcomponent_R_R final
{
public:
	class UVerseEngine_Entity_entity*             __verse_0x18E3F084_Elem0;
	TArray<class UClass*>                         __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lentity_M_Ksubtype_Lcomponent_R_R) == 0x000008, "Wrong alignment on Ftuple_Lentity_M_Ksubtype_Lcomponent_R_R");
static_assert(sizeof(Ftuple_Lentity_M_Ksubtype_Lcomponent_R_R) == 0x000018, "Wrong size on Ftuple_Lentity_M_Ksubtype_Lcomponent_R_R");
static_assert(offsetof(Ftuple_Lentity_M_Ksubtype_Lcomponent_R_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lentity_M_Ksubtype_Lcomponent_R_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lentity_M_Ksubtype_Lcomponent_R_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lentity_M_Ksubtype_Lcomponent_R_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lentity_M_Ktype_Lany_M_20component_R_R final
{
public:
	class UVerseEngine_Entity_entity*             __verse_0x18E3F084_Elem0;
	TArray<class UClass*>                         __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lentity_M_Ktype_Lany_M_20component_R_R) == 0x000008, "Wrong alignment on Ftuple_Lentity_M_Ktype_Lany_M_20component_R_R");
static_assert(sizeof(Ftuple_Lentity_M_Ktype_Lany_M_20component_R_R) == 0x000018, "Wrong size on Ftuple_Lentity_M_Ktype_Lany_M_20component_R_R");
static_assert(offsetof(Ftuple_Lentity_M_Ktype_Lany_M_20component_R_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lentity_M_Ktype_Lany_M_20component_R_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lentity_M_Ktype_Lany_M_20component_R_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lentity_M_Ktype_Lany_M_20component_R_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lfloat_Mactivation__state_R final
{
public:
	double                                        __verse_0x18E3F084_Elem0;
	EVGameplayRst_Components_activation_state     __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lfloat_Mactivation__state_R) == 0x000008, "Wrong alignment on Ftuple_Lfloat_Mactivation__state_R");
static_assert(sizeof(Ftuple_Lfloat_Mactivation__state_R) == 0x000010, "Wrong size on Ftuple_Lfloat_Mactivation__state_R");
static_assert(offsetof(Ftuple_Lfloat_Mactivation__state_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lfloat_Mactivation__state_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lfloat_Mactivation__state_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lfloat_Mactivation__state_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct VGameplayRst_0::Ftuple_Lfloat_Mfloat_R final
{
public:
	double                                        __verse_0x18E3F084_Elem0;
	double                                        __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(VGameplayRst_0::Ftuple_Lfloat_Mfloat_R) == 0x000008, "Wrong alignment on VGameplayRst_0::Ftuple_Lfloat_Mfloat_R");
static_assert(sizeof(VGameplayRst_0::Ftuple_Lfloat_Mfloat_R) == 0x000010, "Wrong size on VGameplayRst_0::Ftuple_Lfloat_Mfloat_R");
static_assert(offsetof(VGameplayRst_0::Ftuple_Lfloat_Mfloat_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'VGameplayRst_0::Ftuple_Lfloat_Mfloat_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(VGameplayRst_0::Ftuple_Lfloat_Mfloat_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'VGameplayRst_0::Ftuple_Lfloat_Mfloat_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lfloat_Mlogic_R final
{
public:
	double                                        __verse_0x18E3F084_Elem0;
	uint8                                         __verse_0x7D844C3C_Elem1 : 1;
};
static_assert(alignof(Ftuple_Lfloat_Mlogic_R) == 0x000008, "Wrong alignment on Ftuple_Lfloat_Mlogic_R");
static_assert(sizeof(Ftuple_Lfloat_Mlogic_R) == 0x000010, "Wrong size on Ftuple_Lfloat_Mlogic_R");
static_assert(offsetof(Ftuple_Lfloat_Mlogic_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lfloat_Mlogic_R::__verse_0x18E3F084_Elem0' has a wrong offset!");

struct Ftuple_Lint_Mcomponent_R final
{
public:
	int64                                         __verse_0x18E3F084_Elem0;
	class UClass*                                 __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lint_Mcomponent_R) == 0x000008, "Wrong alignment on Ftuple_Lint_Mcomponent_R");
static_assert(sizeof(Ftuple_Lint_Mcomponent_R) == 0x000010, "Wrong size on Ftuple_Lint_Mcomponent_R");
static_assert(offsetof(Ftuple_Lint_Mcomponent_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lint_Mcomponent_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lint_Mcomponent_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lint_Mcomponent_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Llevel_Mtime__span_M_Kchar_R final
{
public:
	class UAssets_level*                          __verse_0x18E3F084_Elem0;
	struct FVerseExperimental_time_span           __verse_0x7D844C3C_Elem1;
	FVerseStringProperty_                         __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_Llevel_Mtime__span_M_Kchar_R) == 0x000008, "Wrong alignment on Ftuple_Llevel_Mtime__span_M_Kchar_R");
static_assert(sizeof(Ftuple_Llevel_Mtime__span_M_Kchar_R) == 0x000028, "Wrong size on Ftuple_Llevel_Mtime__span_M_Kchar_R");
static_assert(offsetof(Ftuple_Llevel_Mtime__span_M_Kchar_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Llevel_Mtime__span_M_Kchar_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Llevel_Mtime__span_M_Kchar_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Llevel_Mtime__span_M_Kchar_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Llevel_Mtime__span_M_Kchar_R, __verse_0x932BF92E_Elem2) == 0x000018, "Member 'Ftuple_Llevel_Mtime__span_M_Kchar_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Llogic_Mlogic_R final
{
public:
	uint8                                         __verse_0x18E3F084_Elem0 : 1;
	uint8                                         BitPad_0_1 : 7;
	uint8                                         __verse_0x7D844C3C_Elem1 : 1;
};
static_assert(alignof(Ftuple_Llogic_Mlogic_R) == 0x000001, "Wrong alignment on Ftuple_Llogic_Mlogic_R");
static_assert(sizeof(Ftuple_Llogic_Mlogic_R) == 0x000002, "Wrong size on Ftuple_Llogic_Mlogic_R");

struct Ftuple_Lmaterial_Mint_R final
{
public:
	class UAssets_material*                       __verse_0x18E3F084_Elem0;
	int64                                         __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lmaterial_Mint_R) == 0x000008, "Wrong alignment on Ftuple_Lmaterial_Mint_R");
static_assert(sizeof(Ftuple_Lmaterial_Mint_R) == 0x000010, "Wrong size on Ftuple_Lmaterial_Mint_R");
static_assert(offsetof(Ftuple_Lmaterial_Mint_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lmaterial_Mint_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lmaterial_Mint_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lmaterial_Mint_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lplayer__component_M_Kchar_M_Kchar_R final
{
public:
	class USimulation_player_component*           __verse_0x18E3F084_Elem0;
	FVerseStringProperty_                         __verse_0x7D844C3C_Elem1;
	FVerseStringProperty_                         __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_Lplayer__component_M_Kchar_M_Kchar_R) == 0x000008, "Wrong alignment on Ftuple_Lplayer__component_M_Kchar_M_Kchar_R");
static_assert(sizeof(Ftuple_Lplayer__component_M_Kchar_M_Kchar_R) == 0x000028, "Wrong size on Ftuple_Lplayer__component_M_Kchar_M_Kchar_R");
static_assert(offsetof(Ftuple_Lplayer__component_M_Kchar_M_Kchar_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lplayer__component_M_Kchar_M_Kchar_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lplayer__component_M_Kchar_M_Kchar_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lplayer__component_M_Kchar_M_Kchar_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lplayer__component_M_Kchar_M_Kchar_R, __verse_0x932BF92E_Elem2) == 0x000018, "Member 'Ftuple_Lplayer__component_M_Kchar_M_Kchar_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Lplayer__component_M_Kchar_Mint_R final
{
public:
	class USimulation_player_component*           __verse_0x18E3F084_Elem0;
	FVerseStringProperty_                         __verse_0x7D844C3C_Elem1;
	int64                                         __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_Lplayer__component_M_Kchar_Mint_R) == 0x000008, "Wrong alignment on Ftuple_Lplayer__component_M_Kchar_Mint_R");
static_assert(sizeof(Ftuple_Lplayer__component_M_Kchar_Mint_R) == 0x000020, "Wrong size on Ftuple_Lplayer__component_M_Kchar_Mint_R");
static_assert(offsetof(Ftuple_Lplayer__component_M_Kchar_Mint_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lplayer__component_M_Kchar_Mint_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lplayer__component_M_Kchar_Mint_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lplayer__component_M_Kchar_Mint_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lplayer__component_M_Kchar_Mint_R, __verse_0x932BF92E_Elem2) == 0x000018, "Member 'Ftuple_Lplayer__component_M_Kchar_Mint_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct VGameplayRst_0::Ftuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R final
{
public:
	struct FVerseRotation                         __verse_0x18E3F084_Elem0;
	struct VGameplayRst_0::Ftuple_L_R             __verse_0x7D844C3C_Elem1;
	struct VGameplayRst_0::Ftuple_L_R             __verse_0x932BF92E_Elem2;
};
static_assert(alignof(VGameplayRst_0::Ftuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R) == 0x000010, "Wrong alignment on VGameplayRst_0::Ftuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R");
static_assert(sizeof(VGameplayRst_0::Ftuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R) == 0x000030, "Wrong size on VGameplayRst_0::Ftuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R");
static_assert(offsetof(VGameplayRst_0::Ftuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'VGameplayRst_0::Ftuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(VGameplayRst_0::Ftuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R, __verse_0x7D844C3C_Elem1) == 0x000020, "Member 'VGameplayRst_0::Ftuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(VGameplayRst_0::Ftuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R, __verse_0x932BF92E_Elem2) == 0x000021, "Member 'VGameplayRst_0::Ftuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Ltime__span_M_Kchar_R final
{
public:
	struct FVerseExperimental_time_span           __verse_0x18E3F084_Elem0;
	FVerseStringProperty_                         __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Ltime__span_M_Kchar_R) == 0x000008, "Wrong alignment on Ftuple_Ltime__span_M_Kchar_R");
static_assert(sizeof(Ftuple_Ltime__span_M_Kchar_R) == 0x000020, "Wrong size on Ftuple_Ltime__span_M_Kchar_R");
static_assert(offsetof(Ftuple_Ltime__span_M_Kchar_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Ltime__span_M_Kchar_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Ltime__span_M_Kchar_R, __verse_0x7D844C3C_Elem1) == 0x000010, "Member 'Ftuple_Ltime__span_M_Kchar_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Ltransform_M_Kchar_Mstatic__mesh_Mmaterial_R final
{
public:
	struct FSpatialMath_transform                 __verse_0x18E3F084_Elem0;
	FVerseStringProperty_                         __verse_0x7D844C3C_Elem1;
	class UAssets_static_mesh*                    __verse_0x932BF92E_Elem2;
	class UAssets_material*                       __verse_0xF64C4596_Elem3;
};
static_assert(alignof(Ftuple_Ltransform_M_Kchar_Mstatic__mesh_Mmaterial_R) == 0x000010, "Wrong alignment on Ftuple_Ltransform_M_Kchar_Mstatic__mesh_Mmaterial_R");
static_assert(sizeof(Ftuple_Ltransform_M_Kchar_Mstatic__mesh_Mmaterial_R) == 0x000080, "Wrong size on Ftuple_Ltransform_M_Kchar_Mstatic__mesh_Mmaterial_R");
static_assert(offsetof(Ftuple_Ltransform_M_Kchar_Mstatic__mesh_Mmaterial_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Ltransform_M_Kchar_Mstatic__mesh_Mmaterial_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Ltransform_M_Kchar_Mstatic__mesh_Mmaterial_R, __verse_0x7D844C3C_Elem1) == 0x000060, "Member 'Ftuple_Ltransform_M_Kchar_Mstatic__mesh_Mmaterial_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Ltransform_M_Kchar_Mstatic__mesh_Mmaterial_R, __verse_0x932BF92E_Elem2) == 0x000070, "Member 'Ftuple_Ltransform_M_Kchar_Mstatic__mesh_Mmaterial_R::__verse_0x932BF92E_Elem2' has a wrong offset!");
static_assert(offsetof(Ftuple_Ltransform_M_Kchar_Mstatic__mesh_Mmaterial_R, __verse_0xF64C4596_Elem3) == 0x000078, "Member 'Ftuple_Ltransform_M_Kchar_Mstatic__mesh_Mmaterial_R::__verse_0xF64C4596_Elem3' has a wrong offset!");

struct Ftuple_Ltransform_M_Kchar_Mstatic__mesh_R final
{
public:
	struct FSpatialMath_transform                 __verse_0x18E3F084_Elem0;
	FVerseStringProperty_                         __verse_0x7D844C3C_Elem1;
	class UAssets_static_mesh*                    __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_Ltransform_M_Kchar_Mstatic__mesh_R) == 0x000010, "Wrong alignment on Ftuple_Ltransform_M_Kchar_Mstatic__mesh_R");
static_assert(sizeof(Ftuple_Ltransform_M_Kchar_Mstatic__mesh_R) == 0x000080, "Wrong size on Ftuple_Ltransform_M_Kchar_Mstatic__mesh_R");
static_assert(offsetof(Ftuple_Ltransform_M_Kchar_Mstatic__mesh_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Ltransform_M_Kchar_Mstatic__mesh_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Ltransform_M_Kchar_Mstatic__mesh_R, __verse_0x7D844C3C_Elem1) == 0x000060, "Member 'Ftuple_Ltransform_M_Kchar_Mstatic__mesh_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Ltransform_M_Kchar_Mstatic__mesh_R, __verse_0x932BF92E_Elem2) == 0x000070, "Member 'Ftuple_Ltransform_M_Kchar_Mstatic__mesh_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Ltransform_M_Kchar_R final
{
public:
	struct FSpatialMath_transform                 __verse_0x18E3F084_Elem0;
	FVerseStringProperty_                         __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Ltransform_M_Kchar_R) == 0x000010, "Wrong alignment on Ftuple_Ltransform_M_Kchar_R");
static_assert(sizeof(Ftuple_Ltransform_M_Kchar_R) == 0x000070, "Wrong size on Ftuple_Ltransform_M_Kchar_R");
static_assert(offsetof(Ftuple_Ltransform_M_Kchar_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Ltransform_M_Kchar_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Ltransform_M_Kchar_R, __verse_0x7D844C3C_Elem1) == 0x000060, "Member 'Ftuple_Ltransform_M_Kchar_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lvector3_M_Kchar_Mstatic__mesh_Mmaterial_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0x18E3F084_Elem0;
	FVerseStringProperty_                         __verse_0x7D844C3C_Elem1;
	class UAssets_static_mesh*                    __verse_0x932BF92E_Elem2;
	class UAssets_material*                       __verse_0xF64C4596_Elem3;
};
static_assert(alignof(Ftuple_Lvector3_M_Kchar_Mstatic__mesh_Mmaterial_R) == 0x000008, "Wrong alignment on Ftuple_Lvector3_M_Kchar_Mstatic__mesh_Mmaterial_R");
static_assert(sizeof(Ftuple_Lvector3_M_Kchar_Mstatic__mesh_Mmaterial_R) == 0x000038, "Wrong size on Ftuple_Lvector3_M_Kchar_Mstatic__mesh_Mmaterial_R");
static_assert(offsetof(Ftuple_Lvector3_M_Kchar_Mstatic__mesh_Mmaterial_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lvector3_M_Kchar_Mstatic__mesh_Mmaterial_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_M_Kchar_Mstatic__mesh_Mmaterial_R, __verse_0x7D844C3C_Elem1) == 0x000018, "Member 'Ftuple_Lvector3_M_Kchar_Mstatic__mesh_Mmaterial_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_M_Kchar_Mstatic__mesh_Mmaterial_R, __verse_0x932BF92E_Elem2) == 0x000028, "Member 'Ftuple_Lvector3_M_Kchar_Mstatic__mesh_Mmaterial_R::__verse_0x932BF92E_Elem2' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_M_Kchar_Mstatic__mesh_Mmaterial_R, __verse_0xF64C4596_Elem3) == 0x000030, "Member 'Ftuple_Lvector3_M_Kchar_Mstatic__mesh_Mmaterial_R::__verse_0xF64C4596_Elem3' has a wrong offset!");

struct VGameplayRst_0::Ftuple_Lvector3_M_Kchar_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0x18E3F084_Elem0;
	FVerseStringProperty_                         __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(VGameplayRst_0::Ftuple_Lvector3_M_Kchar_R) == 0x000008, "Wrong alignment on VGameplayRst_0::Ftuple_Lvector3_M_Kchar_R");
static_assert(sizeof(VGameplayRst_0::Ftuple_Lvector3_M_Kchar_R) == 0x000028, "Wrong size on VGameplayRst_0::Ftuple_Lvector3_M_Kchar_R");
static_assert(offsetof(VGameplayRst_0::Ftuple_Lvector3_M_Kchar_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'VGameplayRst_0::Ftuple_Lvector3_M_Kchar_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(VGameplayRst_0::Ftuple_Lvector3_M_Kchar_R, __verse_0x7D844C3C_Elem1) == 0x000018, "Member 'VGameplayRst_0::Ftuple_Lvector3_M_Kchar_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lvector3_M_QParams_Npoint__draw__params_20_3d_20_2e_2e_2e_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0x18E3F084_Elem0;
	FOptionProperty_                              __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lvector3_M_QParams_Npoint__draw__params_20_3d_20_2e_2e_2e_R) == 0x000008, "Wrong alignment on Ftuple_Lvector3_M_QParams_Npoint__draw__params_20_3d_20_2e_2e_2e_R");
static_assert(sizeof(Ftuple_Lvector3_M_QParams_Npoint__draw__params_20_3d_20_2e_2e_2e_R) == 0x000058, "Wrong size on Ftuple_Lvector3_M_QParams_Npoint__draw__params_20_3d_20_2e_2e_2e_R");
static_assert(offsetof(Ftuple_Lvector3_M_QParams_Npoint__draw__params_20_3d_20_2e_2e_2e_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lvector3_M_QParams_Npoint__draw__params_20_3d_20_2e_2e_2e_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_M_QParams_Npoint__draw__params_20_3d_20_2e_2e_2e_R, __verse_0x7D844C3C_Elem1) == 0x000018, "Member 'Ftuple_Lvector3_M_QParams_Npoint__draw__params_20_3d_20_2e_2e_2e_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct VGameplayRst_0::Ftuple_Lvector3_M_QParams_Nsphere__draw__params_20_3d_20_2e_2e_2e_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0x18E3F084_Elem0;
	FOptionProperty_                              __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(VGameplayRst_0::Ftuple_Lvector3_M_QParams_Nsphere__draw__params_20_3d_20_2e_2e_2e_R) == 0x000008, "Wrong alignment on VGameplayRst_0::Ftuple_Lvector3_M_QParams_Nsphere__draw__params_20_3d_20_2e_2e_2e_R");
static_assert(sizeof(VGameplayRst_0::Ftuple_Lvector3_M_QParams_Nsphere__draw__params_20_3d_20_2e_2e_2e_R) == 0x000068, "Wrong size on VGameplayRst_0::Ftuple_Lvector3_M_QParams_Nsphere__draw__params_20_3d_20_2e_2e_2e_R");
static_assert(offsetof(VGameplayRst_0::Ftuple_Lvector3_M_QParams_Nsphere__draw__params_20_3d_20_2e_2e_2e_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'VGameplayRst_0::Ftuple_Lvector3_M_QParams_Nsphere__draw__params_20_3d_20_2e_2e_2e_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(VGameplayRst_0::Ftuple_Lvector3_M_QParams_Nsphere__draw__params_20_3d_20_2e_2e_2e_R, __verse_0x7D844C3C_Elem1) == 0x000018, "Member 'VGameplayRst_0::Ftuple_Lvector3_M_QParams_Nsphere__draw__params_20_3d_20_2e_2e_2e_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lvector3_Mrotation_M_Kchar_Mstatic__mesh_Mmaterial_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0x18E3F084_Elem0;
	uint8                                         Pad_18[0x8];
	struct FVerseRotation                         __verse_0x7D844C3C_Elem1;
	FVerseStringProperty_                         __verse_0x932BF92E_Elem2;
	class UAssets_static_mesh*                    __verse_0xF64C4596_Elem3;
	class UAssets_material*                       __verse_0x4F74920B_Elem4;
};
static_assert(alignof(Ftuple_Lvector3_Mrotation_M_Kchar_Mstatic__mesh_Mmaterial_R) == 0x000010, "Wrong alignment on Ftuple_Lvector3_Mrotation_M_Kchar_Mstatic__mesh_Mmaterial_R");
static_assert(sizeof(Ftuple_Lvector3_Mrotation_M_Kchar_Mstatic__mesh_Mmaterial_R) == 0x000060, "Wrong size on Ftuple_Lvector3_Mrotation_M_Kchar_Mstatic__mesh_Mmaterial_R");
static_assert(offsetof(Ftuple_Lvector3_Mrotation_M_Kchar_Mstatic__mesh_Mmaterial_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lvector3_Mrotation_M_Kchar_Mstatic__mesh_Mmaterial_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_Mrotation_M_Kchar_Mstatic__mesh_Mmaterial_R, __verse_0x7D844C3C_Elem1) == 0x000020, "Member 'Ftuple_Lvector3_Mrotation_M_Kchar_Mstatic__mesh_Mmaterial_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_Mrotation_M_Kchar_Mstatic__mesh_Mmaterial_R, __verse_0x932BF92E_Elem2) == 0x000040, "Member 'Ftuple_Lvector3_Mrotation_M_Kchar_Mstatic__mesh_Mmaterial_R::__verse_0x932BF92E_Elem2' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_Mrotation_M_Kchar_Mstatic__mesh_Mmaterial_R, __verse_0xF64C4596_Elem3) == 0x000050, "Member 'Ftuple_Lvector3_Mrotation_M_Kchar_Mstatic__mesh_Mmaterial_R::__verse_0xF64C4596_Elem3' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_Mrotation_M_Kchar_Mstatic__mesh_Mmaterial_R, __verse_0x4F74920B_Elem4) == 0x000058, "Member 'Ftuple_Lvector3_Mrotation_M_Kchar_Mstatic__mesh_Mmaterial_R::__verse_0x4F74920B_Elem4' has a wrong offset!");

struct Ftuple_Lvector3_Mrotation_M_QParams_Nbox__draw__params_20_3d_20_2e_2e_2e_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0x18E3F084_Elem0;
	uint8                                         Pad_18[0x8];
	struct FVerseRotation                         __verse_0x7D844C3C_Elem1;
	FOptionProperty_                              __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_Lvector3_Mrotation_M_QParams_Nbox__draw__params_20_3d_20_2e_2e_2e_R) == 0x000010, "Wrong alignment on Ftuple_Lvector3_Mrotation_M_QParams_Nbox__draw__params_20_3d_20_2e_2e_2e_R");
static_assert(sizeof(Ftuple_Lvector3_Mrotation_M_QParams_Nbox__draw__params_20_3d_20_2e_2e_2e_R) == 0x0000A0, "Wrong size on Ftuple_Lvector3_Mrotation_M_QParams_Nbox__draw__params_20_3d_20_2e_2e_2e_R");
static_assert(offsetof(Ftuple_Lvector3_Mrotation_M_QParams_Nbox__draw__params_20_3d_20_2e_2e_2e_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lvector3_Mrotation_M_QParams_Nbox__draw__params_20_3d_20_2e_2e_2e_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_Mrotation_M_QParams_Nbox__draw__params_20_3d_20_2e_2e_2e_R, __verse_0x7D844C3C_Elem1) == 0x000020, "Member 'Ftuple_Lvector3_Mrotation_M_QParams_Nbox__draw__params_20_3d_20_2e_2e_2e_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_Mrotation_M_QParams_Nbox__draw__params_20_3d_20_2e_2e_2e_R, __verse_0x932BF92E_Elem2) == 0x000040, "Member 'Ftuple_Lvector3_Mrotation_M_QParams_Nbox__draw__params_20_3d_20_2e_2e_2e_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Lvector3_Mrotation_M_QParams_Ncapsule__draw__params_20_3d_20_2e_2e_2e_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0x18E3F084_Elem0;
	uint8                                         Pad_18[0x8];
	struct FVerseRotation                         __verse_0x7D844C3C_Elem1;
	FOptionProperty_                              __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_Lvector3_Mrotation_M_QParams_Ncapsule__draw__params_20_3d_20_2e_2e_2e_R) == 0x000010, "Wrong alignment on Ftuple_Lvector3_Mrotation_M_QParams_Ncapsule__draw__params_20_3d_20_2e_2e_2e_R");
static_assert(sizeof(Ftuple_Lvector3_Mrotation_M_QParams_Ncapsule__draw__params_20_3d_20_2e_2e_2e_R) == 0x000090, "Wrong size on Ftuple_Lvector3_Mrotation_M_QParams_Ncapsule__draw__params_20_3d_20_2e_2e_2e_R");
static_assert(offsetof(Ftuple_Lvector3_Mrotation_M_QParams_Ncapsule__draw__params_20_3d_20_2e_2e_2e_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lvector3_Mrotation_M_QParams_Ncapsule__draw__params_20_3d_20_2e_2e_2e_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_Mrotation_M_QParams_Ncapsule__draw__params_20_3d_20_2e_2e_2e_R, __verse_0x7D844C3C_Elem1) == 0x000020, "Member 'Ftuple_Lvector3_Mrotation_M_QParams_Ncapsule__draw__params_20_3d_20_2e_2e_2e_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_Mrotation_M_QParams_Ncapsule__draw__params_20_3d_20_2e_2e_2e_R, __verse_0x932BF92E_Elem2) == 0x000040, "Member 'Ftuple_Lvector3_Mrotation_M_QParams_Ncapsule__draw__params_20_3d_20_2e_2e_2e_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Lvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0x18E3F084_Elem0;
	uint8                                         Pad_18[0x8];
	struct FVerseRotation                         __verse_0x7D844C3C_Elem1;
	struct FSpatialMath_vector3                   __verse_0x932BF92E_Elem2;
	FVerseStringProperty_                         __verse_0xF64C4596_Elem3;
	class UAssets_static_mesh*                    __verse_0x4F74920B_Elem4;
	class UAssets_material*                       __verse_0x2A132EB3_Elem5;
};
static_assert(alignof(Ftuple_Lvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R) == 0x000010, "Wrong alignment on Ftuple_Lvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R");
static_assert(sizeof(Ftuple_Lvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R) == 0x000080, "Wrong size on Ftuple_Lvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R");
static_assert(offsetof(Ftuple_Lvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R, __verse_0x7D844C3C_Elem1) == 0x000020, "Member 'Ftuple_Lvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R, __verse_0x932BF92E_Elem2) == 0x000040, "Member 'Ftuple_Lvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R::__verse_0x932BF92E_Elem2' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R, __verse_0xF64C4596_Elem3) == 0x000058, "Member 'Ftuple_Lvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R::__verse_0xF64C4596_Elem3' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R, __verse_0x4F74920B_Elem4) == 0x000068, "Member 'Ftuple_Lvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R::__verse_0x4F74920B_Elem4' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R, __verse_0x2A132EB3_Elem5) == 0x000070, "Member 'Ftuple_Lvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R::__verse_0x2A132EB3_Elem5' has a wrong offset!");

struct Ftuple_Lvector3_Mvector3_M_QParams_Narrow__draw__params_20_3d_20_2e_2e_2e_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0x18E3F084_Elem0;
	struct FSpatialMath_vector3                   __verse_0x7D844C3C_Elem1;
	FOptionProperty_                              __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_Lvector3_Mvector3_M_QParams_Narrow__draw__params_20_3d_20_2e_2e_2e_R) == 0x000008, "Wrong alignment on Ftuple_Lvector3_Mvector3_M_QParams_Narrow__draw__params_20_3d_20_2e_2e_2e_R");
static_assert(sizeof(Ftuple_Lvector3_Mvector3_M_QParams_Narrow__draw__params_20_3d_20_2e_2e_2e_R) == 0x000078, "Wrong size on Ftuple_Lvector3_Mvector3_M_QParams_Narrow__draw__params_20_3d_20_2e_2e_2e_R");
static_assert(offsetof(Ftuple_Lvector3_Mvector3_M_QParams_Narrow__draw__params_20_3d_20_2e_2e_2e_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lvector3_Mvector3_M_QParams_Narrow__draw__params_20_3d_20_2e_2e_2e_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_Mvector3_M_QParams_Narrow__draw__params_20_3d_20_2e_2e_2e_R, __verse_0x7D844C3C_Elem1) == 0x000018, "Member 'Ftuple_Lvector3_Mvector3_M_QParams_Narrow__draw__params_20_3d_20_2e_2e_2e_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_Mvector3_M_QParams_Narrow__draw__params_20_3d_20_2e_2e_2e_R, __verse_0x932BF92E_Elem2) == 0x000030, "Member 'Ftuple_Lvector3_Mvector3_M_QParams_Narrow__draw__params_20_3d_20_2e_2e_2e_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Lvector3_Mvector3_M_QParams_Ncone__draw__params_20_3d_20_2e_2e_2e_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0x18E3F084_Elem0;
	struct FSpatialMath_vector3                   __verse_0x7D844C3C_Elem1;
	FOptionProperty_                              __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_Lvector3_Mvector3_M_QParams_Ncone__draw__params_20_3d_20_2e_2e_2e_R) == 0x000008, "Wrong alignment on Ftuple_Lvector3_Mvector3_M_QParams_Ncone__draw__params_20_3d_20_2e_2e_2e_R");
static_assert(sizeof(Ftuple_Lvector3_Mvector3_M_QParams_Ncone__draw__params_20_3d_20_2e_2e_2e_R) == 0x000090, "Wrong size on Ftuple_Lvector3_Mvector3_M_QParams_Ncone__draw__params_20_3d_20_2e_2e_2e_R");
static_assert(offsetof(Ftuple_Lvector3_Mvector3_M_QParams_Ncone__draw__params_20_3d_20_2e_2e_2e_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lvector3_Mvector3_M_QParams_Ncone__draw__params_20_3d_20_2e_2e_2e_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_Mvector3_M_QParams_Ncone__draw__params_20_3d_20_2e_2e_2e_R, __verse_0x7D844C3C_Elem1) == 0x000018, "Member 'Ftuple_Lvector3_Mvector3_M_QParams_Ncone__draw__params_20_3d_20_2e_2e_2e_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_Mvector3_M_QParams_Ncone__draw__params_20_3d_20_2e_2e_2e_R, __verse_0x932BF92E_Elem2) == 0x000030, "Member 'Ftuple_Lvector3_Mvector3_M_QParams_Ncone__draw__params_20_3d_20_2e_2e_2e_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Lvector3_Mvector3_M_QParams_Ncylinder__draw__params_20_3d_20_2e_2e_2e_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0x18E3F084_Elem0;
	struct FSpatialMath_vector3                   __verse_0x7D844C3C_Elem1;
	FOptionProperty_                              __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_Lvector3_Mvector3_M_QParams_Ncylinder__draw__params_20_3d_20_2e_2e_2e_R) == 0x000008, "Wrong alignment on Ftuple_Lvector3_Mvector3_M_QParams_Ncylinder__draw__params_20_3d_20_2e_2e_2e_R");
static_assert(sizeof(Ftuple_Lvector3_Mvector3_M_QParams_Ncylinder__draw__params_20_3d_20_2e_2e_2e_R) == 0x000090, "Wrong size on Ftuple_Lvector3_Mvector3_M_QParams_Ncylinder__draw__params_20_3d_20_2e_2e_2e_R");
static_assert(offsetof(Ftuple_Lvector3_Mvector3_M_QParams_Ncylinder__draw__params_20_3d_20_2e_2e_2e_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lvector3_Mvector3_M_QParams_Ncylinder__draw__params_20_3d_20_2e_2e_2e_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_Mvector3_M_QParams_Ncylinder__draw__params_20_3d_20_2e_2e_2e_R, __verse_0x7D844C3C_Elem1) == 0x000018, "Member 'Ftuple_Lvector3_Mvector3_M_QParams_Ncylinder__draw__params_20_3d_20_2e_2e_2e_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_Mvector3_M_QParams_Ncylinder__draw__params_20_3d_20_2e_2e_2e_R, __verse_0x932BF92E_Elem2) == 0x000030, "Member 'Ftuple_Lvector3_Mvector3_M_QParams_Ncylinder__draw__params_20_3d_20_2e_2e_2e_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Lvector3_Mvector3_M_QParams_Nline__draw__params_20_3d_20_2e_2e_2e_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0x18E3F084_Elem0;
	struct FSpatialMath_vector3                   __verse_0x7D844C3C_Elem1;
	FOptionProperty_                              __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_Lvector3_Mvector3_M_QParams_Nline__draw__params_20_3d_20_2e_2e_2e_R) == 0x000008, "Wrong alignment on Ftuple_Lvector3_Mvector3_M_QParams_Nline__draw__params_20_3d_20_2e_2e_2e_R");
static_assert(sizeof(Ftuple_Lvector3_Mvector3_M_QParams_Nline__draw__params_20_3d_20_2e_2e_2e_R) == 0x000070, "Wrong size on Ftuple_Lvector3_Mvector3_M_QParams_Nline__draw__params_20_3d_20_2e_2e_2e_R");
static_assert(offsetof(Ftuple_Lvector3_Mvector3_M_QParams_Nline__draw__params_20_3d_20_2e_2e_2e_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lvector3_Mvector3_M_QParams_Nline__draw__params_20_3d_20_2e_2e_2e_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_Mvector3_M_QParams_Nline__draw__params_20_3d_20_2e_2e_2e_R, __verse_0x7D844C3C_Elem1) == 0x000018, "Member 'Ftuple_Lvector3_Mvector3_M_QParams_Nline__draw__params_20_3d_20_2e_2e_2e_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_Mvector3_M_QParams_Nline__draw__params_20_3d_20_2e_2e_2e_R, __verse_0x932BF92E_Elem2) == 0x000030, "Member 'Ftuple_Lvector3_Mvector3_M_QParams_Nline__draw__params_20_3d_20_2e_2e_2e_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Lvector3_Mvector3_Mvector3_M_Kchar_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0x18E3F084_Elem0;
	struct FSpatialMath_vector3                   __verse_0x7D844C3C_Elem1;
	struct FSpatialMath_vector3                   __verse_0x932BF92E_Elem2;
	FVerseStringProperty_                         __verse_0xF64C4596_Elem3;
};
static_assert(alignof(Ftuple_Lvector3_Mvector3_Mvector3_M_Kchar_R) == 0x000008, "Wrong alignment on Ftuple_Lvector3_Mvector3_Mvector3_M_Kchar_R");
static_assert(sizeof(Ftuple_Lvector3_Mvector3_Mvector3_M_Kchar_R) == 0x000058, "Wrong size on Ftuple_Lvector3_Mvector3_Mvector3_M_Kchar_R");
static_assert(offsetof(Ftuple_Lvector3_Mvector3_Mvector3_M_Kchar_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lvector3_Mvector3_Mvector3_M_Kchar_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_Mvector3_Mvector3_M_Kchar_R, __verse_0x7D844C3C_Elem1) == 0x000018, "Member 'Ftuple_Lvector3_Mvector3_Mvector3_M_Kchar_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_Mvector3_Mvector3_M_Kchar_R, __verse_0x932BF92E_Elem2) == 0x000030, "Member 'Ftuple_Lvector3_Mvector3_Mvector3_M_Kchar_R::__verse_0x932BF92E_Elem2' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_Mvector3_Mvector3_M_Kchar_R, __verse_0xF64C4596_Elem3) == 0x000048, "Member 'Ftuple_Lvector3_Mvector3_Mvector3_M_Kchar_R::__verse_0xF64C4596_Elem3' has a wrong offset!");

struct VGameplayRst_0::Ftuple_Lvector3_Mvector3_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0x18E3F084_Elem0;
	struct FSpatialMath_vector3                   __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(VGameplayRst_0::Ftuple_Lvector3_Mvector3_R) == 0x000008, "Wrong alignment on VGameplayRst_0::Ftuple_Lvector3_Mvector3_R");
static_assert(sizeof(VGameplayRst_0::Ftuple_Lvector3_Mvector3_R) == 0x000030, "Wrong size on VGameplayRst_0::Ftuple_Lvector3_Mvector3_R");
static_assert(offsetof(VGameplayRst_0::Ftuple_Lvector3_Mvector3_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'VGameplayRst_0::Ftuple_Lvector3_Mvector3_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(VGameplayRst_0::Ftuple_Lvector3_Mvector3_R, __verse_0x7D844C3C_Elem1) == 0x000018, "Member 'VGameplayRst_0::Ftuple_Lvector3_Mvector3_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct FVGameplayRst_DebugDraw_arrow_draw_params final
{
public:
	double                                        __verse_0xF97B0595_ArrowSize;
	struct FColors_color                          __verse_0x65678AC7_Color;
	double                                        __verse_0x6C915C14_Thickness;
	EVGameplayRst_DebugDraw_draw_duration_policy  __verse_0x0DBBEBBF_DrawDurationPolicy;
	uint8                                         Pad_29[0x7];
	FOptionProperty_                              __verse_0xFC2FBF02_Duration;
	uint8                                         Pad_39[0x7];
};
static_assert(alignof(FVGameplayRst_DebugDraw_arrow_draw_params) == 0x000008, "Wrong alignment on FVGameplayRst_DebugDraw_arrow_draw_params");
static_assert(sizeof(FVGameplayRst_DebugDraw_arrow_draw_params) == 0x000040, "Wrong size on FVGameplayRst_DebugDraw_arrow_draw_params");
static_assert(offsetof(FVGameplayRst_DebugDraw_arrow_draw_params, __verse_0xF97B0595_ArrowSize) == 0x000000, "Member 'FVGameplayRst_DebugDraw_arrow_draw_params::__verse_0xF97B0595_ArrowSize' has a wrong offset!");
static_assert(offsetof(FVGameplayRst_DebugDraw_arrow_draw_params, __verse_0x65678AC7_Color) == 0x000008, "Member 'FVGameplayRst_DebugDraw_arrow_draw_params::__verse_0x65678AC7_Color' has a wrong offset!");
static_assert(offsetof(FVGameplayRst_DebugDraw_arrow_draw_params, __verse_0x6C915C14_Thickness) == 0x000020, "Member 'FVGameplayRst_DebugDraw_arrow_draw_params::__verse_0x6C915C14_Thickness' has a wrong offset!");
static_assert(offsetof(FVGameplayRst_DebugDraw_arrow_draw_params, __verse_0x0DBBEBBF_DrawDurationPolicy) == 0x000028, "Member 'FVGameplayRst_DebugDraw_arrow_draw_params::__verse_0x0DBBEBBF_DrawDurationPolicy' has a wrong offset!");
static_assert(offsetof(FVGameplayRst_DebugDraw_arrow_draw_params, __verse_0xFC2FBF02_Duration) == 0x000030, "Member 'FVGameplayRst_DebugDraw_arrow_draw_params::__verse_0xFC2FBF02_Duration' has a wrong offset!");

struct FVGameplayRst_DebugDraw_box_draw_params final
{
public:
	struct FSpatialMath_vector3                   __verse_0xA327BDA5_Extent;
	struct FColors_color                          __verse_0x65678AC7_Color;
	double                                        __verse_0x6C915C14_Thickness;
	EVGameplayRst_DebugDraw_draw_duration_policy  __verse_0x0DBBEBBF_DrawDurationPolicy;
	uint8                                         Pad_39[0x7];
	FOptionProperty_                              __verse_0xFC2FBF02_Duration;
	uint8                                         Pad_49[0x7];
};
static_assert(alignof(FVGameplayRst_DebugDraw_box_draw_params) == 0x000008, "Wrong alignment on FVGameplayRst_DebugDraw_box_draw_params");
static_assert(sizeof(FVGameplayRst_DebugDraw_box_draw_params) == 0x000050, "Wrong size on FVGameplayRst_DebugDraw_box_draw_params");
static_assert(offsetof(FVGameplayRst_DebugDraw_box_draw_params, __verse_0xA327BDA5_Extent) == 0x000000, "Member 'FVGameplayRst_DebugDraw_box_draw_params::__verse_0xA327BDA5_Extent' has a wrong offset!");
static_assert(offsetof(FVGameplayRst_DebugDraw_box_draw_params, __verse_0x65678AC7_Color) == 0x000018, "Member 'FVGameplayRst_DebugDraw_box_draw_params::__verse_0x65678AC7_Color' has a wrong offset!");
static_assert(offsetof(FVGameplayRst_DebugDraw_box_draw_params, __verse_0x6C915C14_Thickness) == 0x000030, "Member 'FVGameplayRst_DebugDraw_box_draw_params::__verse_0x6C915C14_Thickness' has a wrong offset!");
static_assert(offsetof(FVGameplayRst_DebugDraw_box_draw_params, __verse_0x0DBBEBBF_DrawDurationPolicy) == 0x000038, "Member 'FVGameplayRst_DebugDraw_box_draw_params::__verse_0x0DBBEBBF_DrawDurationPolicy' has a wrong offset!");
static_assert(offsetof(FVGameplayRst_DebugDraw_box_draw_params, __verse_0xFC2FBF02_Duration) == 0x000040, "Member 'FVGameplayRst_DebugDraw_box_draw_params::__verse_0xFC2FBF02_Duration' has a wrong offset!");

struct FVGameplayRst_DebugDraw_capsule_draw_params final
{
public:
	double                                        __verse_0x32A63D0C_Height;
	double                                        __verse_0xE34F9FAC_Radius;
	struct FColors_color                          __verse_0x65678AC7_Color;
	double                                        __verse_0x6C915C14_Thickness;
	EVGameplayRst_DebugDraw_draw_duration_policy  __verse_0x0DBBEBBF_DrawDurationPolicy;
	uint8                                         Pad_31[0x7];
	FOptionProperty_                              __verse_0xFC2FBF02_Duration;
	uint8                                         Pad_41[0x7];
};
static_assert(alignof(FVGameplayRst_DebugDraw_capsule_draw_params) == 0x000008, "Wrong alignment on FVGameplayRst_DebugDraw_capsule_draw_params");
static_assert(sizeof(FVGameplayRst_DebugDraw_capsule_draw_params) == 0x000048, "Wrong size on FVGameplayRst_DebugDraw_capsule_draw_params");
static_assert(offsetof(FVGameplayRst_DebugDraw_capsule_draw_params, __verse_0x32A63D0C_Height) == 0x000000, "Member 'FVGameplayRst_DebugDraw_capsule_draw_params::__verse_0x32A63D0C_Height' has a wrong offset!");
static_assert(offsetof(FVGameplayRst_DebugDraw_capsule_draw_params, __verse_0xE34F9FAC_Radius) == 0x000008, "Member 'FVGameplayRst_DebugDraw_capsule_draw_params::__verse_0xE34F9FAC_Radius' has a wrong offset!");
static_assert(offsetof(FVGameplayRst_DebugDraw_capsule_draw_params, __verse_0x65678AC7_Color) == 0x000010, "Member 'FVGameplayRst_DebugDraw_capsule_draw_params::__verse_0x65678AC7_Color' has a wrong offset!");
static_assert(offsetof(FVGameplayRst_DebugDraw_capsule_draw_params, __verse_0x6C915C14_Thickness) == 0x000028, "Member 'FVGameplayRst_DebugDraw_capsule_draw_params::__verse_0x6C915C14_Thickness' has a wrong offset!");
static_assert(offsetof(FVGameplayRst_DebugDraw_capsule_draw_params, __verse_0x0DBBEBBF_DrawDurationPolicy) == 0x000030, "Member 'FVGameplayRst_DebugDraw_capsule_draw_params::__verse_0x0DBBEBBF_DrawDurationPolicy' has a wrong offset!");
static_assert(offsetof(FVGameplayRst_DebugDraw_capsule_draw_params, __verse_0xFC2FBF02_Duration) == 0x000038, "Member 'FVGameplayRst_DebugDraw_capsule_draw_params::__verse_0xFC2FBF02_Duration' has a wrong offset!");

struct FVGameplayRst_DebugDraw_cone_draw_params final
{
public:
	double                                        __verse_0x32A63D0C_Height;
	double                                        __verse_0x48019537_NumSides;
	double                                        __verse_0x75E7ED0A_AngleWidth;
	double                                        __verse_0xA92ED403_AngleHeight;
	struct FColors_color                          __verse_0x65678AC7_Color;
	double                                        __verse_0x6C915C14_Thickness;
	EVGameplayRst_DebugDraw_draw_duration_policy  __verse_0x0DBBEBBF_DrawDurationPolicy;
	uint8                                         Pad_41[0x7];
	FOptionProperty_                              __verse_0xFC2FBF02_Duration;
	uint8                                         Pad_51[0x7];
};
static_assert(alignof(FVGameplayRst_DebugDraw_cone_draw_params) == 0x000008, "Wrong alignment on FVGameplayRst_DebugDraw_cone_draw_params");
static_assert(sizeof(FVGameplayRst_DebugDraw_cone_draw_params) == 0x000058, "Wrong size on FVGameplayRst_DebugDraw_cone_draw_params");
static_assert(offsetof(FVGameplayRst_DebugDraw_cone_draw_params, __verse_0x32A63D0C_Height) == 0x000000, "Member 'FVGameplayRst_DebugDraw_cone_draw_params::__verse_0x32A63D0C_Height' has a wrong offset!");
static_assert(offsetof(FVGameplayRst_DebugDraw_cone_draw_params, __verse_0x48019537_NumSides) == 0x000008, "Member 'FVGameplayRst_DebugDraw_cone_draw_params::__verse_0x48019537_NumSides' has a wrong offset!");
static_assert(offsetof(FVGameplayRst_DebugDraw_cone_draw_params, __verse_0x75E7ED0A_AngleWidth) == 0x000010, "Member 'FVGameplayRst_DebugDraw_cone_draw_params::__verse_0x75E7ED0A_AngleWidth' has a wrong offset!");
static_assert(offsetof(FVGameplayRst_DebugDraw_cone_draw_params, __verse_0xA92ED403_AngleHeight) == 0x000018, "Member 'FVGameplayRst_DebugDraw_cone_draw_params::__verse_0xA92ED403_AngleHeight' has a wrong offset!");
static_assert(offsetof(FVGameplayRst_DebugDraw_cone_draw_params, __verse_0x65678AC7_Color) == 0x000020, "Member 'FVGameplayRst_DebugDraw_cone_draw_params::__verse_0x65678AC7_Color' has a wrong offset!");
static_assert(offsetof(FVGameplayRst_DebugDraw_cone_draw_params, __verse_0x6C915C14_Thickness) == 0x000038, "Member 'FVGameplayRst_DebugDraw_cone_draw_params::__verse_0x6C915C14_Thickness' has a wrong offset!");
static_assert(offsetof(FVGameplayRst_DebugDraw_cone_draw_params, __verse_0x0DBBEBBF_DrawDurationPolicy) == 0x000040, "Member 'FVGameplayRst_DebugDraw_cone_draw_params::__verse_0x0DBBEBBF_DrawDurationPolicy' has a wrong offset!");
static_assert(offsetof(FVGameplayRst_DebugDraw_cone_draw_params, __verse_0xFC2FBF02_Duration) == 0x000048, "Member 'FVGameplayRst_DebugDraw_cone_draw_params::__verse_0xFC2FBF02_Duration' has a wrong offset!");

struct FVGameplayRst_DebugDraw_cylinder_draw_params final
{
public:
	FOptionProperty_                              __verse_0xFC2FBF02_Duration;
	uint8                                         Pad_9[0x7];
	double                                        __verse_0x652D1E0A_NumSegments;
	double                                        __verse_0xE34F9FAC_Radius;
	struct FColors_color                          __verse_0x65678AC7_Color;
	double                                        __verse_0x6C915C14_Thickness;
	EVGameplayRst_DebugDraw_draw_duration_policy  __verse_0x0DBBEBBF_DrawDurationPolicy;
	uint8                                         Pad_41[0x17];
};
static_assert(alignof(FVGameplayRst_DebugDraw_cylinder_draw_params) == 0x000008, "Wrong alignment on FVGameplayRst_DebugDraw_cylinder_draw_params");
static_assert(sizeof(FVGameplayRst_DebugDraw_cylinder_draw_params) == 0x000058, "Wrong size on FVGameplayRst_DebugDraw_cylinder_draw_params");
static_assert(offsetof(FVGameplayRst_DebugDraw_cylinder_draw_params, __verse_0xFC2FBF02_Duration) == 0x000000, "Member 'FVGameplayRst_DebugDraw_cylinder_draw_params::__verse_0xFC2FBF02_Duration' has a wrong offset!");
static_assert(offsetof(FVGameplayRst_DebugDraw_cylinder_draw_params, __verse_0x652D1E0A_NumSegments) == 0x000010, "Member 'FVGameplayRst_DebugDraw_cylinder_draw_params::__verse_0x652D1E0A_NumSegments' has a wrong offset!");
static_assert(offsetof(FVGameplayRst_DebugDraw_cylinder_draw_params, __verse_0xE34F9FAC_Radius) == 0x000018, "Member 'FVGameplayRst_DebugDraw_cylinder_draw_params::__verse_0xE34F9FAC_Radius' has a wrong offset!");
static_assert(offsetof(FVGameplayRst_DebugDraw_cylinder_draw_params, __verse_0x65678AC7_Color) == 0x000020, "Member 'FVGameplayRst_DebugDraw_cylinder_draw_params::__verse_0x65678AC7_Color' has a wrong offset!");
static_assert(offsetof(FVGameplayRst_DebugDraw_cylinder_draw_params, __verse_0x6C915C14_Thickness) == 0x000038, "Member 'FVGameplayRst_DebugDraw_cylinder_draw_params::__verse_0x6C915C14_Thickness' has a wrong offset!");
static_assert(offsetof(FVGameplayRst_DebugDraw_cylinder_draw_params, __verse_0x0DBBEBBF_DrawDurationPolicy) == 0x000040, "Member 'FVGameplayRst_DebugDraw_cylinder_draw_params::__verse_0x0DBBEBBF_DrawDurationPolicy' has a wrong offset!");

struct FVGameplayRst_DebugDraw_line_draw_params final
{
public:
	struct FColors_color                          __verse_0x65678AC7_Color;
	double                                        __verse_0x6C915C14_Thickness;
	EVGameplayRst_DebugDraw_draw_duration_policy  __verse_0x0DBBEBBF_DrawDurationPolicy;
	uint8                                         Pad_21[0x7];
	FOptionProperty_                              __verse_0xFC2FBF02_Duration;
	uint8                                         Pad_31[0x7];
};
static_assert(alignof(FVGameplayRst_DebugDraw_line_draw_params) == 0x000008, "Wrong alignment on FVGameplayRst_DebugDraw_line_draw_params");
static_assert(sizeof(FVGameplayRst_DebugDraw_line_draw_params) == 0x000038, "Wrong size on FVGameplayRst_DebugDraw_line_draw_params");
static_assert(offsetof(FVGameplayRst_DebugDraw_line_draw_params, __verse_0x65678AC7_Color) == 0x000000, "Member 'FVGameplayRst_DebugDraw_line_draw_params::__verse_0x65678AC7_Color' has a wrong offset!");
static_assert(offsetof(FVGameplayRst_DebugDraw_line_draw_params, __verse_0x6C915C14_Thickness) == 0x000018, "Member 'FVGameplayRst_DebugDraw_line_draw_params::__verse_0x6C915C14_Thickness' has a wrong offset!");
static_assert(offsetof(FVGameplayRst_DebugDraw_line_draw_params, __verse_0x0DBBEBBF_DrawDurationPolicy) == 0x000020, "Member 'FVGameplayRst_DebugDraw_line_draw_params::__verse_0x0DBBEBBF_DrawDurationPolicy' has a wrong offset!");
static_assert(offsetof(FVGameplayRst_DebugDraw_line_draw_params, __verse_0xFC2FBF02_Duration) == 0x000028, "Member 'FVGameplayRst_DebugDraw_line_draw_params::__verse_0xFC2FBF02_Duration' has a wrong offset!");

struct FVGameplayRst_DebugDraw_point_draw_params final
{
public:
	struct FColors_color                          __verse_0x65678AC7_Color;
	double                                        __verse_0x6C915C14_Thickness;
	EVGameplayRst_DebugDraw_draw_duration_policy  __verse_0x0DBBEBBF_DrawDurationPolicy;
	uint8                                         Pad_21[0x7];
	FOptionProperty_                              __verse_0xFC2FBF02_Duration;
	uint8                                         Pad_31[0x7];
};
static_assert(alignof(FVGameplayRst_DebugDraw_point_draw_params) == 0x000008, "Wrong alignment on FVGameplayRst_DebugDraw_point_draw_params");
static_assert(sizeof(FVGameplayRst_DebugDraw_point_draw_params) == 0x000038, "Wrong size on FVGameplayRst_DebugDraw_point_draw_params");
static_assert(offsetof(FVGameplayRst_DebugDraw_point_draw_params, __verse_0x65678AC7_Color) == 0x000000, "Member 'FVGameplayRst_DebugDraw_point_draw_params::__verse_0x65678AC7_Color' has a wrong offset!");
static_assert(offsetof(FVGameplayRst_DebugDraw_point_draw_params, __verse_0x6C915C14_Thickness) == 0x000018, "Member 'FVGameplayRst_DebugDraw_point_draw_params::__verse_0x6C915C14_Thickness' has a wrong offset!");
static_assert(offsetof(FVGameplayRst_DebugDraw_point_draw_params, __verse_0x0DBBEBBF_DrawDurationPolicy) == 0x000020, "Member 'FVGameplayRst_DebugDraw_point_draw_params::__verse_0x0DBBEBBF_DrawDurationPolicy' has a wrong offset!");
static_assert(offsetof(FVGameplayRst_DebugDraw_point_draw_params, __verse_0xFC2FBF02_Duration) == 0x000028, "Member 'FVGameplayRst_DebugDraw_point_draw_params::__verse_0xFC2FBF02_Duration' has a wrong offset!");

struct FVGameplayRst_DebugDraw_sphere_draw_params final
{
public:
	double                                        __verse_0xE34F9FAC_Radius;
	double                                        __verse_0x652D1E0A_NumSegments;
	struct FColors_color                          __verse_0x65678AC7_Color;
	double                                        __verse_0x6C915C14_Thickness;
	EVGameplayRst_DebugDraw_draw_duration_policy  __verse_0x0DBBEBBF_DrawDurationPolicy;
	uint8                                         Pad_31[0x7];
	FOptionProperty_                              __verse_0xFC2FBF02_Duration;
	uint8                                         Pad_41[0x7];
};
static_assert(alignof(FVGameplayRst_DebugDraw_sphere_draw_params) == 0x000008, "Wrong alignment on FVGameplayRst_DebugDraw_sphere_draw_params");
static_assert(sizeof(FVGameplayRst_DebugDraw_sphere_draw_params) == 0x000048, "Wrong size on FVGameplayRst_DebugDraw_sphere_draw_params");
static_assert(offsetof(FVGameplayRst_DebugDraw_sphere_draw_params, __verse_0xE34F9FAC_Radius) == 0x000000, "Member 'FVGameplayRst_DebugDraw_sphere_draw_params::__verse_0xE34F9FAC_Radius' has a wrong offset!");
static_assert(offsetof(FVGameplayRst_DebugDraw_sphere_draw_params, __verse_0x652D1E0A_NumSegments) == 0x000008, "Member 'FVGameplayRst_DebugDraw_sphere_draw_params::__verse_0x652D1E0A_NumSegments' has a wrong offset!");
static_assert(offsetof(FVGameplayRst_DebugDraw_sphere_draw_params, __verse_0x65678AC7_Color) == 0x000010, "Member 'FVGameplayRst_DebugDraw_sphere_draw_params::__verse_0x65678AC7_Color' has a wrong offset!");
static_assert(offsetof(FVGameplayRst_DebugDraw_sphere_draw_params, __verse_0x6C915C14_Thickness) == 0x000028, "Member 'FVGameplayRst_DebugDraw_sphere_draw_params::__verse_0x6C915C14_Thickness' has a wrong offset!");
static_assert(offsetof(FVGameplayRst_DebugDraw_sphere_draw_params, __verse_0x0DBBEBBF_DrawDurationPolicy) == 0x000030, "Member 'FVGameplayRst_DebugDraw_sphere_draw_params::__verse_0x0DBBEBBF_DrawDurationPolicy' has a wrong offset!");
static_assert(offsetof(FVGameplayRst_DebugDraw_sphere_draw_params, __verse_0xFC2FBF02_Duration) == 0x000038, "Member 'FVGameplayRst_DebugDraw_sphere_draw_params::__verse_0xFC2FBF02_Duration' has a wrong offset!");

struct FVGameplayRst_Physics_hit_result final
{
public:
	int64                                         __verse_0x592C3A0F_OtherEntityID;
	class UVGameplayRst_Physics_collision_component* __verse_0x15DAA648_OtherComponent;
	struct FSpatialMath_vector3                   __verse_0xA0175DA6_HitNormal;
	struct FSpatialMath_vector3                   __verse_0xE16733E1_HitLocation;
};
static_assert(alignof(FVGameplayRst_Physics_hit_result) == 0x000008, "Wrong alignment on FVGameplayRst_Physics_hit_result");
static_assert(sizeof(FVGameplayRst_Physics_hit_result) == 0x000040, "Wrong size on FVGameplayRst_Physics_hit_result");
static_assert(offsetof(FVGameplayRst_Physics_hit_result, __verse_0x592C3A0F_OtherEntityID) == 0x000000, "Member 'FVGameplayRst_Physics_hit_result::__verse_0x592C3A0F_OtherEntityID' has a wrong offset!");
static_assert(offsetof(FVGameplayRst_Physics_hit_result, __verse_0x15DAA648_OtherComponent) == 0x000008, "Member 'FVGameplayRst_Physics_hit_result::__verse_0x15DAA648_OtherComponent' has a wrong offset!");
static_assert(offsetof(FVGameplayRst_Physics_hit_result, __verse_0xA0175DA6_HitNormal) == 0x000010, "Member 'FVGameplayRst_Physics_hit_result::__verse_0xA0175DA6_HitNormal' has a wrong offset!");
static_assert(offsetof(FVGameplayRst_Physics_hit_result, __verse_0xE16733E1_HitLocation) == 0x000028, "Member 'FVGameplayRst_Physics_hit_result::__verse_0xE16733E1_HitLocation' has a wrong offset!");

}
