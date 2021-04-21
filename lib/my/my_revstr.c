/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** task03
*/

#include "../../include/my.h"

char *my_revstr(char *str)
{
    int len = 0;
    char tmp;
    while (str[len] != '\0')
        len++;
    len--;
    for (int i = 0; i <= len; i++) {
        tmp = str[i];
        str[i] = str[len];
        str[len] = tmp;
        len--;
    }
    return (str);
}
