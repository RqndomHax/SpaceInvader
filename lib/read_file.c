/*
** EPITECH PROJECT, 2021
** lib
** File description:
** returns the content of a file
*/

#include <stdlib.h>
#include <stdio.h>


static long unsigned int fsize(FILE *fd)
{
    long unsigned int size = 0;
    int prev = ftell(fd);

    prev = ftell(fd);
    fseek(fd, 0L, SEEK_END);
    size = ftell(fd);
    fseek(fd,prev,SEEK_SET);
    return (size);
}

// static int exit_file(FILE *fd, char **content)
// {
//     fclose(fd);
//     if (*content != NULL)
//         free(*content);
//     return (0);
// }

int read_file(char *filepath, char **content)
{
    FILE *fd = NULL;
    long unsigned int size = 0;

    (void) content;
    if ((fd = fopen(filepath, "r")) == NULL) {
        perror("fopen");
        return (0);
    }
    size = fsize(fd);
    *content = malloc(size + 1);
    if (!(*content) || fread(*content, 1, size, fd) != size) {
        if (*content)
            free(*content);
        perror("fread");
        return (0);
    }
    (*content)[size] = 0;
    fclose(fd);
    return (1);
}