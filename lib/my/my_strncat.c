/*
** EPITECH PROJECT, 2025
** my strncat
** File description:
** a creer
*/

#include "../../include/my.h"

char *my_strncat(char *dest, char const *src, int n)
{
    int a = my_strlen(dest);
    int b = my_strlen(src);
    int i;

    for (i = 0; i <= n; i++) {
        dest[a + i] = src[i];
    }
    dest[a + i] = '\0';
    return dest;
}
