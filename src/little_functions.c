/*
** EPITECH PROJECT, 2018
** my_pushswap
** File description:
** little_functions
*/

#include "../include/my.h"

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
}

void my_puterr(char *str)
{
    write(2, str, my_strlen(str));
}

int is_number(char *str)
{
    int check = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (is_num(str[i]) == 1 && str[i] != ' ')
            check = -1;
    }
    return (check);
}