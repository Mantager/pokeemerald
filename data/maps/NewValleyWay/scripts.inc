NewValleyWay_MapScripts::
	.byte 0


NewValleyWay_EventScript_Terence::
	trainerbattle_single TRAINER_G2_TERENCE, NewValleyWay_EventScript_Terence_Text_0, NewValleyWay_EventScript_Terence_Text_1
	msgbox NewValleyWay_EventScript_Terence_Text_2
	release
	end


NewValleyWay_EventScript_Mimi::
	trainerbattle_single TRAINER_G2_MIMI, NewValleyWay_EventScript_Mimi_Text_0, NewValleyWay_EventScript_Mimi_Text_1
	msgbox NewValleyWay_EventScript_Mimi_Text_2
	release
	end


NewValleyWay_EventScript_Katalan::
	trainerbattle_single TRAINER_G2_KATALAN, NewValleyWay_EventScript_Katalan_Text_0, NewValleyWay_EventScript_Katalan_Text_1
	msgbox NewValleyWay_EventScript_Katalan_Text_2
	release
	end


NewValleyWay_EventScript_Sergei::
	trainerbattle_single TRAINER_G2_SERGEI, NewValleyWay_EventScript_Sergei_Text_0, NewValleyWay_EventScript_Sergei_Text_1
	msgbox NewValleyWay_EventScript_Sergei_Text_2
	release
	end


NewValleyWay_EventScript_Camila::
	trainerbattle_single TRAINER_G2_CAMILA, NewValleyWay_EventScript_Camila_Text_0, NewValleyWay_EventScript_Camila_Text_1
	msgbox NewValleyWay_EventScript_Camila_Text_2
	release
	end


NewValleyWay_EventScript_Mateo::
	trainerbattle_single TRAINER_G2_MATEO, NewValleyWay_EventScript_Mateo_Text_0, NewValleyWay_EventScript_Mateo_Text_1
	msgbox NewValleyWay_EventScript_Mateo_Text_2
	release
	end


NewValleyWay_EventScript_Thiago::
	trainerbattle_single TRAINER_G2_THIAGO, NewValleyWay_EventScript_Thiago_Text_0, NewValleyWay_EventScript_Thiago_Text_1
	msgbox NewValleyWay_EventScript_Thiago_Text_2
	release
	end


NewValleyWay_EventScript_Daniel::
	trainerbattle_single TRAINER_G2_DANIEL, NewValleyWay_EventScript_Daniel_Text_0, NewValleyWay_EventScript_Daniel_Text_1
	msgbox NewValleyWay_EventScript_Daniel_Text_2
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
	.string "I saw you leave Prime City!\nLet's have a battle!$"

NewValleyWay_EventScript_Terence_Text_1:
	.string "No, I lost!$"

NewValleyWay_EventScript_Terence_Text_2:
	.string "Ríota's full of tough Trainers.\nYou should watch out!$"

NewValleyWay_EventScript_Mimi_Text_0:
	.string "Your forecast?\pCloudy with a high chance of\nwhite out!$"

NewValleyWay_EventScript_Mimi_Text_1:
	.string "I'm the one who whited out…$"

NewValleyWay_EventScript_Mimi_Text_2:
	.string "Today's sun is swelteringly hot.\nI'd better wear sun cream.$"

NewValleyWay_EventScript_Katalan_Text_0:
	.string "I just finished cooking lunch.\nWant some?$"

NewValleyWay_EventScript_Katalan_Text_1:
	.string "Oh, you're not a fan of barbecue?$"

NewValleyWay_EventScript_Katalan_Text_2:
	.string "Never battle on an empty stomach!$"

NewValleyWay_EventScript_Sergei_Text_0:
	.string "Pokémon Rangers rescue those in trouble.\nBut we're also strong Trainers!$"

NewValleyWay_EventScript_Sergei_Text_1:
	.string "Not strong enough, it seems!$"

NewValleyWay_EventScript_Sergei_Text_2:
	.string "If you wanted to, I think you\ncould become a good Ranger.$"

NewValleyWay_EventScript_Camila_Text_0:
	.string "Hiyah!\nI'll take on any opponent!$"

NewValleyWay_EventScript_Camila_Text_1:
	.string "I'm ashamed to lose…$"

NewValleyWay_EventScript_Camila_Text_2:
	.string "I train here every day.\nIt's my favourite spot!$"

NewValleyWay_EventScript_Mateo_Text_0:
	.string "Want me to play you a riff?$"

NewValleyWay_EventScript_Mateo_Text_1:
	.string "Your moves have a nice beat.$"

NewValleyWay_EventScript_Mateo_Text_2:
	.string "As long as I have my guitar with\nme, I'll go anywhere.$"

NewValleyWay_EventScript_Thiago_Text_0:
	.string "Yahoooo!\nIt's a Trainer-lihooo!$"

NewValleyWay_EventScript_Thiago_Text_1:
	.string "Oh-nooooo!$"

NewValleyWay_EventScript_Thiago_Text_2:
	.string "C'mon, yodel with me!\nWa-lihooooo!$"

NewValleyWay_EventScript_Daniel_Text_0:
	.string "Aha!\nI caught you!$"

NewValleyWay_EventScript_Daniel_Text_1:
	.string "It can't be!$"

NewValleyWay_EventScript_Daniel_Text_2:
	.string "The valley is like a second home\nto me.$"

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
