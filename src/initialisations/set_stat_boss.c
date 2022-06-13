/*
** EPITECH PROJECT, 2022
** B-MUL-200-NAN-2-1-myrpg-matteo.turpault
** File description:
** set_stat_boss
*/

#include "character.h"

void set_dragon(monster_t *mst)
{
    mst->gain_xp = (rand() % 1500) + 850;
    mst->hp = (rand() % 200) + 150;
    mst->level = 24;
    mst->damages = (rand() % 20) + 15;
    mst->defenses = (rand() % 20) + 25;
    mst->speed = (rand() % 10) + 2;
    mst->gain_money = (rand() % 500) + 250;
}

void set_marin(monster_t *mst)
{
    mst->gain_xp = (rand() % 3000) + 1200;
    mst->hp = (rand() % 500) + 300;
    mst->level = 24;
    mst->damages = (rand() % 100) + 20;
    mst->defenses = (rand() % 100) + 20;
    mst->speed = 10;
    mst->gain_money = (rand() % 5000) + 1250;
}

void set_stat(monster_t **mst, int i)
{
    if (i == 0)
        set_slime(mst[i], 3, 1);
    if (i == 1)
        set_slime(mst[i], 1, 3);
    if (i == 2)
        set_ghost(mst[i]);
    if (i == 3)
        set_zombie(mst[i]);
    if (i == 4)
        set_pablo(mst[i]);
    if (i == 5)
        set_dragon(mst[i]);
    if (i == 6)
        set_marin(mst[i]);
}
