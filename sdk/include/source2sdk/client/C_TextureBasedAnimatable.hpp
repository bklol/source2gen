#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"
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
    // static metadata: MNetworkVarNames "bool m_bLoop"
    // static metadata: MNetworkVarNames "float m_flFPS"
    // static metadata: MNetworkVarNames "HRenderTextureStrong m_hPositionKeys"
    // static metadata: MNetworkVarNames "HRenderTextureStrong m_hRotationKeys"
    // static metadata: MNetworkVarNames "Vector m_vAnimationBoundsMin"
    // static metadata: MNetworkVarNames "Vector m_vAnimationBoundsMax"
    // static metadata: MNetworkVarNames "float m_flStartTime"
    // static metadata: MNetworkVarNames "float m_flStartFrame"
    #pragma pack(push, 1)
    class C_TextureBasedAnimatable : public client::C_BaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        bool m_bLoop; // 0xd28        
        [[maybe_unused]] std::uint8_t pad_0xd29[0x3]; // 0xd29
        // metadata: MNetworkEnable
        float m_flFPS; // 0xd2c        
        // metadata: MNetworkEnable
        // m_hPositionKeys has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_hPositionKeys; // 0xd30        
        // metadata: MNetworkEnable
        // m_hRotationKeys has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_hRotationKeys; // 0xd38        
        // metadata: MNetworkEnable
        Vector m_vAnimationBoundsMin; // 0xd40        
        // metadata: MNetworkEnable
        Vector m_vAnimationBoundsMax; // 0xd4c        
        // metadata: MNetworkEnable
        float m_flStartTime; // 0xd58        
        // metadata: MNetworkEnable
        float m_flStartFrame; // 0xd5c        
        
        // Datamap fields:
        // void InputStart; // 0x0
        // void InputStop; // 0x0
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_TextureBasedAnimatable because it is not a standard-layout class
    static_assert(sizeof(C_TextureBasedAnimatable) == 0xd60);
};
