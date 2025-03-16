#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/EntityDisolveType_t.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd70
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
    // static metadata: MNetworkVarNames "float32 m_flFadeInStart"
    // static metadata: MNetworkVarNames "float32 m_flFadeInLength"
    // static metadata: MNetworkVarNames "float32 m_flFadeOutModelStart"
    // static metadata: MNetworkVarNames "float32 m_flFadeOutModelLength"
    // static metadata: MNetworkVarNames "float32 m_flFadeOutStart"
    // static metadata: MNetworkVarNames "float32 m_flFadeOutLength"
    // static metadata: MNetworkVarNames "EntityDisolveType_t m_nDissolveType"
    // static metadata: MNetworkVarNames "Vector m_vDissolverOrigin"
    // static metadata: MNetworkVarNames "uint32 m_nMagnitude"
    #pragma pack(push, 1)
    class C_EntityDissolve : public client::C_BaseModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xd28[0x8]; // 0xd28
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStartTime; // 0xd30        
        // metadata: MNetworkEnable
        float m_flFadeInStart; // 0xd34        
        // metadata: MNetworkEnable
        float m_flFadeInLength; // 0xd38        
        // metadata: MNetworkEnable
        float m_flFadeOutModelStart; // 0xd3c        
        // metadata: MNetworkEnable
        float m_flFadeOutModelLength; // 0xd40        
        // metadata: MNetworkEnable
        float m_flFadeOutStart; // 0xd44        
        // metadata: MNetworkEnable
        float m_flFadeOutLength; // 0xd48        
        entity2::GameTime_t m_flNextSparkTime; // 0xd4c        
        // metadata: MNetworkEnable
        client::EntityDisolveType_t m_nDissolveType; // 0xd50        
        // metadata: MNetworkEnable
        Vector m_vDissolverOrigin; // 0xd54        
        // metadata: MNetworkEnable
        uint32_t m_nMagnitude; // 0xd60        
        bool m_bCoreExplode; // 0xd64        
        bool m_bLinkedToServerEnt; // 0xd65        
        [[maybe_unused]] std::uint8_t pad_0xd66[0xa];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_EntityDissolve because it is not a standard-layout class
    static_assert(sizeof(C_EntityDissolve) == 0xd70);
};
