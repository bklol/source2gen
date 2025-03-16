#pragma once
#include "source2sdk/client/BreakableContentsType_t.hpp"
#include "source2sdk/client/CBaseProp.hpp"
#include "source2sdk/client/CPropDataComponent.hpp"
#include "source2sdk/client/PerformanceMode_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    class C_BasePlayerPawn;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1110
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
    // static metadata: MNetworkVarNames "bool m_noGhostCollision"
    #pragma pack(push, 1)
    class C_BreakableProp : public client::CBaseProp
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CPropDataComponent"
        // metadata: MNetworkAlias "CPropDataComponent"
        // metadata: MNetworkTypeAlias "CPropDataComponent"
        client::CPropDataComponent m_CPropDataComponent; // 0xfc8        
        entity2::CEntityIOOutput m_OnBreak; // 0x1008        
        // m_OnHealthChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CEntityOutputTemplate<float> m_OnHealthChanged; // 0x1030        
        entity2::CEntityIOOutput m_OnTakeDamage; // 0x1058        
        float m_impactEnergyScale; // 0x1080        
        int32_t m_iMinHealthDmg; // 0x1084        
        float m_flPressureDelay; // 0x1088        
        float m_flDefBurstScale; // 0x108c        
        Vector m_vDefBurstOffset; // 0x1090        
        // m_hBreaker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<client::C_BaseEntity> m_hBreaker; // 0x109c        
        client::PerformanceMode_t m_PerformanceMode; // 0x10a0        
        entity2::GameTime_t m_flPreventDamageBeforeTime; // 0x10a4        
        client::BreakableContentsType_t m_BreakableContentsType; // 0x10a8        
        [[maybe_unused]] std::uint8_t pad_0x10ac[0x4]; // 0x10ac
        CUtlString m_strBreakableContentsPropGroupOverride; // 0x10b0        
        CUtlString m_strBreakableContentsParticleOverride; // 0x10b8        
        bool m_bHasBreakPiecesOrCommands; // 0x10c0        
        [[maybe_unused]] std::uint8_t pad_0x10c1[0x3]; // 0x10c1
        float m_explodeDamage; // 0x10c4        
        float m_explodeRadius; // 0x10c8        
        [[maybe_unused]] std::uint8_t pad_0x10cc[0x4]; // 0x10cc
        float m_explosionDelay; // 0x10d0        
        [[maybe_unused]] std::uint8_t pad_0x10d4[0x4]; // 0x10d4
        CUtlSymbolLarge m_explosionBuildupSound; // 0x10d8        
        CUtlSymbolLarge m_explosionCustomEffect; // 0x10e0        
        CUtlSymbolLarge m_explosionCustomSound; // 0x10e8        
        CUtlSymbolLarge m_explosionModifier; // 0x10f0        
        // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<client::C_BasePlayerPawn> m_hPhysicsAttacker; // 0x10f8        
        entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0x10fc        
        float m_flDefaultFadeScale; // 0x1100        
        // m_hLastAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<client::C_BaseEntity> m_hLastAttacker; // 0x1104        
        // m_hFlareEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<client::C_BaseEntity> m_hFlareEnt; // 0x1108        
        // metadata: MNetworkEnable
        bool m_noGhostCollision; // 0x110c        
        [[maybe_unused]] std::uint8_t pad_0x110d[0x3];
        
        // Datamap fields:
        // void InputBreak; // 0x0
        // int32_t InputSetHealth; // 0x0
        // int32_t InputAddHealth; // 0x0
        // int32_t InputRemoveHealth; // 0x0
        // void C_BreakablePropBreakThink; // 0x0
        // void C_BreakablePropRampToDefaultFadeScale; // 0x0
        // uint32_t m_nExplosionType; // 0x10cc
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BreakableProp because it is not a standard-layout class
    static_assert(sizeof(C_BreakableProp) == 0x1110);
};
