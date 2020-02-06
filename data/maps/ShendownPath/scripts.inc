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

ShendownPath_EventScript_Fisherman::
	lock
	faceplayer
	msgbox ShendownPath_Text_Fisherman, MSGBOX_DEFAULT
	applymovement 7, Common_Movement_FaceRight
	waitmovement 0
	release
	end

ShendownPath_Text_LingIntro:
	.string "Aha! Our eyes met!\n"
	.string "Looks like we've got ourselves a battle!$"

ShendownPath_Text_LingDefeat:
	.string "Aw… I was too rash…$"

ShendownPath_Text_LingPostBattle:
	.string "Wild Pokémon around here are pretty\n"
	.string "tame, so any Poké Ball you throw is\l"
	.string "guaranteed to catch something.$"

ShendownPath_Text_BaiIntro:
	.string "Taking the long way to Cho today?\n"
	.string "You must be pretty confident!$"

ShendownPath_Text_BaiDefeat:
	.string "Your confidence is warranted!$"

ShendownPath_Text_BaiPostBattle:
	.string "Living in a place like this is\n"
	.string "hard, but Pokémon make it all\l"
	.string "worth it.$"

ShendownPath_Text_HongIntro: @ 82318A1
	.string "I waited for you because I\n"
	.string "wanted to beat you!$"

ShendownPath_Text_HongDefeat: @ 82318DD
	.string "Looks like I'm the one who's\n"
	.string "getting beat…$"

ShendownPath_Text_HongPostBattle: @ 82318F2
	.string "I really ought to stop battling\n"
	.string "and get back to my dad's farm.$"

ShendownPath_Text_Sign:
	.string "Shendown Path$"

ShendownPath_Text_Fisherman:
	.string "Pokémon battle?\p"
	.string "{PLAYER}, you know I'm not\n"
	.string "into that stuff at all!\p"
	.string "No, all I want to do is fish!\n"
	.string "All day and all night!\p"
	.string "You should give up farming and\n"
	.string "come be a fisherman with me!$"
