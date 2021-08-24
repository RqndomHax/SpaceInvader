/*
** EPITECH PROJECT, 2021
** space invader
** File description:
** display manager
*/

#include <unistd.h>
#include "../../includes/game.h"

void manage_game(space_t *space)
{
    if (space->config.display == SFML)
        return (sfml_display(space));
    return (ncurses_display(space));
}

int init_display(space_t *space)
{
    if (space->config.display == SFML)
        return (init_sfml(space));
    return (init_ncurses(space));
}

void print_display(space_t *space)
{
    if (space->config.display == SFML)
        return (print_sfml(space));
    return (print_ncurses(space));
}

void print_win(space_t *space) {
    if (space->config.display == SFML)
        return;
    timeout(10000);
    print_ncurses(space);
    getch();
}

void print_lose(space_t *space)
{
    if (space->config.display == SFML)
        return;
    timeout(10000);
    print_ncurses(space);
    getch();
}

void destroy_display(space_t *space)
{
    if (space->config.display == SFML) {
        sfRenderWindow_destroy(space->sfml.window);
        return;
    }
    endwin();
}