#pragma once

#include "Basic.hpp"

#include "VerseDevices_0_structs.hpp"
#include "EpicGamesTemporary_0_structs.hpp"
#include "VerseNative_structs.hpp"
#include "Verse_structs.hpp"

namespace SDK::Params
{

struct Devices_device_function_get_vector3__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__vector3_N_RInvoke final
{
public:
	struct VerseDevices_0::Ftuple_L_R             __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_1[0x7];
	struct FSpatialMath_vector3                   RetVal;
};
static_assert(alignof(Devices_device_function_get_vector3__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__vector3_N_RInvoke) == 0x000008, "Wrong alignment on Devices_device_function_get_vector3__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__vector3_N_RInvoke");
static_assert(sizeof(Devices_device_function_get_vector3__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__vector3_N_RInvoke) == 0x000020, "Wrong size on Devices_device_function_get_vector3__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__vector3_N_RInvoke");
static_assert(offsetof(Devices_device_function_get_vector3__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__vector3_N_RInvoke, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_device_function_get_vector3__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__vector3_N_RInvoke::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_device_function_get_vector3__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__vector3_N_RInvoke, RetVal) == 0x000008, "Member 'Devices_device_function_get_vector3__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__vector3_N_RInvoke::RetVal' has a wrong offset!");

struct Devices_device_event_agent_int__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R final
{
public:
	FVerseFunctionProperty_                       __verse_0xB2CDDD72_Argument;
	class UObject*                                RetVal;
};
static_assert(alignof(Devices_device_event_agent_int__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R) == 0x000008, "Wrong alignment on Devices_device_event_agent_int__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R");
static_assert(sizeof(Devices_device_event_agent_int__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R) == 0x000018, "Wrong size on Devices_device_event_agent_int__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R");
static_assert(offsetof(Devices_device_event_agent_int__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_device_event_agent_int__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_device_event_agent_int__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R, RetVal) == 0x000010, "Member 'Devices_device_event_agent_int__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R::RetVal' has a wrong offset!");

struct Devices_device_event_agent_int_Await final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct VerseDevices_0::Ftuple_L_R             __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_19[0x7];
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(Devices_device_event_agent_int_Await) == 0x000008, "Wrong alignment on Devices_device_event_agent_int_Await");
static_assert(sizeof(Devices_device_event_agent_int_Await) == 0x000028, "Wrong size on Devices_device_event_agent_int_Await");
static_assert(offsetof(Devices_device_event_agent_int_Await, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'Devices_device_event_agent_int_Await::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(Devices_device_event_agent_int_Await, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'Devices_device_event_agent_int_Await::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(Devices_device_event_agent_int_Await, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'Devices_device_event_agent_int_Await::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(Devices_device_event_agent_int_Await, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'Devices_device_event_agent_int_Await::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_device_event_agent_int_Await, RetVal) == 0x000020, "Member 'Devices_device_event_agent_int_Await::RetVal' has a wrong offset!");

struct Devices_creative_object__L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform final
{
public:
	struct VerseDevices_0::Ftuple_L_R             __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_1[0xF];
	struct FSpatialMath_transform                 RetVal;
};
static_assert(alignof(Devices_creative_object__L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform) == 0x000010, "Wrong alignment on Devices_creative_object__L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform");
static_assert(sizeof(Devices_creative_object__L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform) == 0x000070, "Wrong size on Devices_creative_object__L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform");
static_assert(offsetof(Devices_creative_object__L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_creative_object__L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_creative_object__L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform, RetVal) == 0x000010, "Member 'Devices_creative_object__L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform::RetVal' has a wrong offset!");

struct Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R final
{
public:
	struct VerseDevices_0::Ftuple_Lvector3_Mrotation_R __verse_0xB2CDDD72_Argument;
	FOptionProperty_                              RetVal;
	uint8                                         _ExprResult_0 : 1;
	EDevices_teleport_to_result                   __verse_0x95D09D0E_Result_2;
	uint8                                         Pad_44[0x4];
	FVerseFunctionProperty_                       _Callee_1;
	uint8                                         Pad_58[0x8];
	struct VerseDevices_0::Ftuple_Lvector3_Mrotation_R _ExprResult_2;
	FVerseDynamicProperty_                        InvokeResultDummy_3;
	FOptionProperty_                              _ExprResultStack_4;
	uint8                                         Pad_C1[0x7];
	FVerseDynamicProperty_                        _ExprResult_5;
	FVerseDynamicProperty_                        _ExprResult_6;
	class UDiagnostics_log*                       __verse_0x63A8D5FA_DebugLog_3;
	uint64                                        _InstancingGraph_7;
	FVerseStringProperty_                         __verse_0x8BA81554_LogString_3;
	EDevices_teleport_to_result                   __verse_0x00000000__4;
	uint8                                         Pad_109[0x7];
	FVerseDynamicProperty_                        InvokeResultDummy_8;
	FOptionProperty_                              _ExprResultStack_9;
	uint8                                         Pad_131[0x7];
	FVerseDynamicProperty_                        _ExprResult_10;
	FVerseDynamicProperty_                        _ExprResult_11;
	FVerseDynamicProperty_                        InvokeResultDummy_12;
	FOptionProperty_                              _ExprResultStack_13;
	uint8                                         Pad_179[0x7];
	FVerseDynamicProperty_                        _ExprResult_14;
	FVerseDynamicProperty_                        _ExprResult_15;
	FVerseDynamicProperty_                        InvokeResultDummy_16;
	FOptionProperty_                              _ExprResultStack_17;
	uint8                                         Pad_1C1[0x7];
	FVerseDynamicProperty_                        _ExprResult_18;
	FVerseDynamicProperty_                        _ExprResult_19;
	FVerseDynamicProperty_                        InvokeResultDummy_20;
	FOptionProperty_                              _ExprResultStack_21;
	uint8                                         Pad_209[0x7];
	FVerseDynamicProperty_                        _ExprResult_22;
	FVerseDynamicProperty_                        _ExprResult_23;
	class UDiagnostics_log*                       __verse_0x00000000__10;
	EVerseTrue                                    _InvokeSureResultDummy_24;
	uint8                                         Pad_239[0x7];
	FVerseFunctionProperty_                       _Callee_25;
	struct Ftuple_L_Kchar_M_QLevel_Nlog__level_R  _ExprResult_26;
	FVerseStringProperty_                         _ExprResult_27;
	TArray<FVerseDynamicProperty_>                __verse_0xFFC68BC5_Array_11;
	FVerseFunctionProperty_                       _Callee_28;
	TArray<TArray<FVerseDynamicProperty_>>        _ExprResult_29;
	TArray<FVerseStringProperty_>                 __verse_0xFFC68BC5_Array_12;
	struct VerseDevices_0::Ftuple_L_Kchar_M_Kchar_R __verse_0x00000000__13;
	FVerseStringProperty_                         _ExprResult_30;
	FVerseStringProperty_                         _ExprResultStack_31;
	FVerseFunctionProperty_                       _Callee_32;
	FVerseStringProperty_                         _ExprResultDummy_33;
	FVerseStringProperty_                         _ExprResultDummy_34;
	TArray<TArray<FVerseDynamicProperty_>>        _ForResult_35;
	int64                                         _ForIndex_36;
	int64                                         _ForLength_37;
	FVerseStringProperty_                         __verse_0xFB88B569_Item_15;
	TArray<FVerseDynamicProperty_>                _ExprResult_38;
	FVerseStringProperty_                         __verse_0xFFC68BC5_Array_16;
	TArray<FVerseDynamicProperty_>                _ForResult_39;
	int64                                         _ForIndex_40;
	int64                                         _ForLength_41;
	uint8                                         __verse_0xFB88B569_Item_18;
	uint8                                         Pad_399[0x7];
	FVerseDynamicProperty_                        _ExprResult_42;
	FVerseStringProperty_                         _ForResult_43;
	int64                                         _ForIndex_44;
	int64                                         _ForLength_45;
	FVerseDynamicProperty_                        __verse_0xFB88B569_Item_20;
	uint8                                         _ExprResult_46;
	FOptionProperty_                              _ExprResult_47;
	uint8                                         Pad_3E3[0x5];
	FVerseDynamicProperty_                        InvokeResultDummy_48;
	FOptionProperty_                              _ExprResultStack_49;
	uint8                                         Pad_409[0x7];
	FVerseDynamicProperty_                        _ExprResult_50;
	FVerseDynamicProperty_                        _ExprResult_51;
};
static_assert(alignof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R) == 0x000010, "Wrong alignment on Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R");
static_assert(sizeof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R) == 0x000430, "Wrong size on Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, RetVal) == 0x000040, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::RetVal' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, __verse_0x95D09D0E_Result_2) == 0x000043, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::__verse_0x95D09D0E_Result_2' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _Callee_1) == 0x000048, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_Callee_1' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _ExprResult_2) == 0x000060, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, InvokeResultDummy_3) == 0x0000A0, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::InvokeResultDummy_3' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _ExprResultStack_4) == 0x0000B0, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_ExprResultStack_4' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _ExprResult_5) == 0x0000C8, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_ExprResult_5' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _ExprResult_6) == 0x0000D8, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_ExprResult_6' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, __verse_0x63A8D5FA_DebugLog_3) == 0x0000E8, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::__verse_0x63A8D5FA_DebugLog_3' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _InstancingGraph_7) == 0x0000F0, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_InstancingGraph_7' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, __verse_0x8BA81554_LogString_3) == 0x0000F8, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::__verse_0x8BA81554_LogString_3' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, __verse_0x00000000__4) == 0x000108, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::__verse_0x00000000__4' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, InvokeResultDummy_8) == 0x000110, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::InvokeResultDummy_8' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _ExprResultStack_9) == 0x000120, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_ExprResultStack_9' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _ExprResult_10) == 0x000138, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_ExprResult_10' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _ExprResult_11) == 0x000148, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_ExprResult_11' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, InvokeResultDummy_12) == 0x000158, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::InvokeResultDummy_12' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _ExprResultStack_13) == 0x000168, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_ExprResultStack_13' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _ExprResult_14) == 0x000180, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_ExprResult_14' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _ExprResult_15) == 0x000190, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_ExprResult_15' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, InvokeResultDummy_16) == 0x0001A0, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::InvokeResultDummy_16' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _ExprResultStack_17) == 0x0001B0, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_ExprResultStack_17' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _ExprResult_18) == 0x0001C8, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_ExprResult_18' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _ExprResult_19) == 0x0001D8, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_ExprResult_19' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, InvokeResultDummy_20) == 0x0001E8, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::InvokeResultDummy_20' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _ExprResultStack_21) == 0x0001F8, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_ExprResultStack_21' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _ExprResult_22) == 0x000210, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_ExprResult_22' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _ExprResult_23) == 0x000220, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_ExprResult_23' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, __verse_0x00000000__10) == 0x000230, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::__verse_0x00000000__10' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _InvokeSureResultDummy_24) == 0x000238, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_InvokeSureResultDummy_24' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _Callee_25) == 0x000240, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_Callee_25' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _ExprResult_26) == 0x000250, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_ExprResult_26' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _ExprResult_27) == 0x000268, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_ExprResult_27' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, __verse_0xFFC68BC5_Array_11) == 0x000278, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::__verse_0xFFC68BC5_Array_11' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _Callee_28) == 0x000288, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_Callee_28' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _ExprResult_29) == 0x000298, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_ExprResult_29' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, __verse_0xFFC68BC5_Array_12) == 0x0002A8, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::__verse_0xFFC68BC5_Array_12' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, __verse_0x00000000__13) == 0x0002B8, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::__verse_0x00000000__13' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _ExprResult_30) == 0x0002D8, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_ExprResult_30' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _ExprResultStack_31) == 0x0002E8, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_ExprResultStack_31' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _Callee_32) == 0x0002F8, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_Callee_32' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _ExprResultDummy_33) == 0x000308, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_ExprResultDummy_33' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _ExprResultDummy_34) == 0x000318, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_ExprResultDummy_34' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _ForResult_35) == 0x000328, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_ForResult_35' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _ForIndex_36) == 0x000338, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_ForIndex_36' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _ForLength_37) == 0x000340, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_ForLength_37' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, __verse_0xFB88B569_Item_15) == 0x000348, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::__verse_0xFB88B569_Item_15' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _ExprResult_38) == 0x000358, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_ExprResult_38' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, __verse_0xFFC68BC5_Array_16) == 0x000368, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::__verse_0xFFC68BC5_Array_16' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _ForResult_39) == 0x000378, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_ForResult_39' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _ForIndex_40) == 0x000388, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_ForIndex_40' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _ForLength_41) == 0x000390, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_ForLength_41' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, __verse_0xFB88B569_Item_18) == 0x000398, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::__verse_0xFB88B569_Item_18' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _ExprResult_42) == 0x0003A0, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_ExprResult_42' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _ForResult_43) == 0x0003B0, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_ForResult_43' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _ForIndex_44) == 0x0003C0, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_ForIndex_44' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _ForLength_45) == 0x0003C8, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_ForLength_45' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, __verse_0xFB88B569_Item_20) == 0x0003D0, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::__verse_0xFB88B569_Item_20' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _ExprResult_46) == 0x0003E0, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_ExprResult_46' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _ExprResult_47) == 0x0003E1, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_ExprResult_47' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, InvokeResultDummy_48) == 0x0003E8, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::InvokeResultDummy_48' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _ExprResultStack_49) == 0x0003F8, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_ExprResultStack_49' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _ExprResult_50) == 0x000410, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_ExprResult_50' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R, _ExprResult_51) == 0x000420, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R::_ExprResult_51' has a wrong offset!");

struct Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportToInternal_L_Nvector3_M_Nrotation_R final
{
public:
	struct VerseDevices_0::Ftuple_Lvector3_Mrotation_R __verse_0xB2CDDD72_Argument;
	EDevices_teleport_to_result                   RetVal;
};
static_assert(alignof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportToInternal_L_Nvector3_M_Nrotation_R) == 0x000010, "Wrong alignment on Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportToInternal_L_Nvector3_M_Nrotation_R");
static_assert(sizeof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportToInternal_L_Nvector3_M_Nrotation_R) == 0x000050, "Wrong size on Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportToInternal_L_Nvector3_M_Nrotation_R");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportToInternal_L_Nvector3_M_Nrotation_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportToInternal_L_Nvector3_M_Nrotation_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportToInternal_L_Nvector3_M_Nrotation_R, RetVal) == 0x000040, "Member 'Devices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportToInternal_L_Nvector3_M_Nrotation_R::RetVal' has a wrong offset!");

struct Devices_creative_prop__L_2fVerse_2eorg_2fVerse_2fdisposable_N_RDispose final
{
public:
	struct VerseDevices_0::Ftuple_L_R             __verse_0xB2CDDD72_Argument;
};
static_assert(alignof(Devices_creative_prop__L_2fVerse_2eorg_2fVerse_2fdisposable_N_RDispose) == 0x000001, "Wrong alignment on Devices_creative_prop__L_2fVerse_2eorg_2fVerse_2fdisposable_N_RDispose");
static_assert(sizeof(Devices_creative_prop__L_2fVerse_2eorg_2fVerse_2fdisposable_N_RDispose) == 0x000001, "Wrong size on Devices_creative_prop__L_2fVerse_2eorg_2fVerse_2fdisposable_N_RDispose");
static_assert(offsetof(Devices_creative_prop__L_2fVerse_2eorg_2fVerse_2fdisposable_N_RDispose, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_creative_prop__L_2fVerse_2eorg_2fVerse_2fdisposable_N_RDispose::__verse_0xB2CDDD72_Argument' has a wrong offset!");

struct Devices_creative_prop__L_2fVerse_2eorg_2fVerse_2finvalidatable_N_RIsValid final
{
public:
	struct VerseDevices_0::Ftuple_L_R             __verse_0xB2CDDD72_Argument;
	FOptionProperty_                              RetVal;
};
static_assert(alignof(Devices_creative_prop__L_2fVerse_2eorg_2fVerse_2finvalidatable_N_RIsValid) == 0x000001, "Wrong alignment on Devices_creative_prop__L_2fVerse_2eorg_2fVerse_2finvalidatable_N_RIsValid");
static_assert(sizeof(Devices_creative_prop__L_2fVerse_2eorg_2fVerse_2finvalidatable_N_RIsValid) == 0x000003, "Wrong size on Devices_creative_prop__L_2fVerse_2eorg_2fVerse_2finvalidatable_N_RIsValid");
static_assert(offsetof(Devices_creative_prop__L_2fVerse_2eorg_2fVerse_2finvalidatable_N_RIsValid, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_creative_prop__L_2fVerse_2eorg_2fVerse_2finvalidatable_N_RIsValid::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop__L_2fVerse_2eorg_2fVerse_2finvalidatable_N_RIsValid, RetVal) == 0x000001, "Member 'Devices_creative_prop__L_2fVerse_2eorg_2fVerse_2finvalidatable_N_RIsValid::RetVal' has a wrong offset!");

struct Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	uint8                                         Pad_18[0x8];
	struct Ftuple_Lvector3_Mrotation_Mfloat_R     __verse_0xB2CDDD72_Argument;
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R) == 0x000010, "Wrong alignment on Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R");
static_assert(sizeof(Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R) == 0x000080, "Wrong size on Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R");
static_assert(offsetof(Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, __verse_0xB2CDDD72_Argument) == 0x000020, "Member 'Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, RetVal) == 0x000070, "Member 'Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::RetVal' has a wrong offset!");

struct Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	uint8                                         Pad_18[0x8];
	struct Ftuple_Lvector3_Mrotation_Mfloat_R     __verse_0xB2CDDD72_Argument;
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R) == 0x000010, "Wrong alignment on Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R");
static_assert(sizeof(Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R) == 0x000080, "Wrong size on Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R");
static_assert(offsetof(Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, __verse_0xB2CDDD72_Argument) == 0x000020, "Member 'Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, RetVal) == 0x000070, "Member 'Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::RetVal' has a wrong offset!");

struct Devices__L_2fFortnite_2ecom_2fDevices_N_Rdevice__event final
{
public:
	struct VerseDevices_0::Ftuple_L_R             __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_1[0x7];
	class UClass*                                 RetVal;
	FVerseFunctionProperty_                       _Callee_0;
};
static_assert(alignof(Devices__L_2fFortnite_2ecom_2fDevices_N_Rdevice__event) == 0x000008, "Wrong alignment on Devices__L_2fFortnite_2ecom_2fDevices_N_Rdevice__event");
static_assert(sizeof(Devices__L_2fFortnite_2ecom_2fDevices_N_Rdevice__event) == 0x000020, "Wrong size on Devices__L_2fFortnite_2ecom_2fDevices_N_Rdevice__event");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_Rdevice__event, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_Rdevice__event::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_Rdevice__event, RetVal) == 0x000008, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_Rdevice__event::RetVal' has a wrong offset!");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_Rdevice__event, _Callee_0) == 0x000010, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_Rdevice__event::_Callee_0' has a wrong offset!");

struct Devices__L_2fFortnite_2ecom_2fDevices_N_Rdevice__event_L_Nany_R final
{
public:
	class UClass*                                 __verse_0xB2CDDD72_Argument;
	class UClass*                                 RetVal;
};
static_assert(alignof(Devices__L_2fFortnite_2ecom_2fDevices_N_Rdevice__event_L_Nany_R) == 0x000008, "Wrong alignment on Devices__L_2fFortnite_2ecom_2fDevices_N_Rdevice__event_L_Nany_R");
static_assert(sizeof(Devices__L_2fFortnite_2ecom_2fDevices_N_Rdevice__event_L_Nany_R) == 0x000010, "Wrong size on Devices__L_2fFortnite_2ecom_2fDevices_N_Rdevice__event_L_Nany_R");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_Rdevice__event_L_Nany_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_Rdevice__event_L_Nany_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_Rdevice__event_L_Nany_R, RetVal) == 0x000008, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_Rdevice__event_L_Nany_R::RetVal' has a wrong offset!");

struct Devices__L_2fFortnite_2ecom_2fDevices_N_RGetCreativeObjectsWithTag_L_Ntag_R final
{
public:
	class UTags_tag*                              __verse_0xB2CDDD72_Argument;
	TArray<class UObject*>                        RetVal;
};
static_assert(alignof(Devices__L_2fFortnite_2ecom_2fDevices_N_RGetCreativeObjectsWithTag_L_Ntag_R) == 0x000008, "Wrong alignment on Devices__L_2fFortnite_2ecom_2fDevices_N_RGetCreativeObjectsWithTag_L_Ntag_R");
static_assert(sizeof(Devices__L_2fFortnite_2ecom_2fDevices_N_RGetCreativeObjectsWithTag_L_Ntag_R) == 0x000018, "Wrong size on Devices__L_2fFortnite_2ecom_2fDevices_N_RGetCreativeObjectsWithTag_L_Ntag_R");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_RGetCreativeObjectsWithTag_L_Ntag_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_RGetCreativeObjectsWithTag_L_Ntag_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_RGetCreativeObjectsWithTag_L_Ntag_R, RetVal) == 0x000008, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_RGetCreativeObjectsWithTag_L_Ntag_R::RetVal' has a wrong offset!");

struct Devices__L_2fFortnite_2ecom_2fDevices_N_RGetCreativeObjectsWithTags_L_Ntag__search__criteria_R final
{
public:
	class UTags_tag_search_criteria*              __verse_0xB2CDDD72_Argument;
	TArray<class UObject*>                        RetVal;
};
static_assert(alignof(Devices__L_2fFortnite_2ecom_2fDevices_N_RGetCreativeObjectsWithTags_L_Ntag__search__criteria_R) == 0x000008, "Wrong alignment on Devices__L_2fFortnite_2ecom_2fDevices_N_RGetCreativeObjectsWithTags_L_Ntag__search__criteria_R");
static_assert(sizeof(Devices__L_2fFortnite_2ecom_2fDevices_N_RGetCreativeObjectsWithTags_L_Ntag__search__criteria_R) == 0x000018, "Wrong size on Devices__L_2fFortnite_2ecom_2fDevices_N_RGetCreativeObjectsWithTags_L_Ntag__search__criteria_R");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_RGetCreativeObjectsWithTags_L_Ntag__search__criteria_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_RGetCreativeObjectsWithTags_L_Ntag__search__criteria_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_RGetCreativeObjectsWithTags_L_Ntag__search__criteria_R, RetVal) == 0x000008, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_RGetCreativeObjectsWithTags_L_Ntag__search__criteria_R::RetVal' has a wrong offset!");

struct Devices__L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eGetPlayspace_U_L_Ncreative__object__interface_M_Ntuple_L_R_R final
{
public:
	struct Ftuple_Lcreative__object__interface_Mtuple_L_R_Mtuple_L_R_R __verse_0xB2CDDD72_Argument;
	class UObject*                                RetVal;
};
static_assert(alignof(Devices__L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eGetPlayspace_U_L_Ncreative__object__interface_M_Ntuple_L_R_R) == 0x000008, "Wrong alignment on Devices__L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eGetPlayspace_U_L_Ncreative__object__interface_M_Ntuple_L_R_R");
static_assert(sizeof(Devices__L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eGetPlayspace_U_L_Ncreative__object__interface_M_Ntuple_L_R_R) == 0x000018, "Wrong size on Devices__L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eGetPlayspace_U_L_Ncreative__object__interface_M_Ntuple_L_R_R");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eGetPlayspace_U_L_Ncreative__object__interface_M_Ntuple_L_R_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eGetPlayspace_U_L_Ncreative__object__interface_M_Ntuple_L_R_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eGetPlayspace_U_L_Ncreative__object__interface_M_Ntuple_L_R_R, RetVal) == 0x000010, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eGetPlayspace_U_L_Ncreative__object__interface_M_Ntuple_L_R_R::RetVal' has a wrong offset!");

struct Devices__L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eGetTags_U_L_Ncreative__object__interface_M_Ntuple_L_R_R final
{
public:
	struct Ftuple_Lcreative__object__interface_Mtuple_L_R_Mtuple_L_R_R __verse_0xB2CDDD72_Argument;
	class UObject*                                RetVal;
};
static_assert(alignof(Devices__L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eGetTags_U_L_Ncreative__object__interface_M_Ntuple_L_R_R) == 0x000008, "Wrong alignment on Devices__L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eGetTags_U_L_Ncreative__object__interface_M_Ntuple_L_R_R");
static_assert(sizeof(Devices__L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eGetTags_U_L_Ncreative__object__interface_M_Ntuple_L_R_R) == 0x000018, "Wrong size on Devices__L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eGetTags_U_L_Ncreative__object__interface_M_Ntuple_L_R_R");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eGetTags_U_L_Ncreative__object__interface_M_Ntuple_L_R_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eGetTags_U_L_Ncreative__object__interface_M_Ntuple_L_R_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eGetTags_U_L_Ncreative__object__interface_M_Ntuple_L_R_R, RetVal) == 0x000010, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eGetTags_U_L_Ncreative__object__interface_M_Ntuple_L_R_R::RetVal' has a wrong offset!");

struct Devices__L_2fFortnite_2ecom_2fDevices_N_RSpawnProp_L_Ncreative__prop__asset_M_Nvector3_M_Nrotation_R final
{
public:
	struct Ftuple_Lcreative__prop__asset_Mvector3_Mrotation_R __verse_0xB2CDDD72_Argument;
	struct Ftuple_L_Qcreative__prop_Mspawn__prop__result_R RetVal;
};
static_assert(alignof(Devices__L_2fFortnite_2ecom_2fDevices_N_RSpawnProp_L_Ncreative__prop__asset_M_Nvector3_M_Nrotation_R) == 0x000010, "Wrong alignment on Devices__L_2fFortnite_2ecom_2fDevices_N_RSpawnProp_L_Ncreative__prop__asset_M_Nvector3_M_Nrotation_R");
static_assert(sizeof(Devices__L_2fFortnite_2ecom_2fDevices_N_RSpawnProp_L_Ncreative__prop__asset_M_Nvector3_M_Nrotation_R) == 0x000050, "Wrong size on Devices__L_2fFortnite_2ecom_2fDevices_N_RSpawnProp_L_Ncreative__prop__asset_M_Nvector3_M_Nrotation_R");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_RSpawnProp_L_Ncreative__prop__asset_M_Nvector3_M_Nrotation_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_RSpawnProp_L_Ncreative__prop__asset_M_Nvector3_M_Nrotation_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_RSpawnProp_L_Ncreative__prop__asset_M_Nvector3_M_Nrotation_R, RetVal) == 0x000040, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_RSpawnProp_L_Ncreative__prop__asset_M_Nvector3_M_Nrotation_R::RetVal' has a wrong offset!");

struct alignas(0x08) Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R final
{
public:
	EDevices_move_to_internal_result              __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_1[0x7];
	FVerseStringProperty_                         RetVal;
	EDevices_move_to_internal_result              __verse_0x00000000__1;
	uint8                                         Pad_19[0x7];
	FVerseDynamicProperty_                        InvokeResultDummy_0;
	FOptionProperty_                              _ExprResultStack_1;
	uint8                                         Pad_41[0x7];
	FVerseDynamicProperty_                        _ExprResult_2;
	FVerseDynamicProperty_                        _ExprResult_3;
	FVerseDynamicProperty_                        InvokeResultDummy_4;
	FOptionProperty_                              _ExprResultStack_5;
	uint8                                         Pad_89[0x7];
	FVerseDynamicProperty_                        _ExprResult_6;
	FVerseDynamicProperty_                        _ExprResult_7;
	FVerseDynamicProperty_                        InvokeResultDummy_8;
	FOptionProperty_                              _ExprResultStack_9;
	uint8                                         Pad_D1[0x7];
	FVerseDynamicProperty_                        _ExprResult_10;
	FVerseDynamicProperty_                        _ExprResult_11;
	FVerseDynamicProperty_                        InvokeResultDummy_12;
	FOptionProperty_                              _ExprResultStack_13;
	uint8                                         Pad_119[0x7];
	FVerseDynamicProperty_                        _ExprResult_14;
	FVerseDynamicProperty_                        _ExprResult_15;
	FVerseDynamicProperty_                        InvokeResultDummy_16;
	FOptionProperty_                              _ExprResultStack_17;
	uint8                                         Pad_161[0x7];
	FVerseDynamicProperty_                        _ExprResult_18;
	FVerseDynamicProperty_                        _ExprResult_19;
	FVerseDynamicProperty_                        InvokeResultDummy_20;
	FOptionProperty_                              _ExprResultStack_21;
	uint8                                         Pad_1A9[0x7];
	FVerseDynamicProperty_                        _ExprResult_22;
	FVerseDynamicProperty_                        _ExprResult_23;
};
static_assert(alignof(Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R) == 0x000008, "Wrong alignment on Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R");
static_assert(sizeof(Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R) == 0x0001D0, "Wrong size on Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R, RetVal) == 0x000008, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R::RetVal' has a wrong offset!");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R, __verse_0x00000000__1) == 0x000018, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R::__verse_0x00000000__1' has a wrong offset!");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R, InvokeResultDummy_0) == 0x000020, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R::InvokeResultDummy_0' has a wrong offset!");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R, _ExprResultStack_1) == 0x000030, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R::_ExprResultStack_1' has a wrong offset!");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R, _ExprResult_2) == 0x000048, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R, _ExprResult_3) == 0x000058, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R::_ExprResult_3' has a wrong offset!");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R, InvokeResultDummy_4) == 0x000068, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R::InvokeResultDummy_4' has a wrong offset!");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R, _ExprResultStack_5) == 0x000078, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R::_ExprResultStack_5' has a wrong offset!");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R, _ExprResult_6) == 0x000090, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R::_ExprResult_6' has a wrong offset!");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R, _ExprResult_7) == 0x0000A0, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R::_ExprResult_7' has a wrong offset!");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R, InvokeResultDummy_8) == 0x0000B0, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R::InvokeResultDummy_8' has a wrong offset!");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R, _ExprResultStack_9) == 0x0000C0, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R::_ExprResultStack_9' has a wrong offset!");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R, _ExprResult_10) == 0x0000D8, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R::_ExprResult_10' has a wrong offset!");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R, _ExprResult_11) == 0x0000E8, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R::_ExprResult_11' has a wrong offset!");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R, InvokeResultDummy_12) == 0x0000F8, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R::InvokeResultDummy_12' has a wrong offset!");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R, _ExprResultStack_13) == 0x000108, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R::_ExprResultStack_13' has a wrong offset!");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R, _ExprResult_14) == 0x000120, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R::_ExprResult_14' has a wrong offset!");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R, _ExprResult_15) == 0x000130, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R::_ExprResult_15' has a wrong offset!");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R, InvokeResultDummy_16) == 0x000140, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R::InvokeResultDummy_16' has a wrong offset!");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R, _ExprResultStack_17) == 0x000150, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R::_ExprResultStack_17' has a wrong offset!");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R, _ExprResult_18) == 0x000168, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R::_ExprResult_18' has a wrong offset!");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R, _ExprResult_19) == 0x000178, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R::_ExprResult_19' has a wrong offset!");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R, InvokeResultDummy_20) == 0x000188, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R::InvokeResultDummy_20' has a wrong offset!");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R, _ExprResultStack_21) == 0x000198, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R::_ExprResultStack_21' has a wrong offset!");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R, _ExprResult_22) == 0x0001B0, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R::_ExprResult_22' has a wrong offset!");
static_assert(offsetof(Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R, _ExprResult_23) == 0x0001C0, "Member 'Devices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R::_ExprResult_23' has a wrong offset!");

struct Devices__InitCDO final
{
public:
	class UDevices_creative_prop_asset*           _ExprResult_0;
	uint64                                        _InstancingGraph_1;
};
static_assert(alignof(Devices__InitCDO) == 0x000008, "Wrong alignment on Devices__InitCDO");
static_assert(sizeof(Devices__InitCDO) == 0x000010, "Wrong size on Devices__InitCDO");
static_assert(offsetof(Devices__InitCDO, _ExprResult_0) == 0x000000, "Member 'Devices__InitCDO::_ExprResult_0' has a wrong offset!");
static_assert(offsetof(Devices__InitCDO, _InstancingGraph_1) == 0x000008, "Member 'Devices__InitCDO::_InstancingGraph_1' has a wrong offset!");

struct alignas(0x08) Devices_device_function_set_string__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__string_N_RInvoke_L_N_Kchar_R final
{
public:
	FVerseStringProperty_                         __verse_0xB2CDDD72_Argument;
};
static_assert(alignof(Devices_device_function_set_string__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__string_N_RInvoke_L_N_Kchar_R) == 0x000008, "Wrong alignment on Devices_device_function_set_string__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__string_N_RInvoke_L_N_Kchar_R");
static_assert(sizeof(Devices_device_function_set_string__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__string_N_RInvoke_L_N_Kchar_R) == 0x000010, "Wrong size on Devices_device_function_set_string__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__string_N_RInvoke_L_N_Kchar_R");
static_assert(offsetof(Devices_device_function_set_string__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__string_N_RInvoke_L_N_Kchar_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_device_function_set_string__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__string_N_RInvoke_L_N_Kchar_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");

struct Devices_creative_device__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnBegin__Internal final
{
public:
	struct VerseDevices_0::Ftuple_L_R             __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_1[0x7];
	class UConcurrency_task*                      _AsyncTask_0;
	FVerseFunctionProperty_                       _AsyncTaskClass_1;
	struct VerseDevices_0::Ftuple_L_R             _ExprResult_2;
	uint8                                         Pad_21[0x7];
	int64                                         _AsyncResult_3;
};
static_assert(alignof(Devices_creative_device__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnBegin__Internal) == 0x000008, "Wrong alignment on Devices_creative_device__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnBegin__Internal");
static_assert(sizeof(Devices_creative_device__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnBegin__Internal) == 0x000030, "Wrong size on Devices_creative_device__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnBegin__Internal");
static_assert(offsetof(Devices_creative_device__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnBegin__Internal, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_creative_device__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnBegin__Internal::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_creative_device__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnBegin__Internal, _AsyncTask_0) == 0x000008, "Member 'Devices_creative_device__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnBegin__Internal::_AsyncTask_0' has a wrong offset!");
static_assert(offsetof(Devices_creative_device__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnBegin__Internal, _AsyncTaskClass_1) == 0x000010, "Member 'Devices_creative_device__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnBegin__Internal::_AsyncTaskClass_1' has a wrong offset!");
static_assert(offsetof(Devices_creative_device__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnBegin__Internal, _ExprResult_2) == 0x000020, "Member 'Devices_creative_device__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnBegin__Internal::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Devices_creative_device__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnBegin__Internal, _AsyncResult_3) == 0x000028, "Member 'Devices_creative_device__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnBegin__Internal::_AsyncResult_3' has a wrong offset!");

struct Devices_creative_device__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnEnd final
{
public:
	struct VerseDevices_0::Ftuple_L_R             __verse_0xB2CDDD72_Argument;
};
static_assert(alignof(Devices_creative_device__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnEnd) == 0x000001, "Wrong alignment on Devices_creative_device__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnEnd");
static_assert(sizeof(Devices_creative_device__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnEnd) == 0x000001, "Wrong size on Devices_creative_device__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnEnd");
static_assert(offsetof(Devices_creative_device__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnEnd, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_creative_device__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnEnd::__verse_0xB2CDDD72_Argument' has a wrong offset!");

struct Devices_creative_device__L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform final
{
public:
	struct VerseDevices_0::Ftuple_L_R             __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_1[0xF];
	struct FSpatialMath_transform                 RetVal;
};
static_assert(alignof(Devices_creative_device__L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform) == 0x000010, "Wrong alignment on Devices_creative_device__L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform");
static_assert(sizeof(Devices_creative_device__L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform) == 0x000070, "Wrong size on Devices_creative_device__L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform");
static_assert(offsetof(Devices_creative_device__L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_creative_device__L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_creative_device__L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform, RetVal) == 0x000010, "Member 'Devices_creative_device__L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform::RetVal' has a wrong offset!");

struct Devices_creative_device_OnBegin final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct VerseDevices_0::Ftuple_L_R             __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_19[0x7];
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(Devices_creative_device_OnBegin) == 0x000008, "Wrong alignment on Devices_creative_device_OnBegin");
static_assert(sizeof(Devices_creative_device_OnBegin) == 0x000028, "Wrong size on Devices_creative_device_OnBegin");
static_assert(offsetof(Devices_creative_device_OnBegin, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'Devices_creative_device_OnBegin::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(Devices_creative_device_OnBegin, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'Devices_creative_device_OnBegin::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(Devices_creative_device_OnBegin, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'Devices_creative_device_OnBegin::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(Devices_creative_device_OnBegin, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'Devices_creative_device_OnBegin::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_creative_device_OnBegin, RetVal) == 0x000020, "Member 'Devices_creative_device_OnBegin::RetVal' has a wrong offset!");

struct Devices_device_event_void__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R final
{
public:
	FVerseFunctionProperty_                       __verse_0xB2CDDD72_Argument;
	class UObject*                                RetVal;
};
static_assert(alignof(Devices_device_event_void__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R) == 0x000008, "Wrong alignment on Devices_device_event_void__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R");
static_assert(sizeof(Devices_device_event_void__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R) == 0x000018, "Wrong size on Devices_device_event_void__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R");
static_assert(offsetof(Devices_device_event_void__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_device_event_void__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_device_event_void__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R, RetVal) == 0x000010, "Member 'Devices_device_event_void__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R::RetVal' has a wrong offset!");

struct Devices_device_event_void_Await final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct VerseDevices_0::Ftuple_L_R             __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_19[0x7];
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(Devices_device_event_void_Await) == 0x000008, "Wrong alignment on Devices_device_event_void_Await");
static_assert(sizeof(Devices_device_event_void_Await) == 0x000028, "Wrong size on Devices_device_event_void_Await");
static_assert(offsetof(Devices_device_event_void_Await, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'Devices_device_event_void_Await::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(Devices_device_event_void_Await, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'Devices_device_event_void_Await::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(Devices_device_event_void_Await, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'Devices_device_event_void_Await::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(Devices_device_event_void_Await, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'Devices_device_event_void_Await::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_device_event_void_Await, RetVal) == 0x000020, "Member 'Devices_device_event_void_Await::RetVal' has a wrong offset!");

struct Devices_device_event_optional_agent__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R final
{
public:
	FVerseFunctionProperty_                       __verse_0xB2CDDD72_Argument;
	class UObject*                                RetVal;
};
static_assert(alignof(Devices_device_event_optional_agent__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R) == 0x000008, "Wrong alignment on Devices_device_event_optional_agent__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R");
static_assert(sizeof(Devices_device_event_optional_agent__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R) == 0x000018, "Wrong size on Devices_device_event_optional_agent__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R");
static_assert(offsetof(Devices_device_event_optional_agent__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_device_event_optional_agent__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_device_event_optional_agent__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R, RetVal) == 0x000010, "Member 'Devices_device_event_optional_agent__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R::RetVal' has a wrong offset!");

struct Devices_device_event_optional_agent_Await final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct VerseDevices_0::Ftuple_L_R             __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_19[0x7];
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(Devices_device_event_optional_agent_Await) == 0x000008, "Wrong alignment on Devices_device_event_optional_agent_Await");
static_assert(sizeof(Devices_device_event_optional_agent_Await) == 0x000028, "Wrong size on Devices_device_event_optional_agent_Await");
static_assert(offsetof(Devices_device_event_optional_agent_Await, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'Devices_device_event_optional_agent_Await::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(Devices_device_event_optional_agent_Await, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'Devices_device_event_optional_agent_Await::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(Devices_device_event_optional_agent_Await, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'Devices_device_event_optional_agent_Await::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(Devices_device_event_optional_agent_Await, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'Devices_device_event_optional_agent_Await::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_device_event_optional_agent_Await, RetVal) == 0x000020, "Member 'Devices_device_event_optional_agent_Await::RetVal' has a wrong offset!");

struct Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_RGetAnimationController_L_Ncreative__prop_R final
{
public:
	class UDevices_creative_prop*                 __verse_0xB2CDDD72_Argument;
	struct Ftuple_L_Qanimation__controller_Mget__animation__controller__result_R RetVal;
};
static_assert(alignof(Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_RGetAnimationController_L_Ncreative__prop_R) == 0x000008, "Wrong alignment on Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_RGetAnimationController_L_Ncreative__prop_R");
static_assert(sizeof(Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_RGetAnimationController_L_Ncreative__prop_R) == 0x000018, "Wrong size on Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_RGetAnimationController_L_Ncreative__prop_R");
static_assert(offsetof(Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_RGetAnimationController_L_Ncreative__prop_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_RGetAnimationController_L_Ncreative__prop_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_RGetAnimationController_L_Ncreative__prop_R, RetVal) == 0x000008, "Member 'Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_RGetAnimationController_L_Ncreative__prop_R::RetVal' has a wrong offset!");

struct Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R final
{
public:
	struct Ftuple_Lcreative__prop_Mtuple_L_R_Mtuple_L_R_R __verse_0xB2CDDD72_Argument;
	FOptionProperty_                              RetVal;
	EVerseFalse                                   _ExprResult_0;
	uint8                                         Pad_19[0x7];
	struct Ftuple_L_Qanimation__controller_Mget__animation__controller__result_R __verse_0x95D09D0E_Result_1;
	FVerseFunctionProperty_                       _Callee_1;
	class UDiagnostics_log*                       __verse_0x63A8D5FA_DebugLog_1;
	uint64                                        _InstancingGraph_2;
	FVerseDynamicProperty_                        InvokeResultDummy_3;
	FOptionProperty_                              _ExprResultStack_4;
	uint8                                         Pad_71[0x7];
	FVerseDynamicProperty_                        _ExprResult_5;
	FVerseDynamicProperty_                        _ExprResult_6;
	class UDiagnostics_log*                       __verse_0x00000000__3;
	EVerseTrue                                    _InvokeSureResultDummy_7;
	uint8                                         Pad_A1[0x7];
	FVerseFunctionProperty_                       _Callee_8;
	struct Ftuple_L_Kchar_M_QLevel_Nlog__level_R  _ExprResult_9;
	FVerseStringProperty_                         _ExprResult_10;
	FOptionProperty_                              _ExprResult_11;
	uint8                                         Pad_E2[0x6];
	FVerseDynamicProperty_                        InvokeResultDummy_12;
	FOptionProperty_                              _ExprResultStack_13;
	uint8                                         Pad_109[0x7];
	FVerseDynamicProperty_                        _ExprResult_14;
	FVerseDynamicProperty_                        _ExprResult_15;
	class UDiagnostics_log*                       __verse_0x00000000__5;
	EVerseTrue                                    _InvokeSureResultDummy_16;
	uint8                                         Pad_139[0x7];
	FVerseFunctionProperty_                       _Callee_17;
	struct Ftuple_L_Kchar_M_QLevel_Nlog__level_R  _ExprResult_18;
	FVerseStringProperty_                         _ExprResult_19;
	FOptionProperty_                              _ExprResult_20;
	uint8                                         Pad_17A[0x6];
	FOptionProperty_                              _ExprResultStack_21;
};
static_assert(alignof(Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R) == 0x000008, "Wrong alignment on Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R");
static_assert(sizeof(Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R) == 0x000188, "Wrong size on Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R");
static_assert(offsetof(Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R, RetVal) == 0x000010, "Member 'Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R::RetVal' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R, _ExprResult_0) == 0x000018, "Member 'Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R::_ExprResult_0' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R, __verse_0x95D09D0E_Result_1) == 0x000020, "Member 'Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R::__verse_0x95D09D0E_Result_1' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R, _Callee_1) == 0x000030, "Member 'Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R::_Callee_1' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R, __verse_0x63A8D5FA_DebugLog_1) == 0x000040, "Member 'Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R::__verse_0x63A8D5FA_DebugLog_1' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R, _InstancingGraph_2) == 0x000048, "Member 'Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R::_InstancingGraph_2' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R, InvokeResultDummy_3) == 0x000050, "Member 'Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R::InvokeResultDummy_3' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R, _ExprResultStack_4) == 0x000060, "Member 'Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R::_ExprResultStack_4' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R, _ExprResult_5) == 0x000078, "Member 'Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R::_ExprResult_5' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R, _ExprResult_6) == 0x000088, "Member 'Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R::_ExprResult_6' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R, __verse_0x00000000__3) == 0x000098, "Member 'Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R::__verse_0x00000000__3' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R, _InvokeSureResultDummy_7) == 0x0000A0, "Member 'Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R::_InvokeSureResultDummy_7' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R, _Callee_8) == 0x0000A8, "Member 'Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R::_Callee_8' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R, _ExprResult_9) == 0x0000B8, "Member 'Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R::_ExprResult_9' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R, _ExprResult_10) == 0x0000D0, "Member 'Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R::_ExprResult_10' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R, _ExprResult_11) == 0x0000E0, "Member 'Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R::_ExprResult_11' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R, InvokeResultDummy_12) == 0x0000E8, "Member 'Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R::InvokeResultDummy_12' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R, _ExprResultStack_13) == 0x0000F8, "Member 'Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R::_ExprResultStack_13' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R, _ExprResult_14) == 0x000110, "Member 'Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R::_ExprResult_14' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R, _ExprResult_15) == 0x000120, "Member 'Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R::_ExprResult_15' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R, __verse_0x00000000__5) == 0x000130, "Member 'Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R::__verse_0x00000000__5' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R, _InvokeSureResultDummy_16) == 0x000138, "Member 'Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R::_InvokeSureResultDummy_16' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R, _Callee_17) == 0x000140, "Member 'Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R::_Callee_17' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R, _ExprResult_18) == 0x000150, "Member 'Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R::_ExprResult_18' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R, _ExprResult_19) == 0x000168, "Member 'Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R::_ExprResult_19' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R, _ExprResult_20) == 0x000178, "Member 'Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R::_ExprResult_20' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R, _ExprResultStack_21) == 0x000180, "Member 'Devices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R::_ExprResultStack_21' has a wrong offset!");

struct Devices_CreativeAnimation_Devices_CreativeAnimation_cubic_bezier_parameters_Factory final
{
public:
	struct FDevices_CreativeAnimation_cubic_bezier_parameters RetVal;
};
static_assert(alignof(Devices_CreativeAnimation_Devices_CreativeAnimation_cubic_bezier_parameters_Factory) == 0x000008, "Wrong alignment on Devices_CreativeAnimation_Devices_CreativeAnimation_cubic_bezier_parameters_Factory");
static_assert(sizeof(Devices_CreativeAnimation_Devices_CreativeAnimation_cubic_bezier_parameters_Factory) == 0x000020, "Wrong size on Devices_CreativeAnimation_Devices_CreativeAnimation_cubic_bezier_parameters_Factory");
static_assert(offsetof(Devices_CreativeAnimation_Devices_CreativeAnimation_cubic_bezier_parameters_Factory, RetVal) == 0x000000, "Member 'Devices_CreativeAnimation_Devices_CreativeAnimation_cubic_bezier_parameters_Factory::RetVal' has a wrong offset!");

struct Devices_CreativeAnimation_Devices_CreativeAnimation_keyframe_delta_Factory final
{
public:
	struct FDevices_CreativeAnimation_keyframe_delta RetVal;
};
static_assert(alignof(Devices_CreativeAnimation_Devices_CreativeAnimation_keyframe_delta_Factory) == 0x000010, "Wrong alignment on Devices_CreativeAnimation_Devices_CreativeAnimation_keyframe_delta_Factory");
static_assert(sizeof(Devices_CreativeAnimation_Devices_CreativeAnimation_keyframe_delta_Factory) == 0x000070, "Wrong size on Devices_CreativeAnimation_Devices_CreativeAnimation_keyframe_delta_Factory");
static_assert(offsetof(Devices_CreativeAnimation_Devices_CreativeAnimation_keyframe_delta_Factory, RetVal) == 0x000000, "Member 'Devices_CreativeAnimation_Devices_CreativeAnimation_keyframe_delta_Factory::RetVal' has a wrong offset!");

struct Devices_device_function_set_int__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__int_N_RInvoke_L_Nint_R final
{
public:
	int64                                         __verse_0xB2CDDD72_Argument;
};
static_assert(alignof(Devices_device_function_set_int__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__int_N_RInvoke_L_Nint_R) == 0x000008, "Wrong alignment on Devices_device_function_set_int__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__int_N_RInvoke_L_Nint_R");
static_assert(sizeof(Devices_device_function_set_int__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__int_N_RInvoke_L_Nint_R) == 0x000008, "Wrong size on Devices_device_function_set_int__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__int_N_RInvoke_L_Nint_R");
static_assert(offsetof(Devices_device_function_set_int__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__int_N_RInvoke_L_Nint_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_device_function_set_int__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__int_N_RInvoke_L_Nint_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");

struct Devices_device_function__L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke final
{
public:
	struct VerseDevices_0::Ftuple_L_R             __verse_0xB2CDDD72_Argument;
};
static_assert(alignof(Devices_device_function__L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke) == 0x000001, "Wrong alignment on Devices_device_function__L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke");
static_assert(sizeof(Devices_device_function__L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke) == 0x000001, "Wrong size on Devices_device_function__L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke");
static_assert(offsetof(Devices_device_function__L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_device_function__L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke::__verse_0xB2CDDD72_Argument' has a wrong offset!");

struct Devices_device_function__L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke_L_Nagent_R final
{
public:
	class USimulation_agent*                      __verse_0xB2CDDD72_Argument;
};
static_assert(alignof(Devices_device_function__L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke_L_Nagent_R) == 0x000008, "Wrong alignment on Devices_device_function__L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke_L_Nagent_R");
static_assert(sizeof(Devices_device_function__L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke_L_Nagent_R) == 0x000008, "Wrong size on Devices_device_function__L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke_L_Nagent_R");
static_assert(offsetof(Devices_device_function__L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke_L_Nagent_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_device_function__L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke_L_Nagent_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");

struct Devices_CreativeAnimation_animation_controller__InitCDO final
{
public:
	class UDiagnostics_log*                       _ExprResult_0;
	uint64                                        _InstancingGraph_1;
	class UVerseEngine_multicast_delegate*        _ExprResult_2;
	uint64                                        _InstancingGraph_3;
	class UVerseEngine_multicast_delegate*        _ExprResult_4;
	uint64                                        _InstancingGraph_5;
	class UVerseEngine_multicast_delegate*        _ExprResult_6;
	uint64                                        _InstancingGraph_7;
};
static_assert(alignof(Devices_CreativeAnimation_animation_controller__InitCDO) == 0x000008, "Wrong alignment on Devices_CreativeAnimation_animation_controller__InitCDO");
static_assert(sizeof(Devices_CreativeAnimation_animation_controller__InitCDO) == 0x000040, "Wrong size on Devices_CreativeAnimation_animation_controller__InitCDO");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__InitCDO, _ExprResult_0) == 0x000000, "Member 'Devices_CreativeAnimation_animation_controller__InitCDO::_ExprResult_0' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__InitCDO, _InstancingGraph_1) == 0x000008, "Member 'Devices_CreativeAnimation_animation_controller__InitCDO::_InstancingGraph_1' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__InitCDO, _ExprResult_2) == 0x000010, "Member 'Devices_CreativeAnimation_animation_controller__InitCDO::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__InitCDO, _InstancingGraph_3) == 0x000018, "Member 'Devices_CreativeAnimation_animation_controller__InitCDO::_InstancingGraph_3' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__InitCDO, _ExprResult_4) == 0x000020, "Member 'Devices_CreativeAnimation_animation_controller__InitCDO::_ExprResult_4' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__InitCDO, _InstancingGraph_5) == 0x000028, "Member 'Devices_CreativeAnimation_animation_controller__InitCDO::_InstancingGraph_5' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__InitCDO, _ExprResult_6) == 0x000030, "Member 'Devices_CreativeAnimation_animation_controller__InitCDO::_ExprResult_6' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__InitCDO, _InstancingGraph_7) == 0x000038, "Member 'Devices_CreativeAnimation_animation_controller__InitCDO::_InstancingGraph_7' has a wrong offset!");

struct Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RGetState final
{
public:
	struct VerseDevices_0::Ftuple_L_R             __verse_0xB2CDDD72_Argument;
	EDevices_CreativeAnimation_animation_controller_state RetVal;
};
static_assert(alignof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RGetState) == 0x000001, "Wrong alignment on Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RGetState");
static_assert(sizeof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RGetState) == 0x000002, "Wrong size on Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RGetState");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RGetState, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RGetState::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RGetState, RetVal) == 0x000001, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RGetState::RetVal' has a wrong offset!");

struct Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RIsValid final
{
public:
	struct VerseDevices_0::Ftuple_L_R             __verse_0xB2CDDD72_Argument;
	FOptionProperty_                              RetVal;
};
static_assert(alignof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RIsValid) == 0x000001, "Wrong alignment on Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RIsValid");
static_assert(sizeof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RIsValid) == 0x000003, "Wrong size on Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RIsValid");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RIsValid, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RIsValid::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RIsValid, RetVal) == 0x000001, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RIsValid::RetVal' has a wrong offset!");

struct Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R final
{
public:
	struct Ftuple_L_Kchar_Mplaystoppause__result_R __verse_0xB2CDDD72_Argument;
	FVerseDynamicProperty_                        InvokeResultDummy_0;
	FOptionProperty_                              _ExprResultStack_1;
	uint8                                         Pad_39[0x7];
	FVerseDynamicProperty_                        _ExprResult_2;
	FVerseDynamicProperty_                        _ExprResult_3;
	class UDiagnostics_log*                       __verse_0x00000000__2;
	EVerseTrue                                    _InvokeSureResultDummy_4;
	uint8                                         Pad_69[0x7];
	FVerseFunctionProperty_                       _Callee_5;
	struct Ftuple_L_Kchar_M_QLevel_Nlog__level_R  _ExprResult_6;
	FVerseStringProperty_                         _ExprResult_7;
	TArray<FVerseDynamicProperty_>                __verse_0xFFC68BC5_Array_3;
	FVerseFunctionProperty_                       _Callee_8;
	TArray<TArray<FVerseDynamicProperty_>>        _ExprResult_9;
	TArray<FVerseStringProperty_>                 __verse_0xFFC68BC5_Array_4;
	struct VerseDevices_0::Ftuple_L_Kchar_M_Kchar_R __verse_0x00000000__5;
	FVerseStringProperty_                         _ExprResultStack_10;
	FVerseFunctionProperty_                       _Callee_11;
	FVerseStringProperty_                         _ExprResult_12;
	FVerseStringProperty_                         _ExprResultDummy_13;
	FVerseStringProperty_                         _ExprResultDummy_14;
	TArray<TArray<FVerseDynamicProperty_>>        _ForResult_15;
	int64                                         _ForIndex_16;
	int64                                         _ForLength_17;
	FVerseStringProperty_                         __verse_0xFB88B569_Item_7;
	TArray<FVerseDynamicProperty_>                _ExprResult_18;
	FVerseStringProperty_                         __verse_0xFFC68BC5_Array_8;
	TArray<FVerseDynamicProperty_>                _ForResult_19;
	int64                                         _ForIndex_20;
	int64                                         _ForLength_21;
	uint8                                         __verse_0xFB88B569_Item_10;
	uint8                                         Pad_1C9[0x7];
	FVerseDynamicProperty_                        _ExprResult_22;
	FVerseStringProperty_                         _ForResult_23;
	int64                                         _ForIndex_24;
	int64                                         _ForLength_25;
	FVerseDynamicProperty_                        __verse_0xFB88B569_Item_12;
	uint8                                         _ExprResult_26;
	FOptionProperty_                              _ExprResult_27;
	uint8                                         Pad_213[0x5];
	FVerseDynamicProperty_                        InvokeResultDummy_28;
	FOptionProperty_                              _ExprResultStack_29;
	uint8                                         Pad_239[0x7];
	FVerseDynamicProperty_                        _ExprResult_30;
	FVerseDynamicProperty_                        _ExprResult_31;
	class UDiagnostics_log*                       __verse_0x00000000__14;
	EVerseTrue                                    _InvokeSureResultDummy_32;
	uint8                                         Pad_269[0x7];
	FVerseFunctionProperty_                       _Callee_33;
	struct Ftuple_L_Kchar_M_QLevel_Nlog__level_R  _ExprResult_34;
	FVerseStringProperty_                         _ExprResult_35;
	TArray<FVerseDynamicProperty_>                __verse_0xFFC68BC5_Array_15;
	FVerseFunctionProperty_                       _Callee_36;
	TArray<TArray<FVerseDynamicProperty_>>        _ExprResult_37;
	TArray<FVerseStringProperty_>                 __verse_0xFFC68BC5_Array_16;
	struct VerseDevices_0::Ftuple_L_Kchar_M_Kchar_R __verse_0x00000000__17;
	FVerseStringProperty_                         _ExprResultStack_38;
	FVerseFunctionProperty_                       _Callee_39;
	FVerseStringProperty_                         _ExprResult_40;
	FVerseStringProperty_                         _ExprResultDummy_41;
	FVerseStringProperty_                         _ExprResultDummy_42;
	TArray<TArray<FVerseDynamicProperty_>>        _ForResult_43;
	int64                                         _ForIndex_44;
	int64                                         _ForLength_45;
	FVerseStringProperty_                         __verse_0xFB88B569_Item_19;
	TArray<FVerseDynamicProperty_>                _ExprResult_46;
	FVerseStringProperty_                         __verse_0xFFC68BC5_Array_20;
	TArray<FVerseDynamicProperty_>                _ForResult_47;
	int64                                         _ForIndex_48;
	int64                                         _ForLength_49;
	uint8                                         __verse_0xFB88B569_Item_22;
	uint8                                         Pad_3C9[0x7];
	FVerseDynamicProperty_                        _ExprResult_50;
	FVerseStringProperty_                         _ForResult_51;
	int64                                         _ForIndex_52;
	int64                                         _ForLength_53;
	FVerseDynamicProperty_                        __verse_0xFB88B569_Item_24;
	uint8                                         _ExprResult_54;
	FOptionProperty_                              _ExprResult_55;
};
static_assert(alignof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R) == 0x000008, "Wrong alignment on Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R");
static_assert(sizeof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R) == 0x000418, "Wrong size on Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, InvokeResultDummy_0) == 0x000018, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::InvokeResultDummy_0' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ExprResultStack_1) == 0x000028, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ExprResultStack_1' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ExprResult_2) == 0x000040, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ExprResult_3) == 0x000050, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ExprResult_3' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, __verse_0x00000000__2) == 0x000060, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::__verse_0x00000000__2' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _InvokeSureResultDummy_4) == 0x000068, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_InvokeSureResultDummy_4' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _Callee_5) == 0x000070, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_Callee_5' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ExprResult_6) == 0x000080, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ExprResult_6' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ExprResult_7) == 0x000098, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ExprResult_7' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, __verse_0xFFC68BC5_Array_3) == 0x0000A8, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::__verse_0xFFC68BC5_Array_3' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _Callee_8) == 0x0000B8, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_Callee_8' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ExprResult_9) == 0x0000C8, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ExprResult_9' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, __verse_0xFFC68BC5_Array_4) == 0x0000D8, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::__verse_0xFFC68BC5_Array_4' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, __verse_0x00000000__5) == 0x0000E8, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::__verse_0x00000000__5' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ExprResultStack_10) == 0x000108, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ExprResultStack_10' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _Callee_11) == 0x000118, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_Callee_11' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ExprResult_12) == 0x000128, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ExprResult_12' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ExprResultDummy_13) == 0x000138, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ExprResultDummy_13' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ExprResultDummy_14) == 0x000148, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ExprResultDummy_14' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ForResult_15) == 0x000158, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ForResult_15' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ForIndex_16) == 0x000168, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ForIndex_16' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ForLength_17) == 0x000170, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ForLength_17' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, __verse_0xFB88B569_Item_7) == 0x000178, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::__verse_0xFB88B569_Item_7' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ExprResult_18) == 0x000188, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ExprResult_18' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, __verse_0xFFC68BC5_Array_8) == 0x000198, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::__verse_0xFFC68BC5_Array_8' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ForResult_19) == 0x0001A8, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ForResult_19' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ForIndex_20) == 0x0001B8, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ForIndex_20' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ForLength_21) == 0x0001C0, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ForLength_21' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, __verse_0xFB88B569_Item_10) == 0x0001C8, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::__verse_0xFB88B569_Item_10' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ExprResult_22) == 0x0001D0, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ExprResult_22' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ForResult_23) == 0x0001E0, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ForResult_23' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ForIndex_24) == 0x0001F0, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ForIndex_24' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ForLength_25) == 0x0001F8, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ForLength_25' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, __verse_0xFB88B569_Item_12) == 0x000200, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::__verse_0xFB88B569_Item_12' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ExprResult_26) == 0x000210, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ExprResult_26' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ExprResult_27) == 0x000211, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ExprResult_27' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, InvokeResultDummy_28) == 0x000218, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::InvokeResultDummy_28' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ExprResultStack_29) == 0x000228, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ExprResultStack_29' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ExprResult_30) == 0x000240, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ExprResult_30' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ExprResult_31) == 0x000250, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ExprResult_31' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, __verse_0x00000000__14) == 0x000260, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::__verse_0x00000000__14' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _InvokeSureResultDummy_32) == 0x000268, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_InvokeSureResultDummy_32' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _Callee_33) == 0x000270, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_Callee_33' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ExprResult_34) == 0x000280, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ExprResult_34' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ExprResult_35) == 0x000298, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ExprResult_35' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, __verse_0xFFC68BC5_Array_15) == 0x0002A8, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::__verse_0xFFC68BC5_Array_15' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _Callee_36) == 0x0002B8, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_Callee_36' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ExprResult_37) == 0x0002C8, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ExprResult_37' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, __verse_0xFFC68BC5_Array_16) == 0x0002D8, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::__verse_0xFFC68BC5_Array_16' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, __verse_0x00000000__17) == 0x0002E8, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::__verse_0x00000000__17' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ExprResultStack_38) == 0x000308, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ExprResultStack_38' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _Callee_39) == 0x000318, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_Callee_39' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ExprResult_40) == 0x000328, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ExprResult_40' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ExprResultDummy_41) == 0x000338, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ExprResultDummy_41' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ExprResultDummy_42) == 0x000348, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ExprResultDummy_42' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ForResult_43) == 0x000358, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ForResult_43' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ForIndex_44) == 0x000368, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ForIndex_44' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ForLength_45) == 0x000370, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ForLength_45' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, __verse_0xFB88B569_Item_19) == 0x000378, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::__verse_0xFB88B569_Item_19' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ExprResult_46) == 0x000388, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ExprResult_46' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, __verse_0xFFC68BC5_Array_20) == 0x000398, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::__verse_0xFFC68BC5_Array_20' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ForResult_47) == 0x0003A8, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ForResult_47' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ForIndex_48) == 0x0003B8, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ForIndex_48' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ForLength_49) == 0x0003C0, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ForLength_49' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, __verse_0xFB88B569_Item_22) == 0x0003C8, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::__verse_0xFB88B569_Item_22' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ExprResult_50) == 0x0003D0, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ExprResult_50' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ForResult_51) == 0x0003E0, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ForResult_51' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ForIndex_52) == 0x0003F0, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ForIndex_52' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ForLength_53) == 0x0003F8, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ForLength_53' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, __verse_0xFB88B569_Item_24) == 0x000400, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::__verse_0xFB88B569_Item_24' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ExprResult_54) == 0x000410, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ExprResult_54' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R, _ExprResult_55) == 0x000411, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R::_ExprResult_55' has a wrong offset!");

struct Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPause final
{
public:
	struct VerseDevices_0::Ftuple_L_R             __verse_0xB2CDDD72_Argument;
	EDevices_CreativeAnimation_playstoppause_result __verse_0x95D09D0E_Result_1;
	uint8                                         Pad_2[0x6];
	FVerseFunctionProperty_                       _Callee_0;
	struct VerseDevices_0::Ftuple_L_R             _ExprResult_1;
	EVerseTrue                                    _InvokeSureResultDummy_2;
	uint8                                         Pad_1A[0x6];
	FVerseFunctionProperty_                       _Callee_3;
	struct Ftuple_L_Kchar_Mplaystoppause__result_R _ExprResult_4;
	FVerseStringProperty_                         _ExprResult_5;
};
static_assert(alignof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPause) == 0x000008, "Wrong alignment on Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPause");
static_assert(sizeof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPause) == 0x000058, "Wrong size on Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPause");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPause, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPause::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPause, __verse_0x95D09D0E_Result_1) == 0x000001, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPause::__verse_0x95D09D0E_Result_1' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPause, _Callee_0) == 0x000008, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPause::_Callee_0' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPause, _ExprResult_1) == 0x000018, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPause::_ExprResult_1' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPause, _InvokeSureResultDummy_2) == 0x000019, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPause::_InvokeSureResultDummy_2' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPause, _Callee_3) == 0x000020, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPause::_Callee_3' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPause, _ExprResult_4) == 0x000030, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPause::_ExprResult_4' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPause, _ExprResult_5) == 0x000048, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPause::_ExprResult_5' has a wrong offset!");

struct Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPauseInternal final
{
public:
	struct VerseDevices_0::Ftuple_L_R             __verse_0xB2CDDD72_Argument;
	EDevices_CreativeAnimation_playstoppause_result RetVal;
};
static_assert(alignof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPauseInternal) == 0x000001, "Wrong alignment on Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPauseInternal");
static_assert(sizeof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPauseInternal) == 0x000002, "Wrong size on Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPauseInternal");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPauseInternal, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPauseInternal::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPauseInternal, RetVal) == 0x000001, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPauseInternal::RetVal' has a wrong offset!");

struct Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlay final
{
public:
	struct VerseDevices_0::Ftuple_L_R             __verse_0xB2CDDD72_Argument;
	EDevices_CreativeAnimation_playstoppause_result __verse_0x95D09D0E_Result_1;
	uint8                                         Pad_2[0x6];
	FVerseFunctionProperty_                       _Callee_0;
	struct VerseDevices_0::Ftuple_L_R             _ExprResult_1;
	EVerseTrue                                    _InvokeSureResultDummy_2;
	uint8                                         Pad_1A[0x6];
	FVerseFunctionProperty_                       _Callee_3;
	struct Ftuple_L_Kchar_Mplaystoppause__result_R _ExprResult_4;
	FVerseStringProperty_                         _ExprResult_5;
};
static_assert(alignof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlay) == 0x000008, "Wrong alignment on Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlay");
static_assert(sizeof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlay) == 0x000058, "Wrong size on Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlay");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlay, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlay::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlay, __verse_0x95D09D0E_Result_1) == 0x000001, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlay::__verse_0x95D09D0E_Result_1' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlay, _Callee_0) == 0x000008, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlay::_Callee_0' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlay, _ExprResult_1) == 0x000018, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlay::_ExprResult_1' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlay, _InvokeSureResultDummy_2) == 0x000019, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlay::_InvokeSureResultDummy_2' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlay, _Callee_3) == 0x000020, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlay::_Callee_3' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlay, _ExprResult_4) == 0x000030, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlay::_ExprResult_4' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlay, _ExprResult_5) == 0x000048, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlay::_ExprResult_5' has a wrong offset!");

struct Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlayInternal final
{
public:
	struct VerseDevices_0::Ftuple_L_R             __verse_0xB2CDDD72_Argument;
	EDevices_CreativeAnimation_playstoppause_result RetVal;
};
static_assert(alignof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlayInternal) == 0x000001, "Wrong alignment on Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlayInternal");
static_assert(sizeof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlayInternal) == 0x000002, "Wrong size on Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlayInternal");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlayInternal, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlayInternal::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlayInternal, RetVal) == 0x000001, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlayInternal::RetVal' has a wrong offset!");

struct Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R final
{
public:
	struct Ftuple_L_Kkeyframe__delta_M_QMode_Nanimation__mode_R __verse_0xB2CDDD72_Argument;
	EDevices_CreativeAnimation_set_animation_result __verse_0x95D09D0E_Result_1;
	uint8                                         Pad_19[0x7];
	FVerseFunctionProperty_                       _Callee_0;
	struct Ftuple_L_Kkeyframe__delta_M_QAnimationMode_Nanimation__mode_R _ExprResult_1;
	FOptionProperty_                              _ExprResult_2;
	uint8                                         Pad_4A[0x6];
	FVerseDynamicProperty_                        InvokeResultDummy_3;
	FOptionProperty_                              _ExprResultStack_4;
	uint8                                         Pad_71[0x7];
	FVerseDynamicProperty_                        _ExprResult_5;
	FVerseDynamicProperty_                        _ExprResult_6;
	class UDiagnostics_log*                       __verse_0x00000000__3;
	EVerseTrue                                    _InvokeSureResultDummy_7;
	uint8                                         Pad_A1[0x7];
	FVerseFunctionProperty_                       _Callee_8;
	struct Ftuple_L_Kchar_M_QLevel_Nlog__level_R  _ExprResult_9;
	FVerseStringProperty_                         _ExprResultStack_10;
	FVerseStringProperty_                         _ExprResult_11;
	FVerseStringProperty_                         _ExprResultStack_12;
	FVerseFunctionProperty_                       _Callee_13;
	FOptionProperty_                              _ExprResult_14;
};
static_assert(alignof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R) == 0x000008, "Wrong alignment on Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R");
static_assert(sizeof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R) == 0x000118, "Wrong size on Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R, __verse_0x95D09D0E_Result_1) == 0x000018, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R::__verse_0x95D09D0E_Result_1' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R, _Callee_0) == 0x000020, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R::_Callee_0' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R, _ExprResult_1) == 0x000030, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R::_ExprResult_1' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R, _ExprResult_2) == 0x000048, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R, InvokeResultDummy_3) == 0x000050, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R::InvokeResultDummy_3' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R, _ExprResultStack_4) == 0x000060, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R::_ExprResultStack_4' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R, _ExprResult_5) == 0x000078, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R::_ExprResult_5' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R, _ExprResult_6) == 0x000088, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R::_ExprResult_6' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R, __verse_0x00000000__3) == 0x000098, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R::__verse_0x00000000__3' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R, _InvokeSureResultDummy_7) == 0x0000A0, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R::_InvokeSureResultDummy_7' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R, _Callee_8) == 0x0000A8, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R::_Callee_8' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R, _ExprResult_9) == 0x0000B8, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R::_ExprResult_9' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R, _ExprResultStack_10) == 0x0000D0, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R::_ExprResultStack_10' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R, _ExprResult_11) == 0x0000E0, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R::_ExprResult_11' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R, _ExprResultStack_12) == 0x0000F0, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R::_ExprResultStack_12' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R, _Callee_13) == 0x000100, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R::_Callee_13' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R, _ExprResult_14) == 0x000110, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R::_ExprResult_14' has a wrong offset!");

struct Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimationInternal_L_N_Kkeyframe__delta_M_Nanimation__mode_R final
{
public:
	struct Ftuple_L_Kkeyframe__delta_M_QAnimationMode_Nanimation__mode_20_3d_20_2e_2e_2e_R __verse_0xB2CDDD72_Argument;
	EDevices_CreativeAnimation_set_animation_result RetVal;
};
static_assert(alignof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimationInternal_L_N_Kkeyframe__delta_M_Nanimation__mode_R) == 0x000008, "Wrong alignment on Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimationInternal_L_N_Kkeyframe__delta_M_Nanimation__mode_R");
static_assert(sizeof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimationInternal_L_N_Kkeyframe__delta_M_Nanimation__mode_R) == 0x000020, "Wrong size on Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimationInternal_L_N_Kkeyframe__delta_M_Nanimation__mode_R");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimationInternal_L_N_Kkeyframe__delta_M_Nanimation__mode_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimationInternal_L_N_Kkeyframe__delta_M_Nanimation__mode_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimationInternal_L_N_Kkeyframe__delta_M_Nanimation__mode_R, RetVal) == 0x000018, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimationInternal_L_N_Kkeyframe__delta_M_Nanimation__mode_R::RetVal' has a wrong offset!");

struct Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStop final
{
public:
	struct VerseDevices_0::Ftuple_L_R             __verse_0xB2CDDD72_Argument;
	EDevices_CreativeAnimation_playstoppause_result __verse_0x95D09D0E_Result_1;
	uint8                                         Pad_2[0x6];
	FVerseFunctionProperty_                       _Callee_0;
	struct VerseDevices_0::Ftuple_L_R             _ExprResult_1;
	EVerseTrue                                    _InvokeSureResultDummy_2;
	uint8                                         Pad_1A[0x6];
	FVerseFunctionProperty_                       _Callee_3;
	struct Ftuple_L_Kchar_Mplaystoppause__result_R _ExprResult_4;
	FVerseStringProperty_                         _ExprResult_5;
};
static_assert(alignof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStop) == 0x000008, "Wrong alignment on Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStop");
static_assert(sizeof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStop) == 0x000058, "Wrong size on Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStop");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStop, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStop::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStop, __verse_0x95D09D0E_Result_1) == 0x000001, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStop::__verse_0x95D09D0E_Result_1' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStop, _Callee_0) == 0x000008, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStop::_Callee_0' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStop, _ExprResult_1) == 0x000018, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStop::_ExprResult_1' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStop, _InvokeSureResultDummy_2) == 0x000019, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStop::_InvokeSureResultDummy_2' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStop, _Callee_3) == 0x000020, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStop::_Callee_3' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStop, _ExprResult_4) == 0x000030, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStop::_ExprResult_4' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStop, _ExprResult_5) == 0x000048, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStop::_ExprResult_5' has a wrong offset!");

struct Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStopInternal final
{
public:
	struct VerseDevices_0::Ftuple_L_R             __verse_0xB2CDDD72_Argument;
	EDevices_CreativeAnimation_playstoppause_result RetVal;
};
static_assert(alignof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStopInternal) == 0x000001, "Wrong alignment on Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStopInternal");
static_assert(sizeof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStopInternal) == 0x000002, "Wrong size on Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStopInternal");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStopInternal, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStopInternal::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStopInternal, RetVal) == 0x000001, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStopInternal::RetVal' has a wrong offset!");

struct alignas(0x08) Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R final
{
public:
	EDevices_CreativeAnimation_set_animation_result __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_1[0x7];
	FVerseStringProperty_                         RetVal;
	EDevices_CreativeAnimation_set_animation_result __verse_0x00000000__1;
	uint8                                         Pad_19[0x7];
	FVerseDynamicProperty_                        InvokeResultDummy_0;
	FOptionProperty_                              _ExprResultStack_1;
	uint8                                         Pad_41[0x7];
	FVerseDynamicProperty_                        _ExprResult_2;
	FVerseDynamicProperty_                        _ExprResult_3;
	FVerseDynamicProperty_                        InvokeResultDummy_4;
	FOptionProperty_                              _ExprResultStack_5;
	uint8                                         Pad_89[0x7];
	FVerseDynamicProperty_                        _ExprResult_6;
	FVerseDynamicProperty_                        _ExprResult_7;
	FVerseDynamicProperty_                        InvokeResultDummy_8;
	FOptionProperty_                              _ExprResultStack_9;
	uint8                                         Pad_D1[0x7];
	FVerseDynamicProperty_                        _ExprResult_10;
	FVerseDynamicProperty_                        _ExprResult_11;
	FVerseDynamicProperty_                        InvokeResultDummy_12;
	FOptionProperty_                              _ExprResultStack_13;
	uint8                                         Pad_119[0x7];
	FVerseDynamicProperty_                        _ExprResult_14;
	FVerseDynamicProperty_                        _ExprResult_15;
	FVerseDynamicProperty_                        InvokeResultDummy_16;
	FOptionProperty_                              _ExprResultStack_17;
	uint8                                         Pad_161[0x7];
	FVerseDynamicProperty_                        _ExprResult_18;
	FVerseDynamicProperty_                        _ExprResult_19;
	FVerseDynamicProperty_                        InvokeResultDummy_20;
	FOptionProperty_                              _ExprResultStack_21;
	uint8                                         Pad_1A9[0x7];
	FVerseDynamicProperty_                        _ExprResult_22;
	FVerseDynamicProperty_                        _ExprResult_23;
	FVerseDynamicProperty_                        InvokeResultDummy_24;
	FOptionProperty_                              _ExprResultStack_25;
	uint8                                         Pad_1F1[0x7];
	FVerseDynamicProperty_                        _ExprResult_26;
	FVerseDynamicProperty_                        _ExprResult_27;
	FVerseDynamicProperty_                        InvokeResultDummy_28;
	FOptionProperty_                              _ExprResultStack_29;
	uint8                                         Pad_239[0x7];
	FVerseDynamicProperty_                        _ExprResult_30;
	FVerseDynamicProperty_                        _ExprResult_31;
};
static_assert(alignof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R) == 0x000008, "Wrong alignment on Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R");
static_assert(sizeof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R) == 0x000260, "Wrong size on Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R, RetVal) == 0x000008, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R::RetVal' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R, __verse_0x00000000__1) == 0x000018, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R::__verse_0x00000000__1' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R, InvokeResultDummy_0) == 0x000020, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R::InvokeResultDummy_0' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R, _ExprResultStack_1) == 0x000030, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R::_ExprResultStack_1' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R, _ExprResult_2) == 0x000048, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R, _ExprResult_3) == 0x000058, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R::_ExprResult_3' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R, InvokeResultDummy_4) == 0x000068, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R::InvokeResultDummy_4' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R, _ExprResultStack_5) == 0x000078, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R::_ExprResultStack_5' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R, _ExprResult_6) == 0x000090, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R::_ExprResult_6' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R, _ExprResult_7) == 0x0000A0, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R::_ExprResult_7' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R, InvokeResultDummy_8) == 0x0000B0, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R::InvokeResultDummy_8' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R, _ExprResultStack_9) == 0x0000C0, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R::_ExprResultStack_9' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R, _ExprResult_10) == 0x0000D8, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R::_ExprResult_10' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R, _ExprResult_11) == 0x0000E8, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R::_ExprResult_11' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R, InvokeResultDummy_12) == 0x0000F8, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R::InvokeResultDummy_12' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R, _ExprResultStack_13) == 0x000108, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R::_ExprResultStack_13' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R, _ExprResult_14) == 0x000120, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R::_ExprResult_14' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R, _ExprResult_15) == 0x000130, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R::_ExprResult_15' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R, InvokeResultDummy_16) == 0x000140, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R::InvokeResultDummy_16' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R, _ExprResultStack_17) == 0x000150, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R::_ExprResultStack_17' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R, _ExprResult_18) == 0x000168, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R::_ExprResult_18' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R, _ExprResult_19) == 0x000178, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R::_ExprResult_19' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R, InvokeResultDummy_20) == 0x000188, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R::InvokeResultDummy_20' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R, _ExprResultStack_21) == 0x000198, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R::_ExprResultStack_21' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R, _ExprResult_22) == 0x0001B0, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R::_ExprResult_22' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R, _ExprResult_23) == 0x0001C0, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R::_ExprResult_23' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R, InvokeResultDummy_24) == 0x0001D0, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R::InvokeResultDummy_24' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R, _ExprResultStack_25) == 0x0001E0, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R::_ExprResultStack_25' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R, _ExprResult_26) == 0x0001F8, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R::_ExprResult_26' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R, _ExprResult_27) == 0x000208, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R::_ExprResult_27' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R, InvokeResultDummy_28) == 0x000218, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R::InvokeResultDummy_28' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R, _ExprResultStack_29) == 0x000228, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R::_ExprResultStack_29' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R, _ExprResult_30) == 0x000240, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R::_ExprResult_30' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R, _ExprResult_31) == 0x000250, "Member 'Devices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R::_ExprResult_31' has a wrong offset!");

struct Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct VerseDevices_0::Ftuple_L_R             __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_19[0x7];
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe) == 0x000008, "Wrong alignment on Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe");
static_assert(sizeof(Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe) == 0x000028, "Wrong size on Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe, RetVal) == 0x000020, "Member 'Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe::RetVal' has a wrong offset!");

struct task_Devices_device_event_optional_agent_int_Await_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_Devices_device_event_optional_agent_int_Await_Update) == 0x000008, "Wrong alignment on task_Devices_device_event_optional_agent_int_Await_Update");
static_assert(sizeof(task_Devices_device_event_optional_agent_int_Await_Update) == 0x000008, "Wrong size on task_Devices_device_event_optional_agent_int_Await_Update");
static_assert(offsetof(task_Devices_device_event_optional_agent_int_Await_Update, RetVal) == 0x000000, "Member 'task_Devices_device_event_optional_agent_int_Await_Update::RetVal' has a wrong offset!");

struct alignas(0x08) Devices_device_function_get_string__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__string_N_RInvoke final
{
public:
	struct VerseDevices_0::Ftuple_L_R             __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_1[0x7];
	FVerseStringProperty_                         RetVal;
};
static_assert(alignof(Devices_device_function_get_string__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__string_N_RInvoke) == 0x000008, "Wrong alignment on Devices_device_function_get_string__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__string_N_RInvoke");
static_assert(sizeof(Devices_device_function_get_string__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__string_N_RInvoke) == 0x000018, "Wrong size on Devices_device_function_get_string__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__string_N_RInvoke");
static_assert(offsetof(Devices_device_function_get_string__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__string_N_RInvoke, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_device_function_get_string__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__string_N_RInvoke::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_device_function_get_string__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__string_N_RInvoke, RetVal) == 0x000008, "Member 'Devices_device_function_get_string__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__string_N_RInvoke::RetVal' has a wrong offset!");

struct Devices_CreativeAnimation_InterpolationTypes__InitCDO final
{
public:
	struct FDevices_CreativeAnimation_cubic_bezier_parameters _ExprResult_0;
	struct FDevices_CreativeAnimation_cubic_bezier_parameters _ExprResult_1;
	struct FDevices_CreativeAnimation_cubic_bezier_parameters _ExprResult_2;
	struct FDevices_CreativeAnimation_cubic_bezier_parameters _ExprResult_3;
	struct FDevices_CreativeAnimation_cubic_bezier_parameters _ExprResult_4;
};
static_assert(alignof(Devices_CreativeAnimation_InterpolationTypes__InitCDO) == 0x000008, "Wrong alignment on Devices_CreativeAnimation_InterpolationTypes__InitCDO");
static_assert(sizeof(Devices_CreativeAnimation_InterpolationTypes__InitCDO) == 0x0000A0, "Wrong size on Devices_CreativeAnimation_InterpolationTypes__InitCDO");
static_assert(offsetof(Devices_CreativeAnimation_InterpolationTypes__InitCDO, _ExprResult_0) == 0x000000, "Member 'Devices_CreativeAnimation_InterpolationTypes__InitCDO::_ExprResult_0' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_InterpolationTypes__InitCDO, _ExprResult_1) == 0x000020, "Member 'Devices_CreativeAnimation_InterpolationTypes__InitCDO::_ExprResult_1' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_InterpolationTypes__InitCDO, _ExprResult_2) == 0x000040, "Member 'Devices_CreativeAnimation_InterpolationTypes__InitCDO::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_InterpolationTypes__InitCDO, _ExprResult_3) == 0x000060, "Member 'Devices_CreativeAnimation_InterpolationTypes__InitCDO::_ExprResult_3' has a wrong offset!");
static_assert(offsetof(Devices_CreativeAnimation_InterpolationTypes__InitCDO, _ExprResult_4) == 0x000080, "Member 'Devices_CreativeAnimation_InterpolationTypes__InitCDO::_ExprResult_4' has a wrong offset!");

struct task_Devices_device_event_void_Await_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_Devices_device_event_void_Await_Update) == 0x000008, "Wrong alignment on task_Devices_device_event_void_Await_Update");
static_assert(sizeof(task_Devices_device_event_void_Await_Update) == 0x000008, "Wrong size on task_Devices_device_event_void_Await_Update");
static_assert(offsetof(task_Devices_device_event_void_Await_Update, RetVal) == 0x000000, "Member 'task_Devices_device_event_void_Await_Update::RetVal' has a wrong offset!");

struct Devices_device_event_agent__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R final
{
public:
	FVerseFunctionProperty_                       __verse_0xB2CDDD72_Argument;
	class UObject*                                RetVal;
};
static_assert(alignof(Devices_device_event_agent__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R) == 0x000008, "Wrong alignment on Devices_device_event_agent__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R");
static_assert(sizeof(Devices_device_event_agent__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R) == 0x000018, "Wrong size on Devices_device_event_agent__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R");
static_assert(offsetof(Devices_device_event_agent__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_device_event_agent__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_device_event_agent__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R, RetVal) == 0x000010, "Member 'Devices_device_event_agent__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R::RetVal' has a wrong offset!");

struct Devices_device_event_agent_Await final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct VerseDevices_0::Ftuple_L_R             __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_19[0x7];
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(Devices_device_event_agent_Await) == 0x000008, "Wrong alignment on Devices_device_event_agent_Await");
static_assert(sizeof(Devices_device_event_agent_Await) == 0x000028, "Wrong size on Devices_device_event_agent_Await");
static_assert(offsetof(Devices_device_event_agent_Await, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'Devices_device_event_agent_Await::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(Devices_device_event_agent_Await, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'Devices_device_event_agent_Await::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(Devices_device_event_agent_Await, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'Devices_device_event_agent_Await::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(Devices_device_event_agent_Await, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'Devices_device_event_agent_Await::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_device_event_agent_Await, RetVal) == 0x000020, "Member 'Devices_device_event_agent_Await::RetVal' has a wrong offset!");

struct Devices_device_event_optional_agent_int__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R final
{
public:
	FVerseFunctionProperty_                       __verse_0xB2CDDD72_Argument;
	class UObject*                                RetVal;
};
static_assert(alignof(Devices_device_event_optional_agent_int__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R) == 0x000008, "Wrong alignment on Devices_device_event_optional_agent_int__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R");
static_assert(sizeof(Devices_device_event_optional_agent_int__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R) == 0x000018, "Wrong size on Devices_device_event_optional_agent_int__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R");
static_assert(offsetof(Devices_device_event_optional_agent_int__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_device_event_optional_agent_int__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_device_event_optional_agent_int__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R, RetVal) == 0x000010, "Member 'Devices_device_event_optional_agent_int__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R::RetVal' has a wrong offset!");

struct Devices_device_event_optional_agent_int_Await final
{
public:
	class UConcurrency_task*                      __verse_0xC1E81372_CallingTask;
	int64                                         __verse_0xA3A00DDB_CallerResumeState;
	int64                                         __verse_0x2AC0E4D8_CallerCancelState;
	struct VerseDevices_0::Ftuple_L_R             __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_19[0x7];
	class UConcurrency_task*                      RetVal;
};
static_assert(alignof(Devices_device_event_optional_agent_int_Await) == 0x000008, "Wrong alignment on Devices_device_event_optional_agent_int_Await");
static_assert(sizeof(Devices_device_event_optional_agent_int_Await) == 0x000028, "Wrong size on Devices_device_event_optional_agent_int_Await");
static_assert(offsetof(Devices_device_event_optional_agent_int_Await, __verse_0xC1E81372_CallingTask) == 0x000000, "Member 'Devices_device_event_optional_agent_int_Await::__verse_0xC1E81372_CallingTask' has a wrong offset!");
static_assert(offsetof(Devices_device_event_optional_agent_int_Await, __verse_0xA3A00DDB_CallerResumeState) == 0x000008, "Member 'Devices_device_event_optional_agent_int_Await::__verse_0xA3A00DDB_CallerResumeState' has a wrong offset!");
static_assert(offsetof(Devices_device_event_optional_agent_int_Await, __verse_0x2AC0E4D8_CallerCancelState) == 0x000010, "Member 'Devices_device_event_optional_agent_int_Await::__verse_0x2AC0E4D8_CallerCancelState' has a wrong offset!");
static_assert(offsetof(Devices_device_event_optional_agent_int_Await, __verse_0xB2CDDD72_Argument) == 0x000018, "Member 'Devices_device_event_optional_agent_int_Await::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_device_event_optional_agent_int_Await, RetVal) == 0x000020, "Member 'Devices_device_event_optional_agent_int_Await::RetVal' has a wrong offset!");

struct alignas(0x08) Devices_device_function_set_multi_parameter_base__InitCDO final
{
public:
	FOptionProperty_                              _ExprResult_0;
	FOptionProperty_                              __verse_0x00000000__1;
	uint8                                         _ExprResult_1 : 1;
	FOptionProperty_                              _ExprResultStack_2;
};
static_assert(alignof(Devices_device_function_set_multi_parameter_base__InitCDO) == 0x000008, "Wrong alignment on Devices_device_function_set_multi_parameter_base__InitCDO");
static_assert(sizeof(Devices_device_function_set_multi_parameter_base__InitCDO) == 0x000010, "Wrong size on Devices_device_function_set_multi_parameter_base__InitCDO");
static_assert(offsetof(Devices_device_function_set_multi_parameter_base__InitCDO, _ExprResult_0) == 0x000000, "Member 'Devices_device_function_set_multi_parameter_base__InitCDO::_ExprResult_0' has a wrong offset!");
static_assert(offsetof(Devices_device_function_set_multi_parameter_base__InitCDO, __verse_0x00000000__1) == 0x000009, "Member 'Devices_device_function_set_multi_parameter_base__InitCDO::__verse_0x00000000__1' has a wrong offset!");
static_assert(offsetof(Devices_device_function_set_multi_parameter_base__InitCDO, _ExprResultStack_2) == 0x00000C, "Member 'Devices_device_function_set_multi_parameter_base__InitCDO::_ExprResultStack_2' has a wrong offset!");

struct alignas(0x08) Devices_device_function_get_agent__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__agent_N_RInvoke final
{
public:
	struct VerseDevices_0::Ftuple_L_R             __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_1[0x7];
	FOptionProperty_                              RetVal;
};
static_assert(alignof(Devices_device_function_get_agent__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__agent_N_RInvoke) == 0x000008, "Wrong alignment on Devices_device_function_get_agent__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__agent_N_RInvoke");
static_assert(sizeof(Devices_device_function_get_agent__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__agent_N_RInvoke) == 0x000010, "Wrong size on Devices_device_function_get_agent__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__agent_N_RInvoke");
static_assert(offsetof(Devices_device_function_get_agent__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__agent_N_RInvoke, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_device_function_get_agent__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__agent_N_RInvoke::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_device_function_get_agent__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__agent_N_RInvoke, RetVal) == 0x000008, "Member 'Devices_device_function_get_agent__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__agent_N_RInvoke::RetVal' has a wrong offset!");

struct Devices_device_function_get_color__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__color_N_RInvoke final
{
public:
	struct VerseDevices_0::Ftuple_L_R             __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_1[0x7];
	struct FColors_color                          RetVal;
};
static_assert(alignof(Devices_device_function_get_color__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__color_N_RInvoke) == 0x000008, "Wrong alignment on Devices_device_function_get_color__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__color_N_RInvoke");
static_assert(sizeof(Devices_device_function_get_color__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__color_N_RInvoke) == 0x000020, "Wrong size on Devices_device_function_get_color__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__color_N_RInvoke");
static_assert(offsetof(Devices_device_function_get_color__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__color_N_RInvoke, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_device_function_get_color__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__color_N_RInvoke::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_device_function_get_color__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__color_N_RInvoke, RetVal) == 0x000008, "Member 'Devices_device_function_get_color__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__color_N_RInvoke::RetVal' has a wrong offset!");

struct Devices_device_function_get_float__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__float_N_RInvoke final
{
public:
	struct VerseDevices_0::Ftuple_L_R             __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_1[0x7];
	double                                        RetVal;
};
static_assert(alignof(Devices_device_function_get_float__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__float_N_RInvoke) == 0x000008, "Wrong alignment on Devices_device_function_get_float__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__float_N_RInvoke");
static_assert(sizeof(Devices_device_function_get_float__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__float_N_RInvoke) == 0x000010, "Wrong size on Devices_device_function_get_float__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__float_N_RInvoke");
static_assert(offsetof(Devices_device_function_get_float__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__float_N_RInvoke, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_device_function_get_float__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__float_N_RInvoke::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_device_function_get_float__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__float_N_RInvoke, RetVal) == 0x000008, "Member 'Devices_device_function_get_float__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__float_N_RInvoke::RetVal' has a wrong offset!");

struct task_Devices_device_event_agent_Await_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_Devices_device_event_agent_Await_Update) == 0x000008, "Wrong alignment on task_Devices_device_event_agent_Await_Update");
static_assert(sizeof(task_Devices_device_event_agent_Await_Update) == 0x000008, "Wrong size on task_Devices_device_event_agent_Await_Update");
static_assert(offsetof(task_Devices_device_event_agent_Await_Update, RetVal) == 0x000000, "Member 'task_Devices_device_event_agent_Await_Update::RetVal' has a wrong offset!");

struct Devices_device_function_get_int__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__int_N_RInvoke final
{
public:
	struct VerseDevices_0::Ftuple_L_R             __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_1[0x7];
	int64                                         RetVal;
};
static_assert(alignof(Devices_device_function_get_int__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__int_N_RInvoke) == 0x000008, "Wrong alignment on Devices_device_function_get_int__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__int_N_RInvoke");
static_assert(sizeof(Devices_device_function_get_int__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__int_N_RInvoke) == 0x000010, "Wrong size on Devices_device_function_get_int__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__int_N_RInvoke");
static_assert(offsetof(Devices_device_function_get_int__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__int_N_RInvoke, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_device_function_get_int__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__int_N_RInvoke::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_device_function_get_int__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__int_N_RInvoke, RetVal) == 0x000008, "Member 'Devices_device_function_get_int__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__int_N_RInvoke::RetVal' has a wrong offset!");

struct Devices_device_function_get_logic__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__logic_N_RInvoke final
{
public:
	struct VerseDevices_0::Ftuple_L_R             __verse_0xB2CDDD72_Argument;
	uint8                                         RetVal : 1;
};
static_assert(alignof(Devices_device_function_get_logic__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__logic_N_RInvoke) == 0x000001, "Wrong alignment on Devices_device_function_get_logic__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__logic_N_RInvoke");
static_assert(sizeof(Devices_device_function_get_logic__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__logic_N_RInvoke) == 0x000002, "Wrong size on Devices_device_function_get_logic__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__logic_N_RInvoke");
static_assert(offsetof(Devices_device_function_get_logic__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__logic_N_RInvoke, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_device_function_get_logic__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__logic_N_RInvoke::__verse_0xB2CDDD72_Argument' has a wrong offset!");

struct alignas(0x08) Devices_device_function_set_agent__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__agent_N_RInvoke_L_N_Qagent_R final
{
public:
	FOptionProperty_                              __verse_0xB2CDDD72_Argument;
};
static_assert(alignof(Devices_device_function_set_agent__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__agent_N_RInvoke_L_N_Qagent_R) == 0x000008, "Wrong alignment on Devices_device_function_set_agent__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__agent_N_RInvoke_L_N_Qagent_R");
static_assert(sizeof(Devices_device_function_set_agent__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__agent_N_RInvoke_L_N_Qagent_R) == 0x000008, "Wrong size on Devices_device_function_set_agent__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__agent_N_RInvoke_L_N_Qagent_R");
static_assert(offsetof(Devices_device_function_set_agent__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__agent_N_RInvoke_L_N_Qagent_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_device_function_set_agent__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__agent_N_RInvoke_L_N_Qagent_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");

struct Devices_device_function_set_color__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__color_N_RInvoke_L_Ncolor_R final
{
public:
	struct FColors_color                          __verse_0xB2CDDD72_Argument;
};
static_assert(alignof(Devices_device_function_set_color__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__color_N_RInvoke_L_Ncolor_R) == 0x000008, "Wrong alignment on Devices_device_function_set_color__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__color_N_RInvoke_L_Ncolor_R");
static_assert(sizeof(Devices_device_function_set_color__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__color_N_RInvoke_L_Ncolor_R) == 0x000018, "Wrong size on Devices_device_function_set_color__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__color_N_RInvoke_L_Ncolor_R");
static_assert(offsetof(Devices_device_function_set_color__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__color_N_RInvoke_L_Ncolor_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_device_function_set_color__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__color_N_RInvoke_L_Ncolor_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");

struct Devices_device_function_set_float__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__float_N_RInvoke_L_Nfloat_R final
{
public:
	double                                        __verse_0xB2CDDD72_Argument;
};
static_assert(alignof(Devices_device_function_set_float__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__float_N_RInvoke_L_Nfloat_R) == 0x000008, "Wrong alignment on Devices_device_function_set_float__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__float_N_RInvoke_L_Nfloat_R");
static_assert(sizeof(Devices_device_function_set_float__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__float_N_RInvoke_L_Nfloat_R) == 0x000008, "Wrong size on Devices_device_function_set_float__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__float_N_RInvoke_L_Nfloat_R");
static_assert(offsetof(Devices_device_function_set_float__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__float_N_RInvoke_L_Nfloat_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_device_function_set_float__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__float_N_RInvoke_L_Nfloat_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");

struct Devices_device_function_set_logic__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__logic_N_RInvoke_L_Nlogic_R final
{
public:
	uint8                                         __verse_0xB2CDDD72_Argument : 1;
};
static_assert(alignof(Devices_device_function_set_logic__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__logic_N_RInvoke_L_Nlogic_R) == 0x000001, "Wrong alignment on Devices_device_function_set_logic__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__logic_N_RInvoke_L_Nlogic_R");
static_assert(sizeof(Devices_device_function_set_logic__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__logic_N_RInvoke_L_Nlogic_R) == 0x000001, "Wrong size on Devices_device_function_set_logic__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__logic_N_RInvoke_L_Nlogic_R");

struct Devices_device_function_set_params_by_name__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name_N_RInvoke_L_N_5b_Kchar_5dfunction__parameter__base_R final
{
public:
	TMap<FVerseStringProperty_, class UDevices_function_parameter_base*> __verse_0xB2CDDD72_Argument;
	FOptionProperty_                              RetVal;
};
static_assert(alignof(Devices_device_function_set_params_by_name__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name_N_RInvoke_L_N_5b_Kchar_5dfunction__parameter__base_R) == 0x000008, "Wrong alignment on Devices_device_function_set_params_by_name__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name_N_RInvoke_L_N_5b_Kchar_5dfunction__parameter__base_R");
static_assert(sizeof(Devices_device_function_set_params_by_name__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name_N_RInvoke_L_N_5b_Kchar_5dfunction__parameter__base_R) == 0x000058, "Wrong size on Devices_device_function_set_params_by_name__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name_N_RInvoke_L_N_5b_Kchar_5dfunction__parameter__base_R");
static_assert(offsetof(Devices_device_function_set_params_by_name__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name_N_RInvoke_L_N_5b_Kchar_5dfunction__parameter__base_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_device_function_set_params_by_name__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name_N_RInvoke_L_N_5b_Kchar_5dfunction__parameter__base_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_device_function_set_params_by_name__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name_N_RInvoke_L_N_5b_Kchar_5dfunction__parameter__base_R, RetVal) == 0x000050, "Member 'Devices_device_function_set_params_by_name__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name_N_RInvoke_L_N_5b_Kchar_5dfunction__parameter__base_R::RetVal' has a wrong offset!");

struct task_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R_Update final
{
public:
	int64                                         RetVal;
	uint64                                        _InstancingGraph_12;
};
static_assert(alignof(task_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R_Update) == 0x000008, "Wrong alignment on task_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R_Update");
static_assert(sizeof(task_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R_Update) == 0x000010, "Wrong size on task_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R_Update");
static_assert(offsetof(task_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R_Update, RetVal) == 0x000000, "Member 'task_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R_Update::RetVal' has a wrong offset!");
static_assert(offsetof(task_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R_Update, _InstancingGraph_12) == 0x000008, "Member 'task_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R_Update::_InstancingGraph_12' has a wrong offset!");

struct Devices_device_function_set_params_by_name_const__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name__const_N_RInvokeConst_L_N_5b_Kchar_5dfunction__parameter__base_R final
{
public:
	TMap<FVerseStringProperty_, class UDevices_function_parameter_base*> __verse_0xB2CDDD72_Argument;
	FOptionProperty_                              RetVal;
};
static_assert(alignof(Devices_device_function_set_params_by_name_const__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name__const_N_RInvokeConst_L_N_5b_Kchar_5dfunction__parameter__base_R) == 0x000008, "Wrong alignment on Devices_device_function_set_params_by_name_const__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name__const_N_RInvokeConst_L_N_5b_Kchar_5dfunction__parameter__base_R");
static_assert(sizeof(Devices_device_function_set_params_by_name_const__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name__const_N_RInvokeConst_L_N_5b_Kchar_5dfunction__parameter__base_R) == 0x000058, "Wrong size on Devices_device_function_set_params_by_name_const__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name__const_N_RInvokeConst_L_N_5b_Kchar_5dfunction__parameter__base_R");
static_assert(offsetof(Devices_device_function_set_params_by_name_const__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name__const_N_RInvokeConst_L_N_5b_Kchar_5dfunction__parameter__base_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_device_function_set_params_by_name_const__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name__const_N_RInvokeConst_L_N_5b_Kchar_5dfunction__parameter__base_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_device_function_set_params_by_name_const__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name__const_N_RInvokeConst_L_N_5b_Kchar_5dfunction__parameter__base_R, RetVal) == 0x000050, "Member 'Devices_device_function_set_params_by_name_const__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name__const_N_RInvokeConst_L_N_5b_Kchar_5dfunction__parameter__base_R::RetVal' has a wrong offset!");

struct Devices_device_function_set_params_by_type__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type_N_RInvoke_L_N_Kfunction__parameter__base_R final
{
public:
	TArray<class UDevices_function_parameter_base*> __verse_0xB2CDDD72_Argument;
	FOptionProperty_                              RetVal;
};
static_assert(alignof(Devices_device_function_set_params_by_type__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type_N_RInvoke_L_N_Kfunction__parameter__base_R) == 0x000008, "Wrong alignment on Devices_device_function_set_params_by_type__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type_N_RInvoke_L_N_Kfunction__parameter__base_R");
static_assert(sizeof(Devices_device_function_set_params_by_type__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type_N_RInvoke_L_N_Kfunction__parameter__base_R) == 0x000018, "Wrong size on Devices_device_function_set_params_by_type__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type_N_RInvoke_L_N_Kfunction__parameter__base_R");
static_assert(offsetof(Devices_device_function_set_params_by_type__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type_N_RInvoke_L_N_Kfunction__parameter__base_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_device_function_set_params_by_type__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type_N_RInvoke_L_N_Kfunction__parameter__base_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_device_function_set_params_by_type__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type_N_RInvoke_L_N_Kfunction__parameter__base_R, RetVal) == 0x000010, "Member 'Devices_device_function_set_params_by_type__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type_N_RInvoke_L_N_Kfunction__parameter__base_R::RetVal' has a wrong offset!");

struct task_Devices_device_event_optional_agent_Await_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_Devices_device_event_optional_agent_Await_Update) == 0x000008, "Wrong alignment on task_Devices_device_event_optional_agent_Await_Update");
static_assert(sizeof(task_Devices_device_event_optional_agent_Await_Update) == 0x000008, "Wrong size on task_Devices_device_event_optional_agent_Await_Update");
static_assert(offsetof(task_Devices_device_event_optional_agent_Await_Update, RetVal) == 0x000000, "Member 'task_Devices_device_event_optional_agent_Await_Update::RetVal' has a wrong offset!");

struct Devices_device_function_set_params_by_type_const__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type__const_N_RInvokeConst_L_N_Kfunction__parameter__base_R final
{
public:
	TArray<class UDevices_function_parameter_base*> __verse_0xB2CDDD72_Argument;
	FOptionProperty_                              RetVal;
};
static_assert(alignof(Devices_device_function_set_params_by_type_const__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type__const_N_RInvokeConst_L_N_Kfunction__parameter__base_R) == 0x000008, "Wrong alignment on Devices_device_function_set_params_by_type_const__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type__const_N_RInvokeConst_L_N_Kfunction__parameter__base_R");
static_assert(sizeof(Devices_device_function_set_params_by_type_const__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type__const_N_RInvokeConst_L_N_Kfunction__parameter__base_R) == 0x000018, "Wrong size on Devices_device_function_set_params_by_type_const__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type__const_N_RInvokeConst_L_N_Kfunction__parameter__base_R");
static_assert(offsetof(Devices_device_function_set_params_by_type_const__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type__const_N_RInvokeConst_L_N_Kfunction__parameter__base_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_device_function_set_params_by_type_const__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type__const_N_RInvokeConst_L_N_Kfunction__parameter__base_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Devices_device_function_set_params_by_type_const__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type__const_N_RInvokeConst_L_N_Kfunction__parameter__base_R, RetVal) == 0x000010, "Member 'Devices_device_function_set_params_by_type_const__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type__const_N_RInvokeConst_L_N_Kfunction__parameter__base_R::RetVal' has a wrong offset!");

struct Devices_device_function_set_vector3__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__vector3_N_RInvoke_L_Nvector3_R final
{
public:
	struct FSpatialMath_vector3                   __verse_0xB2CDDD72_Argument;
};
static_assert(alignof(Devices_device_function_set_vector3__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__vector3_N_RInvoke_L_Nvector3_R) == 0x000008, "Wrong alignment on Devices_device_function_set_vector3__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__vector3_N_RInvoke_L_Nvector3_R");
static_assert(sizeof(Devices_device_function_set_vector3__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__vector3_N_RInvoke_L_Nvector3_R) == 0x000018, "Wrong size on Devices_device_function_set_vector3__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__vector3_N_RInvoke_L_Nvector3_R");
static_assert(offsetof(Devices_device_function_set_vector3__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__vector3_N_RInvoke_L_Nvector3_R, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_device_function_set_vector3__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__vector3_N_RInvoke_L_Nvector3_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");

struct Devices_device_subscription__L_2fVerse_2eorg_2fVerse_2fcancelable_N_RCancel final
{
public:
	struct VerseDevices_0::Ftuple_L_R             __verse_0xB2CDDD72_Argument;
};
static_assert(alignof(Devices_device_subscription__L_2fVerse_2eorg_2fVerse_2fcancelable_N_RCancel) == 0x000001, "Wrong alignment on Devices_device_subscription__L_2fVerse_2eorg_2fVerse_2fcancelable_N_RCancel");
static_assert(sizeof(Devices_device_subscription__L_2fVerse_2eorg_2fVerse_2fcancelable_N_RCancel) == 0x000001, "Wrong size on Devices_device_subscription__L_2fVerse_2eorg_2fVerse_2fcancelable_N_RCancel");
static_assert(offsetof(Devices_device_subscription__L_2fVerse_2eorg_2fVerse_2fcancelable_N_RCancel, __verse_0xB2CDDD72_Argument) == 0x000000, "Member 'Devices_device_subscription__L_2fVerse_2eorg_2fVerse_2fcancelable_N_RCancel::__verse_0xB2CDDD72_Argument' has a wrong offset!");

struct task_Devices_creative_device_OnBegin_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_Devices_creative_device_OnBegin_Update) == 0x000008, "Wrong alignment on task_Devices_creative_device_OnBegin_Update");
static_assert(sizeof(task_Devices_creative_device_OnBegin_Update) == 0x000008, "Wrong size on task_Devices_creative_device_OnBegin_Update");
static_assert(offsetof(task_Devices_creative_device_OnBegin_Update, RetVal) == 0x000000, "Member 'task_Devices_creative_device_OnBegin_Update::RetVal' has a wrong offset!");

struct task_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R_Update) == 0x000008, "Wrong alignment on task_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R_Update");
static_assert(sizeof(task_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R_Update) == 0x000008, "Wrong size on task_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R_Update");
static_assert(offsetof(task_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R_Update, RetVal) == 0x000000, "Member 'task_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R_Update::RetVal' has a wrong offset!");

struct task_Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe_Update) == 0x000008, "Wrong alignment on task_Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe_Update");
static_assert(sizeof(task_Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe_Update) == 0x000008, "Wrong size on task_Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe_Update");
static_assert(offsetof(task_Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe_Update, RetVal) == 0x000000, "Member 'task_Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe_Update::RetVal' has a wrong offset!");

struct task_Devices_device_event_agent_int_Await_Update final
{
public:
	int64                                         RetVal;
};
static_assert(alignof(task_Devices_device_event_agent_int_Await_Update) == 0x000008, "Wrong alignment on task_Devices_device_event_agent_int_Await_Update");
static_assert(sizeof(task_Devices_device_event_agent_int_Await_Update) == 0x000008, "Wrong size on task_Devices_device_event_agent_int_Await_Update");
static_assert(offsetof(task_Devices_device_event_agent_int_Await_Update, RetVal) == 0x000000, "Member 'task_Devices_device_event_agent_int_Await_Update::RetVal' has a wrong offset!");

}
