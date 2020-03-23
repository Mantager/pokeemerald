StargazePoint_MapScripts::
	.byte 0

StargazePoint_EventScript_FlowerShopSign::
	msgbox StargazePoint_Text_FlowerShopSign, MSGBOX_SIGN
	end

StargazePoint_EventScript_StarterChooseTest::
	lock
	faceplayer
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_SYS_POKEDEX_GET
	special ChooseStarter
	waitstate
	special HealPlayerParty
	fadescreen 1
	removeobject VAR_LAST_TALKED
	fadescreen 0
	release
	end

StargazePoint_Text_FlowerShopSign:
	.string "Stargaze Florists\n"
	.string "Every flower tells a story.$"
