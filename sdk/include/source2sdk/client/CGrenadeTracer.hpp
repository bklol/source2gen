#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/GrenadeType_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x1200
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CGrenadeTracer : public client::C_BaseModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xd28[0x18]; // 0xd28
        float m_flTracerDuration; // 0xd40        
        client::GrenadeType_t m_nType; // 0xd44        
        [[maybe_unused]] std::uint8_t pad_0xd48[0x4b8];
        
        // Static fields:
        static int32_t &Get_s_nColorIdx() {return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CGrenadeTracer")->GetStaticFields()[0]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CGrenadeTracer because it is not a standard-layout class
    static_assert(sizeof(CGrenadeTracer) == 0x1200);
};
