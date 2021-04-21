/*
** EPITECH PROJECT, 2019
** my_is_prime
** File description:
** task06
*/

#include "../../include/my.h"

int my_is_prime(int nb)
{
    int check = 0;
    int i = 1;
    if (nb <= 1)
            return (check);
    while (i < nb) {
        if ((nb % i) == 0 && i != 1)
            check = 1;
        i++;
    }
    return (check);
}
