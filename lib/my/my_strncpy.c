/*
** EPITECH PROJECT, 2025
** my_strncpy
** File description:
** task02, same that task01 but with n
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i;

    for (i = 0; src[i] != '\0'; i = i + 1) {
        if (i < n) {
            dest[i] = src[i];
        }
    }
    dest[i] = '\0';
    return dest;
}
