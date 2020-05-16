ChoVillage_House4_MapScripts::
	.byte 0

ChoVillage_House4_EventScript_Zigzagoon::
	lock
	faceplayer
	playmoncry SPECIES_ZIGZAGOON, 0
	msgbox ChoVillage_House4_Text_Zigzagoon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

ChoVillage_House4_EventScript_MoveTutor::
	lock
	faceplayer
	msgbox ChoVillage_House4_Text_ImMoveTutor, MSGBOX_DEFAULT
	closemessage
	checkitem ITEM_BIG_MUSHROOM, 1
	compare VAR_RESULT, TRUE
	goto_if_eq ChoVillage_House4_EventScript_HasBigMushroom
	checkitem ITEM_TINY_MUSHROOM, 2
	compare VAR_RESULT, TRUE
	goto_if_eq ChoVillage_House4_EventScript_HasTinyMushrooms
	msgbox ChoVillage_House4_Text_NoMushrooms, MSGBOX_DEFAULT
	release
	end

ChoVillage_House4_EventScript_HasBigMushroom::
	setvar VAR_TEMP_A, 1
	message ChoVillage_House4_Text_HasBigMushroom
	waitmessage
	goto ChoVillage_House4_EventScript_TeachWhichMove

ChoVillage_House4_EventScript_HasTinyMushrooms::
	setvar VAR_TEMP_A, 2
	message ChoVillage_House4_Text_HasTinyMushrooms
	waitmessage
	goto ChoVillage_House4_EventScript_TeachWhichMove

ChoVillage_House4_EventScript_TeachWhichMove::
	setvar VAR_TEMP_E, 2
	multichoice 0, 0, MULTI_CHO_VILLAGE_MOVE_TUTOR, 0
	copyvar VAR_TEMP_D, VAR_RESULT
	switch VAR_RESULT
	case 0, ChoVillage_House4_EventScript_ConfirmMoveSelection
	case 1, ChoVillage_House4_EventScript_ConfirmMoveSelection
	case 2, ChoVillage_House4_EventScript_ConfirmMoveSelection
	case 3, ChoVillage_House4_EventScript_ConfirmMoveSelection
	case 4, ChoVillage_House4_EventScript_ExitTutorMoveSelect
	case MULTI_B_PRESSED, ChoVillage_House4_EventScript_ExitTutorMoveSelect
	end

ChoVillage_House4_EventScript_ConfirmMoveSelection::
	msgbox ChoVillage_House4_Text_TeachMoveToWhichMon, MSGBOX_DEFAULT
	special GetBattleFrontierTutorMoveIndex
	fadescreen FADE_TO_BLACK
	special ChooseMonForMoveTutor
	waitstate
	compare VAR_RESULT, FALSE
	goto_if_eq ChoVillage_House4_EventScript_ExitTutorMoveSelect
	copyvar VAR_0x8004, VAR_0x8008
	compare VAR_TEMP_A, 1
	call_if_eq ChoVillage_House4_EventScript_GiveBigMushroom
	compare VAR_TEMP_A, 2
	call_if_eq ChoVillage_House4_EventScript_GiveTinyMushrooms
	release
	end

ChoVillage_House4_EventScript_GiveBigMushroom::
	takeitem ITEM_BIG_MUSHROOM, 1
	msgbox ChoVillage_House4_Text_BigMushroomGiven, MSGBOX_DEFAULT
	return

ChoVillage_House4_EventScript_GiveTinyMushrooms::
	takeitem ITEM_TINY_MUSHROOM, 2
	msgbox ChoVillage_House4_Text_TinyMushroomsGiven, MSGBOX_DEFAULT
	return

ChoVillage_House4_EventScript_ExitTutorMoveSelect::
	msgbox ChoVillage_House4_Text_YouDontWantTo, MSGBOX_DEFAULT
	release
	end
