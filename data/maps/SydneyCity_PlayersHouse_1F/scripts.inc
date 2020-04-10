SydneyCity_PlayersHouse_1F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SydneyCity_PlayersHouse_1F_OnFrame
	.byte 0

SydneyCity_PlayersHouse_1F_OnFrame::
	map_script_2 VAR_STORY_INTRO_STATE, 0, SydneyCity_PlayersHouse_1F_EventScript_MomIntro
	.2byte 0

SydneyCity_PlayersHouse_1F_EventScript_MomIntro::
	setrespawn HEAL_LOCATION_SYDNEY_CITY_PLAYERS_HOUSE_2F
	lockall
	applymovement 1, Common_Movement_FaceUp
	waitmovement 0
	delay 8
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	delay 8
	msgbox SydneyCity_PlayersHouse_1F_Text_OhPlayer, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_RG_ANNAI, 0
	applymovement 1, SydneyCity_PlayersHouse_1F_Movement_MomMoveToPlayer
	waitmovement 0
	msgbox SydneyCity_PlayersHouse_1F_Text_RivalCameBy, MSGBOX_DEFAULT
	closemessage
	delay 8
	applymovement 1, SydneyCity_PlayersHouse_1F_Movement_MomMoveBack
	waitmovement 0
	setvar VAR_STORY_INTRO_STATE, 1
	fadedefaultbgm
	releaseall
	end

SydneyCity_PlayersHouse_1F_EventScript_Mom::
	lock
	faceplayer
	compare VAR_STORY_INTRO_STATE, 1
	goto_if_le SydneyCity_PlayersHouse_1F_EventScript_MomBeforeMeetingRival
	compare VAR_STORY_INTRO_STATE, 5
	goto_if_le SydneyCity_PlayersHouse_1F_EventScript_MomAfterStarter
	compare VAR_STORY_INTRO_STATE, 6
	goto_if_le SydneyCity_PlayersHouse_1F_EventScript_MomJourneyStarted
	release
	end

SydneyCity_PlayersHouse_1F_EventScript_MomBeforeMeetingRival::
	msgbox SydneyCity_PlayersHouse_1F_Text_WonderWhyRivalCame, MSGBOX_DEFAULT
	release
	end

SydneyCity_PlayersHouse_1F_EventScript_MomAfterStarter::
	msgbox SydneyCity_PlayersHouse_1F_Text_CompetingInTournament, MSGBOX_DEFAULT
	closemessage
	delay 8
	msgbox SydneyCity_PlayersHouse_1F_Text_AnywayTakeThis, MSGBOX_DEFAULT
	closemessage
	delay 8
	giveitem ITEM_POKE_BALL, 5
	msgbox SydneyCity_PlayersHouse_1F_Text_GoToFableSquare, MSGBOX_DEFAULT
	closemessage
	setvar VAR_STORY_INTRO_STATE, 6
	release
	end

SydneyCity_PlayersHouse_1F_EventScript_MomJourneyStarted::
	msgbox SydneyCity_PlayersHouse_1F_Text_RestAWhile, MSGBOX_DEFAULT
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	incrementgamestat GAME_STAT_RESTED_AT_HOME
	msgbox SydneyCity_PlayersHouse_1F_Text_TakeCare, MSGBOX_DEFAULT
	release
	end

SydneyCity_PlayersHouse_1F_Movement_MomMoveToPlayer:
	walk_up
	walk_right
	walk_right
	walk_up
	walk_right
	face_up
	step_end

SydneyCity_PlayersHouse_1F_Movement_MomMoveBack:
	walk_left
	walk_down
	walk_left
	walk_left
	walk_down
	face_left
	step_end

SydneyCity_PlayersHouse_1F_Text_OhPlayer:
	.string "Oh, {PLAYER}!$"

SydneyCity_PlayersHouse_1F_Text_RivalCameBy:
	.string "{RIVAL} came by earlier, but you were\n"
	.string "fast asleep…\l"
	.string "You should go see what he wanted.\p"
	.string "You remember where {RIVAL} lives,\n"
	.string "don't you, dear?\p"
	.string "His house is in the north of town,\n"
	.string "near the Pokémon Center.$"

SydneyCity_PlayersHouse_1F_Text_WonderWhyRivalCame:
	.string "{RIVAL} seemed to be in a hurry when\n"
	.string "he came here earlier.\p"
	.string "I suppose it must've been important,\n"
	.string "as he looked pretty excited.$"

SydneyCity_PlayersHouse_1F_Text_CompetingInTournament:
	.string "Huh? Dr. Mantle gave you a Pokémon?\p"
	.string "And now you're going to enter the\n"
	.string "Sting Tournament?\p"
	.string "That's great, {PLAYER}!\n"
	.string "I'm not shocked, though.\p"
	.string "Your dad was a strong Trainer, so\n"
	.string "I wasn't expecting any less from you!\p"
	.string "But you know, if you're really going\n"
	.string "to compete, you'll need to travel\l"
	.string "all around Tomen.\p"
	.string "I don't mind, of course.\p"
	.string "When I was your age, I went on a\n"
	.string "journey around Tomen myself.\p"
	.string "Back in those days, the old Gym system\n"
	.string "was in place, though.$"

SydneyCity_PlayersHouse_1F_Text_AnywayTakeThis:
	.string "Anyway, before you go, take these\n"
	.string "Poké Balls as a gift from me.$"

SydneyCity_PlayersHouse_1F_Text_GoToFableSquare:
	.string "By the way, I heard from a friend\n"
	.string "that you can register for the\l"
	.string "tournament in Fable Square.\p"
	.string "To get to Fable Square, just head\n"
	.string "east and go through Route 1.\p"
	.string "I can't deny that I'm a little\n"
	.string "worried about you leaving…\l"
	.string "But worrying is just what moms do.\p"
	.string "Feel free to come back home and\n"
	.string "rest any time you want.\p"
	.string "I want to see if you've caught any\n"
	.string "cute Pokémon, too!\p"
	.string "Well, goodbye, dear!\n"
	.string "Stay safe!$"

SydneyCity_PlayersHouse_1F_Text_RestAWhile:
	.string "It's good to see you, dear.\n"
	.string "Are you weary from your travels?\l"
	.string "You should take a rest.$"

SydneyCity_PlayersHouse_1F_Text_TakeCare:
	.string "Take care of yourself, dear.$"
