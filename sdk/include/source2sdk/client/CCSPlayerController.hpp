#pragma once
#include "source2sdk/client/CBasePlayerController.hpp"
#include "source2sdk/client/QuestProgress__Reason.hpp"
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
    class CCSPlayerController_ActionTrackingServices;
};

namespace source2sdk::client
{
    class CCSPlayerController_DamageServices;
};

namespace source2sdk::client
{
    class CCSPlayerController_InGameMoneyServices;
};

namespace source2sdk::client
{
    class CCSPlayerController_InventoryServices;
};

namespace source2sdk::client
{
    class C_CSObserverPawn;
};

namespace source2sdk::client
{
    class C_CSPlayerPawn;
};

namespace source2sdk::client
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
    // static metadata: MNetworkUserGroupProxy "CCSPlayerController"
    // static metadata: MNetworkUserGroupProxy "CCSPlayerController"
    // static metadata: MNetworkUserGroupProxy "CCSPlayerController"
    // static metadata: MNetworkVarNames "CCSPlayerController_InGameMoneyServices * m_pInGameMoneyServices"
    // static metadata: MNetworkVarNames "CCSPlayerController_InventoryServices * m_pInventoryServices"
    // static metadata: MNetworkVarNames "CCSPlayerController_ActionTrackingServices * m_pActionTrackingServices"
    // static metadata: MNetworkVarNames "CCSPlayerController_DamageServices * m_pDamageServices"
    // static metadata: MNetworkVarNames "uint32 m_iPing"
    // static metadata: MNetworkVarNames "bool m_bHasCommunicationAbuseMute"
    // static metadata: MNetworkVarNames "string_t m_szCrosshairCodes"
    // static metadata: MNetworkVarNames "uint8 m_iPendingTeamNum"
    // static metadata: MNetworkVarNames "GameTime_t m_flForceTeamTime"
    // static metadata: MNetworkVarNames "int m_iCompTeammateColor"
    // static metadata: MNetworkVarNames "bool m_bEverPlayedOnTeam"
    // static metadata: MNetworkVarNames "string_t m_szClan"
    // static metadata: MNetworkVarNames "int m_iCoachingTeam"
    // static metadata: MNetworkVarNames "uint64 m_nPlayerDominated"
    // static metadata: MNetworkVarNames "uint64 m_nPlayerDominatingMe"
    // static metadata: MNetworkVarNames "int m_iCompetitiveRanking"
    // static metadata: MNetworkVarNames "int m_iCompetitiveWins"
    // static metadata: MNetworkVarNames "int8 m_iCompetitiveRankType"
    // static metadata: MNetworkVarNames "int m_iCompetitiveRankingPredicted_Win"
    // static metadata: MNetworkVarNames "int m_iCompetitiveRankingPredicted_Loss"
    // static metadata: MNetworkVarNames "int m_iCompetitiveRankingPredicted_Tie"
    // static metadata: MNetworkVarNames "int m_nEndMatchNextMapVote"
    // static metadata: MNetworkVarNames "uint16 m_unActiveQuestId"
    // static metadata: MNetworkVarNames "QuestProgress::Reason m_nQuestProgressReason"
    // static metadata: MNetworkVarNames "uint32 m_unPlayerTvControlFlags"
    // static metadata: MNetworkVarNames "int m_nDisconnectionTick"
    // static metadata: MNetworkVarNames "bool m_bControllingBot"
    // static metadata: MNetworkVarNames "bool m_bHasControlledBotThisRound"
    // static metadata: MNetworkVarNames "bool m_bCanControlObservedBot"
    // static metadata: MNetworkVarNames "CHandle< CCSPlayerPawn> m_hPlayerPawn"
    // static metadata: MNetworkVarNames "CHandle< CCSObserverPawn> m_hObserverPawn"
    // static metadata: MNetworkVarNames "bool m_bPawnIsAlive"
    // static metadata: MNetworkVarNames "uint32 m_iPawnHealth"
    // static metadata: MNetworkVarNames "int m_iPawnArmor"
    // static metadata: MNetworkVarNames "bool m_bPawnHasDefuser"
    // static metadata: MNetworkVarNames "bool m_bPawnHasHelmet"
    // static metadata: MNetworkVarNames "item_definition_index_t m_nPawnCharacterDefIndex"
    // static metadata: MNetworkVarNames "int m_iPawnLifetimeStart"
    // static metadata: MNetworkVarNames "int m_iPawnLifetimeEnd"
    // static metadata: MNetworkVarNames "int m_iPawnBotDifficulty"
    // static metadata: MNetworkVarNames "CHandle< CCSPlayerController> m_hOriginalControllerOfCurrentPawn"
    // static metadata: MNetworkVarNames "int32 m_iScore"
    // static metadata: MNetworkVarNames "uint8 m_recentKillQueue"
    // static metadata: MNetworkVarNames "uint8 m_nFirstKill"
    // static metadata: MNetworkVarNames "uint8 m_nKillCount"
    // static metadata: MNetworkVarNames "bool m_bMvpNoMusic"
    // static metadata: MNetworkVarNames "int m_eMvpReason"
    // static metadata: MNetworkVarNames "int m_iMusicKitID"
    // static metadata: MNetworkVarNames "int m_iMusicKitMVPs"
    // static metadata: MNetworkVarNames "int m_iMVPs"
    // static metadata: MNetworkVarNames "bool m_bFireBulletsSeedSynchronized"
    #pragma pack(push, 1)
    class CCSPlayerController : public client::CBasePlayerController
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x710[0x10]; // 0x710
        // metadata: MNetworkEnable
        client::CCSPlayerController_InGameMoneyServices* m_pInGameMoneyServices; // 0x720        
        // metadata: MNetworkEnable
        client::CCSPlayerController_InventoryServices* m_pInventoryServices; // 0x728        
        // metadata: MNetworkEnable
        client::CCSPlayerController_ActionTrackingServices* m_pActionTrackingServices; // 0x730        
        // metadata: MNetworkEnable
        client::CCSPlayerController_DamageServices* m_pDamageServices; // 0x738        
        // metadata: MNetworkEnable
        uint32_t m_iPing; // 0x740        
        // metadata: MNetworkEnable
        bool m_bHasCommunicationAbuseMute; // 0x744        
        [[maybe_unused]] std::uint8_t pad_0x745[0x3]; // 0x745
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_szCrosshairCodes; // 0x748        
        // metadata: MNetworkEnable
        uint8_t m_iPendingTeamNum; // 0x750        
        [[maybe_unused]] std::uint8_t pad_0x751[0x3]; // 0x751
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flForceTeamTime; // 0x754        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnCompTeammateColorChanged"
        int32_t m_iCompTeammateColor; // 0x758        
        // metadata: MNetworkEnable
        bool m_bEverPlayedOnTeam; // 0x75c        
        [[maybe_unused]] std::uint8_t pad_0x75d[0x3]; // 0x75d
        entity2::GameTime_t m_flPreviousForceJoinTeamTime; // 0x760        
        [[maybe_unused]] std::uint8_t pad_0x764[0x4]; // 0x764
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_szClan; // 0x768        
        CUtlString m_sSanitizedPlayerName; // 0x770        
        // metadata: MNetworkEnable
        int32_t m_iCoachingTeam; // 0x778        
        [[maybe_unused]] std::uint8_t pad_0x77c[0x4]; // 0x77c
        // metadata: MNetworkEnable
        uint64_t m_nPlayerDominated; // 0x780        
        // metadata: MNetworkEnable
        uint64_t m_nPlayerDominatingMe; // 0x788        
        // metadata: MNetworkEnable
        int32_t m_iCompetitiveRanking; // 0x790        
        // metadata: MNetworkEnable
        int32_t m_iCompetitiveWins; // 0x794        
        // metadata: MNetworkEnable
        int8_t m_iCompetitiveRankType; // 0x798        
        [[maybe_unused]] std::uint8_t pad_0x799[0x3]; // 0x799
        // metadata: MNetworkEnable
        int32_t m_iCompetitiveRankingPredicted_Win; // 0x79c        
        // metadata: MNetworkEnable
        int32_t m_iCompetitiveRankingPredicted_Loss; // 0x7a0        
        // metadata: MNetworkEnable
        int32_t m_iCompetitiveRankingPredicted_Tie; // 0x7a4        
        // metadata: MNetworkEnable
        int32_t m_nEndMatchNextMapVote; // 0x7a8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        uint16_t m_unActiveQuestId; // 0x7ac        
        [[maybe_unused]] std::uint8_t pad_0x7ae[0x2]; // 0x7ae
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        client::QuestProgress__Reason m_nQuestProgressReason; // 0x7b0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        uint32_t m_unPlayerTvControlFlags; // 0x7b4        
        [[maybe_unused]] std::uint8_t pad_0x7b8[0x28]; // 0x7b8
        int32_t m_iDraftIndex; // 0x7e0        
        uint32_t m_msQueuedModeDisconnectionTimestamp; // 0x7e4        
        uint32_t m_uiAbandonRecordedReason; // 0x7e8        
        bool m_bCannotBeKicked; // 0x7ec        
        bool m_bEverFullyConnected; // 0x7ed        
        bool m_bAbandonAllowsSurrender; // 0x7ee        
        bool m_bAbandonOffersInstantSurrender; // 0x7ef        
        bool m_bDisconnection1MinWarningPrinted; // 0x7f0        
        bool m_bScoreReported; // 0x7f1        
        [[maybe_unused]] std::uint8_t pad_0x7f2[0x2]; // 0x7f2
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        int32_t m_nDisconnectionTick; // 0x7f4        
        [[maybe_unused]] std::uint8_t pad_0x7f8[0x8]; // 0x7f8
        // metadata: MNetworkEnable
        bool m_bControllingBot; // 0x800        
        // metadata: MNetworkEnable
        bool m_bHasControlledBotThisRound; // 0x801        
        bool m_bHasBeenControlledByPlayerThisRound; // 0x802        
        [[maybe_unused]] std::uint8_t pad_0x803[0x1]; // 0x803
        int32_t m_nBotsControlledThisRound; // 0x804        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bCanControlObservedBot; // 0x808        
        [[maybe_unused]] std::uint8_t pad_0x809[0x3]; // 0x809
        // metadata: MNetworkEnable
        // m_hPlayerPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<client::C_CSPlayerPawn> m_hPlayerPawn; // 0x80c        
        // metadata: MNetworkEnable
        // m_hObserverPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<client::C_CSObserverPawn> m_hObserverPawn; // 0x810        
        // metadata: MNetworkEnable
        bool m_bPawnIsAlive; // 0x814        
        [[maybe_unused]] std::uint8_t pad_0x815[0x3]; // 0x815
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "TeammateAndSpectatorExclusive"
        uint32_t m_iPawnHealth; // 0x818        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "TeammateAndSpectatorExclusive"
        int32_t m_iPawnArmor; // 0x81c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "TeammateAndSpectatorExclusive"
        bool m_bPawnHasDefuser; // 0x820        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "TeammateAndSpectatorExclusive"
        bool m_bPawnHasHelmet; // 0x821        
        // metadata: MNetworkEnable
        uint16_t m_nPawnCharacterDefIndex; // 0x822        
        // metadata: MNetworkEnable
        int32_t m_iPawnLifetimeStart; // 0x824        
        // metadata: MNetworkEnable
        int32_t m_iPawnLifetimeEnd; // 0x828        
        // metadata: MNetworkEnable
        int32_t m_iPawnBotDifficulty; // 0x82c        
        // metadata: MNetworkEnable
        // m_hOriginalControllerOfCurrentPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<client::CCSPlayerController> m_hOriginalControllerOfCurrentPawn; // 0x830        
        // metadata: MNetworkEnable
        int32_t m_iScore; // 0x834        
        // metadata: MNetworkEnable
        uint8_t m_recentKillQueue[8]; // 0x838        
        // metadata: MNetworkEnable
        uint8_t m_nFirstKill; // 0x840        
        // metadata: MNetworkEnable
        uint8_t m_nKillCount; // 0x841        
        // metadata: MNetworkEnable
        bool m_bMvpNoMusic; // 0x842        
        [[maybe_unused]] std::uint8_t pad_0x843[0x1]; // 0x843
        // metadata: MNetworkEnable
        int32_t m_eMvpReason; // 0x844        
        // metadata: MNetworkEnable
        int32_t m_iMusicKitID; // 0x848        
        // metadata: MNetworkEnable
        int32_t m_iMusicKitMVPs; // 0x84c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnMVPCountChanged"
        int32_t m_iMVPs; // 0x850        
        bool m_bIsPlayerNameDirty; // 0x854        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bFireBulletsSeedSynchronized; // 0x855        
        [[maybe_unused]] std::uint8_t pad_0x856[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSPlayerController because it is not a standard-layout class
    static_assert(sizeof(CCSPlayerController) == 0x858);
};
