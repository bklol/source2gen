#pragma once
#include "source2sdk/server/CSceneEntity.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xa58
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CInstancedSceneEntity : public server::CSceneEntity
    {
    public:
        // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<server::CBaseEntity> m_hOwner; // 0xa40        
        bool m_bHadOwner; // 0xa44        
        [[maybe_unused]] std::uint8_t pad_0xa45[0x3]; // 0xa45
        float m_flPostSpeakDelay; // 0xa48        
        float m_flPreDelay; // 0xa4c        
        bool m_bIsBackground; // 0xa50        
        bool m_bRemoveOnCompletion; // 0xa51        
        [[maybe_unused]] std::uint8_t pad_0xa52[0x2]; // 0xa52
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<server::CBaseEntity> m_hTarget; // 0xa54        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CInstancedSceneEntity because it is not a standard-layout class
    static_assert(sizeof(CInstancedSceneEntity) == 0xa58);
};
