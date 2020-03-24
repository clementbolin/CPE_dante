##
## EPITECH PROJECT, 2019
## makefile
## File description:
## match
##


OBJ		= $(SRC:.c=.o)

CC 		= gcc

RM		= rm -f

NAME	= solver

SOLVER 	= make -C ./solver

GENERATOR = make -C ./generator

LIB		= make -C ./lib/my

TEST 	= make -C ./tests

CFLAGS	= -W -Wall -Wextra -g3 -I./include/

CSFML	= -lcsfml-graphics -lcsfml-audio -lcsfml-window -lcsfml-system -Wdeprecated-declarations

LDFLAGS		=  -L. lib/libmy.a

RULE = 	all

all:
	make -C ./solver all
	make -C ./generator all

$(NAME):
		$(SOLVER)

test_run:
			$(TEST)
		./tests/unit_tests

retest:
	$(TEST) re
	./tests/unit_tests

clean:
		$(LIB) clean
		$(RM) $(OBJ)
		make -C ./solver clean
		make -C ./generator clean
		@echo "\033[5m\033[3m\033[33mEtat for -> $(NAME) -> clean -> OK\033[0m"

fclean: clean
		$(LIB) fclean
		make -C ./solver fclean
		make -C ./generator fclean
		rm ./solver/solver
		rm ./generator/generator
		@echo "\033[5m\033[3m\033[33mEtat for -> $(NAME) -> fclean -> OK\033[0m"

end:
	@echo "\033[5m\033[1m\033[32mEtat for -> $(NAME) -> compil -> OK\033[0m"

start:
	@echo "\033[5m\033[1m\033[32mWe compil your project\033[0m"

re:		fclean all