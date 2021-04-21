/*
** EPITECH PROJECT, 2019
** my_str_isnum
** File description:
** task13
*/

#include "../../include/my.h"

int my_str_isnum(char const *str)
{
    int check = 1;

    if (str[0] == '\0')
        return (0);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 48 || str[i] > 57)
            check = 0;
    }
    return (check);
}
