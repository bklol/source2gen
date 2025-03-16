#pragma once
#include "source2sdk/server/CMarkupVolume.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x7d0
    // Has VTable
    // Construct disallowed
    // MConstructibleClassBase
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CMarkupVolumeTagged : public server::CMarkupVolume
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x798[0x30]; // 0x798
        bool m_bIsGroup; // 0x7c8        
        bool m_bGroupByPrefab; // 0x7c9        
        bool m_bGroupByVolume; // 0x7ca        
        bool m_bGroupOtherGroups; // 0x7cb        
        bool m_bIsInGroup; // 0x7cc        
        [[maybe_unused]] std::uint8_t pad_0x7cd[0x3];
        
        // Datamap fields:
        // void m_GroupNames; // 0x798
        // void m_Tags; // 0x7b0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CMarkupVolumeTagged because it is not a standard-layout class
    static_assert(sizeof(CMarkupVolumeTagged) == 0x7d0);
};
