/*
** EPITECH PROJECT, 2022
** B-MUL-200-NAN-2-1-myrpg-matteo.turpault
** File description:
** set_stat_mob
*/

#include "character.h"

void set_slime(monster_t *mst, int def, int atk)
{
    mst->gain_xp = (rand() % 15) + 3;
    mst->hp = (rand() % 20) + 6;
    mst->level = 2;
    mst->damages = (rand() % 4) + atk;
    mst->defenses = (rand() % 1) + def;
    mst->speed = (rand() % 5) + 2;
    mst->gain_money = (rand() % 3) + 1;
}

void set_ghost(monster_t *mst)
{
    mst->gain_xp = (rand() % 5) + 4;
    mst->hp = (rand() % 20) + 20;
    mst->level = 7;
    mst->damages = (rand() % 10) + 5;
    mst->defenses = (rand() % 30) + 30;
    mst->speed = (rand() % 60) + 15;
    mst->gain_money = (rand() % 30) + 34;
}

void set_zombie(monster_t *mst)
{
    mst->gain_xp = (rand() % 30) + 31;
    mst->hp = (rand() % 200) + 150;
    mst->level = 8;
    mst->damages = (rand() % 20) + 15;
    mst->defenses = (rand() % 20) + 25;
    mst->speed = (rand() % 15) + 2;
    mst->gain_money = (rand() % 10) + 3;
}

void set_pablo(monster_t *mst)
{
    mst->gain_xp = (rand() % 200) + 100;
    mst->hp = (rand() % 10) + 3;
    mst->level = 3;
    mst->damages = (rand() % 2) + 3;
    mst->defenses = (rand() % 2) + 1;
    mst->speed = (rand() % 40) + 10;
    mst->gain_money = (rand() % 200) + 100;
}
