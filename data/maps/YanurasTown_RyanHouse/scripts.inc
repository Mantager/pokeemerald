YanurasTown_RyanHouse_MapScripts::
	.byte 0


YanurasTown_RyanHouse_EventScript_Ryan::
	lock
	faceplayer
	msgbox YanurasTown_RyanHouse_EventScript_Ryan_Text_0
	msgbox YanurasTown_RyanHouse_EventScript_Ryan_Text_1
	msgbox YanurasTown_RyanHouse_EventScript_Ryan_Text_2
	msgbox YanurasTown_RyanHouse_EventScript_Ryan_Text_3
	msgbox YanurasTown_RyanHouse_EventScript_Ryan_Text_4
	msgbox YanurasTown_RyanHouse_EventScript_Ryan_Text_5
	msgbox YanurasTown_RyanHouse_EventScript_Ryan_Text_6
	msgbox YanurasTown_RyanHouse_EventScript_Ryan_Text_7
	msgbox YanurasTown_RyanHouse_EventScript_Ryan_Text_8
	msgbox YanurasTown_RyanHouse_EventScript_Ryan_Text_9
	msgbox YanurasTown_RyanHouse_EventScript_Ryan_Text_10
	msgbox YanurasTown_RyanHouse_EventScript_Ryan_Text_11
	msgbox YanurasTown_RyanHouse_EventScript_Ryan_Text_12
	applymovement 1, Common_Movement_WalkUp
	waitmovement 0
	removeobject 1
	setflag FLAG_YANURAS_TOWN_RYAN_HOUSE_HIDE_RYAN
	clearflag FLAG_YANURAS_TOWN_HIDE_FERN
	clearflag FLAG_YANURAS_TOWN_HIDE_MALIMO
	setvar VAR_YANURAS_TOWN_STATE, 1
	release
	end


YanurasTown_RyanHouse_EventScript_Ryan_Text_0:
	.string "{COLOR}{GREEN}Huff…\nHaaaah…$"

YanurasTown_RyanHouse_EventScript_Ryan_Text_1:
	.string "Rye?\nYou alright, man?\lYou look slaughtered!$"

YanurasTown_RyanHouse_EventScript_Ryan_Text_2:
	.string "{COLOR}{GREEN}Clad!\nJust… Give me a second…$"

YanurasTown_RyanHouse_EventScript_Ryan_Text_3:
	.string "Seriously dude, what have you been\nup to?$"

YanurasTown_RyanHouse_EventScript_Ryan_Text_4:
	.string "{COLOR}{GREEN}I had to help my dad with the harvest…\nAll morning. It was a big one!$"

YanurasTown_RyanHouse_EventScript_Ryan_Text_5:
	.string "I bet.\nYou're sweating like mad!\pY'know, the others are waiting for us.$"

YanurasTown_RyanHouse_EventScript_Ryan_Text_6:
	.string "{COLOR}{GREEN}Ah! I lost track of time!\nSorry for keeping you waiting so long…$"

YanurasTown_RyanHouse_EventScript_Ryan_Text_7:
	.string "It's no biggie, man.\nYou gotta do what you gotta do.\pYou know what's going on, right?$"

YanurasTown_RyanHouse_EventScript_Ryan_Text_8:
	.string "{COLOR}{GREEN}That's right, Fern said before.\pA genie who gives wishes, eh?\nWhat would you wish for?$"

YanurasTown_RyanHouse_EventScript_Ryan_Text_9:
	.string "Hmm… Not sure.\nThere's no way it's real, anyway.$"

YanurasTown_RyanHouse_EventScript_Ryan_Text_10:
	.string "{COLOR}{GREEN}Well, you know what I'd wish for…\nMoney. And lots of it.\lIt's tough here, you know.$"

YanurasTown_RyanHouse_EventScript_Ryan_Text_11:
	.string "Yeah…$"

YanurasTown_RyanHouse_EventScript_Ryan_Text_12:
	.string "{COLOR}{GREEN}Sorry.\nBit of a bum note.\pLet's get going, Claderino!$"
