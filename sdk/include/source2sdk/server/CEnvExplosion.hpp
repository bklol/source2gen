#pragma once
#include "source2sdk/client/Class_T.hpp"
#include "source2sdk/client/DamageTypes_t.hpp"
#include "source2sdk/server/CModelPointEntity.hpp"
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
    // Size: 0x7e8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CEnvExplosion : public server::CModelPointEntity
    {
    public:
        int32_t m_iMagnitude; // 0x790        
        float m_flPlayerDamage; // 0x794        
        int32_t m_iRadiusOverride; // 0x798        
        float m_flInnerRadius; // 0x79c        
        int32_t m_spriteScale; // 0x7a0        
        float m_flDamageForce; // 0x7a4        
        // m_hInflictor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<server::CBaseEntity> m_hInflictor; // 0x7a8        
        client::DamageTypes_t m_iCustomDamageType; // 0x7ac        
        bool m_bCreateDebris; // 0x7b0        
        [[maybe_unused]] std::uint8_t pad_0x7b1[0x7]; // 0x7b1
        CUtlSymbolLarge m_iszExplosionType; // 0x7b8        
        CUtlSymbolLarge m_iszCustomEffectName; // 0x7c0        
        CUtlSymbolLarge m_iszCustomSoundName; // 0x7c8        
        client::Class_T m_iClassIgnore; // 0x7d0        
        client::Class_T m_iClassIgnore2; // 0x7d4        
        CUtlSymbolLarge m_iszEntityIgnoreName; // 0x7d8        
        // m_hEntityIgnore has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<server::CBaseEntity> m_hEntityIgnore; // 0x7e0        
        [[maybe_unused]] std::uint8_t pad_0x7e4[0x4];
        
        // Datamap fields:
        // uint32_t m_nExplosionType; // 0x7b4
        // void CEnvExplosionSmoke; // 0x0
        // void InputExplode; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvExplosion because it is not a standard-layout class
    static_assert(sizeof(CEnvExplosion) == 0x7e8);
};
