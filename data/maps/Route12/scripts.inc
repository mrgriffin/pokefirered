Route12_MapScripts:: @ 8168000
	map_script 5, Route12_MapScript1_168006
	.byte 0

Route12_MapScript1_168006:: @ 8168006
	checkflag FLAG_SYS_SPECIAL_WILD_BATTLE
	call_if TRUE, EventScript_168010
	end

EventScript_168010:: @ 8168010
	removeobject VAR_LAST_TALKED
	return

Route12_EventScript_168014:: @ 8168014
	lock
	faceplayer
	checkflag FLAG_GOT_POKE_FLUTE
	goto_if FALSE, EventScript_168099
	special sub_8110AB4
	compare_var_to_value VAR_RESULT, 2
	goto_if eq, EventScript_1A7AE0
	special sub_8112364
	msgbox gUnknown_81853CC, MSGBOX_YESNO
	compare_var_to_value VAR_RESULT, 0
	goto_if eq, EventScript_16808D
	call EventScript_1A924B
	setwildbattle SPECIES_SNORLAX, 30, ITEM_NONE
	waitse
	playmoncry SPECIES_SNORLAX, 2
	delay 40
	waitmoncry
	setflag FLAG_HIDE_ROUTE_12_SNORLAX
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
	setflag FLAG_WOKE_UP_ROUTE_12_SNORLAX
	dowildbattle
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
	specialvar VAR_RESULT, Special_GetBattleOutcome
	compare_var_to_value VAR_RESULT, B_OUTCOME_WON
	goto_if eq, EventScript_16808F
	compare_var_to_value VAR_RESULT, B_OUTCOME_RAN
	goto_if eq, EventScript_16808F
	compare_var_to_value VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if eq, EventScript_16808F
	release
	end

EventScript_16808D:: @ 816808D
	release
	end

EventScript_16808F:: @ 816808F
	msgbox gUnknown_8185383
	release
	end

EventScript_168099:: @ 8168099
	msgbox gUnknown_8185317
	release
	end

Route12_EventScript_1680A3:: @ 81680A3
	msgbox gUnknown_8185797, 3
	end

Route12_EventScript_1680AC:: @ 81680AC
	msgbox gUnknown_81857B3, 3
	end
