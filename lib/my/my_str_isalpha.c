/*
** EPITECH PROJECT, 2019
** my_str_isalpha
** File description:
** task12
*/

#include "../../include/my.h"

int my_str_isalpha(char const *str)
{
    int check = 1;

    if (str[0] == '\0')
        return (0);
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
            check = 0;
    }
    return (check);
}
