OroTown_HouseA_MapScripts::
	.byte 0


OroTown_HouseA_EventScript_TormentGiver::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_TM41, OroTown_HouseA_EventScript_TormentGiver_2
	msgbox OroTown_HouseA_EventScript_TormentGiver_Text_2
OroTown_HouseA_EventScript_TormentGiver_1:
	release
	end

OroTown_HouseA_EventScript_TormentGiver_2:
	msgbox OroTown_HouseA_EventScript_TormentGiver_Text_0
	giveitem ITEM_TM41
	compare VAR_RESULT, TRUE
	goto_if_eq OroTown_HouseA_EventScript_TormentGiver_5
	setflag FLAG_RECEIVED_TM41
	msgbox OroTown_HouseA_EventScript_TormentGiver_Text_2
	goto OroTown_HouseA_EventScript_TormentGiver_1

OroTown_HouseA_EventScript_TormentGiver_5:
	msgbox OroTown_HouseA_EventScript_TormentGiver_Text_1
	goto OroTown_HouseA_EventScript_TormentGiver_1


OroTown_HouseA_EventScript_RangerTalker::
	lock
	faceplayer
	msgbox OroTown_HouseA_EventScript_RangerTalker_Text_0
	release
	end


OroTown_HouseA_EventScript_TormentGiver_Text_0:
	.string "Your eyelashes are huge!\nYou have weird hands!\lAnd your hair smells like sand!\pSorry, I didn't mean that.\pI just wanted to show you what using\nthe move Torment is like.\pHere, try it out for yourself!$"

OroTown_HouseA_EventScript_TormentGiver_Text_1:
	.string "You don't have room for this.$"

OroTown_HouseA_EventScript_TormentGiver_Text_2:
	.string "When affected by Torment, a Pokémon\ncan't use moves consecutively.$"

OroTown_HouseA_EventScript_RangerTalker_Text_0:
	.string "I want to become a Pokémon Ranger.\pCapture on!\nMission start!\pAh, the day I'll get to say those\nwords for real will be the greatest\lday in my life!$"
