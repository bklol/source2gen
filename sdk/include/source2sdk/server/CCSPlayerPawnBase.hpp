#pragma once
#include "source2sdk/client/CSPlayerState.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBasePlayerPawn.hpp"
#include "source2sdk/server/CTouchExpansionComponent.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CCSPlayerController;
};

namespace source2sdk::server
{
    class CCSPlayer_PingServices;
};

namespace source2sdk::server
{
    class CPlayer_ViewModelServices;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xdc8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CTouchExpansionComponent::Storage_t m_CTouchExpansionComponent"
    // static metadata: MNetworkExcludeByName "m_flAnimTime"
    // static metadata: MNetworkExcludeByName "m_flexWeight"
    // static metadata: MNetworkExcludeByUserGroup "m_flPoseParameter"
    // static metadata: MNetworkExcludeByName "m_baseLayer.m_hSequence"
    // static metadata: MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
    // static metadata: MNetworkVarNames "CCSPlayer_PingServices * m_pPingServices"
    // static metadata: MNetworkVarNames "CPlayer_ViewModelServices * m_pViewModelServices"
    // static metadata: MNetworkVarNames "CSPlayerState m_iPlayerState"
    // static metadata: MNetworkVarNames "GameTime_t m_fImmuneToGunGameDamageTime"
    // static metadata: MNetworkVarNames "bool m_bGunGameImmunity"
    // static metadata: MNetworkVarNames "float m_fMolotovDamageTime"
    // static metadata: MNetworkVarNames "bool m_bHasMovedSinceSpawn"
    // static metadata: MNetworkVarNames "float m_flFlashDuration"
    // static metadata: MNetworkVarNames "float m_flFlashMaxAlpha"
    // static metadata: MNetworkVarNames "float m_flProgressBarStartTime"
    // static metadata: MNetworkVarNames "int m_iProgressBarDuration"
    // static metadata: MNetworkVarNames "QAngle m_angEyeAngles"
    // static metadata: MNetworkVarNames "CHandle< CCSPlayerController> m_hOriginalController"
    #pragma pack(push, 1)
    class CCSPlayerPawnBase : public server::CBasePlayerPawn
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc58[0x10]; // 0xc58
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CTouchExpansionComponent"
        // metadata: MNetworkAlias "CTouchExpansionComponent"
        // metadata: MNetworkTypeAlias "CTouchExpansionComponent"
        server::CTouchExpansionComponent m_CTouchExpansionComponent; // 0xc68        
        // metadata: MNetworkEnable
        server::CCSPlayer_PingServices* m_pPingServices; // 0xcb8        
        // metadata: MNetworkEnable
        server::CPlayer_ViewModelServices* m_pViewModelServices; // 0xcc0        
        entity2::GameTime_t m_blindUntilTime; // 0xcc8        
        entity2::GameTime_t m_blindStartTime; // 0xccc        
        // metadata: MNetworkEnable
        client::CSPlayerState m_iPlayerState; // 0xcd0        
        [[maybe_unused]] std::uint8_t pad_0xcd4[0xac]; // 0xcd4
        bool m_bRespawning; // 0xd80        
        [[maybe_unused]] std::uint8_t pad_0xd81[0x3]; // 0xd81
        // metadata: MNetworkEnable
        entity2::GameTime_t m_fImmuneToGunGameDamageTime; // 0xd84        
        // metadata: MNetworkEnable
        bool m_bGunGameImmunity; // 0xd88        
        [[maybe_unused]] std::uint8_t pad_0xd89[0x3]; // 0xd89
        // metadata: MNetworkEnable
        float m_fMolotovDamageTime; // 0xd8c        
        // metadata: MNetworkEnable
        bool m_bHasMovedSinceSpawn; // 0xd90        
        [[maybe_unused]] std::uint8_t pad_0xd91[0x3]; // 0xd91
        int32_t m_iNumSpawns; // 0xd94        
        [[maybe_unused]] std::uint8_t pad_0xd98[0x4]; // 0xd98
        float m_flIdleTimeSinceLastAction; // 0xd9c        
        float m_fNextRadarUpdateTime; // 0xda0        
        // metadata: MNetworkEnable
        float m_flFlashDuration; // 0xda4        
        // metadata: MNetworkEnable
        float m_flFlashMaxAlpha; // 0xda8        
        // metadata: MNetworkEnable
        float m_flProgressBarStartTime; // 0xdac        
        // metadata: MNetworkEnable
        int32_t m_iProgressBarDuration; // 0xdb0        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle_precise"
        // metadata: MNetworkPriority "32"
        QAngle m_angEyeAngles; // 0xdb4        
        bool m_wasNotKilledNaturally; // 0xdc0        
        bool m_bCommittingSuicideOnTeamChange; // 0xdc1        
        [[maybe_unused]] std::uint8_t pad_0xdc2[0x2]; // 0xdc2
        // metadata: MNetworkEnable
        // m_hOriginalController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<server::CCSPlayerController> m_hOriginalController; // 0xdc4        
        
        // Datamap fields:
        // CHandle< CBaseEntity > original_controller; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSPlayerPawnBase because it is not a standard-layout class
    static_assert(sizeof(CCSPlayerPawnBase) == 0xdc8);
};
