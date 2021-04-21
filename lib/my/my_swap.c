/*
** EPITECH PROJECT, 2019
** my_swap
** File description:
** task01
*/

#include "../../include/my.h"

void my_swap(int *a, int *b)
{
    int tmp = *a;

    *a = *b;
    *b = tmp;
}
