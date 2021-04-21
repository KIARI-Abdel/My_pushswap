/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** task02
*/

#include "../../include/my.h"

int get_length(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}

char *my_strcat(char *dest, char const *src)
{
    int len = get_length(dest);
    for (int i = 0; src[i] != '\0'; i++) {
        dest[len] = src[i];
        len++;
    }
    dest[len] = '\0';
    return (dest);
}
