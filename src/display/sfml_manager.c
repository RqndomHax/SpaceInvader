#include "../../includes/game.h"

// Graphical display with sfml
int init_sfml(space_t *space)
{
    sfVideoMode mode = {1920, 1080, 8};

    space->sfml.window = sfRenderWindow_create(mode, "Space Invader by RqndomHax", sfResize | sfClose, NULL);
    if (space->sfml.window == NULL)
        return (0);
    sfRenderWindow_setFramerateLimit(space->sfml.window, space->config.fps);
    sfRenderWindow_setMouseCursorVisible(space->sfml.window, sfFalse);
    space->sfml.clock = sfClock_create();
    return (1);
}

void print_sfml(space_t *space)
{
    sfRenderWindow_clear(space->sfml.window, sfBlack);
    // TODO draw textures
    sfRenderWindow_display(space->sfml.window);
}

void sfml_display(space_t *space)
{
    sfEvent event;

    if (!sfRenderWindow_isOpen(space->sfml.window)) {
        space->is_running = 0;
        return;
    }
    while (sfRenderWindow_pollEvent(space->sfml.window, &event)) {
        if ((event.type == sfEvtClosed) || (event.type == sfEvtKeyPressed && event.key.code == sfKeyEscape)) {
            sfRenderWindow_close(space->sfml.window);
            space->is_running = 0;
            return;
        }
        if (space->config.move_mode == 1 && event.type == sfEvtMouseMoved) {
            // TODO
        }
        if (event.type == sfEvtKeyPressed && event.key.code == sfKeyUp) {
            // TODO
        }
        if (event.type == sfEvtKeyPressed && event.key.code == sfKeyDown) {
            // TODO
        }
        if (event.type == sfEvtKeyPressed && event.key.code == sfKeyLeft) {
            // TODO
        }
        if (event.type == sfEvtKeyPressed && event.key.code == sfKeyRight) {
            // TODO
        }
    }
}