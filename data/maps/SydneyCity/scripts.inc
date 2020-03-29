SydneyCity_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SydneyCity_OnFrame
	map_script MAP_SCRIPT_ON_TRANSITION, SydneyCity_OnTransition
	.byte 0

SydneyCity_OnFrame::
	map_script_2 VAR_TEMP_F, 0, SydneyCity_EventScript_SetUpStoryScripts
	.2byte 0

SydneyCity_OnTransition::
	compare VAR_STORY_INTRO_STATE, 6
	call_if_ge SydneyCity_EventScript_MoveRoadblockKid
	end

SydneyCity_EventScript_SetUpStoryScripts::
	compare VAR_STORY_INTRO_STATE, 2
	call_if_lt SydneyCity_EventScript_SetRivalInvisibleLockMantleDoor
	compare VAR_STORY_INTRO_STATE, 6
	call_if_lt SydneyCity_EventScript_StopPlayerLeaving
	setvar VAR_TEMP_F, 1
	end

SydneyCity_EventScript_SetRivalInvisibleLockMantleDoor::
	applymovement 7, Common_Movement_SetInvisible
	setmetatile 11, 6, METATILE_Rustboro_LockedDoor, 1
	return

SydneyCity_EventScript_StopPlayerLeaving::
	setvar VAR_TEMP_E, 1
	return

SydneyCity_EventScript_MoveRoadblockKid::
	setobjectxyperm 6, 12, 20
	setobjectmovementtype 6, MOVEMENT_TYPE_WANDER_AROUND
	return

SydneyCity_EventScript_RoadblockKid::
	lock
	faceplayer
	compare VAR_STORY_INTRO_STATE, 3
	call_if_le SydneyCity_EventScript_CantLeaveWithoutPokemon
	compare VAR_STORY_INTRO_STATE, 5
	call_if_eq SydneyCity_EventScript_GoTalkToYourMom
	compare VAR_STORY_INTRO_STATE, 6
	call_if_eq SydneyCity_EventScript_WannaGetPokemonLikeYours
	release
	end

SydneyCity_EventScript_CantLeaveWithoutPokemon::
	msgbox SydneyCity_Text_TooDangerousToLeave, MSGBOX_DEFAULT
	return

SydneyCity_EventScript_GoTalkToYourMom::
	msgbox SydneyCity_Text_TalkToYourMom, MSGBOX_DEFAULT
	return

SydneyCity_EventScript_WannaGetPokemonLikeYours::
	msgbox SydneyCity_Text_GetPokemonLikeYours, MSGBOX_DEFAULT
	return

SydneyCity_EventScript_RoadblockKidTriggerA::
	lockall
	applymovement 6, SydneyCity_Movement_RoadblockKidMoveToPlayerA
	waitmovement 0
	setvar VAR_TEMP_D, 1
	goto SydneyCity_EventScript_RoadblockKidStopPlayer

SydneyCity_EventScript_RoadblockKidTriggerB::
	lockall
	applymovement 6, SydneyCity_Movement_RoadblockKidMoveToPlayerB
	waitmovement 0
	setvar VAR_TEMP_D, 2
	goto SydneyCity_EventScript_RoadblockKidStopPlayer

SydneyCity_EventScript_RoadblockKidTriggerC::
	lockall
	applymovement 6, SydneyCity_Movement_RoadblockKidMoveToPlayerC
	waitmovement 0
	setvar VAR_TEMP_D, 3
	goto SydneyCity_EventScript_RoadblockKidStopPlayer

SydneyCity_EventScript_RoadblockKidTriggerD::
	lockall
	applymovement 6, SydneyCity_Movement_RoadblockKidMoveToPlayerD
	waitmovement 0
	setvar VAR_TEMP_D, 4
	goto SydneyCity_EventScript_RoadblockKidStopPlayer

SydneyCity_EventScript_RoadblockKidTriggerE::
	lockall
	applymovement 6, SydneyCity_Movement_RoadblockKidMoveToPlayerE
	waitmovement 0
	setvar VAR_TEMP_D, 5
	goto SydneyCity_EventScript_RoadblockKidStopPlayer

SydneyCity_EventScript_RoadblockKidTriggerF::
	lockall
	applymovement 6, SydneyCity_Movement_RoadblockKidMoveToPlayerF
	waitmovement 0
	setvar VAR_TEMP_D, 6
	goto SydneyCity_EventScript_RoadblockKidStopPlayer

SydneyCity_EventScript_RoadblockKidStopPlayer::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	compare VAR_STORY_INTRO_STATE, 3
	call_if_le SydneyCity_EventScript_CantLeaveWithoutPokemon
	compare VAR_STORY_INTRO_STATE, 5
	call_if_eq SydneyCity_EventScript_GoTalkToYourMom
	compare VAR_STORY_INTRO_STATE, 6
	call_if_eq SydneyCity_EventScript_WannaGetPokemonLikeYours
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	compare VAR_TEMP_D, 1
	call_if_eq SydneyCity_EventScript_RoadblockKidMoveBackA
	compare VAR_TEMP_D, 2
	call_if_eq SydneyCity_EventScript_RoadblockKidMoveBackB
	compare VAR_TEMP_D, 3
	call_if_eq SydneyCity_EventScript_RoadblockKidMoveBackC
	compare VAR_TEMP_D, 4
	call_if_eq SydneyCity_EventScript_RoadblockKidMoveBackD
	compare VAR_TEMP_D, 5
	call_if_eq SydneyCity_EventScript_RoadblockKidMoveBackE
	compare VAR_TEMP_D, 6
	call_if_eq SydneyCity_EventScript_RoadblockKidMoveBackF
	releaseall
	end

SydneyCity_EventScript_RoadblockKidMoveBackA::
	applymovement 6, SydneyCity_Movement_RoadblockKidMoveBackA
	waitmovement 0
	return

SydneyCity_EventScript_RoadblockKidMoveBackB::
	applymovement 6, SydneyCity_Movement_RoadblockKidMoveBackB
	waitmovement 0
	return

SydneyCity_EventScript_RoadblockKidMoveBackC::
	applymovement 6, SydneyCity_Movement_RoadblockKidMoveBackC
	waitmovement 0
	return

SydneyCity_EventScript_RoadblockKidMoveBackD::
	applymovement 6, SydneyCity_Movement_RoadblockKidMoveBackD
	waitmovement 0
	return

SydneyCity_EventScript_RoadblockKidMoveBackE::
	applymovement 6, SydneyCity_Movement_RoadblockKidMoveBackE
	waitmovement 0
	return

SydneyCity_EventScript_RoadblockKidMoveBackF::
	applymovement 6, SydneyCity_Movement_RoadblockKidMoveBackF
	waitmovement 0
	return

SydneyCity_EventScript_RivalAtMantlesDoor::
	lock
	faceplayer
	msgbox SydneyCity_Text_IllKnockDoor, MSGBOX_DEFAULT
	closemessage
	applymovement 7, Common_Movement_FaceUp
	waitmovement 0
	msgbox SydneyCity_Text_RivalKnocksDoor, MSGBOX_DEFAULT
	closemessage
	delay 24
	msgbox SydneyCity_Text_WhatIsItImBusy, MSGBOX_DEFAULT
	closemessage
	delay 24
	msgbox SydneyCity_Text_SorryToDisturbYou, MSGBOX_DEFAULT
	closemessage
	delay 24
	msgbox SydneyCity_Text_ComeIn, MSGBOX_DEFAULT
	closemessage
	applymovement 7, Common_Movement_FacePlayer
	waitmovement 0
	msgbox SydneyCity_Text_PlayerLetsGo, MSGBOX_DEFAULT
	closemessage
	applymovement 7, Common_Movement_FaceUp
	waitmovement 0
	opendoor 11, 6
	waitdooranim
	applymovement 7, SydneyCity_Movement_RivalEnterMantleHouse
	waitmovement 0
	closedoor 11, 6
	waitdooranim
	setflag FLAG_HIDE_SYDNEY_CITY_RIVAL
	release
	end

SydneyCity_EventScript_SydneyTowerSign::
	msgbox SydneyCity_Text_SydneyTowerSign, MSGBOX_SIGN
	end

SydneyCity_EventScript_SydneyCitySign::
	msgbox SydneyCity_Text_SydneyCitySign, MSGBOX_SIGN
	end

SydneyCity_EventScript_TrainerTipsSign::
	msgbox SydneyCity_Text_TrainerTipsSign, MSGBOX_SIGN
	end

SydneyCity_EventScript_MantleHouseSign::
	msgbox SydneyCity_Text_MantleHouseSign, MSGBOX_SIGN
	end

SydneyCity_EventScript_TechnologyFatGuy::
	lock
	faceplayer
	msgbox SydneyCity_Text_TechnologyIsIncredible, MSGBOX_DEFAULT
	release
	end

SydneyCity_EventScript_SydneyIndustryGuy::
	lock
	faceplayer
	msgbox SydneyCity_Text_SydneyGreatIndustry, MSGBOX_DEFAULT
	release
	end

SydneyCity_EventScript_DojoInfoOldMan::
	lock
	faceplayer
	msgbox SydneyCity_Text_UsedToBeADojo, MSGBOX_DEFAULT
	release
	end

SydneyCity_EventScript_GameboyKid::
	lock
	faceplayer
	msgbox SydneyCity_Text_PracticeBattlingWithGameboy, MSGBOX_DEFAULT
	release
	end

SydneyCity_EventScript_Fisherman::
	lock
	faceplayer
	msgbox SydneyCity_Text_ThisSpotGoodForFishing, MSGBOX_DEFAULT
	release
	end

SydneyCity_Movement_RoadblockKidMoveToPlayerA:
	face_down
	delay_8
	disable_jump_landing_ground_effect
	jump_in_place_down
	delay_8
	step_end

SydneyCity_Movement_RoadblockKidMoveToPlayerB:
	face_down
	delay_8
	disable_jump_landing_ground_effect
	jump_in_place_down
	delay_8
	walk_fast_down
	step_end

SydneyCity_Movement_RoadblockKidMoveToPlayerC:
	face_down
	delay_8
	disable_jump_landing_ground_effect
	jump_in_place_down
	delay_8
	walk_fast_down
	walk_fast_down
	step_end

SydneyCity_Movement_RoadblockKidMoveToPlayerD:
	face_down
	delay_8
	disable_jump_landing_ground_effect
	jump_in_place_down
	delay_8
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

SydneyCity_Movement_RoadblockKidMoveToPlayerE:
	face_down
	delay_8
	disable_jump_landing_ground_effect
	jump_in_place_down
	delay_8
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

SydneyCity_Movement_RoadblockKidMoveToPlayerF:
	face_down
	delay_8
	disable_jump_landing_ground_effect
	jump_in_place_down
	delay_8
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

SydneyCity_Movement_RoadblockKidMoveBackA:
	face_down
	step_end

SydneyCity_Movement_RoadblockKidMoveBackB:
	walk_up
	face_down
	step_end

SydneyCity_Movement_RoadblockKidMoveBackC:
	walk_up
	walk_up
	face_down
	step_end

SydneyCity_Movement_RoadblockKidMoveBackD:
	walk_up
	walk_up
	walk_up
	face_down
	step_end

SydneyCity_Movement_RoadblockKidMoveBackE:
	walk_up
	walk_up
	walk_up
	walk_up
	face_down
	step_end

SydneyCity_Movement_RoadblockKidMoveBackF:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	face_down
	step_end

SydneyCity_Movement_RivalEnterMantleHouse:
	walk_up
	set_invisible
	step_end

SydneyCity_Text_SydneyTowerSign:
	.string "Sydney Tower$"

SydneyCity_Text_SydneyCitySign:
	.string "Sydney City\n"
	.string "Star-shrouded city.$"

SydneyCity_Text_TrainerTipsSign:
	.string "Trainer Tips!\p"
	.string "Many Pokémon learn moves upon\n"
	.string "evolving, no matter the level!\p"
	.string "Therefore, you never have to worry\n"
	.string "about your Pokémon gaining too many\l"
	.string "levels at once.$"

SydneyCity_Text_MantleHouseSign:
	.string "Residence of Dr. Miller Mantle$"

SydneyCity_Text_TooDangerousToLeave:
	.string "W-w-wait!\n"
	.string "You don't have a Pokémon, do you?\p"
	.string "It's too dangerous to leave without a\n"
	.string "Pokémon with you.$"

SydneyCity_Text_TalkToYourMom:
	.string "You've got a Pokémon, huh?\n"
	.string "W-wow! So cool…\p"
	.string "I'm sure your mom would love to see\n"
	.string "your new Pokémon!\p"
	.string "You ought to go see her before you\n"
	.string "leave!$"

SydneyCity_Text_GetPokemonLikeYours:
	.string "I wanna get a Pokémon just like yours!$"

SydneyCity_Text_IllKnockDoor:
	.string "Okay, I'll knock the door.$"

SydneyCity_Text_RivalKnocksDoor:
	.string "H-hello!\n"
	.string "Is this Dr. Mantle's house?$"

SydneyCity_Text_WhatIsItImBusy:
	.string "That's right!\n"
	.string "This is Dr. Mantle speaking.\p"
	.string "Anyway, what's up?\n"
	.string "I'm pretty busy right now!$"

SydneyCity_Text_SorryToDisturbYou:
	.string "S-sorry to disturb you!\p"
	.string "But my friend and I have something\n"
	.string "very important to ask you!\p"
	.string "Could we come in?\n"
	.string "Please?$"

SydneyCity_Text_ComeIn:
	.string "Important, you say?\n"
	.string "Hm… I'm interested now!\l"
	.string "Come in, then!$"

SydneyCity_Text_PlayerLetsGo:
	.string "Let's go, {PLAYER}!\n"
	.string "I hope this works!$"

SydneyCity_Text_TechnologyIsIncredible:
	.string "Technology is incredible!\p"
	.string "But you knew that, right?\n"
	.string "Wahahaha!$"

SydneyCity_Text_SydneyGreatIndustry:
	.string "Sydney City is a great contributor\n"
	.string "to Tomen's tech industry, you know!\p"
	.string "You may not realise it, but in those\n"
	.string "tall buildings are many companies\l"
	.string "developing useful products.$"

SydneyCity_Text_UsedToBeADojo:
	.string "There used to be a dojo in this city.\n"
	.string "I trained there when I was a child.\p"
	.string "Back in the day, it was a popular\n"
	.string "place to learn how to battle Pokémon.\p"
	.string "It shut down many years ago, but I\n"
	.string "have fond memories of my time there.$"

SydneyCity_Text_PracticeBattlingWithGameboy:
	.string "I can win lots of battles in this game,\n"
	.string "but I always seem to lose whenever\l"
	.string "I battle for real…$"

SydneyCity_Text_ThisSpotGoodForFishing:
	.string "Yo, kiddo!\p"
	.string "If you acquire a fishing Rod, be sure\n"
	.string "to come back here and try it out.\p"
	.string "You won't be disappointed!$"
