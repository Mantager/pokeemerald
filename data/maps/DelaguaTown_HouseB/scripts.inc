DelaguaTown_HouseB_MapScripts::
	.byte 0


DelaguaTown_HouseB_EventScript_AttractGiver::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_TM45, DelaguaTown_HouseB_EventScript_AttractGiver_2
	msgbox DelaguaTown_HouseB_EventScript_AttractGiver_Text_3
DelaguaTown_HouseB_EventScript_AttractGiver_1:
	release
	end

DelaguaTown_HouseB_EventScript_AttractGiver_2:
	msgbox DelaguaTown_HouseB_EventScript_AttractGiver_Text_0
	giveitem ITEM_TM45
	compare VAR_RESULT, 0
	goto_if_eq DelaguaTown_HouseB_EventScript_AttractGiver_6
DelaguaTown_HouseB_EventScript_AttractGiver_5:
	setflag FLAG_RECEIVED_TM45
	msgbox DelaguaTown_HouseB_EventScript_AttractGiver_Text_2
	goto DelaguaTown_HouseB_EventScript_AttractGiver_1

DelaguaTown_HouseB_EventScript_AttractGiver_6:
	msgbox DelaguaTown_HouseB_EventScript_AttractGiver_Text_1
	goto DelaguaTown_HouseB_EventScript_AttractGiver_5


DelaguaTown_HouseB_EventScript_Wingull::
	lock
	faceplayer
	playmoncry SPECIES_WINGULL, 0
	message DelaguaTown_HouseB_EventScript_Wingull_Text_0
	waitmessage
	waitmoncry
	closemessage
	release
	end


DelaguaTown_HouseB_EventScript_AttractGiver_Text_0:
	.string "I'm pretty popular with the girls\nat my school nowadays.\pLooks like I don't need this anymore.$"

DelaguaTown_HouseB_EventScript_AttractGiver_Text_1:
	.string "Ah, I was gonna give you something,\nbut looks like you've got no room.$"

DelaguaTown_HouseB_EventScript_AttractGiver_Text_2:
	.string "Attract is great for charming people.$"

DelaguaTown_HouseB_EventScript_AttractGiver_Text_3:
	.string "Attract is fun to use in battle, too.\pSometimes, your opponent becomes so\ninfatuated they can't attack.$"

DelaguaTown_HouseB_EventScript_Wingull_Text_0:
	.string "Gull! Wingull!$"
