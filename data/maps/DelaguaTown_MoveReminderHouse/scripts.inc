DelaguaTown_MoveReminderHouse_MapScripts::
	.byte 0


DelaguaTown_MoveReminderHouse_EventScript_MoveReminder::
	lockall
	faceplayer
	goto_if_unset FLAG_TEMP_1, DelaguaTown_MoveReminderHouse_EventScript_MoveReminder_2
DelaguaTown_MoveReminderHouse_EventScript_MoveReminder_1:
	msgbox DelaguaTown_MoveReminderHouse_EventScript_MoveReminder_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq DelaguaTown_MoveReminderHouse_EventScript_MoveReminder_4
	msgbox DelaguaTown_MoveReminderHouse_EventScript_MoveReminder_Text_8
	release
	end

DelaguaTown_MoveReminderHouse_EventScript_MoveReminder_2:
	msgbox DelaguaTown_MoveReminderHouse_EventScript_MoveReminder_Text_0
	closemessage
	setflag FLAG_TEMP_1
	goto DelaguaTown_MoveReminderHouse_EventScript_MoveReminder_1

DelaguaTown_MoveReminderHouse_EventScript_MoveReminder_4:
	msgbox DelaguaTown_MoveReminderHouse_EventScript_MoveReminder_Text_2
	special ChooseMonForMoveRelearner
	waitstate
	compare VAR_0x8004, 255
	goto_if_eq DelaguaTown_MoveReminderHouse_EventScript_MoveReminder_8
	special IsSelectedMonEgg
	compare VAR_RESULT, TRUE
	goto_if_eq DelaguaTown_MoveReminderHouse_EventScript_MoveReminder_11
	compare VAR_0x8005, 0
	goto_if_eq DelaguaTown_MoveReminderHouse_EventScript_MoveReminder_14
	msgbox DelaguaTown_MoveReminderHouse_EventScript_MoveReminder_Text_6
	special TeachMoveRelearnerMove
	waitstate
	compare VAR_0x8004, 0
	goto_if_eq DelaguaTown_MoveReminderHouse_EventScript_MoveReminder_17
	msgbox DelaguaTown_MoveReminderHouse_EventScript_MoveReminder_Text_7
	release
	end

DelaguaTown_MoveReminderHouse_EventScript_MoveReminder_8:
	msgbox DelaguaTown_MoveReminderHouse_EventScript_MoveReminder_Text_3
	release
	end

DelaguaTown_MoveReminderHouse_EventScript_MoveReminder_11:
	msgbox DelaguaTown_MoveReminderHouse_EventScript_MoveReminder_Text_4
	release
	end

DelaguaTown_MoveReminderHouse_EventScript_MoveReminder_14:
	msgbox DelaguaTown_MoveReminderHouse_EventScript_MoveReminder_Text_5
	release
	end

DelaguaTown_MoveReminderHouse_EventScript_MoveReminder_17:
	msgbox DelaguaTown_MoveReminderHouse_EventScript_MoveReminder_Text_3
	release
	end


DelaguaTown_MoveReminderHouse_EventScript_MoveReminder_Text_0:
	.string "Welcome.\nThey call me the Move Reminder.\pI can make your Pokémon remember a\nmove it'd forgotten in the past.\lAll for free, of course.$"

DelaguaTown_MoveReminderHouse_EventScript_MoveReminder_Text_1:
	.string "So, would you like one of your\nPokémon to remember a move?$"

DelaguaTown_MoveReminderHouse_EventScript_MoveReminder_Text_2:
	.string "Which Pokémon wants to remember a move?$"

DelaguaTown_MoveReminderHouse_EventScript_MoveReminder_Text_3:
	.string "Oh, changed your mind?\pSuit yourself, then.$"

DelaguaTown_MoveReminderHouse_EventScript_MoveReminder_Text_4:
	.string "Eggs can't remember any moves!$"

DelaguaTown_MoveReminderHouse_EventScript_MoveReminder_Text_5:
	.string "There's no moves that I can make\nthis Pokémon remember.$"

DelaguaTown_MoveReminderHouse_EventScript_MoveReminder_Text_6:
	.string "Which move should be remembered?$"

DelaguaTown_MoveReminderHouse_EventScript_MoveReminder_Text_7:
	.string "Come back any time!$"

DelaguaTown_MoveReminderHouse_EventScript_MoveReminder_Text_8:
	.string "Suit yourself.$"
