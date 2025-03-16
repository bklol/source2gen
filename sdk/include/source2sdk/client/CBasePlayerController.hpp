#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/C_CommandContext.hpp"
#include "source2sdk/client/PlayerConnectedState.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BasePlayerPawn;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x710
    // Has VTable
    // Construct allowed
    // MNetworkNoBase
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkIncludeByName "m_pEntity"
    // static metadata: MNetworkIncludeByName "m_flSimulationTime"
    // static metadata: MNetworkIncludeByName "m_flCreateTime"
    // static metadata: MNetworkIncludeByName "m_iTeamNum"
    // static metadata: MNetworkIncludeByName "m_nNextThinkTick"
    // static metadata: MNetworkIncludeByName "m_fFlags"
    // static metadata: MNetworkUserGroupProxy "CBasePlayerController"
    // static metadata: MNetworkUserGroupProxy "CBasePlayerController"
    // static metadata: MNetworkIncludeByUserGroup "LocalPlayerExclusive"
    // static metadata: MNetworkVarNames "uint32 m_nTickBase"
    // static metadata: MNetworkVarNames "CHandle< CBasePlayerPawn> m_hPawn"
    // static metadata: MNetworkVarNames "bool m_bKnownTeamMismatch"
    // static metadata: MNetworkVarNames "PlayerConnectedState m_iConnected"
    // static metadata: MNetworkVarNames "char m_iszPlayerName"
    // static metadata: MNetworkVarNames "uint64 m_steamID"
    // static metadata: MNetworkVarNames "uint32 m_iDesiredFOV"
    // static metadata: MNetworkReplayCompatField "m_skeletonInstance\.m_vecOrigin\..*|"
    #pragma pack(push, 1)
    class CBasePlayerController : public client::C_BaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x568[0x8]; // 0x568
        int32_t m_nFinalPredictedTick; // 0x570        
        [[maybe_unused]] std::uint8_t pad_0x574[0x4]; // 0x574
        client::C_CommandContext m_CommandContext; // 0x578        
        uint64_t m_nInButtonsWhichAreToggles; // 0x620        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "1"
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        uint32_t m_nTickBase; // 0x628        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnPawnChanged"
        // m_hPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<client::C_BasePlayerPawn> m_hPawn; // 0x62c        
        // metadata: MNetworkEnable
        bool m_bKnownTeamMismatch; // 0x630        
        [[maybe_unused]] std::uint8_t pad_0x631[0x3]; // 0x631
        // m_hPredictedPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<client::C_BasePlayerPawn> m_hPredictedPawn; // 0x634        
        CSplitScreenSlot m_nSplitScreenSlot; // 0x638        
        // m_hSplitOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<client::CBasePlayerController> m_hSplitOwner; // 0x63c        
        // m_hSplitScreenPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CUtlVector<CHandle<client::CBasePlayerController>> m_hSplitScreenPlayers; // 0x640        
        bool m_bIsHLTV; // 0x658        
        [[maybe_unused]] std::uint8_t pad_0x659[0x3]; // 0x659
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnConnectionStateChanged"
        client::PlayerConnectedState m_iConnected; // 0x65c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnPlayerControllerNameChanged"
        char m_iszPlayerName[128]; // 0x660        
        [[maybe_unused]] std::uint8_t pad_0x6e0[0x8]; // 0x6e0
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "fixed64"
        // metadata: MNetworkChangeCallback "OnSteamIDChanged"
        uint64_t m_steamID; // 0x6e8        
        bool m_bIsLocalPlayerController; // 0x6f0        
        [[maybe_unused]] std::uint8_t pad_0x6f1[0x3]; // 0x6f1
        // metadata: MNetworkEnable
        uint32_t m_iDesiredFOV; // 0x6f4        
        [[maybe_unused]] std::uint8_t pad_0x6f8[0x18];
        
        // Static fields:
        static bool &Get_sm_bRunningPredictedClientStringCommands() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBasePlayerController")->GetStaticFields()[0]->m_pInstance);};
        
        // Datamap fields:
        // bool fakeclient; // 0x7fffffff
        // bool is_hltv; // 0x7fffffff
        // const char * playername; // 0x7fffffff
        // bool reserving; // 0x7fffffff
        // void m_pCurrentCommand; // 0x6e0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBasePlayerController because it is not a standard-layout class
    static_assert(sizeof(CBasePlayerController) == 0x710);
};
