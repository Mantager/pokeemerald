DarkRuins_FinalRoom_MapScripts::
	.byte 0

DarkRuins_FinalRoom_EventScript_Arum::
	lock
	faceplayer
	goto_if_set FLAG_OBTAINED_RELIC_CROWN, DarkRuins_FinalRoom_EventScript_ArumReturnToSurface
	msgbox DarkRuins_FinalRoom_Text_ArumIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_ARUM, DarkRuins_FinalRoom_Text_ArumDefeat
	msgbox DarkRuins_FinalRoom_Text_ArumPostBattle, MSGBOX_DEFAULT
	closemessage
	giveitem_std ITEM_RELIC_CROWN, 1
	msgbox DarkRuins_FinalRoom_Text_ArumNext, MSGBOX_DEFAULT
	setflag FLAG_OBTAINED_RELIC_CROWN
	closemessage
	release
	end

DarkRuins_FinalRoom_EventScript_ArumReturnToSurface::
	msgbox DarkRuins_FinalRoom_Text_ArumWantToReturn, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq DarkRuins_FinalRoom_EventScript_ArumTakeYourTime
	msgbox DarkRuins_FinalRoom_Text_ArumLetsGo, MSGBOX_DEFAULT
	closemessage
	setvar VAR_STORY_EVENT_PROGRESS, 9
	setrespawn HEAL_LOCATION_JAM_KEY_MAP
	warp MAP_FARMER_FIELD, 255, 9, 7
	release
	end

DarkRuins_FinalRoom_EventScript_ArumTakeYourTime::
	msgbox DarkRuins_FinalRoom_Text_ArumTakeYourTime, MSGBOX_DEFAULT
	release
	end

DarkRuins_FinalRoom_Text_ArumIntro:
	.string "How incredible!\n"
	.string "You've completed all of my puzzles!\p"
	.string "You are truly interesting, {PLAYER}…\p"
	.string "But you're not just here to complete\n"
	.string "puzzles, are you?\l"
	.string "I promised you a reward…\l"
	.string "But the fun isn't over yet!\n"
	.string "Your final test… is a battle!\p"
	.string "If you can defeat me, then the\n"
	.string "Relic Crown is yours!$"

DarkRuins_FinalRoom_Text_ArumDefeat:
	.string "My, {PLAYER}…\n"
	.string "How strong you are!$"

DarkRuins_FinalRoom_Text_ArumPostBattle:
	.string "Hahaha!\n"
	.string "That battle was the best!\p"
	.string "Not only are you a puzzle genius,\n"
	.string "but you're a seasoned battler too!\p"
	.string "Very well! This is yours!$"

DarkRuins_FinalRoom_Text_ArumNext:
	.string "That is indeed the Relic Crown!\n"
	.string "Take a look at its magnificence!\p"
	.string "It is yours to do whatever you\n"
	.string "please with.\p"
	.string "I was searching for a long time\n"
	.string "for someone who could solve my\l"
	.string "expertly-crafted puzzles.\p"
	.string "And I finally found him.\n"
	.string "That satisifies me.\p"
	.string "Oh, but I'm rambling now.\p"
	.string "Now that the Crown is yours,\n"
	.string "you must be looking to return\l"
	.string "to the surface.\p"
	.string "I'm willing to take you back\n"
	.string "whenever you'd like.\p"
	.string "However, you can't come back,\n"
	.string "so make sure you finish what\l"
	.string "you need to down here.\p"
	.string "Do you understand?\p"
	.string "If there is anything you need\n"
	.string "to still do down here, do it now.$"

DarkRuins_FinalRoom_Text_ArumWantToReturn:
	.string "Would you like to return to the\n"
	.string "surface?$"

DarkRuins_FinalRoom_Text_ArumTakeYourTime:
	.string "Take your time.\n"
	.string "I'm in no rush.$"

DarkRuins_FinalRoom_Text_ArumLetsGo:
	.string "Okay, let's go!$"
