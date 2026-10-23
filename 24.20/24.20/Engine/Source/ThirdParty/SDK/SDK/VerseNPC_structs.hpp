#pragma once

#include "Basic.hpp"

#include "EpicGamesTemporary_0_structs.hpp"

namespace SDK
{

struct VerseNPC::Ftuple_L_R final
{
public:
	uint8                                         _StructPaddingDummy;
};
static_assert(alignof(VerseNPC::Ftuple_L_R) == 0x000001, "Wrong alignment on VerseNPC::Ftuple_L_R");
static_assert(sizeof(VerseNPC::Ftuple_L_R) == 0x000001, "Wrong size on VerseNPC::Ftuple_L_R");
static_assert(offsetof(VerseNPC::Ftuple_L_R, _StructPaddingDummy) == 0x000000, "Member 'VerseNPC::Ftuple_L_R::_StructPaddingDummy' has a wrong offset!");

struct VerseNPC::Ftuple_Lagent_Mfloat_Mfloat_R final
{
public:
	class USimulation_agent*                      __verse_0x18E3F084_Elem0;
	double                                        __verse_0x7D844C3C_Elem1;
	double                                        __verse_0x932BF92E_Elem2;
};
static_assert(alignof(VerseNPC::Ftuple_Lagent_Mfloat_Mfloat_R) == 0x000008, "Wrong alignment on VerseNPC::Ftuple_Lagent_Mfloat_Mfloat_R");
static_assert(sizeof(VerseNPC::Ftuple_Lagent_Mfloat_Mfloat_R) == 0x000018, "Wrong size on VerseNPC::Ftuple_Lagent_Mfloat_Mfloat_R");
static_assert(offsetof(VerseNPC::Ftuple_Lagent_Mfloat_Mfloat_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'VerseNPC::Ftuple_Lagent_Mfloat_Mfloat_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(VerseNPC::Ftuple_Lagent_Mfloat_Mfloat_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'VerseNPC::Ftuple_Lagent_Mfloat_Mfloat_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(VerseNPC::Ftuple_Lagent_Mfloat_Mfloat_R, __verse_0x932BF92E_Elem2) == 0x000010, "Member 'VerseNPC::Ftuple_Lagent_Mfloat_Mfloat_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct VerseNPC::Ftuple_Lagent_Mlogic_R final
{
public:
	class USimulation_agent*                      __verse_0x18E3F084_Elem0;
	uint8                                         __verse_0x7D844C3C_Elem1 : 1;
};
static_assert(alignof(VerseNPC::Ftuple_Lagent_Mlogic_R) == 0x000008, "Wrong alignment on VerseNPC::Ftuple_Lagent_Mlogic_R");
static_assert(sizeof(VerseNPC::Ftuple_Lagent_Mlogic_R) == 0x000010, "Wrong size on VerseNPC::Ftuple_Lagent_Mlogic_R");
static_assert(offsetof(VerseNPC::Ftuple_Lagent_Mlogic_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'VerseNPC::Ftuple_Lagent_Mlogic_R::__verse_0x18E3F084_Elem0' has a wrong offset!");

struct VerseNPC::Ftuple_Lfort__inventory__item__asset_Mint_R final
{
public:
	class UVerseAIBase_fort_inventory_item_asset* __verse_0x18E3F084_Elem0;
	int64                                         __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(VerseNPC::Ftuple_Lfort__inventory__item__asset_Mint_R) == 0x000008, "Wrong alignment on VerseNPC::Ftuple_Lfort__inventory__item__asset_Mint_R");
static_assert(sizeof(VerseNPC::Ftuple_Lfort__inventory__item__asset_Mint_R) == 0x000010, "Wrong size on VerseNPC::Ftuple_Lfort__inventory__item__asset_Mint_R");
static_assert(offsetof(VerseNPC::Ftuple_Lfort__inventory__item__asset_Mint_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'VerseNPC::Ftuple_Lfort__inventory__item__asset_Mint_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(VerseNPC::Ftuple_Lfort__inventory__item__asset_Mint_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'VerseNPC::Ftuple_Lfort__inventory__item__asset_Mint_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct VerseNPC::Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R final
{
public:
	class UVerseAIBase_navigation_target*         __verse_0x18E3F084_Elem0;
	FOptionProperty_                              __verse_0x7D844C3C_Elem1;
	FOptionProperty_                              __verse_0x932BF92E_Elem2;
};
static_assert(alignof(VerseNPC::Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R) == 0x000008, "Wrong alignment on VerseNPC::Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R");
static_assert(sizeof(VerseNPC::Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R) == 0x000018, "Wrong size on VerseNPC::Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R");
static_assert(offsetof(VerseNPC::Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'VerseNPC::Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(VerseNPC::Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'VerseNPC::Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(VerseNPC::Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R, __verse_0x932BF92E_Elem2) == 0x000011, "Member 'VerseNPC::Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct VerseNPC::Ftuple_Lvector3_Mfloat_Mfloat_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0x18E3F084_Elem0;
	double                                        __verse_0x7D844C3C_Elem1;
	double                                        __verse_0x932BF92E_Elem2;
};
static_assert(alignof(VerseNPC::Ftuple_Lvector3_Mfloat_Mfloat_R) == 0x000008, "Wrong alignment on VerseNPC::Ftuple_Lvector3_Mfloat_Mfloat_R");
static_assert(sizeof(VerseNPC::Ftuple_Lvector3_Mfloat_Mfloat_R) == 0x000028, "Wrong size on VerseNPC::Ftuple_Lvector3_Mfloat_Mfloat_R");
static_assert(offsetof(VerseNPC::Ftuple_Lvector3_Mfloat_Mfloat_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'VerseNPC::Ftuple_Lvector3_Mfloat_Mfloat_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(VerseNPC::Ftuple_Lvector3_Mfloat_Mfloat_R, __verse_0x7D844C3C_Elem1) == 0x000018, "Member 'VerseNPC::Ftuple_Lvector3_Mfloat_Mfloat_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(VerseNPC::Ftuple_Lvector3_Mfloat_Mfloat_R, __verse_0x932BF92E_Elem2) == 0x000020, "Member 'VerseNPC::Ftuple_Lvector3_Mfloat_Mfloat_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

}
