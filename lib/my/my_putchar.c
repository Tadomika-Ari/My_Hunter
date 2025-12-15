/*
** EPITECH PROJECT, 2025
** my_print_alpha
** File description:
** task	01 alphabet
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
