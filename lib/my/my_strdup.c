/*
** EPITECH PROJECT, 2019
** my_strdup
** File description:
** task01
*/

#include "../../include/my.h"

char *my_strdup(char const *src)
{
    int i = 0;
    int len = my_strlen(src);
    char *res = malloc(sizeof(char) * (len + 1));
    while (src[i] != '\0') {
        res[i] = src[i];
        i++;
    }
    res[i] = '\0';
    return (res);
}
