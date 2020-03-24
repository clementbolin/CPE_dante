/*
** EPITECH PROJECT, 2020
** dante
** File description:
** pars map solver
*/

#include "solver.h"

char **malloc_x_tab(char *map, char **map_malloc, int len_x, int len_y)
{
    int tmp = 0;

    for (int j = 0; map[j] != '\0'; j++) {
        if (map[j] == '\n') {
            map_malloc[len_y] = malloc(sizeof(char) * len_x + 1);
            tmp = len_x;
            len_x = 0;
            len_y += 1;
        } else
            len_x += 1;
    }
    map_malloc[len_y] = malloc(sizeof(char) * tmp + 1);
    return (map_malloc);
}

char **my_malloc_map_solver(char *map)
{
    int len_y = 0;
    int len_x = 0;
    int tmp = 0;
    char **map_malloc = NULL;

    for (int i = 0; map[i] != '\0'; i++) {
        if (map[i] == '\n')
            len_y += 1;
    }
    len_y += 1;
    map_malloc = malloc(sizeof(char *) * (len_y + 1));
    len_y = 0;
    map_malloc = malloc_x_tab(map, map_malloc, len_x, len_y);
    return (map_malloc);
}

char **pars_map(char *map)
{
    char **new_map = my_malloc_map_solver(map);
    int y = 0;
    int x = 0;
    int tmp = 0;

    for (int i = 0; map[i] != '\0'; i++) {
        if (map[i] == '\n') {
            new_map[y][x] = '\0';
            tmp = x;
            x = 0;
            y += 1;
        } else {
            new_map[y][x] = map[i];
            x += 1;
        }
    }
    new_map[y][x] = '\0';
    new_map[y+1] = NULL;
    return (new_map);
}