ChoVillage_House3_MapScripts::
	.byte 0

ChoVillage_House3_EventScript_ShopOwner::
	lock
	faceplayer
	message ChoVillage_House3_Text_HowMayIServeYou
	waitmessage
	pokemart ChoVillage_House3_Mart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

ChoVillage_House3_Mart:
	.2byte ITEM_ENERGY_POWDER
	.2byte ITEM_HEAL_POWDER
	.2byte ITEM_REPEL
	.2byte ITEM_NONE
	release
	end

ChoVillage_House3_Text_HowMayIServeYou:
	.string "Hey, {PLAYER}!\n"
	.string "How may I serve you?$"
