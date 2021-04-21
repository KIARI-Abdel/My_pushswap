/*
** EPITECH PROJECT, 2019
** my_strcpy
** File description:
** task06
*/

#include "../../include/my.h"

int count_len(char const *str)
{
    int len = 0;
    while (str[len] != '\0')
        len++;
    return (len);
}

int compare_str(char const *s1, char const *s2, int l1, int l2)
{
    int check = 0;
    int i = 0;
    int len = 0;

    if (l1 >= l2)
        len = l2;
    else
        len = l1;
    while (i < len) {
        if (s1[i] != s2[i])
            check = 1;
        i++;
    }
    return (check);
}

int my_strcmp(char const *s1, char const *s2)
{
    int l1 = count_len(s1);
    int l2 = count_len(s2);
    if (compare_str(s1, s2, l1, l2) == 0 && l1 == l2)
        return (0);
    else if (l1 > l2)
        return (1);
    else
        return (-1);
}
