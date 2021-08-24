/*
** EPITECH PROJECT, 2021
** space invader
** File description:
** ncurses manager
*/

#include "../../includes/game.h"
#include <unistd.h>

// Terminal display with ncurses
int init_ncurses(space_t *space)
{
    initscr();
    cbreak();
    timeout(0);
    curs_set(0);
    noecho();
    keypad(stdscr, true);
    (void) space;
    return (1);
}

// Keyboard management for ncurses
void ncurses_display(space_t *space)
{
    int c = getch();

    /* -- Directions -- */

    if (c == 27) {
        space->is_running = 0;
        return;
    }

    // Spaceship up
    if (c == KEY_UP) {
        // TODO
    }

    // Spaceship down
    if (c == KEY_DOWN) {
        // TODO
    }

    // Spaceship right
    if (c == KEY_RIGHT) {
        // TODO
    }

    // Spaceship left
    if (c == KEY_LEFT) {
        // TODO
    }

    // Recursive if a key is pressed to empty the key buffers while checking if it's a valid key
    if (c != ERR)
        return (ncurses_display(space));
}