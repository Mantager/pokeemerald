OroTown_GoldBar_MapScripts::
	.byte 0


OroTown_GoldBar_EventScript_Vendor::
	lock
	faceplayer
	message OroTown_GoldBar_EventScript_Vendor_Text_0
	waitmessage
	pokemart OroTown_GoldBar_Pokemart, 4
	msgbox gText_PleaseComeAgain
	release
	end


	.align 2
OroTown_GoldBar_Pokemart:
	.2byte ITEM_FRESH_WATER
	.2byte ITEM_LEMONADE
	.2byte ITEM_SODA_POP
	.2byte ITEM_NONE
	release
	end

OroTown_GoldBar_EventScript_Girl::
	lock
	faceplayer
	msgbox OroTown_GoldBar_EventScript_Girl_Text_0
	release
	end


OroTown_GoldBar_EventScript_Vendor_Text_0:
	.string "Welcome to my humble little bar!\nWhat can I get you?$"

OroTown_GoldBar_EventScript_Girl_Text_0:
	.string "My daddy's been running this joint\nsince before I was born!$"
