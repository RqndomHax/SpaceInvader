/*
** EPITECH PROJECT, 2021
** space invader
** File description:
** main
*/

#include "../includes/game.h"

#include <stdio.h>

void show_stats(int has_won, space_t *space)
{
    if (!has_won) {
        print_lose(space);
        printf("\n\nYou have lost the game !\n");
    }
    else {
        print_win(space);
        printf("\n\nGreat job, you won !\n");
    }
    printf("--------------------\n");
    printf("\n------ Stats -------\n");
    // TODO stats
    printf("\n--- by RqndomHax ---\n");
    printf("--------------------\n");
}

int main(int argc, char **argv)
{
    space_t space;

    (void) argc;
    init_setup(&space, argv);
    if (!parse_args(&space))
        return (1);
    init_config(&space);
    init_game(&space);
    if (!init_display(&space))
        return (1);
    show_stats(run_game(&space), &space);
    destroy_display(&space);
    return (0);
}