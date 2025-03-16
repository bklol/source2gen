#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
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
    // Size: 0xd60
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    // static metadata: MNetworkVarNames "HMaterialStrong m_hDecalMaterial"
    // static metadata: MNetworkVarNames "float m_flWidth"
    // static metadata: MNetworkVarNames "float m_flHeight"
    // static metadata: MNetworkVarNames "float m_flDepth"
    // static metadata: MNetworkVarNames "uint32 m_nRenderOrder"
    // static metadata: MNetworkVarNames "bool m_bProjectOnWorld"
    // static metadata: MNetworkVarNames "bool m_bProjectOnCharacters"
    // static metadata: MNetworkVarNames "bool m_bProjectOnWater"
    // static metadata: MNetworkVarNames "float m_flDepthSortBias"
    #pragma pack(push, 1)
    class C_EnvDecal : public client::C_BaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        // m_hDecalMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hDecalMaterial; // 0xd28        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnDecalDimensionsChanged"
        float m_flWidth; // 0xd30        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnDecalDimensionsChanged"
        float m_flHeight; // 0xd34        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnDecalDimensionsChanged"
        float m_flDepth; // 0xd38        
        // metadata: MNetworkEnable
        uint32_t m_nRenderOrder; // 0xd3c        
        // metadata: MNetworkEnable
        bool m_bProjectOnWorld; // 0xd40        
        // metadata: MNetworkEnable
        bool m_bProjectOnCharacters; // 0xd41        
        // metadata: MNetworkEnable
        bool m_bProjectOnWater; // 0xd42        
        [[maybe_unused]] std::uint8_t pad_0xd43[0x1]; // 0xd43
        // metadata: MNetworkEnable
        float m_flDepthSortBias; // 0xd44        
        [[maybe_unused]] std::uint8_t pad_0xd48[0x18];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_EnvDecal because it is not a standard-layout class
    static_assert(sizeof(C_EnvDecal) == 0xd60);
};
