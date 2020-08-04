PrimeCity_DepartmentStore_1F_MapScripts::
	.byte 0


PrimeCity_DepartmentStore_1F_EventScript_EmployeeBlockingDoor::
	lock
	faceplayer
	msgbox PrimeCity_DepartmentStore_1F_EventScript_EmployeeBlockingDoor_Text_0
	release
	end


PrimeCity_DepartmentStore_1F_EventScript_CenterEmployee::
	lock
	faceplayer
	msgbox PrimeCity_DepartmentStore_1F_EventScript_CenterEmployee_Text_0
	release
	end


PrimeCity_DepartmentStore_1F_EventScript_LeftEmployee::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart PrimeCity_DepartmentStore_1F_Pokemart1
	msgbox gText_PleaseComeAgain
	release
	end


PrimeCity_DepartmentStore_1F_EventScript_RightEmployee::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart PrimeCity_DepartmentStore_1F_Pokemart2
	msgbox gText_PleaseComeAgain
	release
	end


PrimeCity_DepartmentStore_1F_EventScript_AquaCosplayer::
	lock
	faceplayer
	msgbox PrimeCity_DepartmentStore_1F_EventScript_AquaCosplayer_Text_0
	release
	end


PrimeCity_DepartmentStore_1F_EventScript_ThiefKid::
	lock
	faceplayer
	msgbox PrimeCity_DepartmentStore_1F_EventScript_ThiefKid_Text_0
	release
	end


	.align 2
PrimeCity_DepartmentStore_1F_Pokemart1:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_FLUFFY_TAIL
	.2byte ITEM_NONE
	release
	end

	.align 2
PrimeCity_DepartmentStore_1F_Pokemart2:
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_NONE
	release
	end

PrimeCity_DepartmentStore_1F_EventScript_EmployeeBlockingDoor_Text_0:
	.string "Sorry, but only staff can go\nthrough here.$"

PrimeCity_DepartmentStore_1F_EventScript_CenterEmployee_Text_0:
	.string "Hi.\nWelcome to the Prime Department Store.$"

PrimeCity_DepartmentStore_1F_EventScript_AquaCosplayer_Text_0:
	.string "We're going to expand the sea!\nDon't get in our way!\p…Just kidding!\pI'm acting in a movie about Team\nAqua, and I'm trying to get a\lfeel for my role.$"

PrimeCity_DepartmentStore_1F_EventScript_ThiefKid_Text_0:
	.string "… …\n… …\pWhaddaya mean I look suspicious?\nWhy, I oughta…\lgo back to Unova!\pYou Ríotans are so suspicious!$"
