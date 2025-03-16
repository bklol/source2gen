#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCSWeaponBaseGun.hpp"
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
    // Size: 0xfa0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "float m_flDisplayHealth"
    #pragma pack(push, 1)
    class CWeaponShield : public server::CCSWeaponBaseGun
    {
    public:
        float m_flBulletDamageAbsorbed; // 0xf90        
        entity2::GameTime_t m_flLastBulletHitSoundTime; // 0xf94        
        // metadata: MNetworkEnable
        float m_flDisplayHealth; // 0xf98        
        [[maybe_unused]] std::uint8_t pad_0xf9c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CWeaponShield because it is not a standard-layout class
    static_assert(sizeof(CWeaponShield) == 0xfa0);
};
