#pragma once
#include "source2sdk/server/CTeam.hpp"
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
    // Size: 0x858
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bSurrendered"
    // static metadata: MNetworkVarNames "char m_szTeamMatchStat"
    // static metadata: MNetworkVarNames "int m_numMapVictories"
    // static metadata: MNetworkVarNames "int32 m_scoreFirstHalf"
    // static metadata: MNetworkVarNames "int32 m_scoreSecondHalf"
    // static metadata: MNetworkVarNames "int32 m_scoreOvertime"
    // static metadata: MNetworkVarNames "char m_szClanTeamname"
    // static metadata: MNetworkVarNames "uint32 m_iClanID"
    // static metadata: MNetworkVarNames "char m_szTeamFlagImage"
    // static metadata: MNetworkVarNames "char m_szTeamLogoImage"
    #pragma pack(push, 1)
    class CCSTeam : public server::CTeam
    {
    public:
        int32_t m_nLastRecievedShorthandedRoundBonus; // 0x598        
        int32_t m_nShorthandedRoundBonusStartRound; // 0x59c        
        // metadata: MNetworkEnable
        bool m_bSurrendered; // 0x5a0        
        // metadata: MNetworkEnable
        char m_szTeamMatchStat[512]; // 0x5a1        
        [[maybe_unused]] std::uint8_t pad_0x7a1[0x3]; // 0x7a1
        // metadata: MNetworkEnable
        int32_t m_numMapVictories; // 0x7a4        
        // metadata: MNetworkEnable
        int32_t m_scoreFirstHalf; // 0x7a8        
        // metadata: MNetworkEnable
        int32_t m_scoreSecondHalf; // 0x7ac        
        // metadata: MNetworkEnable
        int32_t m_scoreOvertime; // 0x7b0        
        // metadata: MNetworkEnable
        char m_szClanTeamname[129]; // 0x7b4        
        [[maybe_unused]] std::uint8_t pad_0x835[0x3]; // 0x835
        // metadata: MNetworkEnable
        uint32_t m_iClanID; // 0x838        
        // metadata: MNetworkEnable
        char m_szTeamFlagImage[8]; // 0x83c        
        // metadata: MNetworkEnable
        char m_szTeamLogoImage[8]; // 0x844        
        float m_flNextResourceTime; // 0x84c        
        int32_t m_iLastUpdateSentAt; // 0x850        
        [[maybe_unused]] std::uint8_t pad_0x854[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSTeam because it is not a standard-layout class
    static_assert(sizeof(CCSTeam) == 0x858);
};
