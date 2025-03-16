#pragma once
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/client/CSWeaponMode.hpp"
#include "source2sdk/client/CSWeaponState_t.hpp"
#include "source2sdk/client/PlayerAnimEvent_t.hpp"
#include "source2sdk/client/WeaponAttackType_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBasePlayerWeapon.hpp"
#include "source2sdk/server/CIronSightController.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CCSPlayerPawn;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xf70
    // Has VTable
    // Construct disallowed
    // MConstructibleClassBase
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkExcludeByName "m_flTimeWeaponIdle"
    // static metadata: MNetworkVarNames "float m_flFireSequenceStartTime"
    // static metadata: MNetworkVarNames "int m_nFireSequenceStartTimeChange"
    // static metadata: MNetworkVarNames "PlayerAnimEvent_t m_ePlayerFireEvent"
    // static metadata: MNetworkVarNames "WeaponAttackType_t m_ePlayerFireEventAttackType"
    // static metadata: MNetworkVarNames "CSWeaponState_t m_iState"
    // static metadata: MNetworkVarNames "uint32 m_nViewModelIndex"
    // static metadata: MNetworkVarNames "GameTime_t m_flTimeWeaponIdle"
    // static metadata: MNetworkVarNames "CSWeaponMode m_weaponMode"
    // static metadata: MNetworkVarNames "float m_fAccuracyPenalty"
    // static metadata: MNetworkVarNames "int m_iRecoilIndex"
    // static metadata: MNetworkVarNames "float m_flRecoilIndex"
    // static metadata: MNetworkVarNames "bool m_bBurstMode"
    // static metadata: MNetworkVarNames "GameTick_t m_nPostponeFireReadyTicks"
    // static metadata: MNetworkVarNames "float m_flPostponeFireReadyFrac"
    // static metadata: MNetworkVarNames "bool m_bInReload"
    // static metadata: MNetworkVarNames "bool m_bReloadVisuallyComplete"
    // static metadata: MNetworkVarNames "GameTime_t m_flDroppedAtTime"
    // static metadata: MNetworkVarNames "bool m_bIsHauledBack"
    // static metadata: MNetworkVarNames "bool m_bSilencerOn"
    // static metadata: MNetworkVarNames "GameTime_t m_flTimeSilencerSwitchComplete"
    // static metadata: MNetworkVarNames "int m_iOriginalTeamNumber"
    // static metadata: MNetworkVarNames "int m_iMostRecentTeamNumber"
    // static metadata: MNetworkVarNames "bool m_bDroppedNearBuyZone"
    // static metadata: MNetworkVarNames "GameTime_t m_nextPrevOwnerUseTime"
    // static metadata: MNetworkVarNames "CHandle< CCSPlayerPawn> m_hPrevOwner"
    // static metadata: MNetworkVarNames "GameTick_t m_nDropTick"
    // static metadata: MNetworkVarNames "GameTime_t m_fLastShotTime"
    // static metadata: MNetworkVarNames "int m_iIronSightMode"
    // static metadata: MNetworkVarNames "int m_iNumEmptyAttacks"
    #pragma pack(push, 1)
    class CCSWeaponBase : public server::CBasePlayerWeapon
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xd78[0x28]; // 0xd78
        bool m_bRemoveable; // 0xda0        
        [[maybe_unused]] std::uint8_t pad_0xda1[0x7]; // 0xda1
        // metadata: MNetworkEnable
        float m_flFireSequenceStartTime; // 0xda8        
        // metadata: MNetworkEnable
        int32_t m_nFireSequenceStartTimeChange; // 0xdac        
        int32_t m_nFireSequenceStartTimeAck; // 0xdb0        
        // metadata: MNetworkEnable
        client::PlayerAnimEvent_t m_ePlayerFireEvent; // 0xdb4        
        // metadata: MNetworkEnable
        client::WeaponAttackType_t m_ePlayerFireEventAttackType; // 0xdb8        
        animationsystem::HSequence m_seqIdle; // 0xdbc        
        animationsystem::HSequence m_seqFirePrimary; // 0xdc0        
        animationsystem::HSequence m_seqFireSecondary; // 0xdc4        
        // m_thirdPersonFireSequences has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CUtlVector<animationsystem::HSequence> m_thirdPersonFireSequences; // 0xdc8        
        animationsystem::HSequence m_hCurrentThirdPersonSequence; // 0xde0        
        int32_t m_nSilencerBoneIndex; // 0xde4        
        animationsystem::HSequence m_thirdPersonSequences[7]; // 0xde8        
        [[maybe_unused]] std::uint8_t pad_0xe04[0xc]; // 0xe04
        bool m_bPlayerAmmoStockOnPickup; // 0xe10        
        bool m_bRequireUseToTouch; // 0xe11        
        [[maybe_unused]] std::uint8_t pad_0xe12[0x2]; // 0xe12
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnWeaponStateNetworkChange"
        client::CSWeaponState_t m_iState; // 0xe14        
        entity2::GameTime_t m_flLastTimeInAir; // 0xe18        
        entity2::GameTime_t m_flLastDeployTime; // 0xe1c        
        int32_t m_nLastEmptySoundCmdNum; // 0xe20        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalWeaponExclusive"
        uint32_t m_nViewModelIndex; // 0xe24        
        bool m_bReloadsWithClips; // 0xe28        
        [[maybe_unused]] std::uint8_t pad_0xe29[0x1f]; // 0xe29
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalWeaponExclusive"
        // metadata: MNetworkPriority "32"
        entity2::GameTime_t m_flTimeWeaponIdle; // 0xe48        
        bool m_bFireOnEmpty; // 0xe4c        
        [[maybe_unused]] std::uint8_t pad_0xe4d[0x3]; // 0xe4d
        entity2::CEntityIOOutput m_OnPlayerPickup; // 0xe50        
        // metadata: MNetworkEnable
        client::CSWeaponMode m_weaponMode; // 0xe78        
        float m_flTurningInaccuracyDelta; // 0xe7c        
        Vector m_vecTurningInaccuracyEyeDirLast; // 0xe80        
        float m_flTurningInaccuracy; // 0xe8c        
        // metadata: MNetworkEnable
        float m_fAccuracyPenalty; // 0xe90        
        entity2::GameTime_t m_flLastAccuracyUpdateTime; // 0xe94        
        float m_fAccuracySmoothedForZoom; // 0xe98        
        entity2::GameTime_t m_fScopeZoomEndTime; // 0xe9c        
        // metadata: MNetworkEnable
        int32_t m_iRecoilIndex; // 0xea0        
        // metadata: MNetworkEnable
        float m_flRecoilIndex; // 0xea4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnWeaponBurstModeNetworkChange"
        bool m_bBurstMode; // 0xea8        
        [[maybe_unused]] std::uint8_t pad_0xea9[0x3]; // 0xea9
        // metadata: MNetworkEnable
        entity2::GameTick_t m_nPostponeFireReadyTicks; // 0xeac        
        // metadata: MNetworkEnable
        float m_flPostponeFireReadyFrac; // 0xeb0        
        // metadata: MNetworkEnable
        bool m_bInReload; // 0xeb4        
        // metadata: MNetworkEnable
        bool m_bReloadVisuallyComplete; // 0xeb5        
        [[maybe_unused]] std::uint8_t pad_0xeb6[0x2]; // 0xeb6
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flDroppedAtTime; // 0xeb8        
        // metadata: MNetworkEnable
        bool m_bIsHauledBack; // 0xebc        
        // metadata: MNetworkEnable
        bool m_bSilencerOn; // 0xebd        
        [[maybe_unused]] std::uint8_t pad_0xebe[0x2]; // 0xebe
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTimeSilencerSwitchComplete; // 0xec0        
        // metadata: MNetworkEnable
        int32_t m_iOriginalTeamNumber; // 0xec4        
        // metadata: MNetworkEnable
        int32_t m_iMostRecentTeamNumber; // 0xec8        
        // metadata: MNetworkEnable
        bool m_bDroppedNearBuyZone; // 0xecc        
        [[maybe_unused]] std::uint8_t pad_0xecd[0x3]; // 0xecd
        float m_flNextAttackRenderTimeOffset; // 0xed0        
        [[maybe_unused]] std::uint8_t pad_0xed4[0x14]; // 0xed4
        bool m_bCanBePickedUp; // 0xee8        
        bool m_bUseCanOverrideNextOwnerTouchTime; // 0xee9        
        [[maybe_unused]] std::uint8_t pad_0xeea[0x2]; // 0xeea
        entity2::GameTime_t m_nextOwnerTouchTime; // 0xeec        
        entity2::GameTime_t m_nextPrevOwnerTouchTime; // 0xef0        
        [[maybe_unused]] std::uint8_t pad_0xef4[0x4]; // 0xef4
        // metadata: MNetworkEnable
        entity2::GameTime_t m_nextPrevOwnerUseTime; // 0xef8        
        // metadata: MNetworkEnable
        // m_hPrevOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        CHandle<server::CCSPlayerPawn> m_hPrevOwner; // 0xefc        
        // metadata: MNetworkEnable
        entity2::GameTick_t m_nDropTick; // 0xf00        
        [[maybe_unused]] std::uint8_t pad_0xf04[0x20]; // 0xf04
        bool m_donated; // 0xf24        
        [[maybe_unused]] std::uint8_t pad_0xf25[0x3]; // 0xf25
        // metadata: MNetworkEnable
        entity2::GameTime_t m_fLastShotTime; // 0xf28        
        bool m_bWasOwnedByCT; // 0xf2c        
        bool m_bWasOwnedByTerrorist; // 0xf2d        
        bool m_bFiredOutOfAmmoEvent; // 0xf2e        
        [[maybe_unused]] std::uint8_t pad_0xf2f[0x1]; // 0xf2f
        int32_t m_numRemoveUnownedWeaponThink; // 0xf30        
        [[maybe_unused]] std::uint8_t pad_0xf34[0x4]; // 0xf34
        server::CIronSightController m_IronSightController; // 0xf38        
        // metadata: MNetworkEnable
        int32_t m_iIronSightMode; // 0xf50        
        entity2::GameTime_t m_flLastLOSTraceFailureTime; // 0xf54        
        // metadata: MNetworkEnable
        int32_t m_iNumEmptyAttacks; // 0xf58        
        float m_flWatTickOffset; // 0xf5c        
        [[maybe_unused]] std::uint8_t pad_0xf60[0x10];
        
        // Datamap fields:
        // void CCSWeaponBaseDefaultTouch; // 0x0
        // void CCSWeaponBaseRemoveUnownedWeaponThink; // 0x0
        // void InputToggleCanBePickedUp; // 0x0
        // float InputSetAmmoAmount; // 0x0
        // int32_t InputSetReserveAmmoAmount; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSWeaponBase because it is not a standard-layout class
    static_assert(sizeof(CCSWeaponBase) == 0xf70);
};
