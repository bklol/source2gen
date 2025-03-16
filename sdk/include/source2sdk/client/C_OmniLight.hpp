#pragma once
#include "source2sdk/client/C_BarnLight.hpp"
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
    // Size: 0x1080
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "float m_flInnerAngle"
    // static metadata: MNetworkVarNames "float m_flOuterAngle"
    // static metadata: MNetworkVarNames "bool m_bShowLight"
    #pragma pack(push, 1)
    class C_OmniLight : public client::C_BarnLight
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        float m_flInnerAngle; // 0x1070        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        float m_flOuterAngle; // 0x1074        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RenderingChanged"
        bool m_bShowLight; // 0x1078        
        [[maybe_unused]] std::uint8_t pad_0x1079[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OmniLight because it is not a standard-layout class
    static_assert(sizeof(C_OmniLight) == 0x1080);
};
