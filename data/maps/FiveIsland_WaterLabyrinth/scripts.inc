FiveIsland_WaterLabyrinth_MapScripts:: @ 816884D
	.byte 0

FiveIsland_WaterLabyrinth_EventScript_16884E:: @ 816884E
	special sub_8110AB4
	compare_var_to_value VAR_RESULT, 2
	goto_if eq, EventScript_1A7AE0
	special sub_8112364
	lock
	faceplayer
	checkflag FLAG_GOT_TOGEPI_EGG
	goto_if TRUE, EventScript_1688E3
	checkflag FLAG_NO_ROOM_FOR_TOGEPI_EGG
	goto_if TRUE, EventScript_16892C
	msgbox gUnknown_818A80D
	specialvar VAR_RESULT, Special_GetLeadMonFriendship
	compare_var_to_value VAR_RESULT, 6
	goto_if eq, EventScript_1688AC
	msgbox gUnknown_818A88F
	release
	end

EventScript_168895:: @ 8168895
	famechecker FAMECHECKER_DAISY, 2
	msgbox gUnknown_818AA0C
	release
	end

EventScript_1688AC:: @ 81688AC
	msgbox gUnknown_818A8A6
	goto EventScript_1688BA
	end

EventScript_1688BA:: @ 81688BA
	countpokemon
	compare_var_to_value VAR_RESULT, 6
	goto_if eq, EventScript_16891F
	setflag FLAG_GOT_TOGEPI_EGG
	giveegg SPECIES_TOGEPI
	textcolor 3
	playfanfare MUS_FANFA1
	message Text_18A91F
	waitfanfare
	waitmessage
	call EventScript_1A6675
	goto EventScript_1688E3
	end

EventScript_1688E3:: @ 81688E3
	getspeciesname 1, SPECIES_TOGEPI
	setvar VAR_0x8004, SPECIES_TOGEPI
	specialvar VAR_RESULT, Special_PlayerPartyContainsSpeciesWithPlayerID
	compare_var_to_value VAR_RESULT, 1
	goto_if eq, EventScript_168895
	getspeciesname 1, SPECIES_TOGETIC
	setvar VAR_0x8004, SPECIES_TOGETIC
	specialvar VAR_RESULT, Special_PlayerPartyContainsSpeciesWithPlayerID
	compare_var_to_value VAR_RESULT, 1
	goto_if eq, EventScript_168895
	msgbox gUnknown_818A9C0
	release
	end

EventScript_16891F:: @ 816891F
	setflag FLAG_NO_ROOM_FOR_TOGEPI_EGG
	msgbox gUnknown_818A940
	release
	end

EventScript_16892C:: @ 816892C
	goto EventScript_1688BA
	end
