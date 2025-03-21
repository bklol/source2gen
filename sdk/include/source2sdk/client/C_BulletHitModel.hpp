#pragma once
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xfd8
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class C_BulletHitModel : public client::CBaseAnimGraph
    {
    public:
        matrix3x4_t m_matLocal; // 0xf88        
        int32_t m_iBoneIndex; // 0xfb8        
        // m_hPlayerParent has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<client::C_BaseEntity> m_hPlayerParent; // 0xfbc        
        bool m_bIsHit; // 0xfc0        
        [[maybe_unused]] std::uint8_t pad_0xfc1[0x3]; // 0xfc1
        float m_flTimeCreated; // 0xfc4        
        Vector m_vecStartPos; // 0xfc8        
        [[maybe_unused]] std::uint8_t pad_0xfd4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BulletHitModel because it is not a standard-layout class
    static_assert(sizeof(C_BulletHitModel) == 0xfd8);
};
