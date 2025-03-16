#pragma once
#include "source2sdk/client/CBaseAnimGraph.hpp"
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
    // Size: 0xf98
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_ViewmodelAttachmentModel : public client::CBaseAnimGraph
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xf88[0x8]; // 0xf88
        bool m_bShouldFrontFaceCullLeftHanded; // 0xf90        
        bool m_bCreatedLeftHanded; // 0xf91        
        [[maybe_unused]] std::uint8_t pad_0xf92[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_ViewmodelAttachmentModel because it is not a standard-layout class
    static_assert(sizeof(C_ViewmodelAttachmentModel) == 0xf98);
};
