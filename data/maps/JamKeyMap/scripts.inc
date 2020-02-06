JamKeyMap_MapScripts::
	.byte 0

JamKeyMap_EventScript_DebugArum::
	trainerbattle_single TRAINER_ARUM, JamKeyMap_Text_Null, JamKeyMap_Text_Null
	msgbox JamKeyMap_Text_Null, MSGBOX_AUTOCLOSE
	end

JamKeyMap_EventScript_DebugLog::
	trainerbattle_single TRAINER_LOG_2, JamKeyMap_Text_Null, JamKeyMap_Text_Null
	msgbox JamKeyMap_Text_Null, MSGBOX_AUTOCLOSE
	end

JamKeyMap_Text_Null:
	.string "…$"