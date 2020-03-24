##
## EPITECH PROJECT, 2019
## makefile
## File description:
## match
##

SRC		= 		./src/main.c 							\
				./src/generator.c	\
				./src/print_map.c	\
				./src/perfect.c		\
				./src/imperfect.c

OBJ		= $(SRC:.c=.o)

CC 		= gcc

RM		= rm -f

NAME	= generator

LIB		= make -C ./../lib/my

TEST 	= make -C ./tests

CFLAGS	= -W -Wall -Wextra -g3 -I./include/ -O3 -Ofast

CSFML	= -lcsfml-graphics -lcsfml-audio -lcsfml-window -lcsfml-system -Wdeprecated-declarations

LDFLAGS		=  -L. ../lib/libmy.a

all: 		start $(NAME) end

$(NAME):	$(OBJ)
			$(LIB)
		$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

test_run:
			$(TEST)
		./tests/unit_tests

retest:
	$(TEST) re
	./tests/unit_tests

clean:
		$(LIB) clean
		$(RM) $(OBJ)
		@echo "\033[5m\033[3m\033[33mEtat for -> $(NAME) -> clean -> OK\033[0m"

fclean: clean
		$(LIB) fclean
		@echo "\033[5m\033[3m\033[33mEtat for -> $(NAME) -> fclean -> OK\033[0m"

end:
	@echo "\033[5m\033[1m\033[32mEtat for -> $(NAME) -> compil -> OK\033[0m"

start:
	@echo "\033[5m\033[1m\033[32mWe compil your project\033[0m"

re:		fclean all