/*
** EPITECH PROJECT, 2021
** space invader
** File description:
** display
*/

#ifndef DISPLAY_H_
#define DISPLAY_H_

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>

typedef struct sfml_s
{
    sfRenderWindow *window;
    sfImage *icon;
    sfClock *clock;
}sfml_t;

#endif /* !DISPLAY_H_ */