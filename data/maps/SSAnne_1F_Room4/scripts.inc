SSAnne_1F_Room4_MapScripts:: @ 8160C43
	.byte 0

SSAnne_1F_Room4_EventScript_160C44:: @ 8160C44
	lock
	faceplayer
	checkplayergender
	compare_var_to_value VAR_RESULT, 0
	goto_if eq, EventScript_160C5C
	msgbox gUnknown_8173BA4
	release
	end

EventScript_160C5C:: @ 8160C5C
	msgbox gUnknown_8173B79
	release
	end
