/*
** EPITECH PROJECT, 2025
** my_strcpy.c
** File description:
** task01
*/

#include "../../include/my.h"

char *my_strcpy(char *dest, char const *src)
{
    int i;

    for (i = 0; src[i] != '\0'; i = i + 1) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return dest;
}
