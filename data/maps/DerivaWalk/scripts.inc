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
	trainerbattle_single TRAINER_G2_MEGAN, DerivaWalk_EventScript_Megan_Text_0, DerivaWalk_EventScript_Megan_Text_1
	msgbox DerivaWalk_EventScript_Megan_Text_2
	release
	end


DerivaWalk_EventScript_Federico::
	trainerbattle_single TRAINER_G2_FEDERICO, DerivaWalk_EventScript_Federico_Text_0, DerivaWalk_EventScript_Federico_Text_1
	msgbox DerivaWalk_EventScript_Federico_Text_2
	release
	end


DerivaWalk_EventScript_Vincent::
	trainerbattle_single TRAINER_G2_VINCENT, DerivaWalk_EventScript_Vincent_Text_0, DerivaWalk_EventScript_Vincent_Text_1
	msgbox DerivaWalk_EventScript_Vincent_Text_2
	release
	end


DerivaWalk_EventScript_Nakia::
	trainerbattle_single TRAINER_G2_NAKIA, DerivaWalk_EventScript_Nakia_Text_0, DerivaWalk_EventScript_Nakia_Text_1
	msgbox DerivaWalk_EventScript_Nakia_Text_2
	release
	end


DerivaWalk_EventScript_Yan::
	trainerbattle_double TRAINER_G2_YAN_AND_IVO, DerivaWalk_EventScript_Yan_Text_0, DerivaWalk_EventScript_Yan_Text_1, DerivaWalk_EventScript_Yan_Text_2
	msgbox DerivaWalk_EventScript_Yan_Text_3
	release
	end


DerivaWalk_EventScript_Ivo::
	trainerbattle_double TRAINER_G2_YAN_AND_IVO, DerivaWalk_EventScript_Ivo_Text_0, DerivaWalk_EventScript_Yan_Text_1, DerivaWalk_EventScript_Ivo_Text_1
	msgbox DerivaWalk_EventScript_Ivo_Text_2
	release
	end


DerivaWalk_EventScript_Maikel::
	trainerbattle_single TRAINER_G2_MAIKEL, DerivaWalk_EventScript_Maikel_Text_0, DerivaWalk_EventScript_Maikel_Text_1
	msgbox DerivaWalk_EventScript_Maikel_Text_2
	release
	end


DerivaWalk_Trigger_FernEvent::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
	waitmovement 0
	msgbox DerivaWalk_Trigger_FernEvent_Text_0
	delay 8
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	msgbox DerivaWalk_Trigger_FernEvent_Text_1
	delay 8
	msgbox DerivaWalk_Trigger_FernEvent_Text_2
	delay 8
	applymovement 1, Common_Movement_FaceLeft
	waitmovement 0
	msgbox DerivaWalk_Trigger_FernEvent_Text_3
	closemessage
	delay 8
	msgbox DerivaWalk_Trigger_FernEvent_Text_4
	msgbox DerivaWalk_Trigger_FernEvent_Text_5
	applymovement 1, Common_Movement_FaceDown
	msgbox DerivaWalk_Trigger_FernEvent_Text_6
	msgbox DerivaWalk_Trigger_FernEvent_Text_7
	msgbox DerivaWalk_Trigger_FernEvent_Text_8
	msgbox DerivaWalk_Trigger_FernEvent_Text_9
	msgbox DerivaWalk_Trigger_FernEvent_Text_10
	msgbox DerivaWalk_Trigger_FernEvent_Text_11
	msgbox DerivaWalk_Trigger_FernEvent_Text_12
	msgbox DerivaWalk_Trigger_FernEvent_Text_13
	msgbox DerivaWalk_Trigger_FernEvent_Text_14
	msgbox DerivaWalk_Trigger_FernEvent_Text_15
	msgbox DerivaWalk_Trigger_FernEvent_Text_16
	trainerbattle_no_intro TRAINER_G2_FERN, DerivaWalk_Trigger_FernEvent_Text_17
	msgbox DerivaWalk_Trigger_FernEvent_Text_18
	msgbox DerivaWalk_Trigger_FernEvent_Text_19
	msgbox DerivaWalk_Trigger_FernEvent_Text_20
	msgbox DerivaWalk_Trigger_FernEvent_Text_21
	msgbox DerivaWalk_Trigger_FernEvent_Text_22
	msgbox DerivaWalk_Trigger_FernEvent_Text_23
	msgbox DerivaWalk_Trigger_FernEvent_Text_24
	closemessage
	fadescreen 1
	removeobject 1
	setflag FLAG_DERIVA_WALK_HIDE_FERN
	setflag FLAG_ORO_TOWN_HIDE_MALIMO
	setflag FLAG_ORO_TOWN_HIDE_RYAN
	setvar VAR_YANURAS_TOWN_STATE, 4
	fadescreen 0
	releaseall
	end


DerivaWalk_EventScript_Josefina_Text_0:
	.string "If I win, I'll push you in the river!$"

DerivaWalk_EventScript_Josefina_Text_1:
	.string "Aw, I lost.$"

DerivaWalk_EventScript_Josefina_Text_2:
	.string "Some people like to swim on\nthe back of a Pokémon, but in my\lopinion it's better by yourself.$"

DerivaWalk_EventScript_Emilio_Text_0:
	.string "A battle, huh?\pI was just about to take a swim,\nbut I guess I can have a quick match.$"

DerivaWalk_EventScript_Emilio_Text_1:
	.string "You just got lucky.$"

DerivaWalk_EventScript_Emilio_Text_2:
	.string "Swimming is great exercise.\pBut as a triathlete, I participate\nin lots of sports.$"

DerivaWalk_EventScript_Megan_Text_0:
	.string "Ah, you wish to battle?\nVery well, if we must.$"

DerivaWalk_EventScript_Megan_Text_1:
	.string "Petilil, Lilligant…\nYou did well.$"

DerivaWalk_EventScript_Megan_Text_2:
	.string "One day, a Pokémon League will open\nin Ríota.\pI'd like to become a Grass-type\nGym Leader.$"

DerivaWalk_EventScript_Federico_Text_0:
	.string "Singing by the river,\nrocking by the water!$"

DerivaWalk_EventScript_Federico_Text_1:
	.string "I'm not singing now, that's for sure.$"

DerivaWalk_EventScript_Federico_Text_2:
	.string "How am I meant to perform now\nyou've knocked out my bandmates?$"

DerivaWalk_EventScript_Vincent_Text_0:
	.string "I came from Oro Town to catch\nsome rare Pokémon!\pBut now, I want to fight you!$"

DerivaWalk_EventScript_Vincent_Text_1:
	.string "No way!\nYou cheated!$"

DerivaWalk_EventScript_Vincent_Text_2:
	.string "Now I've gotta go back to\nOro Town to restore my Pokémon's HP…$"

DerivaWalk_EventScript_Nakia_Text_0:
	.string "My, a Trainer has approached me.\nIs this 'fate'?$"

DerivaWalk_EventScript_Nakia_Text_1:
	.string "Is this too 'fate'?$"

DerivaWalk_EventScript_Nakia_Text_2:
	.string "It is my solemn belief that all\nbeings are guided by fate.\pEverything happens for a reason.$"

DerivaWalk_EventScript_Yan_Text_0:
	.string "Ivo, let's wash this Trainer\naway!$"

DerivaWalk_EventScript_Yan_Text_1:
	.string "Yan: I'm awash with embarassment!\nIvo: Sis, it's not that bad.$"

DerivaWalk_EventScript_Yan_Text_2:
	.string "We can't battle unless you've\ngot two Pokémon with you.$"

DerivaWalk_EventScript_Yan_Text_3:
	.string "I want to get stronger, but\nI feel like my brother plays\laround in battle too much.$"

DerivaWalk_EventScript_Ivo_Text_0:
	.string "Ivo: Oh, Yan, here comes a\nTrainer.$"

DerivaWalk_EventScript_Ivo_Text_1:
	.string "We're partners, so if you want\nto battle, you'll need two Pokémon.$"

DerivaWalk_EventScript_Ivo_Text_2:
	.string "Hopefully I can be as good as you\none day.$"

DerivaWalk_EventScript_Maikel_Text_0:
	.string "Blub blub blub…\nI'm pretending to be a fish Pokémon.$"

DerivaWalk_EventScript_Maikel_Text_1:
	.string "Glubber… glubber…$"

DerivaWalk_EventScript_Maikel_Text_2:
	.string "You're strong enough to drown even\na sprightly fish like me…$"

DerivaWalk_Trigger_FernEvent_Text_0:
	.string "Fern!$"

DerivaWalk_Trigger_FernEvent_Text_1:
	.string "{COLOR}{RED}Clad…\nI…$"

DerivaWalk_Trigger_FernEvent_Text_2:
	.string "I'm glad I could find you…\nI saw Nas earlier.\lWhat did he do to you?$"

DerivaWalk_Trigger_FernEvent_Text_3:
	.string "{COLOR}{RED}He… just pushed me around a bit.\pI'm so sick of it, Clad…\nThe constant trouble I get put in…$"

DerivaWalk_Trigger_FernEvent_Text_4:
	.string "{COLOR}{RED}Nas is so horrible to me!\nI can't help being different.\pI wear what I want, and\nI speak how I always have.\pI don't see how it's such\nan issue that I'm so feminine.$"

DerivaWalk_Trigger_FernEvent_Text_5:
	.string "It's not an issue, man.$"

DerivaWalk_Trigger_FernEvent_Text_6:
	.string "{COLOR}{RED}Then why?!\nWhy can't that guy leave me alone?!\pIt's not like I don't try and\nstand up for myself.\pEvery time he sees me I\nget a kicking…$"

DerivaWalk_Trigger_FernEvent_Text_7:
	.string "… …\n… …$"

DerivaWalk_Trigger_FernEvent_Text_8:
	.string "{COLOR}{RED}Sorry, Clad.$"

DerivaWalk_Trigger_FernEvent_Text_9:
	.string "What for?$"

DerivaWalk_Trigger_FernEvent_Text_10:
	.string "{COLOR}{RED}I know it's ugly of me\nto cry like this…$"

DerivaWalk_Trigger_FernEvent_Text_11:
	.string "It's not you, man.\pI'm just…\lnot good with things like this.\pI think… we need to deal\nwith Nas once and for all.\pHe's been picking on you since\nwe started secondary school.$"

DerivaWalk_Trigger_FernEvent_Text_12:
	.string "{COLOR}{RED}I just want to escape from him…\nHe brings trouble everywhere.$"

DerivaWalk_Trigger_FernEvent_Text_13:
	.string "Yeah…$"

DerivaWalk_Trigger_FernEvent_Text_14:
	.string "{COLOR}{RED}Y'know what, Clad?\nI'd like a battle.\lIt'll clear my head.$"

DerivaWalk_Trigger_FernEvent_Text_15:
	.string "Now that's something I can help\nyou with, buddy.$"

DerivaWalk_Trigger_FernEvent_Text_16:
	.string "{COLOR}{RED}Wahey!\nI knew you'd be up for it!\pLet's start right away!$"

DerivaWalk_Trigger_FernEvent_Text_17:
	.string "You creamed me!$"

DerivaWalk_Trigger_FernEvent_Text_18:
	.string "{COLOR}{RED}You always were the best of us\nwhen it came to battling!\lY'know what, I feel a lot better.$"

DerivaWalk_Trigger_FernEvent_Text_19:
	.string "Glad to hear it.$"

DerivaWalk_Trigger_FernEvent_Text_20:
	.string "{COLOR}{RED}Well, I'm gonna head over to Oro Town!$"

DerivaWalk_Trigger_FernEvent_Text_21:
	.string "Huh?\nWhat about the others, Fern?$"

DerivaWalk_Trigger_FernEvent_Text_22:
	.string "{COLOR}{RED}I'll text Malimo and Rye to meet\nus at Oro Town.\pI'm sure they aren't far from here\nnow, anyways.$"

DerivaWalk_Trigger_FernEvent_Text_23:
	.string "Okay.\nSee you then.$"

DerivaWalk_Trigger_FernEvent_Text_24:
	.string "{COLOR}{RED}Bye-bye!\nSee you in a bit!$"
