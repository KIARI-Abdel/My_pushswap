/*
** EPITECH PROJECT, 2019
** is_num
** File description:
** libmy
*/

#include "../../include/my.h"

int is_num(char c)
{
    if (c >= 48 && c <= 57)
        return (0);
    else
        return (1);
}