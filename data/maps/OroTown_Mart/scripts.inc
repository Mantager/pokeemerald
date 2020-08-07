OroTown_Mart_MapScripts::
	.byte 0


OroTown_Mart_EventScript_RegularEmployee::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart OroTown_Mart_Pokemart_1
	msgbox gText_PleaseComeAgain
	release
	end


OroTown_Mart_EventScript_TMEmployee::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart OroTown_Mart_Pokemart_2, 4
	msgbox gText_PleaseComeAgain
	release
	end


OroTown_Mart_EventScript_Hiker::
	lock
	faceplayer
	msgbox OroTown_Mart_EventScript_Hiker_Text_0
	release
	end


	.align 2
OroTown_Mart_Pokemart_1:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_FLUFFY_TAIL
	.2byte ITEM_NONE
	release
	end

	.align 2
OroTown_Mart_Pokemart_2:
	.2byte ITEM_TM11
    .2byte ITEM_TM18
    .2byte ITEM_TM37
    .2byte ITEM_TM07
    .2byte ITEM_HEAT_ROCK
    .2byte ITEM_DAMP_ROCK
    .2byte ITEM_SMOOTH_ROCK
    .2byte ITEM_ICY_ROCK
	.2byte ITEM_NONE
	release
	end

OroTown_Mart_EventScript_Hiker_Text_0:
	.string "When preparing for an expedition,\nyou've gotta think of everything!\pOr else you could end up in\na dangerous situation!$"
