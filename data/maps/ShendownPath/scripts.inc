ShendownPath_MapScripts::
	.byte 0

ShendownPath_EventScript_Ling::
	trainerbattle_single TRAINER_LING, ShendownPath_Text_LingIntro, ShendownPath_Text_LingDefeat
	msgbox ShendownPath_Text_LingPostBattle, MSGBOX_AUTOCLOSE
	end

ShendownPath_EventScript_Bai::
	trainerbattle_single TRAINER_BAI, ShendownPath_Text_BaiIntro ShendownPath_Text_BaiDefeat
	msgbox ShendownPath_Text_BaiPostBattle, MSGBOX_AUTOCLOSE
	end

ShendownPath_EventScript_Hong::
	trainerbattle_single TRAINER_HONG, ShendownPath_Text_HongIntro ShendownPath_Text_HongDefeat
	msgbox ShendownPath_Text_HongPostBattle, MSGBOX_AUTOCLOSE
	end

ShendownPath_EventScript_Sign::
	msgbox ShendownPath_Text_Sign, MSGBOX_SIGN
	end

ShendownPath_Text_LingIntro:
	.string "…$"

ShendownPath_Text_LingDefeat:
	.string "…$"

ShendownPath_Text_LingPostBattle:
	.string "…$"

ShendownPath_Text_BaiIntro:
	.string "…$"

ShendownPath_Text_BaiDefeat:
	.string "…$"

ShendownPath_Text_BaiPostBattle:
	.string "…$"

ShendownPath_Text_HongIntro: @ 82318A1
	.string "…$"

ShendownPath_Text_HongDefeat: @ 82318DD
	.string "…$"

ShendownPath_Text_HongPostBattle: @ 82318F2
	.string "…$"

ShendownPath_Text_Sign:
	.string "…$"
