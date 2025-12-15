##
## EPITECH PROJECT, 2025
## test
## File description:
## test
##

##
## EPITECH PROJECT, 2025
## test
## File description:
## test
##

LIBNAME 	= libmy.a

NAMEtest = unit_tests

SRC	= ./lib/my/my_compute_power_rec.c \
	  ./lib/my/my_compute_square_root.c \
	  ./lib/my/my_find_prime_sup.c \
	  ./lib/my/my_get_nbr.c \
	  ./lib/my/my_isneg.c \
      ./lib/my/my_is_prime.c \
      ./lib/my/my_putchar.c \
      ./lib/my/my_put_nbr.c \
      ./lib/my/my_putstr.c \
      ./lib/my/my_revstr.c \
      ./lib/my/my_showmem.c \
      ./lib/my/my_showstr.c \
      ./lib/my/my_sort_int_array.c \
      ./lib/my/my_strcapitalize.c \
      ./lib/my/my_strcat.c \
      ./lib/my/my_strcmp.c \
      ./lib/my/my_strcpy.c \
      ./lib/my/my_str_islower.c \
      ./lib/my/my_str_isprintable.c \
      ./lib/my/my_str_isupper.c \
      ./lib/my/my_strlen.c \
      ./lib/my/my_strlowcase.c \
      ./lib/my/my_strncat.c \
      ./lib/my/my_strncmp.c \
      ./lib/my/my_strncpy.c \
      ./lib/my/my_strstr.c \
      ./lib/my/my_strupcase.c \
	  ./lib/my/my_str_isnum.c \
      ./lib/my/my_str_isalpha.c \
      ./lib/my/my_swap.c 

OBJ	= $(SRC:.c=.o)

CFLAGS = -g3

all:	$(LIBNAME)

$(LIBNAME):    $(OBJ)
	ar rc libmy.a $(OBJ)
	rm $(OBJ)
	epiclang windows.c create_all.c game.c respawn.c -lcsfml-graphics -lcsfml-window -lcsfml-audio -lcsfml-system -lmy -L. -g3 -o my_hunter

comp:
	epiclang windows.c -lcsfml-graphics -lmy -L. -g3

clean:
	rm -rf *o

fclean:	clean
	rm -rf libmy.a
	rm my_hunter

re: fclean all
