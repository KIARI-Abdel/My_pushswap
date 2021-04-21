/*
** EPITECH PROJECT, 2019
** my_strncpy
** File description:
** task02
*/

#include "../../include/my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i < n || src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    if (n <= i)
        dest[i] = '\0';
    return (dest);
}
