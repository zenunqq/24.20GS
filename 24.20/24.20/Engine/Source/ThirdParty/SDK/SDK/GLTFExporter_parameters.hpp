#pragma once

#include "Basic.hpp"

#include "GLTFExporter_structs.hpp"

namespace SDK::Params
{

struct GLTFExporter_ExportToGLTF final
{
public:
	class UObject*                                Object;
	class FString                                 FilePath;
	const class UGLTFExportOptions*               Options;
	TSet<class AActor*>                           SelectedActors;
	struct FGLTFExportMessages                    OutMessages;
	bool                                          ReturnValue;
	uint8                                         Pad_A1[0x7];
};
static_assert(alignof(GLTFExporter_ExportToGLTF) == 0x000008, "Wrong alignment on GLTFExporter_ExportToGLTF");
static_assert(sizeof(GLTFExporter_ExportToGLTF) == 0x0000A8, "Wrong size on GLTFExporter_ExportToGLTF");
static_assert(offsetof(GLTFExporter_ExportToGLTF, Object) == 0x000000, "Member 'GLTFExporter_ExportToGLTF::Object' has a wrong offset!");
static_assert(offsetof(GLTFExporter_ExportToGLTF, FilePath) == 0x000008, "Member 'GLTFExporter_ExportToGLTF::FilePath' has a wrong offset!");
static_assert(offsetof(GLTFExporter_ExportToGLTF, Options) == 0x000018, "Member 'GLTFExporter_ExportToGLTF::Options' has a wrong offset!");
static_assert(offsetof(GLTFExporter_ExportToGLTF, SelectedActors) == 0x000020, "Member 'GLTFExporter_ExportToGLTF::SelectedActors' has a wrong offset!");
static_assert(offsetof(GLTFExporter_ExportToGLTF, OutMessages) == 0x000070, "Member 'GLTFExporter_ExportToGLTF::OutMessages' has a wrong offset!");
static_assert(offsetof(GLTFExporter_ExportToGLTF, ReturnValue) == 0x0000A0, "Member 'GLTFExporter_ExportToGLTF::ReturnValue' has a wrong offset!");

}
