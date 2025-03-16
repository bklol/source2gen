#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CHostageExpresserShim.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/server/EntitySpottedState_t.hpp"
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
    class CCSPlayerPawnBase;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x2d60
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "EntitySpottedState_t m_entitySpottedState"
    // static metadata: MNetworkIncludeByName "m_iMaxHealth"
    // static metadata: MNetworkIncludeByName "m_iHealth"
    // static metadata: MNetworkIncludeByName "m_lifeState"
    // static metadata: MNetworkIncludeByName "m_fFlags"
    // static metadata: MNetworkIncludeByName "m_vecViewOffset"
    // static metadata: MNetworkVarNames "Vector m_vel"
    // static metadata: MNetworkVarNames "bool m_isRescued"
    // static metadata: MNetworkVarNames "bool m_jumpedThisFrame"
    // static metadata: MNetworkVarNames "int m_nHostageState"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_leader"
    // static metadata: MNetworkVarNames "CountdownTimer m_reuseTimer"
    // static metadata: MNetworkVarNames "bool m_bHandsHaveBeenCut"
    // static metadata: MNetworkVarNames "CHandle< CCSPlayerPawn> m_hHostageGrabber"
    // static metadata: MNetworkVarNames "GameTime_t m_flRescueStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flGrabSuccessTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flDropStartTime"
    #pragma pack(push, 1)
    class CHostage : public server::CHostageExpresserShim
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xac8[0x10]; // 0xac8
        entity2::CEntityIOOutput m_OnHostageBeginGrab; // 0xad8        
        entity2::CEntityIOOutput m_OnFirstPickedUp; // 0xb00        
        entity2::CEntityIOOutput m_OnDroppedNotRescued; // 0xb28        
        entity2::CEntityIOOutput m_OnRescued; // 0xb50        
        // metadata: MNetworkEnable
        server::EntitySpottedState_t m_entitySpottedState; // 0xb78        
        int32_t m_nSpotRules; // 0xb90        
        uint32_t m_uiHostageSpawnExclusionGroupMask; // 0xb94        
        uint32_t m_nHostageSpawnRandomFactor; // 0xb98        
        bool m_bRemove; // 0xb9c        
        [[maybe_unused]] std::uint8_t pad_0xb9d[0x3]; // 0xb9d
        // metadata: MNetworkEnable
        Vector m_vel; // 0xba0        
        // metadata: MNetworkEnable
        bool m_isRescued; // 0xbac        
        // metadata: MNetworkEnable
        bool m_jumpedThisFrame; // 0xbad        
        [[maybe_unused]] std::uint8_t pad_0xbae[0x2]; // 0xbae
        // metadata: MNetworkEnable
        int32_t m_nHostageState; // 0xbb0        
        // metadata: MNetworkEnable
        // m_leader has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<server::CBaseEntity> m_leader; // 0xbb4        
        // m_lastLeader has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<server::CCSPlayerPawnBase> m_lastLeader; // 0xbb8        
        [[maybe_unused]] std::uint8_t pad_0xbbc[0x4]; // 0xbbc
        // metadata: MNetworkEnable
        server::CountdownTimer m_reuseTimer; // 0xbc0        
        bool m_hasBeenUsed; // 0xbd8        
        [[maybe_unused]] std::uint8_t pad_0xbd9[0x3]; // 0xbd9
        Vector m_accel; // 0xbdc        
        bool m_isRunning; // 0xbe8        
        bool m_isCrouching; // 0xbe9        
        [[maybe_unused]] std::uint8_t pad_0xbea[0x6]; // 0xbea
        server::CountdownTimer m_jumpTimer; // 0xbf0        
        bool m_isWaitingForLeader; // 0xc08        
        [[maybe_unused]] std::uint8_t pad_0xc09[0x200f]; // 0xc09
        server::CountdownTimer m_repathTimer; // 0x2c18        
        server::CountdownTimer m_inhibitDoorTimer; // 0x2c30        
        [[maybe_unused]] std::uint8_t pad_0x2c48[0x78]; // 0x2c48
        server::CountdownTimer m_inhibitObstacleAvoidanceTimer; // 0x2cc0        
        [[maybe_unused]] std::uint8_t pad_0x2cd8[0x8]; // 0x2cd8
        server::CountdownTimer m_wiggleTimer; // 0x2ce0        
        [[maybe_unused]] std::uint8_t pad_0x2cf8[0x4]; // 0x2cf8
        bool m_isAdjusted; // 0x2cfc        
        // metadata: MNetworkEnable
        bool m_bHandsHaveBeenCut; // 0x2cfd        
        [[maybe_unused]] std::uint8_t pad_0x2cfe[0x2]; // 0x2cfe
        // metadata: MNetworkEnable
        // m_hHostageGrabber has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<server::CCSPlayerPawn> m_hHostageGrabber; // 0x2d00        
        entity2::GameTime_t m_fLastGrabTime; // 0x2d04        
        Vector m_vecPositionWhenStartedDroppingToGround; // 0x2d08        
        Vector m_vecGrabbedPos; // 0x2d14        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flRescueStartTime; // 0x2d20        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flGrabSuccessTime; // 0x2d24        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flDropStartTime; // 0x2d28        
        int32_t m_nApproachRewardPayouts; // 0x2d2c        
        int32_t m_nPickupEventCount; // 0x2d30        
        Vector m_vecSpawnGroundPos; // 0x2d34        
        [[maybe_unused]] std::uint8_t pad_0x2d40[0x14]; // 0x2d40
        Vector m_vecHostageResetPosition; // 0x2d54        
        
        // Datamap fields:
        // void HostageRescueZoneTouch; // 0x0
        // void CHostageHostageUse; // 0x0
        // void CHostageHostageThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CHostage because it is not a standard-layout class
    static_assert(sizeof(CHostage) == 0x2d60);
};
