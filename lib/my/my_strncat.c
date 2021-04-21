/*
** EPITECH PROJECT, 2019
** my_strncat
** File description:
** task03
*/

#include "../../include/my.h"

int get_str_size(char *str)
{
    int len = 0;
    while (str[len] != '\0')
        len++;
    return (len);
}

char *my_strncat(char *dest, char const *src, int nb)
{
    int len = get_str_size(dest);
    for (int i = 0; i < nb && src[i] != '\0'; i++) {
        dest[len] = src[i];
        len++;
    }
    dest[len] = '\0';
    return (dest);
}
