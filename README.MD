# 🚀 SpaceInvader

### Default config file
```yml
fps:            60 # This is the fps cap".
tickrate:       12 # This is the tick rate of the game, tickrate: 10 means 10 ticks per second.
ennemy_speed:    1 # This is the speed of the ennemies' spaceship
obstacle_speed:  1 # This is the speed of the obstacles
missile_speed:   1 # This is the speed of the missiles
self_speed:      1 # This is the speed of your spaceship
movement_type:   0 # This is the movement type, if set to 0 you need to use the directional arrows, otherwise if set to 1, you will move the ship with your mouse
```

##### Note that if a value is incorrect in the config file, it will be set to the default config values.

### Build

```bash
make re
```

### Run

```bash
./space_invader
```

###### Examples

- Start the program with the desired config path (default `space_invader.cfg`)
```bash
./space_invader configPath
```

- Start the program with custom values to the tickrate and fps the rest is from the default configPath
```bash
./space_invader --fps 144 --tickrate 250
```

### Notes

- __To avoid any textures issue please use the same texture size !__
- Config is overwritten by the command arguments.
- If the tickrate changes nothing on the speed of the game it's maybe because your fps cap is too low.

### Have fun playing my game !

###### Made with ❤️ by RqndomHax