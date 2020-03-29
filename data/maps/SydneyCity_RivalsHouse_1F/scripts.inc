SydneyCity_RivalsHouse_1F_MapScripts::
	.byte 0

SydneyCity_RivalsHouse_1F_EventScript_RivalsDad::
	lock
	faceplayer
	compare VAR_STORY_INTRO_STATE, 1
	goto_if_le SydneyCity_RivalsHouse_1F_EventScript_BeforeMeetingRival
	compare VAR_STORY_INTRO_STATE, 2
	goto_if_le SydneyCity_RivalsHouse_1F_EventScript_BeforeStarter
	compare VAR_STORY_INTRO_STATE, 5
	goto_if_le SydneyCity_RivalsHouse_1F_EventScript_AfterStarter
	release
	end

SydneyCity_RivalsHouse_1F_EventScript_BeforeMeetingRival::
	msgbox SydneyCity_RivalsHouse_1F_Text_LookingForRival, MSGBOX_DEFAULT
	release
	end

SydneyCity_RivalsHouse_1F_EventScript_BeforeStarter::
	msgbox SydneyCity_RivalsHouse_1F_Text_GoneToGetPokemon, MSGBOX_DEFAULT
	release
	end

SydneyCity_RivalsHouse_1F_EventScript_AfterStarter::
	msgbox SydneyCity_RivalsHouse_1F_Text_RivalLeftInHurry, MSGBOX_DEFAULT
	release
	end

SydneyCity_RivalsHouse_1F_Text_LookingForRival:
	.string "Oh, {PLAYER}.\n"
	.string "Looking for {RIVAL}?\l"
	.string "He's upstairs.$"

SydneyCity_RivalsHouse_1F_Text_GoneToGetPokemon:
	.string "That boy of mine…\n"
	.string "He said he was going to get a Pokémon\l"
	.string "and then he bolted.\p"
	.string "I wish he could tell me where he's\n"
	.string "going before he shoots off like that!$"

SydneyCity_RivalsHouse_1F_Text_RivalLeftInHurry:
	.string "{RIVAL} showed me his new Pokémon,\n"
	.string "said he was going on a journey,\l"
	.string "and then left as quick as he arrived.\p"
	.string "If you're also going on a journey, go\n"
	.string "and see your mom before you leave!$"
