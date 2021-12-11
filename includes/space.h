#ifndef SPACE_H_
#define SPACE_H_

#include "list.h"
#include "config.h"
#include "display.h"

typedef struct space_s
{
    char **argv;
    char *config_path;
    struct config_s config;
    int is_running;
    int has_pressed;
    clock_t start;
    sfml_t sfml;
}space_t;

#endif /* !SPACE_H_ */