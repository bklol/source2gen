#pragma once
#include "source2sdk/server/CBarnLight.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xab8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bShowLight"
    #pragma pack(push, 1)
    class CRectLight : public server::CBarnLight
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        bool m_bShowLight; // 0xab0        
        [[maybe_unused]] std::uint8_t pad_0xab1[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CRectLight because it is not a standard-layout class
    static_assert(sizeof(CRectLight) == 0xab8);
};
