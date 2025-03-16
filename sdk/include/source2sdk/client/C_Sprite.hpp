#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
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
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xe38
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "HMaterialStrong m_hSpriteMaterial"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hAttachedToEntity"
    // static metadata: MNetworkVarNames "AttachmentHandle_t m_nAttachment"
    // static metadata: MNetworkVarNames "float32 m_flSpriteFramerate"
    // static metadata: MNetworkVarNames "float32 m_flFrame"
    // static metadata: MNetworkVarNames "uint32 m_nBrightness"
    // static metadata: MNetworkVarNames "float32 m_flBrightnessDuration"
    // static metadata: MNetworkVarNames "float32 m_flSpriteScale"
    // static metadata: MNetworkVarNames "float32 m_flScaleDuration"
    // static metadata: MNetworkVarNames "bool m_bWorldSpaceScale"
    // static metadata: MNetworkVarNames "float32 m_flGlowProxySize"
    // static metadata: MNetworkVarNames "float32 m_flHDRColorScale"
    #pragma pack(push, 1)
    class C_Sprite : public client::C_BaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        // m_hSpriteMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hSpriteMaterial; // 0xd28        
        // metadata: MNetworkEnable
        // m_hAttachedToEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<client::C_BaseEntity> m_hAttachedToEntity; // 0xd30        
        // metadata: MNetworkEnable
        modellib::AttachmentHandle_t m_nAttachment; // 0xd34        
        [[maybe_unused]] std::uint8_t pad_0xd35[0x3]; // 0xd35
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "8"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "60.000000"
        // metadata: MNetworkEncodeFlags "2"
        float m_flSpriteFramerate; // 0xd38        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "20"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "256.000000"
        // metadata: MNetworkEncodeFlags "1"
        float m_flFrame; // 0xd3c        
        entity2::GameTime_t m_flDieTime; // 0xd40        
        [[maybe_unused]] std::uint8_t pad_0xd44[0xc]; // 0xd44
        // metadata: MNetworkEnable
        uint32_t m_nBrightness; // 0xd50        
        // metadata: MNetworkEnable
        float m_flBrightnessDuration; // 0xd54        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnSpriteScaleChanged"
        float m_flSpriteScale; // 0xd58        
        // metadata: MNetworkEnable
        float m_flScaleDuration; // 0xd5c        
        // metadata: MNetworkEnable
        bool m_bWorldSpaceScale; // 0xd60        
        [[maybe_unused]] std::uint8_t pad_0xd61[0x3]; // 0xd61
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "6"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "64.000000"
        // metadata: MNetworkEncodeFlags "2"
        float m_flGlowProxySize; // 0xd64        
        // metadata: MNetworkEnable
        float m_flHDRColorScale; // 0xd68        
        entity2::GameTime_t m_flLastTime; // 0xd6c        
        float m_flMaxFrame; // 0xd70        
        float m_flStartScale; // 0xd74        
        float m_flDestScale; // 0xd78        
        entity2::GameTime_t m_flScaleTimeStart; // 0xd7c        
        int32_t m_nStartBrightness; // 0xd80        
        int32_t m_nDestBrightness; // 0xd84        
        entity2::GameTime_t m_flBrightnessTimeStart; // 0xd88        
        [[maybe_unused]] std::uint8_t pad_0xd8c[0x4]; // 0xd8c
        // m_hOldSpriteMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CWeakHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hOldSpriteMaterial; // 0xd90        
        [[maybe_unused]] std::uint8_t pad_0xd98[0x98]; // 0xd98
        int32_t m_nSpriteWidth; // 0xe30        
        int32_t m_nSpriteHeight; // 0xe34        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Sprite because it is not a standard-layout class
    static_assert(sizeof(C_Sprite) == 0xe38);
};
