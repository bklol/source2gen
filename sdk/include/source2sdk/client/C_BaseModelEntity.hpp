#pragma once
#include "source2sdk/client/CCollisionProperty.hpp"
#include "source2sdk/client/CGlowProperty.hpp"
#include "source2sdk/client/CHitboxComponent.hpp"
#include "source2sdk/client/CNetworkViewOffsetVector.hpp"
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/EntityRenderAttribute_t.hpp"
#include "source2sdk/client/HitGroup_t.hpp"
#include "source2sdk/client/RenderFx_t.hpp"
#include "source2sdk/client/RenderMode_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CClientAlphaProperty;
};

namespace source2sdk::client
{
    class CRenderComponent;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd28
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CRenderComponent::Storage_t m_CRenderComponent"
    // static metadata: MNetworkVarNames "CHitboxComponent::Storage_t m_CHitboxComponent"
    // static metadata: MNetworkVarNames "RenderMode_t m_nRenderMode"
    // static metadata: MNetworkVarNames "RenderFx_t m_nRenderFX"
    // static metadata: MNetworkVarNames "Color m_clrRender"
    // static metadata: MNetworkVarNames "EntityRenderAttribute_t m_vecRenderAttributes"
    // static metadata: MNetworkVarNames "bool m_bRenderToCubemaps"
    // static metadata: MNetworkVarNames "bool m_bNoInterpolate"
    // static metadata: MNetworkVarNames "CCollisionProperty m_Collision"
    // static metadata: MNetworkVarNames "CGlowProperty m_Glow"
    // static metadata: MNetworkVarNames "float m_flGlowBackfaceMult"
    // static metadata: MNetworkVarNames "float32 m_fadeMinDist"
    // static metadata: MNetworkVarNames "float32 m_fadeMaxDist"
    // static metadata: MNetworkVarNames "float32 m_flFadeScale"
    // static metadata: MNetworkVarNames "float32 m_flShadowStrength"
    // static metadata: MNetworkVarNames "uint8 m_nObjectCulling"
    // static metadata: MNetworkVarNames "int m_nAddDecal"
    // static metadata: MNetworkVarNames "Vector m_vDecalPosition"
    // static metadata: MNetworkVarNames "Vector m_vDecalForwardAxis"
    // static metadata: MNetworkVarNames "float m_flDecalHealBloodRate"
    // static metadata: MNetworkVarNames "float m_flDecalHealHeightRate"
    // static metadata: MNetworkVarNames "CHandle< C_BaseModelEntity > m_ConfigEntitiesToPropagateMaterialDecalsTo"
    #pragma pack(push, 1)
    class C_BaseModelEntity : public client::C_BaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x568[0x4e8]; // 0x568
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CRenderComponent"
        // metadata: MNetworkAlias "CRenderComponent"
        // metadata: MNetworkTypeAlias "CRenderComponent"
        client::CRenderComponent* m_CRenderComponent; // 0xa50        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CHitboxComponent"
        // metadata: MNetworkAlias "CHitboxComponent"
        // metadata: MNetworkTypeAlias "CHitboxComponent"
        client::CHitboxComponent m_CHitboxComponent; // 0xa58        
        client::HitGroup_t m_LastHitGroup; // 0xa80        
        [[maybe_unused]] std::uint8_t pad_0xa84[0x24]; // 0xa84
        bool m_bInitModelEffects; // 0xaa8        
        bool m_bIsStaticProp; // 0xaa9        
        [[maybe_unused]] std::uint8_t pad_0xaaa[0x2]; // 0xaaa
        int32_t m_nLastAddDecal; // 0xaac        
        int32_t m_nDecalsAdded; // 0xab0        
        int32_t m_iOldHealth; // 0xab4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnRenderModeChanged"
        client::RenderMode_t m_nRenderMode; // 0xab8        
        // metadata: MNetworkEnable
        client::RenderFx_t m_nRenderFX; // 0xab9        
        bool m_bAllowFadeInView; // 0xaba        
        [[maybe_unused]] std::uint8_t pad_0xabb[0x1d]; // 0xabb
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnColorChanged"
        Color m_clrRender; // 0xad8        
        [[maybe_unused]] std::uint8_t pad_0xadc[0x4]; // 0xadc
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnRenderAttributesChanged"
        // m_vecRenderAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        C_UtlVectorEmbeddedNetworkVar<client::EntityRenderAttribute_t> m_vecRenderAttributes; // 0xae0        
        [[maybe_unused]] std::uint8_t pad_0xb30[0x18]; // 0xb30
        // metadata: MNetworkEnable
        bool m_bRenderToCubemaps; // 0xb48        
        // metadata: MNetworkEnable
        bool m_bNoInterpolate; // 0xb49        
        [[maybe_unused]] std::uint8_t pad_0xb4a[0x6]; // 0xb4a
        // metadata: MNetworkEnable
        client::CCollisionProperty m_Collision; // 0xb50        
        // metadata: MNetworkEnable
        client::CGlowProperty m_Glow; // 0xc00        
        // metadata: MNetworkEnable
        float m_flGlowBackfaceMult; // 0xc58        
        // metadata: MNetworkEnable
        float m_fadeMinDist; // 0xc5c        
        // metadata: MNetworkEnable
        float m_fadeMaxDist; // 0xc60        
        // metadata: MNetworkEnable
        float m_flFadeScale; // 0xc64        
        // metadata: MNetworkEnable
        float m_flShadowStrength; // 0xc68        
        // metadata: MNetworkEnable
        uint8_t m_nObjectCulling; // 0xc6c        
        [[maybe_unused]] std::uint8_t pad_0xc6d[0x3]; // 0xc6d
        // metadata: MNetworkEnable
        int32_t m_nAddDecal; // 0xc70        
        // metadata: MNetworkEnable
        Vector m_vDecalPosition; // 0xc74        
        // metadata: MNetworkEnable
        Vector m_vDecalForwardAxis; // 0xc80        
        // metadata: MNetworkEnable
        float m_flDecalHealBloodRate; // 0xc8c        
        // metadata: MNetworkEnable
        float m_flDecalHealHeightRate; // 0xc90        
        [[maybe_unused]] std::uint8_t pad_0xc94[0x4]; // 0xc94
        // metadata: MNetworkEnable
        // m_ConfigEntitiesToPropagateMaterialDecalsTo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        C_NetworkUtlVectorBase<CHandle<client::C_BaseModelEntity>> m_ConfigEntitiesToPropagateMaterialDecalsTo; // 0xc98        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // metadata: MNetworkUserGroup "Player"
        // metadata: MNetworkChangeCallback "OnViewOffsetChanged"
        client::CNetworkViewOffsetVector m_vecViewOffset; // 0xcb0        
        [[maybe_unused]] std::uint8_t pad_0xcd8[0x8]; // 0xcd8
        client::CClientAlphaProperty* m_pClientAlphaProperty; // 0xce0        
        Color m_ClientOverrideTint; // 0xce8        
        bool m_bUseClientOverrideTint; // 0xcec        
        [[maybe_unused]] std::uint8_t pad_0xced[0x3b];
        
        // Datamap fields:
        // int32_t InputAlpha; // 0x0
        // Color InputColor; // 0x0
        // int32_t InputSkin; // 0x0
        // CUtlString add_attribute; // 0x7fffffff
        // void m_Ropes; // 0xa88
        // Color rendercolor32; // 0x7fffffff
        // Color rendercolor; // 0x7fffffff
        // int32_t renderamt; // 0x7fffffff
        // Vector mins; // 0x7fffffff
        // Vector maxs; // 0x7fffffff
        // const char * skin; // 0x7fffffff
        // CUtlString bodygroups; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BaseModelEntity because it is not a standard-layout class
    static_assert(sizeof(C_BaseModelEntity) == 0xd28);
};
