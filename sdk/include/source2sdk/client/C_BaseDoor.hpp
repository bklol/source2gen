#pragma once
#include "source2sdk/client/C_BaseToggle.hpp"
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
    // Size: 0xd30
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bIsUsable"
    #pragma pack(push, 1)
    class C_BaseDoor : public client::C_BaseToggle
    {
    public:
        // metadata: MNetworkEnable
        bool m_bIsUsable; // 0xd28        
        [[maybe_unused]] std::uint8_t pad_0xd29[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BaseDoor because it is not a standard-layout class
    static_assert(sizeof(C_BaseDoor) == 0xd30);
};
