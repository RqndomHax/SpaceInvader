#include <unistd.h>
#include "../../includes/game.h"

void manage_game(space_t *space)
{
    return (sfml_display(space));
}

int init_display(space_t *space)
{
    return (init_sfml(space));
}

void print_display(space_t *space)
{
    return (print_sfml(space));
}

void print_win(space_t *space)
{
    (void) space;
    // TODO
}

void print_lose(space_t *space)
{
    (void) space;
    // TODO
}

void destroy_display(space_t *space)
{
    sfRenderWindow_destroy(space->sfml.window);
}