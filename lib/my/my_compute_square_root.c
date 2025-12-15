/*
** EPITECH PROJECT, 2025
** my compute square root
** File description:
** a recreer
*/

int my_compute_square_root(int nb)
{
    if (nb < 0) {
        return 0;
    }
    for (int i = 0; i <= nb; i++) {
        if (i * i == nb) {
            return i;
        }
    }
    return 0;
}
