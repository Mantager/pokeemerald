DarkCity_House2_MapScripts::
	.byte 0

DarkCity_House2_EventScript_ShopOwnerIntro::
	lock
	faceplayer
	goto_if_set FLAG_MEET_SHOPOWNER_DARK_CITY, DarkCity_House2_EventScript_ShopOwnerMain
	msgbox DarkCity_House2_Text_ShopOwnerIntro
	waitmessage
	setflag FLAG_MEET_SHOPOWNER_DARK_CITY
	goto DarkCity_House2_EventScript_ShopOwnerMain

DarkCity_House2_EventScript_ShopOwnerMain::
	message gText_HowMayIServeYou
	waitmessage
	pokemart DarkCity_House2_Mart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

DarkCity_House2_EventScript_DecorationInfoGirl::
	lock
	faceplayer
	msgbox DarkCity_House2_Text_DecorationInfo, MSGBOX_DEFAULT
	release
	end

DarkCity_House2_EventScript_ContainerInfoGuy::
	lock
	faceplayer
	msgbox DarkCity_House2_Text_ContainerInfo, MSGBOX_DEFAULT
	release
	end

DarkCity_House2_Mart:
	.2byte ITEM_ENERGY_POWDER
	.2byte ITEM_HEAL_POWDER
	.2byte ITEM_REVIVAL_HERB
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_NONE
	release
	end
