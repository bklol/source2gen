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
    class C_KeychainModule : public client::C_CS2WeaponModuleBase
    {
    public:
        uint32_t m_nKeychainDefID; // 0xf90        
        uint32_t m_nKeychainSeed; // 0xf94        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_KeychainModule because it is not a standard-layout class
    static_assert(sizeof(C_KeychainModule) == 0xf98);
};
