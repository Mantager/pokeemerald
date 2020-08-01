WingPeak_2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, WingPeak_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

WingPeak_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	compare VAR_PISTA_VILLAGE_STATE, 8
	goto_if_eq WingPeak_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
WingPeak_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

WingPeak_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setflag FLAG_WING_PEAK_2F_HIDE_NAS
	goto WingPeak_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


WingPeak_2F_Trigger_NasFight::
	lockall
	msgbox WingPeak_2F_Trigger_NasFight_Text_0
	closemessage
	clearflag FLAG_WING_PEAK_2F_HIDE_NAS
	addobject 1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_2, 37
	goto_if_eq WingPeak_2F_Trigger_NasFight_2
WingPeak_2F_Trigger_NasFight_1:
	compare VAR_TEMP_2, 38
	goto_if_eq WingPeak_2F_Trigger_NasFight_5
WingPeak_2F_Trigger_NasFight_4:
	compare VAR_TEMP_2, 39
	goto_if_eq WingPeak_2F_Trigger_NasFight_8
WingPeak_2F_Trigger_NasFight_7:
	compare VAR_TEMP_2, 40
	goto_if_eq WingPeak_2F_Trigger_NasFight_11
WingPeak_2F_Trigger_NasFight_10:
	waitmovement 0
	delay 8
	msgbox WingPeak_2F_Trigger_NasFight_Text_1
	closemessage
	msgbox WingPeak_2F_Trigger_NasFight_Text_2
	msgbox WingPeak_2F_Trigger_NasFight_Text_3
	closemessage
	trainerbattle_no_intro TRAINER_G2_NAS_2, WingPeak_2F_Trigger_NasFight_Text_4
	msgbox WingPeak_2F_Trigger_NasFight_Text_5
	msgbox WingPeak_2F_Trigger_NasFight_Text_6
	delay 16
	msgbox WingPeak_2F_Trigger_NasFight_Text_7
	delay 16
	msgbox WingPeak_2F_Trigger_NasFight_Text_8
	delay 16
	msgbox WingPeak_2F_Trigger_NasFight_Text_9
	fadeoutbgm 1
	fadescreen 1
	msgbox WingPeak_2F_Trigger_NasFight_Text_10
	closemessage
	delay 16
	msgbox WingPeak_2F_Trigger_NasFight_Text_11
	closemessage
	delay 16
	msgbox WingPeak_2F_Trigger_NasFight_Text_12
	closemessage
	delay 16
	msgbox WingPeak_2F_Trigger_NasFight_Text_13
	closemessage
	delay 16
	msgbox WingPeak_2F_Trigger_NasFight_Text_14
	closemessage
	delay 16
	msgbox WingPeak_2F_Trigger_NasFight_Text_15
	closemessage
	delay 16
	msgbox WingPeak_2F_Trigger_NasFight_Text_16
	closemessage
	delay 16
	msgbox WingPeak_2F_Trigger_NasFight_Text_17
	msgbox WingPeak_2F_Trigger_NasFight_Text_18
	msgbox WingPeak_2F_Trigger_NasFight_Text_19
	msgbox WingPeak_2F_Trigger_NasFight_Text_20
	closemessage
	delay 16
	msgbox WingPeak_2F_Trigger_NasFight_Text_21
	msgbox WingPeak_2F_Trigger_NasFight_Text_22
	msgbox WingPeak_2F_Trigger_NasFight_Text_23
	msgbox WingPeak_2F_Trigger_NasFight_Text_24
	closemessage
	fadescreen 0
	msgbox WingPeak_2F_Trigger_NasFight_Text_25
	closemessage
	delay 8
	msgbox WingPeak_2F_Trigger_NasFight_Text_26
	msgbox WingPeak_2F_Trigger_NasFight_Text_27
	closemessage
	fadescreen 1
	msgbox WingPeak_2F_Trigger_NasFight_Text_28
	msgbox WingPeak_2F_Trigger_NasFight_Text_29
	msgbox WingPeak_2F_Trigger_NasFight_Text_30
	msgbox WingPeak_2F_Trigger_NasFight_Text_31
	closemessage
	fadescreen 0
	msgbox WingPeak_2F_Trigger_NasFight_Text_32
	closemessage
	delay 16
	msgbox WingPeak_2F_Trigger_NasFight_Text_33
	closemessage
	delay 8
	msgbox WingPeak_2F_Trigger_NasFight_Text_34
	closemessage
	delay 8
	msgbox WingPeak_2F_Trigger_NasFight_Text_35
	closemessage
	delay 8
	playbgm MUS_OOAME, 0
	msgbox WingPeak_2F_Trigger_NasFight_Text_36
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	waitse
	delay 8
	msgbox WingPeak_2F_Trigger_NasFight_Text_37
	closemessage
	msgbox WingPeak_2F_Trigger_NasFight_Text_38
	closemessage
	msgbox WingPeak_2F_Trigger_NasFight_Text_39
	msgbox WingPeak_2F_Trigger_NasFight_Text_40
	closemessage
	msgbox WingPeak_2F_Trigger_NasFight_Text_41
	closemessage
	msgbox WingPeak_2F_Trigger_NasFight_Text_42
	closemessage
	applymovement 1, Common_Movement_WalkRight
	waitmovement 0
	setvar VAR_PISTA_VILLAGE_STATE, 9
	setflag FLAG_WING_PEAK_2F_HIDE_NAS
	removeobject 1
	fadedefaultbgm
	releaseall
	end

WingPeak_2F_Trigger_NasFight_2:
	applymovement 1, WingPeak_2F_Movement_NasToPlayerY37
	goto WingPeak_2F_Trigger_NasFight_1

WingPeak_2F_Trigger_NasFight_5:
	applymovement 1, WingPeak_2F_Movement_NasToPlayerY38
	goto WingPeak_2F_Trigger_NasFight_4

WingPeak_2F_Trigger_NasFight_8:
	applymovement 1, WingPeak_2F_Movement_NasToPlayerY39
	goto WingPeak_2F_Trigger_NasFight_7

WingPeak_2F_Trigger_NasFight_11:
	applymovement 1, WingPeak_2F_Movement_NasToPlayerY40
	goto WingPeak_2F_Trigger_NasFight_10


WingPeak_2F_Movement_NasToPlayerY37:
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

WingPeak_2F_Movement_NasToPlayerY38:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_right
	walk_right
	step_end

WingPeak_2F_Movement_NasToPlayerY39:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

WingPeak_2F_Movement_NasToPlayerY40:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_right
	walk_right
	step_end

WingPeak_2F_Trigger_NasFight_Text_0:
	.string "Wait!$"

WingPeak_2F_Trigger_NasFight_Text_1:
	.string "Clad, you little shrimp!$"

WingPeak_2F_Trigger_NasFight_Text_2:
	.string "Nas!?\nHow come you're here?!$"

WingPeak_2F_Trigger_NasFight_Text_3:
	.string "That doesn't matter right now…\nBecause right now…\lI challenge you to a battle!$"

WingPeak_2F_Trigger_NasFight_Text_4:
	.string "What?\nI lost again…\lLooks like last time wasn't a fluke…$"

WingPeak_2F_Trigger_NasFight_Text_5:
	.string "Heh!\nYou guys aren't half-bad at battling…$"

WingPeak_2F_Trigger_NasFight_Text_6:
	.string "Shut it!\pI still don't forgive you for\nhow you treated Fern!\pTell me, Nas.\nWhy do you have to be such\la jerk all the time?$"

WingPeak_2F_Trigger_NasFight_Text_7:
	.string "…It's complicated, y'know?!\nGet off my case.$"

WingPeak_2F_Trigger_NasFight_Text_8:
	.string "I don't care.\pYou've been such a pain\nthroughout the years, you could\lat least explain why.$"

WingPeak_2F_Trigger_NasFight_Text_9:
	.string "Fine.$"

WingPeak_2F_Trigger_NasFight_Text_10:
	.string "When I was a kid, my dad always told\nme to stand up for myself.$"

WingPeak_2F_Trigger_NasFight_Text_11:
	.string "{COLOR}{BLUE}Is that Ferg kid picking on you, son?\nMake sure you let him have it!$"

WingPeak_2F_Trigger_NasFight_Text_12:
	.string "That's a good thing, but recently…\nI realised that he took it too far.$"

WingPeak_2F_Trigger_NasFight_Text_13:
	.string "If he saw somebody not taking me\nseriously, he'd say…$"

WingPeak_2F_Trigger_NasFight_Text_14:
	.string "{COLOR}{BLUE}No son of mine lets any snot-nosed\nlayabout talk down to him!\pGive that guy a good kicking, boy!$"

WingPeak_2F_Trigger_NasFight_Text_15:
	.string "When I was beaten at a track meet,\nhe said to me…$"

WingPeak_2F_Trigger_NasFight_Text_16:
	.string "{COLOR}{BLUE}What a fluke!\nThat boy was cheating.\lHe took something before the race!\lDidn't you see?!$"

WingPeak_2F_Trigger_NasFight_Text_17:
	.string "Dad's the kind of guy who sees\nconflict in everything.$"

WingPeak_2F_Trigger_NasFight_Text_18:
	.string "But that way of thinking was\npassed onto me, too.$"

WingPeak_2F_Trigger_NasFight_Text_19:
	.string "I thought that by being top dog\n and knocking everyone else down,\lit would make me respected.\pNobody would mess with me.$"

WingPeak_2F_Trigger_NasFight_Text_20:
	.string "From my perspective, and my dad's too,\neveryone was waiting for the\lperfect moment to get you.\pI bullied people as a pre-emptive strike.$"

WingPeak_2F_Trigger_NasFight_Text_21:
	.string "But after you guys beat me back\nin Oro Town, I realised something.$"

WingPeak_2F_Trigger_NasFight_Text_22:
	.string "I don't have real friends.\pI thought my friends liked me,\nbut it was just because nobody\lmessed with me.\pThey wanted to feel like\ntop dogs, as well.$"

WingPeak_2F_Trigger_NasFight_Text_23:
	.string "That must've been why they\nditched you after you lost before.$"

WingPeak_2F_Trigger_NasFight_Text_24:
	.string "You got it, Clad.$"

WingPeak_2F_Trigger_NasFight_Text_25:
	.string "So you just wanted to feel like\npeople were taking you serious, then.$"

WingPeak_2F_Trigger_NasFight_Text_26:
	.string "I've realised that not everyone was\nout to get me after all.$"

WingPeak_2F_Trigger_NasFight_Text_27:
	.string "And when I heard you guys speaking\nbefore, I was really surprised.$"

WingPeak_2F_Trigger_NasFight_Text_28:
	.string "{COLOR}{RED}Thank you, guys.\pBecause of all of you, I was\nfinally able to properly\lstand up to Nas.$"

WingPeak_2F_Trigger_NasFight_Text_29:
	.string "{COLOR}{GREEN}Don't mention it, man!\nThat's what friends are for.$"

WingPeak_2F_Trigger_NasFight_Text_30:
	.string "That's right.$"

WingPeak_2F_Trigger_NasFight_Text_31:
	.string "{COLOR}{BLUE}Mhm!$"

WingPeak_2F_Trigger_NasFight_Text_32:
	.string "I started questioning my actions after\nhearing all of that.$"

WingPeak_2F_Trigger_NasFight_Text_33:
	.string "Hm…\nThat's deep.\pEven so…\pWhy are you here now?\nTo ask for forgiveness?\pIt can't have just been\nfor a fight, right?$"

WingPeak_2F_Trigger_NasFight_Text_34:
	.string "Correct, Claderino.\pActually…\nI've come looking for someone.$"

WingPeak_2F_Trigger_NasFight_Text_35:
	.string "Looking for someone?$"

WingPeak_2F_Trigger_NasFight_Text_36:
	.string "For a while now I've been having\nthese weird daydreams… at least\lI think that's what they are.\pThis kid appears, tells me to come\nand save him from Wing Peak,\land then vanishes.$"

WingPeak_2F_Trigger_NasFight_Text_37:
	.string "I think I'm just going crazy,\nbut I decided to check out\lWing Peak anyway.$"

WingPeak_2F_Trigger_NasFight_Text_38:
	.string "No, you're not crazy.\nI'm having the same daydreams.\pI didn't tell anyone because I\ndidn't want them to think that\lI was a looney or something.$"

WingPeak_2F_Trigger_NasFight_Text_39:
	.string "Interesting…$"

WingPeak_2F_Trigger_NasFight_Text_40:
	.string "In that case, mind if I tag along\nwith you, Claderino?$"

WingPeak_2F_Trigger_NasFight_Text_41:
	.string "I mean, we're both climbing the\nmountain, so why not.\pYou'll have a lot of explaining to\ndo at the top, though.\pI'm sure Fern and the others are\nthere already.$"

WingPeak_2F_Trigger_NasFight_Text_42:
	.string "We'll cross that bridge when\nwe come to it.$"
