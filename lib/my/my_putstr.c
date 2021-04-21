/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** task02
*/

#include "../../include/my.h"

void my_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}
