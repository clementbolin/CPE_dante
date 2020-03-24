/*
** EPITECH PROJECT, 2020
** dante
** File description:
** generator man
*/

#include "my.h"
#include "generator.h"

void modify_map(char **map, int height, char c, char d)
{
    for (int i = 0; map[height - 1][i]; i += 1)
        if (i % 2 == 0)
            map[height - 1][i] = c;
        else
            map[height - 1][i] = d;
}

void perfect_map2(char **map, int height, int lenght, int *pos)
{
    if (lenght % 2 == 0 && height % 2 == 0)
        modify_map(map, height, 'X', '*');
    if (lenght % 2 != 0 && height % 2 == 0)
        modify_map(map, height, '*', 'X');
}

void pair_line(char **map, int i)
{
    for (int j = 0; map[i][j]; j += 1)
        map[i][j] = '*';
}

void impair_line(char **map, int i, int lenght)
{
    if (i % 4 == 1)
        map[i][lenght - 1] = '*';
    else
        map[i][0] = '*';
}

void perfect_map(char **map, int height, int lenght)
{
    int pos[2] = {0, 0};

    for (int i = 0; map[i]; i += 1)
        if (i % 2 == 0)
            pair_line(map, i);
        else if (i % 2 != 0)
            impair_line(map, i, lenght);
    perfect_map2(map, height, lenght, pos);
}