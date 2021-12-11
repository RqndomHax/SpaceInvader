#include "../../includes/game.h"
#include "../../includes/list.h"
#include <unistd.h>

int run_game(space_t *space)
{
    int result = 0;

    print_display(space);
    while (space->is_running) {
        manage_game(space);
        print_display(space);
        result = move_ship(space);
        if (result != 2) {
            space->is_running = 0;
            return (result);
        }
    }
    space->is_running = 0;
    return (1);
}