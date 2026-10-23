#pragma once

#include "Basic.hpp"

#include "AndroidFileServer_structs.hpp"

namespace SDK::Params
{

struct AndroidFileServerBPLibrary_IsFileServerRunning final
{
public:
	EAFSActiveType                                ReturnValue;
};
static_assert(alignof(AndroidFileServerBPLibrary_IsFileServerRunning) == 0x000001, "Wrong alignment on AndroidFileServerBPLibrary_IsFileServerRunning");
static_assert(sizeof(AndroidFileServerBPLibrary_IsFileServerRunning) == 0x000001, "Wrong size on AndroidFileServerBPLibrary_IsFileServerRunning");
static_assert(offsetof(AndroidFileServerBPLibrary_IsFileServerRunning, ReturnValue) == 0x000000, "Member 'AndroidFileServerBPLibrary_IsFileServerRunning::ReturnValue' has a wrong offset!");

struct AndroidFileServerBPLibrary_StartFileServer final
{
public:
	bool                                          bUSB;
	bool                                          bNetwork;
	uint8                                         Pad_2[0x2];
	int32                                         Port;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x3];
};
static_assert(alignof(AndroidFileServerBPLibrary_StartFileServer) == 0x000004, "Wrong alignment on AndroidFileServerBPLibrary_StartFileServer");
static_assert(sizeof(AndroidFileServerBPLibrary_StartFileServer) == 0x00000C, "Wrong size on AndroidFileServerBPLibrary_StartFileServer");
static_assert(offsetof(AndroidFileServerBPLibrary_StartFileServer, bUSB) == 0x000000, "Member 'AndroidFileServerBPLibrary_StartFileServer::bUSB' has a wrong offset!");
static_assert(offsetof(AndroidFileServerBPLibrary_StartFileServer, bNetwork) == 0x000001, "Member 'AndroidFileServerBPLibrary_StartFileServer::bNetwork' has a wrong offset!");
static_assert(offsetof(AndroidFileServerBPLibrary_StartFileServer, Port) == 0x000004, "Member 'AndroidFileServerBPLibrary_StartFileServer::Port' has a wrong offset!");
static_assert(offsetof(AndroidFileServerBPLibrary_StartFileServer, ReturnValue) == 0x000008, "Member 'AndroidFileServerBPLibrary_StartFileServer::ReturnValue' has a wrong offset!");

struct AndroidFileServerBPLibrary_StopFileServer final
{
public:
	bool                                          bUSB;
	bool                                          bNetwork;
	bool                                          ReturnValue;
};
static_assert(alignof(AndroidFileServerBPLibrary_StopFileServer) == 0x000001, "Wrong alignment on AndroidFileServerBPLibrary_StopFileServer");
static_assert(sizeof(AndroidFileServerBPLibrary_StopFileServer) == 0x000003, "Wrong size on AndroidFileServerBPLibrary_StopFileServer");
static_assert(offsetof(AndroidFileServerBPLibrary_StopFileServer, bUSB) == 0x000000, "Member 'AndroidFileServerBPLibrary_StopFileServer::bUSB' has a wrong offset!");
static_assert(offsetof(AndroidFileServerBPLibrary_StopFileServer, bNetwork) == 0x000001, "Member 'AndroidFileServerBPLibrary_StopFileServer::bNetwork' has a wrong offset!");
static_assert(offsetof(AndroidFileServerBPLibrary_StopFileServer, ReturnValue) == 0x000002, "Member 'AndroidFileServerBPLibrary_StopFileServer::ReturnValue' has a wrong offset!");

}
