/*
** EPITECH PROJECT, 2020
** dante
** File description:
** generator man
*/

#include "my.h"
#include "generator.h"

void imperfect_map3(char **map, int height, int lenght)
{
    if (height % 2 == 0)
        for (int i = height / 4 - 1; i <= 3 * height / 4 - 1; i += 1)
            map[i][lenght / 4] = 'X';
    if (height % 2 != 0)
        for (int i = height / 4 ; i <= 3 * height / 4; i += 1)
            map[i][lenght / 4] = 'X';
}

void imperfect_map2(char **map, int height, int lenght)
{
    if (height % 2 == 0)
        for (int i = height / 4 - 1; i <= 3 * height / 4 - 1; i += 1)
            map[i][lenght / 4 - 1] = 'X';
    if (height % 2 != 0)
        for (int i = height / 4 ; i <= 3 * height / 4; i += 1)
            map[i][lenght / 4 - 1] = 'X';
}

void imperfect_map(char **map, int height, int lenght)
{
    if (lenght <= 2)
        return;
    for (int i = 0; map[i]; i += 1)
        map[i][lenght - 1] = '*';
    if (lenght % 2 == 0) {
        for (int i = 1; map[i]; i += 1)
            map[i][lenght / 2 - 1] = 'X';
        imperfect_map2(map, height, lenght);
    } else if (lenght % 2 != 0){
        for (int i = 1; map[i]; i += 1)
            map[i][lenght / 2] = 'X';
        imperfect_map3(map, height, lenght);
    }
}