#include "../../includes/game.h"

int move_ship(space_t *space)
{
    (void) space;
    // TODO Check if ship is on an obstacle
    return (2);
}

// Update the ship's coordinates
void update_coordinates(enum direction_e direction, config_t *config)
{
    (void) direction;
    (void) config;
    // TODO Move ship according to the key pressed, but also to the speed set in the config
}