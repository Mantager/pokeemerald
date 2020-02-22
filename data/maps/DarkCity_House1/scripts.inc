DarkCity_House1_MapScripts::
	.byte 0

DarkCity_House1_EventScript_GlitterLittleGirl::
	lock
	faceplayer
	msgbox DarkCity_House1_Text_GlitterYay, MSGBOX_DEFAULT
	release
	end

DarkCity_House1_EventScript_GiveLuckyEgg::
	lock
	faceplayer
	goto_if_set FLAG_DARK_CITY_RECIEVED_LUCKY_EGG, DarkCity_House1_EventScript_RecievedLuckyEgg
	msgbox DarkCity_House1_Text_HeresLuckyEgg, MSGBOX_DEFAULT
	closemessage
	giveitem_std ITEM_LUCKY_EGG, 1
	delay 8
	setflag FLAG_DARK_CITY_RECIEVED_LUCKY_EGG
	goto DarkCity_House1_EventScript_RecievedLuckyEgg
	end

DarkCity_House1_EventScript_DecorationMaker::	
	lock
	faceplayer
	msgbox DarkCity_House1_Text_DecorationMaker, MSGBOX_DEFAULT
	release
	end

DarkCity_House1_EventScript_RecievedLuckyEgg::
	msgbox DarkCity_House1_Text_LuckyEggGainMore, MSGBOX_DEFAULT
	release
	end

DarkCity_House1_Text_GlitterYay:
	.string "Yay! Glitter! So pretty!$"

DarkCity_House1_Text_HeresLuckyEgg:
	.string "Are your Pokémon gaining levels\n"
	.string "slower than you'd like?\p"
	.string "Then take this!$"

DarkCity_House1_Text_LuckyEggGainMore:
	.string "That's a Lucky Egg.\n"
	.string "A Pokémon holding it will gain more\l"
	.string "experience points in battle.$"

DarkCity_House1_Text_DecorationMaker:
	.string "I make decorations like tables and\n"
	.string "and chairs for people's homes.\p"
	.string "Sometimes I have to venture up\n"
	.string "to the surface to gather materials.$"
