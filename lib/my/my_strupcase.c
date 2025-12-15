/*
** EPITECH PROJECT, 2025
** recode
** File description:
** recode
*/

#include "unistd.h"
#include "malloc.h"
#include "../../include/my.h"

char *my_strupcase(char *str)
{
    char *str2 = malloc(my_strlen(str) + 1);
    int i = 0;

    write(1, "\0", 1);
    for (i = 0; str[i] != '\0'; i++){
        if (str[i] >= 97 && str[i] <= 122){
            str2[i] = str[i] - 32;
        } else {
            str2[i] = str[i];
        }
    }
    str2[i] = '\0';
    return str2;
}
