##
## EPITECH PROJECT, 2023
## alexandre.garbe
## File description:
## Makefile
##

SRC	=	src/main/main.c

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