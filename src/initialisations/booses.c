/*
** EPITECH PROJECT, 2022
** initialisation
** File description:
** detect the boss
*/

#include "character.h"
#include "collisions.h"

const int rep = 48;

void verif_boss_2(character_t *prs, monster_t **mst, global *global)
{
    static int cond = 0;

    if (prs->colision[rep]->position.x + 64
    + prs->movement_speed >= prs->colision[47]->position.x
    && prs->colision[rep]->position.x <= prs->colision[47]->position.x
    + prs->colision[47]->size.x
    && prs->colision[rep]->position.y + 64
    + prs->movement_speed >= prs->colision[47]->position.y
    && prs->colision[rep]->position.y <= prs->colision[47]->position.y
    + prs->colision[47]->size.y && cond == 0 /*&& prs->shop_npc.key_blue == 1*/) {
        cond = 1;
        my_putstr("arbre");
        is_there_fight(global, prs, mst[5]);
    }
}

void verif_boss(character_t *prs, monster_t **mst, global *global)
{
    static int cond = 0;

    if (prs->colision[rep]->position.x + 64
    + prs->movement_speed >= prs->colision[46]->position.x
    && prs->colision[rep]->position.x <= prs->colision[46]->position.x
    + prs->colision[46]->size.x
    && prs->colision[rep]->position.y + 64
    + prs->movement_speed >= prs->colision[46]->position.y
    && prs->colision[rep]->position.y <= prs->colision[46]->position.y
    + prs->colision[46]->size.y && cond == 0/*&& prs->shop_npc.key_green == 1*/) {
        cond = 1;
        my_putstr("lac");
        is_there_fight(global, prs, mst[6]);
    }
    verif_boss_2(prs, mst, global);
}
