##
## EPITECH PROJECT, 2023
## alexandre.garbe
## File description:
## Makefile
##

SRC	=	src/main/main.c	\
		lib/my/my_putchar.c	\
		lib/my/my_putstr.c	\
		lib/my/my_put_nbr.c	\
		lib/my/my_strlen.c	\
		lib/my/my_strcpy.c	\
		lib/my/mini_printf.c	\
		lib/my/my_strdup.c

OBJ	=	$(SRC:.c=.o)

NAME	=	organized

CFLAGS	+=	-W -Wall -Wextra -g3

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -f vgcore.*

re:	fclean all

.PHONY:	all clean fclean re