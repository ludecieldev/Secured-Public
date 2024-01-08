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
		lib/my/my_strdup.c	\
		lib/my/int_count.c	\
		lib/my/get_ascii_value.c	\
		src/hash/hash.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libhashtable.a

CFLAGS	+=	-W -Wall -Wextra -g3

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc  $(NAME) $(OBJ) ../../.

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(OBJ)
	rm -f vgcore.*

re:	fclean all

.PHONY:	all clean fclean re
