/*
** EPITECH PROJECT, 2025
** my strcat
** File description:
** a creer + task02 Day07
*/

#include "../../include/my.h"

char *my_strcat(char *dest, char const *src)
{
    int a = my_strlen(dest);
    int b = my_strlen(src);
    int i;

    for (i = 0; i <= b; i++) {
        dest[a + i] = src[i];
    }
    dest[a + i] = '\0';
    return dest;
}
