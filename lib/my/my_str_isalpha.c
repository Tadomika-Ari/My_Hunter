/*
** EPITECH PROJECT, 2025
** my str_isalpha
** File description:
** a recreer
*/

int my_str_isalpha(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] > 96 && str[i] < 123 ||
            str[i] > 64 && str[i] < 91) {
            i++;
        } else {
            return 0;
        }
    }
    return 1;
}
