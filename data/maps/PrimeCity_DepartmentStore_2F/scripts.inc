PrimeCity_DepartmentStore_2F_MapScripts::
	.byte 0


PrimeCity_DepartmentStore_2F_EventScript_Employee::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart PrimeCity_DepartmentStore_2F_Pokemart1
	msgbox gText_PleaseComeAgain
	release
	end


	.align 2
PrimeCity_DepartmentStore_2F_Pokemart1:
	.2byte ITEM_SILK_SCARF
    .2byte ITEM_MIRACLE_SEED
    .2byte ITEM_MYSTIC_WATER
    .2byte ITEM_CHARCOAL
	.2byte ITEM_NONE
	release
	end
