#pragma once
#include "source2sdk/client/DamageTypes_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseTrigger.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xa00
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CTriggerHurt : public server::CBaseTrigger
    {
    public:
        float m_flOriginalDamage; // 0x960        
        float m_flDamage; // 0x964        
        float m_flDamageCap; // 0x968        
        entity2::GameTime_t m_flLastDmgTime; // 0x96c        
        float m_flForgivenessDelay; // 0x970        
        client::DamageTypes_t m_bitsDamageInflict; // 0x974        
        int32_t m_damageModel; // 0x978        
        bool m_bNoDmgForce; // 0x97c        
        [[maybe_unused]] std::uint8_t pad_0x97d[0x3]; // 0x97d
        Vector m_vDamageForce; // 0x980        
        bool m_thinkAlways; // 0x98c        
        [[maybe_unused]] std::uint8_t pad_0x98d[0x3]; // 0x98d
        float m_hurtThinkPeriod; // 0x990        
        [[maybe_unused]] std::uint8_t pad_0x994[0x4]; // 0x994
        entity2::CEntityIOOutput m_OnHurt; // 0x998        
        entity2::CEntityIOOutput m_OnHurtPlayer; // 0x9c0        
        // m_hurtEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CUtlVector<CHandle<server::CBaseEntity>> m_hurtEntities; // 0x9e8        
        
        // Datamap fields:
        // void CTriggerHurtRadiationThink; // 0x0
        // void CTriggerHurtHurtThink; // 0x0
        // void CTriggerHurtNavThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerHurt because it is not a standard-layout class
    static_assert(sizeof(CTriggerHurt) == 0xa00);
};
