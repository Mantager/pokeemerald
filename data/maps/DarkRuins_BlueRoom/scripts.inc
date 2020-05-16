DarkRuins_BlueRoom_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, DarkRuins_BlueRoom_OnLoad
	.byte 0

DarkRuins_BlueRoom_OnLoad::
	copyvar VAR_TEMP_C, VAR_DARK_RUINS_SONG_COUNTER
	compare VAR_DARK_RUINS_SONG_COUNTER, 1
	call_if_lt DarkRuins_BlueRoom_EventScript_CloseDoor1
	compare VAR_DARK_RUINS_SONG_COUNTER, 2
	call_if_lt DarkRuins_BlueRoom_EventScript_CloseDoor2
	compare VAR_DARK_RUINS_SONG_COUNTER, 3
	call_if_lt DarkRuins_BlueRoom_EventScript_CloseDoor3
	end

DarkRuins_BlueRoom_EventScript_CloseDoor1::
	setmetatile 6, 15, METATILE_ColorRuinsGeneric_GreyWallBottom, 1
	setmetatile 7, 15, METATILE_ColorRuinsGeneric_GreyWallBottom, 1
	setmetatile 8, 15, METATILE_ColorRuinsGeneric_GreyWallBottom, 1
	setmetatile 9, 15, METATILE_ColorRuinsGeneric_GreyWallBottom, 1
	setmetatile 10, 15, METATILE_ColorRuinsGeneric_GreyWallBottom, 1
	setmetatile 6, 14, METATILE_ColorRuinsGeneric_GreyWallTop, 1
	setmetatile 7, 14, METATILE_ColorRuinsGeneric_GreyWallTop, 1
	setmetatile 8, 14, METATILE_ColorRuinsGeneric_GreyWallTop, 1
	setmetatile 9, 14, METATILE_ColorRuinsGeneric_GreyWallTop, 1
	setmetatile 10, 14, METATILE_ColorRuinsGeneric_GreyWallTop, 1
	special DrawWholeMapView
	return
	
DarkRuins_BlueRoom_EventScript_CloseDoor2::
	setmetatile 6, 10, METATILE_ColorRuinsGeneric_GreyWallBottom, 1
	setmetatile 7, 10, METATILE_ColorRuinsGeneric_GreyWallBottom, 1
	setmetatile 8, 10, METATILE_ColorRuinsGeneric_GreyWallBottom, 1
	setmetatile 9, 10, METATILE_ColorRuinsGeneric_GreyWallBottom, 1
	setmetatile 10, 10, METATILE_ColorRuinsGeneric_GreyWallBottom, 1
	setmetatile 6, 9, METATILE_ColorRuinsGeneric_GreyWallTop, 1
	setmetatile 7, 9, METATILE_ColorRuinsGeneric_GreyWallTop, 1
	setmetatile 8, 9, METATILE_ColorRuinsGeneric_GreyWallTop, 1
	setmetatile 9, 9, METATILE_ColorRuinsGeneric_GreyWallTop, 1
	setmetatile 10, 9, METATILE_ColorRuinsGeneric_GreyWallTop, 1
	special DrawWholeMapView
	return
	
DarkRuins_BlueRoom_EventScript_CloseDoor3::
	setmetatile 6, 5, METATILE_ColorRuinsGeneric_GreyWallBottom, 1
	setmetatile 7, 5, METATILE_ColorRuinsGeneric_GreyWallBottom, 1
	setmetatile 8, 5, METATILE_ColorRuinsGeneric_GreyWallBottom, 1
	setmetatile 9, 5, METATILE_ColorRuinsGeneric_GreyWallBottom, 1
	setmetatile 10, 5, METATILE_ColorRuinsGeneric_GreyWallBottom, 1
	setmetatile 6, 4, METATILE_ColorRuinsGeneric_GreyWallTop, 1
	setmetatile 7, 4, METATILE_ColorRuinsGeneric_GreyWallTop, 1
	setmetatile 8, 4, METATILE_ColorRuinsGeneric_GreyWallTop, 1
	setmetatile 9, 4, METATILE_ColorRuinsGeneric_GreyWallTop, 1
	setmetatile 10, 4, METATILE_ColorRuinsGeneric_GreyWallTop, 1
	special DrawWholeMapView
	return

DarkRuins_BlueRoom_EventScript_OpenDoor1::
	playse SE_BAN
	setmetatile 6, 15, METATILE_ColorRuinsGeneric_GreyWallBottomLeft, 1
	setmetatile 7, 15, METATILE_ColorRuinsGeneric_Ground, 0
	setmetatile 8, 15, METATILE_ColorRuinsGeneric_Ground, 0
	setmetatile 9, 15, METATILE_ColorRuinsGeneric_Ground, 0
	setmetatile 10, 15, METATILE_ColorRuinsGeneric_GreyWallBottomRight, 1
	setmetatile 6, 14, METATILE_ColorRuinsGeneric_GreyWallTopLeft, 1
	setmetatile 7, 14, METATILE_ColorRuinsGeneric_Ground, 0
	setmetatile 8, 14, METATILE_ColorRuinsGeneric_Ground, 0
	setmetatile 9, 14, METATILE_ColorRuinsGeneric_Ground, 0
	setmetatile 10, 14, METATILE_ColorRuinsGeneric_GreyWallTopRight, 1
	special DrawWholeMapView
	return
	
DarkRuins_BlueRoom_EventScript_OpenDoor2::
	playse SE_BAN
	setmetatile 6, 10, METATILE_ColorRuinsGeneric_GreyWallBottomLeft, 1
	setmetatile 7, 10, METATILE_ColorRuinsGeneric_Ground, 0
	setmetatile 8, 10, METATILE_ColorRuinsGeneric_Ground, 0
	setmetatile 9, 10, METATILE_ColorRuinsGeneric_Ground, 0
	setmetatile 10, 10, METATILE_ColorRuinsGeneric_GreyWallBottomRight, 1
	setmetatile 6, 9, METATILE_ColorRuinsGeneric_GreyWallTopLeft, 1
	setmetatile 7, 9, METATILE_ColorRuinsGeneric_Ground, 0
	setmetatile 8, 9, METATILE_ColorRuinsGeneric_Ground, 0
	setmetatile 9, 9, METATILE_ColorRuinsGeneric_Ground, 0
	setmetatile 10, 9, METATILE_ColorRuinsGeneric_GreyWallTopRight, 1
	special DrawWholeMapView
	return
	
DarkRuins_BlueRoom_EventScript_OpenDoor3::
	playse SE_BAN
	setmetatile 6, 5, METATILE_ColorRuinsGeneric_GreyWallBottomLeft, 1
	setmetatile 7, 5, METATILE_ColorRuinsGeneric_Ground, 0
	setmetatile 8, 5, METATILE_ColorRuinsGeneric_Ground, 0
	setmetatile 9, 5, METATILE_ColorRuinsGeneric_Ground, 0
	setmetatile 10, 5, METATILE_ColorRuinsGeneric_GreyWallBottomRight, 1
	setmetatile 6, 4, METATILE_ColorRuinsGeneric_GreyWallTopLeft, 1
	setmetatile 7, 4, METATILE_ColorRuinsGeneric_Ground, 0
	setmetatile 8, 4, METATILE_ColorRuinsGeneric_Ground, 0
	setmetatile 9, 4, METATILE_ColorRuinsGeneric_Ground, 0
	setmetatile 10, 4, METATILE_ColorRuinsGeneric_GreyWallTopRight, 1
	special DrawWholeMapView
	return

DarkRuins_BlueRoom_EventScript_Wall1::
	lock
	msgbox DarkRuins_BlueRoom_EventScript_Text_Pattern1, MSGBOX_DEFAULT
	release
	end
	
DarkRuins_BlueRoom_EventScript_Wall2::
	lock
	msgbox DarkRuins_BlueRoom_EventScript_Text_Pattern2, MSGBOX_DEFAULT
	release
	end
	
DarkRuins_BlueRoom_EventScript_Wall3::
	lock
	msgbox DarkRuins_BlueRoom_EventScript_Text_Pattern3, MSGBOX_DEFAULT
	release
	end

DarkRuins_BlueRoom_EventScript_ResetVars::
	setvar VAR_TEMP_D, 0
	setvar VAR_TEMP_E, 0
	setvar VAR_TEMP_F, 0
	end

DarkRuins_BlueRoom_EventScript_IncrementVars::
	addvar VAR_TEMP_C, 1
	addvar VAR_DARK_RUINS_SONG_COUNTER, 1
	return

DarkRuins_BlueRoom_TriggerNote1C::
	lock
	playse SE_TOY_C
	compare VAR_TEMP_D, 0
	goto_if_ne DarkRuins_BlueRoom_EventScript_ResetVars
	addvar VAR_TEMP_D, 1
	release
	end

DarkRuins_BlueRoom_TriggerNote1D::
	lock
	playse SE_TOY_D
	compare VAR_TEMP_D, 1
	goto_if_ne DarkRuins_BlueRoom_EventScript_ResetVars
	addvar VAR_TEMP_D, 1
	release
	end

DarkRuins_BlueRoom_TriggerNote1c::
	lock
	playse SE_TOY_C1
	compare VAR_TEMP_D, 2
	goto_if_ne DarkRuins_BlueRoom_EventScript_ResetVars
	addvar VAR_TEMP_D, 1
	release
	end

DarkRuins_BlueRoom_TriggerNote1A::
	lock
	playse SE_TOY_A
	compare VAR_TEMP_D, 3
	goto_if_ne DarkRuins_BlueRoom_EventScript_ResetVars
	addvar VAR_TEMP_D, 1
	release
	end

DarkRuins_BlueRoom_TriggerNote1B::
	lock
	playse SE_TOY_B
	compare VAR_TEMP_D, 4
	goto_if_ne DarkRuins_BlueRoom_EventScript_ResetVars
	addvar VAR_TEMP_D, 1
	release
	end

DarkRuins_BlueRoom_TriggerNote1E::
	lock
	playse SE_TOY_E
	compare VAR_TEMP_D, 5
	goto_if_ne DarkRuins_BlueRoom_EventScript_ResetVars
	addvar VAR_TEMP_D, 1
	release
	end

DarkRuins_BlueRoom_TriggerNote1F::
	lock
	playse SE_TOY_F
	compare VAR_TEMP_D, 6
	goto_if_ne DarkRuins_BlueRoom_EventScript_ResetVars
	addvar VAR_TEMP_D, 1
	release
	end

DarkRuins_BlueRoom_TriggerNote1G::
	lock
	playse SE_TOY_G
	compare VAR_TEMP_D, 7
	goto_if_ne DarkRuins_BlueRoom_EventScript_ResetVars
	addvar VAR_TEMP_D, 1
	call DarkRuins_BlueRoom_EventScript_IncrementVars
	call DarkRuins_BlueRoom_EventScript_OpenDoor1
	release
	end

DarkRuins_BlueRoom_TriggerNote2c::
	lock
	playse SE_TOY_C1
	compare VAR_TEMP_E, 0
	goto_if_ne DarkRuins_BlueRoom_EventScript_ResetVars
	addvar VAR_TEMP_E, 1
	release
	end

DarkRuins_BlueRoom_TriggerNote2B::
	lock
	playse SE_TOY_B
	compare VAR_TEMP_E, 1
	goto_if_ne DarkRuins_BlueRoom_EventScript_ResetVars
	addvar VAR_TEMP_E, 1
	release
	end

DarkRuins_BlueRoom_TriggerNote2E::
	lock
	playse SE_TOY_E
	compare VAR_TEMP_E, 2
	goto_if_ne DarkRuins_BlueRoom_EventScript_ResetVars
	addvar VAR_TEMP_E, 1
	release
	end

DarkRuins_BlueRoom_TriggerNote2A::
	lock
	playse SE_TOY_A
	compare VAR_TEMP_E, 3
	goto_if_ne DarkRuins_BlueRoom_EventScript_ResetVars
	addvar VAR_TEMP_E, 1
	release
	end

DarkRuins_BlueRoom_TriggerNote2G::
	lock
	playse SE_TOY_G
	compare VAR_TEMP_E, 4
	goto_if_ne DarkRuins_BlueRoom_EventScript_ResetVars
	addvar VAR_TEMP_E, 1
	release
	end

DarkRuins_BlueRoom_TriggerNote2F::
	lock
	playse SE_TOY_F
	compare VAR_TEMP_E, 5
	goto_if_ne DarkRuins_BlueRoom_EventScript_ResetVars
	addvar VAR_TEMP_E, 1
	release
	end

DarkRuins_BlueRoom_TriggerNote2D::
	lock
	playse SE_TOY_D
	compare VAR_TEMP_E, 6
	goto_if_ne DarkRuins_BlueRoom_EventScript_ResetVars
	addvar VAR_TEMP_E, 1
	release
	end

DarkRuins_BlueRoom_TriggerNote2C::
	lock
	playse SE_TOY_C
	compare VAR_TEMP_E, 7
	goto_if_ne DarkRuins_BlueRoom_EventScript_ResetVars
	addvar VAR_TEMP_E, 1
	call DarkRuins_BlueRoom_EventScript_IncrementVars
	call DarkRuins_BlueRoom_EventScript_OpenDoor2
	release
	end

DarkRuins_BlueRoom_TriggerNote3F::
	lock
	playse SE_TOY_F
	compare VAR_TEMP_F, 0
	goto_if_ne DarkRuins_BlueRoom_EventScript_ResetVars
	addvar VAR_TEMP_F, 1
	release
	end

DarkRuins_BlueRoom_TriggerNote3E::
	lock
	playse SE_TOY_E
	compare VAR_TEMP_F, 1
	goto_if_ne DarkRuins_BlueRoom_EventScript_ResetVars
	addvar VAR_TEMP_F, 1
	release
	end

DarkRuins_BlueRoom_TriggerNote3D::
	lock
	playse SE_TOY_D
	compare VAR_TEMP_F, 2
	goto_if_ne DarkRuins_BlueRoom_EventScript_ResetVars
	addvar VAR_TEMP_F, 1
	release
	end

DarkRuins_BlueRoom_TriggerNote3G::
	lock
	playse SE_TOY_G
	compare VAR_TEMP_F, 3
	goto_if_ne DarkRuins_BlueRoom_EventScript_ResetVars
	addvar VAR_TEMP_F, 1
	release
	end

DarkRuins_BlueRoom_TriggerNote3c::
	lock
	playse SE_TOY_C1
	compare VAR_TEMP_F, 4
	goto_if_ne DarkRuins_BlueRoom_EventScript_ResetVars
	addvar VAR_TEMP_F, 1
	release
	end

DarkRuins_BlueRoom_TriggerNote3A::
	lock
	playse SE_TOY_A
	compare VAR_TEMP_F, 5
	goto_if_ne DarkRuins_BlueRoom_EventScript_ResetVars
	addvar VAR_TEMP_F, 1
	release
	end

DarkRuins_BlueRoom_TriggerNote3C::
	lock
	playse SE_TOY_C
	compare VAR_TEMP_F, 6
	goto_if_ne DarkRuins_BlueRoom_EventScript_ResetVars
	addvar VAR_TEMP_F, 1
	release
	end

DarkRuins_BlueRoom_TriggerNote3B::
	lock
	playse SE_TOY_B
	compare VAR_TEMP_F, 7
	goto_if_ne DarkRuins_BlueRoom_EventScript_ResetVars
	addvar VAR_TEMP_F, 1
	call DarkRuins_BlueRoom_EventScript_IncrementVars
	call DarkRuins_BlueRoom_EventScript_OpenDoor3
	release
	end

DarkRuins_BlueRoom_EventScript_PuzzleCompleteGuy::
	lock
	faceplayer
	goto_if_set FLAG_DARK_RUINS_BLUE_COMPLETE, DarkRuins_BlueRoom_EventScript_AfterPuzzleCompleteGuy
	msgbox DarkRuins_BlueRoom_Text_Congratulations, MSGBOX_DEFAULT
	closemessage
	playfanfare MUS_FANFA5
	msgbox DarkRuins_YellowRoom_Text_PuzzleComplete, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	addvar VAR_DARK_RUINS_ROOMS_COMPLETED, 1
	setflag FLAG_DARK_RUINS_BLUE_COMPLETE
	release
	end

DarkRuins_BlueRoom_EventScript_AfterPuzzleCompleteGuy::
	msgbox DarkRuins_BlueRoom_Text_AfterPuzzleComplete, MSGBOX_DEFAULT
	release
	end
