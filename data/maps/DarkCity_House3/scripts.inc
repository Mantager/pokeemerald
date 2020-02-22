DarkCity_House3_MapScripts::
	.byte 0

DarkCity_House3_EventScript_MoveRelearner::
	lockall
	faceplayer
	msgbox DarkCity_House3_Text_ImTheMoveReminder, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, DarkCity_House3_EventScript_ComeBackAnyTime
	goto DarkCity_House3_EventScript_ChooseMon
	end

DarkCity_House3_EventScript_ChooseMon::
	msgbox DarkCity_House3_Text_TutorWhichMon, MSGBOX_DEFAULT
	special ChooseMonForMoveRelearner
	waitstate
	compare VAR_0x8004, 255
	goto_if_eq DarkCity_House3_EventScript_ComeBackAnyTime
	special IsSelectedMonEgg
	compare VAR_RESULT, TRUE
	goto_if_eq DarkCity_House3_EventScript_CantTeachEgg
	compare VAR_0x8005, 0
	goto_if_eq DarkCity_House3_EventScript_NoMoveToTeachMon
	goto DarkCity_House3_EventScript_ChooseMove
	end

DarkCity_House3_EventScript_ChooseMove::
	msgbox DarkCity_House3_Text_TeachWhichMove, MSGBOX_DEFAULT
	special TeachMoveRelearnerMove
	waitstate
	compare VAR_0x8004, 0
	goto_if_eq DarkCity_House3_EventScript_ChooseMon
	goto DarkCity_House3_EventScript_ComeBackAnyTime
	end

DarkCity_House3_EventScript_NoMoveToTeachMon::
	msgbox DarkCity_House3_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
	goto DarkCity_House3_EventScript_ChooseMon
	end

DarkCity_House3_EventScript_CantTeachEgg::
	msgbox DarkCity_House3_Text_CantTeachEgg, MSGBOX_DEFAULT
	goto DarkCity_House3_EventScript_ChooseMon
	end

DarkCity_House3_EventScript_ComeBackAnyTime::
	msgbox DarkCity_House3_Text_ComeBackAnyTime, MSGBOX_DEFAULT
	releaseall
	end

DarkCity_House3_EventScript_NaturalGiftTutor::
	lock
	faceplayer
	msgbox DarkCity_House3_Text_YoureABerryFarmer, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq DarkCity_House3_EventScript_NaturalGiftDeclined
	msgbox DarkCity_House3_Text_NaturalGiftWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_NATURAL_GIFT
	call MoveTutor_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq DarkCity_House3_EventScript_NaturalGiftDeclined
	msgbox DarkCity_House3_Text_NaturalGiftTaught, MSGBOX_DEFAULT
	release
	end

DarkCity_House3_EventScript_NaturalGiftDeclined::
	msgbox DarkCity_House3_Text_NaturalGiftDeclined, MSGBOX_DEFAULT
	release
	end

DarkCity_House3_Text_ImTheMoveReminder: @ 820145C
	.string "I'm the Move Reminder.\p"
	.string "I know all the moves that Pokémon\n"
	.string "learn--every one of them--and I can\l"
	.string "teach Pokémon those moves.\p"
	.string "I can teach a move to a Pokémon\n"
	.string "of yours if you'd like, for free.$"

DarkCity_House3_Text_TutorWhichMon:
	.string "Which Pokémon needs tutoring?$"

DarkCity_House3_Text_TeachWhichMove:
	.string "Which move should I teach?$"

DarkCity_House3_Text_DontHaveMoveToTeachPokemon:
	.string "Sorry…\p"
	.string "It doesn't appear as if I have any move\n"
	.string "I can teach that Pokémon.$"

DarkCity_House3_Text_ComeBackAnyTime:
	.string "If your Pokémon need to learn a move,\n"
	.string "come back anytime.$"

DarkCity_House3_Text_CantTeachEgg:
	.string "Hunh? There isn't a single move that\n"
	.string "I can teach an Egg.$"

DarkCity_House3_Text_YoureABerryFarmer:
	.string "Oh, your clothes…\n"
	.string "You must be a Berry farmer, right?\p"
	.string "Haha! My intuition was spot on,\n"
	.string "wasn't it?\p"
	.string "I can help you draw more power out\n"
	.string "of your Berries by teaching your\l"
	.string "Pokémon the move Natural Gift.\p"
	.string "Would you like me to do that?$"

DarkCity_House3_Text_NaturalGiftDeclined:
	.string "Very well.\n"
	.string "Come back if you change your mind.$"

DarkCity_House3_Text_NaturalGiftWhichMon:
	.string "Which Pokémon wants to learn\n"
	.string "Natural Gift?$"

DarkCity_House3_Text_NaturalGiftTaught:
	.string "I hope Natural Gift comes in handy\n"
	.string "for any future battles.\p"
	.string "I'll teach it again any time!$"
