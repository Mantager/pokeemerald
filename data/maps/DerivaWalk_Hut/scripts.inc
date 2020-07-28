DerivaWalk_Hut_MapScripts::
	.byte 0


DerivaWalk_EventScript_LuckyEggGiver::
	lock
	faceplayer
	goto_if_unset FLAG_RECIEVED_LUCKY_EGG, DerivaWalk_EventScript_LuckyEggGiver_1
	msgbox DerivaWalk_EventScript_LuckyEggGiver_Text_2
	release
	end

DerivaWalk_EventScript_LuckyEggGiver_1:
	msgbox DerivaWalk_EventScript_LuckyEggGiver_Text_0
	closemessage
	giveitem ITEM_LUCKY_EGG
	compare VAR_RESULT, 0
	goto_if_eq DerivaWalk_EventScript_LuckyEggGiver_5
DerivaWalk_EventScript_LuckyEggGiver_4:
	setflag FLAG_RECIEVED_LUCKY_EGG
	msgbox DerivaWalk_EventScript_LuckyEggGiver_Text_1
	release
	end

DerivaWalk_EventScript_LuckyEggGiver_5:
	goto Common_EventScript_ShowBagIsFull
	goto DerivaWalk_EventScript_LuckyEggGiver_4


DerivaWalk_EventScript_LuckyEggGiver_Text_0:
	.string "Your Pokémon look as if they\ncould use some more experience.\pHere, take this!$"

DerivaWalk_EventScript_LuckyEggGiver_Text_1:
	.string "If a Pokémon holds that Lucky Egg,\nit'll gain even more experience\lin a battle!$"

DerivaWalk_EventScript_LuckyEggGiver_Text_2:
	.string "They say that Lucky Eggs\ncome from Chansey.\lNeat, huh?$"
