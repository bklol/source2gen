#pragma once
#include "source2sdk/client/CPlayer_UseServices.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: false
    // Size: 0x40
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CCSPlayer_UseServices : public client::CPlayer_UseServices
    {
    public:
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CCSPlayer_UseServices) == 0x40);
};
