ThreeIsland_PokemonCenter_1F_MapScripts:: @ 8171832
	map_script 3, ThreeIsland_PokemonCenter_1F_MapScript1_17183D
	map_script 5, ThreeIsland_PokemonCenter_1F_MapScript2_1BC05C
	.byte 0

ThreeIsland_PokemonCenter_1F_MapScript1_17183D:: @ 817183D
	setrespawn SPAWN_THREE_ISLAND
	end

ThreeIsland_PokemonCenter_1F_EventScript_171841:: @ 8171841
	lock
	faceplayer
	call EventScript_1A6578
	release
	end

ThreeIsland_PokemonCenter_1F_EventScript_17184A:: @ 817184A
	msgbox gUnknown_81A303B, 2
	end

ThreeIsland_PokemonCenter_1F_EventScript_171853:: @ 8171853
	msgbox gUnknown_81A30A3, 2
	end

ThreeIsland_PokemonCenter_1F_EventScript_17185C:: @ 817185C
	msgbox gUnknown_81A2FB5, 2
	end
