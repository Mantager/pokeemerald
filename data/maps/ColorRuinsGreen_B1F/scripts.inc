ColorRuinsGreen_B1F_MapScripts::
	.byte 0

ColorRuinsGreen_B1F_EventScript_GiantWall::
	lockall
	msgbox ColorRuinsYellow_B1F_Text_LotsOfWriting, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq ColorRuinsYellow_B1F_EventScript_DecidedNotToRead
	delay 15
	msgbox ColorRuinsGreen_B1F_Text_RumorOfAttack, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_COLOR_RUINS_GREEN_WALL_READ
	releaseall
	end

ColorRuinsGreen_B1F_EventScript_EssenceOfSun::
	msgbox ColorRuinsGreen_B1F_Text_EssenceOfSun, MSGBOX_DEFAULT
	closemessage
	end

ColorRuinsGreen_B1F_EventScript_EssenceOfWater::
	msgbox ColorRuinsGreen_B1F_Text_EssenceOfWater, MSGBOX_DEFAULT
	closemessage
	end

ColorRuinsGreen_B1F_EventScript_EssenceOfWoods::
	msgbox ColorRuinsGreen_B1F_Text_EssenceOfWoods, MSGBOX_DEFAULT
	closemessage
	end

ColorRuinsGreen_B1F_Text_RumorOfAttack:
	.string "SOMEBODY HEARD THAT PILLAGERS WERE\n"
	.string "GOING TO ATTACK OUR DEAR VILLAGE.\p"
	.string "THESE PILLAGERS WERE DANGEROUS,\n"
	.string "PEOPLE WHO WISHED TO TAKE OVER ALL.\p"
	.string "PROTECTING OUR LIVES AND VALUABLE\n"
	.string "ITEMS WAS OF UTMOST IMPORTANCE.\p"
	.string "THE COLOR RUINS WERE SEALED SO\n"
	.string "THAT WE WOULD NOT BE COMPROMISED.$"

ColorRuinsGreen_B1F_Text_EssenceOfSun:
	.string "EXPOSURE TO THE ESSENCE OF THE SUN\n"
	.string "MAY RESULT IN SUDDEN EVOLUTION$"

ColorRuinsGreen_B1F_Text_EssenceOfWater:
	.string "EXPOSURE TO THE ESSENCE OF WATER\n"
	.string "MAY RESULT IN SUDDEN EVOLUTION$"

ColorRuinsGreen_B1F_Text_EssenceOfWoods:
	.string "EXPOSURE TO THE ESSENCE OF THE\n"
	.string "WOODS MAY RESULT IN SUDDEN EVOLUTION$"
