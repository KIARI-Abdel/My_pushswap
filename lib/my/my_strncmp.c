/*
** EPITECH PROJECT, 2019
** my_strncpy
** File description:
** task07
*/

#include "../../include/my.h"

int count_strlen(char const *str)
{
    int len = 0;
    while (str[len] != '\0')
        len++;
    return (len);
}

int compare_strings(char const *s1, char const *s2, int n)
{
    int i = 0;
    int check = 0;
    int len = 0;
    int l1 = count_strlen(s1);
    int l2 = count_strlen(s2);

    if (l1 >= l2)
        len = l2;
    else
        len = l1;
    while (i < n) {
        if (s1[i] != s2[i])
            check = s1[i] - s2[i];
        i++;
    }
    return (check);
}

int my_strncmp(char const *s1, char const *s2, int n)
{
    int check = 0;
    int l1 = count_strlen(s1);
    int l2 = count_strlen(s2);
    if (compare_strings(s1, s2, n) != 1) {
        check = compare_strings(s1, s2, n);
        return (check);
    } else if (compare_strings(s1, s2, n) == 0)
        return (0);
    return (check);
}
