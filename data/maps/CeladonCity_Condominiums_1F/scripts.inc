CeladonCity_Condominiums_1F_MapScripts:: @ 816C320
	.byte 0

CeladonCity_Condominiums_1F_EventScript_16C321:: @ 816C321
	lock
	faceplayer
	checkflag FLAG_TALKED_TO_TEA_LADY_AFTER_HOF
	goto_if TRUE, EventScript_16C36A
	checkflag FLAG_SYS_GAME_CLEAR
	goto_if TRUE, EventScript_16C374
	checkflag FLAG_GOT_TEA
	goto_if TRUE, EventScript_16C36A
	msgbox gUnknown_81960C9
	setflag FLAG_GOT_TEA
	giveitem ITEM_TEA
	compare_var_to_value VAR_RESULT, 0
	goto_if eq, EventScript_1A6BF9
	msgbox gUnknown_8196109
	release
	end

EventScript_16C36A:: @ 816C36A
	msgbox gUnknown_8196148
	release
	end

EventScript_16C374:: @ 816C374
	famechecker FAMECHECKER_DAISY, 4
	setflag FLAG_TALKED_TO_TEA_LADY_AFTER_HOF
	msgbox gUnknown_8196188
	release
	end

CeladonCity_Condominiums_1F_EventScript_16C38E:: @ 816C38E
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MEOWTH, 0
	msgbox gUnknown_81960BB
	waitmoncry
	release
	end

CeladonCity_Condominiums_1F_EventScript_16C3A1:: @ 816C3A1
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CLEFAIRY, 0
	msgbox gUnknown_819625B
	waitmoncry
	release
	end

CeladonCity_Condominiums_1F_EventScript_16C3B4:: @ 816C3B4
	lock
	faceplayer
	waitse
	playmoncry SPECIES_NIDORAN_F, 0
	msgbox gUnknown_8196272
	waitmoncry
	release
	end

CeladonCity_Condominiums_1F_EventScript_16C3C7:: @ 816C3C7
	msgbox gUnknown_8196287, 3
	end
