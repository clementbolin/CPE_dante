/*
** EPITECH PROJECT, 2020
** dante
** File description:
** tool
*/

#include "solver.h"

void recup_pause_end(pos_t *end, char **map)
{
    int i = 0;
    int j = 0;

    for (; map[i] != NULL; i++) {
        for (; map[i][j]; j++);
    }
    end->x = j-1;
    end->y = i-1;
}