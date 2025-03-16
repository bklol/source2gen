#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CPlayer_MovementServices_Humanoid.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x4f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "Vector m_vecLadderNormal"
    // static metadata: MNetworkVarNames "int m_nLadderSurfacePropIndex"
    // static metadata: MNetworkVarNames "float m_flDuckAmount"
    // static metadata: MNetworkVarNames "float m_flDuckSpeed"
    // static metadata: MNetworkVarNames "bool m_bDuckOverride"
    // static metadata: MNetworkVarNames "bool m_bDesiresDuck"
    // static metadata: MNetworkVarNames "uint32 m_nDuckTimeMsecs"
    // static metadata: MNetworkVarNames "uint32 m_nDuckJumpTimeMsecs"
    // static metadata: MNetworkVarNames "uint32 m_nJumpTimeMsecs"
    // static metadata: MNetworkVarNames "float m_flLastDuckTime"
    // static metadata: MNetworkVarNames "int m_nGameCodeHasMovedPlayerAfterCommand"
    // static metadata: MNetworkVarNames "bool m_bOldJumpPressed"
    // static metadata: MNetworkVarNames "GameTime_t m_fStashGrenadeParameterWhen"
    // static metadata: MNetworkVarNames "ButtonBitMask_t m_nButtonDownMaskPrev"
    // static metadata: MNetworkVarNames "float m_flOffsetTickCompleteTime"
    // static metadata: MNetworkVarNames "float m_flOffsetTickStashedSpeed"
    // static metadata: MNetworkVarNames "float m_flStamina"
    #pragma pack(push, 1)
    class CCSPlayer_MovementServices : public server::CPlayer_MovementServices_Humanoid
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "normal"
        Vector m_vecLadderNormal; // 0x228        
        // metadata: MNetworkEnable
        int32_t m_nLadderSurfacePropIndex; // 0x234        
        // metadata: MNetworkEnable
        float m_flDuckAmount; // 0x238        
        // metadata: MNetworkEnable
        float m_flDuckSpeed; // 0x23c        
        // metadata: MNetworkEnable
        bool m_bDuckOverride; // 0x240        
        // metadata: MNetworkEnable
        bool m_bDesiresDuck; // 0x241        
        [[maybe_unused]] std::uint8_t pad_0x242[0x2]; // 0x242
        float m_flDuckOffset; // 0x244        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // metadata: MNetworkPriority "32"
        uint32_t m_nDuckTimeMsecs; // 0x248        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        uint32_t m_nDuckJumpTimeMsecs; // 0x24c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        uint32_t m_nJumpTimeMsecs; // 0x250        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        float m_flLastDuckTime; // 0x254        
        [[maybe_unused]] std::uint8_t pad_0x258[0x8]; // 0x258
        Vector2D m_vecLastPositionAtFullCrouchSpeed; // 0x260        
        bool m_duckUntilOnGround; // 0x268        
        bool m_bHasWalkMovedSinceLastJump; // 0x269        
        bool m_bInStuckTest; // 0x26a        
        [[maybe_unused]] std::uint8_t pad_0x26b[0xd]; // 0x26b
        float m_flStuckCheckTime[2][64]; // 0x278        
        int32_t m_nTraceCount; // 0x478        
        int32_t m_StuckLast; // 0x47c        
        bool m_bSpeedCropped; // 0x480        
        [[maybe_unused]] std::uint8_t pad_0x481[0x3]; // 0x481
        float m_flGroundMoveEfficiency; // 0x484        
        int32_t m_nOldWaterLevel; // 0x488        
        float m_flWaterEntryTime; // 0x48c        
        Vector m_vecForward; // 0x490        
        Vector m_vecLeft; // 0x49c        
        Vector m_vecUp; // 0x4a8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        int32_t m_nGameCodeHasMovedPlayerAfterCommand; // 0x4b4        
        bool m_bMadeFootstepNoise; // 0x4b8        
        [[maybe_unused]] std::uint8_t pad_0x4b9[0x3]; // 0x4b9
        int32_t m_iFootsteps; // 0x4bc        
        // metadata: MNetworkEnable
        bool m_bOldJumpPressed; // 0x4c0        
        [[maybe_unused]] std::uint8_t pad_0x4c1[0x3]; // 0x4c1
        float m_flJumpPressedTime; // 0x4c4        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_fStashGrenadeParameterWhen; // 0x4c8        
        [[maybe_unused]] std::uint8_t pad_0x4cc[0x4]; // 0x4cc
        // metadata: MNetworkEnable
        uint64_t m_nButtonDownMaskPrev; // 0x4d0        
        // metadata: MNetworkEnable
        float m_flOffsetTickCompleteTime; // 0x4d8        
        // metadata: MNetworkEnable
        float m_flOffsetTickStashedSpeed; // 0x4dc        
        // metadata: MNetworkEnable
        float m_flStamina; // 0x4e0        
        float m_flHeightAtJumpStart; // 0x4e4        
        float m_flMaxJumpHeightThisJump; // 0x4e8        
        float m_flMaxJumpHeightLastJump; // 0x4ec        
        float m_flStaminaAtJumpStart; // 0x4f0        
        float m_flAccumulatedJumpError; // 0x4f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSPlayer_MovementServices because it is not a standard-layout class
    static_assert(sizeof(CCSPlayer_MovementServices) == 0x4f8);
};
