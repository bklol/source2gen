#pragma once
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
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
    class C_BasePlayerWeapon;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xff0
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
    class C_BaseViewModel : public client::CBaseAnimGraph
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xf88[0x8]; // 0xf88
        Vector m_vecLastFacing; // 0xf90        
        // metadata: MNetworkEnable
        uint32_t m_nViewModelIndex; // 0xf9c        
        // metadata: MNetworkEnable
        uint32_t m_nAnimationParity; // 0xfa0        
        // metadata: MNetworkEnable
        float m_flAnimationStartTime; // 0xfa4        
        // metadata: MNetworkEnable
        // m_hWeapon has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<client::C_BasePlayerWeapon> m_hWeapon; // 0xfa8        
        [[maybe_unused]] std::uint8_t pad_0xfac[0x4]; // 0xfac
        CUtlSymbolLarge m_sVMName; // 0xfb0        
        CUtlSymbolLarge m_sAnimationPrefix; // 0xfb8        
        modellib::AttachmentHandle_t m_iCameraAttachment; // 0xfc0        
        [[maybe_unused]] std::uint8_t pad_0xfc1[0x3]; // 0xfc1
        QAngle m_vecLastCameraAngles; // 0xfc4        
        float m_previousElapsedDuration; // 0xfd0        
        float m_previousCycle; // 0xfd4        
        int32_t m_nOldAnimationParity; // 0xfd8        
        animationsystem::HSequence m_hOldLayerSequence; // 0xfdc        
        int32_t m_oldLayer; // 0xfe0        
        float m_oldLayerStartTime; // 0xfe4        
        // metadata: MNetworkEnable
        // m_hControlPanel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<client::C_BaseEntity> m_hControlPanel; // 0xfe8        
        [[maybe_unused]] std::uint8_t pad_0xfec[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BaseViewModel because it is not a standard-layout class
    static_assert(sizeof(C_BaseViewModel) == 0xff0);
};
