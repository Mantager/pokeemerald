ShendownPath_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, ShendownPath_OnLoad
	.byte 0

ShendownPath_OnLoad::
	call_if_set FLAG_COLOR_RUINS_GREEN_WALL_READ, ShendownPath_BuildBridge
	end

ShendownPath_BuildBridge::
	setmetatile 19, 13, METATILE_Fortree_WoodBridge2_Left, 0
	setmetatile 20, 13, METATILE_Fortree_WoodBridge2_Right, 0
	setmetatile 19, 14, METATILE_Fortree_WoodBridge2_Left, 0
	setmetatile 20, 14, METATILE_Fortree_WoodBridge2_Right, 0
	setmetatile 19, 15, METATILE_Fortree_WoodBridge2_Left, 0
	setmetatile 20, 15, METATILE_Fortree_WoodBridge2_Right, 0
	special DrawWholeMapView
	return

ShendownPath_EventScript_Ling::
	trainerbattle_single TRAINER_LING, ShendownPath_Text_LingIntro, ShendownPath_Text_LingDefeat
	msgbox ShendownPath_Text_LingPostBattle, MSGBOX_AUTOCLOSE
	end

ShendownPath_EventScript_Bai::
	trainerbattle_single TRAINER_BAI, ShendownPath_Text_BaiIntro, ShendownPath_Text_BaiDefeat
	msgbox ShendownPath_Text_BaiPostBattle, MSGBOX_AUTOCLOSE
	end

ShendownPath_EventScript_Hong::
	trainerbattle_single TRAINER_HONG, ShendownPath_Text_HongIntro, ShendownPath_Text_HongDefeat
	msgbox ShendownPath_Text_HongPostBattle, MSGBOX_AUTOCLOSE
	end

ShendownPath_EventScript_Sign::
	msgbox ShendownPath_Text_Sign, MSGBOX_SIGN
	end

ShendownPath_EventScript_Fisherman::
	lock
	faceplayer
	msgbox ShendownPath_Text_Fisherman, MSGBOX_DEFAULT
	applymovement 7, Common_Movement_FaceRight
	waitmovement 0
	release
	end
