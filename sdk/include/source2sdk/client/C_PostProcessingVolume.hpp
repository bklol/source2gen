#pragma once
#include "source2sdk/client/C_BaseTrigger.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCPostProcessingResource.hpp"
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
    // Size: 0xd80
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    // static metadata: MNetworkVarNames "HPostProcessingStrong m_hPostSettings"
    // static metadata: MNetworkVarNames "float m_flFadeDuration"
    // static metadata: MNetworkVarNames "float m_flMinLogExposure"
    // static metadata: MNetworkVarNames "float m_flMaxLogExposure"
    // static metadata: MNetworkVarNames "float m_flMinExposure"
    // static metadata: MNetworkVarNames "float m_flMaxExposure"
    // static metadata: MNetworkVarNames "float m_flExposureCompensation"
    // static metadata: MNetworkVarNames "float m_flExposureFadeSpeedUp"
    // static metadata: MNetworkVarNames "float m_flExposureFadeSpeedDown"
    // static metadata: MNetworkVarNames "float m_flTonemapEVSmoothingRange"
    // static metadata: MNetworkVarNames "bool m_bMaster"
    // static metadata: MNetworkVarNames "bool m_bExposureControl"
    // static metadata: MNetworkVarNames "float m_flRate"
    // static metadata: MNetworkVarNames "float m_flTonemapPercentTarget"
    // static metadata: MNetworkVarNames "float m_flTonemapPercentBrightPixels"
    // static metadata: MNetworkVarNames "float m_flTonemapMinAvgLum"
    #pragma pack(push, 1)
    class C_PostProcessingVolume : public client::C_BaseTrigger
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xd30[0x10]; // 0xd30
        // metadata: MNetworkEnable
        // m_hPostSettings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CStrongHandle<resourcesystem::InfoForResourceTypeCPostProcessingResource> m_hPostSettings; // 0xd40        
        // metadata: MNetworkEnable
        float m_flFadeDuration; // 0xd48        
        // metadata: MNetworkEnable
        float m_flMinLogExposure; // 0xd4c        
        // metadata: MNetworkEnable
        float m_flMaxLogExposure; // 0xd50        
        // metadata: MNetworkEnable
        float m_flMinExposure; // 0xd54        
        // metadata: MNetworkEnable
        float m_flMaxExposure; // 0xd58        
        // metadata: MNetworkEnable
        float m_flExposureCompensation; // 0xd5c        
        // metadata: MNetworkEnable
        float m_flExposureFadeSpeedUp; // 0xd60        
        // metadata: MNetworkEnable
        float m_flExposureFadeSpeedDown; // 0xd64        
        // metadata: MNetworkEnable
        float m_flTonemapEVSmoothingRange; // 0xd68        
        // metadata: MNetworkEnable
        bool m_bMaster; // 0xd6c        
        // metadata: MNetworkEnable
        bool m_bExposureControl; // 0xd6d        
        [[maybe_unused]] std::uint8_t pad_0xd6e[0x2]; // 0xd6e
        // metadata: MNetworkEnable
        float m_flRate; // 0xd70        
        // metadata: MNetworkEnable
        float m_flTonemapPercentTarget; // 0xd74        
        // metadata: MNetworkEnable
        float m_flTonemapPercentBrightPixels; // 0xd78        
        // metadata: MNetworkEnable
        float m_flTonemapMinAvgLum; // 0xd7c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PostProcessingVolume because it is not a standard-layout class
    static_assert(sizeof(C_PostProcessingVolume) == 0xd80);
};
