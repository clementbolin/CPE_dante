/*
** EPITECH PROJECT, 2020
** dante
** File description:
** open file solver
*/

#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int files_open(char const *path)
{
    int fd = open(path, O_RDONLY);

    if (fd < 0) {
        write(2, "ERROR: faile open file\n", 24);
        exit (84);
    }
    return (fd);
}

char *read_files(struct stat *file_info, char *path)
{
    int fd = files_open(path);
    stat(path, file_info);
    char *buffer = malloc(sizeof(char) * (file_info->st_size + 1));
    read(fd, buffer, file_info->st_size);

    buffer[file_info->st_size] = '\0';
    return (buffer);
}