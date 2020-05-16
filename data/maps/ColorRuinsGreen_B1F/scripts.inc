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
