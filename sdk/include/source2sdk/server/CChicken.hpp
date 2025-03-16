#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CAttributeContainer.hpp"
#include "source2sdk/server/CDynamicProp.hpp"
#include "source2sdk/server/ChickenActivity.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
    class CCSPlayerPawn;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x3168
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CAttributeContainer m_AttributeManager"
    // static metadata: MNetworkVarNames "bool m_jumpedThisFrame"
    // static metadata: MNetworkVarNames "CHandle< CCSPlayerPawn> m_leader"
    #pragma pack(push, 1)
    class CChicken : public server::CDynamicProp
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc58[0x20]; // 0xc58
        // metadata: MNetworkEnable
        server::CAttributeContainer m_AttributeManager; // 0xc78        
        server::CountdownTimer m_updateTimer; // 0xf40        
        Vector m_stuckAnchor; // 0xf58        
        [[maybe_unused]] std::uint8_t pad_0xf64[0x4]; // 0xf64
        server::CountdownTimer m_stuckTimer; // 0xf68        
        server::CountdownTimer m_collisionStuckTimer; // 0xf80        
        bool m_isOnGround; // 0xf98        
        [[maybe_unused]] std::uint8_t pad_0xf99[0x3]; // 0xf99
        Vector m_vFallVelocity; // 0xf9c        
        server::ChickenActivity m_desiredActivity; // 0xfa8        
        server::ChickenActivity m_currentActivity; // 0xfac        
        server::CountdownTimer m_activityTimer; // 0xfb0        
        float m_turnRate; // 0xfc8        
        // m_fleeFrom has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<server::CBaseEntity> m_fleeFrom; // 0xfcc        
        server::CountdownTimer m_moveRateThrottleTimer; // 0xfd0        
        server::CountdownTimer m_startleTimer; // 0xfe8        
        server::CountdownTimer m_vocalizeTimer; // 0x1000        
        entity2::GameTime_t m_flWhenZombified; // 0x1018        
        // metadata: MNetworkEnable
        bool m_jumpedThisFrame; // 0x101c        
        [[maybe_unused]] std::uint8_t pad_0x101d[0x3]; // 0x101d
        // metadata: MNetworkEnable
        // m_leader has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<server::CCSPlayerPawn> m_leader; // 0x1020        
        [[maybe_unused]] std::uint8_t pad_0x1024[0x14]; // 0x1024
        server::CountdownTimer m_reuseTimer; // 0x1038        
        bool m_hasBeenUsed; // 0x1050        
        [[maybe_unused]] std::uint8_t pad_0x1051[0x7]; // 0x1051
        server::CountdownTimer m_jumpTimer; // 0x1058        
        float m_flLastJumpTime; // 0x1070        
        bool m_bInJump; // 0x1074        
        [[maybe_unused]] std::uint8_t pad_0x1075[0x200b]; // 0x1075
        server::CountdownTimer m_repathTimer; // 0x3080        
        [[maybe_unused]] std::uint8_t pad_0x3098[0x80]; // 0x3098
        Vector m_vecPathGoal; // 0x3118        
        entity2::GameTime_t m_flActiveFollowStartTime; // 0x3124        
        server::CountdownTimer m_followMinuteTimer; // 0x3128        
        [[maybe_unused]] std::uint8_t pad_0x3140[0x8]; // 0x3140
        server::CountdownTimer m_BlockDirectionTimer; // 0x3148        
        [[maybe_unused]] std::uint8_t pad_0x3160[0x8];
        
        // Datamap fields:
        // void CChickenChickenTouch; // 0x0
        // void CChickenChickenThink; // 0x0
        // void CChickenChickenUse; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CChicken because it is not a standard-layout class
    static_assert(sizeof(CChicken) == 0x3168);
};
