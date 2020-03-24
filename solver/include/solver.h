/*
** EPITECH PROJECT, 2020
** solver
** File description:
** solver
*/

#ifndef SOLVER_H_
#define SOLVER_H_

#include "my.h"
#include "struct.h"
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

pos_t end;
int debug_etat;

/* ################################# PARS MAP ########################### */
char **pars_map(char *map);
void recup_pause_end(pos_t *end, char **map);
void recup_pause_end(pos_t *end, char **map);

#endif /* !SOLVER_H_ */
