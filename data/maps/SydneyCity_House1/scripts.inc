SydneyCity_House1_MapScripts::
	.byte 0

SydneyCity_House1_EventScript_ChampionInfo::
	lock
	faceplayer
	msgbox SydneyCity_House1_Text_TournamentWinnerChampion, MSGBOX_DEFAULT
	release
	end

SydneyCity_House1_EventScript_Pikachu::
	lock
	faceplayer
	playmoncry SPECIES_PIKACHU, 0
	msgbox SydneyCity_House1_Text_Pikachu, MSGBOX_DEFAULT
	waitmoncry
	closemessage
	release
	end

SydneyCity_House1_Text_TournamentWinnerChampion:
	.string "The winner of the Sting Tournament\n"
	.string "is called the Champion.\p"
	.string "To become the Champion, you have to be\n"
	.string "a ridiculously strong Trainer.\p"
	.string "For most of us, it's just a pipe dream…$"

SydneyCity_House1_Text_Pikachu:
	.string "Pikapi!$"
