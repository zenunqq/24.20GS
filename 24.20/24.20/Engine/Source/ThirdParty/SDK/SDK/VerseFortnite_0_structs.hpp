#pragma once

#include "Basic.hpp"

#include "EpicGamesTemporary_0_structs.hpp"
#include "EpicGamesTemporary_structs.hpp"

namespace SDK
{

enum class ETeams_team_attitude : uint8
{
	Friendly                                 = 0,
	Neutral                                  = 1,
	Hostile                                  = 2,
	Teams_team_MAX                           = 3,
};

struct FCharacters_character_action_result final
{
public:
	class UObject*                                __verse_0x963EC691_Character;
	uint8                                         __verse_0xD22A4F23_Started : 1;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(FCharacters_character_action_result) == 0x000008, "Wrong alignment on FCharacters_character_action_result");
static_assert(sizeof(FCharacters_character_action_result) == 0x000010, "Wrong size on FCharacters_character_action_result");
static_assert(offsetof(FCharacters_character_action_result, __verse_0x963EC691_Character) == 0x000000, "Member 'FCharacters_character_action_result::__verse_0x963EC691_Character' has a wrong offset!");

struct FCharacters_stasis_args final
{
public:
	uint8                                         __verse_0xADC8E6AA_AllowTurning : 1;
	uint8                                         BitPad_0_1 : 7;
	uint8                                         __verse_0x04C721DA_AllowFalling : 1;
	uint8                                         BitPad_1_1 : 7;
	uint8                                         __verse_0x178F77CA_AllowEmotes : 1;
};
static_assert(alignof(FCharacters_stasis_args) == 0x000001, "Wrong alignment on FCharacters_stasis_args");
static_assert(sizeof(FCharacters_stasis_args) == 0x000003, "Wrong size on FCharacters_stasis_args");

struct FGame_damage_args final
{
public:
	FOptionProperty_                              __verse_0x8B9AF22A_Instigator;
	FOptionProperty_                              __verse_0xB1B721CE_Source;
	double                                        __verse_0x193A13B7_Amount;
};
static_assert(alignof(FGame_damage_args) == 0x000008, "Wrong alignment on FGame_damage_args");
static_assert(sizeof(FGame_damage_args) == 0x000018, "Wrong size on FGame_damage_args");
static_assert(offsetof(FGame_damage_args, __verse_0x8B9AF22A_Instigator) == 0x000000, "Member 'FGame_damage_args::__verse_0x8B9AF22A_Instigator' has a wrong offset!");
static_assert(offsetof(FGame_damage_args, __verse_0xB1B721CE_Source) == 0x000008, "Member 'FGame_damage_args::__verse_0xB1B721CE_Source' has a wrong offset!");
static_assert(offsetof(FGame_damage_args, __verse_0x193A13B7_Amount) == 0x000010, "Member 'FGame_damage_args::__verse_0x193A13B7_Amount' has a wrong offset!");

struct FGame_damage_result final
{
public:
	class UObject*                                __verse_0x459049A1_Target;
	double                                        __verse_0x193A13B7_Amount;
	FOptionProperty_                              __verse_0x8B9AF22A_Instigator;
	FOptionProperty_                              __verse_0xB1B721CE_Source;
};
static_assert(alignof(FGame_damage_result) == 0x000008, "Wrong alignment on FGame_damage_result");
static_assert(sizeof(FGame_damage_result) == 0x000020, "Wrong size on FGame_damage_result");
static_assert(offsetof(FGame_damage_result, __verse_0x459049A1_Target) == 0x000000, "Member 'FGame_damage_result::__verse_0x459049A1_Target' has a wrong offset!");
static_assert(offsetof(FGame_damage_result, __verse_0x193A13B7_Amount) == 0x000008, "Member 'FGame_damage_result::__verse_0x193A13B7_Amount' has a wrong offset!");
static_assert(offsetof(FGame_damage_result, __verse_0x8B9AF22A_Instigator) == 0x000010, "Member 'FGame_damage_result::__verse_0x8B9AF22A_Instigator' has a wrong offset!");
static_assert(offsetof(FGame_damage_result, __verse_0xB1B721CE_Source) == 0x000018, "Member 'FGame_damage_result::__verse_0xB1B721CE_Source' has a wrong offset!");

struct FGame_elimination_result final
{
public:
	class UObject*                                __verse_0xC5F618E8_EliminatedCharacter;
	FOptionProperty_                              __verse_0x9B605FD1_EliminatingCharacter;
};
static_assert(alignof(FGame_elimination_result) == 0x000008, "Wrong alignment on FGame_elimination_result");
static_assert(sizeof(FGame_elimination_result) == 0x000010, "Wrong size on FGame_elimination_result");
static_assert(offsetof(FGame_elimination_result, __verse_0xC5F618E8_EliminatedCharacter) == 0x000000, "Member 'FGame_elimination_result::__verse_0xC5F618E8_EliminatedCharacter' has a wrong offset!");
static_assert(offsetof(FGame_elimination_result, __verse_0x9B605FD1_EliminatingCharacter) == 0x000008, "Member 'FGame_elimination_result::__verse_0x9B605FD1_EliminatingCharacter' has a wrong offset!");

struct FGame_healing_args final
{
public:
	FOptionProperty_                              __verse_0x8B9AF22A_Instigator;
	FOptionProperty_                              __verse_0xB1B721CE_Source;
	double                                        __verse_0x193A13B7_Amount;
};
static_assert(alignof(FGame_healing_args) == 0x000008, "Wrong alignment on FGame_healing_args");
static_assert(sizeof(FGame_healing_args) == 0x000018, "Wrong size on FGame_healing_args");
static_assert(offsetof(FGame_healing_args, __verse_0x8B9AF22A_Instigator) == 0x000000, "Member 'FGame_healing_args::__verse_0x8B9AF22A_Instigator' has a wrong offset!");
static_assert(offsetof(FGame_healing_args, __verse_0xB1B721CE_Source) == 0x000008, "Member 'FGame_healing_args::__verse_0xB1B721CE_Source' has a wrong offset!");
static_assert(offsetof(FGame_healing_args, __verse_0x193A13B7_Amount) == 0x000010, "Member 'FGame_healing_args::__verse_0x193A13B7_Amount' has a wrong offset!");

struct FGame_healing_result final
{
public:
	class UObject*                                __verse_0x459049A1_Target;
	double                                        __verse_0x193A13B7_Amount;
	FOptionProperty_                              __verse_0x8B9AF22A_Instigator;
	FOptionProperty_                              __verse_0xB1B721CE_Source;
};
static_assert(alignof(FGame_healing_result) == 0x000008, "Wrong alignment on FGame_healing_result");
static_assert(sizeof(FGame_healing_result) == 0x000020, "Wrong size on FGame_healing_result");
static_assert(offsetof(FGame_healing_result, __verse_0x459049A1_Target) == 0x000000, "Member 'FGame_healing_result::__verse_0x459049A1_Target' has a wrong offset!");
static_assert(offsetof(FGame_healing_result, __verse_0x193A13B7_Amount) == 0x000008, "Member 'FGame_healing_result::__verse_0x193A13B7_Amount' has a wrong offset!");
static_assert(offsetof(FGame_healing_result, __verse_0x8B9AF22A_Instigator) == 0x000010, "Member 'FGame_healing_result::__verse_0x8B9AF22A_Instigator' has a wrong offset!");
static_assert(offsetof(FGame_healing_result, __verse_0xB1B721CE_Source) == 0x000018, "Member 'FGame_healing_result::__verse_0xB1B721CE_Source' has a wrong offset!");

struct VerseFortnite_0::Ftuple_L_R final
{
public:
	uint8                                         _StructPaddingDummy;
};
static_assert(alignof(VerseFortnite_0::Ftuple_L_R) == 0x000001, "Wrong alignment on VerseFortnite_0::Ftuple_L_R");
static_assert(sizeof(VerseFortnite_0::Ftuple_L_R) == 0x000001, "Wrong size on VerseFortnite_0::Ftuple_L_R");
static_assert(offsetof(VerseFortnite_0::Ftuple_L_R, _StructPaddingDummy) == 0x000000, "Member 'VerseFortnite_0::Ftuple_L_R::_StructPaddingDummy' has a wrong offset!");

struct Ftuple_Lagent_Magent_R final
{
public:
	class USimulation_agent*                      __verse_0x18E3F084_Elem0;
	class USimulation_agent*                      __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lagent_Magent_R) == 0x000008, "Wrong alignment on Ftuple_Lagent_Magent_R");
static_assert(sizeof(Ftuple_Lagent_Magent_R) == 0x000010, "Wrong size on Ftuple_Lagent_Magent_R");
static_assert(offsetof(Ftuple_Lagent_Magent_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lagent_Magent_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lagent_Magent_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lagent_Magent_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lagent_Mteam_R final
{
public:
	class USimulation_agent*                      __verse_0x18E3F084_Elem0;
	class USimulation_team*                       __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lagent_Mteam_R) == 0x000008, "Wrong alignment on Ftuple_Lagent_Mteam_R");
static_assert(sizeof(Ftuple_Lagent_Mteam_R) == 0x000010, "Wrong size on Ftuple_Lagent_Mteam_R");
static_assert(offsetof(Ftuple_Lagent_Mteam_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lagent_Mteam_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lagent_Mteam_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lagent_Mteam_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct VerseFortnite_0::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R final
{
public:
	class USimulation_agent*                      __verse_0x18E3F084_Elem0;
	struct VerseFortnite_0::Ftuple_L_R            __verse_0x7D844C3C_Elem1;
	struct VerseFortnite_0::Ftuple_L_R            __verse_0x932BF92E_Elem2;
};
static_assert(alignof(VerseFortnite_0::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R) == 0x000008, "Wrong alignment on VerseFortnite_0::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R");
static_assert(sizeof(VerseFortnite_0::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R) == 0x000010, "Wrong size on VerseFortnite_0::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R");
static_assert(offsetof(VerseFortnite_0::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'VerseFortnite_0::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(VerseFortnite_0::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'VerseFortnite_0::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(VerseFortnite_0::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R, __verse_0x932BF92E_Elem2) == 0x000009, "Member 'VerseFortnite_0::Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct VerseFortnite_0::Ftuple_Lvector3_Mrotation_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0x18E3F084_Elem0;
	uint8                                         Pad_18[0x8];
	struct FVerseRotation                         __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(VerseFortnite_0::Ftuple_Lvector3_Mrotation_R) == 0x000010, "Wrong alignment on VerseFortnite_0::Ftuple_Lvector3_Mrotation_R");
static_assert(sizeof(VerseFortnite_0::Ftuple_Lvector3_Mrotation_R) == 0x000040, "Wrong size on VerseFortnite_0::Ftuple_Lvector3_Mrotation_R");
static_assert(offsetof(VerseFortnite_0::Ftuple_Lvector3_Mrotation_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'VerseFortnite_0::Ftuple_Lvector3_Mrotation_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(VerseFortnite_0::Ftuple_Lvector3_Mrotation_R, __verse_0x7D844C3C_Elem1) == 0x000020, "Member 'VerseFortnite_0::Ftuple_Lvector3_Mrotation_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lagent_Mtuple_L_R_Mtuple_Lvector3_Mrotation_R_R final
{
public:
	class USimulation_agent*                      __verse_0x18E3F084_Elem0;
	struct VerseFortnite_0::Ftuple_L_R            __verse_0x7D844C3C_Elem1;
	uint8                                         Pad_9[0x7];
	struct VerseFortnite_0::Ftuple_Lvector3_Mrotation_R __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_Lagent_Mtuple_L_R_Mtuple_Lvector3_Mrotation_R_R) == 0x000010, "Wrong alignment on Ftuple_Lagent_Mtuple_L_R_Mtuple_Lvector3_Mrotation_R_R");
static_assert(sizeof(Ftuple_Lagent_Mtuple_L_R_Mtuple_Lvector3_Mrotation_R_R) == 0x000050, "Wrong size on Ftuple_Lagent_Mtuple_L_R_Mtuple_Lvector3_Mrotation_R_R");
static_assert(offsetof(Ftuple_Lagent_Mtuple_L_R_Mtuple_Lvector3_Mrotation_R_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lagent_Mtuple_L_R_Mtuple_Lvector3_Mrotation_R_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lagent_Mtuple_L_R_Mtuple_Lvector3_Mrotation_R_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lagent_Mtuple_L_R_Mtuple_Lvector3_Mrotation_R_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lagent_Mtuple_L_R_Mtuple_Lvector3_Mrotation_R_R, __verse_0x932BF92E_Elem2) == 0x000010, "Member 'Ftuple_Lagent_Mtuple_L_R_Mtuple_Lvector3_Mrotation_R_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct VerseFortnite_0::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R final
{
public:
	class UObject*                                __verse_0x18E3F084_Elem0;
	struct VerseFortnite_0::Ftuple_L_R            __verse_0x7D844C3C_Elem1;
	struct VerseFortnite_0::Ftuple_L_R            __verse_0x932BF92E_Elem2;
};
static_assert(alignof(VerseFortnite_0::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) == 0x000008, "Wrong alignment on VerseFortnite_0::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R");
static_assert(sizeof(VerseFortnite_0::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) == 0x000010, "Wrong size on VerseFortnite_0::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R");
static_assert(offsetof(VerseFortnite_0::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'VerseFortnite_0::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(VerseFortnite_0::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'VerseFortnite_0::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(VerseFortnite_0::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R, __verse_0x932BF92E_Elem2) == 0x000009, "Member 'VerseFortnite_0::Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Lgame__action__instigator_Mtuple_L_R_Mtuple_L_R_R final
{
public:
	class UObject*                                __verse_0x18E3F084_Elem0;
	struct VerseFortnite_0::Ftuple_L_R            __verse_0x7D844C3C_Elem1;
	struct VerseFortnite_0::Ftuple_L_R            __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_Lgame__action__instigator_Mtuple_L_R_Mtuple_L_R_R) == 0x000008, "Wrong alignment on Ftuple_Lgame__action__instigator_Mtuple_L_R_Mtuple_L_R_R");
static_assert(sizeof(Ftuple_Lgame__action__instigator_Mtuple_L_R_Mtuple_L_R_R) == 0x000010, "Wrong size on Ftuple_Lgame__action__instigator_Mtuple_L_R_Mtuple_L_R_R");
static_assert(offsetof(Ftuple_Lgame__action__instigator_Mtuple_L_R_Mtuple_L_R_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lgame__action__instigator_Mtuple_L_R_Mtuple_L_R_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lgame__action__instigator_Mtuple_L_R_Mtuple_L_R_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lgame__action__instigator_Mtuple_L_R_Mtuple_L_R_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lgame__action__instigator_Mtuple_L_R_Mtuple_L_R_R, __verse_0x932BF92E_Elem2) == 0x000009, "Member 'Ftuple_Lgame__action__instigator_Mtuple_L_R_Mtuple_L_R_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Lplayer_Mtuple_L_R_Mplayer_R final
{
public:
	class USimulation_player*                     __verse_0x18E3F084_Elem0;
	struct VerseFortnite_0::Ftuple_L_R            __verse_0x7D844C3C_Elem1;
	uint8                                         Pad_9[0x7];
	class USimulation_player*                     __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_Lplayer_Mtuple_L_R_Mplayer_R) == 0x000008, "Wrong alignment on Ftuple_Lplayer_Mtuple_L_R_Mplayer_R");
static_assert(sizeof(Ftuple_Lplayer_Mtuple_L_R_Mplayer_R) == 0x000018, "Wrong size on Ftuple_Lplayer_Mtuple_L_R_Mplayer_R");
static_assert(offsetof(Ftuple_Lplayer_Mtuple_L_R_Mplayer_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lplayer_Mtuple_L_R_Mplayer_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lplayer_Mtuple_L_R_Mplayer_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lplayer_Mtuple_L_R_Mplayer_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lplayer_Mtuple_L_R_Mplayer_R, __verse_0x932BF92E_Elem2) == 0x000010, "Member 'Ftuple_Lplayer_Mtuple_L_R_Mplayer_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R final
{
public:
	class USimulation_player*                     __verse_0x18E3F084_Elem0;
	struct VerseFortnite_0::Ftuple_L_R            __verse_0x7D844C3C_Elem1;
	struct VerseFortnite_0::Ftuple_L_R            __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R) == 0x000008, "Wrong alignment on Ftuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R");
static_assert(sizeof(Ftuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R) == 0x000010, "Wrong size on Ftuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R");
static_assert(offsetof(Ftuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R, __verse_0x932BF92E_Elem2) == 0x000009, "Member 'Ftuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Lteam_Mteam_R final
{
public:
	class USimulation_team*                       __verse_0x18E3F084_Elem0;
	class USimulation_team*                       __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lteam_Mteam_R) == 0x000008, "Wrong alignment on Ftuple_Lteam_Mteam_R");
static_assert(sizeof(Ftuple_Lteam_Mteam_R) == 0x000010, "Wrong size on Ftuple_Lteam_Mteam_R");
static_assert(offsetof(Ftuple_Lteam_Mteam_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lteam_Mteam_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lteam_Mteam_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lteam_Mteam_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

}
