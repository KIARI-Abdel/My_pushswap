/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** task03
*/

#include "../../include/my.h"

int my_strlen(char const *str)
{
    int count = 0;

    while (str[count] != '\0')
        count++;
    return (count);
}
