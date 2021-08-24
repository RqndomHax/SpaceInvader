/*
** EPITECH PROJECT, 2021
** space invader
** File description:
** space invader structure
*/

#ifndef SNAKE_H_
#define SNAKE_H_

#include "list.h"
#include "config.h"
#include "display.h"

typedef struct space_s
{
    char **argv;
    char *config_path;
    struct config_s config;
    int is_running;
    int has_pressed;
    clock_t start;
    sfml_t sfml;
}space_t;

#endif /* !SNAKE_H_ */