/*
** EPITECH PROJECT, 2021
** space invader
** File description:
** config
*/

#ifndef CONFIG_H_
#define CONFIG_H_

typedef struct config_s
{
    int fps;
    int tickrate;
    int ennemy_speed;
    int obstacle_speed;
    int missile_speed;
    int self_speed;
}config_t;

#endif /* !CONFIG_H_ */