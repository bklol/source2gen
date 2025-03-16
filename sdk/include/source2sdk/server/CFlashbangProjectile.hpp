#pragma once
#include "source2sdk/server/CBaseCSGrenadeProjectile.hpp"
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
    // Size: 0xb58
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CFlashbangProjectile : public server::CBaseCSGrenadeProjectile
    {
    public:
        float m_flTimeToDetonate; // 0xb50        
        uint8_t m_numOpponentsHit; // 0xb54        
        uint8_t m_numTeammatesHit; // 0xb55        
        [[maybe_unused]] std::uint8_t pad_0xb56[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFlashbangProjectile because it is not a standard-layout class
    static_assert(sizeof(CFlashbangProjectile) == 0xb58);
};
