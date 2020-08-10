PrimeCity_ApartmentsA_2F_MapScripts::
	.byte 0


PrimeCity_ApartmentsA_2F_EventScript_Psychic::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_TM48, PrimeCity_ApartmentsA_2F_EventScript_Psychic_2
	msgbox PrimeCity_ApartmentsA_2F_EventScript_Psychic_Text_3
PrimeCity_ApartmentsA_2F_EventScript_Psychic_1:
	release
	end

PrimeCity_ApartmentsA_2F_EventScript_Psychic_2:
	msgbox PrimeCity_ApartmentsA_2F_EventScript_Psychic_Text_0
	giveitem ITEM_TM48
	compare VAR_RESULT, 0
	goto_if_eq PrimeCity_ApartmentsA_2F_EventScript_Psychic_5
	setflag FLAG_RECEIVED_TM48
	msgbox PrimeCity_ApartmentsA_2F_EventScript_Psychic_Text_2
	goto PrimeCity_ApartmentsA_2F_EventScript_Psychic_1

PrimeCity_ApartmentsA_2F_EventScript_Psychic_5:
	msgbox PrimeCity_ApartmentsA_2F_EventScript_Psychic_Text_1
	goto PrimeCity_ApartmentsA_2F_EventScript_Psychic_1


PrimeCity_ApartmentsA_2F_EventScript_Psychic_Text_0:
	.string "Have you ever battled a\nPokémon with a great ability?\pDid you think 'I want to\ntry that for myself?'\pYou're in luck!\nHere, take this!$"

PrimeCity_ApartmentsA_2F_EventScript_Psychic_Text_1:
	.string "Hm?\pYou don't have room for this?$"

PrimeCity_ApartmentsA_2F_EventScript_Psychic_Text_2:
	.string "TM48, Skill Swap.\pIf you use it, then your Pokémon\nwill swap abilities with its foe!$"

PrimeCity_ApartmentsA_2F_EventScript_Psychic_Text_3:
	.string "Skill Swap is a truly frightening\nmove, but you need some brains\lin order to use it well.$"
