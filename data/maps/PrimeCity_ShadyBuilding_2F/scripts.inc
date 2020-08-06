PrimeCity_ShadyBuilding_2F_MapScripts::
	.byte 0


PrimeCity_ShadyBuilding_2F_EventScript_Bookshelf::
	lock
	msgbox PrimeCity_ShadyBuilding_2F_EventScript_Bookshelf_Text_0
	release
	end


PrimeCity_ShadyBuilding_2F_EventScript_BookGuy::
	lock
	faceplayer
	msgbox PrimeCity_ShadyBuilding_2F_EventScript_BookGuy_Text_0
	release
	end


PrimeCity_ShadyBuilding_2F_EventScript_FatGuy::
	lock
	msgbox PrimeCity_ShadyBuilding_2F_EventScript_FatGuy_Text_0
	release
	end


PrimeCity_ShadyBuilding_2F_EventScript_BattleGuy::
	lock
	faceplayer
	msgbox PrimeCity_ShadyBuilding_2F_EventScript_BattleGuy_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq PrimeCity_ShadyBuilding_2F_EventScript_BattleGuy_2
	msgbox PrimeCity_ShadyBuilding_2F_EventScript_BattleGuy_Text_2
PrimeCity_ShadyBuilding_2F_EventScript_BattleGuy_1:
	release
	end

PrimeCity_ShadyBuilding_2F_EventScript_BattleGuy_2:
	msgbox PrimeCity_ShadyBuilding_2F_EventScript_BattleGuy_Text_1
	goto PrimeCity_ShadyBuilding_2F_EventScript_BattleGuy_1


PrimeCity_ShadyBuilding_2F_EventScript_Bookshelf_Text_0:
	.string "(…What are these magazines?\nThey're uh… something.)$"

PrimeCity_ShadyBuilding_2F_EventScript_BookGuy_Text_0:
	.string "Kids like you shouldn't read these\nkinds of books.\lGet out of here!$"

PrimeCity_ShadyBuilding_2F_EventScript_FatGuy_Text_0:
	.string "Hey, hey, I can handle another…\pAnother cold wet glass with bubbles\nin it, now…\pNuh, no, you've got it all…\nZzzz…$"

PrimeCity_ShadyBuilding_2F_EventScript_BattleGuy_Text_0:
	.string "Wanna have a Pokémon battle?$"

PrimeCity_ShadyBuilding_2F_EventScript_BattleGuy_Text_1:
	.string "You'd better go find someone else,\nbecause I'm not in the mood for it.$"

PrimeCity_ShadyBuilding_2F_EventScript_BattleGuy_Text_2:
	.string "What, you think you're too good\nfor a battle with me?\pCocky punk.$"
