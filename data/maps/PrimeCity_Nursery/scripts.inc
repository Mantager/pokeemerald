PrimeCity_Nursery_MapScripts::
	.byte 0


PrimeCity_Nursery_EventScript_Employee::
	lock
	faceplayer
	msgbox PrimeCity_Nursery_EventScript_Employee_Text_0
	release
	end


PrimeCity_Nursery_EventScript_CubchooGiver::
	lock
	faceplayer
	goto_if_unset FLAG_CUBCHOO_RECIEVED, PrimeCity_Nursery_EventScript_CubchooGiver_2
	msgbox PrimeCity_Nursery_EventScript_CubchooGiver_Text_7
PrimeCity_Nursery_EventScript_CubchooGiver_1:
	release
	end

PrimeCity_Nursery_EventScript_CubchooGiver_2:
	msgbox PrimeCity_Nursery_EventScript_CubchooGiver_Text_0, MSGBOX_YESNO
	closemessage
	compare VAR_RESULT, YES
	goto_if_eq PrimeCity_Nursery_EventScript_CubchooGiver_5
	compare VAR_RESULT, NO
	goto_if_eq PrimeCity_Nursery_EventScript_CubchooGiver_6
	goto PrimeCity_Nursery_EventScript_CubchooGiver_1

PrimeCity_Nursery_EventScript_CubchooGiver_5:
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq PrimeCity_Nursery_EventScript_CubchooGiver_9
	msgbox PrimeCity_Nursery_EventScript_CubchooGiver_Text_2
	closemessage
	setflag FLAG_CUBCHOO_RECIEVED
	playfanfare MUS_FANFA4
	givemon SPECIES_CUBCHOO, 12, ITEM_NONE
	message PrimeCity_Nursery_EventScript_CubchooGiver_Text_3
	waitfanfare
	waitmessage
	msgbox PrimeCity_Nursery_EventScript_CubchooGiver_Text_4, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq PrimeCity_Nursery_EventScript_CubchooGiver_13
PrimeCity_Nursery_EventScript_CubchooGiver_12:
	msgbox PrimeCity_Nursery_EventScript_CubchooGiver_Text_5
	goto PrimeCity_Nursery_EventScript_CubchooGiver_1

PrimeCity_Nursery_EventScript_CubchooGiver_6:
	msgbox PrimeCity_Nursery_EventScript_CubchooGiver_Text_6
	goto PrimeCity_Nursery_EventScript_CubchooGiver_1

PrimeCity_Nursery_EventScript_CubchooGiver_9:
	msgbox PrimeCity_Nursery_EventScript_CubchooGiver_Text_1
	goto PrimeCity_Nursery_EventScript_CubchooGiver_1

PrimeCity_Nursery_EventScript_CubchooGiver_13:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto PrimeCity_Nursery_EventScript_CubchooGiver_12


PrimeCity_Nursery_EventScript_Employee_Text_0:
	.string "Hi!\nThis is the Nursery!\pWe raise Pokémon that other Trainers\nbring in to us, like a day care!\pUnfortunately, we're all booked up\ntoday, though…$"

PrimeCity_Nursery_EventScript_CubchooGiver_Text_0:
	.string "Hello there…\pUm, sorry to spring such a strange\nrequest on you, but would you take\lthis Pokémon?\pIt was abandoned by its Trainer, and\nI found it outside.\pBut I don't have the time to give\nit the attention that it needs…\pPlease, will you take it?$"

PrimeCity_Nursery_EventScript_CubchooGiver_Text_1:
	.string "Sorry, but it seems that you\ndon't have room for this Pokémon…$"

PrimeCity_Nursery_EventScript_CubchooGiver_Text_2:
	.string "Here, please take it!$"

PrimeCity_Nursery_EventScript_CubchooGiver_Text_3:
	.string "{PLAYER} received Cubchoo!$"

PrimeCity_Nursery_EventScript_CubchooGiver_Text_4:
	.string "Would you like to nickname the\nCubchoo that you recieved?$"

PrimeCity_Nursery_EventScript_CubchooGiver_Text_5:
	.string "Please take good care of it.$"

PrimeCity_Nursery_EventScript_CubchooGiver_Text_6:
	.string "I suppose I shall have to find\nsomeone else to take care of it…$"

PrimeCity_Nursery_EventScript_CubchooGiver_Text_7:
	.string "I hope Cubchoo is doing well.\nPlease treat it with lots of love!$"
