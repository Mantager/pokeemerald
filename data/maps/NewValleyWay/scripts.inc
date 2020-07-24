NewValleyWay_MapScripts::
	.byte 0


NewValleyWay_EventScript_Terence::
	trainerbattle_single TRAINER_G2_TERENCE, NewValleyWay_EventScript_Terence_Text_0, NewValleyWay_EventScript_Terence_Text_1
	msgbox NewValleyWay_EventScript_Terence_Text_2
	release
	end


NewValleyWay_EventScript_Mimi::
	trainerbattle_single TRAINER_G2_MIMI, NewValleyWay_EventScript_Terence_Text_0, NewValleyWay_EventScript_Terence_Text_1
	msgbox NewValleyWay_EventScript_Terence_Text_2
	release
	end


NewValleyWay_EventScript_Katalan::
	trainerbattle_single TRAINER_G2_KATALAN, NewValleyWay_EventScript_Terence_Text_0, NewValleyWay_EventScript_Terence_Text_1
	msgbox NewValleyWay_EventScript_Terence_Text_2
	release
	end


NewValleyWay_EventScript_Sergei::
	trainerbattle_single TRAINER_G2_SERGEI, NewValleyWay_EventScript_Terence_Text_0, NewValleyWay_EventScript_Terence_Text_1
	msgbox NewValleyWay_EventScript_Terence_Text_2
	release
	end


NewValleyWay_EventScript_Camila::
	trainerbattle_single TRAINER_G2_CAMILA, NewValleyWay_EventScript_Terence_Text_0, NewValleyWay_EventScript_Terence_Text_1
	msgbox NewValleyWay_EventScript_Terence_Text_2
	release
	end


NewValleyWay_EventScript_Mateo::
	trainerbattle_single TRAINER_G2_MATEO, NewValleyWay_EventScript_Terence_Text_0, NewValleyWay_EventScript_Terence_Text_1
	msgbox NewValleyWay_EventScript_Terence_Text_2
	release
	end


NewValleyWay_EventScript_Thiago::
	trainerbattle_single TRAINER_G2_THIAGO, NewValleyWay_EventScript_Terence_Text_0, NewValleyWay_EventScript_Terence_Text_1
	msgbox NewValleyWay_EventScript_Terence_Text_2
	release
	end


NewValleyWay_EventScript_Daniel::
	trainerbattle_single TRAINER_G2_DANIEL, NewValleyWay_EventScript_Terence_Text_0, NewValleyWay_EventScript_Terence_Text_1
	msgbox NewValleyWay_EventScript_Terence_Text_2
	release
	end


NewValleyWay_Trigger_CantLeave::
	lockall
	applymovement 9, Common_Movement_FaceDown
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	msgbox NewValleyWay_Trigger_CantLeave_Text_0
	msgbox NewValleyWay_Trigger_CantLeave_Text_1
	msgbox NewValleyWay_Trigger_CantLeave_Text_2
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	releaseall
	end


NewValleyWay_EventScript_Fern::
	lock
	faceplayer
	msgbox NewValleyWay_Trigger_CantLeave_Text_0
	msgbox NewValleyWay_Trigger_CantLeave_Text_1
	msgbox NewValleyWay_Trigger_CantLeave_Text_2
	release
	end


NewValleyWay_EventScript_Malimo::
	lock
	faceplayer
	msgbox NewValleyWay_EventScript_Malimo_Text_0
	msgbox NewValleyWay_EventScript_Malimo_Text_1
	msgbox NewValleyWay_EventScript_Malimo_Text_2
	release
	end


NewValleyWay_EventScript_Terence_Text_0:
	.string "Battle me now!$"

NewValleyWay_EventScript_Terence_Text_1:
	.string "No, I lost!$"

NewValleyWay_EventScript_Terence_Text_2:
	.string "You're good.$"

NewValleyWay_Trigger_CantLeave_Text_0:
	.string "{COLOR}{RED}Oh, here comes the slowpoke!\pGo and get Rye from Yanuras Town,\nwon't ya?$"

NewValleyWay_Trigger_CantLeave_Text_1:
	.string "What?\nWhy me?$"

NewValleyWay_Trigger_CantLeave_Text_2:
	.string "{COLOR}{RED}Because you were last to arrive!\nDon't keep us waiting now!$"

NewValleyWay_EventScript_Malimo_Text_0:
	.string "{COLOR}{BLUE}To be honest, I had to skip a\nprep school class for this…$"

NewValleyWay_EventScript_Malimo_Text_1:
	.string "…So you weren't allowed to come?\nAren't your parents gonna be mad?$"

NewValleyWay_EventScript_Malimo_Text_2:
	.string "{COLOR}{BLUE}…You and me both know that some\nrules are worth breaking, Clad.$"
