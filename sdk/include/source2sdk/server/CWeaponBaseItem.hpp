#pragma once
#include "source2sdk/server/CCSWeaponBase.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xf90
    // Has VTable
    // Construct disallowed
    // MConstructibleClassBase
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CountdownTimer m_SequenceCompleteTimer"
    // static metadata: MNetworkVarNames "bool m_bRedraw"
    #pragma pack(push, 1)
    class CWeaponBaseItem : public server::CCSWeaponBase
    {
    public:
        // metadata: MNetworkEnable
        server::CountdownTimer m_SequenceCompleteTimer; // 0xf70        
        // metadata: MNetworkEnable
        bool m_bRedraw; // 0xf88        
        [[maybe_unused]] std::uint8_t pad_0xf89[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CWeaponBaseItem because it is not a standard-layout class
    static_assert(sizeof(CWeaponBaseItem) == 0xf90);
};
