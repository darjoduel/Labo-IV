#ifndef STRUCTS_H
#define STRUCTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tools.h"

typedef struct pokemon_{
    char *name;
    char *move_set[4];
    char **ascii;
    unsigned int attack;
    unsigned int defense;
    unsigned int speed;
    unsigned int hp;
}pkmn;

typedef struct player_{
    char *name;
    pkmn *monster;
}ply;

/**
 * @brief Inicializar estructura jugador
 * 
 * @return struct ply 
 */
ply initPly(){
    ply current;
    current.name = NULL;
    return current;
}

void pkmnSet(ply *curr, char *name)
{
    curr->monster = malloc(sizeof(pkmn));
    curr->monster->name = name;
    if(!strcmp(name, "Venosaur"))
    {
        curr->monster->ascii = readText("art/venosaur.txt");
        const char *moves[] = {
            "Movimiento_1",
            "Movimiento_2",
            "Movimiento_3",
            "Movimiento_4"
        };
        for (int i = 0; i < 4; i++)
            curr->monster->move_set[i] = (char *)moves[i];
        curr->monster->attack = 50;
        curr->monster->defense = 50;
        curr->monster->speed = 50;
        curr->monster->hp = 100;
    }
    else if(!strcmp(name, "Charizard"))
    {
        curr->monster->ascii = readText("art/venosaur.txt");
        const char *moves[] = {
            "Movimiento_1",
            "Movimiento_2",
            "Movimiento_3",
            "Movimiento_4"
        };
        for (int i = 0; i < 4; i++)
            curr->monster->move_set[i] = (char *)moves[i];
        curr->monster->attack = 50;
        curr->monster->defense = 50;
        curr->monster->speed = 50;
        curr->monster->hp = 100;
    }
    else if(!strcmp(name, "Blastoise"))
    {
        curr->monster->ascii = readText("art/venosaur.txt");
        const char *moves[] = {
            "Movimiento_1",
            "Movimiento_2",
            "Movimiento_3",
            "Movimiento_4"
        };
        for (int i = 0; i < 4; i++)
            curr->monster->move_set[i] = (char *)moves[i];
        curr->monster->attack = 50;
        curr->monster->defense = 50;
        curr->monster->speed = 50;
        curr->monster->hp = 100;
    }
}

/*
void printPkmn(pkmn monster, int x, int y)
{
    monster.ascii = 
    WINDOWS *win = newwin();
}*/
#endif /* STRUCTS_H */
