/*
** EPITECH PROJECT, 2020
** dante
** File description:
** struct
*/

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct pos_s {
    int x;
    int y;
} pos_t;

typedef struct node_s {
    pos_t pos;
    struct node_s *next;
} node_t;

typedef struct link_s {
    node_t *head;
} link_t;

typedef struct map_s {
    char **map;
    char **map_epty;
} map_t;

#endif /* !STRUCT_H_ */