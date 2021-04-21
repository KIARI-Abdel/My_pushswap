/*
** EPITECH PROJECT, 2019
** my_str_isprintable
** File description:
** task16
*/

#include "../../include/my.h"

int my_str_isprintable(char const *str)
{
    int check = 1;

    if (str[0] == '\0')
        return (0);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32 || str[i] == 127)
            check = 0;
    }
    return (check);
}
