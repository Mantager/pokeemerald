ColorRuinsRed_B1F_MapScripts::
	.byte 0

ColorRuinsRed_B1F_EventScript_GiantWall::
	lockall
	msgbox ColorRuinsYellow_B1F_Text_LotsOfWriting, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq ColorRuinsYellow_B1F_EventScript_DecidedNotToRead
	delay 15
	msgbox ColorRuinsRed_B1F_Text_SealingTheRuins, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_COLOR_RUINS_RED_WALL_READ
	releaseall
	end

ColorRuinsRed_B1F_Text_SealingTheRuins:
	.string "WE SEALED ALL FOUR COLOR RUINS\n"
	.string "TO DENY ACCESS TO PILLAGERS.\p"
	.string "A UNIQUE LOCK WAS GIVEN TO EACH.\p"
	.string "WE WROTE INSTRUCTIONS ON UNSEALING\n"
	.string "THE RUINS IN OUR MOTHER TONGUE.\p"
	.string "FOR THE PILLAGERS, OUR DIALECT WAS\n"
	.string "UNKNOWN, THEY COULD NOT READ OUR\l"
	.string "INSCRIPTIONS, SO ACCESS WAS DENIED.\p"
	.string "WE FLED ONCE THE RUINS WERE SEALED.$"
