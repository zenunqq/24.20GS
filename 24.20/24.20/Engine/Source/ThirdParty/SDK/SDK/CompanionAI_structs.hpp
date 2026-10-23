#pragma once

#include "Basic.hpp"

#include "EpicGamesTemporary_0_structs.hpp"
#include "VerseAIBase_0_structs.hpp"
#include "Verse_structs.hpp"

namespace SDK
{

enum class ECompanionAI_PingCommand_command_type : uint8
{
	go_to                                    = 0,
	back_to_me                               = 1,
	back_to_default                          = 2,
	hold_position                            = 3,
	revive                                   = 4,
	invalid                                  = 5,
	CompanionAI_PingCommand_command_MAX      = 6,
};

enum class ECompanionAI_PingCommand_entity_type : uint8
{
	pawn                                     = 0,
	pickup                                   = 1,
	weapon                                   = 2,
	container                                = 3,
	player_built_actor                       = 4,
	building_actor                           = 5,
	undefined                                = 6,
	CompanionAI_PingCommand_entity_MAX       = 7,
};

struct FCompanionAI_ping_info final
{
public:
	ECompanionAI_PingCommand_command_type         __verse_0x72E298E9_Type;
	ECompanionAI_PingCommand_entity_type          __verse_0x6CF7C7E8_EntityType;
	uint8                                         Pad_2[0x6];
	struct FSpatialMath_vector3                   __verse_0xB0C27E0A_Location;
	uint8                                         __verse_0x0FA78E7E_LocationOnHorizontalSurface : 1;
	uint8                                         Pad_21[0x7];
	FOptionProperty_                              __verse_0x459049A1_Target;
	FOptionProperty_                              __verse_0xFD64D7AA_Emitter;
};
static_assert(alignof(FCompanionAI_ping_info) == 0x000008, "Wrong alignment on FCompanionAI_ping_info");
static_assert(sizeof(FCompanionAI_ping_info) == 0x000038, "Wrong size on FCompanionAI_ping_info");
static_assert(offsetof(FCompanionAI_ping_info, __verse_0x72E298E9_Type) == 0x000000, "Member 'FCompanionAI_ping_info::__verse_0x72E298E9_Type' has a wrong offset!");
static_assert(offsetof(FCompanionAI_ping_info, __verse_0x6CF7C7E8_EntityType) == 0x000001, "Member 'FCompanionAI_ping_info::__verse_0x6CF7C7E8_EntityType' has a wrong offset!");
static_assert(offsetof(FCompanionAI_ping_info, __verse_0xB0C27E0A_Location) == 0x000008, "Member 'FCompanionAI_ping_info::__verse_0xB0C27E0A_Location' has a wrong offset!");
static_assert(offsetof(FCompanionAI_ping_info, __verse_0x459049A1_Target) == 0x000028, "Member 'FCompanionAI_ping_info::__verse_0x459049A1_Target' has a wrong offset!");
static_assert(offsetof(FCompanionAI_ping_info, __verse_0xFD64D7AA_Emitter) == 0x000030, "Member 'FCompanionAI_ping_info::__verse_0xFD64D7AA_Emitter' has a wrong offset!");

struct alignas(0x08) Ftuple_L_Kchar_M_Kchar_M_Kchar_M_Kchar_R final
{
public:
	FVerseStringProperty_                         __verse_0x18E3F084_Elem0;
	FVerseStringProperty_                         __verse_0x7D844C3C_Elem1;
	FVerseStringProperty_                         __verse_0x932BF92E_Elem2;
	FVerseStringProperty_                         __verse_0xF64C4596_Elem3;
};
static_assert(alignof(Ftuple_L_Kchar_M_Kchar_M_Kchar_M_Kchar_R) == 0x000008, "Wrong alignment on Ftuple_L_Kchar_M_Kchar_M_Kchar_M_Kchar_R");
static_assert(sizeof(Ftuple_L_Kchar_M_Kchar_M_Kchar_M_Kchar_R) == 0x000040, "Wrong size on Ftuple_L_Kchar_M_Kchar_M_Kchar_M_Kchar_R");
static_assert(offsetof(Ftuple_L_Kchar_M_Kchar_M_Kchar_M_Kchar_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_L_Kchar_M_Kchar_M_Kchar_M_Kchar_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Kchar_M_Kchar_M_Kchar_M_Kchar_R, __verse_0x7D844C3C_Elem1) == 0x000010, "Member 'Ftuple_L_Kchar_M_Kchar_M_Kchar_M_Kchar_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Kchar_M_Kchar_M_Kchar_M_Kchar_R, __verse_0x932BF92E_Elem2) == 0x000020, "Member 'Ftuple_L_Kchar_M_Kchar_M_Kchar_M_Kchar_R::__verse_0x932BF92E_Elem2' has a wrong offset!");
static_assert(offsetof(Ftuple_L_Kchar_M_Kchar_M_Kchar_M_Kchar_R, __verse_0xF64C4596_Elem3) == 0x000030, "Member 'Ftuple_L_Kchar_M_Kchar_M_Kchar_M_Kchar_R::__verse_0xF64C4596_Elem3' has a wrong offset!");

struct alignas(0x08) CompanionAI::Ftuple_L_Kchar_M_Kchar_R final
{
public:
	FVerseStringProperty_                         __verse_0x18E3F084_Elem0;
	FVerseStringProperty_                         __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(CompanionAI::Ftuple_L_Kchar_M_Kchar_R) == 0x000008, "Wrong alignment on CompanionAI::Ftuple_L_Kchar_M_Kchar_R");
static_assert(sizeof(CompanionAI::Ftuple_L_Kchar_M_Kchar_R) == 0x000020, "Wrong size on CompanionAI::Ftuple_L_Kchar_M_Kchar_R");
static_assert(offsetof(CompanionAI::Ftuple_L_Kchar_M_Kchar_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'CompanionAI::Ftuple_L_Kchar_M_Kchar_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(CompanionAI::Ftuple_L_Kchar_M_Kchar_R, __verse_0x7D844C3C_Elem1) == 0x000010, "Member 'CompanionAI::Ftuple_L_Kchar_M_Kchar_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct alignas(0x08) CompanionAI::Ftuple_L_Kchar_M_QColor_Ncolor_M_QDuration_Nfloat_R final
{
public:
	FVerseStringProperty_                         __verse_0x18E3F084_Elem0;
	FOptionProperty_                              __verse_0x7D844C3C_Elem1;
	uint8                                         Pad_29[0x7];
	FOptionProperty_                              __verse_0x932BF92E_Elem2;
};
static_assert(alignof(CompanionAI::Ftuple_L_Kchar_M_QColor_Ncolor_M_QDuration_Nfloat_R) == 0x000008, "Wrong alignment on CompanionAI::Ftuple_L_Kchar_M_QColor_Ncolor_M_QDuration_Nfloat_R");
static_assert(sizeof(CompanionAI::Ftuple_L_Kchar_M_QColor_Ncolor_M_QDuration_Nfloat_R) == 0x000040, "Wrong size on CompanionAI::Ftuple_L_Kchar_M_QColor_Ncolor_M_QDuration_Nfloat_R");
static_assert(offsetof(CompanionAI::Ftuple_L_Kchar_M_QColor_Ncolor_M_QDuration_Nfloat_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'CompanionAI::Ftuple_L_Kchar_M_QColor_Ncolor_M_QDuration_Nfloat_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(CompanionAI::Ftuple_L_Kchar_M_QColor_Ncolor_M_QDuration_Nfloat_R, __verse_0x7D844C3C_Elem1) == 0x000010, "Member 'CompanionAI::Ftuple_L_Kchar_M_QColor_Ncolor_M_QDuration_Nfloat_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(CompanionAI::Ftuple_L_Kchar_M_QColor_Ncolor_M_QDuration_Nfloat_R, __verse_0x932BF92E_Elem2) == 0x000030, "Member 'CompanionAI::Ftuple_L_Kchar_M_QColor_Ncolor_M_QDuration_Nfloat_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct alignas(0x08) CompanionAI::Ftuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R final
{
public:
	FVerseStringProperty_                         __verse_0x18E3F084_Elem0;
	FOptionProperty_                              __verse_0x7D844C3C_Elem1;
	uint8                                         Pad_19[0x7];
	FOptionProperty_                              __verse_0x932BF92E_Elem2;
};
static_assert(alignof(CompanionAI::Ftuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R) == 0x000008, "Wrong alignment on CompanionAI::Ftuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R");
static_assert(sizeof(CompanionAI::Ftuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R) == 0x000040, "Wrong size on CompanionAI::Ftuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R");
static_assert(offsetof(CompanionAI::Ftuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'CompanionAI::Ftuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(CompanionAI::Ftuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R, __verse_0x7D844C3C_Elem1) == 0x000010, "Member 'CompanionAI::Ftuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(CompanionAI::Ftuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R, __verse_0x932BF92E_Elem2) == 0x000020, "Member 'CompanionAI::Ftuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct alignas(0x08) CompanionAI::Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R final
{
public:
	FVerseStringProperty_                         __verse_0x18E3F084_Elem0;
	FOptionProperty_                              __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(CompanionAI::Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R) == 0x000008, "Wrong alignment on CompanionAI::Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R");
static_assert(sizeof(CompanionAI::Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R) == 0x000018, "Wrong size on CompanionAI::Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R");
static_assert(offsetof(CompanionAI::Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'CompanionAI::Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(CompanionAI::Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R, __verse_0x7D844C3C_Elem1) == 0x000010, "Member 'CompanionAI::Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct CompanionAI::Ftuple_L_R final
{
public:
	uint8                                         _StructPaddingDummy;
};
static_assert(alignof(CompanionAI::Ftuple_L_R) == 0x000001, "Wrong alignment on CompanionAI::Ftuple_L_R");
static_assert(sizeof(CompanionAI::Ftuple_L_R) == 0x000001, "Wrong size on CompanionAI::Ftuple_L_R");
static_assert(offsetof(CompanionAI::Ftuple_L_R, _StructPaddingDummy) == 0x000000, "Member 'CompanionAI::Ftuple_L_R::_StructPaddingDummy' has a wrong offset!");

struct CompanionAI::Ftuple_Lagent_Mfloat_Mfloat_R final
{
public:
	class USimulation_agent*                      __verse_0x18E3F084_Elem0;
	double                                        __verse_0x7D844C3C_Elem1;
	double                                        __verse_0x932BF92E_Elem2;
};
static_assert(alignof(CompanionAI::Ftuple_Lagent_Mfloat_Mfloat_R) == 0x000008, "Wrong alignment on CompanionAI::Ftuple_Lagent_Mfloat_Mfloat_R");
static_assert(sizeof(CompanionAI::Ftuple_Lagent_Mfloat_Mfloat_R) == 0x000018, "Wrong size on CompanionAI::Ftuple_Lagent_Mfloat_Mfloat_R");
static_assert(offsetof(CompanionAI::Ftuple_Lagent_Mfloat_Mfloat_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'CompanionAI::Ftuple_Lagent_Mfloat_Mfloat_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(CompanionAI::Ftuple_Lagent_Mfloat_Mfloat_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'CompanionAI::Ftuple_Lagent_Mfloat_Mfloat_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(CompanionAI::Ftuple_Lagent_Mfloat_Mfloat_R, __verse_0x932BF92E_Elem2) == 0x000010, "Member 'CompanionAI::Ftuple_Lagent_Mfloat_Mfloat_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct CompanionAI::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R final
{
public:
	class USimulation_agent*                      __verse_0x18E3F084_Elem0;
	struct CompanionAI::Ftuple_L_R                __verse_0x7D844C3C_Elem1;
	struct CompanionAI::Ftuple_L_R                __verse_0x932BF92E_Elem2;
};
static_assert(alignof(CompanionAI::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R) == 0x000008, "Wrong alignment on CompanionAI::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R");
static_assert(sizeof(CompanionAI::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R) == 0x000010, "Wrong size on CompanionAI::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R");
static_assert(offsetof(CompanionAI::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'CompanionAI::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(CompanionAI::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'CompanionAI::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(CompanionAI::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R, __verse_0x932BF92E_Elem2) == 0x000009, "Member 'CompanionAI::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct CompanionAI::Ftuple_Lany_Mability__component_R final
{
public:
	class UClass*                                 __verse_0x18E3F084_Elem0;
	class UGame_Abilities_ability_component*      __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(CompanionAI::Ftuple_Lany_Mability__component_R) == 0x000008, "Wrong alignment on CompanionAI::Ftuple_Lany_Mability__component_R");
static_assert(sizeof(CompanionAI::Ftuple_Lany_Mability__component_R) == 0x000010, "Wrong size on CompanionAI::Ftuple_Lany_Mability__component_R");
static_assert(offsetof(CompanionAI::Ftuple_Lany_Mability__component_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'CompanionAI::Ftuple_Lany_Mability__component_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(CompanionAI::Ftuple_Lany_Mability__component_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'CompanionAI::Ftuple_Lany_Mability__component_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lentity_Mtuple_L_R_Mtuple_L_R_R final
{
public:
	class UVerseEngine_Entity_entity*             __verse_0x18E3F084_Elem0;
	struct CompanionAI::Ftuple_L_R                __verse_0x7D844C3C_Elem1;
	struct CompanionAI::Ftuple_L_R                __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_Lentity_Mtuple_L_R_Mtuple_L_R_R) == 0x000008, "Wrong alignment on Ftuple_Lentity_Mtuple_L_R_Mtuple_L_R_R");
static_assert(sizeof(Ftuple_Lentity_Mtuple_L_R_Mtuple_L_R_R) == 0x000010, "Wrong size on Ftuple_Lentity_Mtuple_L_R_Mtuple_L_R_R");
static_assert(offsetof(Ftuple_Lentity_Mtuple_L_R_Mtuple_L_R_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lentity_Mtuple_L_R_Mtuple_L_R_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lentity_Mtuple_L_R_Mtuple_L_R_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lentity_Mtuple_L_R_Mtuple_L_R_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lentity_Mtuple_L_R_Mtuple_L_R_R, __verse_0x932BF92E_Elem2) == 0x000009, "Member 'Ftuple_Lentity_Mtuple_L_R_Mtuple_L_R_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct CompanionAI::Ftuple_Lfloat_Mfloat_R final
{
public:
	double                                        __verse_0x18E3F084_Elem0;
	double                                        __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(CompanionAI::Ftuple_Lfloat_Mfloat_R) == 0x000008, "Wrong alignment on CompanionAI::Ftuple_Lfloat_Mfloat_R");
static_assert(sizeof(CompanionAI::Ftuple_Lfloat_Mfloat_R) == 0x000010, "Wrong size on CompanionAI::Ftuple_Lfloat_Mfloat_R");
static_assert(offsetof(CompanionAI::Ftuple_Lfloat_Mfloat_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'CompanionAI::Ftuple_Lfloat_Mfloat_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(CompanionAI::Ftuple_Lfloat_Mfloat_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'CompanionAI::Ftuple_Lfloat_Mfloat_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lfort__character_Mfloat_R final
{
public:
	class UObject*                                __verse_0x18E3F084_Elem0;
	double                                        __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lfort__character_Mfloat_R) == 0x000008, "Wrong alignment on Ftuple_Lfort__character_Mfloat_R");
static_assert(sizeof(Ftuple_Lfort__character_Mfloat_R) == 0x000010, "Wrong size on Ftuple_Lfort__character_Mfloat_R");
static_assert(offsetof(Ftuple_Lfort__character_Mfloat_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lfort__character_Mfloat_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lfort__character_Mfloat_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lfort__character_Mfloat_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct CompanionAI::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R final
{
public:
	class UObject*                                __verse_0x18E3F084_Elem0;
	struct CompanionAI::Ftuple_L_R                __verse_0x7D844C3C_Elem1;
	struct CompanionAI::Ftuple_L_R                __verse_0x932BF92E_Elem2;
};
static_assert(alignof(CompanionAI::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) == 0x000008, "Wrong alignment on CompanionAI::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R");
static_assert(sizeof(CompanionAI::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) == 0x000010, "Wrong size on CompanionAI::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R");
static_assert(offsetof(CompanionAI::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'CompanionAI::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(CompanionAI::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'CompanionAI::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(CompanionAI::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R, __verse_0x932BF92E_Elem2) == 0x000009, "Member 'CompanionAI::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Lfort__obstacle__info_Mentity_R final
{
public:
	struct FVerseAIBase_fort_obstacle_info        __verse_0x18E3F084_Elem0;
	class UVerseEngine_Entity_entity*             __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lfort__obstacle__info_Mentity_R) == 0x000008, "Wrong alignment on Ftuple_Lfort__obstacle__info_Mentity_R");
static_assert(sizeof(Ftuple_Lfort__obstacle__info_Mentity_R) == 0x000030, "Wrong size on Ftuple_Lfort__obstacle__info_Mentity_R");
static_assert(offsetof(Ftuple_Lfort__obstacle__info_Mentity_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lfort__obstacle__info_Mentity_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lfort__obstacle__info_Mentity_R, __verse_0x7D844C3C_Elem1) == 0x000028, "Member 'Ftuple_Lfort__obstacle__info_Mentity_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct CompanionAI::Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R final
{
public:
	class UVerseAIBase_navigation_target*         __verse_0x18E3F084_Elem0;
	FOptionProperty_                              __verse_0x7D844C3C_Elem1;
	FOptionProperty_                              __verse_0x932BF92E_Elem2;
};
static_assert(alignof(CompanionAI::Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R) == 0x000008, "Wrong alignment on CompanionAI::Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R");
static_assert(sizeof(CompanionAI::Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R) == 0x000018, "Wrong size on CompanionAI::Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R");
static_assert(offsetof(CompanionAI::Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'CompanionAI::Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(CompanionAI::Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'CompanionAI::Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(CompanionAI::Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R, __verse_0x932BF92E_Elem2) == 0x000011, "Member 'CompanionAI::Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_M_QAllowPartialPath_Nlogic_R final
{
public:
	class UVerseAIBase_navigation_target*         __verse_0x18E3F084_Elem0;
	FOptionProperty_                              __verse_0x7D844C3C_Elem1;
	FOptionProperty_                              __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_M_QAllowPartialPath_Nlogic_R) == 0x000008, "Wrong alignment on Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_M_QAllowPartialPath_Nlogic_R");
static_assert(sizeof(Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_M_QAllowPartialPath_Nlogic_R) == 0x000018, "Wrong size on Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_M_QAllowPartialPath_Nlogic_R");
static_assert(offsetof(Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_M_QAllowPartialPath_Nlogic_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_M_QAllowPartialPath_Nlogic_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_M_QAllowPartialPath_Nlogic_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_M_QAllowPartialPath_Nlogic_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_M_QAllowPartialPath_Nlogic_R, __verse_0x932BF92E_Elem2) == 0x000011, "Member 'Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_M_QAllowPartialPath_Nlogic_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Ltype_7b5_2e000000e_2b01_7d_Mtype_7b2_2e000000e_2b02_7d_R final
{
public:
	double                                        __verse_0x18E3F084_Elem0;
	double                                        __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Ltype_7b5_2e000000e_2b01_7d_Mtype_7b2_2e000000e_2b02_7d_R) == 0x000008, "Wrong alignment on Ftuple_Ltype_7b5_2e000000e_2b01_7d_Mtype_7b2_2e000000e_2b02_7d_R");
static_assert(sizeof(Ftuple_Ltype_7b5_2e000000e_2b01_7d_Mtype_7b2_2e000000e_2b02_7d_R) == 0x000010, "Wrong size on Ftuple_Ltype_7b5_2e000000e_2b01_7d_Mtype_7b2_2e000000e_2b02_7d_R");
static_assert(offsetof(Ftuple_Ltype_7b5_2e000000e_2b01_7d_Mtype_7b2_2e000000e_2b02_7d_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Ltype_7b5_2e000000e_2b01_7d_Mtype_7b2_2e000000e_2b02_7d_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Ltype_7b5_2e000000e_2b01_7d_Mtype_7b2_2e000000e_2b02_7d_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Ltype_7b5_2e000000e_2b01_7d_Mtype_7b2_2e000000e_2b02_7d_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Ltype_7b_2d1_2e000000e_2b03_7d_Mtype_7b1_2e000000e_2b03_7d_R final
{
public:
	double                                        __verse_0x18E3F084_Elem0;
	double                                        __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Ltype_7b_2d1_2e000000e_2b03_7d_Mtype_7b1_2e000000e_2b03_7d_R) == 0x000008, "Wrong alignment on Ftuple_Ltype_7b_2d1_2e000000e_2b03_7d_Mtype_7b1_2e000000e_2b03_7d_R");
static_assert(sizeof(Ftuple_Ltype_7b_2d1_2e000000e_2b03_7d_Mtype_7b1_2e000000e_2b03_7d_R) == 0x000010, "Wrong size on Ftuple_Ltype_7b_2d1_2e000000e_2b03_7d_Mtype_7b1_2e000000e_2b03_7d_R");
static_assert(offsetof(Ftuple_Ltype_7b_2d1_2e000000e_2b03_7d_Mtype_7b1_2e000000e_2b03_7d_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Ltype_7b_2d1_2e000000e_2b03_7d_Mtype_7b1_2e000000e_2b03_7d_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Ltype_7b_2d1_2e000000e_2b03_7d_Mtype_7b1_2e000000e_2b03_7d_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Ltype_7b_2d1_2e000000e_2b03_7d_Mtype_7b1_2e000000e_2b03_7d_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0x18E3F084_Elem0;
	FOptionProperty_                              __verse_0x7D844C3C_Elem1;
	uint8                                         __verse_0x932BF92E_Elem2 : 1;
	uint8                                         Pad_21[0x7];
	FOptionProperty_                              __verse_0xF64C4596_Elem3;
	FOptionProperty_                              __verse_0x4F74920B_Elem4;
};
static_assert(alignof(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R) == 0x000008, "Wrong alignment on Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R");
static_assert(sizeof(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R) == 0x000038, "Wrong size on Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R");
static_assert(offsetof(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R, __verse_0x7D844C3C_Elem1) == 0x000018, "Member 'Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R, __verse_0xF64C4596_Elem3) == 0x000028, "Member 'Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R::__verse_0xF64C4596_Elem3' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R, __verse_0x4F74920B_Elem4) == 0x000031, "Member 'Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R::__verse_0x4F74920B_Elem4' has a wrong offset!");

struct Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b10_2e000000_7d_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0x18E3F084_Elem0;
	FOptionProperty_                              __verse_0x7D844C3C_Elem1;
	uint8                                         __verse_0x932BF92E_Elem2 : 1;
	uint8                                         Pad_21[0x7];
	FOptionProperty_                              __verse_0xF64C4596_Elem3;
};
static_assert(alignof(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b10_2e000000_7d_R) == 0x000008, "Wrong alignment on Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b10_2e000000_7d_R");
static_assert(sizeof(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b10_2e000000_7d_R) == 0x000038, "Wrong size on Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b10_2e000000_7d_R");
static_assert(offsetof(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b10_2e000000_7d_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b10_2e000000_7d_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b10_2e000000_7d_R, __verse_0x7D844C3C_Elem1) == 0x000018, "Member 'Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b10_2e000000_7d_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b10_2e000000_7d_R, __verse_0xF64C4596_Elem3) == 0x000028, "Member 'Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b10_2e000000_7d_R::__verse_0xF64C4596_Elem3' has a wrong offset!");

struct Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b1_2e000000e_2b02_7d_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0x18E3F084_Elem0;
	FOptionProperty_                              __verse_0x7D844C3C_Elem1;
	uint8                                         __verse_0x932BF92E_Elem2 : 1;
	uint8                                         Pad_21[0x7];
	FOptionProperty_                              __verse_0xF64C4596_Elem3;
};
static_assert(alignof(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b1_2e000000e_2b02_7d_R) == 0x000008, "Wrong alignment on Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b1_2e000000e_2b02_7d_R");
static_assert(sizeof(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b1_2e000000e_2b02_7d_R) == 0x000038, "Wrong size on Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b1_2e000000e_2b02_7d_R");
static_assert(offsetof(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b1_2e000000e_2b02_7d_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b1_2e000000e_2b02_7d_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b1_2e000000e_2b02_7d_R, __verse_0x7D844C3C_Elem1) == 0x000018, "Member 'Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b1_2e000000e_2b02_7d_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b1_2e000000e_2b02_7d_R, __verse_0xF64C4596_Elem3) == 0x000028, "Member 'Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b1_2e000000e_2b02_7d_R::__verse_0xF64C4596_Elem3' has a wrong offset!");

struct Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b2_2e000000e_2b02_7d_M_QAllowPartialPath_Nlogic_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0x18E3F084_Elem0;
	FOptionProperty_                              __verse_0x7D844C3C_Elem1;
	uint8                                         __verse_0x932BF92E_Elem2 : 1;
	uint8                                         Pad_21[0x7];
	FOptionProperty_                              __verse_0xF64C4596_Elem3;
	FOptionProperty_                              __verse_0x4F74920B_Elem4;
};
static_assert(alignof(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b2_2e000000e_2b02_7d_M_QAllowPartialPath_Nlogic_R) == 0x000008, "Wrong alignment on Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b2_2e000000e_2b02_7d_M_QAllowPartialPath_Nlogic_R");
static_assert(sizeof(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b2_2e000000e_2b02_7d_M_QAllowPartialPath_Nlogic_R) == 0x000038, "Wrong size on Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b2_2e000000e_2b02_7d_M_QAllowPartialPath_Nlogic_R");
static_assert(offsetof(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b2_2e000000e_2b02_7d_M_QAllowPartialPath_Nlogic_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b2_2e000000e_2b02_7d_M_QAllowPartialPath_Nlogic_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b2_2e000000e_2b02_7d_M_QAllowPartialPath_Nlogic_R, __verse_0x7D844C3C_Elem1) == 0x000018, "Member 'Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b2_2e000000e_2b02_7d_M_QAllowPartialPath_Nlogic_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b2_2e000000e_2b02_7d_M_QAllowPartialPath_Nlogic_R, __verse_0xF64C4596_Elem3) == 0x000028, "Member 'Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b2_2e000000e_2b02_7d_M_QAllowPartialPath_Nlogic_R::__verse_0xF64C4596_Elem3' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b2_2e000000e_2b02_7d_M_QAllowPartialPath_Nlogic_R, __verse_0x4F74920B_Elem4) == 0x000031, "Member 'Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b2_2e000000e_2b02_7d_M_QAllowPartialPath_Nlogic_R::__verse_0x4F74920B_Elem4' has a wrong offset!");

struct Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b4_2e000000e_2b02_7d_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0x18E3F084_Elem0;
	FOptionProperty_                              __verse_0x7D844C3C_Elem1;
	uint8                                         __verse_0x932BF92E_Elem2 : 1;
	uint8                                         Pad_21[0x7];
	FOptionProperty_                              __verse_0xF64C4596_Elem3;
};
static_assert(alignof(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b4_2e000000e_2b02_7d_R) == 0x000008, "Wrong alignment on Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b4_2e000000e_2b02_7d_R");
static_assert(sizeof(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b4_2e000000e_2b02_7d_R) == 0x000038, "Wrong size on Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b4_2e000000e_2b02_7d_R");
static_assert(offsetof(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b4_2e000000e_2b02_7d_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b4_2e000000e_2b02_7d_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b4_2e000000e_2b02_7d_R, __verse_0x7D844C3C_Elem1) == 0x000018, "Member 'Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b4_2e000000e_2b02_7d_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b4_2e000000e_2b02_7d_R, __verse_0xF64C4596_Elem3) == 0x000028, "Member 'Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b4_2e000000e_2b02_7d_R::__verse_0xF64C4596_Elem3' has a wrong offset!");

struct Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b5_2e000000e_2b01_7d_M_QAllowPartialPath_Nlogic_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0x18E3F084_Elem0;
	FOptionProperty_                              __verse_0x7D844C3C_Elem1;
	uint8                                         __verse_0x932BF92E_Elem2 : 1;
	uint8                                         Pad_21[0x7];
	FOptionProperty_                              __verse_0xF64C4596_Elem3;
	FOptionProperty_                              __verse_0x4F74920B_Elem4;
};
static_assert(alignof(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b5_2e000000e_2b01_7d_M_QAllowPartialPath_Nlogic_R) == 0x000008, "Wrong alignment on Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b5_2e000000e_2b01_7d_M_QAllowPartialPath_Nlogic_R");
static_assert(sizeof(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b5_2e000000e_2b01_7d_M_QAllowPartialPath_Nlogic_R) == 0x000038, "Wrong size on Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b5_2e000000e_2b01_7d_M_QAllowPartialPath_Nlogic_R");
static_assert(offsetof(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b5_2e000000e_2b01_7d_M_QAllowPartialPath_Nlogic_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b5_2e000000e_2b01_7d_M_QAllowPartialPath_Nlogic_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b5_2e000000e_2b01_7d_M_QAllowPartialPath_Nlogic_R, __verse_0x7D844C3C_Elem1) == 0x000018, "Member 'Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b5_2e000000e_2b01_7d_M_QAllowPartialPath_Nlogic_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b5_2e000000e_2b01_7d_M_QAllowPartialPath_Nlogic_R, __verse_0xF64C4596_Elem3) == 0x000028, "Member 'Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b5_2e000000e_2b01_7d_M_QAllowPartialPath_Nlogic_R::__verse_0xF64C4596_Elem3' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b5_2e000000e_2b01_7d_M_QAllowPartialPath_Nlogic_R, __verse_0x4F74920B_Elem4) == 0x000031, "Member 'Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b5_2e000000e_2b01_7d_M_QAllowPartialPath_Nlogic_R::__verse_0x4F74920B_Elem4' has a wrong offset!");

struct CompanionAI::Ftuple_Lvector3_M_QParams_Nsphere__draw__params_20_3d_20_2e_2e_2e_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0x18E3F084_Elem0;
	FOptionProperty_                              __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(CompanionAI::Ftuple_Lvector3_M_QParams_Nsphere__draw__params_20_3d_20_2e_2e_2e_R) == 0x000008, "Wrong alignment on CompanionAI::Ftuple_Lvector3_M_QParams_Nsphere__draw__params_20_3d_20_2e_2e_2e_R");
static_assert(sizeof(CompanionAI::Ftuple_Lvector3_M_QParams_Nsphere__draw__params_20_3d_20_2e_2e_2e_R) == 0x000068, "Wrong size on CompanionAI::Ftuple_Lvector3_M_QParams_Nsphere__draw__params_20_3d_20_2e_2e_2e_R");
static_assert(offsetof(CompanionAI::Ftuple_Lvector3_M_QParams_Nsphere__draw__params_20_3d_20_2e_2e_2e_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'CompanionAI::Ftuple_Lvector3_M_QParams_Nsphere__draw__params_20_3d_20_2e_2e_2e_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(CompanionAI::Ftuple_Lvector3_M_QParams_Nsphere__draw__params_20_3d_20_2e_2e_2e_R, __verse_0x7D844C3C_Elem1) == 0x000018, "Member 'CompanionAI::Ftuple_Lvector3_M_QParams_Nsphere__draw__params_20_3d_20_2e_2e_2e_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lvector3_M_QParams_Nsphere__draw__params_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0x18E3F084_Elem0;
	FOptionProperty_                              __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lvector3_M_QParams_Nsphere__draw__params_R) == 0x000008, "Wrong alignment on Ftuple_Lvector3_M_QParams_Nsphere__draw__params_R");
static_assert(sizeof(Ftuple_Lvector3_M_QParams_Nsphere__draw__params_R) == 0x000068, "Wrong size on Ftuple_Lvector3_M_QParams_Nsphere__draw__params_R");
static_assert(offsetof(Ftuple_Lvector3_M_QParams_Nsphere__draw__params_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lvector3_M_QParams_Nsphere__draw__params_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_M_QParams_Nsphere__draw__params_R, __verse_0x7D844C3C_Elem1) == 0x000018, "Member 'Ftuple_Lvector3_M_QParams_Nsphere__draw__params_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lvector3_Mfloat_Magent_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0x18E3F084_Elem0;
	double                                        __verse_0x7D844C3C_Elem1;
	class USimulation_agent*                      __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_Lvector3_Mfloat_Magent_R) == 0x000008, "Wrong alignment on Ftuple_Lvector3_Mfloat_Magent_R");
static_assert(sizeof(Ftuple_Lvector3_Mfloat_Magent_R) == 0x000028, "Wrong size on Ftuple_Lvector3_Mfloat_Magent_R");
static_assert(offsetof(Ftuple_Lvector3_Mfloat_Magent_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lvector3_Mfloat_Magent_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_Mfloat_Magent_R, __verse_0x7D844C3C_Elem1) == 0x000018, "Member 'Ftuple_Lvector3_Mfloat_Magent_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_Mfloat_Magent_R, __verse_0x932BF92E_Elem2) == 0x000020, "Member 'Ftuple_Lvector3_Mfloat_Magent_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Lvector3_Mfloat_Mcolor_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0x18E3F084_Elem0;
	double                                        __verse_0x7D844C3C_Elem1;
	struct FColors_color                          __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_Lvector3_Mfloat_Mcolor_R) == 0x000008, "Wrong alignment on Ftuple_Lvector3_Mfloat_Mcolor_R");
static_assert(sizeof(Ftuple_Lvector3_Mfloat_Mcolor_R) == 0x000038, "Wrong size on Ftuple_Lvector3_Mfloat_Mcolor_R");
static_assert(offsetof(Ftuple_Lvector3_Mfloat_Mcolor_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lvector3_Mfloat_Mcolor_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_Mfloat_Mcolor_R, __verse_0x7D844C3C_Elem1) == 0x000018, "Member 'Ftuple_Lvector3_Mfloat_Mcolor_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_Mfloat_Mcolor_R, __verse_0x932BF92E_Elem2) == 0x000020, "Member 'Ftuple_Lvector3_Mfloat_Mcolor_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct CompanionAI::Ftuple_Lvector3_Mfloat_Mfloat_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0x18E3F084_Elem0;
	double                                        __verse_0x7D844C3C_Elem1;
	double                                        __verse_0x932BF92E_Elem2;
};
static_assert(alignof(CompanionAI::Ftuple_Lvector3_Mfloat_Mfloat_R) == 0x000008, "Wrong alignment on CompanionAI::Ftuple_Lvector3_Mfloat_Mfloat_R");
static_assert(sizeof(CompanionAI::Ftuple_Lvector3_Mfloat_Mfloat_R) == 0x000028, "Wrong size on CompanionAI::Ftuple_Lvector3_Mfloat_Mfloat_R");
static_assert(offsetof(CompanionAI::Ftuple_Lvector3_Mfloat_Mfloat_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'CompanionAI::Ftuple_Lvector3_Mfloat_Mfloat_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(CompanionAI::Ftuple_Lvector3_Mfloat_Mfloat_R, __verse_0x7D844C3C_Elem1) == 0x000018, "Member 'CompanionAI::Ftuple_Lvector3_Mfloat_Mfloat_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(CompanionAI::Ftuple_Lvector3_Mfloat_Mfloat_R, __verse_0x932BF92E_Elem2) == 0x000020, "Member 'CompanionAI::Ftuple_Lvector3_Mfloat_Mfloat_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Lvector3_Mtype_7b0_2e500000_7d_Mtype_7b1_2e500000_7d_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0x18E3F084_Elem0;
	double                                        __verse_0x7D844C3C_Elem1;
	double                                        __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_Lvector3_Mtype_7b0_2e500000_7d_Mtype_7b1_2e500000_7d_R) == 0x000008, "Wrong alignment on Ftuple_Lvector3_Mtype_7b0_2e500000_7d_Mtype_7b1_2e500000_7d_R");
static_assert(sizeof(Ftuple_Lvector3_Mtype_7b0_2e500000_7d_Mtype_7b1_2e500000_7d_R) == 0x000028, "Wrong size on Ftuple_Lvector3_Mtype_7b0_2e500000_7d_Mtype_7b1_2e500000_7d_R");
static_assert(offsetof(Ftuple_Lvector3_Mtype_7b0_2e500000_7d_Mtype_7b1_2e500000_7d_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lvector3_Mtype_7b0_2e500000_7d_Mtype_7b1_2e500000_7d_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_Mtype_7b0_2e500000_7d_Mtype_7b1_2e500000_7d_R, __verse_0x7D844C3C_Elem1) == 0x000018, "Member 'Ftuple_Lvector3_Mtype_7b0_2e500000_7d_Mtype_7b1_2e500000_7d_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_Mtype_7b0_2e500000_7d_Mtype_7b1_2e500000_7d_R, __verse_0x932BF92E_Elem2) == 0x000020, "Member 'Ftuple_Lvector3_Mtype_7b0_2e500000_7d_Mtype_7b1_2e500000_7d_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Lvector3_Mtype_7b1_2e000000e_2b02_7d_Mfloat_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0x18E3F084_Elem0;
	double                                        __verse_0x7D844C3C_Elem1;
	double                                        __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_Lvector3_Mtype_7b1_2e000000e_2b02_7d_Mfloat_R) == 0x000008, "Wrong alignment on Ftuple_Lvector3_Mtype_7b1_2e000000e_2b02_7d_Mfloat_R");
static_assert(sizeof(Ftuple_Lvector3_Mtype_7b1_2e000000e_2b02_7d_Mfloat_R) == 0x000028, "Wrong size on Ftuple_Lvector3_Mtype_7b1_2e000000e_2b02_7d_Mfloat_R");
static_assert(offsetof(Ftuple_Lvector3_Mtype_7b1_2e000000e_2b02_7d_Mfloat_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lvector3_Mtype_7b1_2e000000e_2b02_7d_Mfloat_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_Mtype_7b1_2e000000e_2b02_7d_Mfloat_R, __verse_0x7D844C3C_Elem1) == 0x000018, "Member 'Ftuple_Lvector3_Mtype_7b1_2e000000e_2b02_7d_Mfloat_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_Mtype_7b1_2e000000e_2b02_7d_Mfloat_R, __verse_0x932BF92E_Elem2) == 0x000020, "Member 'Ftuple_Lvector3_Mtype_7b1_2e000000e_2b02_7d_Mfloat_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct CompanionAI::Ftuple_Lvector3_Mvector3_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0x18E3F084_Elem0;
	struct FSpatialMath_vector3                   __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(CompanionAI::Ftuple_Lvector3_Mvector3_R) == 0x000008, "Wrong alignment on CompanionAI::Ftuple_Lvector3_Mvector3_R");
static_assert(sizeof(CompanionAI::Ftuple_Lvector3_Mvector3_R) == 0x000030, "Wrong size on CompanionAI::Ftuple_Lvector3_Mvector3_R");
static_assert(offsetof(CompanionAI::Ftuple_Lvector3_Mvector3_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'CompanionAI::Ftuple_Lvector3_Mvector3_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(CompanionAI::Ftuple_Lvector3_Mvector3_R, __verse_0x7D844C3C_Elem1) == 0x000018, "Member 'CompanionAI::Ftuple_Lvector3_Mvector3_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

}
