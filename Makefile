##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

NAME	=	push_swap

UNITS	=	units

SRC	=		src/main.c                  \
			src/struct_functions.c      \
			src/my_getnbr.c             \
			src/little_functions.c      \
			src/swap.c                  \
			src/rotate_beginin.c        \
			src/rotate_end.c            \
			src/push.c                  \
			src/tri.c                   \
			src/little_functions_next.c \
			src/get_sizes.c             \
			src/post_tri.c

SRC_UT	=	tests/*.c

OBJ_UT	=	$(SRC_UT:.c=.o)

CFLAGS =	-g3 -Wall -Wextra -W

LDFLAGS =	--coverage -lcriterion

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -pedantic -Wextra -W -Wall -o $(NAME) $(OBJ)

tests_run:
	gcc -o $(UNITS) $(SRC_UT) $(SRC) $(CFLAGS) $(LDFLAGS)

clean:
	rm -f $(OBJ)
	rm -f $(OBJ_UT)

fclean:	clean
	rm -f $(NAME)
	rm -f $(NAME_UNITS)
	rm -f *gcno
	rm -f *gcda
	rm -f *gcov

re: fclean all
