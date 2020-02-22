OracleHill_Cave_MapScripts::
	.byte 0

OracleHill_EventScript_Oracle::
	lock
	faceplayer
	goto_if_set FLAG_MEET_ORACLE, OracleHill_EventScript_OracleAfterFirstMeeting
	msgbox OracleHill_Text_OracleGreeting, MSGBOX_DEFAULT
	closemessage
	delay 30
	applymovement EVENT_OBJ_ID_PLAYER, OracleHill_Movement_PlayerSitDown
	waitmovement 0
	special SpawnCameraObject
	applymovement EVENT_OBJ_ID_CAMERA, OracleHill_Movement_CameraMoveUp
	waitmovement 0
	delay 50
	msgbox OracleHill_Text_OracleNext, MSGBOX_DEFAULT
	closemessage
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
	waitmovement 0
	msgbox OracleHill_Text_OracleYouWannaMove, MSGBOX_DEFAULT
	closemessage
	delay 30
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox OracleHill_Text_OracleYourEyes, MSGBOX_DEFAULT
	closemessage
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
	waitmovement 0
	msgbox OracleHill_Text_OracleVeryWell, MSGBOX_DEFAULT
	closemessage
	applymovement 1, Common_Movement_WalkInPlaceFastestDown
	waitmovement 0
	msgbox OracleHill_Text_OracleLegend, MSGBOX_DEFAULT
	closemessage
	applymovement 1, Common_Movement_WalkInPlaceFastestDown
	waitmovement 0
	msgbox OracleHill_Text_OracleLongShot, MSGBOX_DEFAULT
	closemessage
	delay 30
	msgbox OracleHill_Text_OracleCheckRuins, MSGBOX_DEFAULT
	closemessage
	delay 30
	applymovement 1, OracleHill_Movement_OracleMoveDown
	waitmovement 0
	giveitem_std ITEM_BRAILLE_GUIDE, 1
	setflag FLAG_MEET_ORACLE
	delay 30
	applymovement 1, OracleHill_Movement_OracleMoveBack
	waitmovement 0
	delay 30
	msgbox OracleHill_Text_OracleGuideExplain, MSGBOX_DEFAULT
	closemessage
	applymovement EVENT_OBJ_ID_CAMERA, OracleHill_Movement_OracleMoveDown
	waitmovement 0
	special RemoveCameraObject
	delay 30
	release
	end

OracleHill_EventScript_OracleAfterFirstMeeting::
	msgbox OracleHill_Text_OracleGoodLuck, MSGBOX_DEFAULT
	closemessage
	release
	end

OracleHill_Movement_PlayerSitDown:
	walk_down
	walk_down
	face_up
	step_end

OracleHill_Movement_CameraMoveUp:
	walk_up
	walk_up
	step_end

OracleHill_Movement_OracleMoveDown:
	walk_down
	walk_down
	step_end

OracleHill_Movement_OracleMoveBack:
	walk_up
	walk_up
	face_down
	step_end

OracleHill_Text_OracleGreeting:
	.string "Young {PLAYER}…\n"
	.string "We have not met for some time!\p"
	.string "Are you troubled?\n"
	.string "I would like to help however I can.\p"
	.string "Please, sit down.$"

OracleHill_Text_OracleNext:
	.string "So, {PLAYER}…\n"
	.string "What is it you would like to talk about?$"

OracleHill_Text_OracleYouWannaMove:
	.string "Oho?\n"
	.string "You want to move to Honzhu City?\p"
	.string "Not just that, but you want to transfer\n"
	.string "the berry business there?\p"
	.string "{PLAYER}…\p"
	.string "As you and I know, we nor anybody\n"
	.string "else in Cho Village are wealthy enough\l"
	.string "to move out of here…$"

OracleHill_Text_OracleYourEyes:
	.string "Your eyes, young {PLAYER}…\n"
	.string "They project an intensity that I\l"
	.string "haven't felt in a long time…\p"
	.string "Why, {PLAYER}?\p"
	.string "Village life is stable.\n"
	.string "It is tough, but everyone, including\l"
	.string "you, is getting by.\p"
	.string "Not only do you lack the funds to\n"
	.string "move, but anything could happen\l"
	.string "out there, and we would not be able to\l"
	.string "help you…$"

OracleHill_Text_OracleVeryWell:
	.string "Very well…\n"
	.string "I can feel your determination.\p"
	.string "Money is still an issue, but\n"
	.string "I have one idea on how you can gather\l"
	.string "funds for your move…\p"
	.string "There exists a popular legend around\n"
	.string "this area.\p"
	.string "Let me explain.$"

OracleHill_Text_OracleLegend:
	.string "Many, many years ago, a lowly peasant\n"
	.string "lived in this area.\p"
	.string "Our region was ruled by a powerful\n"
	.string "emperor who took all that people\l"
	.string "had and left them with mere scraps.\p"
	.string "One day, the lowly peasant unearthed a\n"
	.string "golden relic whilst farming the fields.\p"
	.string "The peasant wanted to sell this relic\n"
	.string "and move up in the world, but he had\l"
	.string "to be wary of the emperor, who was\l"
	.string "going to the fields later that day.\p"
	.string "So the peasant hid the relic deep\n"
	.string "underground, and covered the hole with\l"
	.string "earth and leaves so that it would not\l"
	.string "stand out.\p"
	.string "The emperor came and went with no\n"
	.string "incident, but when the time came to\l"
	.string "unearth the relic, it was gone!\p"
	.string "Unfortunately for the peasant, that is\n"
	.string "where the story ends.\p"
	.string "He never recovered his treasure.$"

OracleHill_Text_OracleLongShot:
	.string "It is a long shot, but perhaps this\n"
	.string "story is real and this golden relic\l"
	.string "is still out there.\p"
	.string "Apart from wishing on a shooting star,\n"
	.string "obtaining that relic and selling it is\l"
	.string "the only way for you to gain the wealth\l"
	.string "you need in order to move to the city.$"

OracleHill_Text_OracleCheckRuins:
	.string "I suggest you head to the Color Ruins\n"
	.string "as there may be more information there.\p"
	.string "The text in the ruins is written in an\n"
	.string "obscure language, so please take this.$"

OracleHill_Text_OracleGuideExplain:
	.string "That should help you decipher the\n"
	.string "language in the Color Ruins.\p"
	.string "I was given it years ago by an old\n"
	.string "friend of mine.\p"
	.string "Good luck, young {PLAYER}.\n"
	.string "I hope you can achieve your dream.$"

OracleHill_Text_OracleGoodLuck:
	.string "Good luck, young {PLAYER}.\n"
	.string "I hope my words have aided you.$"
