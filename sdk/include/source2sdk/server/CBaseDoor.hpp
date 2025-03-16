#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseToggle.hpp"
#include "source2sdk/server/FuncDoorSpawnPos_t.hpp"
#include "source2sdk/server/locksound_t.hpp"
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
    // Size: 0xa18
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bIsUsable"
    #pragma pack(push, 1)
    class CBaseDoor : public server::CBaseToggle
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x810[0x10]; // 0x810
        QAngle m_angMoveEntitySpace; // 0x820        
        Vector m_vecMoveDirParentSpace; // 0x82c        
        server::locksound_t m_ls; // 0x838        
        bool m_bForceClosed; // 0x858        
        bool m_bDoorGroup; // 0x859        
        bool m_bLocked; // 0x85a        
        bool m_bIgnoreDebris; // 0x85b        
        server::FuncDoorSpawnPos_t m_eSpawnPosition; // 0x85c        
        float m_flBlockDamage; // 0x860        
        [[maybe_unused]] std::uint8_t pad_0x864[0x4]; // 0x864
        CUtlSymbolLarge m_NoiseMoving; // 0x868        
        CUtlSymbolLarge m_NoiseArrived; // 0x870        
        CUtlSymbolLarge m_NoiseMovingClosed; // 0x878        
        CUtlSymbolLarge m_NoiseArrivedClosed; // 0x880        
        CUtlSymbolLarge m_ChainTarget; // 0x888        
        entity2::CEntityIOOutput m_OnBlockedClosing; // 0x890        
        entity2::CEntityIOOutput m_OnBlockedOpening; // 0x8b8        
        entity2::CEntityIOOutput m_OnUnblockedClosing; // 0x8e0        
        entity2::CEntityIOOutput m_OnUnblockedOpening; // 0x908        
        entity2::CEntityIOOutput m_OnFullyClosed; // 0x930        
        entity2::CEntityIOOutput m_OnFullyOpen; // 0x958        
        entity2::CEntityIOOutput m_OnClose; // 0x980        
        entity2::CEntityIOOutput m_OnOpen; // 0x9a8        
        entity2::CEntityIOOutput m_OnLockedUse; // 0x9d0        
        bool m_bLoopMoveSound; // 0x9f8        
        [[maybe_unused]] std::uint8_t pad_0x9f9[0x17]; // 0x9f9
        bool m_bCreateNavObstacle; // 0xa10        
        bool m_isChaining; // 0xa11        
        // metadata: MNetworkEnable
        bool m_bIsUsable; // 0xa12        
        [[maybe_unused]] std::uint8_t pad_0xa13[0x5];
        
        // Datamap fields:
        // void m_nMovingSoundGUID; // 0x9fc
        //  m_ls.sLockedSound; // 0x840
        //  m_ls.sUnlockedSound; // 0x848
        // void InputOpen; // 0x0
        // void InputClose; // 0x0
        // void InputToggle; // 0x0
        // void InputLock; // 0x0
        // void InputUnlock; // 0x0
        // float InputSetSpeed; // 0x0
        // float InputSetToggleState; // 0x0
        // void CBaseDoorDoorTouch; // 0x0
        // void CBaseDoorDoorGoUp; // 0x0
        // void CBaseDoorDoorGoDown; // 0x0
        // void CBaseDoorDoorHitTop; // 0x0
        // void CBaseDoorDoorHitBottom; // 0x0
        // void CBaseDoorMovingSoundThink; // 0x0
        // void CBaseDoorCloseAreaPortalsThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseDoor because it is not a standard-layout class
    static_assert(sizeof(CBaseDoor) == 0xa18);
};
