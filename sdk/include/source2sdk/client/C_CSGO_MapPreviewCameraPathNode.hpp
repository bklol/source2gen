#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
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
    // Size: 0x5b8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_CSGO_MapPreviewCameraPathNode : public client::C_BaseEntity
    {
    public:
        CUtlSymbolLarge m_szParentPathUniqueID; // 0x568        
        int32_t m_nPathIndex; // 0x570        
        Vector m_vInTangentLocal; // 0x574        
        Vector m_vOutTangentLocal; // 0x580        
        float m_flFOV; // 0x58c        
        float m_flCameraSpeed; // 0x590        
        float m_flEaseIn; // 0x594        
        float m_flEaseOut; // 0x598        
        Vector m_vInTangentWorld; // 0x59c        
        Vector m_vOutTangentWorld; // 0x5a8        
        [[maybe_unused]] std::uint8_t pad_0x5b4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_CSGO_MapPreviewCameraPathNode because it is not a standard-layout class
    static_assert(sizeof(C_CSGO_MapPreviewCameraPathNode) == 0x5b8);
};
