##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## make files
##

SRC =	*.c

NAME =	libmy.a

OBJ =	$(SRC: .c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	cp $(NAME) ../
	cp my.h ../../include/



clean:
	rm -f *.o

re:     fclean all
