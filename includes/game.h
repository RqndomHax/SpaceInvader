/*
** EPITECH PROJECT, 2021
** space invader
** File description:
** game header
*/

#ifndef GAME_H_
#define GAME_H_

#include <stdlib.h>
#include <stdio.h>

#include "list.h"
#include "lib.h"
#include "display.h"
#include "config.h"
#include "space.h"

/* --- SETUP --- */
void init_setup(space_t *space, char **argv);
int parse_args(space_t *space);
int show_help(void);

/* --- CONFIG --- */
void init_config(space_t *space);
int parse_config(space_t *space);

/* --- GAME --- */
void init_game(space_t *space);
int run_game(space_t *space);
int auto_move(space_t *space);
int move_ship(space_t *space);
void manage_game(space_t *space);
void update_coordinates(enum direction_e direction, config_t *config);

/* --- DISPLAY --- */
int init_display(space_t *space);
int init_ncurses(space_t *space);
int init_sfml(space_t *space);
void print_ncurses(space_t *space);
void print_sfml(space_t *space);
void sfml_display(space_t *space);
void ncurses_display(space_t *space);
void print_display(space_t *space);
void print_win(space_t *space);
void print_lose(space_t *space);
void destroy_display(space_t *space);

/* --- UTILS --- */
void config_priority(char **config, char *key, int *target);
void set_default_value(int *target, int value);

#endif /* !GAME_H_ */