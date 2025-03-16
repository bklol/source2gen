#pragma once
#include "source2sdk/client/BeamClipStyle_t.hpp"
#include "source2sdk/client/BeamType_t.hpp"
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
    // Size: 0xde8
    // Has VTable
    // Construct allowed
    // MNetworkNoBase
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkIncludeByUserGroup "Origin"
    // static metadata: MNetworkIncludeByName "m_nModelIndex"
    // static metadata: MNetworkIncludeByName "m_nRenderFX"
    // static metadata: MNetworkIncludeByName "m_nRenderMode"
    // static metadata: MNetworkIncludeByName "m_clrRender"
    // static metadata: MNetworkIncludeByName "CGameSceneNode::m_hParent"
    // static metadata: MNetworkOverride "m_clrRender"
    // static metadata: MNetworkVarNames "float32 m_flFrameRate"
    // static metadata: MNetworkVarNames "float32 m_flHDRColorScale"
    // static metadata: MNetworkVarNames "uint8 m_nNumBeamEnts"
    // static metadata: MNetworkVarNames "HMaterialStrong m_hBaseMaterial"
    // static metadata: MNetworkVarNames "HMaterialStrong m_nHaloIndex"
    // static metadata: MNetworkVarNames "BeamType_t m_nBeamType"
    // static metadata: MNetworkVarNames "uint32 m_nBeamFlags"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity > m_hAttachEntity"
    // static metadata: MNetworkVarNames "AttachmentHandle_t m_nAttachIndex"
    // static metadata: MNetworkVarNames "float32 m_fWidth"
    // static metadata: MNetworkVarNames "float32 m_fEndWidth"
    // static metadata: MNetworkVarNames "float32 m_fFadeLength"
    // static metadata: MNetworkVarNames "float32 m_fHaloScale"
    // static metadata: MNetworkVarNames "float32 m_fAmplitude"
    // static metadata: MNetworkVarNames "float32 m_fStartFrame"
    // static metadata: MNetworkVarNames "float32 m_fSpeed"
    // static metadata: MNetworkVarNames "float32 m_flFrame"
    // static metadata: MNetworkVarNames "BeamClipStyle_t m_nClipStyle"
    // static metadata: MNetworkVarNames "bool m_bTurnedOff"
    // static metadata: MNetworkVarNames "Vector m_vecEndPos"
    #pragma pack(push, 1)
    class C_Beam : public client::C_BaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "10"
        // metadata: MNetworkMinValue "-25.000000"
        // metadata: MNetworkMaxValue "25.000000"
        // metadata: MNetworkEncodeFlags "2"
        float m_flFrameRate; // 0xd28        
        // metadata: MNetworkEnable
        float m_flHDRColorScale; // 0xd2c        
        entity2::GameTime_t m_flFireTime; // 0xd30        
        float m_flDamage; // 0xd34        
        // metadata: MNetworkEnable
        uint8_t m_nNumBeamEnts; // 0xd38        
        [[maybe_unused]] std::uint8_t pad_0xd39[0x3]; // 0xd39
        int32_t m_queryHandleHalo; // 0xd3c        
        [[maybe_unused]] std::uint8_t pad_0xd40[0x20]; // 0xd40
        // metadata: MNetworkEnable
        // m_hBaseMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hBaseMaterial; // 0xd60        
        // metadata: MNetworkEnable
        // m_nHaloIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_nHaloIndex; // 0xd68        
        // metadata: MNetworkEnable
        client::BeamType_t m_nBeamType; // 0xd70        
        // metadata: MNetworkEnable
        uint32_t m_nBeamFlags; // 0xd74        
        // metadata: MNetworkEnable
        // m_hAttachEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<client::C_BaseEntity> m_hAttachEntity[10]; // 0xd78        
        // metadata: MNetworkEnable
        modellib::AttachmentHandle_t m_nAttachIndex[10]; // 0xda0        
        [[maybe_unused]] std::uint8_t pad_0xdaa[0x2]; // 0xdaa
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "10"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "102.300003"
        // metadata: MNetworkEncodeFlags "2"
        float m_fWidth; // 0xdac        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "10"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "102.300003"
        // metadata: MNetworkEncodeFlags "2"
        float m_fEndWidth; // 0xdb0        
        // metadata: MNetworkEnable
        float m_fFadeLength; // 0xdb4        
        // metadata: MNetworkEnable
        float m_fHaloScale; // 0xdb8        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "8"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "64.000000"
        // metadata: MNetworkEncodeFlags "1"
        float m_fAmplitude; // 0xdbc        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "8"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "256.000000"
        // metadata: MNetworkEncodeFlags "1"
        float m_fStartFrame; // 0xdc0        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "8"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "100.000000"
        float m_fSpeed; // 0xdc4        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "20"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "256.000000"
        // metadata: MNetworkEncodeFlags "1"
        // metadata: MNetworkPriority "32"
        float m_flFrame; // 0xdc8        
        // metadata: MNetworkEnable
        client::BeamClipStyle_t m_nClipStyle; // 0xdcc        
        // metadata: MNetworkEnable
        bool m_bTurnedOff; // 0xdd0        
        [[maybe_unused]] std::uint8_t pad_0xdd1[0x3]; // 0xdd1
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        Vector m_vecEndPos; // 0xdd4        
        // m_hEndEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<client::C_BaseEntity> m_hEndEntity; // 0xde0        
        [[maybe_unused]] std::uint8_t pad_0xde4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Beam because it is not a standard-layout class
    static_assert(sizeof(C_Beam) == 0xde8);
};
