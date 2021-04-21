/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** task07
*/

#include "../../include/my.h"

int my_put_nbr(int nb)
{
    int div = 1;
    unsigned int res = 0;

    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    res = nb;
    while ((res / div) >= 10)
        div *= 10;
    while ( div > 0) {
        my_putchar((res / div) % 10 + '0');
        div /= 10;
    }
    my_putchar('\n');
    return (0);
}
