SydneyCity_MantlesHouse_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SydneyCity_MantlesHouse_OnFrame
	.byte 0

SydneyCity_MantlesHouse_OnFrame::
	map_script_2 VAR_STORY_INTRO_STATE, 2, SydneyCity_MantlesHouse_EventScript_MantleFirstMeeting
	.2byte 0

SydneyCity_MantlesHouse_EventScript_MantleFirstMeeting::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, SydneyCity_MantlesHouse_Movement_WalkUp
	waitmovement 0
	delay 16
	applymovement 2, Common_Movement_WalkInPlaceSlowDown
	waitmovement 0
	msgbox SydneyCity_MantlesHouse_Text_WhatCanIDo, MSGBOX_DEFAULT
	closemessage
	delay 8
	playse SE_PIN
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	delay 24
	msgbox SydneyCity_MantlesHouse_Text_ExcuseMyManners, MSGBOX_DEFAULT
	closemessage
	delay 8
	applymovement 3, Common_Movement_WalkInPlaceSlowUp
	waitmovement 0
	msgbox SydneyCity_MantlesHouse_Text_MyNameIsRival, MSGBOX_DEFAULT
	closemessage
	applymovement 3, Common_Movement_FaceLeft
	waitmovement 0
	msgbox SydneyCity_MantlesHouse_Text_AndThisIsPlayer, MSGBOX_DEFAULT
	closemessage
	applymovement 3, Common_Movement_FaceUp
	waitmovement 0
	delay 8
	applymovement 2, Common_Movement_WalkInPlaceSlowDown
	waitmovement 0
	msgbox SydneyCity_MantlesHouse_Text_ProperlyIntroduceMyself, MSGBOX_DEFAULT
	closemessage
	delay 8
	applymovement 3, Common_Movement_WalkInPlaceSlowUp
	waitmovement 0
	msgbox SydneyCity_MantlesHouse_Text_RivalInterjection, MSGBOX_DEFAULT
	closemessage
	delay 8
	playse SE_PIN
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	delay 24
	msgbox SydneyCity_MantlesHouse_Text_SoSorryForTangent, MSGBOX_DEFAULT
	closemessage
	delay 8
	applymovement 3, Common_Movement_WalkInPlaceSlowUp
	waitmovement 0
	msgbox SydneyCity_MantlesHouse_Text_PleaseGiveAPokemon, MSGBOX_DEFAULT
	closemessage
	delay 8
	applymovement 2, Common_Movement_WalkInPlaceSlowDown
	waitmovement 0
	msgbox SydneyCity_MantlesHouse_Text_GavePokemonToAides, MSGBOX_DEFAULT
	closemessage
	delay 8
	applymovement 3, Common_Movement_WalkInPlaceSlowUp
	waitmovement 0
	msgbox SydneyCity_MantlesHouse_Text_BecomeYourAides, MSGBOX_DEFAULT
	closemessage
	delay 8
	applymovement 2, Common_Movement_WalkInPlaceSlowDown
	waitmovement 0
	msgbox SydneyCity_MantlesHouse_Text_YouCantBeMyAides, MSGBOX_DEFAULT
	closemessage
	delay 24
	applymovement 2, SydneyCity_MantlesHouse_Movement_WalkUp
	waitmovement 0
	delay 24
	removeobject 1
	applymovement 2, SydneyCity_MantlesHouse_Movement_MantleLeave
	delay 16
	applymovement OBJ_EVENT_ID_PLAYER, SydneyCity_MantlesHouse_Movement_PlayerMoveOutOfWay
	waitmovement 2
	playse SE_KAIDAN
	removeobject 2
	delay 16
	applymovement 3, Common_Movement_FaceLeft
	waitmovement 0
	msgbox SydneyCity_MantlesHouse_Text_StargazePointWest, MSGBOX_DEFAULT
	closemessage
	applymovement 3, SydneyCity_MantlesHouse_Movement_RivalLeave
	waitmovement 0
	playse SE_KAIDAN
	removeobject 3
	delay 24
	setvar VAR_STORY_INTRO_STATE, 3
	clearflag FLAG_HIDE_STARGAZE_POINT_MANTLE_RIVAL
	releaseall
	end

SydneyCity_MantlesHouse_Movement_WalkUp:
	walk_up
	step_end

SydneyCity_MantlesHouse_Movement_MantleLeave:
	walk_down
	walk_down
	walk_down
	walk_down
	set_invisible
	step_end

SydneyCity_MantlesHouse_Movement_PlayerMoveOutOfWay:
	walk_left
	face_right
	step_end

SydneyCity_MantlesHouse_Movement_RivalLeave:
	walk_down
	set_invisible
	step_end

SydneyCity_MantlesHouse_Text_WhatCanIDo:
	.string "So, what can I do for you two?$"

SydneyCity_MantlesHouse_Text_ExcuseMyManners:
	.string "Oh, I forgot to ask your names!\n"
	.string "Please do excuse my manners!$"

SydneyCity_MantlesHouse_Text_MyNameIsRival:
	.string "W-well, my name is {RIVAL}!$"

SydneyCity_MantlesHouse_Text_AndThisIsPlayer:
	.string "And this is {PLAYER}, my best friend!$"

SydneyCity_MantlesHouse_Text_ProperlyIntroduceMyself:
	.string "Nice to meet you, {PLAYER} and {RIVAL}!\p"
	.string "It's only polite for me to properly\n"
	.string "introduce myself as well.\p"
	.string "My name is Miller Mantle, and I work\n"
	.string "as a Pokémon researcher!\p"
	.string "To be specific, I study how Pokémon\n"
	.string "adapt to their environments.\l"
	.string "It's really quite an interesting field.\p"
	.string "Did you know that three different forms\n"
	.string "of Meowth can be found across Tomen?$"

SydneyCity_MantlesHouse_Text_RivalInterjection:
	.string "Uh…$"

SydneyCity_MantlesHouse_Text_SoSorryForTangent:
	.string "Oops, so sorry!\p"
	.string "Once I get talking about my research,\n"
	.string "I just can't stop!\p"
	.string "Right!\n"
	.string "Back to the topic at hand!\p"
	.string "What was it you two came here for?$"

SydneyCity_MantlesHouse_Text_PleaseGiveAPokemon:
	.string "We want to compete in the Wisteria\n"
	.string "Tournament, but we have no Pokémon\l"
	.string "to battle with…\p"
	.string "And well, we heard you've been giving\n"
	.string "away Pokémon to people in town…\p"
	.string "Please give us both a Pokémon, too!\p"
	.string "I can speak for both of us when I say\n"
	.string "it would be a dream come true!$"

SydneyCity_MantlesHouse_Text_GavePokemonToAides:
	.string "…It's true that I've been entrusting\n"
	.string "certain people with starter Pokémon.\p"
	.string "But that was to do with my job as\n"
	.string "a Pokémon researcher…\p"
	.string "You see, the people I gave Pokémon\n"
	.string "to were my new aides, who have just\l"
	.string "graduated university.\p"
	.string "I want to help you two, but I can't just\n"
	.string "give away rare Pokémon to any kid who\l"
	.string "walks through my front door…\p"
	.string "Hm…\n"
	.string "What to do…$"

SydneyCity_MantlesHouse_Text_BecomeYourAides:
	.string "So you're only prepared to give Pokémon\n"
	.string "to your colleagues, huh…\p"
	.string "Wait, I know!\n"
	.string "What if {PLAYER} and I become your aides?\p"
	.string "You could give us a Pokémon, and we\n"
	.string "could help with your research!\p"
	.string "That way, everybody benefits!$"

SydneyCity_MantlesHouse_Text_YouCantBeMyAides:
	.string "Sorry {RIVAL}, but it's not quite that\n"
	.string "simple to become an aide.\p"
	.string "You need to go through a recruitment\n"
	.string "process with relevant qualifications…\p"
	.string "However, I still want to reward your\n"
	.string "enthusiasm…\p"
	.string "Very well!\n"
	.string "Follow me to Stargaze Point!$"

SydneyCity_MantlesHouse_Text_StargazePointWest:
	.string "Stargaze Point is to the west of\n"
	.string "town, right?\p"
	.string "I wonder what we're going there for…$"
