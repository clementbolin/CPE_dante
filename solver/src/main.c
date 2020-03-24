/*
** EPITECH PROJECT, 2020
** dante
** File description:
** solver main
*/

#include "solver.h"

void debug_mode(char **map)
{
    for (int i = 0; map[i] != NULL; i++) {
        for (int j = 0; map[i][j] != '\0'; j++) {
            if (map[i][j] == 'X')
                printf("\033[34;01m%c\033[00m", map[i][j]);
            else
                printf("%c", map[i][j]);
        }
        printf("\n");
    }
}

void printsolution(char **map)
{
    for (int i = 0; i != end.y; i++) {

        if (i == end.y-1) {
            printf("%s", map[i]);
            break;
        }
        printf("%s\n", map[i]);
    }
}

int solvemaze(int r, int c, char **map, char **solution)
{
    if ((r == end.x-1) && (c == end.x-1)) {
        solution[r][c] = 'X';
        return (1);
    }
    if (r >= 0 && c >= 0 && r < end.y && c < end.x && \
        solution[r][c] == '*' && map[r][c] == '*') {
        solution[r][c] = 'X';
        if (debug_etat == 1) {
            debug_mode(solution);
            printf("\n");
            sleep(1);
        }
        if (solvemaze(r+1, c, map, solution))
            return (1);
        if (solvemaze(r, c+1, map, solution))
            return (1);
        if (solvemaze(r-1, c, map, solution))
            return (1);
        if (solvemaze(r, c-1, map, solution))
            return (1);
        solution[r][c] = 'o';
        return (0);
    }
    return (0);
}

char **fill_map_end(char **map, char **empty)
{
    for (int i = 0; map[i] != NULL; i++) {
        for (int j = 0; map[i][j] != '\0'; j++) {
            if (map[i][j] == 'X')
                empty[i][j] = 'o';
        }
    }
}

void init_start(map_t *map)
{
    for (int i = 0; map->map_epty[i] != NULL; i++) {
        for (int j = 0; map->map_epty[i][j] != '\0'; j++)
            map->map_epty[i][j] = '*';
    }
    end.x += 1;
    end.y += 1;
}

int main(int ac, char **av)
{
    struct stat file_info;
    map_t map;

    end.x = 0;
    end.y = 0;
    if (ac == 3) {
        if (av[2][0] == '-' && av[2][1] == 'D')
            debug_etat = 1;
    }
    map.map = pars_map(read_files(&file_info, av[1]));
    map.map_epty = pars_map(read_files(&file_info, av[1]));
    recup_pause_end(&end, map.map);
    init_start(&map);
    if (solvemaze(0, 0, map.map, map.map_epty)) {
        fill_map_end(map.map_epty, map.map);
        printsolution(map.map);
    }
    else {
        printf("no solution found");
        return (0);
    }
    return (0);
}