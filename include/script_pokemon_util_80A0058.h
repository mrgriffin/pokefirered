#ifndef GUARD_SCRIPT_POKEMON_UTIL_80A0058_H
#define GUARD_SCRIPT_POKEMON_UTIL_80A0058_H

bool8 ScriptGiveMon(u16 species, u8 level, u16 item, u32 unk1, u32 unk2, u8 unk3);
bool8 ScriptGiveEgg(u16 species);
void ScriptSetMonMoveSlot(u8 partyIdx, u16 move, u8 slot);
void sp000_heal_pokemon(void);
void ReducePlayerPartyToThree(void);

#endif //GUARD_SCRIPT_POKEMON_UTIL_80A0058_H
