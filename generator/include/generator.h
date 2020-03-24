/*
** EPITECH PROJECT, 2019
** dante
** File description:
** generator
*/

#ifndef GENERATOR
#define GENERATOR

typedef struct perfect_s {
    int pos[2];
    int last_pos[2];
    int **look;
    int highest;
    int highest_pos;
} perfect_t;

int generate_map(int ac, char **av);
void perfect_map(char **map, int height, int length);
void print_map(char **map, int height, int lenght);
void imperfect_map(char **map, int height, int lenght);

#endif