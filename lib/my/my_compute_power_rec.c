/*
** EPITECH PROJECT, 2025
** my_compute_power_rec
** File description:
** task04 recursive
*/

int my_compute_power_rec(int nb, int p)
{
    int t = 1;
    int u = nb;

    if (p == 0) {
        return 1;
    } else if (p < 0) {
        return 0;
    } else {
        return u * my_compute_power_rec(nb, p - 1);
    }
}
