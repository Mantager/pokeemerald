DarkRuins_YellowRoom_MapScripts::
	.byte 0

DarkRuins_YellowRoom_EventScript_RoomGuide::
	lock
	msgbox DarkRuins_YellowRoom_Text_RoomGuide, MSGBOX_DEFAULT
	release
	end

DarkRuins_YellowRoom_EventScript_Huizhong::
	lock
	faceplayer
	goto_if_set FLAG_DARK_RUINS_YELLOW_COMPLETE, DarkRuins_YellowRoom_EventScript_HuizhongPostBattle
	msgbox DarkRuins_YellowRoom_Text_Congratulations, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_HUIZHONG, DarkRuins_YellowRoom_Text_HuizhongDefeat
	msgbox DarkRuins_YellowRoom_Text_HuizhongPostBattle, MSGBOX_DEFAULT
	closemessage
	playfanfare MUS_FANFA5
	msgbox DarkRuins_YellowRoom_Text_PuzzleComplete, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	addvar VAR_DARK_RUINS_ROOMS_COMPLETED, 1
	setflag FLAG_DARK_RUINS_YELLOW_COMPLETE
	release
	end

DarkRuins_YellowRoom_EventScript_HuizhongPostBattle::
	msgbox DarkRuins_YellowRoom_Text_HuizhongAfter, MSGBOX_DEFAULT
	release
	end

@ DIGLETT PUZZLE GUIDE:
@ 4 -> 6 -> 7 -> 8 -> 5 -> 9 -> 12 -> 10 -> 11 -> 13

DarkRuins_YellowRoom_EventScript_Diglett4::
	lock
	faceplayer
	compare VAR_DARK_RUINS_DIGLETT_COUNTER, 0
	goto_if_ne DarkRuins_YellowRoom_EventScript_DiglettIncorrect
	call DarkRuins_YellowRoom_EventScript_DiglettCorrect
	call DarkRuins_YellowRoom_EventScript_PrepareNextDiglett
	end

DarkRuins_YellowRoom_EventScript_Diglett6::
	lock
	faceplayer
	compare VAR_DARK_RUINS_DIGLETT_COUNTER, 1
	goto_if_ne DarkRuins_YellowRoom_EventScript_DiglettIncorrect
	call DarkRuins_YellowRoom_EventScript_DiglettCorrect
	setflag FLAG_DARK_RUINS_DIGLETT_1
	removeobject 4
	removeobject 6
	call DarkRuins_YellowRoom_EventScript_PrepareNextDiglett
	end

DarkRuins_YellowRoom_EventScript_Diglett7::
	lock
	faceplayer
	compare VAR_DARK_RUINS_DIGLETT_COUNTER, 2
	goto_if_ne DarkRuins_YellowRoom_EventScript_DiglettIncorrect
	call DarkRuins_YellowRoom_EventScript_DiglettCorrect
	setflag FLAG_DARK_RUINS_DIGLETT_2
	removeobject 7
	call DarkRuins_YellowRoom_EventScript_PrepareNextDiglett
	end

DarkRuins_YellowRoom_EventScript_Diglett8::
	lock
	faceplayer
	compare VAR_DARK_RUINS_DIGLETT_COUNTER, 3
	goto_if_ne DarkRuins_YellowRoom_EventScript_DiglettIncorrect
	call DarkRuins_YellowRoom_EventScript_DiglettCorrect
	call DarkRuins_YellowRoom_EventScript_PrepareNextDiglett
	end

DarkRuins_YellowRoom_EventScript_Diglett5::
	lock
	faceplayer
	compare VAR_DARK_RUINS_DIGLETT_COUNTER, 4
	goto_if_ne DarkRuins_YellowRoom_EventScript_DiglettIncorrect
	call DarkRuins_YellowRoom_EventScript_DiglettCorrect
	call DarkRuins_YellowRoom_EventScript_PrepareNextDiglett
	end

DarkRuins_YellowRoom_EventScript_Diglett9::
	lock
	faceplayer
	compare VAR_DARK_RUINS_DIGLETT_COUNTER, 5
	goto_if_ne DarkRuins_YellowRoom_EventScript_DiglettIncorrect
	call DarkRuins_YellowRoom_EventScript_DiglettCorrect
	setflag FLAG_DARK_RUINS_DIGLETT_3
	removeobject 8
	removeobject 5
	removeobject 9
	call DarkRuins_YellowRoom_EventScript_PrepareNextDiglett
	end

DarkRuins_YellowRoom_EventScript_Diglett12::
	lock
	faceplayer
	compare VAR_DARK_RUINS_DIGLETT_COUNTER, 6
	goto_if_ne DarkRuins_YellowRoom_EventScript_DiglettIncorrect
	call DarkRuins_YellowRoom_EventScript_DiglettCorrect
	setflag FLAG_DARK_RUINS_DIGLETT_4
	removeobject 12
	call DarkRuins_YellowRoom_EventScript_PrepareNextDiglett
	end

DarkRuins_YellowRoom_EventScript_Diglett10::
	lock
	faceplayer
	compare VAR_DARK_RUINS_DIGLETT_COUNTER, 7
	goto_if_ne DarkRuins_YellowRoom_EventScript_DiglettIncorrect
	call DarkRuins_YellowRoom_EventScript_DiglettCorrect
	setflag FLAG_DARK_RUINS_DIGLETT_5
	removeobject 10
	call DarkRuins_YellowRoom_EventScript_PrepareNextDiglett
	end

DarkRuins_YellowRoom_EventScript_Diglett11::
	lock
	faceplayer
	compare VAR_DARK_RUINS_DIGLETT_COUNTER, 8
	goto_if_ne DarkRuins_YellowRoom_EventScript_DiglettIncorrect
	call DarkRuins_YellowRoom_EventScript_DiglettCorrect
	call DarkRuins_YellowRoom_EventScript_PrepareNextDiglett
	end

DarkRuins_YellowRoom_EventScript_Diglett13::
	lock
	faceplayer
	compare VAR_DARK_RUINS_DIGLETT_COUNTER, 9
	goto_if_ne DarkRuins_YellowRoom_EventScript_DiglettIncorrect
	call DarkRuins_YellowRoom_EventScript_DiglettCorrect
	setflag FLAG_DARK_RUINS_DIGLETT_6
	removeobject 11
	removeobject 13
	call DarkRuins_YellowRoom_EventScript_PrepareNextDiglett
	end

DarkRuins_YellowRoom_EventScript_DiglettCorrect::
	playmoncry SPECIES_DIGLETT, 0
	msgbox DarkRuins_YellowRoom_Text_DiglettCorrect, MSGBOX_DEFAULT
	waitmoncry
	closemessage
	fadescreen 1
	return

DarkRuins_YellowRoom_EventScript_PrepareNextDiglett::
	waitmovement 0
	addvar VAR_DARK_RUINS_DIGLETT_COUNTER, 1
	fadescreen 0
	release
	return

DarkRuins_YellowRoom_EventScript_DiglettIncorrect::
	playmoncry SPECIES_DIGLETT, 0
	msgbox DarkRuins_YellowRoom_Text_DiglettIncorrect, MSGBOX_DEFAULT
	waitmoncry
	closemessage
	release
	end


DarkRuins_YellowRoom_Movement_SetInvisible:
	set_invisible
	step_end
