DarkCityEntrance_MapScripts::
	.byte 0

DarkCityEntrance_EventScript_Lu::
	trainerbattle_single TRAINER_LU, DarkCityEntrance_Text_LuIntro, DarkCityEntrance_Text_LuDefeat
	msgbox DarkCityEntrance_Text_LuPostBattle, MSGBOX_AUTOCLOSE
	end

DarkCityEntrance_EventScript_Rue::
	trainerbattle_single TRAINER_RUE, DarkCityEntrance_Text_RueIntro, DarkCityEntrance_Text_RueDefeat
	msgbox DarkCityEntrance_Text_RuePostBattle, MSGBOX_AUTOCLOSE
	end

DarkCityEntrance_EventScript_Guowei::
	trainerbattle_single TRAINER_GUOWEI, DarkCityEntrance_Text_GuoweiIntro, DarkCityEntrance_Text_GuoweiDefeat
	msgbox DarkCityEntrance_Text_GuoweiPostBattle, MSGBOX_AUTOCLOSE
	end

DarkCityEntrance_EventScript_ArumTriggerLeft::
	goto DarkCityEntrance_EventScript_Arum
	end

DarkCityEntrance_EventScript_ArumTriggerMiddleLeft::
	setobjectxy 3, 14, 27
	goto DarkCityEntrance_EventScript_Arum
	end

DarkCityEntrance_EventScript_ArumTriggerMiddleRight::
	setobjectxy 3, 15, 27
	goto DarkCityEntrance_EventScript_Arum
	end

DarkCityEntrance_EventScript_ArumTriggerRight::
	setobjectxy 3, 16, 27
	goto DarkCityEntrance_EventScript_Arum
	end

DarkCityEntrance_EventScript_Arum::
	lockall
	applymovement 3, DarkCityEntrance_Movement_ArumApproach
	waitmovement 0
	delay 8
	msgbox DarkCityEntrance_Text_ArumStrangeSound, MSGBOX_DEFAULT
	closemessage
	delay 25
	msgbox DarkCityEntrance_Text_ArumExplain, MSGBOX_DEFAULT
	closemessage
	delay 25
	msgbox DarkCityEntrance_Text_ArumRelic, MSGBOX_DEFAULT
	closemessage
	applymovement 3, DarkCityEntrance_Movement_ArumLeave
	waitmovement 0
	setvar VAR_STORY_EVENT_PROGRESS, 7
	setflag FLAG_MEET_ARUM_DARK_CITY_ENTRANCE
	removeobject 3
	delay 20
	releaseall
	end

DarkCityEntrance_Movement_ArumApproach:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

DarkCityEntrance_Movement_ArumLeave:
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

DarkCityEntrance_Text_LuIntro:
	.string "Spirits, be gone!$"

DarkCityEntrance_Text_LuDefeat:
	.string "…Am I cursed?$"

DarkCityEntrance_Text_LuPostBattle:
	.string "Everyone can see ghost Pokémon,\n"
	.string "but I can see ghost humans!$"

DarkCityEntrance_Text_RueIntro:
	.string "Yes… I can see it!\n"
	.string "My victory over you!$"

DarkCityEntrance_Text_RueDefeat:
	.string "Am I a false prophet?$"

DarkCityEntrance_Text_RuePostBattle:
	.string "I heard that Xatu can see into\n"
	.string "the future and past simultaneously.\l"
	.string "I want to catch one…$"

DarkCityEntrance_Text_GuoweiIntro:
	.string "Let us engage in combat, young one!$"

DarkCityEntrance_Text_GuoweiDefeat:
	.string "Very good!$"

DarkCityEntrance_Text_GuoweiPostBattle:
	.string "I'm not sure how you made it down\n"
	.string "here, but your skill is commendable.$"

DarkCityEntrance_Text_ArumStrangeSound:
	.string "I heard a strange sound, so I came.\n"
	.string "And look what I've found!\p"
	.string "Where did you come from, son?\p"
	.string "Oh? You fell through the floor in\n"
	.string "the blue Color Ruins? I see…\p"
	.string "My name is Arum.\n"
	.string "And this is the Dark City!$"

DarkCityEntrance_Text_ArumExplain:
	.string "Hm? You look confused.\n"
	.string "Let me explain a little more.\p"
	.string "Many decades ago, our ancestors\n"
	.string "wanted to build a successor to\l"
	.string "the Color Ruins deep underground.\p"
	.string "At the time, there was lots of\n"
	.string "political tension on the surface,\l"
	.string "and everyone was on edge.\p"
	.string "So our ancestors decided to not\n"
	.string "just build a Ruins underground, but\l"
	.string "to build an entire civilisation!\p"
	.string "We're rather isolated from the\n"
	.string "rest of the world down here.\p"
	.string "However, we do have our ways of\n"
	.string "getting back to the surface.\p"
	.string "Anyway, you said you fell through\n"
	.string "the blue Color Ruins, right?\l"
	.string "Why on earth were you in there?$"

DarkCityEntrance_Text_ArumRelic:
	.string "Searching for a golden relic, huh?\n"
	.string "Well, you got lucky, son!\l"
	.string "That old legend is true!\p"
	.string "The Relic Crown has been passed from\n"
	.string "person to person for many centuries.\p"
	.string "I am its current owner!\p"
	.string "If you want to know more, then follow\n"
	.string "me to the Dark City's main chamber!$"
