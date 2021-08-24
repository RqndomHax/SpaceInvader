# 🚀 SpaceInvader

### Default config file
```yml
fps:        60 # This is the fps cap".
tickrate:   12 # This is the tick rate of the game, tickrate: 10 means 10 ticks per second.
display:    sfml # This is the type of display of the game (ncurses / sfml)).
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

- Start the program with the desired config path (default `snake.cfg`)
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
- If you're using SFML display and the tickrate changes nothing it's maybe because your fps cap is too low.

### Have fun playing my game !

###### Made with ❤️ by RqndomHax