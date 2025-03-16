#pragma once
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x1030
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_LocalTempEntity : public client::CBaseAnimGraph
    {
    public:
        int32_t flags; // 0xf88        
        entity2::GameTime_t die; // 0xf8c        
        float m_flFrameMax; // 0xf90        
        float x; // 0xf94        
        float y; // 0xf98        
        float fadeSpeed; // 0xf9c        
        float bounceFactor; // 0xfa0        
        int32_t hitSound; // 0xfa4        
        int32_t priority; // 0xfa8        
        Vector tentOffset; // 0xfac        
        QAngle m_vecTempEntAngVelocity; // 0xfb8        
        int32_t tempent_renderamt; // 0xfc4        
        Vector m_vecNormal; // 0xfc8        
        float m_flSpriteScale; // 0xfd4        
        int32_t m_nFlickerFrame; // 0xfd8        
        float m_flFrameRate; // 0xfdc        
        float m_flFrame; // 0xfe0        
        [[maybe_unused]] std::uint8_t pad_0xfe4[0x4]; // 0xfe4
        char* m_pszImpactEffect; // 0xfe8        
        char* m_pszParticleEffect; // 0xff0        
        bool m_bParticleCollision; // 0xff8        
        [[maybe_unused]] std::uint8_t pad_0xff9[0x3]; // 0xff9
        int32_t m_iLastCollisionFrame; // 0xffc        
        Vector m_vLastCollisionOrigin; // 0x1000        
        Vector m_vecTempEntVelocity; // 0x100c        
        Vector m_vecPrevAbsOrigin; // 0x1018        
        Vector m_vecTempEntAcceleration; // 0x1024        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_LocalTempEntity because it is not a standard-layout class
    static_assert(sizeof(C_LocalTempEntity) == 0x1030);
};
