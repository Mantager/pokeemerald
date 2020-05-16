TiyuForest_MapScripts::
	.byte 0

TiyuForest_EventScript_Shi::
	trainerbattle_single TRAINER_SHI, TiyuForest_Text_ShiIntro, TiyuForest_Text_ShiDefeat
	msgbox TiyuForest_Text_ShiPostBattle, MSGBOX_AUTOCLOSE
	end

TiyuForest_EventScript_Ping::
	trainerbattle_single TRAINER_PING, TiyuForest_Text_PingIntro, TiyuForest_Text_PingDefeat
	msgbox TiyuForest_Text_ShiPostBattle, MSGBOX_AUTOCLOSE
	end

TiyuForest_EventScript_Chuntao::
	trainerbattle_single TRAINER_CHUNTAO, TiyuForest_Text_ChuntaoIntro, TiyuForest_Text_ChuntaoDefeat
	msgbox TiyuForest_Text_ChuntaoPostBattle, MSGBOX_AUTOCLOSE
	end

TiyuForest_EventScript_Daiyu::
	trainerbattle_single TRAINER_DAIYU, TiyuForest_Text_DaiyuIntro, TiyuForest_Text_DaiyuDefeat
	msgbox TiyuForest_Text_DaiyuPostBattle, MSGBOX_AUTOCLOSE
	end
