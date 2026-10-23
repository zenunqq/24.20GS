#pragma once

#include "Basic.hpp"

#include "VerseNative_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "VerseDevices_0_structs.hpp"
#include "VerseDevices_classes.hpp"
#include "VerseAssets_classes.hpp"
#include "EpicGamesTemporary_0_structs.hpp"
#include "UnrealEngineExperimental_0_classes.hpp"
#include "Verse_structs.hpp"
#include "VerseNative_0_classes.hpp"
#include "EpicGamesTemporary_structs.hpp"

namespace SDK
{

class UDevices_device_function_get_base : public UObject
{
public:
	FVerseStringProperty_                         __verse_0xF8B4D924_FunctionName;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_device_function_get_base">();
	}
	static class UDevices_device_function_get_base* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_device_function_get_base>();
	}
};
static_assert(alignof(UDevices_device_function_get_base) == 0x000008, "Wrong alignment on UDevices_device_function_get_base");
static_assert(sizeof(UDevices_device_function_get_base) == 0x000038, "Wrong size on UDevices_device_function_get_base");
static_assert(offsetof(UDevices_device_function_get_base, __verse_0xF8B4D924_FunctionName) == 0x000028, "Member 'UDevices_device_function_get_base::__verse_0xF8B4D924_FunctionName' has a wrong offset!");

class UDevices_device_function_get_vector3 final : public UDevices_device_function_get_base
{
public:
	FVerseFunctionProperty_                       __verse_0xED077618__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__vector3_N_RInvoke;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	struct FSpatialMath_vector3 _L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__vector3_N_RInvoke(const struct VerseDevices_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_device_function_get_vector3">();
	}
	static class UDevices_device_function_get_vector3* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_device_function_get_vector3>();
	}
};
static_assert(alignof(UDevices_device_function_get_vector3) == 0x000008, "Wrong alignment on UDevices_device_function_get_vector3");
static_assert(sizeof(UDevices_device_function_get_vector3) == 0x000048, "Wrong size on UDevices_device_function_get_vector3");
static_assert(offsetof(UDevices_device_function_get_vector3, __verse_0xED077618__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__vector3_N_RInvoke) == 0x000038, "Member 'UDevices_device_function_get_vector3::__verse_0xED077618__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__vector3_N_RInvoke' has a wrong offset!");

class UDevices_device_event : public UObject
{
public:
	FVerseFunctionProperty_                       __verse_0xC9C8F929__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R;
	FVerseFunctionProperty_                       __verse_0x8DE7DBE5_Await;
	FVerseStringProperty_                         __verse_0x21011A72_EventName;
	uint8                                         Pad_58[0x50];

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_device_event">();
	}
	static class UDevices_device_event* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_device_event>();
	}
};
static_assert(alignof(UDevices_device_event) == 0x000008, "Wrong alignment on UDevices_device_event");
static_assert(sizeof(UDevices_device_event) == 0x0000A8, "Wrong size on UDevices_device_event");
static_assert(offsetof(UDevices_device_event, __verse_0xC9C8F929__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R) == 0x000028, "Member 'UDevices_device_event::__verse_0xC9C8F929__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R' has a wrong offset!");
static_assert(offsetof(UDevices_device_event, __verse_0x8DE7DBE5_Await) == 0x000038, "Member 'UDevices_device_event::__verse_0x8DE7DBE5_Await' has a wrong offset!");
static_assert(offsetof(UDevices_device_event, __verse_0x21011A72_EventName) == 0x000048, "Member 'UDevices_device_event::__verse_0x21011A72_EventName' has a wrong offset!");

class UDevices_device_event_agent_int final : public UDevices_device_event
{
public:
	FVerseFunctionProperty_                       __verse_0xC9C8F929__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R_Devices_device_event_agent_int;
	FVerseFunctionProperty_                       __verse_0x8DE7DBE5_Await_Devices_device_event_agent_int;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	class UObject* _L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R(FVerseFunctionProperty_ __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* Await(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct VerseDevices_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_device_event_agent_int">();
	}
	static class UDevices_device_event_agent_int* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_device_event_agent_int>();
	}
};
static_assert(alignof(UDevices_device_event_agent_int) == 0x000008, "Wrong alignment on UDevices_device_event_agent_int");
static_assert(sizeof(UDevices_device_event_agent_int) == 0x0000C8, "Wrong size on UDevices_device_event_agent_int");
static_assert(offsetof(UDevices_device_event_agent_int, __verse_0xC9C8F929__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R_Devices_device_event_agent_int) == 0x0000A8, "Member 'UDevices_device_event_agent_int::__verse_0xC9C8F929__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R_Devices_device_event_agent_int' has a wrong offset!");
static_assert(offsetof(UDevices_device_event_agent_int, __verse_0x8DE7DBE5_Await_Devices_device_event_agent_int) == 0x0000B8, "Member 'UDevices_device_event_agent_int::__verse_0x8DE7DBE5_Await_Devices_device_event_agent_int' has a wrong offset!");

#pragma pack(push, 0x1)
class alignas(0x08) UDevices_creative_object : public UVerseCreativeObject
{
public:
	FVerseFunctionProperty_                       __verse_0x6B57E438__L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform;
	uint8                                         Pad_48[0x70];

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	struct FSpatialMath_transform _L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform(const struct VerseDevices_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_creative_object">();
	}
	static class UDevices_creative_object* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_creative_object>();
	}
};
#pragma pack(pop)
static_assert(alignof(UDevices_creative_object) == 0x000008, "Wrong alignment on UDevices_creative_object");
static_assert(sizeof(UDevices_creative_object) == 0x0000B8, "Wrong size on UDevices_creative_object");
static_assert(offsetof(UDevices_creative_object, __verse_0x6B57E438__L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform) == 0x000038, "Member 'UDevices_creative_object::__verse_0x6B57E438__L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform' has a wrong offset!");

class UDevices_creative_prop final : public UDevices_creative_object
{
public:
	FVerseFunctionProperty_                       __verse_0x58E9ADAD__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportToInternal_L_Nvector3_M_Nrotation_R;
	FVerseFunctionProperty_                       __verse_0x30E66B48__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R;
	FVerseFunctionProperty_                       __verse_0x1CEDCD6B_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R;
	FVerseFunctionProperty_                       __verse_0xDB5EC38A_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R;
	FVerseFunctionProperty_                       __verse_0x1E6B9248__L_2fVerse_2eorg_2fVerse_2finvalidatable_N_RIsValid;
	FVerseFunctionProperty_                       __verse_0x5201150D__L_2fVerse_2eorg_2fVerse_2fdisposable_N_RDispose;
	uint8                                         Pad_118[0x8];

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	FOptionProperty_ _L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R(const struct VerseDevices_0::Ftuple_Lvector3_Mrotation_R& __verse_0xB2CDDD72_Argument);
	EDevices_teleport_to_result _L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportToInternal_L_Nvector3_M_Nrotation_R(const struct VerseDevices_0::Ftuple_Lvector3_Mrotation_R& __verse_0xB2CDDD72_Argument);
	void _L_2fVerse_2eorg_2fVerse_2fdisposable_N_RDispose(const struct VerseDevices_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fVerse_2eorg_2fVerse_2finvalidatable_N_RIsValid(const struct VerseDevices_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct Ftuple_Lvector3_Mrotation_Mfloat_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct Ftuple_Lvector3_Mrotation_Mfloat_R& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_creative_prop">();
	}
	static class UDevices_creative_prop* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_creative_prop>();
	}
};
static_assert(alignof(UDevices_creative_prop) == 0x000008, "Wrong alignment on UDevices_creative_prop");
static_assert(sizeof(UDevices_creative_prop) == 0x000120, "Wrong size on UDevices_creative_prop");
static_assert(offsetof(UDevices_creative_prop, __verse_0x58E9ADAD__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportToInternal_L_Nvector3_M_Nrotation_R) == 0x0000B8, "Member 'UDevices_creative_prop::__verse_0x58E9ADAD__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportToInternal_L_Nvector3_M_Nrotation_R' has a wrong offset!");
static_assert(offsetof(UDevices_creative_prop, __verse_0x30E66B48__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R) == 0x0000C8, "Member 'UDevices_creative_prop::__verse_0x30E66B48__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R' has a wrong offset!");
static_assert(offsetof(UDevices_creative_prop, __verse_0x1CEDCD6B_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R) == 0x0000D8, "Member 'UDevices_creative_prop::__verse_0x1CEDCD6B_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R' has a wrong offset!");
static_assert(offsetof(UDevices_creative_prop, __verse_0xDB5EC38A_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R) == 0x0000E8, "Member 'UDevices_creative_prop::__verse_0xDB5EC38A_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R' has a wrong offset!");
static_assert(offsetof(UDevices_creative_prop, __verse_0x1E6B9248__L_2fVerse_2eorg_2fVerse_2finvalidatable_N_RIsValid) == 0x0000F8, "Member 'UDevices_creative_prop::__verse_0x1E6B9248__L_2fVerse_2eorg_2fVerse_2finvalidatable_N_RIsValid' has a wrong offset!");
static_assert(offsetof(UDevices_creative_prop, __verse_0x5201150D__L_2fVerse_2eorg_2fVerse_2fdisposable_N_RDispose) == 0x000108, "Member 'UDevices_creative_prop::__verse_0x5201150D__L_2fVerse_2eorg_2fVerse_2fdisposable_N_RDispose' has a wrong offset!");

class UDevices final : public UObject
{
public:
	class UDevices_creative_prop_asset*           __verse_0x88F30926_DefaultCreativePropAsset;

public:
	static class UClass* _L_2fFortnite_2ecom_2fDevices_N_Rdevice__event(const struct VerseDevices_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	static class UClass* _L_2fFortnite_2ecom_2fDevices_N_Rdevice__event_L_Nany_R(class UClass* __verse_0xB2CDDD72_Argument);
	static TArray<class UObject*> _L_2fFortnite_2ecom_2fDevices_N_RGetCreativeObjectsWithTag_L_Ntag_R(class UTags_tag* __verse_0xB2CDDD72_Argument);
	static TArray<class UObject*> _L_2fFortnite_2ecom_2fDevices_N_RGetCreativeObjectsWithTags_L_Ntag__search__criteria_R(class UTags_tag_search_criteria* __verse_0xB2CDDD72_Argument);
	static class UObject* _L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eGetPlayspace_U_L_Ncreative__object__interface_M_Ntuple_L_R_R(const struct Ftuple_Lcreative__object__interface_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	static class UObject* _L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eGetTags_U_L_Ncreative__object__interface_M_Ntuple_L_R_R(const struct Ftuple_Lcreative__object__interface_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	static struct Ftuple_L_Qcreative__prop_Mspawn__prop__result_R _L_2fFortnite_2ecom_2fDevices_N_RSpawnProp_L_Ncreative__prop__asset_M_Nvector3_M_Nrotation_R(const struct Ftuple_Lcreative__prop__asset_Mvector3_Mrotation_R& __verse_0xB2CDDD72_Argument);
	static FVerseStringProperty_ _L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R(EDevices_move_to_internal_result __verse_0xB2CDDD72_Argument);

	void _InitCDO();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices">();
	}
	static class UDevices* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices>();
	}
};
static_assert(alignof(UDevices) == 0x000008, "Wrong alignment on UDevices");
static_assert(sizeof(UDevices) == 0x000030, "Wrong size on UDevices");
static_assert(offsetof(UDevices, __verse_0x88F30926_DefaultCreativePropAsset) == 0x000028, "Member 'UDevices::__verse_0x88F30926_DefaultCreativePropAsset' has a wrong offset!");

class VerseDevices_0::U_SolarisSignatureFunctionOuter final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseClass VerseDevices.$SolarisSignatureFunctionOuter", true>();
	}
	static class VerseDevices_0::U_SolarisSignatureFunctionOuter* GetDefaultObj()
	{
		return GetDefaultObjImpl<VerseDevices_0::U_SolarisSignatureFunctionOuter>();
	}
};
static_assert(alignof(VerseDevices_0::U_SolarisSignatureFunctionOuter) == 0x000008, "Wrong alignment on VerseDevices_0::U_SolarisSignatureFunctionOuter");
static_assert(sizeof(VerseDevices_0::U_SolarisSignatureFunctionOuter) == 0x000028, "Wrong size on VerseDevices_0::U_SolarisSignatureFunctionOuter");

class UDevices_device_function_set_base : public UObject
{
public:
	FVerseStringProperty_                         __verse_0xF8B4D924_FunctionName;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_device_function_set_base">();
	}
	static class UDevices_device_function_set_base* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_device_function_set_base>();
	}
};
static_assert(alignof(UDevices_device_function_set_base) == 0x000008, "Wrong alignment on UDevices_device_function_set_base");
static_assert(sizeof(UDevices_device_function_set_base) == 0x000038, "Wrong size on UDevices_device_function_set_base");
static_assert(offsetof(UDevices_device_function_set_base, __verse_0xF8B4D924_FunctionName) == 0x000028, "Member 'UDevices_device_function_set_base::__verse_0xF8B4D924_FunctionName' has a wrong offset!");

class UDevices_device_function_set_string final : public UDevices_device_function_set_base
{
public:
	FVerseFunctionProperty_                       __verse_0x23330E3C__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__string_N_RInvoke_L_N_Kchar_R;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	void _L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__string_N_RInvoke_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_device_function_set_string">();
	}
	static class UDevices_device_function_set_string* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_device_function_set_string>();
	}
};
static_assert(alignof(UDevices_device_function_set_string) == 0x000008, "Wrong alignment on UDevices_device_function_set_string");
static_assert(sizeof(UDevices_device_function_set_string) == 0x000048, "Wrong size on UDevices_device_function_set_string");
static_assert(offsetof(UDevices_device_function_set_string, __verse_0x23330E3C__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__string_N_RInvoke_L_N_Kchar_R) == 0x000038, "Member 'UDevices_device_function_set_string::__verse_0x23330E3C__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__string_N_RInvoke_L_N_Kchar_R' has a wrong offset!");

class UDevices_creative_device_asset final : public UAssets_asset
{
public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_creative_device_asset">();
	}
	static class UDevices_creative_device_asset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_creative_device_asset>();
	}
};
static_assert(alignof(UDevices_creative_device_asset) == 0x000008, "Wrong alignment on UDevices_creative_device_asset");
static_assert(sizeof(UDevices_creative_device_asset) == 0x0000D8, "Wrong size on UDevices_creative_device_asset");

class UDevices_creative_device final : public UVerseCreativeDevice
{
public:
	FVerseFunctionProperty_                       __verse_0x1F792AAA_OnBegin;
	FVerseFunctionProperty_                       __verse_0x3DFFEDE4__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnEnd;
	FVerseFunctionProperty_                       __verse_0xEAC73ECC__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnBegin__Internal;
	FVerseFunctionProperty_                       __verse_0x6B57E438__L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	void _L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnBegin__Internal(const struct VerseDevices_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnEnd(const struct VerseDevices_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	struct FSpatialMath_transform _L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform(const struct VerseDevices_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* OnBegin(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct VerseDevices_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_creative_device">();
	}
	static class UDevices_creative_device* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_creative_device>();
	}
};
static_assert(alignof(UDevices_creative_device) == 0x000008, "Wrong alignment on UDevices_creative_device");
static_assert(sizeof(UDevices_creative_device) == 0x000070, "Wrong size on UDevices_creative_device");
static_assert(offsetof(UDevices_creative_device, __verse_0x1F792AAA_OnBegin) == 0x000030, "Member 'UDevices_creative_device::__verse_0x1F792AAA_OnBegin' has a wrong offset!");
static_assert(offsetof(UDevices_creative_device, __verse_0x3DFFEDE4__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnEnd) == 0x000040, "Member 'UDevices_creative_device::__verse_0x3DFFEDE4__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnEnd' has a wrong offset!");
static_assert(offsetof(UDevices_creative_device, __verse_0xEAC73ECC__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnBegin__Internal) == 0x000050, "Member 'UDevices_creative_device::__verse_0xEAC73ECC__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnBegin__Internal' has a wrong offset!");
static_assert(offsetof(UDevices_creative_device, __verse_0x6B57E438__L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform) == 0x000060, "Member 'UDevices_creative_device::__verse_0x6B57E438__L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform' has a wrong offset!");

class UDevices_creative_device_base final : public UDevices_creative_object
{
public:
	uint8                                         Pad_B8[0x8];

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_creative_device_base">();
	}
	static class UDevices_creative_device_base* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_creative_device_base>();
	}
};
static_assert(alignof(UDevices_creative_device_base) == 0x000008, "Wrong alignment on UDevices_creative_device_base");
static_assert(sizeof(UDevices_creative_device_base) == 0x0000C0, "Wrong size on UDevices_creative_device_base");

class UDevices_function_parameter_base : public UObject
{
public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_function_parameter_base">();
	}
	static class UDevices_function_parameter_base* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_function_parameter_base>();
	}
};
static_assert(alignof(UDevices_function_parameter_base) == 0x000008, "Wrong alignment on UDevices_function_parameter_base");
static_assert(sizeof(UDevices_function_parameter_base) == 0x000028, "Wrong size on UDevices_function_parameter_base");

class UDevices_function_parameter_float final : public UDevices_function_parameter_base
{
public:
	double                                        __verse_0x31A8F10C_Value;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_function_parameter_float">();
	}
	static class UDevices_function_parameter_float* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_function_parameter_float>();
	}
};
static_assert(alignof(UDevices_function_parameter_float) == 0x000008, "Wrong alignment on UDevices_function_parameter_float");
static_assert(sizeof(UDevices_function_parameter_float) == 0x000030, "Wrong size on UDevices_function_parameter_float");
static_assert(offsetof(UDevices_function_parameter_float, __verse_0x31A8F10C_Value) == 0x000028, "Member 'UDevices_function_parameter_float::__verse_0x31A8F10C_Value' has a wrong offset!");

class UDevices_creative_object_interface final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_creative_object_interface">();
	}
	static class UDevices_creative_object_interface* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_creative_object_interface>();
	}
};
static_assert(alignof(UDevices_creative_object_interface) == 0x000008, "Wrong alignment on UDevices_creative_object_interface");
static_assert(sizeof(UDevices_creative_object_interface) == 0x000028, "Wrong size on UDevices_creative_object_interface");

class UDevices_device_event_void final : public UDevices_device_event
{
public:
	FVerseFunctionProperty_                       __verse_0xC9C8F929__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R_Devices_device_event_void;
	FVerseFunctionProperty_                       __verse_0x8DE7DBE5_Await_Devices_device_event_void;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	class UObject* _L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R(FVerseFunctionProperty_ __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* Await(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct VerseDevices_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_device_event_void">();
	}
	static class UDevices_device_event_void* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_device_event_void>();
	}
};
static_assert(alignof(UDevices_device_event_void) == 0x000008, "Wrong alignment on UDevices_device_event_void");
static_assert(sizeof(UDevices_device_event_void) == 0x0000C8, "Wrong size on UDevices_device_event_void");
static_assert(offsetof(UDevices_device_event_void, __verse_0xC9C8F929__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R_Devices_device_event_void) == 0x0000A8, "Member 'UDevices_device_event_void::__verse_0xC9C8F929__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R_Devices_device_event_void' has a wrong offset!");
static_assert(offsetof(UDevices_device_event_void, __verse_0x8DE7DBE5_Await_Devices_device_event_void) == 0x0000B8, "Member 'UDevices_device_event_void::__verse_0x8DE7DBE5_Await_Devices_device_event_void' has a wrong offset!");

class UDevices_creative_prop_asset final : public UAssets_asset
{
public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_creative_prop_asset">();
	}
	static class UDevices_creative_prop_asset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_creative_prop_asset>();
	}
};
static_assert(alignof(UDevices_creative_prop_asset) == 0x000008, "Wrong alignment on UDevices_creative_prop_asset");
static_assert(sizeof(UDevices_creative_prop_asset) == 0x0000D8, "Wrong size on UDevices_creative_prop_asset");

class UDevices_device_event_optional_agent final : public UDevices_device_event
{
public:
	FVerseFunctionProperty_                       __verse_0xC9C8F929__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R_Devices_device_event_optional_agent;
	FVerseFunctionProperty_                       __verse_0x8DE7DBE5_Await_Devices_device_event_optional_agent;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	class UObject* _L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R(FVerseFunctionProperty_ __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* Await(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct VerseDevices_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_device_event_optional_agent">();
	}
	static class UDevices_device_event_optional_agent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_device_event_optional_agent>();
	}
};
static_assert(alignof(UDevices_device_event_optional_agent) == 0x000008, "Wrong alignment on UDevices_device_event_optional_agent");
static_assert(sizeof(UDevices_device_event_optional_agent) == 0x0000C8, "Wrong size on UDevices_device_event_optional_agent");
static_assert(offsetof(UDevices_device_event_optional_agent, __verse_0xC9C8F929__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R_Devices_device_event_optional_agent) == 0x0000A8, "Member 'UDevices_device_event_optional_agent::__verse_0xC9C8F929__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R_Devices_device_event_optional_agent' has a wrong offset!");
static_assert(offsetof(UDevices_device_event_optional_agent, __verse_0x8DE7DBE5_Await_Devices_device_event_optional_agent) == 0x0000B8, "Member 'UDevices_device_event_optional_agent::__verse_0x8DE7DBE5_Await_Devices_device_event_optional_agent' has a wrong offset!");

class UDevices_creative_prop_debug_log final : public UDiagnostics_log_channel
{
public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_creative_prop_debug_log">();
	}
	static class UDevices_creative_prop_debug_log* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_creative_prop_debug_log>();
	}
};
static_assert(alignof(UDevices_creative_prop_debug_log) == 0x000008, "Wrong alignment on UDevices_creative_prop_debug_log");
static_assert(sizeof(UDevices_creative_prop_debug_log) == 0x000028, "Wrong size on UDevices_creative_prop_debug_log");

class UDevices_CreativeAnimation final : public UObject
{
public:
	static struct Ftuple_L_Qanimation__controller_Mget__animation__controller__result_R _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_RGetAnimationController_L_Ncreative__prop_R(class UDevices_creative_prop* __verse_0xB2CDDD72_Argument);
	static FOptionProperty_ _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_R(const struct Ftuple_Lcreative__prop_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	static struct FDevices_CreativeAnimation_cubic_bezier_parameters Devices_CreativeAnimation_cubic_bezier_parameters_Factory();
	static struct FDevices_CreativeAnimation_keyframe_delta Devices_CreativeAnimation_keyframe_delta_Factory();

	void _InitCDO();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_CreativeAnimation">();
	}
	static class UDevices_CreativeAnimation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_CreativeAnimation>();
	}
};
static_assert(alignof(UDevices_CreativeAnimation) == 0x000008, "Wrong alignment on UDevices_CreativeAnimation");
static_assert(sizeof(UDevices_CreativeAnimation) == 0x000028, "Wrong size on UDevices_CreativeAnimation");

class UDevices_device_function_set_int final : public UDevices_device_function_set_base
{
public:
	FVerseFunctionProperty_                       __verse_0x53CE1022__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__int_N_RInvoke_L_Nint_R;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	void _L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__int_N_RInvoke_L_Nint_R(int64 __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_device_function_set_int">();
	}
	static class UDevices_device_function_set_int* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_device_function_set_int>();
	}
};
static_assert(alignof(UDevices_device_function_set_int) == 0x000008, "Wrong alignment on UDevices_device_function_set_int");
static_assert(sizeof(UDevices_device_function_set_int) == 0x000048, "Wrong size on UDevices_device_function_set_int");
static_assert(offsetof(UDevices_device_function_set_int, __verse_0x53CE1022__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__int_N_RInvoke_L_Nint_R) == 0x000038, "Member 'UDevices_device_function_set_int::__verse_0x53CE1022__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__int_N_RInvoke_L_Nint_R' has a wrong offset!");

class UDevices_device_function final : public UObject
{
public:
	FVerseFunctionProperty_                       __verse_0x72D2D0E5__L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke;
	FVerseFunctionProperty_                       __verse_0x40164272__L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke_L_Nagent_R;
	FVerseStringProperty_                         __verse_0xF8B4D924_FunctionName;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	void _L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke(const struct VerseDevices_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke_L_Nagent_R(class USimulation_agent* __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_device_function">();
	}
	static class UDevices_device_function* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_device_function>();
	}
};
static_assert(alignof(UDevices_device_function) == 0x000008, "Wrong alignment on UDevices_device_function");
static_assert(sizeof(UDevices_device_function) == 0x000058, "Wrong size on UDevices_device_function");
static_assert(offsetof(UDevices_device_function, __verse_0x72D2D0E5__L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke) == 0x000028, "Member 'UDevices_device_function::__verse_0x72D2D0E5__L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke' has a wrong offset!");
static_assert(offsetof(UDevices_device_function, __verse_0x40164272__L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke_L_Nagent_R) == 0x000038, "Member 'UDevices_device_function::__verse_0x40164272__L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke_L_Nagent_R' has a wrong offset!");
static_assert(offsetof(UDevices_device_function, __verse_0xF8B4D924_FunctionName) == 0x000048, "Member 'UDevices_device_function::__verse_0xF8B4D924_FunctionName' has a wrong offset!");

class UDevices_CreativeAnimation_animation_controller final : public UObject
{
public:
	FVerseFunctionProperty_                       __verse_0x0E85E6FA__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R;
	FVerseFunctionProperty_                       __verse_0x053E8BA6_AwaitNextKeyframe;
	FVerseFunctionProperty_                       __verse_0x5D81E59F__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlayInternal;
	FVerseFunctionProperty_                       __verse_0x6B727DF3__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlay;
	FVerseFunctionProperty_                       __verse_0x1A1EC93E__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPauseInternal;
	FVerseFunctionProperty_                       __verse_0x1E385FBF__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPause;
	FVerseFunctionProperty_                       __verse_0xDF78CD56__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStopInternal;
	FVerseFunctionProperty_                       __verse_0x230023B8__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStop;
	FVerseFunctionProperty_                       __verse_0x4A2A0F34__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RGetState;
	FVerseFunctionProperty_                       __verse_0xDCA25E7B__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RIsValid;
	FVerseFunctionProperty_                       __verse_0x2DAABA8B__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimationInternal_L_N_Kkeyframe__delta_M_Nanimation__mode_R;
	FVerseFunctionProperty_                       __verse_0x30521B48__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R;
	FVerseFunctionProperty_                       __verse_0x25C48BD2__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R;
	class UDiagnostics_log*                       __verse_0x63A8D5FA_DebugLog;
	class UObject*                                __verse_0x1A3A2D49_KeyframeReachedEvent;
	class UObject*                                __verse_0xEC8DE8C6_MovementCompleteEvent;
	class UObject*                                __verse_0xDE60FD58_StateChangedEvent;
	uint8                                         Pad_118[0x48];

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	EDevices_CreativeAnimation_animation_controller_state _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RGetState(const struct VerseDevices_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RIsValid(const struct VerseDevices_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R(const struct Ftuple_L_Kchar_Mplaystoppause__result_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPause(const struct VerseDevices_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	EDevices_CreativeAnimation_playstoppause_result _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPauseInternal(const struct VerseDevices_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlay(const struct VerseDevices_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	EDevices_CreativeAnimation_playstoppause_result _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlayInternal(const struct VerseDevices_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R(const struct Ftuple_L_Kkeyframe__delta_M_QMode_Nanimation__mode_R& __verse_0xB2CDDD72_Argument);
	EDevices_CreativeAnimation_set_animation_result _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimationInternal_L_N_Kkeyframe__delta_M_Nanimation__mode_R(const struct Ftuple_L_Kkeyframe__delta_M_QAnimationMode_Nanimation__mode_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStop(const struct VerseDevices_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	EDevices_CreativeAnimation_playstoppause_result _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStopInternal(const struct VerseDevices_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument);
	FVerseStringProperty_ _L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R(EDevices_CreativeAnimation_set_animation_result __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* AwaitNextKeyframe(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct VerseDevices_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_CreativeAnimation_animation_controller">();
	}
	static class UDevices_CreativeAnimation_animation_controller* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_CreativeAnimation_animation_controller>();
	}
};
static_assert(alignof(UDevices_CreativeAnimation_animation_controller) == 0x000008, "Wrong alignment on UDevices_CreativeAnimation_animation_controller");
static_assert(sizeof(UDevices_CreativeAnimation_animation_controller) == 0x000160, "Wrong size on UDevices_CreativeAnimation_animation_controller");
static_assert(offsetof(UDevices_CreativeAnimation_animation_controller, __verse_0x0E85E6FA__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R) == 0x000028, "Member 'UDevices_CreativeAnimation_animation_controller::__verse_0x0E85E6FA__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R' has a wrong offset!");
static_assert(offsetof(UDevices_CreativeAnimation_animation_controller, __verse_0x053E8BA6_AwaitNextKeyframe) == 0x000038, "Member 'UDevices_CreativeAnimation_animation_controller::__verse_0x053E8BA6_AwaitNextKeyframe' has a wrong offset!");
static_assert(offsetof(UDevices_CreativeAnimation_animation_controller, __verse_0x5D81E59F__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlayInternal) == 0x000048, "Member 'UDevices_CreativeAnimation_animation_controller::__verse_0x5D81E59F__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlayInternal' has a wrong offset!");
static_assert(offsetof(UDevices_CreativeAnimation_animation_controller, __verse_0x6B727DF3__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlay) == 0x000058, "Member 'UDevices_CreativeAnimation_animation_controller::__verse_0x6B727DF3__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlay' has a wrong offset!");
static_assert(offsetof(UDevices_CreativeAnimation_animation_controller, __verse_0x1A1EC93E__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPauseInternal) == 0x000068, "Member 'UDevices_CreativeAnimation_animation_controller::__verse_0x1A1EC93E__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPauseInternal' has a wrong offset!");
static_assert(offsetof(UDevices_CreativeAnimation_animation_controller, __verse_0x1E385FBF__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPause) == 0x000078, "Member 'UDevices_CreativeAnimation_animation_controller::__verse_0x1E385FBF__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPause' has a wrong offset!");
static_assert(offsetof(UDevices_CreativeAnimation_animation_controller, __verse_0xDF78CD56__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStopInternal) == 0x000088, "Member 'UDevices_CreativeAnimation_animation_controller::__verse_0xDF78CD56__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStopInternal' has a wrong offset!");
static_assert(offsetof(UDevices_CreativeAnimation_animation_controller, __verse_0x230023B8__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStop) == 0x000098, "Member 'UDevices_CreativeAnimation_animation_controller::__verse_0x230023B8__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStop' has a wrong offset!");
static_assert(offsetof(UDevices_CreativeAnimation_animation_controller, __verse_0x4A2A0F34__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RGetState) == 0x0000A8, "Member 'UDevices_CreativeAnimation_animation_controller::__verse_0x4A2A0F34__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RGetState' has a wrong offset!");
static_assert(offsetof(UDevices_CreativeAnimation_animation_controller, __verse_0xDCA25E7B__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RIsValid) == 0x0000B8, "Member 'UDevices_CreativeAnimation_animation_controller::__verse_0xDCA25E7B__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RIsValid' has a wrong offset!");
static_assert(offsetof(UDevices_CreativeAnimation_animation_controller, __verse_0x2DAABA8B__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimationInternal_L_N_Kkeyframe__delta_M_Nanimation__mode_R) == 0x0000C8, "Member 'UDevices_CreativeAnimation_animation_controller::__verse_0x2DAABA8B__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimationInternal_L_N_Kkeyframe__delta_M_Nanimation__mode_R' has a wrong offset!");
static_assert(offsetof(UDevices_CreativeAnimation_animation_controller, __verse_0x30521B48__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R) == 0x0000D8, "Member 'UDevices_CreativeAnimation_animation_controller::__verse_0x30521B48__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R' has a wrong offset!");
static_assert(offsetof(UDevices_CreativeAnimation_animation_controller, __verse_0x25C48BD2__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R) == 0x0000E8, "Member 'UDevices_CreativeAnimation_animation_controller::__verse_0x25C48BD2__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_Nanimation__mode_R' has a wrong offset!");
static_assert(offsetof(UDevices_CreativeAnimation_animation_controller, __verse_0x63A8D5FA_DebugLog) == 0x0000F8, "Member 'UDevices_CreativeAnimation_animation_controller::__verse_0x63A8D5FA_DebugLog' has a wrong offset!");
static_assert(offsetof(UDevices_CreativeAnimation_animation_controller, __verse_0x1A3A2D49_KeyframeReachedEvent) == 0x000100, "Member 'UDevices_CreativeAnimation_animation_controller::__verse_0x1A3A2D49_KeyframeReachedEvent' has a wrong offset!");
static_assert(offsetof(UDevices_CreativeAnimation_animation_controller, __verse_0xEC8DE8C6_MovementCompleteEvent) == 0x000108, "Member 'UDevices_CreativeAnimation_animation_controller::__verse_0xEC8DE8C6_MovementCompleteEvent' has a wrong offset!");
static_assert(offsetof(UDevices_CreativeAnimation_animation_controller, __verse_0xDE60FD58_StateChangedEvent) == 0x000110, "Member 'UDevices_CreativeAnimation_animation_controller::__verse_0xDE60FD58_StateChangedEvent' has a wrong offset!");

class Utask_Devices_device_event_optional_agent_int_Await final : public UConcurrency_task
{
public:
	class UDevices_device_event_optional_agent_int* _Self;
	struct VerseDevices_0::Ftuple_L_R             __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_151[0x7];
	FVerseDynamicProperty_                        _RetVal;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_Devices_device_event_optional_agent_int$Await">();
	}
	static class Utask_Devices_device_event_optional_agent_int_Await* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_Devices_device_event_optional_agent_int_Await>();
	}
};
static_assert(alignof(Utask_Devices_device_event_optional_agent_int_Await) == 0x000008, "Wrong alignment on Utask_Devices_device_event_optional_agent_int_Await");
static_assert(sizeof(Utask_Devices_device_event_optional_agent_int_Await) == 0x000168, "Wrong size on Utask_Devices_device_event_optional_agent_int_Await");
static_assert(offsetof(Utask_Devices_device_event_optional_agent_int_Await, _Self) == 0x000148, "Member 'Utask_Devices_device_event_optional_agent_int_Await::_Self' has a wrong offset!");
static_assert(offsetof(Utask_Devices_device_event_optional_agent_int_Await, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_Devices_device_event_optional_agent_int_Await::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_Devices_device_event_optional_agent_int_Await, _RetVal) == 0x000158, "Member 'Utask_Devices_device_event_optional_agent_int_Await::_RetVal' has a wrong offset!");

class UDevices_CreativeAnimation_animation_controller_debug_log final : public UDiagnostics_log_channel
{
public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_CreativeAnimation_animation_controller_debug_log">();
	}
	static class UDevices_CreativeAnimation_animation_controller_debug_log* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_CreativeAnimation_animation_controller_debug_log>();
	}
};
static_assert(alignof(UDevices_CreativeAnimation_animation_controller_debug_log) == 0x000008, "Wrong alignment on UDevices_CreativeAnimation_animation_controller_debug_log");
static_assert(sizeof(UDevices_CreativeAnimation_animation_controller_debug_log) == 0x000028, "Wrong size on UDevices_CreativeAnimation_animation_controller_debug_log");

class UDevices_device_function_get_string final : public UDevices_device_function_get_base
{
public:
	FVerseFunctionProperty_                       __verse_0xBD53BC40__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__string_N_RInvoke;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	FVerseStringProperty_ _L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__string_N_RInvoke(const struct VerseDevices_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_device_function_get_string">();
	}
	static class UDevices_device_function_get_string* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_device_function_get_string>();
	}
};
static_assert(alignof(UDevices_device_function_get_string) == 0x000008, "Wrong alignment on UDevices_device_function_get_string");
static_assert(sizeof(UDevices_device_function_get_string) == 0x000048, "Wrong size on UDevices_device_function_get_string");
static_assert(offsetof(UDevices_device_function_get_string, __verse_0xBD53BC40__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__string_N_RInvoke) == 0x000038, "Member 'UDevices_device_function_get_string::__verse_0xBD53BC40__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__string_N_RInvoke' has a wrong offset!");

class UDevices_CreativeAnimation_InterpolationTypes final : public UObject
{
public:
	struct FDevices_CreativeAnimation_cubic_bezier_parameters __verse_0x9B27EB9D_Linear;
	struct FDevices_CreativeAnimation_cubic_bezier_parameters __verse_0x9CD14C25_Ease;
	struct FDevices_CreativeAnimation_cubic_bezier_parameters __verse_0xB345298C_EaseIn;
	struct FDevices_CreativeAnimation_cubic_bezier_parameters __verse_0xF59E2BD2_EaseOut;
	struct FDevices_CreativeAnimation_cubic_bezier_parameters __verse_0x29A389AE_EaseInOut;

public:
	void _InitCDO();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_CreativeAnimation_InterpolationTypes">();
	}
	static class UDevices_CreativeAnimation_InterpolationTypes* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_CreativeAnimation_InterpolationTypes>();
	}
};
static_assert(alignof(UDevices_CreativeAnimation_InterpolationTypes) == 0x000008, "Wrong alignment on UDevices_CreativeAnimation_InterpolationTypes");
static_assert(sizeof(UDevices_CreativeAnimation_InterpolationTypes) == 0x0000C8, "Wrong size on UDevices_CreativeAnimation_InterpolationTypes");
static_assert(offsetof(UDevices_CreativeAnimation_InterpolationTypes, __verse_0x9B27EB9D_Linear) == 0x000028, "Member 'UDevices_CreativeAnimation_InterpolationTypes::__verse_0x9B27EB9D_Linear' has a wrong offset!");
static_assert(offsetof(UDevices_CreativeAnimation_InterpolationTypes, __verse_0x9CD14C25_Ease) == 0x000048, "Member 'UDevices_CreativeAnimation_InterpolationTypes::__verse_0x9CD14C25_Ease' has a wrong offset!");
static_assert(offsetof(UDevices_CreativeAnimation_InterpolationTypes, __verse_0xB345298C_EaseIn) == 0x000068, "Member 'UDevices_CreativeAnimation_InterpolationTypes::__verse_0xB345298C_EaseIn' has a wrong offset!");
static_assert(offsetof(UDevices_CreativeAnimation_InterpolationTypes, __verse_0xF59E2BD2_EaseOut) == 0x000088, "Member 'UDevices_CreativeAnimation_InterpolationTypes::__verse_0xF59E2BD2_EaseOut' has a wrong offset!");
static_assert(offsetof(UDevices_CreativeAnimation_InterpolationTypes, __verse_0x29A389AE_EaseInOut) == 0x0000A8, "Member 'UDevices_CreativeAnimation_InterpolationTypes::__verse_0x29A389AE_EaseInOut' has a wrong offset!");

class Utask_Devices_device_event_void_Await final : public UConcurrency_task
{
public:
	class UDevices_device_event_void*             _Self;
	struct VerseDevices_0::Ftuple_L_R             __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_151[0x7];
	FVerseDynamicProperty_                        _RetVal;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_Devices_device_event_void$Await">();
	}
	static class Utask_Devices_device_event_void_Await* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_Devices_device_event_void_Await>();
	}
};
static_assert(alignof(Utask_Devices_device_event_void_Await) == 0x000008, "Wrong alignment on Utask_Devices_device_event_void_Await");
static_assert(sizeof(Utask_Devices_device_event_void_Await) == 0x000168, "Wrong size on Utask_Devices_device_event_void_Await");
static_assert(offsetof(Utask_Devices_device_event_void_Await, _Self) == 0x000148, "Member 'Utask_Devices_device_event_void_Await::_Self' has a wrong offset!");
static_assert(offsetof(Utask_Devices_device_event_void_Await, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_Devices_device_event_void_Await::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_Devices_device_event_void_Await, _RetVal) == 0x000158, "Member 'Utask_Devices_device_event_void_Await::_RetVal' has a wrong offset!");

class UDevices_device_event_agent final : public UDevices_device_event
{
public:
	FVerseFunctionProperty_                       __verse_0xC9C8F929__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R_Devices_device_event_agent;
	FVerseFunctionProperty_                       __verse_0x8DE7DBE5_Await_Devices_device_event_agent;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	class UObject* _L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R(FVerseFunctionProperty_ __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* Await(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct VerseDevices_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_device_event_agent">();
	}
	static class UDevices_device_event_agent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_device_event_agent>();
	}
};
static_assert(alignof(UDevices_device_event_agent) == 0x000008, "Wrong alignment on UDevices_device_event_agent");
static_assert(sizeof(UDevices_device_event_agent) == 0x0000C8, "Wrong size on UDevices_device_event_agent");
static_assert(offsetof(UDevices_device_event_agent, __verse_0xC9C8F929__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R_Devices_device_event_agent) == 0x0000A8, "Member 'UDevices_device_event_agent::__verse_0xC9C8F929__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R_Devices_device_event_agent' has a wrong offset!");
static_assert(offsetof(UDevices_device_event_agent, __verse_0x8DE7DBE5_Await_Devices_device_event_agent) == 0x0000B8, "Member 'UDevices_device_event_agent::__verse_0x8DE7DBE5_Await_Devices_device_event_agent' has a wrong offset!");

class UDevices_device_event_optional_agent_int final : public UDevices_device_event
{
public:
	FVerseFunctionProperty_                       __verse_0xC9C8F929__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R_Devices_device_event_optional_agent_int;
	FVerseFunctionProperty_                       __verse_0x8DE7DBE5_Await_Devices_device_event_optional_agent_int;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	class UObject* _L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R(FVerseFunctionProperty_ __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* Await(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct VerseDevices_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_device_event_optional_agent_int">();
	}
	static class UDevices_device_event_optional_agent_int* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_device_event_optional_agent_int>();
	}
};
static_assert(alignof(UDevices_device_event_optional_agent_int) == 0x000008, "Wrong alignment on UDevices_device_event_optional_agent_int");
static_assert(sizeof(UDevices_device_event_optional_agent_int) == 0x0000C8, "Wrong size on UDevices_device_event_optional_agent_int");
static_assert(offsetof(UDevices_device_event_optional_agent_int, __verse_0xC9C8F929__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R_Devices_device_event_optional_agent_int) == 0x0000A8, "Member 'UDevices_device_event_optional_agent_int::__verse_0xC9C8F929__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R_Devices_device_event_optional_agent_int' has a wrong offset!");
static_assert(offsetof(UDevices_device_event_optional_agent_int, __verse_0x8DE7DBE5_Await_Devices_device_event_optional_agent_int) == 0x0000B8, "Member 'UDevices_device_event_optional_agent_int::__verse_0x8DE7DBE5_Await_Devices_device_event_optional_agent_int' has a wrong offset!");

class UDevices_device_function_set_multi_parameter_base : public UDevices_device_function_set_base
{
public:
	FOptionProperty_                              __verse_0xBF5FC553_ReturnType;
	uint8                                         Pad_41[0x7];

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_device_function_set_multi_parameter_base">();
	}
	static class UDevices_device_function_set_multi_parameter_base* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_device_function_set_multi_parameter_base>();
	}
};
static_assert(alignof(UDevices_device_function_set_multi_parameter_base) == 0x000008, "Wrong alignment on UDevices_device_function_set_multi_parameter_base");
static_assert(sizeof(UDevices_device_function_set_multi_parameter_base) == 0x000048, "Wrong size on UDevices_device_function_set_multi_parameter_base");
static_assert(offsetof(UDevices_device_function_set_multi_parameter_base, __verse_0xBF5FC553_ReturnType) == 0x000038, "Member 'UDevices_device_function_set_multi_parameter_base::__verse_0xBF5FC553_ReturnType' has a wrong offset!");

class UDevices_device_function_get_agent final : public UDevices_device_function_get_base
{
public:
	FVerseFunctionProperty_                       __verse_0x2376EEDD__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__agent_N_RInvoke;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	FOptionProperty_ _L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__agent_N_RInvoke(const struct VerseDevices_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_device_function_get_agent">();
	}
	static class UDevices_device_function_get_agent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_device_function_get_agent>();
	}
};
static_assert(alignof(UDevices_device_function_get_agent) == 0x000008, "Wrong alignment on UDevices_device_function_get_agent");
static_assert(sizeof(UDevices_device_function_get_agent) == 0x000048, "Wrong size on UDevices_device_function_get_agent");
static_assert(offsetof(UDevices_device_function_get_agent, __verse_0x2376EEDD__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__agent_N_RInvoke) == 0x000038, "Member 'UDevices_device_function_get_agent::__verse_0x2376EEDD__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__agent_N_RInvoke' has a wrong offset!");

class UDevices_device_function_get_color final : public UDevices_device_function_get_base
{
public:
	FVerseFunctionProperty_                       __verse_0xB39E982F__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__color_N_RInvoke;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	struct FColors_color _L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__color_N_RInvoke(const struct VerseDevices_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_device_function_get_color">();
	}
	static class UDevices_device_function_get_color* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_device_function_get_color>();
	}
};
static_assert(alignof(UDevices_device_function_get_color) == 0x000008, "Wrong alignment on UDevices_device_function_get_color");
static_assert(sizeof(UDevices_device_function_get_color) == 0x000048, "Wrong size on UDevices_device_function_get_color");
static_assert(offsetof(UDevices_device_function_get_color, __verse_0xB39E982F__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__color_N_RInvoke) == 0x000038, "Member 'UDevices_device_function_get_color::__verse_0xB39E982F__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__color_N_RInvoke' has a wrong offset!");

class UDevices_device_function_get_float final : public UDevices_device_function_get_base
{
public:
	FVerseFunctionProperty_                       __verse_0xC98DA7A3__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__float_N_RInvoke;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	double _L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__float_N_RInvoke(const struct VerseDevices_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_device_function_get_float">();
	}
	static class UDevices_device_function_get_float* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_device_function_get_float>();
	}
};
static_assert(alignof(UDevices_device_function_get_float) == 0x000008, "Wrong alignment on UDevices_device_function_get_float");
static_assert(sizeof(UDevices_device_function_get_float) == 0x000048, "Wrong size on UDevices_device_function_get_float");
static_assert(offsetof(UDevices_device_function_get_float, __verse_0xC98DA7A3__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__float_N_RInvoke) == 0x000038, "Member 'UDevices_device_function_get_float::__verse_0xC98DA7A3__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__float_N_RInvoke' has a wrong offset!");

class Utask_Devices_device_event_agent_Await final : public UConcurrency_task
{
public:
	class UDevices_device_event_agent*            _Self;
	struct VerseDevices_0::Ftuple_L_R             __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_151[0x7];
	FVerseDynamicProperty_                        _RetVal;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_Devices_device_event_agent$Await">();
	}
	static class Utask_Devices_device_event_agent_Await* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_Devices_device_event_agent_Await>();
	}
};
static_assert(alignof(Utask_Devices_device_event_agent_Await) == 0x000008, "Wrong alignment on Utask_Devices_device_event_agent_Await");
static_assert(sizeof(Utask_Devices_device_event_agent_Await) == 0x000168, "Wrong size on Utask_Devices_device_event_agent_Await");
static_assert(offsetof(Utask_Devices_device_event_agent_Await, _Self) == 0x000148, "Member 'Utask_Devices_device_event_agent_Await::_Self' has a wrong offset!");
static_assert(offsetof(Utask_Devices_device_event_agent_Await, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_Devices_device_event_agent_Await::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_Devices_device_event_agent_Await, _RetVal) == 0x000158, "Member 'Utask_Devices_device_event_agent_Await::_RetVal' has a wrong offset!");

class UDevices_device_function_get_int final : public UDevices_device_function_get_base
{
public:
	FVerseFunctionProperty_                       __verse_0x5F417C53__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__int_N_RInvoke;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	int64 _L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__int_N_RInvoke(const struct VerseDevices_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_device_function_get_int">();
	}
	static class UDevices_device_function_get_int* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_device_function_get_int>();
	}
};
static_assert(alignof(UDevices_device_function_get_int) == 0x000008, "Wrong alignment on UDevices_device_function_get_int");
static_assert(sizeof(UDevices_device_function_get_int) == 0x000048, "Wrong size on UDevices_device_function_get_int");
static_assert(offsetof(UDevices_device_function_get_int, __verse_0x5F417C53__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__int_N_RInvoke) == 0x000038, "Member 'UDevices_device_function_get_int::__verse_0x5F417C53__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__int_N_RInvoke' has a wrong offset!");

class UDevices_device_function_get_logic final : public UDevices_device_function_get_base
{
public:
	FVerseFunctionProperty_                       __verse_0x546054FC__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__logic_N_RInvoke;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	uint8 _L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__logic_N_RInvoke(const struct VerseDevices_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_device_function_get_logic">();
	}
	static class UDevices_device_function_get_logic* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_device_function_get_logic>();
	}
};
static_assert(alignof(UDevices_device_function_get_logic) == 0x000008, "Wrong alignment on UDevices_device_function_get_logic");
static_assert(sizeof(UDevices_device_function_get_logic) == 0x000048, "Wrong size on UDevices_device_function_get_logic");
static_assert(offsetof(UDevices_device_function_get_logic, __verse_0x546054FC__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__logic_N_RInvoke) == 0x000038, "Member 'UDevices_device_function_get_logic::__verse_0x546054FC__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__logic_N_RInvoke' has a wrong offset!");

class UDevices_device_function_set_agent final : public UDevices_device_function_set_base
{
public:
	FVerseFunctionProperty_                       __verse_0xD0C1D7A3__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__agent_N_RInvoke_L_N_Qagent_R;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	void _L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__agent_N_RInvoke_L_N_Qagent_R(FOptionProperty_ __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_device_function_set_agent">();
	}
	static class UDevices_device_function_set_agent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_device_function_set_agent>();
	}
};
static_assert(alignof(UDevices_device_function_set_agent) == 0x000008, "Wrong alignment on UDevices_device_function_set_agent");
static_assert(sizeof(UDevices_device_function_set_agent) == 0x000048, "Wrong size on UDevices_device_function_set_agent");
static_assert(offsetof(UDevices_device_function_set_agent, __verse_0xD0C1D7A3__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__agent_N_RInvoke_L_N_Qagent_R) == 0x000038, "Member 'UDevices_device_function_set_agent::__verse_0xD0C1D7A3__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__agent_N_RInvoke_L_N_Qagent_R' has a wrong offset!");

class UDevices_device_function_set_color final : public UDevices_device_function_set_base
{
public:
	FVerseFunctionProperty_                       __verse_0xBEAEBA6C__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__color_N_RInvoke_L_Ncolor_R;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	void _L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__color_N_RInvoke_L_Ncolor_R(const struct FColors_color& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_device_function_set_color">();
	}
	static class UDevices_device_function_set_color* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_device_function_set_color>();
	}
};
static_assert(alignof(UDevices_device_function_set_color) == 0x000008, "Wrong alignment on UDevices_device_function_set_color");
static_assert(sizeof(UDevices_device_function_set_color) == 0x000048, "Wrong size on UDevices_device_function_set_color");
static_assert(offsetof(UDevices_device_function_set_color, __verse_0xBEAEBA6C__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__color_N_RInvoke_L_Ncolor_R) == 0x000038, "Member 'UDevices_device_function_set_color::__verse_0xBEAEBA6C__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__color_N_RInvoke_L_Ncolor_R' has a wrong offset!");

class UDevices_device_function_set_float final : public UDevices_device_function_set_base
{
public:
	FVerseFunctionProperty_                       __verse_0xBE6D2C82__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__float_N_RInvoke_L_Nfloat_R;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	void _L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__float_N_RInvoke_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_device_function_set_float">();
	}
	static class UDevices_device_function_set_float* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_device_function_set_float>();
	}
};
static_assert(alignof(UDevices_device_function_set_float) == 0x000008, "Wrong alignment on UDevices_device_function_set_float");
static_assert(sizeof(UDevices_device_function_set_float) == 0x000048, "Wrong size on UDevices_device_function_set_float");
static_assert(offsetof(UDevices_device_function_set_float, __verse_0xBE6D2C82__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__float_N_RInvoke_L_Nfloat_R) == 0x000038, "Member 'UDevices_device_function_set_float::__verse_0xBE6D2C82__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__float_N_RInvoke_L_Nfloat_R' has a wrong offset!");

class UDevices_function_parameter_logic final : public UDevices_function_parameter_base
{
public:
	uint8                                         __verse_0x31A8F10C_Value : 1;
	uint8                                         Pad_29[0x7];

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_function_parameter_logic">();
	}
	static class UDevices_function_parameter_logic* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_function_parameter_logic>();
	}
};
static_assert(alignof(UDevices_function_parameter_logic) == 0x000008, "Wrong alignment on UDevices_function_parameter_logic");
static_assert(sizeof(UDevices_function_parameter_logic) == 0x000030, "Wrong size on UDevices_function_parameter_logic");

class UDevices_device_function_set_logic final : public UDevices_device_function_set_base
{
public:
	FVerseFunctionProperty_                       __verse_0x5B52ED6E__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__logic_N_RInvoke_L_Nlogic_R;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	void _L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__logic_N_RInvoke_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_device_function_set_logic">();
	}
	static class UDevices_device_function_set_logic* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_device_function_set_logic>();
	}
};
static_assert(alignof(UDevices_device_function_set_logic) == 0x000008, "Wrong alignment on UDevices_device_function_set_logic");
static_assert(sizeof(UDevices_device_function_set_logic) == 0x000048, "Wrong size on UDevices_device_function_set_logic");
static_assert(offsetof(UDevices_device_function_set_logic, __verse_0x5B52ED6E__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__logic_N_RInvoke_L_Nlogic_R) == 0x000038, "Member 'UDevices_device_function_set_logic::__verse_0x5B52ED6E__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__logic_N_RInvoke_L_Nlogic_R' has a wrong offset!");

class UDevices_device_function_set_params_by_name : public UDevices_device_function_set_multi_parameter_base
{
public:
	FVerseFunctionProperty_                       __verse_0xD67AF8BF__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name_N_RInvoke_L_N_5b_Kchar_5dfunction__parameter__base_R;
	TMap<FVerseStringProperty_, class UClass*>    __verse_0x8F623C81_ParameterTypes;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	FOptionProperty_ _L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name_N_RInvoke_L_N_5b_Kchar_5dfunction__parameter__base_R(const TMap<FVerseStringProperty_, class UDevices_function_parameter_base*>& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_device_function_set_params_by_name">();
	}
	static class UDevices_device_function_set_params_by_name* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_device_function_set_params_by_name>();
	}
};
static_assert(alignof(UDevices_device_function_set_params_by_name) == 0x000008, "Wrong alignment on UDevices_device_function_set_params_by_name");
static_assert(sizeof(UDevices_device_function_set_params_by_name) == 0x0000A8, "Wrong size on UDevices_device_function_set_params_by_name");
static_assert(offsetof(UDevices_device_function_set_params_by_name, __verse_0xD67AF8BF__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name_N_RInvoke_L_N_5b_Kchar_5dfunction__parameter__base_R) == 0x000048, "Member 'UDevices_device_function_set_params_by_name::__verse_0xD67AF8BF__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name_N_RInvoke_L_N_5b_Kchar_5dfunction__parameter__base_R' has a wrong offset!");
static_assert(offsetof(UDevices_device_function_set_params_by_name, __verse_0x8F623C81_ParameterTypes) == 0x000058, "Member 'UDevices_device_function_set_params_by_name::__verse_0x8F623C81_ParameterTypes' has a wrong offset!");

class Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R final : public UConcurrency_task
{
public:
	class UDevices_creative_prop*                 _Self;
	struct Ftuple_Lvector3_Mrotation_Mfloat_R     __verse_0xB2CDDD72_Argument;
	EDevices_move_to_result                       _RetVal;
	EDevices_move_to_internal_result              __verse_0x95D09D0E_Result_1;
	uint8                                         Pad_1A2[0x6];
	class UConcurrency_task*                      _AsyncTask_0;
	FVerseFunctionProperty_                       _AsyncTaskClass_1;
	struct Ftuple_Lvector3_Mrotation_Mfloat_R     _ExprResult_2;
	int64                                         _AsyncResult_3;
	FVerseDynamicProperty_                        InvokeResultDummy_4;
	FOptionProperty_                              _ExprResultStack_5;
	uint8                                         Pad_239[0x7];
	FVerseDynamicProperty_                        _ExprResult_6;
	FVerseDynamicProperty_                        _ExprResult_7;
	FVerseDynamicProperty_                        InvokeResultDummy_8;
	FOptionProperty_                              _ExprResultStack_9;
	uint8                                         Pad_281[0x7];
	FVerseDynamicProperty_                        _ExprResult_10;
	FVerseDynamicProperty_                        _ExprResult_11;
	class UDiagnostics_log*                       __verse_0x63A8D5FA_DebugLog_4;
	class UDiagnostics_log*                       __verse_0x00000000__5;
	EVerseTrue                                    _InvokeSureResultDummy_13;
	uint8                                         Pad_2B9[0x7];
	FVerseFunctionProperty_                       _Callee_14;
	struct Ftuple_L_Kchar_M_QLevel_Nlog__level_R  _ExprResult_15;
	FVerseStringProperty_                         _ExprResult_16;
	TArray<FVerseDynamicProperty_>                __verse_0xFFC68BC5_Array_6;
	FVerseFunctionProperty_                       _Callee_17;
	TArray<TArray<FVerseDynamicProperty_>>        _ExprResult_18;
	TArray<FVerseStringProperty_>                 __verse_0xFFC68BC5_Array_7;
	struct VerseDevices_0::Ftuple_L_Kchar_M_Kchar_R __verse_0x00000000__8;
	FVerseStringProperty_                         _ExprResult_19;
	FVerseStringProperty_                         _ExprResultStack_20;
	FVerseFunctionProperty_                       _Callee_21;
	FVerseStringProperty_                         _ExprResultDummy_22;
	FVerseStringProperty_                         _ExprResultDummy_23;
	TArray<TArray<FVerseDynamicProperty_>>        _ForResult_24;
	int64                                         _ForIndex_25;
	int64                                         _ForLength_26;
	FVerseStringProperty_                         __verse_0xFB88B569_Item_10;
	TArray<FVerseDynamicProperty_>                _ExprResult_27;
	FVerseStringProperty_                         __verse_0xFFC68BC5_Array_11;
	TArray<FVerseDynamicProperty_>                _ForResult_28;
	int64                                         _ForIndex_29;
	int64                                         _ForLength_30;
	uint8                                         __verse_0xFB88B569_Item_13;
	uint8                                         Pad_419[0x7];
	FVerseDynamicProperty_                        _ExprResult_31;
	FVerseStringProperty_                         _ForResult_32;
	int64                                         _ForIndex_33;
	int64                                         _ForLength_34;
	FVerseDynamicProperty_                        __verse_0xFB88B569_Item_15;
	uint8                                         _ExprResult_35;
	FOptionProperty_                              _ExprResult_36;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_Devices_creative_prop$MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R">();
	}
	static class Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R>();
	}
};
static_assert(alignof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R) == 0x000010, "Wrong alignment on Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R");
static_assert(sizeof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R) == 0x000470, "Wrong size on Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, _Self) == 0x000148, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::_Self' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, _RetVal) == 0x0001A0, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::_RetVal' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, __verse_0x95D09D0E_Result_1) == 0x0001A1, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::__verse_0x95D09D0E_Result_1' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, _AsyncTask_0) == 0x0001A8, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::_AsyncTask_0' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, _AsyncTaskClass_1) == 0x0001B0, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::_AsyncTaskClass_1' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResult_2) == 0x0001C0, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResult_2' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, _AsyncResult_3) == 0x000210, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::_AsyncResult_3' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, InvokeResultDummy_4) == 0x000218, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::InvokeResultDummy_4' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResultStack_5) == 0x000228, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResultStack_5' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResult_6) == 0x000240, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResult_6' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResult_7) == 0x000250, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResult_7' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, InvokeResultDummy_8) == 0x000260, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::InvokeResultDummy_8' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResultStack_9) == 0x000270, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResultStack_9' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResult_10) == 0x000288, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResult_10' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResult_11) == 0x000298, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResult_11' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, __verse_0x63A8D5FA_DebugLog_4) == 0x0002A8, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::__verse_0x63A8D5FA_DebugLog_4' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, __verse_0x00000000__5) == 0x0002B0, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::__verse_0x00000000__5' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, _InvokeSureResultDummy_13) == 0x0002B8, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::_InvokeSureResultDummy_13' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, _Callee_14) == 0x0002C0, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::_Callee_14' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResult_15) == 0x0002D0, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResult_15' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResult_16) == 0x0002E8, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResult_16' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, __verse_0xFFC68BC5_Array_6) == 0x0002F8, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::__verse_0xFFC68BC5_Array_6' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, _Callee_17) == 0x000308, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::_Callee_17' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResult_18) == 0x000318, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResult_18' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, __verse_0xFFC68BC5_Array_7) == 0x000328, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::__verse_0xFFC68BC5_Array_7' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, __verse_0x00000000__8) == 0x000338, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::__verse_0x00000000__8' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResult_19) == 0x000358, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResult_19' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResultStack_20) == 0x000368, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResultStack_20' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, _Callee_21) == 0x000378, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::_Callee_21' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResultDummy_22) == 0x000388, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResultDummy_22' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResultDummy_23) == 0x000398, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResultDummy_23' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, _ForResult_24) == 0x0003A8, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::_ForResult_24' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, _ForIndex_25) == 0x0003B8, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::_ForIndex_25' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, _ForLength_26) == 0x0003C0, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::_ForLength_26' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, __verse_0xFB88B569_Item_10) == 0x0003C8, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::__verse_0xFB88B569_Item_10' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResult_27) == 0x0003D8, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResult_27' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, __verse_0xFFC68BC5_Array_11) == 0x0003E8, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::__verse_0xFFC68BC5_Array_11' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, _ForResult_28) == 0x0003F8, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::_ForResult_28' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, _ForIndex_29) == 0x000408, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::_ForIndex_29' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, _ForLength_30) == 0x000410, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::_ForLength_30' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, __verse_0xFB88B569_Item_13) == 0x000418, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::__verse_0xFB88B569_Item_13' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResult_31) == 0x000420, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResult_31' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, _ForResult_32) == 0x000430, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::_ForResult_32' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, _ForIndex_33) == 0x000440, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::_ForIndex_33' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, _ForLength_34) == 0x000448, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::_ForLength_34' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, __verse_0xFB88B569_Item_15) == 0x000450, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::__verse_0xFB88B569_Item_15' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResult_35) == 0x000460, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResult_35' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResult_36) == 0x000461, "Member 'Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResult_36' has a wrong offset!");

class UDevices_device_function_set_params_by_name_const final : public UDevices_device_function_set_params_by_name
{
public:
	FVerseFunctionProperty_                       __verse_0xE5C254F3__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name__const_N_RInvokeConst_L_N_5b_Kchar_5dfunction__parameter__base_R;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	FOptionProperty_ _L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name__const_N_RInvokeConst_L_N_5b_Kchar_5dfunction__parameter__base_R(const TMap<FVerseStringProperty_, class UDevices_function_parameter_base*>& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_device_function_set_params_by_name_const">();
	}
	static class UDevices_device_function_set_params_by_name_const* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_device_function_set_params_by_name_const>();
	}
};
static_assert(alignof(UDevices_device_function_set_params_by_name_const) == 0x000008, "Wrong alignment on UDevices_device_function_set_params_by_name_const");
static_assert(sizeof(UDevices_device_function_set_params_by_name_const) == 0x0000B8, "Wrong size on UDevices_device_function_set_params_by_name_const");
static_assert(offsetof(UDevices_device_function_set_params_by_name_const, __verse_0xE5C254F3__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name__const_N_RInvokeConst_L_N_5b_Kchar_5dfunction__parameter__base_R) == 0x0000A8, "Member 'UDevices_device_function_set_params_by_name_const::__verse_0xE5C254F3__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name__const_N_RInvokeConst_L_N_5b_Kchar_5dfunction__parameter__base_R' has a wrong offset!");

class UDevices_device_function_set_params_by_type : public UDevices_device_function_set_multi_parameter_base
{
public:
	FVerseFunctionProperty_                       __verse_0x59B457FF__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type_N_RInvoke_L_N_Kfunction__parameter__base_R;
	TArray<class UClass*>                         __verse_0x8F623C81_ParameterTypes;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	FOptionProperty_ _L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type_N_RInvoke_L_N_Kfunction__parameter__base_R(const TArray<class UDevices_function_parameter_base*>& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_device_function_set_params_by_type">();
	}
	static class UDevices_device_function_set_params_by_type* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_device_function_set_params_by_type>();
	}
};
static_assert(alignof(UDevices_device_function_set_params_by_type) == 0x000008, "Wrong alignment on UDevices_device_function_set_params_by_type");
static_assert(sizeof(UDevices_device_function_set_params_by_type) == 0x000068, "Wrong size on UDevices_device_function_set_params_by_type");
static_assert(offsetof(UDevices_device_function_set_params_by_type, __verse_0x59B457FF__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type_N_RInvoke_L_N_Kfunction__parameter__base_R) == 0x000048, "Member 'UDevices_device_function_set_params_by_type::__verse_0x59B457FF__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type_N_RInvoke_L_N_Kfunction__parameter__base_R' has a wrong offset!");
static_assert(offsetof(UDevices_device_function_set_params_by_type, __verse_0x8F623C81_ParameterTypes) == 0x000058, "Member 'UDevices_device_function_set_params_by_type::__verse_0x8F623C81_ParameterTypes' has a wrong offset!");

class Utask_Devices_device_event_optional_agent_Await final : public UConcurrency_task
{
public:
	class UDevices_device_event_optional_agent*   _Self;
	struct VerseDevices_0::Ftuple_L_R             __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_151[0x7];
	FVerseDynamicProperty_                        _RetVal;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_Devices_device_event_optional_agent$Await">();
	}
	static class Utask_Devices_device_event_optional_agent_Await* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_Devices_device_event_optional_agent_Await>();
	}
};
static_assert(alignof(Utask_Devices_device_event_optional_agent_Await) == 0x000008, "Wrong alignment on Utask_Devices_device_event_optional_agent_Await");
static_assert(sizeof(Utask_Devices_device_event_optional_agent_Await) == 0x000168, "Wrong size on Utask_Devices_device_event_optional_agent_Await");
static_assert(offsetof(Utask_Devices_device_event_optional_agent_Await, _Self) == 0x000148, "Member 'Utask_Devices_device_event_optional_agent_Await::_Self' has a wrong offset!");
static_assert(offsetof(Utask_Devices_device_event_optional_agent_Await, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_Devices_device_event_optional_agent_Await::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_Devices_device_event_optional_agent_Await, _RetVal) == 0x000158, "Member 'Utask_Devices_device_event_optional_agent_Await::_RetVal' has a wrong offset!");

class UDevices_device_function_set_params_by_type_const final : public UDevices_device_function_set_params_by_type
{
public:
	FVerseFunctionProperty_                       __verse_0x4A59905A__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type__const_N_RInvokeConst_L_N_Kfunction__parameter__base_R;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	FOptionProperty_ _L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type__const_N_RInvokeConst_L_N_Kfunction__parameter__base_R(const TArray<class UDevices_function_parameter_base*>& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_device_function_set_params_by_type_const">();
	}
	static class UDevices_device_function_set_params_by_type_const* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_device_function_set_params_by_type_const>();
	}
};
static_assert(alignof(UDevices_device_function_set_params_by_type_const) == 0x000008, "Wrong alignment on UDevices_device_function_set_params_by_type_const");
static_assert(sizeof(UDevices_device_function_set_params_by_type_const) == 0x000078, "Wrong size on UDevices_device_function_set_params_by_type_const");
static_assert(offsetof(UDevices_device_function_set_params_by_type_const, __verse_0x4A59905A__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type__const_N_RInvokeConst_L_N_Kfunction__parameter__base_R) == 0x000068, "Member 'UDevices_device_function_set_params_by_type_const::__verse_0x4A59905A__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type__const_N_RInvokeConst_L_N_Kfunction__parameter__base_R' has a wrong offset!");

class UDevices_device_function_set_vector3 final : public UDevices_device_function_set_base
{
public:
	FVerseFunctionProperty_                       __verse_0x3B995A88__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__vector3_N_RInvoke_L_Nvector3_R;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	void _L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__vector3_N_RInvoke_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_device_function_set_vector3">();
	}
	static class UDevices_device_function_set_vector3* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_device_function_set_vector3>();
	}
};
static_assert(alignof(UDevices_device_function_set_vector3) == 0x000008, "Wrong alignment on UDevices_device_function_set_vector3");
static_assert(sizeof(UDevices_device_function_set_vector3) == 0x000048, "Wrong size on UDevices_device_function_set_vector3");
static_assert(offsetof(UDevices_device_function_set_vector3, __verse_0x3B995A88__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__vector3_N_RInvoke_L_Nvector3_R) == 0x000038, "Member 'UDevices_device_function_set_vector3::__verse_0x3B995A88__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__vector3_N_RInvoke_L_Nvector3_R' has a wrong offset!");

class UDevices_device_subscription final : public UObject
{
public:
	FVerseFunctionProperty_                       __verse_0x08089514__L_2fVerse_2eorg_2fVerse_2fcancelable_N_RCancel;
	uint8                                         Pad_38[0x30];

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();
	void _L_2fVerse_2eorg_2fVerse_2fcancelable_N_RCancel(const struct VerseDevices_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_device_subscription">();
	}
	static class UDevices_device_subscription* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_device_subscription>();
	}
};
static_assert(alignof(UDevices_device_subscription) == 0x000008, "Wrong alignment on UDevices_device_subscription");
static_assert(sizeof(UDevices_device_subscription) == 0x000068, "Wrong size on UDevices_device_subscription");
static_assert(offsetof(UDevices_device_subscription, __verse_0x08089514__L_2fVerse_2eorg_2fVerse_2fcancelable_N_RCancel) == 0x000028, "Member 'UDevices_device_subscription::__verse_0x08089514__L_2fVerse_2eorg_2fVerse_2fcancelable_N_RCancel' has a wrong offset!");

class UDevices_function_parameter_agent final : public UDevices_function_parameter_base
{
public:
	FOptionProperty_                              __verse_0x31A8F10C_Value;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_function_parameter_agent">();
	}
	static class UDevices_function_parameter_agent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_function_parameter_agent>();
	}
};
static_assert(alignof(UDevices_function_parameter_agent) == 0x000008, "Wrong alignment on UDevices_function_parameter_agent");
static_assert(sizeof(UDevices_function_parameter_agent) == 0x000030, "Wrong size on UDevices_function_parameter_agent");
static_assert(offsetof(UDevices_function_parameter_agent, __verse_0x31A8F10C_Value) == 0x000028, "Member 'UDevices_function_parameter_agent::__verse_0x31A8F10C_Value' has a wrong offset!");

class UDevices_function_parameter_color final : public UDevices_function_parameter_base
{
public:
	struct FColors_color                          __verse_0x31A8F10C_Value;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_function_parameter_color">();
	}
	static class UDevices_function_parameter_color* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_function_parameter_color>();
	}
};
static_assert(alignof(UDevices_function_parameter_color) == 0x000008, "Wrong alignment on UDevices_function_parameter_color");
static_assert(sizeof(UDevices_function_parameter_color) == 0x000040, "Wrong size on UDevices_function_parameter_color");
static_assert(offsetof(UDevices_function_parameter_color, __verse_0x31A8F10C_Value) == 0x000028, "Member 'UDevices_function_parameter_color::__verse_0x31A8F10C_Value' has a wrong offset!");

class UDevices_function_parameter_int final : public UDevices_function_parameter_base
{
public:
	int64                                         __verse_0x31A8F10C_Value;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_function_parameter_int">();
	}
	static class UDevices_function_parameter_int* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_function_parameter_int>();
	}
};
static_assert(alignof(UDevices_function_parameter_int) == 0x000008, "Wrong alignment on UDevices_function_parameter_int");
static_assert(sizeof(UDevices_function_parameter_int) == 0x000030, "Wrong size on UDevices_function_parameter_int");
static_assert(offsetof(UDevices_function_parameter_int, __verse_0x31A8F10C_Value) == 0x000028, "Member 'UDevices_function_parameter_int::__verse_0x31A8F10C_Value' has a wrong offset!");

class UDevices_function_parameter_string final : public UDevices_function_parameter_base
{
public:
	FVerseStringProperty_                         __verse_0x31A8F10C_Value;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_function_parameter_string">();
	}
	static class UDevices_function_parameter_string* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_function_parameter_string>();
	}
};
static_assert(alignof(UDevices_function_parameter_string) == 0x000008, "Wrong alignment on UDevices_function_parameter_string");
static_assert(sizeof(UDevices_function_parameter_string) == 0x000038, "Wrong size on UDevices_function_parameter_string");
static_assert(offsetof(UDevices_function_parameter_string, __verse_0x31A8F10C_Value) == 0x000028, "Member 'UDevices_function_parameter_string::__verse_0x31A8F10C_Value' has a wrong offset!");

class UDevices_function_parameter_vector3 final : public UDevices_function_parameter_base
{
public:
	struct FSpatialMath_vector3                   __verse_0x31A8F10C_Value;

public:
	void _Block();
	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Devices_function_parameter_vector3">();
	}
	static class UDevices_function_parameter_vector3* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDevices_function_parameter_vector3>();
	}
};
static_assert(alignof(UDevices_function_parameter_vector3) == 0x000008, "Wrong alignment on UDevices_function_parameter_vector3");
static_assert(sizeof(UDevices_function_parameter_vector3) == 0x000040, "Wrong size on UDevices_function_parameter_vector3");
static_assert(offsetof(UDevices_function_parameter_vector3, __verse_0x31A8F10C_Value) == 0x000028, "Member 'UDevices_function_parameter_vector3::__verse_0x31A8F10C_Value' has a wrong offset!");

class Utask_Devices_creative_device_OnBegin final : public UConcurrency_task
{
public:
	class UDevices_creative_device*               _Self;
	struct VerseDevices_0::Ftuple_L_R             __verse_0xB2CDDD72_Argument;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_Devices_creative_device$OnBegin">();
	}
	static class Utask_Devices_creative_device_OnBegin* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_Devices_creative_device_OnBegin>();
	}
};
static_assert(alignof(Utask_Devices_creative_device_OnBegin) == 0x000008, "Wrong alignment on Utask_Devices_creative_device_OnBegin");
static_assert(sizeof(Utask_Devices_creative_device_OnBegin) == 0x000158, "Wrong size on Utask_Devices_creative_device_OnBegin");
static_assert(offsetof(Utask_Devices_creative_device_OnBegin, _Self) == 0x000148, "Member 'Utask_Devices_creative_device_OnBegin::_Self' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_device_OnBegin, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_Devices_creative_device_OnBegin::__verse_0xB2CDDD72_Argument' has a wrong offset!");

class Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R final : public UConcurrency_task
{
public:
	class UDevices_creative_prop*                 _Self;
	struct Ftuple_Lvector3_Mrotation_Mfloat_R     __verse_0xB2CDDD72_Argument;
	EDevices_move_to_internal_result              _RetVal;
	uint8                                         Pad_1A1[0x7];
	FOptionProperty_                              _ExprResultStack_0;
	uint8                                         Pad_1B1[0x7];
	struct Ftuple_L_Qanimation__controller_Mget__animation__controller__result_R __verse_0xA8BECD0D_GetControllerResult_1;
	FVerseFunctionProperty_                       _Callee_1;
	class UDevices_CreativeAnimation_animation_controller* __verse_0x995129C4_Controller_4;
	FOptionProperty_                              _ExprResultStack_2;
	uint8                                         Pad_1E8[0x8];
	struct FSpatialMath_transform                 __verse_0x80B800AD_CurrentTransform_4;
	FVerseFunctionProperty_                       _Callee_3;
	struct VerseDevices_0::Ftuple_L_R             _ExprResult_4;
	uint8                                         Pad_261[0x7];
	TArray<struct FDevices_CreativeAnimation_keyframe_delta> __verse_0xB23BEFD6_KeyframeArray_4;
	uint8                                         Pad_278[0x8];
	struct FDevices_CreativeAnimation_keyframe_delta _ExprResult_5;
	struct FSpatialMath_vector3                   _ExprResultStack_6;
	FVerseFunctionProperty_                       _Callee_7;
	struct VerseDevices_0::Ftuple_Lvector3_Mvector3_R _ExprResult_8;
	uint8                                         Pad_348[0x8];
	struct FVerseRotation                         _ExprResultStack_9;
	FVerseFunctionProperty_                       _Callee_10;
	struct VerseDevices_0::Ftuple_Lrotation_Mrotation_R _ExprResult_11;
	EDevices_CreativeAnimation_set_animation_result __verse_0xC40A5F4A_SetAnimationResult_4;
	uint8                                         Pad_3C1[0x7];
	class UDevices_CreativeAnimation_animation_controller* __verse_0x00000000__5;
	FVerseFunctionProperty_                       _Callee_12;
	struct Ftuple_L_Kkeyframe__delta_M_QAnimationMode_Nanimation__mode_R _ExprResult_13;
	FOptionProperty_                              _ExprResult_14;
	uint8                                         Pad_3FA[0x6];
	FVerseDynamicProperty_                        InvokeResultDummy_15;
	FOptionProperty_                              _ExprResultStack_16;
	uint8                                         Pad_421[0x7];
	FVerseDynamicProperty_                        _ExprResult_17;
	FVerseDynamicProperty_                        _ExprResult_18;
	EDevices_CreativeAnimation_playstoppause_result __verse_0x2BCA4545_PlayResult_6;
	uint8                                         Pad_449[0x7];
	class UDevices_CreativeAnimation_animation_controller* __verse_0x00000000__7;
	FVerseFunctionProperty_                       _Callee_19;
	struct VerseDevices_0::Ftuple_L_R             _ExprResult_20;
	uint8                                         Pad_469[0x7];
	FVerseDynamicProperty_                        InvokeResultDummy_21;
	FOptionProperty_                              _ExprResultStack_22;
	uint8                                         Pad_491[0x7];
	FVerseDynamicProperty_                        _ExprResult_23;
	FVerseDynamicProperty_                        _ExprResult_24;
	EDevices_CreativeAnimation_await_next_keyframe_result __verse_0x95D09D0E_Result_8;
	uint8                                         Pad_4B9[0x7];
	class UDevices_CreativeAnimation_animation_controller* __verse_0x00000000__9;
	class UConcurrency_task*                      _AsyncTask_25;
	FVerseFunctionProperty_                       _AsyncTaskClass_26;
	struct VerseDevices_0::Ftuple_L_R             _ExprResult_27;
	uint8                                         Pad_4E1[0x7];
	int64                                         _AsyncResult_28;
	EDevices_CreativeAnimation_await_next_keyframe_result __verse_0x00000000__10;
	uint8                                         Pad_4F1[0x7];
	FVerseDynamicProperty_                        InvokeResultDummy_29;
	FOptionProperty_                              _ExprResultStack_30;
	uint8                                         Pad_519[0x7];
	FVerseDynamicProperty_                        _ExprResult_31;
	FVerseDynamicProperty_                        _ExprResult_32;
	FVerseDynamicProperty_                        InvokeResultDummy_33;
	FOptionProperty_                              _ExprResultStack_34;
	uint8                                         Pad_561[0x7];
	FVerseDynamicProperty_                        _ExprResult_35;
	FVerseDynamicProperty_                        _ExprResult_36;
	FVerseDynamicProperty_                        InvokeResultDummy_37;
	FOptionProperty_                              _ExprResultStack_38;
	uint8                                         Pad_5A9[0x7];
	FVerseDynamicProperty_                        _ExprResult_39;
	FVerseDynamicProperty_                        _ExprResult_40;
	FVerseDynamicProperty_                        InvokeResultDummy_41;
	FOptionProperty_                              _ExprResultStack_42;
	uint8                                         Pad_5F1[0x7];
	FVerseDynamicProperty_                        _ExprResult_43;
	FVerseDynamicProperty_                        _ExprResult_44;
	FVerseDynamicProperty_                        InvokeResultDummy_45;
	FOptionProperty_                              _ExprResultStack_46;
	uint8                                         Pad_639[0x7];
	FVerseDynamicProperty_                        _ExprResult_47;
	FVerseDynamicProperty_                        _ExprResult_48;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_Devices_creative_prop$MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R">();
	}
	static class Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R>();
	}
};
static_assert(alignof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R) == 0x000010, "Wrong alignment on Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R");
static_assert(sizeof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R) == 0x000660, "Wrong size on Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _Self) == 0x000148, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_Self' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _RetVal) == 0x0001A0, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_RetVal' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResultStack_0) == 0x0001A8, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResultStack_0' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, __verse_0xA8BECD0D_GetControllerResult_1) == 0x0001B8, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::__verse_0xA8BECD0D_GetControllerResult_1' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _Callee_1) == 0x0001C8, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_Callee_1' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, __verse_0x995129C4_Controller_4) == 0x0001D8, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::__verse_0x995129C4_Controller_4' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResultStack_2) == 0x0001E0, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResultStack_2' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, __verse_0x80B800AD_CurrentTransform_4) == 0x0001F0, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::__verse_0x80B800AD_CurrentTransform_4' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _Callee_3) == 0x000250, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_Callee_3' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResult_4) == 0x000260, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResult_4' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, __verse_0xB23BEFD6_KeyframeArray_4) == 0x000268, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::__verse_0xB23BEFD6_KeyframeArray_4' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResult_5) == 0x000280, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResult_5' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResultStack_6) == 0x0002F0, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResultStack_6' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _Callee_7) == 0x000308, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_Callee_7' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResult_8) == 0x000318, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResult_8' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResultStack_9) == 0x000350, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResultStack_9' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _Callee_10) == 0x000370, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_Callee_10' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResult_11) == 0x000380, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResult_11' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, __verse_0xC40A5F4A_SetAnimationResult_4) == 0x0003C0, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::__verse_0xC40A5F4A_SetAnimationResult_4' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, __verse_0x00000000__5) == 0x0003C8, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::__verse_0x00000000__5' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _Callee_12) == 0x0003D0, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_Callee_12' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResult_13) == 0x0003E0, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResult_13' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResult_14) == 0x0003F8, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResult_14' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, InvokeResultDummy_15) == 0x000400, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::InvokeResultDummy_15' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResultStack_16) == 0x000410, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResultStack_16' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResult_17) == 0x000428, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResult_17' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResult_18) == 0x000438, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResult_18' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, __verse_0x2BCA4545_PlayResult_6) == 0x000448, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::__verse_0x2BCA4545_PlayResult_6' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, __verse_0x00000000__7) == 0x000450, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::__verse_0x00000000__7' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _Callee_19) == 0x000458, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_Callee_19' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResult_20) == 0x000468, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResult_20' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, InvokeResultDummy_21) == 0x000470, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::InvokeResultDummy_21' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResultStack_22) == 0x000480, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResultStack_22' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResult_23) == 0x000498, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResult_23' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResult_24) == 0x0004A8, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResult_24' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, __verse_0x95D09D0E_Result_8) == 0x0004B8, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::__verse_0x95D09D0E_Result_8' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, __verse_0x00000000__9) == 0x0004C0, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::__verse_0x00000000__9' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _AsyncTask_25) == 0x0004C8, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_AsyncTask_25' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _AsyncTaskClass_26) == 0x0004D0, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_AsyncTaskClass_26' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResult_27) == 0x0004E0, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResult_27' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _AsyncResult_28) == 0x0004E8, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_AsyncResult_28' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, __verse_0x00000000__10) == 0x0004F0, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::__verse_0x00000000__10' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, InvokeResultDummy_29) == 0x0004F8, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::InvokeResultDummy_29' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResultStack_30) == 0x000508, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResultStack_30' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResult_31) == 0x000520, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResult_31' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResult_32) == 0x000530, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResult_32' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, InvokeResultDummy_33) == 0x000540, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::InvokeResultDummy_33' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResultStack_34) == 0x000550, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResultStack_34' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResult_35) == 0x000568, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResult_35' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResult_36) == 0x000578, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResult_36' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, InvokeResultDummy_37) == 0x000588, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::InvokeResultDummy_37' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResultStack_38) == 0x000598, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResultStack_38' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResult_39) == 0x0005B0, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResult_39' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResult_40) == 0x0005C0, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResult_40' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, InvokeResultDummy_41) == 0x0005D0, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::InvokeResultDummy_41' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResultStack_42) == 0x0005E0, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResultStack_42' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResult_43) == 0x0005F8, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResult_43' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResult_44) == 0x000608, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResult_44' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, InvokeResultDummy_45) == 0x000618, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::InvokeResultDummy_45' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResultStack_46) == 0x000628, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResultStack_46' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResult_47) == 0x000640, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResult_47' has a wrong offset!");
static_assert(offsetof(Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R, _ExprResult_48) == 0x000650, "Member 'Utask_Devices_creative_prop_MoveToInternal_L_Nvector3_M_Nrotation_M_Nfloat_R::_ExprResult_48' has a wrong offset!");

class Utask_Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe final : public UConcurrency_task
{
public:
	class UDevices_CreativeAnimation_animation_controller* _Self;
	struct VerseDevices_0::Ftuple_L_R             __verse_0xB2CDDD72_Argument;
	EDevices_CreativeAnimation_await_next_keyframe_result _RetVal;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_Devices_CreativeAnimation_animation_controller$AwaitNextKeyframe">();
	}
	static class Utask_Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe>();
	}
};
static_assert(alignof(Utask_Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe) == 0x000008, "Wrong alignment on Utask_Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe");
static_assert(sizeof(Utask_Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe) == 0x000158, "Wrong size on Utask_Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe");
static_assert(offsetof(Utask_Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe, _Self) == 0x000148, "Member 'Utask_Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe::_Self' has a wrong offset!");
static_assert(offsetof(Utask_Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe, _RetVal) == 0x000151, "Member 'Utask_Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe::_RetVal' has a wrong offset!");

class Utask_Devices_device_event_agent_int_Await final : public UConcurrency_task
{
public:
	class UDevices_device_event_agent_int*        _Self;
	struct VerseDevices_0::Ftuple_L_R             __verse_0xB2CDDD72_Argument;
	uint8                                         Pad_151[0x7];
	FVerseDynamicProperty_                        _RetVal;

public:
	int64 Update();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"task_Devices_device_event_agent_int$Await">();
	}
	static class Utask_Devices_device_event_agent_int_Await* GetDefaultObj()
	{
		return GetDefaultObjImpl<Utask_Devices_device_event_agent_int_Await>();
	}
};
static_assert(alignof(Utask_Devices_device_event_agent_int_Await) == 0x000008, "Wrong alignment on Utask_Devices_device_event_agent_int_Await");
static_assert(sizeof(Utask_Devices_device_event_agent_int_Await) == 0x000168, "Wrong size on Utask_Devices_device_event_agent_int_Await");
static_assert(offsetof(Utask_Devices_device_event_agent_int_Await, _Self) == 0x000148, "Member 'Utask_Devices_device_event_agent_int_Await::_Self' has a wrong offset!");
static_assert(offsetof(Utask_Devices_device_event_agent_int_Await, __verse_0xB2CDDD72_Argument) == 0x000150, "Member 'Utask_Devices_device_event_agent_int_Await::__verse_0xB2CDDD72_Argument' has a wrong offset!");
static_assert(offsetof(Utask_Devices_device_event_agent_int_Await, _RetVal) == 0x000158, "Member 'Utask_Devices_device_event_agent_int_Await::_RetVal' has a wrong offset!");

}
