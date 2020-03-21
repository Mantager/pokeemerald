SydneyCity_MapScripts::
	.byte 0

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
