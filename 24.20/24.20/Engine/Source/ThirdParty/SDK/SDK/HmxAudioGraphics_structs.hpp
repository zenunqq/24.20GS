#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EHmxAudioAnalysisType : uint32
{
	VUMeter                                  = 0,
	FFT                                      = 1,
	BandFilterBank                           = 2,
	SemitoneFilterBank                       = 3,
	Waveform                                 = 4,
	MAX                                      = 5,
};

}
