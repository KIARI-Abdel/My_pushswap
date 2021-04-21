/*
** EPITECH PROJECT, 2019
** my_compute_square_root
** File description:
** task05
*/

#include "../../include/my.h"

int my_compute_square_root(int nb)
{
    int res = 1;
    if (nb == 0 || nb < 0)
        return (0);
    while ((res * res) != nb) {
        res++;
        if (res > nb)
            return (0);
    }
    if (res > 46340)
        res = 0;
    return (res);
}
