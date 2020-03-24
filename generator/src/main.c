/*
** EPITECH PROJECT, 2020
** dante
** File description:
** generator man
*/

#include "my.h"

int error(int ac, char **av)
{
    if (ac < 3 || ac > 4)
        return (84);
    for (int i = 0; av[1][i]; i += 1)
        if (av[1][i] < '0' || av[1][i] > '9') {
            write(2, "Error: Not a number\n", 20);
            return (84);
        }
    for (int i = 0; av[2][i]; i += 1)
        if (av[2][i] < '0' || av[2][i] > '9') {
            write(2, "Error: Not a number\n", 20);
            return (84);
        }
    if (ac == 4)
        if (my_strcmp(av[3], "perfect") != 0) {
            write(2, "Error: not a valid parameter [perfect]\n", 39);
            return (84);
        }
    return (0);
}

int main(int ac, char **av)
{
    if (error(ac, av) == 84)
        return (84);
    generate_map(ac, av);
    return (0);
}