PrimeCity_HouseB_MapScripts::
	.byte 0


PrimeCity_HouseB_EventScript_DrinkGiver::
	lock
	faceplayer
	goto_if_unset FLAG_PRIME_CITY_HOUSE_B_RECIEVED_ITEM, PrimeCity_HouseB_EventScript_DrinkGiver_2
	msgbox PrimeCity_HouseB_EventScript_DrinkGiver_Text_6
	release
	end

PrimeCity_HouseB_EventScript_DrinkGiver_2:
	msgbox PrimeCity_HouseB_EventScript_DrinkGiver_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq PrimeCity_HouseB_EventScript_DrinkGiver_5
	msgbox PrimeCity_HouseB_EventScript_DrinkGiver_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq PrimeCity_HouseB_EventScript_DrinkGiver_10
	msgbox PrimeCity_HouseB_EventScript_DrinkGiver_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq PrimeCity_HouseB_EventScript_DrinkGiver_15
	msgbox PrimeCity_HouseB_EventScript_DrinkGiver_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq PrimeCity_HouseB_EventScript_DrinkGiver_20
	msgbox PrimeCity_HouseB_EventScript_DrinkGiver_Text_4, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq PrimeCity_HouseB_EventScript_DrinkGiver_25
	msgbox PrimeCity_HouseB_EventScript_DrinkGiver_Text_5
	release
	end

PrimeCity_HouseB_EventScript_DrinkGiver_4:
	setflag FLAG_PRIME_CITY_HOUSE_B_RECIEVED_ITEM
	msgbox PrimeCity_HouseB_EventScript_DrinkGiver_Text_6
	release
	end

PrimeCity_HouseB_EventScript_DrinkGiver_5:
	giveitem ITEM_LEMONADE
	compare VAR_RESULT, 0
	goto_if_eq PrimeCity_HouseB_EventScript_DrinkGiver_8
	goto PrimeCity_HouseB_EventScript_DrinkGiver_4

PrimeCity_HouseB_EventScript_DrinkGiver_8:
	goto PrimeCity_HouseB_EventScript_DrinkGiverBagFull
	goto PrimeCity_HouseB_EventScript_DrinkGiver_4

PrimeCity_HouseB_EventScript_DrinkGiver_10:
	giveitem ITEM_SODA_POP
	compare VAR_RESULT, 0
	goto_if_eq PrimeCity_HouseB_EventScript_DrinkGiver_13
	goto PrimeCity_HouseB_EventScript_DrinkGiver_4

PrimeCity_HouseB_EventScript_DrinkGiver_13:
	goto PrimeCity_HouseB_EventScript_DrinkGiverBagFull
	goto PrimeCity_HouseB_EventScript_DrinkGiver_4

PrimeCity_HouseB_EventScript_DrinkGiver_15:
	giveitem ITEM_FRESH_WATER
	compare VAR_RESULT, 0
	goto_if_eq PrimeCity_HouseB_EventScript_DrinkGiver_18
	goto PrimeCity_HouseB_EventScript_DrinkGiver_4

PrimeCity_HouseB_EventScript_DrinkGiver_18:
	goto PrimeCity_HouseB_EventScript_DrinkGiverBagFull
	goto PrimeCity_HouseB_EventScript_DrinkGiver_4

PrimeCity_HouseB_EventScript_DrinkGiver_20:
	giveitem ITEM_MOOMOO_MILK
	compare VAR_RESULT, 0
	goto_if_eq PrimeCity_HouseB_EventScript_DrinkGiver_23
	goto PrimeCity_HouseB_EventScript_DrinkGiver_4

PrimeCity_HouseB_EventScript_DrinkGiver_23:
	goto PrimeCity_HouseB_EventScript_DrinkGiverBagFull
	goto PrimeCity_HouseB_EventScript_DrinkGiver_4

PrimeCity_HouseB_EventScript_DrinkGiver_25:
	giveitem ITEM_BERRY_JUICE
	compare VAR_RESULT, 0
	goto_if_eq PrimeCity_HouseB_EventScript_DrinkGiver_28
	goto PrimeCity_HouseB_EventScript_DrinkGiver_4

PrimeCity_HouseB_EventScript_DrinkGiver_28:
	goto PrimeCity_HouseB_EventScript_DrinkGiverBagFull
	goto PrimeCity_HouseB_EventScript_DrinkGiver_4


PrimeCity_HouseB_EventScript_DrinkGiverBagFull::
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	release
	end


PrimeCity_HouseB_EventScript_DrinkGiver_Text_0:
	.string "Welcome.\nI don't often get guests nowadays.\pWould you like a drink?\nA glass of Lemonade, perhaps?$"

PrimeCity_HouseB_EventScript_DrinkGiver_Text_1:
	.string "In that case, how about a Soda Pop?$"

PrimeCity_HouseB_EventScript_DrinkGiver_Text_2:
	.string "Does Fresh Water take your fancy?$"

PrimeCity_HouseB_EventScript_DrinkGiver_Text_3:
	.string "Could I interest you in Moomoo Milk?$"

PrimeCity_HouseB_EventScript_DrinkGiver_Text_4:
	.string "How about some Berry Juice?$"

PrimeCity_HouseB_EventScript_DrinkGiver_Text_5:
	.string "I'm afraid I have nothing else\nfor you to drink…\pMy dearest apologies.$"

PrimeCity_HouseB_EventScript_DrinkGiver_Text_6:
	.string "Please enjoy it.$"
