YanurasTown_GeneralStore_MapScripts::
	.byte 0


YanurasTown_GeneralStore_EventScript_Vendor::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart YanurasTown_GeneralStore_Mart
	msgbox gText_PleaseComeAgain
	release
	end


	.align 2
YanurasTown_GeneralStore_Mart::
	.2byte ITEM_HYPER_POTION
    .2byte ITEM_REVIVE
    .2byte ITEM_GREAT_BALL
    .2byte ITEM_SUPER_REPEL
    .2byte ITEM_REPEL
    .2byte ITEM_ELIXIR
    .2byte ITEM_SOFT_SAND
	.2byte ITEM_NONE
	release
	end
