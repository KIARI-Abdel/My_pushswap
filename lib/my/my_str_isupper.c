/*
** EPITECH PROJECT, 2019
** my_str_isupper
** File description:
** task15
*/

#include "../../include/my.h"

int my_str_isupper(char const *str)
{
    int check = 1;

    if (str[0] == '\0')
        return (0);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 65 || str[i] > 90)
            check = 0;
    }
    return (check);
}
