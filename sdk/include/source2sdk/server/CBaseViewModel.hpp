#pragma once
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"
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
    class CBasePlayerWeapon;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x9f0
    // Has VTable
    // Construct allowed
    // MNetworkNoBase
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkIncludeByName "m_nModelIndex"
    // static metadata: MNetworkIncludeByName "m_hModel"
    // static metadata: MNetworkIncludeByName "m_hOwnerEntity"
    // static metadata: MNetworkIncludeByName "m_MeshGroupMask"
    // static metadata: MNetworkIncludeByName "m_fEffects"
    // static metadata: MNetworkIncludeByName "m_baseLayer.m_hSequence"
    // static metadata: MNetworkIncludeByName "m_animationController.m_flPlaybackRate"
    // static metadata: MNetworkIncludeByName "m_flAnimTime"
    // static metadata: MNetworkIncludeByName "m_flSimulationTime"
    // static metadata: MNetworkIncludeByName "m_animationController.m_animGraphNetworkedVars"
    // static metadata: MNetworkIncludeByName "m_nResetEventsParity"
    // static metadata: MNetworkExcludeByUserGroup "m_flPoseParameter"
    // static metadata: MNetworkOverride "m_fEffects"
    // static metadata: MNetworkIncludeByName "m_clrRender"
    // static metadata: MNetworkVarNames "uint32 m_nViewModelIndex"
    // static metadata: MNetworkVarNames "uint32 m_nAnimationParity"
    // static metadata: MNetworkVarNames "float32 m_flAnimationStartTime"
    // static metadata: MNetworkVarNames "CHandle< CBasePlayerWeapon> m_hWeapon"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hControlPanel"
    #pragma pack(push, 1)
    class CBaseViewModel : public server::CBaseAnimGraph
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x9a8[0x8]; // 0x9a8
        Vector m_vecLastFacing; // 0x9b0        
        // metadata: MNetworkEnable
        uint32_t m_nViewModelIndex; // 0x9bc        
        // metadata: MNetworkEnable
        uint32_t m_nAnimationParity; // 0x9c0        
        // metadata: MNetworkEnable
        float m_flAnimationStartTime; // 0x9c4        
        // metadata: MNetworkEnable
        // m_hWeapon has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<server::CBasePlayerWeapon> m_hWeapon; // 0x9c8        
        [[maybe_unused]] std::uint8_t pad_0x9cc[0x4]; // 0x9cc
        CUtlSymbolLarge m_sVMName; // 0x9d0        
        CUtlSymbolLarge m_sAnimationPrefix; // 0x9d8        
        animationsystem::HSequence m_hOldLayerSequence; // 0x9e0        
        int32_t m_oldLayer; // 0x9e4        
        float m_oldLayerStartTime; // 0x9e8        
        // metadata: MNetworkEnable
        // m_hControlPanel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<server::CBaseEntity> m_hControlPanel; // 0x9ec        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseViewModel because it is not a standard-layout class
    static_assert(sizeof(CBaseViewModel) == 0x9f0);
};
