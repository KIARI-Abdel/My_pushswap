/*
** EPITECH PROJECT, 2019
** my_find_prime_sup
** File description:
** task07
*/

#include "../../include/my.h"

int my_find_prime_sup(int nb)
{
    while (my_is_prime(nb) != 1) {
            if (nb >= 2147483647)
                    return (0);
            nb++;
    }
    return (nb);
}
