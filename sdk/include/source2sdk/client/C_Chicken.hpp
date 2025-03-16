#pragma once
#include "source2sdk/client/C_AttributeContainer.hpp"
#include "source2sdk/client/C_DynamicProp.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CBaseAnimGraph;
};

namespace source2sdk::client
{
    class C_CSPlayerPawn;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x16f8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_jumpedThisFrame"
    // static metadata: MNetworkVarNames "CHandle< CCSPlayerPawn> m_leader"
    // static metadata: MNetworkVarNames "CAttributeContainer m_AttributeManager"
    #pragma pack(push, 1)
    class C_Chicken : public client::C_DynamicProp
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1228[0x8]; // 0x1228
        // m_hHolidayHatAddon has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<client::CBaseAnimGraph> m_hHolidayHatAddon; // 0x1230        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnJumpedChanged"
        bool m_jumpedThisFrame; // 0x1234        
        [[maybe_unused]] std::uint8_t pad_0x1235[0x3]; // 0x1235
        // metadata: MNetworkEnable
        // m_leader has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<client::C_CSPlayerPawn> m_leader; // 0x1238        
        [[maybe_unused]] std::uint8_t pad_0x123c[0x4]; // 0x123c
        // metadata: MNetworkEnable
        client::C_AttributeContainer m_AttributeManager; // 0x1240        
        bool m_bAttributesInitialized; // 0x16e8        
        [[maybe_unused]] std::uint8_t pad_0x16e9[0x3]; // 0x16e9
        client::ParticleIndex_t m_hWaterWakeParticles; // 0x16ec        
        bool m_bIsPreviewModel; // 0x16f0        
        [[maybe_unused]] std::uint8_t pad_0x16f1[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Chicken because it is not a standard-layout class
    static_assert(sizeof(C_Chicken) == 0x16f8);
};
