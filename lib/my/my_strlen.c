/*
** EPITECH PROJECT, 2025
** my_strlen
** File description:
** task03
*/

int my_strlen(char const *str)
{
    int esp = 0;

    for (int i = 0; str[i] != '\0'; i = i + 1) {
        esp = esp + 1;
    }
    return esp;
}
