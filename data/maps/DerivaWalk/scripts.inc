DerivaWalk_MapScripts::
	.byte 0


DerivaWalk_EventScript_Josefina::
	trainerbattle_single TRAINER_G2_JOSEFINA, DerivaWalk_EventScript_Josefina_Text_0, DerivaWalk_EventScript_Josefina_Text_1
	msgbox DerivaWalk_EventScript_Josefina_Text_2
	release
	end


DerivaWalk_EventScript_Emilio::
	trainerbattle_single TRAINER_G2_EMILIO, DerivaWalk_EventScript_Emilio_Text_0, DerivaWalk_EventScript_Emilio_Text_1
	msgbox DerivaWalk_EventScript_Emilio_Text_2
	release
	end


DerivaWalk_EventScript_Megan::
	trainerbattle_single TRAINER_G2_MEGAN, DerivaWalk_EventScript_Emilio_Text_0, DerivaWalk_EventScript_Emilio_Text_1
	msgbox DerivaWalk_EventScript_Emilio_Text_2
	release
	end


DerivaWalk_EventScript_Federico::
	trainerbattle_single TRAINER_G2_FEDERICO, DerivaWalk_EventScript_Emilio_Text_0, DerivaWalk_EventScript_Emilio_Text_1
	msgbox DerivaWalk_EventScript_Emilio_Text_2
	release
	end


DerivaWalk_EventScript_Vincent::
	trainerbattle_single TRAINER_G2_VINCENT, DerivaWalk_EventScript_Emilio_Text_0, DerivaWalk_EventScript_Emilio_Text_1
	msgbox DerivaWalk_EventScript_Emilio_Text_2
	release
	end


DerivaWalk_EventScript_Nakia::
	trainerbattle_single TRAINER_G2_NAKIA, DerivaWalk_EventScript_Emilio_Text_0, DerivaWalk_EventScript_Emilio_Text_1
	msgbox DerivaWalk_EventScript_Emilio_Text_2
	release
	end


DerivaWalk_EventScript_Yan::
	trainerbattle_double TRAINER_G2_YAN_AND_IVO, DerivaWalk_EventScript_Emilio_Text_0, DerivaWalk_EventScript_Emilio_Text_1, DerivaWalk_EventScript_Yan_Text_0
	msgbox DerivaWalk_EventScript_Emilio_Text_2
	release
	end


DerivaWalk_EventScript_Ivo::
	trainerbattle_double TRAINER_G2_YAN_AND_IVO, DerivaWalk_EventScript_Emilio_Text_0, DerivaWalk_EventScript_Emilio_Text_1, DerivaWalk_EventScript_Yan_Text_0
	msgbox DerivaWalk_EventScript_Emilio_Text_2
	release
	end


DerivaWalk_EventScript_Maikel::
	trainerbattle_single TRAINER_G2_MAIKEL, DerivaWalk_EventScript_Emilio_Text_0, DerivaWalk_EventScript_Emilio_Text_1
	msgbox DerivaWalk_EventScript_Emilio_Text_2
	release
	end


DerivaWalk_EventScript_Josefina_Text_0:
	.string "I'm a fish out of water!$"

DerivaWalk_EventScript_Josefina_Text_1:
	.string "All I could do was flop!$"

DerivaWalk_EventScript_Josefina_Text_2:
	.string "Y'know, lately I've been leaping\noff the cliffs at the Land Bridge.\pIt's great fun, I tell you!$"

DerivaWalk_EventScript_Emilio_Text_0:
	.string "Battle me now!$"

DerivaWalk_EventScript_Emilio_Text_1:
	.string "No, I lost!$"

DerivaWalk_EventScript_Emilio_Text_2:
	.string "You're good.$"

DerivaWalk_EventScript_Yan_Text_0:
	.string "Need two!$"
