PrimeCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PrimeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PrimeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	compare VAR_PRIME_CITY_STATE, 4
	goto_if_eq PrimeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

PrimeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setobjectxyperm 6, 41, 4
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
	setobjectxyperm 7, 43, 4
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
	return


PrimeCity_DebugWailmer::
	end


PrimeCity_EventScript_PrimeWherePartyAt::
	lock
	faceplayer
	msgbox PrimeCity_EventScript_PrimeWherePartyAt_Text_0
	release
	end


PrimeCity_EventScript_DeptStoreSecuritySucks::
	lock
	faceplayer
	msgbox PrimeCity_EventScript_DeptStoreSecuritySucks_Text_0
	release
	end


PrimeCity_Trigger_CantLeave::
	lock
	msgbox PrimeCity_Trigger_CantLeave_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	fadescreen 0
	release
	end


PrimeCity_EventScript_MalimoInitMeeting::
	lockall
	fadescreen 1
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 55
	goto_if_eq PrimeCity_EventScript_MalimoInitMeeting_2
PrimeCity_EventScript_MalimoInitMeeting_1:
	compare VAR_TEMP_1, 57
	goto_if_eq PrimeCity_EventScript_MalimoInitMeeting_5
PrimeCity_EventScript_MalimoInitMeeting_4:
	waitmovement 0
	fadescreen 0
	msgbox PrimeCity_EventScript_MalimoInitMeeting_Text_0
	msgbox PrimeCity_EventScript_MalimoInitMeeting_Text_1
	msgbox PrimeCity_EventScript_MalimoInitMeeting_Text_2
	msgbox PrimeCity_EventScript_MalimoInitMeeting_Text_3
	closemessage
	clearflag FLAG_PRIME_CITY_HIDE_FERN
	addobject 6
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, PrimeCity_Movement_CameraToFern
	waitmovement 0
	msgbox PrimeCity_EventScript_MalimoInitMeeting_Text_4
	closemessage
	applymovement 7, Common_Movement_FaceLeft
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	applymovement 6, PrimeCity_Movement_FernToPlayer
	applymovement OBJ_EVENT_ID_CAMERA, PrimeCity_Movement_FernToPlayer
	waitmovement 0
	applymovement 7, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	msgbox PrimeCity_EventScript_MalimoInitMeeting_Text_5
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	msgbox PrimeCity_EventScript_MalimoInitMeeting_Text_6
	msgbox PrimeCity_EventScript_MalimoInitMeeting_Text_7
	msgbox PrimeCity_EventScript_MalimoInitMeeting_Text_8
	msgbox PrimeCity_EventScript_MalimoInitMeeting_Text_9
	msgbox PrimeCity_EventScript_MalimoInitMeeting_Text_10
	msgbox PrimeCity_EventScript_MalimoInitMeeting_Text_11
	msgbox PrimeCity_EventScript_MalimoInitMeeting_Text_12
	msgbox PrimeCity_EventScript_MalimoInitMeeting_Text_13
	msgbox PrimeCity_EventScript_MalimoInitMeeting_Text_14
	msgbox PrimeCity_EventScript_MalimoInitMeeting_Text_15
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	applymovement 7, Common_Movement_FaceDown
	waitmovement 0
	msgbox PrimeCity_EventScript_MalimoInitMeeting_Text_16
	msgbox PrimeCity_EventScript_MalimoInitMeeting_Text_17
	msgbox PrimeCity_EventScript_MalimoInitMeeting_Text_18
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	applymovement 7, Common_Movement_FaceLeft
	msgbox PrimeCity_EventScript_MalimoInitMeeting_Text_19
	msgbox PrimeCity_EventScript_MalimoInitMeeting_Text_20
	msgbox PrimeCity_EventScript_MalimoInitMeeting_Text_21
	msgbox PrimeCity_EventScript_MalimoInitMeeting_Text_22
	msgbox PrimeCity_EventScript_MalimoInitMeeting_Text_24
	msgbox PrimeCity_EventScript_MalimoInitMeeting_Text_25
	closemessage
	fadescreen 1
	setobjectxy 6, 41, 4
	setobjectxyperm 6, 41, 4
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
	fadescreen 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	applymovement 7, Common_Movement_FaceDown
	waitmovement 0
	msgbox PrimeCity_EventScript_MalimoInitMeeting_Text_26
	applymovement 7, Common_Movement_FaceUp
	waitmovement 0
	msgbox PrimeCity_EventScript_MalimoInitMeeting_Text_27
	applymovement 7, Common_Movement_FaceDown
	waitmovement 0
	msgbox PrimeCity_EventScript_MalimoInitMeeting_Text_28
	closemessage
	fadescreen 1
	setobjectxy 7, 43, 4
	setobjectxyperm 7, 43, 4
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
	fadescreen 0
	releaseall
	setvar VAR_PRIME_CITY_STATE, 4
	special RemoveCameraObject
	end

PrimeCity_EventScript_MalimoInitMeeting_2:
	applymovement OBJ_EVENT_ID_PLAYER, PrimeCity_Movement_PlayerToMalimoLeft
	goto PrimeCity_EventScript_MalimoInitMeeting_1

PrimeCity_EventScript_MalimoInitMeeting_5:
	applymovement OBJ_EVENT_ID_PLAYER, PrimeCity_Movement_PlayerToMalimoRight
	goto PrimeCity_EventScript_MalimoInitMeeting_4


PrimeCity_Trigger_LeavingEvent::
	lockall
	fadescreen 1
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 40
	goto_if_eq PrimeCity_Trigger_LeavingEvent_2
PrimeCity_Trigger_LeavingEvent_1:
	compare VAR_TEMP_1, 41
	goto_if_eq PrimeCity_Trigger_LeavingEvent_5
PrimeCity_Trigger_LeavingEvent_4:
	compare VAR_TEMP_1, 42
	goto_if_eq PrimeCity_Trigger_LeavingEvent_8
PrimeCity_Trigger_LeavingEvent_7:
	compare VAR_TEMP_1, 43
	goto_if_eq PrimeCity_Trigger_LeavingEvent_11
PrimeCity_Trigger_LeavingEvent_10:
	compare VAR_TEMP_1, 44
	goto_if_eq PrimeCity_Trigger_LeavingEvent_14
PrimeCity_Trigger_LeavingEvent_13:
	waitmovement 0
	fadescreen 0
	msgbox PrimeCity_Trigger_LeavingEvent_Text_0
	msgbox PrimeCity_Trigger_LeavingEvent_Text_1
	msgbox PrimeCity_Trigger_LeavingEvent_Text_2
	applymovement 6, Common_Movement_FaceDown
	waitmovement 0
	msgbox PrimeCity_Trigger_LeavingEvent_Text_3
	msgbox PrimeCity_Trigger_LeavingEvent_Text_4
	applymovement 6, Common_Movement_FaceRight
	waitmovement 0
	msgbox PrimeCity_Trigger_LeavingEvent_Text_5
	msgbox PrimeCity_Trigger_LeavingEvent_Text_6
	msgbox PrimeCity_Trigger_LeavingEvent_Text_7
	msgbox PrimeCity_Trigger_LeavingEvent_Text_8
	applymovement 6, Common_Movement_FaceDown
	applymovement 7, Common_Movement_FaceDown
	waitmovement 0
	msgbox PrimeCity_Trigger_LeavingEvent_Text_9
	applymovement 7, Common_Movement_FaceLeft
	waitmovement 0
	msgbox PrimeCity_Trigger_LeavingEvent_Text_10
	applymovement 6, Common_Movement_FaceRight
	waitmovement 0
	msgbox PrimeCity_Trigger_LeavingEvent_Text_11
	msgbox PrimeCity_Trigger_LeavingEvent_Text_12
	msgbox PrimeCity_Trigger_LeavingEvent_Text_13
	msgbox PrimeCity_Trigger_LeavingEvent_Text_14
	msgbox PrimeCity_Trigger_LeavingEvent_Text_15
	closemessage
	fadescreen 1
	setflag FLAG_PRIME_CITY_HIDE_FERN
	removeobject 6
	setflag FLAG_PRIME_CITY_HIDE_MALIMO
	removeobject 7
	setvar VAR_PRIME_CITY_STATE, 5
	fadescreen 0
	releaseall
	end

PrimeCity_Trigger_LeavingEvent_2:
	applymovement OBJ_EVENT_ID_PLAYER, PrimeCity_Movement_PlayerToMaliFernFarLeft
	goto PrimeCity_Trigger_LeavingEvent_1

PrimeCity_Trigger_LeavingEvent_5:
	applymovement OBJ_EVENT_ID_PLAYER, PrimeCity_Movement_PlayerToMaliFernLeft
	goto PrimeCity_Trigger_LeavingEvent_4

PrimeCity_Trigger_LeavingEvent_8:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	goto PrimeCity_Trigger_LeavingEvent_7

PrimeCity_Trigger_LeavingEvent_11:
	applymovement OBJ_EVENT_ID_PLAYER, PrimeCity_Movement_PlayerToMaliFernRight
	goto PrimeCity_Trigger_LeavingEvent_10

PrimeCity_Trigger_LeavingEvent_14:
	applymovement OBJ_EVENT_ID_PLAYER, PrimeCity_Movement_PlayerToMaliFernFarRight
	goto PrimeCity_Trigger_LeavingEvent_13


PrimeCity_Movement_CameraToFern:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

PrimeCity_Movement_FernToPlayer:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	walk_right
	step_end

PrimeCity_Movement_PlayerToMalimoLeft:
	walk_fastest_down
	walk_fastest_right
	face_up
	step_end

PrimeCity_Movement_PlayerToMalimoRight:
	walk_fastest_down
	walk_fastest_left
	face_up
	step_end

PrimeCity_Movement_PlayerToMaliFernFarLeft:
	walk_fastest_right
	walk_fastest_right
	walk_fastest_up
	step_end

PrimeCity_Movement_PlayerToMaliFernLeft:
	walk_fastest_right
	walk_fastest_up
	step_end

PrimeCity_Movement_PlayerToMaliFernRight:
	walk_fastest_left
	walk_fastest_up
	step_end

PrimeCity_Movement_PlayerToMaliFernFarRight:
	walk_fastest_left
	walk_fastest_left
	walk_fastest_up
	step_end

PrimeCity_EventScript_PrimeWherePartyAt_Text_0:
	.string "Prime City is the biggest city in Ríota!\nThis is where the party's at, baby!$"

PrimeCity_EventScript_DeptStoreSecuritySucks_Text_0:
	.string "Those security guards at the\nDepartment Store are total bozos!\pI managed to get away with a whole\nshelf worths of PP Ups, heh heh heh!$"

PrimeCity_Trigger_CantLeave_Text_0:
	.string "(I shouldn't ditch the others.)\n"
	.string "(They're probably waiting for me.)$"

PrimeCity_EventScript_MalimoInitMeeting_Text_0:
	.string "{COLOR}{BLUE}Clad! You're here!$"

PrimeCity_EventScript_MalimoInitMeeting_Text_1:
	.string "Good to see you, Malimo.$"

PrimeCity_EventScript_MalimoInitMeeting_Text_2:
	.string "{COLOR}{BLUE}Heh heh! And you!\n"
	.string "How're ya after the Swim-Off?\p"
	.string "Not too tired, I hope…$"

PrimeCity_EventScript_MalimoInitMeeting_Text_3:
	.string "Don't rib me!\n"
	.string "I'm fine, obviously.\p"
	.string "More importantly, where's Fern and Rye?\n"
	.string "I wanna know why you called me so early.$"

PrimeCity_EventScript_MalimoInitMeeting_Text_4:
	.string "{COLOR}{RED}Yahoo, guys!$"

PrimeCity_EventScript_MalimoInitMeeting_Text_5:
	.string "{COLOR}{BLUE}Hey, Fern.$"

PrimeCity_EventScript_MalimoInitMeeting_Text_6:
	.string "Fern, yo.$"

PrimeCity_EventScript_MalimoInitMeeting_Text_7:
	.string "{COLOR}{RED}Huh? Malimo, Clad, and where's Ryan?$"

PrimeCity_EventScript_MalimoInitMeeting_Text_8:
	.string "{COLOR}{BLUE}Rye phoned me earlier.\n"
	.string "Says he has to do some odd jobs first.$"

PrimeCity_EventScript_MalimoInitMeeting_Text_9:
	.string "{COLOR}{RED}Lame.\n"
	.string "I suppose we'll have to make a stop\lat Yanuras Town.$"

PrimeCity_EventScript_MalimoInitMeeting_Text_10:
	.string "Uh? Fern?\n"
	.string "Tell me what this is about.$"

PrimeCity_EventScript_MalimoInitMeeting_Text_11:
	.string "{COLOR}{RED}Oh, Malimo didn't tell you?\n"
	.string "We're going on a road trip!\p"
	.string "Well, I say road trip, but it's\n"
	.string "more like a quest.\p"
	.string "Apparently, anybody who reaches the\n"
	.string "top of Wing Peak gets any wish\l"
	.string "they want granted by a genie!$"

PrimeCity_EventScript_MalimoInitMeeting_Text_12:
	.string "That's what you called us out for?\n"
	.string "What are you, ten?\p"
	.string "There's no way that's real.$"

PrimeCity_EventScript_MalimoInitMeeting_Text_13:
	.string "{COLOR}{RED}Clad!\p"
	.string "Did the Swim-Off sap all of your\n"
	.string "sense of adventure?\n"
	.string "You're such a bummer today, duderino!$"

PrimeCity_EventScript_MalimoInitMeeting_Text_14:
	.string "Huh?\n"
	.string "I just think that's a load of nonsense!$"

PrimeCity_EventScript_MalimoInitMeeting_Text_15:
	.string "{COLOR}{RED}I bet you that it's real!\n"
	.string "Malimo, tell him!$"

PrimeCity_EventScript_MalimoInitMeeting_Text_16:
	.string "Don't tell me, Malimo.\n"
	.string "You want to give this a shot?$"

PrimeCity_EventScript_MalimoInitMeeting_Text_17:
	.string "{COLOR}{BLUE}Of course, Clad!\n"
	.string "I'm sure you'd like it, really.\p"
	.string "Besides, doesn't this rumour sound fun?\n"
	.string "Don't you want to know if it's real?$"

PrimeCity_EventScript_MalimoInitMeeting_Text_18:
	.string "OK, OK.$"

PrimeCity_EventScript_MalimoInitMeeting_Text_19:
	.string "I'll come, Fern.$"

PrimeCity_EventScript_MalimoInitMeeting_Text_20:
	.string "{COLOR}{RED}Yahey!\n"
	.string "But it's gonna be a long journey.\p"
	.string "Your parents might even come back\nfrom their trip before we\leven get near Wing Peak!$"

PrimeCity_EventScript_MalimoInitMeeting_Text_21:
	.string "What are you trying to do, put me off?\n"
	.string "I said yes already, so let's go!$"

PrimeCity_EventScript_MalimoInitMeeting_Text_22:
	.string "{COLOR}{RED}Alllrightey then!\p"
	.string "When you're ready, we'll meet\n"
	.string "at the entrance to New Valley Way.$"

PrimeCity_EventScript_MalimoInitMeeting_Text_23:
	.string "New Valley Way?$"

PrimeCity_EventScript_MalimoInitMeeting_Text_24:
	.string "North of town, you mean?\nBy the fence?$"

PrimeCity_EventScript_MalimoInitMeeting_Text_25:
	.string "{COLOR}{RED}Yeah, I'm sure you guys know it.\n"
	.string "Well, see ya, wouldn't wanna be ya!$"

PrimeCity_EventScript_MalimoInitMeeting_Text_26:
	.string "{COLOR}{BLUE}Clad.\p"
	.string "Even if Fern is a bit of a nutter, he is\n"
	.string "right y'know, we'd better be prepared.$"

PrimeCity_EventScript_MalimoInitMeeting_Text_27:
	.string "{COLOR}{BLUE}Luckily, right behind us is\nthe Dept. Store, so buying supplies\lis no problem.$"

PrimeCity_EventScript_MalimoInitMeeting_Text_28:
	.string "{COLOR}{BLUE}Anyway, I'll meet you in a bit!\n"
	.string "Gotta sort out some home stuff quick.$"

PrimeCity_Trigger_LeavingEvent_Text_0:
	.string "{COLOR}{BLUE}Well, we're all here.\nAre you guys all prepared?$"

PrimeCity_Trigger_LeavingEvent_Text_1:
	.string "{COLOR}{RED}Of course, of course!\nAnd even if we're not, it'll be fine!$"

PrimeCity_Trigger_LeavingEvent_Text_2:
	.string "{SIZE} I don't like the sound of that…$"

PrimeCity_Trigger_LeavingEvent_Text_3:
	.string "{COLOR}{RED}Hmph! We'll be having no more\nof that out of you, Clad!\p$"

PrimeCity_Trigger_LeavingEvent_Text_4:
	.string "Alright, alright.\nSorry.$"

PrimeCity_Trigger_LeavingEvent_Text_5:
	.string "{COLOR}{BLUE}So what's the route we're taking\nto Wing Peak?$"

PrimeCity_Trigger_LeavingEvent_Text_6:
	.string "{COLOR}{RED}Weeeell, let me explain.\p"
	.string "First we trek up New Valley Way\nand go get Rye from Yanuras Town.\p"
	.string "Next we make our way through\nRocaroha Valley…$"

PrimeCity_Trigger_LeavingEvent_Text_7:
	.string "{COLOR}{BLUE}The Valley, huh?\nIsn't that kind of rough?$"

PrimeCity_Trigger_LeavingEvent_Text_8:
	.string "{COLOR}{RED}It's the quickest way through.\nWe wouldn't want somebody else getting\lto Wing Peak first, right?\p…Like Nas.$"

PrimeCity_Trigger_LeavingEvent_Text_9:
	.string "Didn't you say that anybody that\ngets to the top has a wish granted?\lWhy do we need to get there first?$"

PrimeCity_Trigger_LeavingEvent_Text_10:
	.string "{COLOR}{RED}Well, what if there's a finite amount\nof wishes?\pAnd we went all that way\nand somebody else took all of ours?$"

PrimeCity_Trigger_LeavingEvent_Text_11:
	.string "{COLOR}{BLUE}You worry too much, Fern.\pAnyway, after making our way through\nthe Valley, we have to cross\lthe Land Bridge, right?$"

PrimeCity_Trigger_LeavingEvent_Text_12:
	.string "{COLOR}{RED}That's right!\pAnd from there we head up to\nAgudo Woods, where the foot of\lWing Peak lies.$"

PrimeCity_Trigger_LeavingEvent_Text_13:
	.string "Huh, that seems…\nquite manageable actually.$"

PrimeCity_Trigger_LeavingEvent_Text_14:
	.string "{COLOR}{RED}Right?! So let's get a move on!$"

PrimeCity_Trigger_LeavingEvent_Text_15:
	.string "{COLOR}{BLUE}Okay!\pLet's meet at the entrance to\nthe Valley.$"
