#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x60
    // Has VTable
    // Is Abstract
    #pragma pack(push, 1)
    class CAnimGraphControllerBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x18]; // 0x0
        // m_sDestructiblePartDestroyedHitGroup has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CAnimGraphParamOptionalRef<char*> m_sDestructiblePartDestroyedHitGroup; // 0x18        
        // m_nDestructiblePartDestroyedPartIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CAnimGraphParamOptionalRef<int32_t> m_nDestructiblePartDestroyedPartIndex; // 0x40        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAnimGraphControllerBase, m_sDestructiblePartDestroyedHitGroup) == 0x18);
    static_assert(offsetof(CAnimGraphControllerBase, m_nDestructiblePartDestroyedPartIndex) == 0x40);
    
    static_assert(sizeof(CAnimGraphControllerBase) == 0x60);
};
