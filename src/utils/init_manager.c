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
    space->config.fps = -1;
    space->config.tickrate = -1;
    space->config.ennemy_speed = -1;
    space->config.obstacle_speed = -1;
    space->config.missile_speed = -1;
    space->config.self_speed = -1;
    space->config.move_mode = -1;
    space->config_path = NULL;
    space->argv = argv;
}

void init_config(space_t *space)
{
    char **config = NULL;

    config = get_config(space->config_path);
    if (config == NULL)
        return;
    config_priority(config, "fps", &space->config.fps);
    config_priority(config, "tickrate", &space->config.tickrate);
    config_priority(config, "ennemy_speed", &space->config.ennemy_speed);
    config_priority(config, "obstacle_speed", &space->config.obstacle_speed);
    config_priority(config, "missile_speed", &space->config.missile_speed);
    config_priority(config, "self_speed", &space->config.self_speed);
    config_priority(config, "movement_mode", &space->config.move_mode);
    free_array(config);
}

void init_game(space_t *space)
{
    space->is_running = 1;
    set_default_value(&space->config.fps, 60);
    set_default_value(&space->config.tickrate, 12);
    set_default_value(&space->config.ennemy_speed, 1);
    set_default_value(&space->config.obstacle_speed, 1);
    set_default_value(&space->config.missile_speed, 1);
    set_default_value(&space->config.self_speed, 1);
    set_default_value(&space->config.move_mode, 0);
}