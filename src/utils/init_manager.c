/*
** EPITECH PROJECT, 2021
** space invader
** File description:
** init manager
*/

#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "../../includes/game.h"

void init_setup(space_t *space, char **argv)
{
    space->config.display = DEFAULT;
    space->config.fps = -1;
    space->config.tickrate = -1;
    space->config_path = NULL;
    space->argv = argv;
}

void init_config(space_t *space)
{
    char **config = NULL;
    char *tmp = NULL;

    config = get_config(space->config_path);
    if (config == NULL)
        return;
    config_priority(config, "fps", &space->config.fps);
    config_priority(config, "tickrate", &space->config.tickrate);
    if (space->config.display == DEFAULT) {
        tmp = my_config_get_string(config, "display");
        if (tmp != NULL) {
            if (strcmp(tmp, "sfml") == 0)
                space->config.display = SFML;
            free(tmp);
        }
    }
    free_array(config);
}

void init_game(space_t *space)
{
    space->is_running = 1;
    set_default_value(&space->config.fps, 60);
    set_default_value(&space->config.tickrate, 12);
}