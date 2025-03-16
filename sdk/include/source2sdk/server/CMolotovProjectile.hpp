#pragma once
#include "source2sdk/server/CBaseCSGrenadeProjectile.hpp"
#include "source2sdk/server/IntervalTimer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xc48
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bIsIncGrenade"
    #pragma pack(push, 1)
    class CMolotovProjectile : public server::CBaseCSGrenadeProjectile
    {
    public:
        // metadata: MNetworkEnable
        bool m_bIsIncGrenade; // 0xb50        
        [[maybe_unused]] std::uint8_t pad_0xb51[0xb]; // 0xb51
        bool m_bDetonated; // 0xb5c        
        [[maybe_unused]] std::uint8_t pad_0xb5d[0x3]; // 0xb5d
        server::IntervalTimer m_stillTimer; // 0xb60        
        [[maybe_unused]] std::uint8_t pad_0xb70[0xd0]; // 0xb70
        bool m_bHasBouncedOffPlayer; // 0xc40        
        [[maybe_unused]] std::uint8_t pad_0xc41[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CMolotovProjectile because it is not a standard-layout class
    static_assert(sizeof(CMolotovProjectile) == 0xc48);
};
