#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseFlex.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CCSPlayerPawn;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xae0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkIncludeByName "m_fFlags"
    // static metadata: MNetworkIncludeByName "m_vecVelocity"
    // static metadata: MNetworkExcludeByName "m_flexWeight"
    // static metadata: MNetworkExcludeByName "m_blinktoggle"
    // static metadata: MNetworkExcludeByUserGroup "m_flPoseParameter"
    // static metadata: MNetworkExcludeByName "m_nResetEventsParity"
    // static metadata: MNetworkExcludeByUserGroup "overlay_vars"
    // static metadata: MNetworkExcludeByName "m_flAnimTime"
    // static metadata: MNetworkExcludeByUserGroup "m_flCycle"
    // static metadata: MNetworkExcludeByName "m_baseLayer.m_hSequence"
    // static metadata: MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
    // static metadata: MNetworkExcludeByName "m_nNewSequenceParity"
    // static metadata: MNetworkVarNames "bool m_bIsLive"
    // static metadata: MNetworkVarNames "float32 m_DmgRadius"
    // static metadata: MNetworkVarNames "GameTime_t m_flDetonateTime"
    // static metadata: MNetworkVarNames "float32 m_flDamage"
    // static metadata: MNetworkVarNames "CHandle< CCSPlayerPawn > m_hThrower"
    #pragma pack(push, 1)
    class CBaseGrenade : public server::CBaseFlex
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xa38[0x8]; // 0xa38
        entity2::CEntityIOOutput m_OnPlayerPickup; // 0xa40        
        entity2::CEntityIOOutput m_OnExplode; // 0xa68        
        bool m_bHasWarnedAI; // 0xa90        
        bool m_bIsSmokeGrenade; // 0xa91        
        // metadata: MNetworkEnable
        bool m_bIsLive; // 0xa92        
        [[maybe_unused]] std::uint8_t pad_0xa93[0x1]; // 0xa93
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "10"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "1024.000000"
        // metadata: MNetworkEncodeFlags "1"
        float m_DmgRadius; // 0xa94        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flDetonateTime; // 0xa98        
        float m_flWarnAITime; // 0xa9c        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "10"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "256.000000"
        // metadata: MNetworkEncodeFlags "1"
        float m_flDamage; // 0xaa0        
        [[maybe_unused]] std::uint8_t pad_0xaa4[0x4]; // 0xaa4
        CUtlSymbolLarge m_iszBounceSound; // 0xaa8        
        CUtlString m_ExplosionSound; // 0xab0        
        [[maybe_unused]] std::uint8_t pad_0xab8[0x4]; // 0xab8
        // metadata: MNetworkEnable
        // m_hThrower has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<server::CCSPlayerPawn> m_hThrower; // 0xabc        
        [[maybe_unused]] std::uint8_t pad_0xac0[0x14]; // 0xac0
        entity2::GameTime_t m_flNextAttack; // 0xad4        
        // m_hOriginalThrower has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<server::CCSPlayerPawn> m_hOriginalThrower; // 0xad8        
        [[maybe_unused]] std::uint8_t pad_0xadc[0x4];
        
        // Datamap fields:
        // int32_t m_nExplosionType; // 0xab8
        // void CBaseGrenadeSmoke; // 0x0
        // void CBaseGrenadeBounceTouch; // 0x0
        // void CBaseGrenadeSlideTouch; // 0x0
        // void CBaseGrenadeExplodeTouch; // 0x0
        // void CBaseGrenadeDetonateUse; // 0x0
        // void CBaseGrenadeDangerSoundThink; // 0x0
        // void CBaseGrenadePreDetonate; // 0x0
        // void CBaseGrenadeDetonate; // 0x0
        // void CBaseGrenadeTumbleThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseGrenade because it is not a standard-layout class
    static_assert(sizeof(CBaseGrenade) == 0xae0);
};
