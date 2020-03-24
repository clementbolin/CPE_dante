/*
** EPITECH PROJECT, 2020
** dante
** File description:
** generator man
*/

#include "my.h"
#include "generator.h"

void print_map(char **map, int height, int lenght)
{
    if (map[height - 1][lenght - 1] == 'X')
        map[height - 1][lenght - 1] = 's';
    if (map[height - 2][lenght - 1] == 'X')
        map[height - 2][lenght - 1] = 's';
    if (map[height - 2][lenght - 1] == 's'
    && map[height - 1][lenght - 2] == 's')
        map[height - 2][lenght - 1] = 'X';
    for (int i = 0; map[i]; i += 1) {
        for (int j = 0; map[i][j]; j += 1) {
            if (map[i][j] == 's' || map[i][j] == 'p')
                write(1, "*", 1);
            else
                write(1, &map[i][j], 1);
        }
        write(1, "\n", 1);
    }
}