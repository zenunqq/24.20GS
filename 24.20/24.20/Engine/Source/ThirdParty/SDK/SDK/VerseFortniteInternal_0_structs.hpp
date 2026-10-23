#pragma once

#include "Basic.hpp"

#include "EpicGamesTemporary_0_structs.hpp"

namespace SDK
{

enum class EGame_Player_player_status_type : uint8
{
	OnGround                                 = 0,
	Skydiving                                = 1,
	UsingGlider                              = 2,
	InVehicle                                = 3,
	Shooting                                 = 4,
	AimingDownSights                         = 5,
	InStasis                                 = 6,
	Game_Player_player_status_MAX            = 7,
};

enum class EGame_Player_PlayerAttribute : uint8
{
	CurrentHealth                            = 0,
	CurrentShield                            = 1,
	InitialHealth                            = 2,
	InitialShield                            = 3,
	Damage                                   = 4,
	ShieldDamage                             = 5,
	Game_Player_MAX                          = 6,
};

enum class EGame_Player_PlayerAttributeOperation : uint8
{
	Add                                      = 0,
	Multiply                                 = 1,
	Divide                                   = 2,
	Override                                 = 3,
	SetMax                                   = 4,
	SetMin                                   = 5,
	Game_Player_MAX                          = 6,
};

enum class EGame_PlayerSettingState : uint8
{
	PlayerDefault                            = 0,
	PlayerAllow                              = 1,
	PlayerDisallow                           = 2,
	Game_MAX                                 = 3,
};

struct alignas(0x04) FGame_Player_player_team final
{
public:
	uint8                                         Pad_0[0x4];
};
static_assert(alignof(FGame_Player_player_team) == 0x000004, "Wrong alignment on FGame_Player_player_team");
static_assert(sizeof(FGame_Player_player_team) == 0x000004, "Wrong size on FGame_Player_player_team");

struct VerseFortniteInternal_0::Ftuple_L_R final
{
public:
	uint8                                         _StructPaddingDummy;
};
static_assert(alignof(VerseFortniteInternal_0::Ftuple_L_R) == 0x000001, "Wrong alignment on VerseFortniteInternal_0::Ftuple_L_R");
static_assert(sizeof(VerseFortniteInternal_0::Ftuple_L_R) == 0x000001, "Wrong size on VerseFortniteInternal_0::Ftuple_L_R");
static_assert(offsetof(VerseFortniteInternal_0::Ftuple_L_R, _StructPaddingDummy) == 0x000000, "Member 'VerseFortniteInternal_0::Ftuple_L_R::_StructPaddingDummy' has a wrong offset!");

struct VerseFortniteInternal_0::Ftuple_Lany_Mability__component_R final
{
public:
	class UClass*                                 __verse_0x18E3F084_Elem0;
	class UGame_Abilities_ability_component*      __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(VerseFortniteInternal_0::Ftuple_Lany_Mability__component_R) == 0x000008, "Wrong alignment on VerseFortniteInternal_0::Ftuple_Lany_Mability__component_R");
static_assert(sizeof(VerseFortniteInternal_0::Ftuple_Lany_Mability__component_R) == 0x000010, "Wrong size on VerseFortniteInternal_0::Ftuple_Lany_Mability__component_R");
static_assert(offsetof(VerseFortniteInternal_0::Ftuple_Lany_Mability__component_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'VerseFortniteInternal_0::Ftuple_Lany_Mability__component_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(VerseFortniteInternal_0::Ftuple_Lany_Mability__component_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'VerseFortniteInternal_0::Ftuple_Lany_Mability__component_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lcomponent_M_K_Kchar_R final
{
public:
	class UEntityComponent*                       __verse_0x18E3F084_Elem0;
	TArray<FVerseStringProperty_>                 __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lcomponent_M_K_Kchar_R) == 0x000008, "Wrong alignment on Ftuple_Lcomponent_M_K_Kchar_R");
static_assert(sizeof(Ftuple_Lcomponent_M_K_Kchar_R) == 0x000018, "Wrong size on Ftuple_Lcomponent_M_K_Kchar_R");
static_assert(offsetof(Ftuple_Lcomponent_M_K_Kchar_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lcomponent_M_K_Kchar_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lcomponent_M_K_Kchar_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lcomponent_M_K_Kchar_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lcomponent_Mcomponent_R final
{
public:
	class UEntityComponent*                       __verse_0x18E3F084_Elem0;
	class UClass*                                 __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lcomponent_Mcomponent_R) == 0x000008, "Wrong alignment on Ftuple_Lcomponent_Mcomponent_R");
static_assert(sizeof(Ftuple_Lcomponent_Mcomponent_R) == 0x000010, "Wrong size on Ftuple_Lcomponent_Mcomponent_R");
static_assert(offsetof(Ftuple_Lcomponent_Mcomponent_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lcomponent_Mcomponent_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lcomponent_Mcomponent_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lcomponent_Mcomponent_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lcomponent_Mfort__item__definition_Mint_Mvector3_R final
{
public:
	class UEntityComponent*                       __verse_0x18E3F084_Elem0;
	class UGame_fort_item_definition*             __verse_0x7D844C3C_Elem1;
	int64                                         __verse_0x932BF92E_Elem2;
	struct FSpatialMath_vector3                   __verse_0xF64C4596_Elem3;
};
static_assert(alignof(Ftuple_Lcomponent_Mfort__item__definition_Mint_Mvector3_R) == 0x000008, "Wrong alignment on Ftuple_Lcomponent_Mfort__item__definition_Mint_Mvector3_R");
static_assert(sizeof(Ftuple_Lcomponent_Mfort__item__definition_Mint_Mvector3_R) == 0x000030, "Wrong size on Ftuple_Lcomponent_Mfort__item__definition_Mint_Mvector3_R");
static_assert(offsetof(Ftuple_Lcomponent_Mfort__item__definition_Mint_Mvector3_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lcomponent_Mfort__item__definition_Mint_Mvector3_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lcomponent_Mfort__item__definition_Mint_Mvector3_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lcomponent_Mfort__item__definition_Mint_Mvector3_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lcomponent_Mfort__item__definition_Mint_Mvector3_R, __verse_0x932BF92E_Elem2) == 0x000010, "Member 'Ftuple_Lcomponent_Mfort__item__definition_Mint_Mvector3_R::__verse_0x932BF92E_Elem2' has a wrong offset!");
static_assert(offsetof(Ftuple_Lcomponent_Mfort__item__definition_Mint_Mvector3_R, __verse_0xF64C4596_Elem3) == 0x000018, "Member 'Ftuple_Lcomponent_Mfort__item__definition_Mint_Mvector3_R::__verse_0xF64C4596_Elem3' has a wrong offset!");

struct Ftuple_Lcomponent_Mlogic_R final
{
public:
	class UEntityComponent*                       __verse_0x18E3F084_Elem0;
	uint8                                         __verse_0x7D844C3C_Elem1 : 1;
};
static_assert(alignof(Ftuple_Lcomponent_Mlogic_R) == 0x000008, "Wrong alignment on Ftuple_Lcomponent_Mlogic_R");
static_assert(sizeof(Ftuple_Lcomponent_Mlogic_R) == 0x000010, "Wrong size on Ftuple_Lcomponent_Mlogic_R");
static_assert(offsetof(Ftuple_Lcomponent_Mlogic_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lcomponent_Mlogic_R::__verse_0x18E3F084_Elem0' has a wrong offset!");

struct Ftuple_Lgameplay__effect__asset_Mfloat_R final
{
public:
	class UGame_Abilities_gameplay_effect_asset*  __verse_0x18E3F084_Elem0;
	double                                        __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lgameplay__effect__asset_Mfloat_R) == 0x000008, "Wrong alignment on Ftuple_Lgameplay__effect__asset_Mfloat_R");
static_assert(sizeof(Ftuple_Lgameplay__effect__asset_Mfloat_R) == 0x000010, "Wrong size on Ftuple_Lgameplay__effect__asset_Mfloat_R");
static_assert(offsetof(Ftuple_Lgameplay__effect__asset_Mfloat_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lgameplay__effect__asset_Mfloat_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lgameplay__effect__asset_Mfloat_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lgameplay__effect__asset_Mfloat_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct VerseFortniteInternal_0::Ftuple_Lint_Mint_R final
{
public:
	int64                                         __verse_0x18E3F084_Elem0;
	int64                                         __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(VerseFortniteInternal_0::Ftuple_Lint_Mint_R) == 0x000008, "Wrong alignment on VerseFortniteInternal_0::Ftuple_Lint_Mint_R");
static_assert(sizeof(VerseFortniteInternal_0::Ftuple_Lint_Mint_R) == 0x000010, "Wrong size on VerseFortniteInternal_0::Ftuple_Lint_Mint_R");
static_assert(offsetof(VerseFortniteInternal_0::Ftuple_Lint_Mint_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'VerseFortniteInternal_0::Ftuple_Lint_Mint_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(VerseFortniteInternal_0::Ftuple_Lint_Mint_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'VerseFortniteInternal_0::Ftuple_Lint_Mint_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Litem__type_Mint_Mplayer__component_R final
{
public:
	class UGame_Item_item_type*                   __verse_0x18E3F084_Elem0;
	int64                                         __verse_0x7D844C3C_Elem1;
	class USimulation_player_component*           __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_Litem__type_Mint_Mplayer__component_R) == 0x000008, "Wrong alignment on Ftuple_Litem__type_Mint_Mplayer__component_R");
static_assert(sizeof(Ftuple_Litem__type_Mint_Mplayer__component_R) == 0x000018, "Wrong size on Ftuple_Litem__type_Mint_Mplayer__component_R");
static_assert(offsetof(Ftuple_Litem__type_Mint_Mplayer__component_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Litem__type_Mint_Mplayer__component_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Litem__type_Mint_Mplayer__component_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Litem__type_Mint_Mplayer__component_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Litem__type_Mint_Mplayer__component_R, __verse_0x932BF92E_Elem2) == 0x000010, "Member 'Ftuple_Litem__type_Mint_Mplayer__component_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Lplayer__component_Mplayer__start__component_R final
{
public:
	class USimulation_player_component*           __verse_0x18E3F084_Elem0;
	class UGame_Player_player_start_component*    __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lplayer__component_Mplayer__start__component_R) == 0x000008, "Wrong alignment on Ftuple_Lplayer__component_Mplayer__start__component_R");
static_assert(sizeof(Ftuple_Lplayer__component_Mplayer__start__component_R) == 0x000010, "Wrong size on Ftuple_Lplayer__component_Mplayer__start__component_R");
static_assert(offsetof(Ftuple_Lplayer__component_Mplayer__start__component_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lplayer__component_Mplayer__start__component_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lplayer__component_Mplayer__start__component_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lplayer__component_Mplayer__start__component_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lplayer__component_Mplayer__status__type_R final
{
public:
	class USimulation_player_component*           __verse_0x18E3F084_Elem0;
	EGame_Player_player_status_type               __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lplayer__component_Mplayer__status__type_R) == 0x000008, "Wrong alignment on Ftuple_Lplayer__component_Mplayer__status__type_R");
static_assert(sizeof(Ftuple_Lplayer__component_Mplayer__status__type_R) == 0x000010, "Wrong size on Ftuple_Lplayer__component_Mplayer__status__type_R");
static_assert(offsetof(Ftuple_Lplayer__component_Mplayer__status__type_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lplayer__component_Mplayer__status__type_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lplayer__component_Mplayer__status__type_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lplayer__component_Mplayer__status__type_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lplayer__team_Mint_Mint_R final
{
public:
	struct FGame_Player_player_team               __verse_0x18E3F084_Elem0;
	uint8                                         Pad_4[0x4];
	int64                                         __verse_0x7D844C3C_Elem1;
	int64                                         __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_Lplayer__team_Mint_Mint_R) == 0x000008, "Wrong alignment on Ftuple_Lplayer__team_Mint_Mint_R");
static_assert(sizeof(Ftuple_Lplayer__team_Mint_Mint_R) == 0x000018, "Wrong size on Ftuple_Lplayer__team_Mint_Mint_R");
static_assert(offsetof(Ftuple_Lplayer__team_Mint_Mint_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lplayer__team_Mint_Mint_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lplayer__team_Mint_Mint_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lplayer__team_Mint_Mint_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lplayer__team_Mint_Mint_R, __verse_0x932BF92E_Elem2) == 0x000010, "Member 'Ftuple_Lplayer__team_Mint_Mint_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Lplayer__team_Mint_R final
{
public:
	struct FGame_Player_player_team               __verse_0x18E3F084_Elem0;
	uint8                                         Pad_4[0x4];
	int64                                         __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lplayer__team_Mint_R) == 0x000008, "Wrong alignment on Ftuple_Lplayer__team_Mint_R");
static_assert(sizeof(Ftuple_Lplayer__team_Mint_R) == 0x000010, "Wrong size on Ftuple_Lplayer__team_Mint_R");
static_assert(offsetof(Ftuple_Lplayer__team_Mint_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lplayer__team_Mint_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lplayer__team_Mint_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lplayer__team_Mint_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lplayer__team_Mplayer__team_R final
{
public:
	struct FGame_Player_player_team               __verse_0x18E3F084_Elem0;
	struct FGame_Player_player_team               __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lplayer__team_Mplayer__team_R) == 0x000004, "Wrong alignment on Ftuple_Lplayer__team_Mplayer__team_R");
static_assert(sizeof(Ftuple_Lplayer__team_Mplayer__team_R) == 0x000008, "Wrong size on Ftuple_Lplayer__team_Mplayer__team_R");
static_assert(offsetof(Ftuple_Lplayer__team_Mplayer__team_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lplayer__team_Mplayer__team_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lplayer__team_Mplayer__team_R, __verse_0x7D844C3C_Elem1) == 0x000004, "Member 'Ftuple_Lplayer__team_Mplayer__team_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lplayer_M_Kchar_Mint_Mlogic_R final
{
public:
	class USimulation_player*                     __verse_0x18E3F084_Elem0;
	FVerseStringProperty_                         __verse_0x7D844C3C_Elem1;
	int64                                         __verse_0x932BF92E_Elem2;
	uint8                                         __verse_0xF64C4596_Elem3 : 1;
};
static_assert(alignof(Ftuple_Lplayer_M_Kchar_Mint_Mlogic_R) == 0x000008, "Wrong alignment on Ftuple_Lplayer_M_Kchar_Mint_Mlogic_R");
static_assert(sizeof(Ftuple_Lplayer_M_Kchar_Mint_Mlogic_R) == 0x000028, "Wrong size on Ftuple_Lplayer_M_Kchar_Mint_Mlogic_R");
static_assert(offsetof(Ftuple_Lplayer_M_Kchar_Mint_Mlogic_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lplayer_M_Kchar_Mint_Mlogic_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lplayer_M_Kchar_Mint_Mlogic_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lplayer_M_Kchar_Mint_Mlogic_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lplayer_M_Kchar_Mint_Mlogic_R, __verse_0x932BF92E_Elem2) == 0x000018, "Member 'Ftuple_Lplayer_M_Kchar_Mint_Mlogic_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Lplayer_M_Kchar_Mint_R final
{
public:
	class USimulation_player*                     __verse_0x18E3F084_Elem0;
	FVerseStringProperty_                         __verse_0x7D844C3C_Elem1;
	int64                                         __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_Lplayer_M_Kchar_Mint_R) == 0x000008, "Wrong alignment on Ftuple_Lplayer_M_Kchar_Mint_R");
static_assert(sizeof(Ftuple_Lplayer_M_Kchar_Mint_R) == 0x000020, "Wrong size on Ftuple_Lplayer_M_Kchar_Mint_R");
static_assert(offsetof(Ftuple_Lplayer_M_Kchar_Mint_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lplayer_M_Kchar_Mint_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lplayer_M_Kchar_Mint_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lplayer_M_Kchar_Mint_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lplayer_M_Kchar_Mint_R, __verse_0x932BF92E_Elem2) == 0x000018, "Member 'Ftuple_Lplayer_M_Kchar_Mint_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Lplayer_Mfort__item__definition_Mint_Mlogic_R final
{
public:
	class USimulation_player*                     __verse_0x18E3F084_Elem0;
	class UGame_fort_item_definition*             __verse_0x7D844C3C_Elem1;
	int64                                         __verse_0x932BF92E_Elem2;
	uint8                                         __verse_0xF64C4596_Elem3 : 1;
};
static_assert(alignof(Ftuple_Lplayer_Mfort__item__definition_Mint_Mlogic_R) == 0x000008, "Wrong alignment on Ftuple_Lplayer_Mfort__item__definition_Mint_Mlogic_R");
static_assert(sizeof(Ftuple_Lplayer_Mfort__item__definition_Mint_Mlogic_R) == 0x000020, "Wrong size on Ftuple_Lplayer_Mfort__item__definition_Mint_Mlogic_R");
static_assert(offsetof(Ftuple_Lplayer_Mfort__item__definition_Mint_Mlogic_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lplayer_Mfort__item__definition_Mint_Mlogic_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lplayer_Mfort__item__definition_Mint_Mlogic_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lplayer_Mfort__item__definition_Mint_Mlogic_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lplayer_Mfort__item__definition_Mint_Mlogic_R, __verse_0x932BF92E_Elem2) == 0x000010, "Member 'Ftuple_Lplayer_Mfort__item__definition_Mint_Mlogic_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Lplayer_Mint_Mint_R final
{
public:
	class USimulation_player*                     __verse_0x18E3F084_Elem0;
	int64                                         __verse_0x7D844C3C_Elem1;
	int64                                         __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_Lplayer_Mint_Mint_R) == 0x000008, "Wrong alignment on Ftuple_Lplayer_Mint_Mint_R");
static_assert(sizeof(Ftuple_Lplayer_Mint_Mint_R) == 0x000018, "Wrong size on Ftuple_Lplayer_Mint_Mint_R");
static_assert(offsetof(Ftuple_Lplayer_Mint_Mint_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lplayer_Mint_Mint_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lplayer_Mint_Mint_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lplayer_Mint_Mint_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lplayer_Mint_Mint_R, __verse_0x932BF92E_Elem2) == 0x000010, "Member 'Ftuple_Lplayer_Mint_Mint_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Lplayer_Mint_R final
{
public:
	class USimulation_player*                     __verse_0x18E3F084_Elem0;
	int64                                         __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lplayer_Mint_R) == 0x000008, "Wrong alignment on Ftuple_Lplayer_Mint_R");
static_assert(sizeof(Ftuple_Lplayer_Mint_R) == 0x000010, "Wrong size on Ftuple_Lplayer_Mint_R");
static_assert(offsetof(Ftuple_Lplayer_Mint_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lplayer_Mint_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lplayer_Mint_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lplayer_Mint_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lplayer_Mlogic_Mlogic_Mlogic_R final
{
public:
	class USimulation_player*                     __verse_0x18E3F084_Elem0;
	uint8                                         __verse_0x7D844C3C_Elem1 : 1;
	uint8                                         BitPad_8_1 : 7;
	uint8                                         __verse_0x932BF92E_Elem2 : 1;
	uint8                                         BitPad_9_1 : 7;
	uint8                                         __verse_0xF64C4596_Elem3 : 1;
};
static_assert(alignof(Ftuple_Lplayer_Mlogic_Mlogic_Mlogic_R) == 0x000008, "Wrong alignment on Ftuple_Lplayer_Mlogic_Mlogic_Mlogic_R");
static_assert(sizeof(Ftuple_Lplayer_Mlogic_Mlogic_Mlogic_R) == 0x000010, "Wrong size on Ftuple_Lplayer_Mlogic_Mlogic_Mlogic_R");
static_assert(offsetof(Ftuple_Lplayer_Mlogic_Mlogic_Mlogic_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lplayer_Mlogic_Mlogic_Mlogic_R::__verse_0x18E3F084_Elem0' has a wrong offset!");

struct Ftuple_Lplayer_Mlogic_R final
{
public:
	class USimulation_player*                     __verse_0x18E3F084_Elem0;
	uint8                                         __verse_0x7D844C3C_Elem1 : 1;
};
static_assert(alignof(Ftuple_Lplayer_Mlogic_R) == 0x000008, "Wrong alignment on Ftuple_Lplayer_Mlogic_R");
static_assert(sizeof(Ftuple_Lplayer_Mlogic_R) == 0x000010, "Wrong size on Ftuple_Lplayer_Mlogic_R");
static_assert(offsetof(Ftuple_Lplayer_Mlogic_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lplayer_Mlogic_R::__verse_0x18E3F084_Elem0' has a wrong offset!");

struct Ftuple_Lplayer_Mplayer__team_R final
{
public:
	class USimulation_player*                     __verse_0x18E3F084_Elem0;
	struct FGame_Player_player_team               __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lplayer_Mplayer__team_R) == 0x000008, "Wrong alignment on Ftuple_Lplayer_Mplayer__team_R");
static_assert(sizeof(Ftuple_Lplayer_Mplayer__team_R) == 0x000010, "Wrong size on Ftuple_Lplayer_Mplayer__team_R");
static_assert(offsetof(Ftuple_Lplayer_Mplayer__team_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lplayer_Mplayer__team_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lplayer_Mplayer__team_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lplayer_Mplayer__team_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lplayer_Mplayer_R final
{
public:
	class USimulation_player*                     __verse_0x18E3F084_Elem0;
	class USimulation_player*                     __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lplayer_Mplayer_R) == 0x000008, "Wrong alignment on Ftuple_Lplayer_Mplayer_R");
static_assert(sizeof(Ftuple_Lplayer_Mplayer_R) == 0x000010, "Wrong size on Ftuple_Lplayer_Mplayer_R");
static_assert(offsetof(Ftuple_Lplayer_Mplayer_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lplayer_Mplayer_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lplayer_Mplayer_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lplayer_Mplayer_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lplayer_MPlayerAttribute_Mfloat_R final
{
public:
	class USimulation_player*                     __verse_0x18E3F084_Elem0;
	EGame_Player_PlayerAttribute                  __verse_0x7D844C3C_Elem1;
	uint8                                         Pad_9[0x7];
	double                                        __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_Lplayer_MPlayerAttribute_Mfloat_R) == 0x000008, "Wrong alignment on Ftuple_Lplayer_MPlayerAttribute_Mfloat_R");
static_assert(sizeof(Ftuple_Lplayer_MPlayerAttribute_Mfloat_R) == 0x000018, "Wrong size on Ftuple_Lplayer_MPlayerAttribute_Mfloat_R");
static_assert(offsetof(Ftuple_Lplayer_MPlayerAttribute_Mfloat_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lplayer_MPlayerAttribute_Mfloat_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lplayer_MPlayerAttribute_Mfloat_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lplayer_MPlayerAttribute_Mfloat_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lplayer_MPlayerAttribute_Mfloat_R, __verse_0x932BF92E_Elem2) == 0x000010, "Member 'Ftuple_Lplayer_MPlayerAttribute_Mfloat_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Lplayer_MPlayerAttribute_MPlayerAttributeOperation_Mfloat_R final
{
public:
	class USimulation_player*                     __verse_0x18E3F084_Elem0;
	EGame_Player_PlayerAttribute                  __verse_0x7D844C3C_Elem1;
	EGame_Player_PlayerAttributeOperation         __verse_0x932BF92E_Elem2;
	uint8                                         Pad_A[0x6];
	double                                        __verse_0xF64C4596_Elem3;
};
static_assert(alignof(Ftuple_Lplayer_MPlayerAttribute_MPlayerAttributeOperation_Mfloat_R) == 0x000008, "Wrong alignment on Ftuple_Lplayer_MPlayerAttribute_MPlayerAttributeOperation_Mfloat_R");
static_assert(sizeof(Ftuple_Lplayer_MPlayerAttribute_MPlayerAttributeOperation_Mfloat_R) == 0x000018, "Wrong size on Ftuple_Lplayer_MPlayerAttribute_MPlayerAttributeOperation_Mfloat_R");
static_assert(offsetof(Ftuple_Lplayer_MPlayerAttribute_MPlayerAttributeOperation_Mfloat_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lplayer_MPlayerAttribute_MPlayerAttributeOperation_Mfloat_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lplayer_MPlayerAttribute_MPlayerAttributeOperation_Mfloat_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lplayer_MPlayerAttribute_MPlayerAttributeOperation_Mfloat_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lplayer_MPlayerAttribute_MPlayerAttributeOperation_Mfloat_R, __verse_0x932BF92E_Elem2) == 0x000009, "Member 'Ftuple_Lplayer_MPlayerAttribute_MPlayerAttributeOperation_Mfloat_R::__verse_0x932BF92E_Elem2' has a wrong offset!");
static_assert(offsetof(Ftuple_Lplayer_MPlayerAttribute_MPlayerAttributeOperation_Mfloat_R, __verse_0xF64C4596_Elem3) == 0x000010, "Member 'Ftuple_Lplayer_MPlayerAttribute_MPlayerAttributeOperation_Mfloat_R::__verse_0xF64C4596_Elem3' has a wrong offset!");

struct Ftuple_Lplayer_MPlayerAttribute_R final
{
public:
	class USimulation_player*                     __verse_0x18E3F084_Elem0;
	EGame_Player_PlayerAttribute                  __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lplayer_MPlayerAttribute_R) == 0x000008, "Wrong alignment on Ftuple_Lplayer_MPlayerAttribute_R");
static_assert(sizeof(Ftuple_Lplayer_MPlayerAttribute_R) == 0x000010, "Wrong size on Ftuple_Lplayer_MPlayerAttribute_R");
static_assert(offsetof(Ftuple_Lplayer_MPlayerAttribute_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lplayer_MPlayerAttribute_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lplayer_MPlayerAttribute_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lplayer_MPlayerAttribute_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lvector3_M_Qplayer__component_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0x18E3F084_Elem0;
	FOptionProperty_                              __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lvector3_M_Qplayer__component_R) == 0x000008, "Wrong alignment on Ftuple_Lvector3_M_Qplayer__component_R");
static_assert(sizeof(Ftuple_Lvector3_M_Qplayer__component_R) == 0x000020, "Wrong size on Ftuple_Lvector3_M_Qplayer__component_R");
static_assert(offsetof(Ftuple_Lvector3_M_Qplayer__component_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lvector3_M_Qplayer__component_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_M_Qplayer__component_R, __verse_0x7D844C3C_Elem1) == 0x000018, "Member 'Ftuple_Lvector3_M_Qplayer__component_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

}
