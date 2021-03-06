PokemonLeague_BrunosRoom_MapScripts:: @ 8162685
	map_script 5, PokemonLeague_BrunosRoom_MapScript1_16269A
	map_script 1, PokemonLeague_BrunosRoom_MapScript2_1626A5
	map_script 4, PokemonLeague_BrunosRoom_MapScript3_1626C6
	map_script 2, PokemonLeague_BrunosRoom_MapScript4_1626D5
	.byte 0

PokemonLeague_BrunosRoom_MapScript1_16269A:: @ 816269A
	setvar VAR_0x8004, 1
	call EventScript_1A75D5
	end

PokemonLeague_BrunosRoom_MapScript2_1626A5:: @ 81626A5
	checkflag FLAG_DEFEATED_BRUNO
	call_if TRUE, EventScript_1626C0
	compare_var_to_value VAR_MAP_SCENE_POKEMON_LEAGUE, 2
	call_if eq, EventScript_1626BA
	end

EventScript_1626BA:: @ 81626BA
	call EventScript_1A759C
	return

EventScript_1626C0:: @ 81626C0
	call EventScript_1A7538
	return

PokemonLeague_BrunosRoom_MapScript3_1626C6:: @ 81626C6
	map_script_2 VAR_0x4001, 0, EventScript_1626D0
	.2byte 0

EventScript_1626D0:: @ 81626D0
	turnobject 255, 2
	end

PokemonLeague_BrunosRoom_MapScript4_1626D5:: @ 81626D5
	map_script_2 VAR_MAP_SCENE_POKEMON_LEAGUE, 1, EventScript_1626DF
	.2byte 0

EventScript_1626DF:: @ 81626DF
	lockall
	call EventScript_1A751F
	setvar VAR_MAP_SCENE_POKEMON_LEAGUE, 2
	releaseall
	end

PokemonLeague_BrunosRoom_EventScript_1626EC:: @ 81626EC
	lock
	faceplayer
	famechecker FAMECHECKER_BRUNO, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
	checkflag FLAG_DEFEATED_BRUNO
	goto_if TRUE, EventScript_162779
	famechecker FAMECHECKER_BRUNO, 0
	famechecker FAMECHECKER_BRUNO, 1
	checkflag FLAG_SYS_GAME_CLEAR
	call_if FALSE, EventScript_162751
	checkflag FLAG_SYS_GAME_CLEAR
	call_if TRUE, EventScript_16275A
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_5
	checkflag FLAG_SYS_CAN_LINK_WITH_RS
	call_if FALSE, EventScript_162763
	checkflag FLAG_SYS_CAN_LINK_WITH_RS
	call_if TRUE, EventScript_16276E
	clearflag FLAG_TEMP_5
	goto EventScript_1627B0

EventScript_162750:: @ 8162750
	end

EventScript_162751:: @ 8162751
	msgbox gUnknown_817820F
	return

EventScript_16275A:: @ 816275A
	msgbox gUnknown_817830C
	return

EventScript_162763:: @ 8162763
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_ELITE_FOUR_BRUNO, 0, Text_178409
	return

EventScript_16276E:: @ 816276E
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_ELITE_FOUR_BRUNO_2, 0, Text_178409
	return

EventScript_162779:: @ 8162779
	msgbox gUnknown_8178420
	closemessage
	compare_var_to_value VAR_FACING, 2
	call_if eq, EventScript_1627FA
	compare_var_to_value VAR_FACING, 1
	call_if eq, EventScript_1627EF
	compare_var_to_value VAR_FACING, 3
	call_if eq, EventScript_162805
	compare_var_to_value VAR_FACING, 4
	call_if eq, EventScript_162805
	release
	end

EventScript_1627B0:: @ 81627B0
	setflag FLAG_DEFEATED_BRUNO
	call EventScript_1A7506
	msgbox gUnknown_8178420
	closemessage
	compare_var_to_value VAR_FACING, 2
	call_if eq, EventScript_1627FA
	compare_var_to_value VAR_FACING, 1
	call_if eq, EventScript_1627EF
	compare_var_to_value VAR_FACING, 3
	call_if eq, EventScript_162805
	compare_var_to_value VAR_FACING, 4
	call_if eq, EventScript_162805
	release
	end

EventScript_1627EF:: @ 81627EF
	applymovement 1, Movement_1A75E7
	waitmovement 0
	return

EventScript_1627FA:: @ 81627FA
	applymovement 1, Movement_1A75EB
	waitmovement 0
	return

EventScript_162805:: @ 8162805
	applymovement 1, Movement_1A75ED
	waitmovement 0
	return
