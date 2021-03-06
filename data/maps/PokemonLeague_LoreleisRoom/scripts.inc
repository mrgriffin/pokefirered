PokemonLeague_LoreleisRoom_MapScripts:: @ 816256C
	map_script 5, PokemonLeague_LoreleisRoom_MapScript1_162586
	map_script 1, PokemonLeague_LoreleisRoom_MapScript2_162591
	map_script 3, PokemonLeague_LoreleisRoom_MapScript3_1625B2
	map_script 4, PokemonLeague_LoreleisRoom_MapScript4_1625B6
	map_script 2, PokemonLeague_LoreleisRoom_MapScript5_1625C5
	.byte 0

PokemonLeague_LoreleisRoom_MapScript1_162586:: @ 8162586
	setvar VAR_0x8004, 0
	call EventScript_1A75D5
	end

PokemonLeague_LoreleisRoom_MapScript2_162591:: @ 8162591
	checkflag FLAG_DEFEATED_LORELEI
	call_if TRUE, EventScript_1625AC
	compare_var_to_value VAR_MAP_SCENE_POKEMON_LEAGUE, 1
	call_if eq, EventScript_1625A6
	end

EventScript_1625A6:: @ 81625A6
	call EventScript_1A759C
	return

EventScript_1625AC:: @ 81625AC
	call EventScript_1A7538
	return

PokemonLeague_LoreleisRoom_MapScript3_1625B2:: @ 81625B2
	setworldmapflag FLAG_WORLD_MAP_POKEMON_LEAGUE_LORELEIS_ROOM
	end

PokemonLeague_LoreleisRoom_MapScript4_1625B6:: @ 81625B6
	map_script_2 VAR_0x4001, 0, EventScript_1625C0
	.2byte 0

EventScript_1625C0:: @ 81625C0
	turnobject 255, 2
	end

PokemonLeague_LoreleisRoom_MapScript5_1625C5:: @ 81625C5
	map_script_2 VAR_MAP_SCENE_POKEMON_LEAGUE, 0, EventScript_1625CF
	.2byte 0

EventScript_1625CF:: @ 81625CF
	lockall
	call EventScript_1A751F
	setvar VAR_MAP_SCENE_POKEMON_LEAGUE, 1
	releaseall
	end

PokemonLeague_LoreleisRoom_EventScript_1625DC:: @ 81625DC
	lock
	faceplayer
	famechecker FAMECHECKER_LORELEI, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
	checkflag FLAG_DEFEATED_LORELEI
	goto_if TRUE, EventScript_162669
	famechecker FAMECHECKER_LORELEI, 0
	famechecker FAMECHECKER_LORELEI, 1
	checkflag FLAG_SYS_CAN_LINK_WITH_RS
	call_if FALSE, EventScript_162641
	checkflag FLAG_SYS_CAN_LINK_WITH_RS
	call_if TRUE, EventScript_16264A
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_5
	checkflag FLAG_SYS_CAN_LINK_WITH_RS
	call_if FALSE, EventScript_162653
	checkflag FLAG_SYS_CAN_LINK_WITH_RS
	call_if TRUE, EventScript_16265E
	clearflag FLAG_TEMP_5
	goto EventScript_162673

EventScript_162640:: @ 8162640
	end

EventScript_162641:: @ 8162641
	msgbox gUnknown_8177FA4
	return

EventScript_16264A:: @ 816264A
	msgbox gUnknown_8178089
	return

EventScript_162653:: @ 8162653
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_ELITE_FOUR_LORELEI, 0, Text_178191
	return

EventScript_16265E:: @ 816265E
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_ELITE_FOUR_LORELEI_2, 0, Text_178191
	return

EventScript_162669:: @ 8162669
	msgbox gUnknown_81781B0
	release
	end

EventScript_162673:: @ 8162673
	setflag FLAG_DEFEATED_LORELEI
	call EventScript_1A7506
	msgbox gUnknown_81781B0
	release
	end
