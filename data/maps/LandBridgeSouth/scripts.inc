LandBridgeSouth_MapScripts::
	.byte 0


LandBridgeSouth_EventScript_Sigal::
	trainerbattle_single TRAINER_G2_SIGAL, LandBridgeSouth_EventScript_Sigal_Text_0, LandBridgeSouth_EventScript_Sigal_Text_1
	msgbox LandBridgeSouth_EventScript_Sigal_Text_2
	release
	end


LandBridgeSouth_EventScript_Zane::
	trainerbattle_single TRAINER_G2_ZANE, LandBridgeSouth_EventScript_Zane_Text_0, LandBridgeSouth_EventScript_Zane_Text_1
	msgbox LandBridgeSouth_EventScript_Zane_Text_2
	release
	end


LandBridgeSouth_EventScript_Ei::
	trainerbattle_double TRAINER_G2_EI_AND_AI, LandBridgeSouth_EventScript_Ei_Text_0, LandBridgeSouth_EventScript_Ei_Text_1, LandBridgeSouth_EventScript_Ei_Text_2
	msgbox LandBridgeSouth_EventScript_Ei_Text_3
	release
	end


LandBridgeSouth_EventScript_Ai::
	trainerbattle_double TRAINER_G2_EI_AND_AI, LandBridgeSouth_EventScript_Ai_Text_0, LandBridgeSouth_EventScript_Ei_Text_1, LandBridgeSouth_EventScript_Ei_Text_2
	msgbox LandBridgeSouth_EventScript_Ei_Text_3
	release
	end


LandBridgeSouth_EventScript_Felipe::
	trainerbattle_single TRAINER_G2_FELIPE, LandBridgeSouth_EventScript_Felipe_Text_0, LandBridgeSouth_EventScript_Felipe_Text_1
	msgbox LandBridgeSouth_EventScript_Ei_Text_3
	release
	end


LandBridgeSouth_EventScript_Julieta::
	trainerbattle_single TRAINER_G2_JULIETA, LandBridgeSouth_EventScript_Felipe_Text_0, LandBridgeSouth_EventScript_Felipe_Text_1
	msgbox LandBridgeSouth_EventScript_Ei_Text_3
	release
	end


LandBridgeSouth_EventScript_Oru::
	trainerbattle_single TRAINER_G2_ORU, LandBridgeSouth_EventScript_Felipe_Text_0, LandBridgeSouth_EventScript_Felipe_Text_1
	msgbox LandBridgeSouth_EventScript_Ei_Text_3
	release
	end


LandBridgeSouth_EventScript_Nan::
	trainerbattle_single TRAINER_G2_NAN, LandBridgeSouth_EventScript_Felipe_Text_0, LandBridgeSouth_EventScript_Felipe_Text_1
	msgbox LandBridgeSouth_EventScript_Ei_Text_3
	release
	end


LandBridgeSouth_EventScript_Sigal_Text_0:
	.string "Ring ring! Ring ring!\nOutta the way!$"

LandBridgeSouth_EventScript_Sigal_Text_1:
	.string "Well that was a crash.$"

LandBridgeSouth_EventScript_Sigal_Text_2:
	.string "Big wheels keep on turning.$"

LandBridgeSouth_EventScript_Zane_Text_0:
	.string "Now you're a cute little Trainer!\nAren't you?\lAwwww!\lLet's have a fight, shall we?$"

LandBridgeSouth_EventScript_Zane_Text_1:
	.string "Huh?!\nWhat was that?$"

LandBridgeSouth_EventScript_Zane_Text_2:
	.string "Oh well, I suppose I can let you\noff the hook for beating me.\lTee hee!$"

LandBridgeSouth_EventScript_Ei_Text_0:
	.string "One plus one is four?\nWhatever, let's battle!$"

LandBridgeSouth_EventScript_Ei_Text_1:
	.string "Ei: Noooo!\nAi:Waaaah!$"

LandBridgeSouth_EventScript_Ei_Text_2:
	.string "We won't battle just one Pokémon!\nThat's mean!$"

LandBridgeSouth_EventScript_Ei_Text_3:
	.string "You're good.$"

LandBridgeSouth_EventScript_Ai_Text_0:
	.string "I don't really get maths$"

LandBridgeSouth_EventScript_Felipe_Text_0:
	.string "Battle me now!$"

LandBridgeSouth_EventScript_Felipe_Text_1:
	.string "No, I lost!$"
