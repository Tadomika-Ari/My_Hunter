/*
** EPITECH PROJECT, 2025
** my str isupper
** File description:
** a recreer
*/

int my_str_isupper(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] > 64 && str[i] < 91) {
            i++;
        } else {
            return 0;
        }
    }
    return 1;
}
