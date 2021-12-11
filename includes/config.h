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
    int move_mode;
}config_t;

#endif /* !CONFIG_H_ */