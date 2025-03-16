#pragma once
#include "source2sdk/client/C_BaseTrigger.hpp"
#include "source2sdk/client/TimedEvent.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd80
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_Precipitation : public client::C_BaseTrigger
    {
    public:
        float m_flDensity; // 0xd30        
        [[maybe_unused]] std::uint8_t pad_0xd34[0xc]; // 0xd34
        float m_flParticleInnerDist; // 0xd40        
        [[maybe_unused]] std::uint8_t pad_0xd44[0x4]; // 0xd44
        char* m_pParticleDef; // 0xd48        
        [[maybe_unused]] std::uint8_t pad_0xd50[0x20]; // 0xd50
        client::TimedEvent m_tParticlePrecipTraceTimer[1]; // 0xd70        
        bool m_bActiveParticlePrecipEmitter[1]; // 0xd78        
        bool m_bParticlePrecipInitialized; // 0xd79        
        bool m_bHasSimulatedSinceLastSceneObjectUpdate; // 0xd7a        
        [[maybe_unused]] std::uint8_t pad_0xd7b[0x1]; // 0xd7b
        int32_t m_nAvailableSheetSequencesMaxIndex; // 0xd7c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Precipitation because it is not a standard-layout class
    static_assert(sizeof(C_Precipitation) == 0xd80);
};
