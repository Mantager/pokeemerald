DelaguaTown_Mart_MapScripts::
	.byte 0


DelaguaTown_Mart_EventScript_RegularEmployee::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart DelaguaTown_Mart_Pokemart
	msgbox gText_PleaseComeAgain
	release
	end


	.align 2
DelaguaTown_Mart_Pokemart:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_FLUFFY_TAIL
	.2byte ITEM_NONE
	release
	end

DelaguaTown_Mart_EventScript_Youngster::
	lock
	faceplayer
	msgbox DelaguaTown_Mart_EventScript_Youngster_Text_0
	release
	end


DelaguaTown_Mart_EventScript_Youngster_Text_0:
	.string "In some Marts, they even sell TMs.$"
