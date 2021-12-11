#include <stdio.h>
#include <string.h>
#include "../../includes/game.h"

int show_help(void)
{
    printf("%s",
        "SpaceInvader game made in C\n"
        "Author: RqndomHax (https://github.com/RqndomHax)\n"

        "\n[Config File]\n"
        "  fps:         60 # This is the fps cap\n"
        "  tickrate:    12 # This is the tick rate of the game, tickrate: 12 means 12 ticks per second\n"
        "  display:     ncurses # This is the type of display of the game (ncurses / sfml))\n"
    
        "\n[Commands]\n"
        "  --fps        n   # sets the fps cap\n"
        "  --tickrate   n   # sets the game's tickrate\n"
        "  --ncurses        # sets the display's type to ncurse\n"
        "  --sfml           # sets the display's type to sfml\n"

        "\nCommands overwrite the parameters of the config !\n");
    return (0);
}

static int replace_value(char **value, int *target)
{
    if (!(*value))
        return (-1);
    if (!my_isnum(*value)) {
        fprintf(stderr, "Value of '%s' is not numeric !\n", *(value - 1));
        return (-2);
    }
    *target = atoi((*value));
    if (*target <= 0) {
        fprintf(stderr, "Value of '%s' must be greater than 0.\n", *(value - 1));
        return (-2);
    }
    return (1);
}

int is_command(space_t *space, int *index)
{
    if (strcmp(space->argv[(*index)], "--fps") == 0)
        return (replace_value(&space->argv[++(*index)], &space->config.fps));
    if (strcmp(space->argv[(*index)], "--tickrate") == 0)
        return (replace_value(&space->argv[++(*index)], &space->config.tickrate));
    if (strncmp("--", space->argv[(*index)], 2) == 0) {
        fprintf(stderr, "Invalid command '%s' !\n", space->argv[(*index)]);
        return (-2);
    }
    return (0);
}

int parse_args(space_t *space)
{
    int result = 0;

    for (int i = 1; space->argv[i]; i++)
        if (strcmp(space->argv[i], "--help") == 0)
            return (show_help());
    for (int i = 1; space->argv[i]; i++) {
        result = is_command(space, &i);
        if (result == 0) {
            if (space->config_path != NULL) {
                fprintf(stderr, "Too many config files argument !\n");
                return (0);
            }
            space->config_path = space->argv[i];
        }
        if (result == -1 || result == -2) {
            if (result == -1)
                fprintf(stderr, "Missing argument !\n");
            return (0);
        }
    }
    if (space->config_path == NULL)
        space->config_path = "space_invader.cfg";
    return (1);
}