/*
** EPITECH PROJECT, 2019
** my_compute_power_rec
** File description:
** task04
*/

#include "../../include/my.h"

int my_compute_power_rec(int nb, int p)
{
    int res = nb;
    if (p == 0)
        return (1);
    if (nb == 0 || p < 0)
        return (0);
    if (p - 1 >= 1)
        res *= my_compute_power_rec(nb, p - 1);
    return (res);
}
