PrimeCity_DepartmentStore_3F_MapScripts::
	.byte 0


PrimeCity_DepartmentStore_3F_EventScript_Employee::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart PrimeCity_DepartmentStore_3F_Pokemart1, 2
	msgbox gText_PleaseComeAgain
	release
	end


PrimeCity_DepartmentStore_3F_EventScript_TMGirl::
	lock
	faceplayer
	msgbox PrimeCity_DepartmentStore_3F_EventScript_TMGirl_Text_0
	release
	end


PrimeCity_DepartmentStore_3F_EventScript_SecretPowerGiver::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_SECRET_POWER, PrimeCity_DepartmentStore_3F_EventScript_SecretPowerGiver_2
	msgbox PrimeCity_DepartmentStore_3F_EventScript_SecretPowerGiver_Text_2
PrimeCity_DepartmentStore_3F_EventScript_SecretPowerGiver_1:
	release
	end

PrimeCity_DepartmentStore_3F_EventScript_SecretPowerGiver_2:
	msgbox PrimeCity_DepartmentStore_3F_EventScript_SecretPowerGiver_Text_0
	giveitem ITEM_TM43
	compare VAR_RESULT, FALSE
	goto_if_eq PrimeCity_DepartmentStore_3F_EventScript_SecretPowerGiver_5
	msgbox PrimeCity_DepartmentStore_3F_EventScript_SecretPowerGiver_Text_2
	setflag FLAG_RECEIVED_SECRET_POWER
	goto PrimeCity_DepartmentStore_3F_EventScript_SecretPowerGiver_1

PrimeCity_DepartmentStore_3F_EventScript_SecretPowerGiver_5:
	msgbox PrimeCity_DepartmentStore_3F_EventScript_SecretPowerGiver_Text_1
	goto PrimeCity_DepartmentStore_3F_EventScript_SecretPowerGiver_1


	.align 2
PrimeCity_DepartmentStore_3F_Pokemart1:
	.2byte ITEM_TM05
    .2byte ITEM_TM10
    .2byte ITEM_TM17
    .2byte ITEM_TM44
	.2byte ITEM_TM46
    .2byte ITEM_NONE
	release
	end

PrimeCity_DepartmentStore_3F_EventScript_TMGirl_Text_0:
	.string "Ohhhhh!\nReflect or Light Screen?\lI can't decide!$"

PrimeCity_DepartmentStore_3F_EventScript_SecretPowerGiver_Text_0:
	.string "Fufufufu…\nI can sense it!\lYes, you'll be the one!\lThe one to master this move…$"

PrimeCity_DepartmentStore_3F_EventScript_SecretPowerGiver_Text_1:
	.string "Oh, but you have no room for this!$"

PrimeCity_DepartmentStore_3F_EventScript_SecretPowerGiver_Text_2:
	.string "That is Secret Power…\pIt is an incredible move that\nchanges to fit your surroundings…\p"
	.string "It will be of great use to you.\nI'm sure of it!$"
