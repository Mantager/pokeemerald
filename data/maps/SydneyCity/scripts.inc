SydneyCity_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SydneyCity_OnFrame
	.byte 0

SydneyCity_OnFrame::
	map_script_2 VAR_TEMP_F, 0, SydneyCity_EventScript_CheckIfRivalShouldBeInvisible
	.2byte 0

SydneyCity_EventScript_CheckIfRivalShouldBeInvisible::
	compare VAR_STORY_INTRO_STATE, 2
	call_if_ne SydneyCity_EventScript_SetRivalInvisible
	setvar VAR_TEMP_F, 1
	end

SydneyCity_EventScript_SetRivalInvisible::
	applymovement 7, Common_Movement_SetInvisible
	return

SydneyCity_EventScript_SydneyTowerSign::
	msgbox SydneyCity_Text_SydneyTowerSign, MSGBOX_SIGN
	end

SydneyCity_EventScript_SydneyCitySign::
	msgbox SydneyCity_Text_SydneyCitySign, MSGBOX_SIGN
	end

SydneyCity_EventScript_TrainerTipsSign::
	msgbox SydneyCity_Text_TrainerTipsSign, MSGBOX_SIGN
	end

SydneyCity_EventScript_MantleHouseSign::
	msgbox SydneyCity_Text_MantleHouseSign, MSGBOX_SIGN
	end

SydneyCity_Text_SydneyTowerSign:
	.string "Sydney Tower$"

SydneyCity_Text_SydneyCitySign:
	.string "Sydney City\n"
	.string "Star-shrouded city.$"

SydneyCity_Text_TrainerTipsSign:
	.string "Trainer Tips!\p"
	.string "Many Pokémon learn moves upon\n"
	.string "evolving, no matter the level!\p"
	.string "Therefore, you never have to worry\n"
	.string "about your Pokémon gaining too many\l"
	.string "levels at once.$"

SydneyCity_Text_MantleHouseSign:
	.string "Residence of Dr. Miller Mantle$"
