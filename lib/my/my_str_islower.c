/*
** EPITECH PROJECT, 2025
** my str islower
** File description:
** a recreer
*/

int my_str_islower(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] > 96 && str[i] < 123) {
            i++;
        } else {
            return 0;
        }
    }
    return 1;
}
