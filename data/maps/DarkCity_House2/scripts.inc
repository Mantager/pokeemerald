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

DarkCity_House2_Text_ShopOwnerIntro:
	.string "Oh, you're from the surface?\n"
	.string "We just began supporting surface\l"
	.string "currency, so feel free to shop here.$"

DarkCity_House2_Text_DecorationInfo:
	.string "We craft these decorations out of\n"
	.string "stone and wood we gather from the\l"
	.string "surface about once a month.$"

DarkCity_House2_Text_ContainerInfo:
	.string "There are about 3 shelves inside these\n"
	.string "containers, which we fill with a layer\l"
	.string "of fertile soil from the ground.\p"
	.string "Then we mix in some compost and add\n"
	.string "some seeds and fertilizer.\p"
	.string "We can grow fruit and vegetables\n"
	.string "even deep underground this way.\p"
	.string "Pretty amazing, right?\p"
	.string "But the key is using Pokémon such\n"
	.string "as Oddish and Cherubi to help\l"
	.string "speed up the growth of our crop.\p"
	.string "Without Pokémon, we wouldn't be\n"
	.string "be able to grow food at a rate at\l"
	.string "which we could sustain ourselves.$"
