PistaVillage_HouseA_MapScripts::
	.byte 0


PistaVillage_HouseA_EventScript_Boy::
	lock
	faceplayer
	msgbox PistaVillage_HouseA_EventScript_Boy_Text_0
	release
	end


PistaVillage_HouseA_EventScript_Gentleman::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_TM47, PistaVillage_HouseA_EventScript_Gentleman_2
	msgbox PistaVillage_HouseA_EventScript_Gentleman_Text_3
PistaVillage_HouseA_EventScript_Gentleman_1:
	release
	end

PistaVillage_HouseA_EventScript_Gentleman_2:
	msgbox PistaVillage_HouseA_EventScript_Gentleman_Text_0
	giveitem ITEM_TM47
	compare VAR_RESULT, 0
	goto_if_eq PistaVillage_HouseA_EventScript_Gentleman_5
	setflag FLAG_RECEIVED_TM47
	msgbox PistaVillage_HouseA_EventScript_Gentleman_Text_2
	goto PistaVillage_HouseA_EventScript_Gentleman_1

PistaVillage_HouseA_EventScript_Gentleman_5:
	msgbox PistaVillage_HouseA_EventScript_Gentleman_Text_1
	goto PistaVillage_HouseA_EventScript_Gentleman_1


PistaVillage_HouseA_EventScript_Boy_Text_0:
	.string "People pass through Pista Village\nall the time.\pThat's because Agudo Woodland\nis full of strong Pokémon\lto train against.$"

PistaVillage_HouseA_EventScript_Gentleman_Text_0:
	.string "Good day, sonny.\pSince you came to visit us,\nI'd like you to have this.$"

PistaVillage_HouseA_EventScript_Gentleman_Text_1:
	.string "Cripes!\nYou don't have room for this.$"

PistaVillage_HouseA_EventScript_Gentleman_Text_2:
	.string "Steel Wing is a highly\ncultured move.\pI taught it to my Corviknight.$"

PistaVillage_HouseA_EventScript_Gentleman_Text_3:
	.string "You have a good day now.\pMake sure to use that TM47\nthat I gave you!$"
