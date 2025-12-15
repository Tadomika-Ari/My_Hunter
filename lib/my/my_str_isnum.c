/*
** EPITECH PROJECT, 2025
** my str isnum
** File description:
** a recreer
*/

int my_str_isnum(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] > 47 && str[i] < 58) {
            i++;
        } else {
            return 0;
        }
    }
    return 1;
}
