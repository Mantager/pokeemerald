SydneyCity_RivalsHouse_2F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SydneyCity_RivalsHouse_2F_OnFrame
	.byte 0

SydneyCity_RivalsHouse_2F_OnFrame::
	map_script_2 VAR_STORY_INTRO_STATE, 1, SydneyCity_RivalsHouse_2F_EventScript_Rival
	.2byte 0

SydneyCity_RivalsHouse_2F_EventScript_Rival::
	lockall
	applymovement 1, Common_Movement_FaceRight
	waitmovement 0
	delay 8
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	delay 8
	msgbox SydneyCity_RivalsHouse_2F_Text_ThereYouAre
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, SydneyCity_RivalsHouse_2F_Movement_PlayerMoveToRival
	waitmovement 0
	applymovement 1, Common_Movement_FaceUp
	waitmovement 0
	delay 8
	playbgm MUS_INTER_V, 0
	msgbox SydneyCity_RivalsHouse_2F_Text_TVAnnouncement, MSGBOX_DEFAULT
	closemessage
	delay 8
	msgbox SydneyCity_RivalsHouse_2F_Text_DurianInterview, MSGBOX_DEFAULT
	closemessage
	fadedefaultbgm
	delay 24
	applymovement 1, Common_Movement_FaceRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	msgbox SydneyCity_RivalsHouse_2F_Text_LetsEnter, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox SydneyCity_RivalsHouse_2F_Text_WeDontHavePokemon, MSGBOX_DEFAULT
	closemessage
	applymovement 1, SydneyCity_RivalsHouse_2F_Movement_RivalLeave
	waitmovement 0
	removeobject 1
	playse SE_KAIDAN
	setvar VAR_STORY_INTRO_STATE, 2
	clearflag FLAG_SYDNEY_CITY_RIVAL_INVISIBLE
	releaseall
	end

SydneyCity_RivalsHouse_2F_Movement_PlayerMoveToRival:
	walk_down
	walk_left
	walk_left
	face_up
	step_end

SydneyCity_RivalsHouse_2F_Movement_RivalLeave:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_up
	delay_8
	step_end

SydneyCity_RivalsHouse_2F_Text_ThereYouAre:
	.string "{PLAYER}! There you are!\n"
	.string "Hey, check this out!$"

SydneyCity_RivalsHouse_2F_Text_TVAnnouncement:
	.string "The Wisteria Tournament!\p"
	.string "An annual tournament that aims\n"
	.string "to find the best Trainer in Tomen!\p"
	.string "Registrations are now open for the\n"
	.string "Wisteria Tournament's qualifiers.\p"
	.string "This year's lead commentor, DJ Durian,\n"
	.string "is here to give more information!$"

SydneyCity_RivalsHouse_2F_Text_DurianInterview:
	.string "Yeah! Trainers!\p"
	.string "I wanna see your passion burn across\n"
	.string "the battlefield, woooo!\p"
	.string "So go and register for the qualifiers\n"
	.string "and show everyone what you're made of!\p"
	.string "This year, I want the competition to\n"
	.string "really WOW everybody watching!$"

SydneyCity_RivalsHouse_2F_Text_LetsEnter:
	.string "Man, we've gotta enter!\p"
	.string "We've always dreamed of being strong\n"
	.string "Trainers, right?\p"
	.string "Then it's settled!\n"
	.string "Let's enter!$"

SydneyCity_RivalsHouse_2F_Text_WeDontHavePokemon:
	.string "What?\n"
	.string "We don't have any Pokémon?\p"
	.string "Oh yeah.\n"
	.string "That may be a problem.\p"
	.string "But I've got an idea, so listen up!\p"
	.string "You know that Dr. Mantle guy who\n"
	.string "lives behind your place?\p"
	.string "He's always giving Pokémon out to\n"
	.string "Trainers, I heard.\p"
	.string "I'm sure there's some kind of catch,\n"
	.string "but he's sure to give us a Pokémon!\p"
	.string "Right! Okay!\n"
	.string "Meet you outside Dr. Mantle's house!$"
