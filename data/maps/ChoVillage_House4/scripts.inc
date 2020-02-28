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


ChoVillage_House4_Text_Zigzagoon:
	.string "Ziguu!$"

ChoVillage_House4_Text_ImMoveTutor:
	.string "I'm a Move Tutor!\p"
	.string "I can teach your Pokémon a variety\n"
	.string "of fabulous moves.\p"
	.string "But there's a catch!\p"
	.string "For every move I teach, you have to\n"
	.string "give me one Big Mushroom or two\l"
	.string "Tiny Mushrooms.$"

ChoVillage_House4_Text_NoMushrooms:
	.string "Hmm…\p"
	.string "You don't seem to have enough\n"
	.string "Big or Tiny Mushrooms.\p"
	.string "If you want me to teach a move,\n"
	.string "then come back with some 'shrooms!$"

ChoVillage_House4_Text_HasBigMushroom:
	.string "You have a Big Mushroom inside\n"
	.string "your Bag, don't you?\l"
	.string "It has a lovely scent…\p"
	.string "In exchange for that Big Mushroom,\n"
	.string "which move should I teach?$"

ChoVillage_House4_Text_HasTinyMushrooms:
	.string "You have Tiny Mushrooms inside\n"
	.string "your Bag, don't you?\l"
	.string "They have a lovely scent…\p"
	.string "In exchange for two Tiny Mushrooms,\n"
	.string "which move should I teach?$"

ChoVillage_House4_Text_YouDontWantTo:
	.string "You don't want me to teach a\n"
	.string "move?$"

ChoVillage_House4_Text_TeachMoveToWhichMon:
	.string "Which Pokémon should learn the\n"
	.string "move?$"

ChoVillage_House4_Text_BigMushroomGiven:
	.string "{PLAYER} handed over a\n"
	.string "Big Mushroom in exchange.$"

ChoVillage_House4_Text_TinyMushroomsGiven:
	.string "{PLAYER} handed over two\n"
	.string "Tiny Mushrooms in exchange.$"
