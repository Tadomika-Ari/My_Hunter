/*
** EPITECH PROJECT, 2025
** c pool day 08
** File description:
** my_strdup
*/

#include <malloc.h>
#include "../../include/my.h"

char *my_strdup(char const *src)
{
    int len = my_strlen(src);
    char *pointer = malloc(len + 1);
    int i = 0;

    for (i = 0; i < len; i++){
        pointer[i] = src[i];
    }
    pointer[i] = '\0';
    return pointer;
}
