#ifndef STRUCTS_H
#define STRUCTS_H

#include <stdio.h>
#include <stdlib.h>

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
    current.monster = NULL;
    return current;
}
#endif /* STRUCTS_H */
