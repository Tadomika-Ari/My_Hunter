/*
** EPITECH PROJECT, 2025
** my str isprintable
** File description:
** task faite
*/

int my_str_is_printable(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] > 31 && str[i] < 127) {
            i++;
        } else {
            return 0;
        }
    }
    return 1;
}
