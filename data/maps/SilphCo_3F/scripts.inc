SilphCo_3F_MapScripts:: @ 81616C5
	map_script 1, SilphCo_3F_MapScript1_1616CB
	.byte 0

SilphCo_3F_MapScript1_1616CB:: @ 81616CB
	checkflag FLAG_SILPH_3F_DOOR_1
	call_if FALSE, EventScript_1A81A5
	checkflag FLAG_SILPH_3F_DOOR_2
	call_if FALSE, EventScript_1A81DC
	end

SilphCo_3F_EventScript_1616DE:: @ 81616DE
	lock
	faceplayer
	compare_var_to_value VAR_MAP_SCENE_SILPH_CO_11F, 1
	goto_if ge, EventScript_1616F5
	msgbox gUnknown_81758AD
	release
	end

EventScript_1616F5:: @ 81616F5
	msgbox gUnknown_81758D3
	release
	end

SilphCo_3F_EventScript_1616FF:: @ 81616FF
	msgbox gUnknown_81759DC, 3
	end

SilphCo_3F_EventScript_161708:: @ 8161708
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_SCIENTIST_JOSE, 0, Text_175948, Text_17597D
	msgbox gUnknown_8175990, 6
	end

SilphCo_3F_EventScript_16171F:: @ 816171F
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_TEAM_ROCKET_GRUNT_25, 0, Text_1758F6, Text_175911
	msgbox gUnknown_817591C, 6
	end
