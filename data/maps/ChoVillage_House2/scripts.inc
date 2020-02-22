ChoVillage_House2_MapScripts::
	.byte 0

ChoVillage_House2_EventScript_Mechanic::
	lock
	faceplayer
	msgbox ChoVillage_House2_Text_MechanicGreeting, MSGBOX_DEFAULT
	closemessage
	playfanfare MUS_ME_WAZA
	msgbox ChoVillage_House2_Text_GivePackage, MSGBOX_DEFAULT
	waitmessage
	waitfanfare
	takeitem ITEM_BERRY_PACKAGE, 1
	msgbox ChoVillage_House2_Text_BerryJam, MSGBOX_DEFAULT
	closemessage
	delay 30
	msgbox ChoVillage_House2_Text_TruckBrokeDown, MSGBOX_DEFAULT
	closemessage
	delay 30
	msgbox ChoVillage_House2_Text_IllTakeALook, MSGBOX_DEFAULT
	closemessage
	fadescreen 1
	removeobject 1
	clearflag FLAG_PULP_BYROAD_MECHANIC
	setflag FLAG_MEET_MECHANIC
	fadescreen 0
	release
	end

ChoVillage_House2_EventScript_LittleGirl::
	lock
	faceplayer
	msgbox ChoVillage_House2_Text_WantToFixStuff, MSGBOX_DEFAULT
	release
	end

ChoVillage_House2_Text_MechanicGreeting:
	.string "Hey there, {PLAYER}!\n"
	.string "Oh, you've got my delivery? Thanks!$"

ChoVillage_House2_Text_GivePackage:
	.string "{PLAYER} gave the Berry Package\n"
	.string "to the mechanic!$"

ChoVillage_House2_Text_BerryJam:
	.string "Again, thank you!\p"
	.string "Now I can make my oh-so-delicious\n"
	.string "berry jam for my little sister.$"

ChoVillage_House2_Text_TruckBrokeDown:
	.string "Huh? Your truck broke down?\n"
	.string "Well, let me take a look at it!\p"
	.string "If you can't use the truck, it'll be\n"
	.string "totally annoying to deliver anything.\l"
	.string "Where's it parked?$"

ChoVillage_House2_Text_IllTakeALook:
	.string "Ah, it's parked by your place?\n"
	.string "Alright, I'll take a look.\p"
	.string "Don't worry!\p"
	.string "Even if it takes a while, I'm sure\n"
	.string "I can get it fixed!$"

ChoVillage_House2_Text_WantToFixStuff:
	.string "When I grow up, I want to fix\n"
	.string "stuff like my big brother!$"
