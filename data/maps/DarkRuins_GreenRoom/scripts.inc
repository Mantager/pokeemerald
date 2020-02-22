DarkRuins_GreenRoom_MapScripts::
	.byte 0

DarkRuins_GreenRoom_EventScript_TriggerFloorChange::
	lockall
	playse SE_SEIKAI
	setmetatile 10, 12, METATILE_ColorRuinsGeneric_FloorTileUp, 0
	waitse
	setvar VAR_TEMP_F, 1
	special DrawWholeMapView
	releaseall
	end

DarkRuins_GreenRoom_EventScript_PuzzleCompleteGuy::
	lock
	faceplayer
	goto_if_set FLAG_DARK_RUINS_GREEN_COMPLETE, DarkRuins_GreenRoom_EventScript_AfterPuzzleCompleteGuy
	msgbox DarkRuins_GreenRoom_Text_Congratulations, MSGBOX_DEFAULT
	closemessage
	playfanfare MUS_FANFA5
	msgbox DarkRuins_YellowRoom_Text_PuzzleComplete, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	addvar VAR_DARK_RUINS_ROOMS_COMPLETED, 1
	setflag FLAG_DARK_RUINS_GREEN_COMPLETE
	release
	end

DarkRuins_GreenRoom_EventScript_AfterPuzzleCompleteGuy::
	msgbox DarkRuins_GreenRoom_Text_AfterPuzzleComplete, MSGBOX_DEFAULT
	release
	end

DarkRuins_GreenRoom_Text_Congratulations:
	.string "Con… grat… ulations…\n"
	.string "Urrrrrp…\p"
	.string "Watching… you… spin…\n"
	.string "made… me… really… sick…$"

DarkRuins_GreenRoom_Text_AfterPuzzleComplete:
	.string "No… more… spinning… please…!$"

