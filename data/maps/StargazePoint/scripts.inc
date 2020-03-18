StargazePoint_MapScripts::
	.byte 0

StargazePoint_EventScript_StarterChooseTest::
	lock
	faceplayer
	setflag FLAG_SYS_POKEMON_GET
	special ChooseStarter
	waitstate
	special HealPlayerParty
	fadescreen 1
	removeobject VAR_LAST_TALKED
	fadescreen 0
	release
	end
