/*
** EPITECH PROJECT, 2020
** dante
** File description:
** generator man
*/

#include "my.h"
#include "generator.h"

char **create_map(int length, int height)
{
    char **map = malloc(sizeof(char *) * (height + 1));

    for (int i = 0; i < height; i += 1) {
        map[i] = malloc(sizeof(char) * (length + 1));
        map[i][length] = '\0';
    }
    map[height] = NULL;
    for (int i = 0; i < height; i += 1) {
        if (i % 2 == 0)
            for (int j = 0; j < length; j += 1) {
                if (j % 2 == 0)
                    map[i][j] = 'p';
                else
                    map[i][j] = 'X';
            }
        else
            for (int j = 0; j < length; j += 1)
                map[i][j] = 'X';
    }
    return (map);
}

int generate_map(int ac, char **av)
{
    char **map = create_map(atoi(av[1]), atoi(av[2]));

    perfect_map(map, atoi(av[2]), atoi(av[1]));
    if (ac == 3)
        imperfect_map(map, atoi(av[2]), atoi(av[1]));
    for (int i = 0; i < atoi(av[2]) - 1; i += 1)
        printf("%s\n", map[i]);
    printf("%s", map[atoi(av[2]) - 1]);
    return (0);
}