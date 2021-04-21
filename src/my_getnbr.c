/*
** EPITECH PROJECT, 2018
** my_pushswap
** File description:
** my_getnbr
*/

#include "../include/my.h"

int is_num(char c)
{
    if (c >= 48 && c <= 57)
        return (0);
    else
        return (1);
}

int is_integer_size(char *str, int start)
{
    int count = 0;
    if (start < 0)
        start *= -1;
    while (is_num(str[start]) == 0) {
        start++;
        count++;
    }
    if (count > 10)
        return (1);
    else
        return (0);
}

int find_number(char *str)
{
    int pos = 0;
    int count = 0;

    while (is_num(str[pos]) == 1) {
        if (str[pos] == '-')
            count++;
        pos++;
    }
    if ((count % 2) != 0)
        return (pos * (-1));
    else
        return (pos);
}

int my_getnbr2(int val, char *str)
{
    long tmp = 0;
    int res = 0;
    int is_neg = 0;
    if (val < 0) {
        val *= -1;
        is_neg = 1;
    }
    for (; is_num(str[val]) == 0; val++) {
        tmp += str[val] - 48;
        tmp *= 10;
    }
    tmp /= 10;
    if (tmp <= 2147483648) {
        if (is_neg == 1)
            res = tmp;
        else if (is_neg == 0 && tmp < 2147483648)
            res = tmp;
    }
    return (res);
}

int my_getnbr(char *str)
{
    int res = 0;
    int val = find_number(str);
    if (is_integer_size(str, val) == 1) {
        return (0);
    }
    res = my_getnbr2(val, str);
    if (val < 0) {
        res *= -1;
    }
    return (res);
}