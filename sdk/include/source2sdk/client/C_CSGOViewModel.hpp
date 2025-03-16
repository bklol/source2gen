#pragma once
#include "source2sdk/client/C_PredictedViewModel.hpp"
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
    // Size: 0x10b0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bShouldIgnoreOffsetAndAccuracy"
    #pragma pack(push, 1)
    class C_CSGOViewModel : public client::C_PredictedViewModel
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1018[0x9]; // 0x1018
        // metadata: MNetworkEnable
        bool m_bShouldIgnoreOffsetAndAccuracy; // 0x1021        
        [[maybe_unused]] std::uint8_t pad_0x1022[0x2]; // 0x1022
        CEntityIndex m_nLastKnownAssociatedWeaponEntIndex; // 0x1024        
        bool m_bNeedToQueueHighResComposite; // 0x1028        
        [[maybe_unused]] std::uint8_t pad_0x1029[0x4f]; // 0x1029
        QAngle m_vLoweredWeaponOffset; // 0x1078        
        [[maybe_unused]] std::uint8_t pad_0x1084[0x2c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_CSGOViewModel because it is not a standard-layout class
    static_assert(sizeof(C_CSGOViewModel) == 0x10b0);
};
