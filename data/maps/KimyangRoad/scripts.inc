KimyangRoad_MapScripts::
	.byte 0

KimyangRoad_EventScript_Gen::
	trainerbattle_single TRAINER_GEN, KimyangRoad_Text_GenIntro, KimyangRoad_Text_GenDefeat
	msgbox KimyangRoad_Text_GenPostBattle, MSGBOX_AUTOCLOSE
	end

KimyangRoad_EventScript_Nian::
	trainerbattle_single TRAINER_NIAN, KimyangRoad_Text_NianIntro, KimyangRoad_Text_NianDefeat
	msgbox KimyangRoad_Text_NianPostBattle, MSGBOX_AUTOCLOSE
	end

KimyangRoad_EventScript_ItemfinderMan::
	lock
	faceplayer
	goto_if_set FLAG_OBTAINED_ITEMFINDER, KimyangRoad_EventScript_ItemfinderMan_End
	msgbox KimyangRoad_Text_ItemfinderIntro, MSGBOX_DEFAULT
	giveitem_std ITEM_ITEMFINDER
	setflag FLAG_OBTAINED_ITEMFINDER
	msgbox KimyangRoad_Text_ItemfinderExplain, MSGBOX_DEFAULT
	release
	end

KimyangRoad_EventScript_ItemfinderMan_End::
	lock
	faceplayer
	msgbox KimyangRoad_Text_ItemfinderRecieved, MSGBOX_DEFAULT
	release
	end

KimyangRoad_Text_GenIntro:
	.string "Trainer detected!\n"
	.string "Spinarak, let's go!$"

KimyangRoad_Text_GenDefeat:
	.string "No way…\n"
	.string "You're too strong!$"

KimyangRoad_Text_GenPostBattle:
	.string "My favourite Pokémon are all\n"
	.string "Bug-types!\p"
	.string "That's because they evolve early.$"

KimyangRoad_Text_NianIntro:
	.string "A battle, huh?\n"
	.string "Make it quick!$"

KimyangRoad_Text_NianDefeat:
	.string "That was quick indeed!$"

KimyangRoad_Text_NianPostBattle:
	.string "You're a berry farmer?\n"
	.string "Sounds tiring.\p"
	.string "Doesn't a life of relaxing\n"
	.string "fishing sound appealing to you?$"

KimyangRoad_Text_ItemfinderIntro:
	.string "Are you looking for items\n"
	.string "hidden around the field?\p"
	.string "Then take this!$"

KimyangRoad_Text_ItemfinderExplain:
	.string "That's an Itemfinder.\n"
	.string "I got it when I took a trip\l"
	.string "to Honzhu City in the south.\p"
	.string "It reacts when hidden items are\n"
	.string "detected, so it's really useful.$"

KimyangRoad_Text_ItemfinderRecieved:
	.string "There are items hidden everywhere.\n"
	.string "You should use the Itemfinder often!$"



