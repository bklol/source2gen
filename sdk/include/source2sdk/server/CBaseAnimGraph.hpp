#pragma once
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/PhysicsRagdollPose_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class IChoreoServices;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x9a8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkIncludeByName "m_bClientSideRagdoll"
    // static metadata: MNetworkVarNames "bool m_bInitiallyPopulateInterpHistory"
    // static metadata: MNetworkVarNames "bool m_bAnimGraphUpdateEnabled"
    // static metadata: MNetworkVarNames "Vector m_vecForce"
    // static metadata: MNetworkVarNames "int32 m_nForceBone"
    // static metadata: MNetworkVarNames "PhysicsRagdollPose_t m_RagdollPose"
    // static metadata: MNetworkVarNames "bool m_bRagdollClientSide"
    #pragma pack(push, 1)
    class CBaseAnimGraph : public server::CBaseModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x790[0x78]; // 0x790
        // metadata: MNetworkEnable
        bool m_bInitiallyPopulateInterpHistory; // 0x808        
        [[maybe_unused]] std::uint8_t pad_0x809[0x7]; // 0x809
        client::IChoreoServices* m_pChoreoServices; // 0x810        
        // metadata: MNetworkEnable
        bool m_bAnimGraphUpdateEnabled; // 0x818        
        [[maybe_unused]] std::uint8_t pad_0x819[0x3]; // 0x819
        float m_flMaxSlopeDistance; // 0x81c        
        Vector m_vLastSlopeCheckPos; // 0x820        
        bool m_bAnimationUpdateScheduled; // 0x82c        
        [[maybe_unused]] std::uint8_t pad_0x82d[0x3]; // 0x82d
        // metadata: MNetworkEnable
        Vector m_vecForce; // 0x830        
        // metadata: MNetworkEnable
        int32_t m_nForceBone; // 0x83c        
        [[maybe_unused]] std::uint8_t pad_0x840[0x10]; // 0x840
        // metadata: MNetworkEnable
        server::PhysicsRagdollPose_t m_RagdollPose; // 0x850        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnClientRagdollChanged"
        bool m_bRagdollClientSide; // 0x878        
        [[maybe_unused]] std::uint8_t pad_0x879[0x127]; // 0x879
        int32_t m_nLastDestructiblePartDestroyedAnimgraphSetTick; // 0x9a0        
        [[maybe_unused]] std::uint8_t pad_0x9a4[0x4];
        
        // Datamap fields:
        // void m_pMainGraphController; // 0x800
        // void CBaseAnimGraphChoreoServicesThink; // 0x0
        // float InputSetPlaybackRate; // 0x0
        // CUtlSymbolLarge InputSetBodyGroup; // 0x0
        // void InputBecomeRagdoll; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseAnimGraph because it is not a standard-layout class
    static_assert(sizeof(CBaseAnimGraph) == 0x9a8);
};
