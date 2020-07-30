VientoWalk_MapScripts::
	.byte 0


VientoWalk_EventScript_Sofia::
	trainerbattle_single TRAINER_G2_SOFIA, VientoWalk_EventScript_Sofia_Text_0, VientoWalk_EventScript_Sofia_Text_1
	msgbox VientoWalk_EventScript_Sofia_Text_2
	release
	end


VientoWalk_EventScript_Paula::
	trainerbattle_single TRAINER_G2_PAULA, VientoWalk_EventScript_Sofia_Text_0, VientoWalk_EventScript_Sofia_Text_1
	msgbox VientoWalk_EventScript_Sofia_Text_2
	release
	end


VientoWalk_EventScript_Carlos::
	trainerbattle_single TRAINER_G2_CARLOS, VientoWalk_EventScript_Sofia_Text_0, VientoWalk_EventScript_Sofia_Text_1
	msgbox VientoWalk_EventScript_Sofia_Text_2
	release
	end


VientoWalk_EventScript_Estefani::
	trainerbattle_single TRAINER_G2_ESTEFANI, VientoWalk_EventScript_Sofia_Text_0, VientoWalk_EventScript_Sofia_Text_1
	msgbox VientoWalk_EventScript_Sofia_Text_2
	release
	end


VientoWalk_EventScript_Amanda::
	trainerbattle_single TRAINER_G2_AMANDA, VientoWalk_EventScript_Sofia_Text_0, VientoWalk_EventScript_Sofia_Text_1
	msgbox VientoWalk_EventScript_Sofia_Text_2
	release
	end


VientoWalk_EventScript_Nicolas::
	trainerbattle_single TRAINER_G2_NICOLAS, VientoWalk_EventScript_Sofia_Text_0, VientoWalk_EventScript_Sofia_Text_1
	msgbox VientoWalk_EventScript_Sofia_Text_2
	release
	end


VientoWalk_EventScript_Merry::
	trainerbattle_single TRAINER_G2_MERRY, VientoWalk_EventScript_Sofia_Text_0, VientoWalk_EventScript_Sofia_Text_1
	msgbox VientoWalk_EventScript_Sofia_Text_2
	release
	end


VientoWalk_EventScript_Anahi::
	trainerbattle_single TRAINER_G2_ANAHI, VientoWalk_EventScript_Sofia_Text_0, VientoWalk_EventScript_Sofia_Text_1
	msgbox VientoWalk_EventScript_Sofia_Text_2
	release
	end


VientoWalk_EventScript_Sofia_Text_0:
	.string "Battle me now!$"

VientoWalk_EventScript_Sofia_Text_1:
	.string "No, I lost!$"

VientoWalk_EventScript_Sofia_Text_2:
	.string "You're good.$"
