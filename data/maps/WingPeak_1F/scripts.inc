WingPeak_1F_MapScripts::
	.byte 0


WingPeak_1F_Trigger_MisleEncounter::
	delay 32
	fadeoutbgm 1
	lockall
	delay 8
	msgbox WingPeak_1F_Trigger_MisleEncounter_Text_0
	closemessage
	delay 16
	msgbox WingPeak_1F_Trigger_MisleEncounter_Text_1
	closemessage
	delay 8
	msgbox WingPeak_1F_Trigger_MisleEncounter_Text_2
	closemessage
	delay 8
	msgbox WingPeak_1F_Trigger_MisleEncounter_Text_3
	closemessage
	delay 8
	msgbox WingPeak_1F_Trigger_MisleEncounter_Text_4
	closemessage
	delay 8
	msgbox WingPeak_1F_Trigger_MisleEncounter_Text_5
	closemessage
	delay 8
	msgbox WingPeak_1F_Trigger_MisleEncounter_Text_6
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement 0
	removeobject 1
	setflag FLAG_WING_PEAK_1F_HIDE_MISLE
	playse SE_W185
	waitse
	delay 8
	msgbox WingPeak_1F_Trigger_MisleEncounter_Text_7
	closemessage
	delay 16
	playmoncry SPECIES_HEATMOR, 0
	waitmoncry
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, WingPeak_1F_Movement_LookAround
	waitmovement 0
	msgbox WingPeak_1F_Trigger_MisleEncounter_Text_8
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	waitse
	delay 8
	setwildbattle SPECIES_HEATMOR, 35, ITEM_NONE
	message WingPeak_1F_Trigger_MisleEncounter_Text_9
	waitmessage
	dowildbattle
	fadeinbgm 1
	msgbox WingPeak_1F_Trigger_MisleEncounter_Text_10
	closemessage
	setvar VAR_PISTA_VILLAGE_STATE, 7
	delay 8
	releaseall
	end


WingPeak_1F_Trigger_GolbatFight::
	lock
	playmoncry SPECIES_HEATMOR, 0
	waitmoncry
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, WingPeak_1F_Movement_LookAround2
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	waitse
	delay 8
	setwildbattle SPECIES_GOLBAT, 35, ITEM_NONE
	message WingPeak_1F_Trigger_MisleEncounter_Text_9
	waitmessage
	dowildbattle
	setvar VAR_PISTA_VILLAGE_STATE, 8
	release
	end


WingPeak_1F_Movement_LookAround:
	delay_16
	delay_16
	face_up
	delay_16
	delay_16
	face_down
	delay_16
	delay_16
	face_left
	step_end

WingPeak_1F_Movement_LookAround2:
	delay_16
	delay_16
	face_up
	delay_16
	delay_16
	face_down
	delay_16
	delay_16
	face_right
	delay_16
	delay_16
	step_end

WingPeak_1F_Trigger_MisleEncounter_Text_0:
	.string "Please…\nSomebody, save me…$"

WingPeak_1F_Trigger_MisleEncounter_Text_1:
	.string "(…Wait, isn't this the kid from\nway back when?)$"

WingPeak_1F_Trigger_MisleEncounter_Text_2:
	.string "Climb to the top of Wing Peak…\nPlease…\lI'm so tired… and hungry…$"

WingPeak_1F_Trigger_MisleEncounter_Text_3:
	.string "(Am I going crazy, or…\nis this actually real?)$"

WingPeak_1F_Trigger_MisleEncounter_Text_4:
	.string "The top…\nThe top…$"

WingPeak_1F_Trigger_MisleEncounter_Text_5:
	.string "(Maybe he's' real after all…\nBut…)\p(If I get closer,\nwill he disappear again?)$"

WingPeak_1F_Trigger_MisleEncounter_Text_6:
	.string "(There's only one way to see,\nI guess.)$"

WingPeak_1F_Trigger_MisleEncounter_Text_7:
	.string "(I was right.)$"

WingPeak_1F_Trigger_MisleEncounter_Text_8:
	.string "(What was that?)$"

WingPeak_1F_Trigger_MisleEncounter_Text_9:
	.string "…Woah!$"

WingPeak_1F_Trigger_MisleEncounter_Text_10:
	.string "(The wild Pokémon in here sure\nare riled up…)\p(I'd better be careful.)\p(I wonder what's going on at\nthe top of the mountain, too.)$"
