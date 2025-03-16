#pragma once
#include "source2sdk/client/C_CS2WeaponModuleBase.hpp"
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
    // Size: 0xf98
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_StattrakModule : public client::C_CS2WeaponModuleBase
    {
    public:
        bool m_bKnife; // 0xf90        
        [[maybe_unused]] std::uint8_t pad_0xf91[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_StattrakModule because it is not a standard-layout class
    static_assert(sizeof(C_StattrakModule) == 0xf98);
};
