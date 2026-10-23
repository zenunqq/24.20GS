#pragma once

#include "Basic.hpp"

#include "EpicGamesTemporary_structs.hpp"

namespace SDK
{

struct FSpatialMath_vector3 final
{
public:
	double                                        __verse_0x51F8FD2F_X;
	double                                        __verse_0x349F4197_Y;
	double                                        __verse_0xDA30F485_Z;
};
static_assert(alignof(FSpatialMath_vector3) == 0x000008, "Wrong alignment on FSpatialMath_vector3");
static_assert(sizeof(FSpatialMath_vector3) == 0x000018, "Wrong size on FSpatialMath_vector3");
static_assert(offsetof(FSpatialMath_vector3, __verse_0x51F8FD2F_X) == 0x000000, "Member 'FSpatialMath_vector3::__verse_0x51F8FD2F_X' has a wrong offset!");
static_assert(offsetof(FSpatialMath_vector3, __verse_0x349F4197_Y) == 0x000008, "Member 'FSpatialMath_vector3::__verse_0x349F4197_Y' has a wrong offset!");
static_assert(offsetof(FSpatialMath_vector3, __verse_0xDA30F485_Z) == 0x000010, "Member 'FSpatialMath_vector3::__verse_0xDA30F485_Z' has a wrong offset!");

struct FSpatialMath_transform final
{
public:
	struct FSpatialMath_vector3                   __verse_0xA376805D_Scale;
	uint8                                         Pad_18[0x8];
	struct FVerseRotation                         __verse_0x78C70FF3_Rotation;
	struct FSpatialMath_vector3                   __verse_0x4E05BF15_Translation;
	uint8                                         Pad_58[0x8];
};
static_assert(alignof(FSpatialMath_transform) == 0x000010, "Wrong alignment on FSpatialMath_transform");
static_assert(sizeof(FSpatialMath_transform) == 0x000060, "Wrong size on FSpatialMath_transform");
static_assert(offsetof(FSpatialMath_transform, __verse_0xA376805D_Scale) == 0x000000, "Member 'FSpatialMath_transform::__verse_0xA376805D_Scale' has a wrong offset!");
static_assert(offsetof(FSpatialMath_transform, __verse_0x78C70FF3_Rotation) == 0x000020, "Member 'FSpatialMath_transform::__verse_0x78C70FF3_Rotation' has a wrong offset!");
static_assert(offsetof(FSpatialMath_transform, __verse_0x4E05BF15_Translation) == 0x000040, "Member 'FSpatialMath_transform::__verse_0x4E05BF15_Translation' has a wrong offset!");

struct FSpatialMath_vector2 final
{
public:
	double                                        __verse_0x51F8FD2F_X;
	double                                        __verse_0x349F4197_Y;
};
static_assert(alignof(FSpatialMath_vector2) == 0x000008, "Wrong alignment on FSpatialMath_vector2");
static_assert(sizeof(FSpatialMath_vector2) == 0x000010, "Wrong size on FSpatialMath_vector2");
static_assert(offsetof(FSpatialMath_vector2, __verse_0x51F8FD2F_X) == 0x000000, "Member 'FSpatialMath_vector2::__verse_0x51F8FD2F_X' has a wrong offset!");
static_assert(offsetof(FSpatialMath_vector2, __verse_0x349F4197_Y) == 0x000008, "Member 'FSpatialMath_vector2::__verse_0x349F4197_Y' has a wrong offset!");

struct FSpatialMath_vector2i final
{
public:
	int64                                         __verse_0x51F8FD2F_X;
	int64                                         __verse_0x349F4197_Y;
};
static_assert(alignof(FSpatialMath_vector2i) == 0x000008, "Wrong alignment on FSpatialMath_vector2i");
static_assert(sizeof(FSpatialMath_vector2i) == 0x000010, "Wrong size on FSpatialMath_vector2i");
static_assert(offsetof(FSpatialMath_vector2i, __verse_0x51F8FD2F_X) == 0x000000, "Member 'FSpatialMath_vector2i::__verse_0x51F8FD2F_X' has a wrong offset!");
static_assert(offsetof(FSpatialMath_vector2i, __verse_0x349F4197_Y) == 0x000008, "Member 'FSpatialMath_vector2i::__verse_0x349F4197_Y' has a wrong offset!");

struct EpicGamesTemporary_0::Ftuple_L_R final
{
public:
	uint8                                         _StructPaddingDummy;
};
static_assert(alignof(EpicGamesTemporary_0::Ftuple_L_R) == 0x000001, "Wrong alignment on EpicGamesTemporary_0::Ftuple_L_R");
static_assert(sizeof(EpicGamesTemporary_0::Ftuple_L_R) == 0x000001, "Wrong size on EpicGamesTemporary_0::Ftuple_L_R");
static_assert(offsetof(EpicGamesTemporary_0::Ftuple_L_R, _StructPaddingDummy) == 0x000000, "Member 'EpicGamesTemporary_0::Ftuple_L_R::_StructPaddingDummy' has a wrong offset!");

struct EpicGamesTemporary_0::Ftuple_Lfloat_Mfloat_Mfloat_R final
{
public:
	double                                        __verse_0x18E3F084_Elem0;
	double                                        __verse_0x7D844C3C_Elem1;
	double                                        __verse_0x932BF92E_Elem2;
};
static_assert(alignof(EpicGamesTemporary_0::Ftuple_Lfloat_Mfloat_Mfloat_R) == 0x000008, "Wrong alignment on EpicGamesTemporary_0::Ftuple_Lfloat_Mfloat_Mfloat_R");
static_assert(sizeof(EpicGamesTemporary_0::Ftuple_Lfloat_Mfloat_Mfloat_R) == 0x000018, "Wrong size on EpicGamesTemporary_0::Ftuple_Lfloat_Mfloat_Mfloat_R");
static_assert(offsetof(EpicGamesTemporary_0::Ftuple_Lfloat_Mfloat_Mfloat_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'EpicGamesTemporary_0::Ftuple_Lfloat_Mfloat_Mfloat_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(EpicGamesTemporary_0::Ftuple_Lfloat_Mfloat_Mfloat_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'EpicGamesTemporary_0::Ftuple_Lfloat_Mfloat_Mfloat_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(EpicGamesTemporary_0::Ftuple_Lfloat_Mfloat_Mfloat_R, __verse_0x932BF92E_Elem2) == 0x000010, "Member 'EpicGamesTemporary_0::Ftuple_Lfloat_Mfloat_Mfloat_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct EpicGamesTemporary_0::Ftuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R final
{
public:
	double                                        __verse_0x18E3F084_Elem0;
	struct EpicGamesTemporary_0::Ftuple_L_R       __verse_0x7D844C3C_Elem1;
	struct EpicGamesTemporary_0::Ftuple_L_R       __verse_0x932BF92E_Elem2;
};
static_assert(alignof(EpicGamesTemporary_0::Ftuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R) == 0x000008, "Wrong alignment on EpicGamesTemporary_0::Ftuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R");
static_assert(sizeof(EpicGamesTemporary_0::Ftuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R) == 0x000010, "Wrong size on EpicGamesTemporary_0::Ftuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R");
static_assert(offsetof(EpicGamesTemporary_0::Ftuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'EpicGamesTemporary_0::Ftuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(EpicGamesTemporary_0::Ftuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'EpicGamesTemporary_0::Ftuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(EpicGamesTemporary_0::Ftuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R, __verse_0x932BF92E_Elem2) == 0x000009, "Member 'EpicGamesTemporary_0::Ftuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Lfloat_Mvector2_R final
{
public:
	double                                        __verse_0x18E3F084_Elem0;
	struct FSpatialMath_vector2                   __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lfloat_Mvector2_R) == 0x000008, "Wrong alignment on Ftuple_Lfloat_Mvector2_R");
static_assert(sizeof(Ftuple_Lfloat_Mvector2_R) == 0x000018, "Wrong size on Ftuple_Lfloat_Mvector2_R");
static_assert(offsetof(Ftuple_Lfloat_Mvector2_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lfloat_Mvector2_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lfloat_Mvector2_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lfloat_Mvector2_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lfloat_Mvector3_R final
{
public:
	double                                        __verse_0x18E3F084_Elem0;
	struct FSpatialMath_vector3                   __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lfloat_Mvector3_R) == 0x000008, "Wrong alignment on Ftuple_Lfloat_Mvector3_R");
static_assert(sizeof(Ftuple_Lfloat_Mvector3_R) == 0x000020, "Wrong size on Ftuple_Lfloat_Mvector3_R");
static_assert(offsetof(Ftuple_Lfloat_Mvector3_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lfloat_Mvector3_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lfloat_Mvector3_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lfloat_Mvector3_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lint_Mvector2i_R final
{
public:
	int64                                         __verse_0x18E3F084_Elem0;
	struct FSpatialMath_vector2i                  __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lint_Mvector2i_R) == 0x000008, "Wrong alignment on Ftuple_Lint_Mvector2i_R");
static_assert(sizeof(Ftuple_Lint_Mvector2i_R) == 0x000018, "Wrong size on Ftuple_Lint_Mvector2i_R");
static_assert(offsetof(Ftuple_Lint_Mvector2i_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lint_Mvector2i_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lint_Mvector2i_R, __verse_0x7D844C3C_Elem1) == 0x000008, "Member 'Ftuple_Lint_Mvector2i_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lrotation_Mrotation_Mfloat_R final
{
public:
	struct FVerseRotation                         __verse_0x18E3F084_Elem0;
	struct FVerseRotation                         __verse_0x7D844C3C_Elem1;
	double                                        __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_Lrotation_Mrotation_Mfloat_R) == 0x000010, "Wrong alignment on Ftuple_Lrotation_Mrotation_Mfloat_R");
static_assert(sizeof(Ftuple_Lrotation_Mrotation_Mfloat_R) == 0x000050, "Wrong size on Ftuple_Lrotation_Mrotation_Mfloat_R");
static_assert(offsetof(Ftuple_Lrotation_Mrotation_Mfloat_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lrotation_Mrotation_Mfloat_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lrotation_Mrotation_Mfloat_R, __verse_0x7D844C3C_Elem1) == 0x000020, "Member 'Ftuple_Lrotation_Mrotation_Mfloat_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lrotation_Mrotation_Mfloat_R, __verse_0x932BF92E_Elem2) == 0x000040, "Member 'Ftuple_Lrotation_Mrotation_Mfloat_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct EpicGamesTemporary_0::Ftuple_Lrotation_Mrotation_R final
{
public:
	struct FVerseRotation                         __verse_0x18E3F084_Elem0;
	struct FVerseRotation                         __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(EpicGamesTemporary_0::Ftuple_Lrotation_Mrotation_R) == 0x000010, "Wrong alignment on EpicGamesTemporary_0::Ftuple_Lrotation_Mrotation_R");
static_assert(sizeof(EpicGamesTemporary_0::Ftuple_Lrotation_Mrotation_R) == 0x000040, "Wrong size on EpicGamesTemporary_0::Ftuple_Lrotation_Mrotation_R");
static_assert(offsetof(EpicGamesTemporary_0::Ftuple_Lrotation_Mrotation_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'EpicGamesTemporary_0::Ftuple_Lrotation_Mrotation_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(EpicGamesTemporary_0::Ftuple_Lrotation_Mrotation_R, __verse_0x7D844C3C_Elem1) == 0x000020, "Member 'EpicGamesTemporary_0::Ftuple_Lrotation_Mrotation_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lrotation_Mtuple_L_R_Mfloat_R final
{
public:
	struct FVerseRotation                         __verse_0x18E3F084_Elem0;
	struct EpicGamesTemporary_0::Ftuple_L_R       __verse_0x7D844C3C_Elem1;
	uint8                                         Pad_21[0x7];
	double                                        __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_Lrotation_Mtuple_L_R_Mfloat_R) == 0x000010, "Wrong alignment on Ftuple_Lrotation_Mtuple_L_R_Mfloat_R");
static_assert(sizeof(Ftuple_Lrotation_Mtuple_L_R_Mfloat_R) == 0x000030, "Wrong size on Ftuple_Lrotation_Mtuple_L_R_Mfloat_R");
static_assert(offsetof(Ftuple_Lrotation_Mtuple_L_R_Mfloat_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lrotation_Mtuple_L_R_Mfloat_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lrotation_Mtuple_L_R_Mfloat_R, __verse_0x7D844C3C_Elem1) == 0x000020, "Member 'Ftuple_Lrotation_Mtuple_L_R_Mfloat_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lrotation_Mtuple_L_R_Mfloat_R, __verse_0x932BF92E_Elem2) == 0x000028, "Member 'Ftuple_Lrotation_Mtuple_L_R_Mfloat_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Lrotation_Mtuple_L_R_Mrotation_R final
{
public:
	struct FVerseRotation                         __verse_0x18E3F084_Elem0;
	struct EpicGamesTemporary_0::Ftuple_L_R       __verse_0x7D844C3C_Elem1;
	uint8                                         Pad_21[0xF];
	struct FVerseRotation                         __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_Lrotation_Mtuple_L_R_Mrotation_R) == 0x000010, "Wrong alignment on Ftuple_Lrotation_Mtuple_L_R_Mrotation_R");
static_assert(sizeof(Ftuple_Lrotation_Mtuple_L_R_Mrotation_R) == 0x000050, "Wrong size on Ftuple_Lrotation_Mtuple_L_R_Mrotation_R");
static_assert(offsetof(Ftuple_Lrotation_Mtuple_L_R_Mrotation_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lrotation_Mtuple_L_R_Mrotation_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lrotation_Mtuple_L_R_Mrotation_R, __verse_0x7D844C3C_Elem1) == 0x000020, "Member 'Ftuple_Lrotation_Mtuple_L_R_Mrotation_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lrotation_Mtuple_L_R_Mrotation_R, __verse_0x932BF92E_Elem2) == 0x000030, "Member 'Ftuple_Lrotation_Mtuple_L_R_Mrotation_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct EpicGamesTemporary_0::Ftuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R final
{
public:
	struct FVerseRotation                         __verse_0x18E3F084_Elem0;
	struct EpicGamesTemporary_0::Ftuple_L_R       __verse_0x7D844C3C_Elem1;
	struct EpicGamesTemporary_0::Ftuple_L_R       __verse_0x932BF92E_Elem2;
};
static_assert(alignof(EpicGamesTemporary_0::Ftuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R) == 0x000010, "Wrong alignment on EpicGamesTemporary_0::Ftuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R");
static_assert(sizeof(EpicGamesTemporary_0::Ftuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R) == 0x000030, "Wrong size on EpicGamesTemporary_0::Ftuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R");
static_assert(offsetof(EpicGamesTemporary_0::Ftuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'EpicGamesTemporary_0::Ftuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(EpicGamesTemporary_0::Ftuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R, __verse_0x7D844C3C_Elem1) == 0x000020, "Member 'EpicGamesTemporary_0::Ftuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(EpicGamesTemporary_0::Ftuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R, __verse_0x932BF92E_Elem2) == 0x000021, "Member 'EpicGamesTemporary_0::Ftuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Lrotation_Mtuple_L_R_Mvector3_R final
{
public:
	struct FVerseRotation                         __verse_0x18E3F084_Elem0;
	struct EpicGamesTemporary_0::Ftuple_L_R       __verse_0x7D844C3C_Elem1;
	uint8                                         Pad_21[0x7];
	struct FSpatialMath_vector3                   __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_Lrotation_Mtuple_L_R_Mvector3_R) == 0x000010, "Wrong alignment on Ftuple_Lrotation_Mtuple_L_R_Mvector3_R");
static_assert(sizeof(Ftuple_Lrotation_Mtuple_L_R_Mvector3_R) == 0x000040, "Wrong size on Ftuple_Lrotation_Mtuple_L_R_Mvector3_R");
static_assert(offsetof(Ftuple_Lrotation_Mtuple_L_R_Mvector3_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lrotation_Mtuple_L_R_Mvector3_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lrotation_Mtuple_L_R_Mvector3_R, __verse_0x7D844C3C_Elem1) == 0x000020, "Member 'Ftuple_Lrotation_Mtuple_L_R_Mvector3_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lrotation_Mtuple_L_R_Mvector3_R, __verse_0x932BF92E_Elem2) == 0x000028, "Member 'Ftuple_Lrotation_Mtuple_L_R_Mvector3_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Ltransform_Mvector3_R final
{
public:
	struct FSpatialMath_transform                 __verse_0x18E3F084_Elem0;
	struct FSpatialMath_vector3                   __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Ltransform_Mvector3_R) == 0x000010, "Wrong alignment on Ftuple_Ltransform_Mvector3_R");
static_assert(sizeof(Ftuple_Ltransform_Mvector3_R) == 0x000080, "Wrong size on Ftuple_Ltransform_Mvector3_R");
static_assert(offsetof(Ftuple_Ltransform_Mvector3_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Ltransform_Mvector3_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Ltransform_Mvector3_R, __verse_0x7D844C3C_Elem1) == 0x000060, "Member 'Ftuple_Ltransform_Mvector3_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lvector2_Mfloat_R final
{
public:
	struct FSpatialMath_vector2                   __verse_0x18E3F084_Elem0;
	double                                        __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lvector2_Mfloat_R) == 0x000008, "Wrong alignment on Ftuple_Lvector2_Mfloat_R");
static_assert(sizeof(Ftuple_Lvector2_Mfloat_R) == 0x000018, "Wrong size on Ftuple_Lvector2_Mfloat_R");
static_assert(offsetof(Ftuple_Lvector2_Mfloat_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lvector2_Mfloat_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector2_Mfloat_R, __verse_0x7D844C3C_Elem1) == 0x000010, "Member 'Ftuple_Lvector2_Mfloat_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lvector2_Mtuple_L_R_Mfloat_R final
{
public:
	struct FSpatialMath_vector2                   __verse_0x18E3F084_Elem0;
	struct EpicGamesTemporary_0::Ftuple_L_R       __verse_0x7D844C3C_Elem1;
	uint8                                         Pad_11[0x7];
	double                                        __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_Lvector2_Mtuple_L_R_Mfloat_R) == 0x000008, "Wrong alignment on Ftuple_Lvector2_Mtuple_L_R_Mfloat_R");
static_assert(sizeof(Ftuple_Lvector2_Mtuple_L_R_Mfloat_R) == 0x000020, "Wrong size on Ftuple_Lvector2_Mtuple_L_R_Mfloat_R");
static_assert(offsetof(Ftuple_Lvector2_Mtuple_L_R_Mfloat_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lvector2_Mtuple_L_R_Mfloat_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector2_Mtuple_L_R_Mfloat_R, __verse_0x7D844C3C_Elem1) == 0x000010, "Member 'Ftuple_Lvector2_Mtuple_L_R_Mfloat_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector2_Mtuple_L_R_Mfloat_R, __verse_0x932BF92E_Elem2) == 0x000018, "Member 'Ftuple_Lvector2_Mtuple_L_R_Mfloat_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Lvector2_Mtuple_L_R_Mtuple_L_R_R final
{
public:
	struct FSpatialMath_vector2                   __verse_0x18E3F084_Elem0;
	struct EpicGamesTemporary_0::Ftuple_L_R       __verse_0x7D844C3C_Elem1;
	struct EpicGamesTemporary_0::Ftuple_L_R       __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_Lvector2_Mtuple_L_R_Mtuple_L_R_R) == 0x000008, "Wrong alignment on Ftuple_Lvector2_Mtuple_L_R_Mtuple_L_R_R");
static_assert(sizeof(Ftuple_Lvector2_Mtuple_L_R_Mtuple_L_R_R) == 0x000018, "Wrong size on Ftuple_Lvector2_Mtuple_L_R_Mtuple_L_R_R");
static_assert(offsetof(Ftuple_Lvector2_Mtuple_L_R_Mtuple_L_R_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lvector2_Mtuple_L_R_Mtuple_L_R_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector2_Mtuple_L_R_Mtuple_L_R_R, __verse_0x7D844C3C_Elem1) == 0x000010, "Member 'Ftuple_Lvector2_Mtuple_L_R_Mtuple_L_R_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector2_Mtuple_L_R_Mtuple_L_R_R, __verse_0x932BF92E_Elem2) == 0x000011, "Member 'Ftuple_Lvector2_Mtuple_L_R_Mtuple_L_R_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Lvector2_Mvector2_Mfloat_R final
{
public:
	struct FSpatialMath_vector2                   __verse_0x18E3F084_Elem0;
	struct FSpatialMath_vector2                   __verse_0x7D844C3C_Elem1;
	double                                        __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_Lvector2_Mvector2_Mfloat_R) == 0x000008, "Wrong alignment on Ftuple_Lvector2_Mvector2_Mfloat_R");
static_assert(sizeof(Ftuple_Lvector2_Mvector2_Mfloat_R) == 0x000028, "Wrong size on Ftuple_Lvector2_Mvector2_Mfloat_R");
static_assert(offsetof(Ftuple_Lvector2_Mvector2_Mfloat_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lvector2_Mvector2_Mfloat_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector2_Mvector2_Mfloat_R, __verse_0x7D844C3C_Elem1) == 0x000010, "Member 'Ftuple_Lvector2_Mvector2_Mfloat_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector2_Mvector2_Mfloat_R, __verse_0x932BF92E_Elem2) == 0x000020, "Member 'Ftuple_Lvector2_Mvector2_Mfloat_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Lvector2_Mvector2_R final
{
public:
	struct FSpatialMath_vector2                   __verse_0x18E3F084_Elem0;
	struct FSpatialMath_vector2                   __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lvector2_Mvector2_R) == 0x000008, "Wrong alignment on Ftuple_Lvector2_Mvector2_R");
static_assert(sizeof(Ftuple_Lvector2_Mvector2_R) == 0x000020, "Wrong size on Ftuple_Lvector2_Mvector2_R");
static_assert(offsetof(Ftuple_Lvector2_Mvector2_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lvector2_Mvector2_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector2_Mvector2_R, __verse_0x7D844C3C_Elem1) == 0x000010, "Member 'Ftuple_Lvector2_Mvector2_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lvector2i_Mint_R final
{
public:
	struct FSpatialMath_vector2i                  __verse_0x18E3F084_Elem0;
	int64                                         __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lvector2i_Mint_R) == 0x000008, "Wrong alignment on Ftuple_Lvector2i_Mint_R");
static_assert(sizeof(Ftuple_Lvector2i_Mint_R) == 0x000018, "Wrong size on Ftuple_Lvector2i_Mint_R");
static_assert(offsetof(Ftuple_Lvector2i_Mint_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lvector2i_Mint_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector2i_Mint_R, __verse_0x7D844C3C_Elem1) == 0x000010, "Member 'Ftuple_Lvector2i_Mint_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lvector2i_Mvector2i_R final
{
public:
	struct FSpatialMath_vector2i                  __verse_0x18E3F084_Elem0;
	struct FSpatialMath_vector2i                  __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lvector2i_Mvector2i_R) == 0x000008, "Wrong alignment on Ftuple_Lvector2i_Mvector2i_R");
static_assert(sizeof(Ftuple_Lvector2i_Mvector2i_R) == 0x000020, "Wrong size on Ftuple_Lvector2i_Mvector2i_R");
static_assert(offsetof(Ftuple_Lvector2i_Mvector2i_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lvector2i_Mvector2i_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector2i_Mvector2i_R, __verse_0x7D844C3C_Elem1) == 0x000010, "Member 'Ftuple_Lvector2i_Mvector2i_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lvector3_Mfloat_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0x18E3F084_Elem0;
	double                                        __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(Ftuple_Lvector3_Mfloat_R) == 0x000008, "Wrong alignment on Ftuple_Lvector3_Mfloat_R");
static_assert(sizeof(Ftuple_Lvector3_Mfloat_R) == 0x000020, "Wrong size on Ftuple_Lvector3_Mfloat_R");
static_assert(offsetof(Ftuple_Lvector3_Mfloat_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lvector3_Mfloat_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_Mfloat_R, __verse_0x7D844C3C_Elem1) == 0x000018, "Member 'Ftuple_Lvector3_Mfloat_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

struct Ftuple_Lvector3_Mtuple_L_R_Mfloat_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0x18E3F084_Elem0;
	struct EpicGamesTemporary_0::Ftuple_L_R       __verse_0x7D844C3C_Elem1;
	uint8                                         Pad_19[0x7];
	double                                        __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_Lvector3_Mtuple_L_R_Mfloat_R) == 0x000008, "Wrong alignment on Ftuple_Lvector3_Mtuple_L_R_Mfloat_R");
static_assert(sizeof(Ftuple_Lvector3_Mtuple_L_R_Mfloat_R) == 0x000028, "Wrong size on Ftuple_Lvector3_Mtuple_L_R_Mfloat_R");
static_assert(offsetof(Ftuple_Lvector3_Mtuple_L_R_Mfloat_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lvector3_Mtuple_L_R_Mfloat_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_Mtuple_L_R_Mfloat_R, __verse_0x7D844C3C_Elem1) == 0x000018, "Member 'Ftuple_Lvector3_Mtuple_L_R_Mfloat_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_Mtuple_L_R_Mfloat_R, __verse_0x932BF92E_Elem2) == 0x000020, "Member 'Ftuple_Lvector3_Mtuple_L_R_Mfloat_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0x18E3F084_Elem0;
	struct EpicGamesTemporary_0::Ftuple_L_R       __verse_0x7D844C3C_Elem1;
	struct EpicGamesTemporary_0::Ftuple_L_R       __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R) == 0x000008, "Wrong alignment on Ftuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R");
static_assert(sizeof(Ftuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R) == 0x000020, "Wrong size on Ftuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R");
static_assert(offsetof(Ftuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R, __verse_0x7D844C3C_Elem1) == 0x000018, "Member 'Ftuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R, __verse_0x932BF92E_Elem2) == 0x000019, "Member 'Ftuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct Ftuple_Lvector3_Mvector3_Mfloat_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0x18E3F084_Elem0;
	struct FSpatialMath_vector3                   __verse_0x7D844C3C_Elem1;
	double                                        __verse_0x932BF92E_Elem2;
};
static_assert(alignof(Ftuple_Lvector3_Mvector3_Mfloat_R) == 0x000008, "Wrong alignment on Ftuple_Lvector3_Mvector3_Mfloat_R");
static_assert(sizeof(Ftuple_Lvector3_Mvector3_Mfloat_R) == 0x000038, "Wrong size on Ftuple_Lvector3_Mvector3_Mfloat_R");
static_assert(offsetof(Ftuple_Lvector3_Mvector3_Mfloat_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'Ftuple_Lvector3_Mvector3_Mfloat_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_Mvector3_Mfloat_R, __verse_0x7D844C3C_Elem1) == 0x000018, "Member 'Ftuple_Lvector3_Mvector3_Mfloat_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");
static_assert(offsetof(Ftuple_Lvector3_Mvector3_Mfloat_R, __verse_0x932BF92E_Elem2) == 0x000030, "Member 'Ftuple_Lvector3_Mvector3_Mfloat_R::__verse_0x932BF92E_Elem2' has a wrong offset!");

struct EpicGamesTemporary_0::Ftuple_Lvector3_Mvector3_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0x18E3F084_Elem0;
	struct FSpatialMath_vector3                   __verse_0x7D844C3C_Elem1;
};
static_assert(alignof(EpicGamesTemporary_0::Ftuple_Lvector3_Mvector3_R) == 0x000008, "Wrong alignment on EpicGamesTemporary_0::Ftuple_Lvector3_Mvector3_R");
static_assert(sizeof(EpicGamesTemporary_0::Ftuple_Lvector3_Mvector3_R) == 0x000030, "Wrong size on EpicGamesTemporary_0::Ftuple_Lvector3_Mvector3_R");
static_assert(offsetof(EpicGamesTemporary_0::Ftuple_Lvector3_Mvector3_R, __verse_0x18E3F084_Elem0) == 0x000000, "Member 'EpicGamesTemporary_0::Ftuple_Lvector3_Mvector3_R::__verse_0x18E3F084_Elem0' has a wrong offset!");
static_assert(offsetof(EpicGamesTemporary_0::Ftuple_Lvector3_Mvector3_R, __verse_0x7D844C3C_Elem1) == 0x000018, "Member 'EpicGamesTemporary_0::Ftuple_Lvector3_Mvector3_R::__verse_0x7D844C3C_Elem1' has a wrong offset!");

}
