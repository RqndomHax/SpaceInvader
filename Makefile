##
## EPITECH PROJECT, 2021
## space invader
## File description:
## Makefile
##

CFLAGS 		= -Llib -lmy

CFLAGS 		+= -W -Wall -Wextra

# CFLAGS 		+= -g -g3

SFMLFLAGS 	+= -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

CC		= gcc

SRC		= $(wildcard src/*.c)
SRC		+= $(wildcard src/game/*.c)
SRC		+= $(wildcard src/utils/*.c)
SRC		+= $(wildcard src/display/*.c)

LIBSRC	= $(wildcard lib/*.c)

OBJ		= $(SRC:.c=.o)

LIBOBJ 	= $(LIBSRC:.c=.o)

OUT		= space_invader

LIB		= lib/libmy.a

all: $(OUT)

$(OUT): $(LIB) $(OBJ)
	$(CC) -o $@ $(OBJ) $(CFLAGS) $(SFMLFLAGS)

$(LIB): $(LIBOBJ)
	$(AR) rsc $@ $(LIBOBJ)

clean:
	$(RM) $(LIBOBJ)
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(LIB)
	$(RM) $(OUT)

re: fclean all
