PrimeCity_ApartmentsA_1F_MapScripts::
	.byte 0


PrimeCity_ApartmentsA_1F_EventScript_WantToSeeGolbat::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_SOOTHE_BELL, PrimeCity_ApartmentsA_1F_EventScript_WantToSeeGolbat_2
	msgbox PrimeCity_ApartmentsA_1F_EventScript_WantToSeeGolbat_Text_4
PrimeCity_ApartmentsA_1F_EventScript_WantToSeeGolbat_1:
	release
	end

PrimeCity_ApartmentsA_1F_EventScript_WantToSeeGolbat_2:
	msgbox PrimeCity_ApartmentsA_1F_EventScript_WantToSeeGolbat_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq PrimeCity_ApartmentsA_1F_EventScript_WantToSeeGolbat_5
	msgbox PrimeCity_ApartmentsA_1F_EventScript_WantToSeeGolbat_Text_6
	goto PrimeCity_ApartmentsA_1F_EventScript_WantToSeeGolbat_1

PrimeCity_ApartmentsA_1F_EventScript_WantToSeeGolbat_5:
	special ChoosePartyMon
	waitstate
	compare VAR_0x800A, 255
	goto_if_eq PrimeCity_ApartmentsA_1F_EventScript_WantToSeeGolbat_8
	bufferpartyindexspecies
	compare VAR_0x800A, SPECIES_GOLBAT
	goto_if_eq PrimeCity_ApartmentsA_1F_EventScript_WantToSeeGolbat_11
	msgbox PrimeCity_ApartmentsA_1F_EventScript_WantToSeeGolbat_Text_5
	goto PrimeCity_ApartmentsA_1F_EventScript_WantToSeeGolbat_1

PrimeCity_ApartmentsA_1F_EventScript_WantToSeeGolbat_8:
	msgbox PrimeCity_ApartmentsA_1F_EventScript_WantToSeeGolbat_Text_1
	goto PrimeCity_ApartmentsA_1F_EventScript_WantToSeeGolbat_1

PrimeCity_ApartmentsA_1F_EventScript_WantToSeeGolbat_11:
	msgbox PrimeCity_ApartmentsA_1F_EventScript_WantToSeeGolbat_Text_2
	closemessage
	giveitem ITEM_SOOTHE_BELL
	compare VAR_RESULT, 0
	goto_if_eq PrimeCity_ApartmentsA_1F_EventScript_WantToSeeGolbat_14
	setflag FLAG_RECEIVED_SOOTHE_BELL
	msgbox PrimeCity_ApartmentsA_1F_EventScript_WantToSeeGolbat_Text_4
	goto PrimeCity_ApartmentsA_1F_EventScript_WantToSeeGolbat_1

PrimeCity_ApartmentsA_1F_EventScript_WantToSeeGolbat_14:
	msgbox PrimeCity_ApartmentsA_1F_EventScript_WantToSeeGolbat_Text_3
	goto PrimeCity_ApartmentsA_1F_EventScript_WantToSeeGolbat_1


PrimeCity_ApartmentsA_1F_EventScript_WantToSeeGolbat_Text_0:
	.string "Have you got a Golbat?\pIf you show me one, I'll give you\nsomething cool.$"

PrimeCity_ApartmentsA_1F_EventScript_WantToSeeGolbat_Text_1:
	.string "Changed your mind?\nAw.$"

PrimeCity_ApartmentsA_1F_EventScript_WantToSeeGolbat_Text_2:
	.string "That's it!\nA Golbat!\lMan, it's cool!\pOkay, take this!$"

PrimeCity_ApartmentsA_1F_EventScript_WantToSeeGolbat_Text_3:
	.string "You don't have room for this!$"

PrimeCity_ApartmentsA_1F_EventScript_WantToSeeGolbat_Text_4:
	.string "If your Golbat holds that Soothe Bell,\nit'll take less time to evolve\lit into Crobat.$"

PrimeCity_ApartmentsA_1F_EventScript_WantToSeeGolbat_Text_5:
	.string "That's not a Golbat!\nYou trying to fool me?$"

PrimeCity_ApartmentsA_1F_EventScript_WantToSeeGolbat_Text_6:
	.string "You don't wanna?\nAw.$"
