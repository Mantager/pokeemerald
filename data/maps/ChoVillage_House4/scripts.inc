ChoVillage_House4_MapScripts::
	.byte 0

ChoVillage_House4_EventScript_Zigzagoon::
	lock
	faceplayer
	playmoncry SPECIES_ZIGZAGOON, 0
	msgbox ChoVillage_House4_Text_Zigzagoon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

ChoVillage_House4_Text_Zigzagoon:
	.string "Ziguu!$"
