/*
** EPITECH PROJECT, 2019
** my_strstr
** File description:
** task05
*/

#include "../../include/my.h"

int my_count_len(char const *str)
{
    int len = 0;
    while (str[len] != '\0')
        len++;
    return (len);
}

int my_compare(char *str, char const *to_find)
{
    int i = 0;
    int check = 0;

    while (to_find[i] != '\0') {
        if (str[i] != to_find[i])
            check = 1;
        i++;
    }
    return (check);
}

char *my_strstr(char *str, char const *to_find)
{
    int len = my_count_len(to_find);
    for (int i = 0; str[i + len] != '\0'; i++) {
        if (str[i] == to_find[0]) {
            if (my_compare(&str[i], to_find) == 0)
                return (&str[i]);
        }
    }
    return (NULL);
}
