/*
** EPITECH PROJECT, 2025
** my put nbr
** File description:
** a recreer
*/

#include <unistd.h>

int my_put_nbr(int nb)
{
    char c;

    if (nb > 9)
        my_put_nbr(nb / 10);
    c = '0' + (nb % 10);
    write(1, &c, 1);
    return 0;
}
