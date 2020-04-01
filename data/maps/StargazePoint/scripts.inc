.equ PLAYER_STARTER_SPECIES,  VAR_TEMP_E

StargazePoint_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, StargazePoint_OnTransition
	.byte 0

StargazePoint_OnTransition::
	compare VAR_STORY_INTRO_STATE, 4
	call_if_lt StargazePoint_EventScript_HideMantleRival
	compare VAR_STORY_INTRO_STATE, 4
	call_if_eq StargazePoint_EventScript_SetUpMantleRivalPosition
	compare VAR_STORY_INTRO_STATE, 5
	call_if_gt StargazePoint_EventScript_HideMantleRival
	end

StargazePoint_EventScript_HideMantleRival::
	setobjectxy 1, 17, 6
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	return

StargazePoint_EventScript_SetUpMantleRivalPosition::
	setobjectxy 1, 18, 8
	applymovement 1, Common_Movement_FaceUp
	setobjectxy 2, 16, 6
	applymovement 2, Common_Movement_FaceUp
	return

StargazePoint_EventScript_FlowerShopSign::
	msgbox StargazePoint_Text_FlowerShopSign, MSGBOX_SIGN
	end

StargazePoint_EventScript_Mantle::
	lock
	faceplayer
	msgbox StargazePoint_Text_WhereAreYouGoing, MSGBOX_DEFAULT
	release
	end

StargazePoint_EventScript_Rival::
	lock
	faceplayer
	compare VAR_STORY_INTRO_STATE, 4
	goto_if_eq StargazePoint_EventScript_RivalWhileChoosing
	msgbox StargazePoint_Text_WonderWhyHere, MSGBOX_DEFAULT
	release
	end

StargazePoint_EventScript_RivalWhileChoosing::
	msgbox StargazePoint_Text_GoAndPickAlready, MSGBOX_DEFAULT
	release
	end

StargazePoint_EventScript_TriggerCantLeave::
	lockall
	applymovement 1, Common_Movement_FaceLeft
	waitmovement 0
	msgbox StargazePoint_Text_WhereAreYouGoing, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, StargazePoint_Movement_WalkUp
	waitmovement 0
	applymovement 1, Common_Movement_FaceUp
	waitmovement 0
	releaseall
	end

StargazePoint_EventScript_TriggerStarterEventLeft::
	lockall
	setvar VAR_TEMP_F, 1
	goto StargazePoint_EventScript_MantleNoticePlayer
	end

StargazePoint_EventScript_TriggerStarterEventRight::
	lockall
	setvar VAR_TEMP_F, 2
	goto StargazePoint_EventScript_MantleNoticePlayer
	end

StargazePoint_EventScript_MantleNoticePlayer::
	applymovement 1, Common_Movement_WalkInPlaceSlowDown
	waitmovement 0
	msgbox StargazePoint_Text_AhYouMadeIt, MSGBOX_DEFAULT
	closemessage
	compare VAR_TEMP_F, 1
	goto_if_eq StargazePoint_EventScript_PlayerFaceUp
	compare VAR_TEMP_F, 2
	goto_if_eq StargazePoint_EventScript_PlayerFaceUpLeft
	end

StargazePoint_EventScript_PlayerFaceUp::
	applymovement OBJ_EVENT_ID_PLAYER, StargazePoint_Movement_FaceUp
	waitmovement 0
	goto StargazePoint_EventScript_MantleExplainReasons
	end

StargazePoint_EventScript_PlayerFaceUpLeft::
	applymovement OBJ_EVENT_ID_PLAYER, StargazePoint_Movement_FaceUpLeft
	waitmovement 0
	goto StargazePoint_EventScript_MantleExplainReasons
	end

StargazePoint_EventScript_MantleExplainReasons:
	applymovement 2, Common_Movement_FaceUp
	waitmovement 0
	delay 16
	msgbox StargazePoint_Text_WhyDidYouCallUs, MSGBOX_DEFAULT
	closemessage
	delay 8
	applymovement 1, Common_Movement_WalkInPlaceSlowDown
	msgbox StargazePoint_Text_CantBecomeAidesBut, MSGBOX_DEFAULT
	closemessage
	delay 8
	applymovement 2, Common_Movement_WalkInPlaceSlowUp
	msgbox StargazePoint_Text_ThatsANoBrainer, MSGBOX_DEFAULT
	closemessage
	applymovement 2, Common_Movement_FaceRight
	msgbox StargazePoint_Text_RightPlayer, MSGBOX_DEFAULT
	closemessage
	applymovement 2, Common_Movement_FaceUp
	waitmovement 0
	delay 8
	applymovement 1, Common_Movement_WalkInPlaceSlowDown
	msgbox StargazePoint_Text_ThenItsSettled, MSGBOX_DEFAULT
	closemessage
	delay 8
	applymovement 1, StargazePoint_Movement_SetOutStarterA
	waitmovement 0
	addobject 9
	showmonpic SPECIES_CHESPIN, 10, 3
	playmoncry SPECIES_CHESPIN, 0
	msgbox StargazePoint_Text_GrassPokemonChespin, MSGBOX_DEFAULT
	waitmoncry
	closemessage
	hidemonpic
	delay 16
	applymovement 1, StargazePoint_Movement_SetOutStarterB
	waitmovement 0
	addobject 10
	showmonpic SPECIES_FENNEKIN, 10, 3
	playmoncry SPECIES_FENNEKIN, 0
	msgbox StargazePoint_Text_FirePokemonFennekin, MSGBOX_DEFAULT
	waitmoncry
	closemessage
	hidemonpic
	delay 16
	applymovement 1, StargazePoint_Movement_SetOutStarterB
	waitmovement 0
	addobject 11
	showmonpic SPECIES_FROAKIE, 10, 3
	playmoncry SPECIES_FROAKIE, 0
	msgbox StargazePoint_Text_WaterPokemonFroakie, MSGBOX_DEFAULT
	waitmoncry
	closemessage
	hidemonpic
	delay 16
	applymovement 1, StargazePoint_Movement_ReturnToMiddle
	waitmovement 0
	msgbox StargazePoint_Text_AllThreeAreGood, MSGBOX_DEFAULT
	closemessage
	delay 8
	applymovement 2, Common_Movement_WalkInPlaceSlowUp
	msgbox StargazePoint_Text_PlayerCanPickFirst, MSGBOX_DEFAULT
	closemessage
	delay 8
	msgbox StargazePoint_Text_OkayGoAheadPlayer, MSGBOX_DEFAULT
	closemessage
	applymovement 1, StargazePoint_Movement_MoveToSide
	delay 40
	applymovement OBJ_EVENT_ID_PLAYER, StargazePoint_Movement_WalkUp
	waitmovement 0
	setvar VAR_STORY_INTRO_STATE, 4
	releaseall
	end

StargazePoint_EventScript_ChespinBall::
	lock
	setvar VAR_STARTER_MON, 0
	setvar PLAYER_STARTER_SPECIES, SPECIES_CHESPIN
	showmonpic SPECIES_CHESPIN, 10, 3
	playmoncry SPECIES_CHESPIN, 0
	msgbox StargazePoint_Text_ChespinBall, MSGBOX_YESNO
	waitmoncry
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq StargazePoint_EventScript_ChooseStarter
	compare VAR_RESULT, NO
	goto_if_eq StargazePoint_EventScript_DeclineStarter
	end

StargazePoint_EventScript_FennekinBall::
	lock
	setvar VAR_STARTER_MON, 1
	setvar PLAYER_STARTER_SPECIES, SPECIES_FENNEKIN
	showmonpic SPECIES_FENNEKIN, 10, 3
	playmoncry SPECIES_FENNEKIN, 0
	msgbox StargazePoint_Text_FennekinBall, MSGBOX_YESNO
	waitmoncry
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq StargazePoint_EventScript_ChooseStarter
	compare VAR_RESULT, NO
	goto_if_eq StargazePoint_EventScript_DeclineStarter
	end

StargazePoint_EventScript_FroakieBall::
	lock
	setvar VAR_STARTER_MON, 2
	setvar PLAYER_STARTER_SPECIES, SPECIES_FROAKIE
	showmonpic SPECIES_FROAKIE, 10, 3
	playmoncry SPECIES_FROAKIE, 0
	msgbox StargazePoint_Text_FroakieBall, MSGBOX_YESNO
	waitmoncry
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq StargazePoint_EventScript_ChooseStarter
	compare VAR_RESULT, NO
	goto_if_eq StargazePoint_EventScript_DeclineStarter
	end

StargazePoint_EventScript_ChooseStarter::
	bufferspeciesname 0, PLAYER_STARTER_SPECIES
	removeobject VAR_LAST_TALKED
	playfanfare MUS_FANFA5
	message StargazePoint_Text_RecievePokemonFromMantle
	waitmessage
	waitfanfare
	givemon PLAYER_STARTER_SPECIES, 5, ITEM_NONE
	setvar VAR_0x8004, 0
	bufferspeciesname 0, PLAYER_STARTER_SPECIES
	msgbox StargazePoint_Text_NicknameYesNo, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq Common_EventScript_NameReceivedPartyMon
	setflag FLAG_SYS_POKEMON_GET
	delay 8
	applymovement 2, Common_Movement_WalkInPlaceSlowUp
	msgbox StargazePoint_Text_IllTakeThisOne, MSGBOX_DEFAULT
	closemessage
	delay 8
	compare PLAYER_STARTER_SPECIES, SPECIES_CHESPIN
	goto_if_eq StargazePoint_EventScript_RivalChooseFennekin
	compare PLAYER_STARTER_SPECIES, SPECIES_FENNEKIN
	goto_if_eq StargazePoint_EventScript_RivalChooseFroakie
	compare PLAYER_STARTER_SPECIES, SPECIES_FROAKIE
	goto_if_eq StargazePoint_EventScript_RivalChooseChespin
	end

StargazePoint_EventScript_DeclineStarter::
	release
	end

StargazePoint_EventScript_GivePokedex::
	playfanfare MUS_FANFA5
	message StargazePoint_Text_RecievePokedexFromMantle
	waitmessage
	waitfanfare
	return

StargazePoint_EventScript_RivalChooseFennekin::
	applymovement 2, StargazePoint_Movement_WalkToFennekinBall
	waitmovement 0
	removeobject 10
	delay 16
	call StargazePoint_EventScript_PrepareToGivePokedex
	applymovement 1, StargazePoint_Movement_WalkToRivalFennekin
	waitmovement 0
	delay 24
	applymovement 1, StargazePoint_Movement_WalkToPlayerChespin
	waitmovement 0
	call StargazePoint_EventScript_GivePokedex
	goto StargazePoint_EventScript_MantleLeave
	end

StargazePoint_EventScript_RivalChooseFroakie::
	applymovement 2, StargazePoint_Movement_WalkToFroakieBall
	waitmovement 0
	removeobject 11
	delay 16
	call StargazePoint_EventScript_PrepareToGivePokedex
	applymovement 1, StargazePoint_Movement_WalkToRivalFroakie
	waitmovement 0
	delay 24
	applymovement 1, StargazePoint_Movement_WalkToPlayerFennekin
	waitmovement 0
	call StargazePoint_EventScript_GivePokedex
	goto StargazePoint_EventScript_MantleLeave
	end

StargazePoint_EventScript_RivalChooseChespin::
	applymovement 2, StargazePoint_Movement_WalkToChespinBall
	waitmovement 0
	removeobject 9
	delay 16
	call StargazePoint_EventScript_PrepareToGivePokedex
	applymovement 1, StargazePoint_Movement_WalkToRivalChespin
	waitmovement 0
	delay 24
	applymovement 1, StargazePoint_Movement_WalkToPlayerFroakie
	waitmovement 0
	call StargazePoint_EventScript_GivePokedex
	goto StargazePoint_EventScript_MantleLeave
	end

StargazePoint_EventScript_PrepareToGivePokedex::
	applymovement 1, Common_Movement_WalkInPlaceSlowUp
	waitmovement 0
	applymovement 2, Common_Movement_FaceDown
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	msgbox StargazePoint_Text_SomethingForYou, MSGBOX_DEFAULT
	closemessage
	return

StargazePoint_EventScript_MantleLeave::
	msgbox StargazePoint_Text_EnjoyYourPokemon, MSGBOX_DEFAULT
	closemessage
	delay 8
	applymovement 1, StargazePoint_Movement_MantleLeave
	delay 32
	fadescreen 1
	removeobject 1
	removeobject 9
	removeobject 10
	removeobject 11
	compare VAR_STARTER_MON, 0
	call_if_eq StargazePoint_EventScript_PlayerMoveDownA
	compare VAR_STARTER_MON, 1
	call_if_eq StargazePoint_EventScript_PlayerMoveDownB
	compare VAR_STARTER_MON, 2
	call_if_eq StargazePoint_EventScript_PlayerMoveDownC
	setobjectxy 2, 17, 7
	delay 16
	fadescreen 0
	delay 8
	applymovement 2, Common_Movement_WalkInPlaceSlowDown
	msgbox StargazePoint_Text_LetsHaveABattle
	closemessage
	compare VAR_STARTER_MON, 0
	goto_if_eq StargazePoint_EventScript_RivalBattleFennekin
	compare VAR_STARTER_MON, 1
	goto_if_eq StargazePoint_EventScript_RivalBattleFroakie
	compare VAR_STARTER_MON, 2
	goto_if_eq StargazePoint_EventScript_RivalBattleChespin
	end

StargazePoint_EventScript_PlayerMoveDownA::
	applymovement OBJ_EVENT_ID_PLAYER, StargazePoint_Movement_RivalBattleSetupA
	waitmovement 0
	return

StargazePoint_EventScript_PlayerMoveDownB::
	applymovement OBJ_EVENT_ID_PLAYER, StargazePoint_Movement_RivalBattleSetupB
	waitmovement 0
	return

StargazePoint_EventScript_PlayerMoveDownC::
	applymovement OBJ_EVENT_ID_PLAYER, StargazePoint_Movement_RivalBattleSetupC
	waitmovement 0
	return

StargazePoint_EventScript_RivalBattleFennekin::
	trainerbattle_no_intro TRAINER_RIVAL_STARGAZE_POINT_1, Route103_Text_MayDefeated
	goto StargazePoint_EventScript_StarterEventEnd

StargazePoint_EventScript_RivalBattleFroakie::
	trainerbattle_no_intro TRAINER_RIVAL_STARGAZE_POINT_2, Route103_Text_MayDefeated
	goto StargazePoint_EventScript_StarterEventEnd

StargazePoint_EventScript_RivalBattleChespin::
	trainerbattle_no_intro TRAINER_RIVAL_STARGAZE_POINT_3, Route103_Text_MayDefeated
	goto StargazePoint_EventScript_StarterEventEnd

StargazePoint_EventScript_StarterEventEnd::
	special HealPlayerParty
	bufferspeciesname 0, PLAYER_STARTER_SPECIES
	msgbox StargazePoint_Text_DrMantleIsGreat, MSGBOX_DEFAULT
	closemessage
	fadescreen 1
	removeobject 2
	setvar VAR_STORY_INTRO_STATE, 5
	setflag FLAG_SYS_POKEDEX_GET
	fadescreen 0
	release
	end

StargazePoint_EventScript_StargazeInfoGuy::
	lock
	faceplayer
	msgbox StargazePoint_Text_StargazingPopular, MSGBOX_DEFAULT
	release
	end

StargazePoint_EventScript_ClefairyFan::
	lock
	faceplayer
	msgbox StargazePoint_Text_ClefairyRarelyAppear, MSGBOX_DEFAULT
	release
	end

StargazePoint_EventScript_KidKeepingWatch::
	lock
	faceplayer
	msgbox StargazePoint_Text_KeepingWatch, MSGBOX_DEFAULT
	release
	end

StargazePoint_Movement_WalkUp:
	walk_up
	step_end

StargazePoint_Movement_FaceUp:
	face_up
	step_end

StargazePoint_Movement_FaceUpLeft:
	walk_left
	face_up
	step_end

StargazePoint_Movement_SetOutStarterA:
	walk_left
	face_up
	step_end

StargazePoint_Movement_SetOutStarterB:
	walk_right
	face_up
	step_end

StargazePoint_Movement_ReturnToMiddle:
	walk_left
	face_down
	step_end

StargazePoint_Movement_MoveToSide:
	walk_right
	walk_down
	walk_down
	face_up
	step_end

StargazePoint_Movement_WalkToFennekinBall:
	walk_up
	walk_right
	walk_up
	step_end

StargazePoint_Movement_WalkToFroakieBall:
	walk_up
	walk_right
	walk_right
	walk_up
	step_end

StargazePoint_Movement_WalkToChespinBall:
	walk_up
	walk_up
	step_end

StargazePoint_Movement_WalkToRivalFennekin:
	walk_up
	walk_left
	face_up
	step_end

StargazePoint_Movement_WalkToPlayerChespin:
	walk_left
	face_up
	step_end

StargazePoint_Movement_WalkToRivalFroakie:
	walk_up
	step_end

StargazePoint_Movement_WalkToPlayerFennekin:
	walk_left
	face_up
	step_end

StargazePoint_Movement_WalkToRivalChespin:
	walk_up
	walk_left
	walk_left
	face_up
	step_end

StargazePoint_Movement_WalkToPlayerFroakie:
	walk_right
	walk_right
	face_up
	step_end

StargazePoint_Movement_MantleLeave:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

StargazePoint_Movement_RivalBattleSetupA:
	walk_down
	walk_down
	walk_right
	face_up
	step_end

StargazePoint_Movement_RivalBattleSetupB:
	walk_down
	walk_down
	face_up
	step_end

StargazePoint_Movement_RivalBattleSetupC:
	walk_down
	walk_down
	walk_left
	face_up
	step_end

StargazePoint_Text_FlowerShopSign:
	.string "Stargaze Florists\n"
	.string "Every flower tells a story.$"

StargazePoint_Text_AhYouMadeIt:
	.string "Ah, you made it, {PLAYER}.\n"
	.string "Let's get started, then.$"

StargazePoint_Text_WhereAreYouGoing:
	.string "Where are you going, {PLAYER}?\n"
	.string "I thought you wanted a Pokémon!$"

StargazePoint_Text_IllTakeThisOne:
	.string "Okay, then this one's mine!$"

StargazePoint_Text_SomethingForYou:
	.string "Right, now it's time for your part\n"
	.string "of the deal.$"

StargazePoint_Text_WonderWhyHere:
	.string "I wonder why Dr. Mantle called us here.\p"
	.string "Maybe he's going to give us a Pokémon\n"
	.string "after all?$"

StargazePoint_Text_WhyDidYouCallUs:
	.string "So why did you call us here?\n"
	.string "There has to be a good reason, right?$"

StargazePoint_Text_CantBecomeAidesBut:
	.string "Well, you two can't become aides, but\n"
	.string "there is one thing you can do for me.\p"
	.string "You see, many kinds of Pokémon can be\n"
	.string "found across Tomen.\p"
	.string "Using a device called the Pokédex, it's\n"
	.string "possible to collect information about\l"
	.string "each Pokémon that one encounters.\p"
	.string "I'm prepared to entrust both of you\n"
	.string "with a Pokémon of your own.\p"
	.string "In return, you have to take a Pokédex\n"
	.string "and collect data on Pokémon as you\l"
	.string "travel around Tomen.$"

StargazePoint_Text_ThatsANoBrainer:
	.string "That's a no-brainer!\n"
	.string "Of course we'll do it!$"

StargazePoint_Text_RightPlayer:
	.string "Right, {PLAYER}?$"

StargazePoint_Text_ThenItsSettled:
	.string "Then it's settled!\n"
	.string "You two shall recieve a Pokémon.\p"
	.string "I brought three Pokémon with me.\n"
	.string "Let me introduce you to them!$"

StargazePoint_Text_GrassPokemonChespin:
	.string "The Grass-type Pokémon, Chespin!$"

StargazePoint_Text_FirePokemonFennekin:
	.string "The Fire-type Pokémon, Fennekin!$"

StargazePoint_Text_WaterPokemonFroakie:
	.string "The Water-type Pokémon, Froakie!$"

StargazePoint_Text_AllThreeAreGood:
	.string "I recieved these Pokémon from a\n"
	.string "friend who lives in another region.\l"
	.string "All three are fine choices.\p"
	.string "Now, who's going to pick first?$"

StargazePoint_Text_PlayerCanPickFirst:
	.string "I've got no preference, so {PLAYER}\n"
	.string "can pick first.$"

StargazePoint_Text_OkayGoAheadPlayer:
	.string "Okay, then.\n"
	.string "Go ahead and pick, {PLAYER}.$"

StargazePoint_Text_GoAndPickAlready:
	.string "What's taking you so long?\n"
	.string "Go ahead and pick already!$"

StargazePoint_Text_ChespinBall:
	.string "The Grass-type Pokémon, Chespin!\n"
	.string "Do you choose this Pokémon?$"

StargazePoint_Text_FennekinBall:
	.string "The Fire-type Pokémon, Fennekin!\n"
	.string "Do you choose this Pokémon?$"

StargazePoint_Text_FroakieBall:
	.string "The Water-type Pokémon, Froakie!\n"
	.string "Do you choose this Pokémon?$"

StargazePoint_Text_RecievePokemonFromMantle:
	.string "{PLAYER} recieved the {STR_VAR_1}\n"
	.string "from Dr. Mantle!$"

StargazePoint_Text_RecievePokedexFromMantle:
	.string "{PLAYER} recieved the Pokédex\n"
	.string "from Dr. Mantle!$"

StargazePoint_Text_EnjoyYourPokemon:
	.string "Whenever you encounter a Pokémon,\n"
	.string "an entry is added for it in the Pokédex.\p"
	.string "If you catch a Pokémon, that entry is\n"
	.string "updated with even more information.\p"
	.string "Well, I'd best be going now.\n"
	.string "Have fun with your new Pokémon!$"

StargazePoint_Text_LetsHaveABattle:
	.string "We finally have Pokémon now.\n"
	.string "You know what comes next, right?\p"
	.string "Let's have a battle!$"

StargazePoint_Text_DrMantleIsGreat:
	.string "Man, Dr. Mantle is great.\p"
	.string "Now we can go and compete in the\n"
	.string "Wisteria Tournament!\p"
	.string "I'm gonna go show my dad my new Pokémon!\n"
	.string "You should show your mom your {STR_VAR_1}!$"

StargazePoint_Text_NicknameYesNo:
	.string "Would you like to give a nickname\n"
	.string "to the {STR_VAR_1} you recieved?$"

StargazePoint_Text_StargazingPopular:
	.string "This is a popular spot for stargazing.\p"
	.string "I guess that's where the name\n"
	.string "Stargaze Point comes from.$"

StargazePoint_Text_ClefairyRarelyAppear:
	.string "Apparently, Clefairy appear here on\n"
	.string "the night of a full moon.\p"
	.string "I love Clefairy, so I've been coming\n"
	.string "here every night, but…\l"
	.string "I haven't found any!\l"
	.string "Perhaps that was just a rumour.$"

StargazePoint_Text_KeepingWatch:
	.string "I'm guarding this flower patch against\n"
	.string "troublemakers!\p"
	.string "Don't trample these flowers, okay?\n"
	.string "Or I'll know!$"
