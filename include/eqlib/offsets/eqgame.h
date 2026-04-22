/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-present MacroQuest Authors
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2, as published by
 * the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#pragma once

//
// eqgame.exe offsets
//

#define __ClientDate                                               20260414u
#define __ExpectedVersionDate                                     "Apr 14 2026"
#define __ExpectedVersionTime                                     "10:45:28"
#define __ActualVersionDate_x                              0x14098B198
#define __ActualVersionTime_x                              0x14098B188
#define __ActualVersionBuild_x                             0x140920340

// Memory Protection
#define __MemChecker0_x                                    0x1402CCD30
#define __MemChecker1_x                                    0x1405A6D10
#define __MemChecker4_x                                    0x14029A040
#define __EncryptPad0_x                                    0x140D68C20

// EverQuestInfo
#define pinstEverQuestInfo_x                               0x140EB15C0
#define instEQZoneInfo_x                                   0x140EB17B4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                        0x14022CC00
#define __gfMaxZoomCameraDistance_x                        0x1409215F8
#define __gfMaxCameraDistance_x                            0x140ACB0E4
#define __CurrentSocial_x                                  0x140C1D0D4 // CActionsWnd::StopSocial
#define __BindList_x                                       0x140D5C950
#define g_eqCommandStates_x                                0x140D5D9F0
#define __CommandList_x                                    0x140D5DC30
#define __ScreenMode_x                                     0x140DF8EA4
#define __gWorld_x                                         0x140EA9CF0
#define __gpbCommandEvent_x                                0x140EA9FE8
#define __ServerHost_x                                     0x140EAA1D8
#define __Guilds_x                                         0x140EB0170
#define __MemCheckBitmask_x                                0x140EB1B03
#define __MemCheckActive_x                                 0x140EB321D
#define __MouseEventTime_x                                 0x140F26B90
#define DI8__MouseState_x                                  0x140F2AD88
#define __heqmain_x                                        0x140F2D218
#define DI8__Mouse_x                                       0x140F2D230
#define __HWnd_x                                           0x140F2D238
#define __Mouse_x                                          0x140F2D240
#define DI8__Keyboard_x                                    0x140F2D260
#define __LoginName_x                                      0x140F2D9CC
#define __CurrentMapLabel_x                                0x140F41500
#define __LabelCache_x                                     0x140F420D0
#define __ChatFilterDefs_x                                 0x140A65030
#define Teleport_Table_Size_x                              0x140EAA074
#define Teleport_Table_x                                   0x140EAA500

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                        0x140EAC500
#define pinstActiveBanker_x                                0x140EA9F18
#define pinstActiveCorpse_x                                0x140EA9F08
#define pinstActiveGMaster_x                               0x140EA9F10
#define pinstActiveMerchant_x                              0x140EA9F00
#define pinstAltAdvManager_x                               0x140DF9CE8
#define pinstCEverQuest_x                                  0x140F2D278
#define pinstCamActor_x                                    0x140DF8E90
#define pinstCDBStr_x                                      0x140DF8AA0
#define pinstCDisplay_x                                    0x140EA9FC8
#define pinstControlledPlayer_x                            0x140EA9FA8
#define pinstCResolutionHandler_x                          0x140F52678
#define pinstCSidlManager_x                                0x140F53670
#define pinstCXWndManager_x                                0x140F53668
#define instDynamicZone_x                                  0x140EB0030 // Part of g_dynamicZone
#define instExpeditionLeader_x                             0x140EB007E
#define instExpeditionName_x                               0x140EB00BE
#define pinstDZMember_x                                    0x140EB0148
#define pinstDZTimerInfo_x                                 0x140EB0150
#define pinstEqLogin_x                                     0x140F2D310
#define instTribute_x                                      0x140D55870
#define pinstDeviceInputProxy_x                            0x140EB161C
#define pinstEQSoundManager_x                              0x140DFA070
#define pinstEQSpellStrings_x                              0x140DDD620
#define pinstSGraphicsEngine_x                             0x140F526A8
#define pinstLocalPC_x                                     0x140EA9A68
#define pinstLocalPlayer_x                                 0x140EA9CF8
#define pinstCMercenaryClientManager_x                     0x140F284B8
#define pinstModelPlayer_x                                 0x140EA9F28
#define pinstRenderInterface_x                             0x140F526C0
#define pinstSkillMgr_x                                    0x140F2A198
#define pinstSpawnManager_x                                0x140F28898
#define pinstSpellManager_x                                0x140F2A208
#define pinstStringTable_x                                 0x140EA9AE8
#define pinstSwitchManager_x                               0x140EA99A0
#define pinstTarget_x                                      0x140EA9FA0
#define pinstTaskMember_x                                  0x140D55860 // Part of g_taskManager
#define pinstTradeTarget_x                                 0x140EA9F20
#define instTributeActive_x                                0x140D55899
#define pinstViewActor_x                                   0x140DF8E88
#define pinstWorldData_x                                   0x140EA9A30
#define pinstPlayerPath_x                                  0x140F288C0
#define pinstTargetIndicator_x                             0x140F2A2B8
#define EQObject_Top_x                                     0x140EA9FD0

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                          0x140F3E650
#define pinstCContainerMgr_x                               0x140DF8F18
#define pinstCContextMenuManager_x                         0x140F53350
#define pinstCInvSlotMgr_x                                 0x140DF8F08
#define pinstCItemDisplayManager_x                         0x140F410D0
#define pinstCPopupWndManager_x                            0x140F41960
#define pinstCSpellDisplayMgr_x                            0x140F41FB0
#define pinstCTaskManager_x                                0x140C1E7A0
#define pinstEQSuiteTextureLoader_x                        0x140D7E6D0
#define pinstItemIconCache_x                               0x140F3E9B8
#define pinstLootFiltersManager_x                          0x140DF84E8
#define pinstGFViewListener_x                              0x140F52B28


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                              0x140257130
#define __CastRay_x                                        0x14024F1E0
#define __CastRay2_x                                       0x14024EED0
#define __compress_block_x                                 0x14055C0C0
#define __ConvertItemTags_x                                0x14024F670
#define __CleanItemTags_x                                  0x14008C730
#define __CreateCascadeMenuItems_x                         0x140196120
#define __decompress_block_x                               0x1405A2500
#define __DoesFileExist_x                                  0x1405AAD80
#define __EQGetTime_x                                      0x1405A72C0
#define __ExecuteCmd_x                                     0x1402240A0
#define __FixHeading_x                                     0x140663CB0
#define __FlushDxKeyboard_x                                0x140351AF0
#define __get_bearing_x                                    0x140259450
#define __get_melee_range_x                                0x140259540
#define __GetAnimationCache_x                              0x1403D70B0
#define __GetGaugeValueFromEQ_x                            0x14051AED0
#define __GetLabelFromEQ_x                                 0x14051C4C0
#define __GetXTargetType_x                                 0x1406661A0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                    0x140663D30
#define __HelpPath_x                                       0x140F26A58   // Why?
#define __NewUIINI_x                                       0x140527F10   // Why?
#define __ProcessDeviceEvents_x                            0x14029A640
#define __ProcessGameEvents_x                              0x14028EE10
#define __ProcessKeyboardEvents_x                          0x1403532D0
#define __ProcessMouseEvents_x                             0x140290560
#define __SaveColors_x                                     0x1401A6080
#define __STMLToText_x                                     0x1405BB580
#define __WndProc_x                                        0x1403502B0
#define CMemoryMappedFile__SetFile_x                       0x140812CA0
#define DrawNetStatus_x                                    0x1402DC2D0
#define Util__FastTime_x                                   0x1405A67D0
#define __eq_delete_x                                      0x1406DECD8
#define __eq_new_x                                         0x1406DEF30
#define __CopyLayout_x                                     0x1402C9110
#define __ThrottleFrameRate_x                              0x14027DF31
#define __ThrottleFrameRateEnd_x                           0x14027DF37

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                              0x140362E20
#define CAAWnd__Update_x                                   0x140363120
#define CAAWnd__UpdateSelected_x                           0x140364340

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                0x1400B0850
#define CAdvancedLootWnd__DoSharedAdvLootAction_x          0x1400A9150
#define CAdvancedLootWnd__AddPlayerToList_x                0x14086C320
#define CAdvancedLootWnd__UpdateMasterLooter_x             0x1400B11B0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                0x1401B1390
#define AltAdvManager__IsAbilityReady_x                    0x1401B1830
#define AltAdvManager__GetAAById_x                         0x1401B0C20
#define AltAdvManager__CanTrainAbility_x                   0x1401B0A20
#define AltAdvManager__CanSeeAbility_x                     0x1401B06D0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                0x1400D84D0
#define CharacterZoneClient__CalcAffectChange_x            0x1400D9390
#define CharacterZoneClient__CalcAffectChangeGeneric_x     0x1400D95E0
#define CharacterZoneClient__CanMedOnHorse_x               0x1400EDA10
#define CharacterZoneClient__CanUseItem_x                  0x1400EDFD0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x    0x1400D9FC0
#define CharacterZoneClient__CastSpell_x                   0x1400DA060
#define CharacterZoneClient__CharacterZoneClient_x         0x1400E9ED0
#define CharacterZoneClient__Cur_HP_x                      0x1400EF740
#define CharacterZoneClient__Cur_Mana_x                    0x1400EF900
#define CharacterZoneClient__FindAffectSlot_x              0x1400DD300
#define CharacterZoneClient__GetAdjustedSkill_x            0x1400F6020
#define CharacterZoneClient__GetBaseSkill_x                0x140104570  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x      0x1400DE7A0
#define CharacterZoneClient__GetCurrentMod_x               0x1400ED310
#define CharacterZoneClient__GetCursorItemCount_x          0x1400F78B0
#define CharacterZoneClient__GetEnduranceRegen_x           0x1400F67A0
#define CharacterZoneClient__GetFirstEffectSlot_x          0x1400DE920
#define CharacterZoneClient__GetFocusCastingTimeModifier_x 0x1400CDEA0
#define CharacterZoneClient__GetFocusDurationMod_x         0x1400CFD70
#define CharacterZoneClient__GetHPRegen_x                  0x1400F6ED0
#define CharacterZoneClient__GetItemCountInInventory_x     0x1400EF390
#define CharacterZoneClient__GetItemCountWorn_x            0x1400F60C0
#define CharacterZoneClient__GetLastEffectSlot_x           0x1400DE9A0
#define CharacterZoneClient__GetManaRegen_x                0x1400F8740
#define CharacterZoneClient__GetModCap_x                   0x1400FFD20
#define CharacterZoneClient__GetOpenEffectSlot_x           0x1400DEC30
#define CharacterZoneClient__GetPCSpellAffect_x            0x1400DEE00
#define CharacterZoneClient__GetPctModAndMin_x             0x1400D3400
#define CharacterZoneClient__HasSkill_x                    0x1400FB860
#define CharacterZoneClient__HitBySpell_x                  0x1400DF890
#define CharacterZoneClient__IsStackBlocked_x              0x1400E3260
#define CharacterZoneClient__MakeMeVisible_x               0x1400FF800
#define CharacterZoneClient__Max_Endurance_x               0x1402F7100  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                      0x1400FFB50
#define CharacterZoneClient__Max_Mana_x                    0x1402F7320  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x        0x1400FFFB0
#define CharacterZoneClient__RemovePCAffectex_x            0x1400E68D0
#define CharacterZoneClient__SpellDuration_x               0x1400E7600
#define CharacterZoneClient__TotalEffect_x                 0x1400E8AA0
#define CharacterZoneClient__UseSkill_x                    0x1401055A0


// CBankWnd
#define CBankWnd__WndNotification_x                        0x1403841D0

// CBarterWnd
#define CBarterWnd__WndNotification_x                      0x14038EFA0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                0x14038AC70
#define CBarterSearchWnd__UpdateInventoryList_x            0x14038EA10

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x            0x140391800

// CButtonWnd
#define CButtonWnd__vftable_x                              0x140AEAB70

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x             0x1403B49F0
#define CChatWindowManager__InitContextMenu_x              0x1403B4B80
#define CChatWindowManager__FreeChatWindow_x               0x1403B39F0
#define CChatWindowManager__SetLockedActiveChatWindow_x    0x1403BCF00
#define CChatWindowManager__CreateChatWindow_x             0x1403B3420

// ChatManagerClient
#define ChatManagerClient__Instance_x                      0x14010DBB0

// CChatWindow
#define CChatWindow__CChatWindow_x                         0x1403BDF70
#define CChatWindow__Clear_x                               0x1403BEF70
#define CChatWindow__WndNotification_x                     0x1403C01E0
#define CChatWindow__AddHistory_x                          0x1403BEA80

// CContextMenu
#define CContextMenu__AddMenuItem_x                        0x1405E8CE0
#define CContextMenu__RemoveMenuItem_x                     0x1405E90F0
#define CContextMenu__RemoveAllMenuItems_x                 0x1405E90C0
#define CContextMenu__CheckMenuItem_x                      0x1405E8F30
#define CContextMenu__SetMenuItem_x                        0x1405E9110
#define CContextMenu__AddSeparator_x                       0x1405E8E60

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                     0x1405DAAC0
#define CContextMenuManager__RemoveMenu_x                  0x1405DB090
#define CContextMenuManager__PopupMenu_x                   0x1405DADD0
#define CContextMenuManager__Flush_x                       0x1405DAB40
#define CContextMenuManager__CreateDefaultMenu_x           0x1403CE960

// CChatService
#define CChatService__GetNumberOfFriends_x                 0x1406B8930
#define CChatService__GetFriendName_x                      0x1406B8940

// CComboWnd
#define CComboWnd__DeleteAll_x                             0x1405CB9F0
#define CComboWnd__Draw_x                                  0x1405CBAE0
#define CComboWnd__GetCurChoice_x                          0x1405CBE40  // unused
#define CComboWnd__GetListRect_x                           0x1405CBE60
#define CComboWnd__InsertChoice_x                          0x1405CC180
#define CComboWnd__SetColors_x                             0x1405CC510
#define CComboWnd__SetChoice_x                             0x1405CC4D0
#define CComboWnd__GetItemCount_x                          0x1405CBE50
#define CComboWnd__GetCurChoiceText_x                      0x1405CBE00  // unused
#define CComboWnd__GetChoiceText_x                         0x1405CBD90
#define CComboWnd__InsertChoiceAtIndex_x                   0x1405CC240

// CContainerWnd
#define CContainerWnd__HandleCombine_x                     0x1403CC650
#define CContainerWnd__SetContainer_x                      0x14042C1A0
#define CContainerWnd__vftable_x                           0x1409FFF10

// CDisplay
#define CDisplay__cameraType_x                             0x140DF8BB4
#define CDisplay__ZoneMainUI_x                             0x140603320
#define CDisplay__PreZoneMainUI_x                          0x1401A2F80
#define CDisplay__CleanGameUI_x                            0x1401951E0
#define CDisplay__GetClickedActor_x                        0x140199400
#define CDisplay__GetUserDefinedColor_x                    0x14019A070
#define CDisplay__InitCharSelectUI_x                       0x14019A320
#define CDisplay__ReloadUI_x                               0x1401A5280
#define CDisplay__RestartUI_x                              0x140208590
#define CDisplay__WriteTextHD2_x                           0x1401AC2A0
#define CDisplay__TrueDistance_x                           0x1401ABF40
#define CDisplay__SetViewActor_x                           0x1401A87B0
#define CDisplay__GetFloorHeight_x                         0x140199660
#define CDisplay__ToggleScreenshotMode_x                   0x1401ABA30
#define CDisplay__RealRender_World_x                       0x1401A4650

// CEditWnd
#define CEditBaseWnd__SetSel_x                             0x14060D7E0
#define CEditWnd__DrawCaret_x                              0x1405F43A0  // unused
#define CEditWnd__EnsureCaretVisible_x                     0x1405FF430
#define CEditWnd__GetCaretPt_x                             0x1405FF6D0  // unused
#define CEditWnd__GetCharIndexPt_x                         0x1405FF710
#define CEditWnd__GetDisplayString_x                       0x1405FF960
#define CEditWnd__GetHorzOffset_x                          0x1405FFBB0
#define CEditWnd__GetLineForPrintableChar_x                0x1405FFD00
#define CEditWnd__GetSelStartPt_x                          0x1405FFFF0  // unused
#define CEditWnd__GetSTMLSafeText_x                        0x1405FFE30
#define CEditWnd__PointFromPrintableChar_x                 0x140600C30
#define CEditWnd__ReplaceSelection_x                       0x140600FE0
#define CEditWnd__SelectableCharFromPoint_x                0x1406014A0
#define CEditWnd__SetEditable_x                            0x140601730
#define CEditWnd__SetWindowText_x                          0x140601760

// CEverQuest
#define CEverQuest__DoPercentConvert_x                     0x14027F010
#define CEverQuest__ClickedPlayer_x                        0x1402731D0
#define CEverQuest__CreateTargetIndicator_x                0x140273AD0
#define CEverQuest__DoTellWindow_x                         0x14010D8B0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                      0x14010E1A0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                 0x140280A00
#define CEverQuest__dsp_chat_x                             0x14010D2E0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                             0x1402AC220
#define CEverQuest__Emote_x                                0x1402813F0
#define CEverQuest__GetBodyTypeDesc_x                      0x1402821D0
#define CEverQuest__GetClassDesc_x                         0x140282230
#define CEverQuest__GetClassThreeLetterCode_x              0x140282600
#define CEverQuest__GetDeityDesc_x                         0x1402828B0
#define CEverQuest__GetLangDesc_x                          0x140282CE0
#define CEverQuest__GetRaceDesc_x                          0x140283080
#define CEverQuest__InterpretCmd_x                         0x140284CC0
#define CEverQuest__LeftClickedOnPlayer_x                  0x14029A6B0
#define CEverQuest__LMouseUp_x                             0x1402867D0
#define CEverQuest__RightClickedOnPlayer_x                 0x140297A50
#define CEverQuest__RMouseUp_x                             0x1402910F0
#define CEverQuest__SetGameState_x                         0x14029D160
#define CEverQuest__UPCNotificationFlush_x                 0x1402A2BA0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                      0x1402863B0
#define CEverQuest__ReportSuccessfulHeal_x                 0x1402924E0
#define CEverQuest__ReportSuccessfulHit_x                  0x140293300

// CGaugeWnd
#define CGaugeWnd__Draw_x                                  0x1403E2260

// CGuild
#define CGuild__FindMemberByName_x                         0x1400C7650
#define CGuild__GetGuildName_x                             0x1400C7690

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                       0x140409150

//CHotButton
#define CHotButton__SetButtonSize_x                        0x1402BE7B0
#define CHotButton__SetCheck_x                             0x1402BEAA0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                         0x140422FE0
#define CInvSlotMgr__MoveItem_x                            0x140423B70
#define CInvSlotMgr__SelectSlot_x                          0x140425E90

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                        0x14041FDA0
#define CInvSlot__SliderComplete_x                         0x1404215D0
#define CInvSlot__GetItemBase_x                            0x14041B400
#define CInvSlot__UpdateItem_x                             0x140421A80

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                         0x1404280A0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                         0x140449870
#define CItemDisplayWnd__UpdateStrings_x                   0x14044CAC0
#define CItemDisplayWnd__InsertAugmentRequest_x            0x140446110
#define CItemDisplayWnd__RemoveAugmentRequest_x            0x140447A40
#define CItemDisplayWnd__RequestConvertItem_x              0x140448C80

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                       0x140517930
#define CSpellDisplayWnd__UpdateStrings_x                  0x1405196C0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                   0x140555140

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x        0x140442790

// CSpellDisplayManager
#define CSpellDisplayManager__ShowSpell_x                  0x140519500

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                   0x14015AB90

// CLabel
#define CLabel__UpdateText_x                               0x1404540E0

// CListWnd
#define CListWnd__CListWnd_x                               0x1405CF350
#define CListWnd__dCListWnd_x                              0x1405CF780
#define CListWnd__vftable_x                                0x140AE8CC0
#define CListWnd__AddColumn_x                              0x1405CFE10
#define CListWnd__AddColumn1_x                             0x1405CFEB0
#define CListWnd__AddLine_x                                0x1405D0010
#define CListWnd__AddString_x                              0x1405D05B0
#define CListWnd__CalculateFirstVisibleLine_x              0x1405D0B20
#define CListWnd__CalculateVSBRange_x                      0x1405D0E00
#define CListWnd__ClearSel_x                               0x1405D0FA0
#define CListWnd__ClearAllSel_x                            0x1405D0F40
#define CListWnd__CloseAndUpdateEditWindow_x               0x1405D1000
#define CListWnd__Compare_x                                0x1405D11C0
#define CListWnd__Draw_x                                   0x1405D1680
#define CListWnd__DrawColumnSeparators_x                   0x1405D2200
#define CListWnd__DrawHeader_x                             0x1405D22C0
#define CListWnd__DrawItem_x                               0x1405D29A0
#define CListWnd__DrawLine_x                               0x1405D3340
#define CListWnd__DrawSeparator_x                          0x1405D3800
#define CListWnd__EnableLine_x                             0x1405D3C20
#define CListWnd__EnsureVisible_x                          0x1405D3C80
#define CListWnd__ExtendSel_x                              0x1405D3D80
#define CListWnd__GetColumnMinWidth_x                      0x1405D4110
#define CListWnd__GetColumnWidth_x                         0x1405D4190
#define CListWnd__GetCurSel_x                              0x1405D4290
#define CListWnd__GetItemData_x                            0x1405D4610
#define CListWnd__GetItemHeight_x                          0x1405D4650
#define CListWnd__GetItemRect_x                            0x1405D4880
#define CListWnd__GetItemText_x                            0x1405D4B20
#define CListWnd__GetSelList_x                             0x1405D4D80
#define CListWnd__GetSeparatorRect_x                       0x1405D4F70
#define CListWnd__InsertLine_x                             0x1405D63D0
#define CListWnd__RemoveLine_x                             0x1405D6A40
#define CListWnd__SetColors_x                              0x1405D6E00
#define CListWnd__SetColumnJustification_x                 0x1405D6E20
#define CListWnd__SetColumnLabel_x                         0x1405D6EA0
#define CListWnd__SetColumnWidth_x                         0x1405D7040
#define CListWnd__SetCurSel_x                              0x1405D7110
#define CListWnd__SetItemColor_x                           0x1405D7380
#define CListWnd__SetItemData_x                            0x1405D7420
#define CListWnd__SetItemText_x                            0x1405D7660
#define CListWnd__Sort_x                                   0x1405D7A70
#define CListWnd__ToggleSel_x                              0x1405D7BE0
#define CListWnd__SetColumnsSizable_x                      0x1405D7090
#define CListWnd__SetItemWnd_x                             0x1405D7790
#define CListWnd__GetItemWnd_x                             0x1405D4D10
#define CListWnd__SetItemIcon_x                            0x1405D7460
#define CListWnd__CalculateCustomWindowPositions_x         0x1405D08F0
#define CListWnd__SetVScrollPos_x                          0x1405D79D0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                         0x140467A90

// MapViewMap
#define MapViewMap__vftable_x                              0x140A4D8A0
#define MapViewMap__Clear_x                                0x140469750
#define MapViewMap__SetZoom_x                              0x14046FE30
#define MapViewMap__HandleLButtonDown_x                    0x14046C930

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x              0x140491EE0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x 0x140498850
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x 0x140499020
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x 0x14049C950
#define CMerchantWnd__SelectBuySellSlot_x                  0x14049BC50
#define CMerchantWnd__PurchasePageHandler__UpdateList_x    0x1404A0DE0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                           0x140693C80
#define CPacketScrambler__hton_x                           0x140693C70

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x         0x1405F87D0
#define CSidlManagerBase__FindAnimation1_x                 0x1405F8710
#define CSidlManagerBase__FindScreenPieceTemplate_x        0x1405F8E10
#define CSidlManagerBase__FindScreenPieceTemplate1_x       0x1405F8BB0
#define CSidlManagerBase__CreateXWndFromTemplate_x         0x1405F7B10
#define CSidlManagerBase__CreateXWndFromTemplate1_x        0x1405F7AA0
#define CSidlManagerBase__CreateXWnd_x                     0x1405F70E0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                 0x14050A7A0
#define CSidlManager__CreateXWnd_x                         0x14050A960

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                0x1405BD180
#define CSidlScreenWnd__CalculateVSBRange_x                0x1405BD070
#define CSidlScreenWnd__ConvertToRes_x                     0x140607B20 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x           0x1405BD2F0
#define CSidlScreenWnd__CSidlScreenWnd1_x                  0x1405BC7B0
#define CSidlScreenWnd__CSidlScreenWnd2_x                  0x1405BC880
#define CSidlScreenWnd__dCSidlScreenWnd_x                  0x1405BCA90
#define CSidlScreenWnd__DrawSidlPiece_x                    0x1405BD9D0
#define CSidlScreenWnd__EnableIniStorage_x                 0x1405BDC00
#define CSidlScreenWnd__GetChildItem_x                     0x1405BDDA0
#define CSidlScreenWnd__GetSidlPiece_x                     0x1405BDFF0
#define CSidlScreenWnd__HandleLButtonUp_x                  0x1405C8080 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                            0x1405BE360
#define CSidlScreenWnd__LoadIniInfo_x                      0x1405BE6D0
#define CSidlScreenWnd__LoadIniListWnd_x                   0x1405BEF90
#define CSidlScreenWnd__LoadSidlScreen_x                   0x1405BF990
#define CSidlScreenWnd__m_layoutCopy_x                     0x140F529C8
#define CSidlScreenWnd__StoreIniInfo_x                     0x1405C0000
#define CSidlScreenWnd__StoreIniVis_x                      0x1405C07F0
#define CSidlScreenWnd__vftable_x                          0x140AE7F48
#define CSidlScreenWnd__WndNotification_x                  0x1405C0840

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                           0x14033AA80 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                           0x14033ADA0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                          0x14033ACD0
#define CSkillMgr__IsActivatedSkill_x                      0x14033B160
#define CSkillMgr__IsCombatSkill_x                         0x14033B1A0
#define CSkillMgr__GetSkillTimerDuration_x                 0x14033B0D0
#define CSkillMgr__GetSkillLastUsed_x                      0x14033AD20

// CSliderWnd
#define CSliderWnd__GetValue_x                             0x1405D8550
#define CSliderWnd__SetValue_x                             0x1405D8D60
#define CSliderWnd__SetNumTicks_x                          0x1405D8BE0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                       0x140511000

// CStmlWnd
#define CStmlWnd__AppendSTML_x                             0x1405DD510
#define CStmlWnd__CalculateHSBRange_x                      0x1405C7960
#define CStmlWnd__CalculateVSBRange_x                      0x1405DE420
#define CStmlWnd__FastForwardToEndOfTag_x                  0x1405DEEB0
#define CStmlWnd__ForceParseNow_x                          0x1405DEF50
#define CStmlWnd__GetVisibleText_x                         0x1405DF620
#define CStmlWnd__MakeStmlColorTag_x                       0x1405E13B0
#define CStmlWnd__MakeWndNotificationTag_x                 0x1405E13F0
#define CStmlWnd__SetSTMLText_x                            0x1405E8460
#define CStmlWnd__StripFirstSTMLLines_x                    0x1405E8610
#define CStmlWnd__UpdateHistoryString_x                    0x1405E89B0

// CTabWnd
#define CTabWnd__Draw_x                                    0x1405D9130
#define CTabWnd__DrawCurrentPage_x                         0x1405D91D0
#define CTabWnd__DrawTab_x                                 0x1405D95A0
#define CTabWnd__GetTabRect_x                              0x1405D9C30
#define CTabWnd__InsertPage_x                              0x1405D9F00
#define CTabWnd__RemovePage_x                              0x1405DA190
#define CTabWnd__SetPage_x                                 0x1405DA2F0
#define CTabWnd__UpdatePage_x                              0x1405DA5F0

// CPageWnd
#define CPageWnd__FlashTab_x                               0x140601BC0
#define CPageWnd__SetTabText_x                             0x140601C30

// CTextOverlay
#define CTextOverlay__DisplayText_x                        0x1400C0B50  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                  0x1400C0F80


// CTextureFont
#define CTextureFont__DrawWrappedText_x                    0x1405EFFF0
#define CTextureFont__DrawWrappedText1_x                   0x1405EFEF0
#define CTextureFont__DrawWrappedText2_x                   0x1405F0120
#define CTextureFont__GetTextExtent_x                      0x1405F04D0
#define CTextureFont__GetHeight_x                          0x1405F0490

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                      0x140606240

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                     0x1405B9C00

// CXStr
#define CXStr__gFreeLists_x                                0x140D7E040
#define CXStr__gCXStrAccess_x                              0x140F52528

// CXWnd
#define CXWnd__BringToTop_x                                0x1405C3030
#define CXWnd__ClrFocus_x                                  0x1405C3320
#define CXWnd__Destroy_x                                   0x1405C34A0
#define CXWnd__DoAllDrawing_x                              0x1405C35B0
#define CXWnd__DrawColoredRect_x                           0x1405C3D60
#define CXWnd__DrawTooltip_x                               0x1405C53D0
#define CXWnd__DrawTooltipAtPoint_x                        0x1405C5490
#define CXWnd__GetChildItem_x                              0x1405C5D90
#define CXWnd__GetChildWndAt_x                             0x1405C5E50
#define CXWnd__GetClientRect_x                             0x1405C6100
#define CXWnd__GetClientClipRect_x                         0x1405C5FB0
#define CXWnd__GetRelativeRect_x                           0x1405C7AA0
#define CXWnd__GetScreenClipRect_x                         0x1405C7BB0
#define CXWnd__GetScreenRect_x                             0x1405C7D00
#define CXWnd__GetTooltipRect_x                            0x1405C7E80
#define CXWnd__IsActive_x                                  0x1405C8440
#define CXWnd__IsDescendantOf_x                            0x1405C8470
#define CXWnd__IsReallyVisible_x                           0x1405C84E0
#define CXWnd__IsType_x                                    0x1405C8530
#define CXWnd__Minimize_x                                  0x1405C8630
#define CXWnd__ProcessTransition_x                         0x1405C9510
#define CXWnd__Resize_x                                    0x1405C9620
#define CXWnd__Right_x                                     0x1405C96C0
#define CXWnd__SetFocus_x                                  0x1405C9A60
#define CXWnd__SetFont_x                                   0x1405C9AB0
#define CXWnd__SetKeyTooltip_x                             0x1405C9BB0
#define CXWnd__SetMouseOver_x                              0x1405C9D00
#define CXWnd__SetParent_x                                 0x1405C9D80
#define CXWnd__StartFade_x                                 0x1405CA1C0
#define CXWnd__vftable_x                                   0x140AE8520
#define CXWnd__CXWnd_x                                     0x1405C1C60
#define CXWnd__dCXWnd_x                                    0x1405C2580

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                     0x14060CF70

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                  0x1405EA2A0
#define CXWndManager__DrawCursor_x                         0x1405EA580
#define CXWndManager__DrawWindows_x                        0x1405EA7E0
#define CXWndManager__GetKeyboardFlags_x                   0x1405EAE50
#define CXWndManager__HandleKeyboardMsg_x                  0x1405EAE90
#define CXWndManager__RemoveWnd_x                          0x1405EE680

// CDBStr
#define CDBStr__GetString_x                                0x1401933A0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                0x14069DC70

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x               0x1400D5E60
#define CCharacterListWnd__EnterWorld_x                    0x1400D4C60
#define CCharacterListWnd__Quit_x                          0x1400D5E40
#define CCharacterListWnd__UpdateList_x                    0x1400D6BA0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                        0x14066AE60
#define ItemBase__CreateItemTagString_x                    0x14066B900
#define ItemBase__GetImageNum_x                            0x14066E080
#define ItemBase__GetItemValue_x                           0x14066FBC0
#define ItemBase__IsEmpty_x                                0x140671960
#define ItemBase__IsKeyRingItem_x                          0x140672090
#define ItemBase__ValueSellMerchant_x                      0x1406762F0
#define ItemClient__CanDrop_x                              0x1402C0FD0
#define ItemClient__CanGoInBag_x                           0x1402C1100
#define ItemClient__CreateItemClient_x                     0x1402C1390
#define ItemClient__dItemClient_x                          0x1402C0E50

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                      0x1401B3000
#define EQ_LoadingS__Array_x                               0x140D57D40

// PcClient
#define PcBase__GetAlternateAbilityId_x                    0x1406823F0
#define PcBase__GetCombatAbility_x                         0x140682AF0
#define PcBase__GetCombatAbilityTimer_x                    0x140682B90
#define PcBase__GetItemContainedRealEstateIds_x            0x140683360
#define PcBase__GetNonArchivedOwnedRealEstates_x           0x140683DE0
#define PcClient__AlertInventoryChanged_x                  0x1402E45D0
#define PcClient__GetConLevel_x                            0x1402E4CF0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x            0x1402E73D0
#define PcClient__HasLoreItem_x                            0x1402E8480
#define PcZoneClient__GetItemRecastTimer_x                 0x1402F4D70
#define PcZoneClient__RemoveMyAffect_x                     0x1402F8230

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                       0x140228B80
#define EQGroundItemListManager__Add_x                     0x140228D30
#define EQGroundItemListManager__Clear_x                   0x140228DD0
#define EQGroundItemListManager__Delete_x                  0x140228E90
#define EQGroundItemListManager__Instance_x                0x140228F20

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                         0x140264340

// CTribute
#define CTribute__GetActiveFavorCost_x                     0x14018DAE0

// PlayerClient
#define PlayerBase__CanSee_x                               0x1406565C0
#define PlayerBase__CanSee1_x                              0x1406566A0
#define PlayerBase__GetVisibilityLineSegment_x             0x140656B90
#define PlayerBase__HasProperty_x                          0x140656D70
#define PlayerBase__IsTargetable_x                         0x140656E30
#define PlayerClient__ChangeBoneStringSprite_x             0x140305FE0
#define PlayerClient__GetPcClient_x                        0x140308B20
#define PlayerClient__PlayerClient_x                       0x1402FE300
#define PlayerClient__SetNameSpriteState_x                 0x14030C250
#define PlayerClient__SetNameSpriteTint_x                  0x14030D210
#define PlayerZoneClient__ChangeHeight_x                   0x14031BD50
#define PlayerZoneClient__DoAttack_x                       0x14031CA60
#define PlayerZoneClient__GetLevel_x                       0x1403201B0
#define PlayerZoneClient__IsValidTeleport_x                0x1402670D0
#define PlayerZoneClient__LegalPlayerRace_x                0x1401A1800

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                0x140315220  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x              0x1403152D0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x    0x1403153D0
#define PlayerManagerClient__CreatePlayer_x                0x140314CE0
#define PlayerManagerBase__PrepForDestroyPlayer_x          0x1406560D0

// KeyPressHandler
#define KeypressHandler__Get_x                             0x1402C6600
#define KeypressHandler__AttachAltKeyToEqCommand_x         0x1402C5F10
#define KeypressHandler__AttachKeyToEqCommand_x            0x1402C5F80
#define KeypressHandler__ClearCommandStateArray_x          0x1402C6590  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                   0x1402C6720
#define KeypressHandler__HandleKeyUp_x                     0x1402C6840
#define KeypressHandler__SaveKeymapping_x                  0x1402C6410  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x               0x14069B780  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                           0x1406953A0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                    0x1402EE540  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x             0x1402F2E90
#define PcZoneClient__GetPcSkillLimit_x                    0x1402F5E50
#define PcZoneClient__RemovePetEffect_x                    0x1402F8510
#define PcZoneClient__HasAlternateAbility_x                0x1402F6A30
#define PcZoneClient__CanEquipItem_x                       0x1402F1120
#define PcZoneClient__GetItemByID_x                        0x1402F3DE0
#define PcZoneClient__RemoveBuffEffect_x                   0x1402F80C0
#define PcZoneClient__BandolierSwap_x                      0x1402E4680

// Doors
#define EQSwitch__UseSwitch_x                              0x14026BD40

// IconCache
#define IconCache__GetIcon_x                               0x1403D70E0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                     0x1403CB3A0
#define CContainerMgr__CloseContainer_x                    0x1403CACC0
#define CContainerMgr__OpenExperimentContainer_x           0x1403CB740

// CQuantityWnd
#define CQuantityWnd__Open_x                               0x1404CDAA0

// CHelpWnd
#define CHelpWnd__SetFile_x                                0x1402B8560

// CLootWnd
#define CLootWnd__LootAll_x                                0x14045B620
#define CLootWnd__RequestLootSlot_x                        0x14045C670

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                    0x1401E3790
#define EQ_Spell__SpellAffects_x                           0x1401E4A70
#define EQ_Spell__SpellAffectBase_x                        0x1401E49D0
#define EQ_Spell__GetSpellAffectBySlot_x                   0x1400DEF90
#define EQ_Spell__GetSpellAffectByIndex_x                  0x1400DEF40
#define EQ_Spell__IsSPAStacking_x                          0x1401E46A0
#define EQ_Spell__IsSPAIgnoredByStacking_x                 0x1401E4250
#define EQ_Spell__IsDegeneratingLevelMod_x                 0x1401E3B10

// EQSpellStrings
#define EQSpellStrings__GetString_x                        0x1400C6160

// CTargetWnd
#define CTargetWnd__WndNotification_x                      0x14052B750
#define CTargetWnd__RefreshTargetBuffs_x                   0x14052AE70
#define CTargetWnd__HandleBuffRemoveRequest_x              0x14052A680

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                       0x140533000  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                           0x14018A570
#define CTaskManager__GetTaskStatus_x                      0x14018A680
#define CTaskManager__GetElementDescription_x              0x14018A200

// EqSoundManager
#define EqSoundManager__WavePlay_x                         0x1401E1AB0
#define EqSoundManager__PlayScriptMp3_x                    0x1401E0840
#define EqSoundManager__SoundAssistPlay_x                  0x14033FE50  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                 0x140340190  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                          0x1405CAF90
#define CTextureAnimation__SetCurCell_x                    0x1405CB2A0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                     0x1402B6750

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x              0x1406B60A0
#define CharacterBase__GetItemByGlobalIndex1_x             0x1406B6120
#define CharacterBase__IsExpansionFlag_x                   0x140207BE0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x              0x1403A58C0
#define CCastSpellWnd__IsBardSongPlaying_x                 0x1403A6330
#define CCastSpellWnd__RefreshSpellGemButtons_x            0x1403A78A0

// messages
#define msg_spell_worn_off_x                               0x1404966F0
#define msg_new_text_x                                     0x14021A550
#define __msgTokenTextParam_x                              0x140211970
#define msgTokenText_x                                     0x140211880

// SpellManager
#define Spellmanager__LoadTextSpells_x                     0x140341BC0
#define SpellManager__GetSpellByGroupAndRank_x             0x140341AC0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140666580

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                            0x140454870

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                0x1403D01D0
#define CCursorAttachment__IsOkToActivate_x                0x1403D3670
#define CCursorAttachment__RemoveAttachment_x              0x1403D3920
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x             0x1406046A0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x          0x1406048A0
#define CEQSuiteTextureLoader__GetTexture_x                0x1406048B0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                    0x140155400
#define CFindItemWnd__Update_x                             0x140155DC0
#define CFindItemWnd__PickupSelectedItem_x                 0x14014EAA0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x            0x140160020
#define LootFiltersManager__GetItemFilterData_x            0x140160B40
#define LootFiltersManager__RemoveItemLootFilter_x         0x1401613F0
#define LootFiltersManager__SetItemLootFilter_x            0x1401616A0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                  0x1404AF890

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x             0x14033A640
#define CResolutionHandler__UpdateResolution_x             0x1405AF7E0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                            0x1403C74C0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x               0x1406BA4B0  // Rename..?
#define CDistillerInfo__Instance_x                         0x1406BA3A0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                       0x1403F1900
#define CGroupWnd__UpdateDisplay_x                         0x1403F0A70

// ItemBase
#define ItemBase__IsLore_x                                 0x1406721D0
#define ItemBase__IsLoreEquipped_x                         0x140672260

#define MultipleItemMoveManager__ProcessMove_x             0x1402DA0D0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                    0x1402644A0
#define EQPlacedItemManager__GetItemByGuid_x               0x140264430
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140264470

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                0x140334850

// FactionManagerClient
#define FactionManagerClient__Instance_x                   0x14012B6B0
#define FactionManagerClient__HandleFactionMessage_x       0x14012BA90
#define FactionManagerClient__GetFactionStanding_x         0x14012AE80
#define FactionManagerClient__GetMaxFaction_x              0x14012AE80
#define FactionManagerClient__GetMinFaction_x              0x14012AD30

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                0x1400B2EB0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                   0x140137060

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x 0x1401BC070
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x 0x1401BB210
#define CAltAbilityData__GetMercCurrentRank_x              0x1401BBE90  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                  0x1401BBE10  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                              0x140346ED0

// KeyCombo
#define KeyCombo__GetTextDescription_x                     0x1405C0E30

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                    0x140088E10

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                 0x140358760

// AchievementManager
#define AchievementManager__Instance_x                     0x140091FC0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                       0x14069E800
#define FreeToPlayClient__RestrictionInfo_x                0x140AFCF20

// UdpConnection
#define UdpConnection__GetStats_x                          0x1405624E0

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                            0x1408528E8
#define CGFScreenWnd__CGFScreenWnd_x                       0x140072AD0
#define CGFScreenWnd__CGFScreenWnd1_x                      0x140072C60
#define CGFScreenWnd__dCGFScreenWnd_x                      0x140072E10

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
