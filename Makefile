##
## EPITECH PROJECT, 2017
## Aurélien Vandaële <aurelien.vandaele@epitech.eu>
## File description:
## Makefile
##

SRC_DIR	=	src/

SRC	=	$(SRC_DIR)main.c		\
		$(SRC_DIR)my_runner.c		\
		$(SRC_DIR)print_destroy.c	\
		$(SRC_DIR)set_window.c

NAME	=	my_runner

OBJ	=	$(SRC:.c=.o)

COMPIL	=	-l c_graph_prog -lmy -Llib/my

CFLAGS	=	-W -Wall -Werror -Wextra -I include/

all:		$(NAME)

$(NAME):	$(OBJ)
		make -C lib/my
		make clean -C lib/my
		gcc -o $(NAME) $(OBJ) $(COMPIL) $(CFLAGS)

clean:
		rm -rf *~
		rm -f $(OBJ)
		rm -rf src/*~

fclean:		clean
		make fclean -C lib/my
		rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean
