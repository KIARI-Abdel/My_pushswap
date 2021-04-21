/*
** EPITECH PROJECT, 2018
** my_pushswap
** File description:
** get_sizes
*/

#include "../include/my.h"

int get_smaller(first_list_t *head)
{
    first_list_t *browse = head;
    int count = 0;
    int pos = 0;
    int tmp = browse->nb;
    while (browse != NULL) {
        if (browse->nb < tmp) {
            tmp = browse->nb;
            pos = count;
        }
        browse = browse->next;
        count++;
    }
    return (pos);
}

int get_bigger(first_list_t *head)
{
    first_list_t *browse = head;
    int count = 0;
    int pos = 0;
    int tmp = browse->nb;
    while (browse != NULL) {
        if (browse->nb > tmp) {
            tmp = browse->nb;
            pos = count;
        }
        browse = browse->next;
        count++;
    }
    return (pos);
}

int get_big_pos(int big_pos, int small_pos)
{
    if (big_pos > small_pos)
        return (big_pos);
    else
        return (small_pos);
}

int get_small_pos(int big_pos, int small_pos)
{
    if (big_pos > small_pos)
        return (small_pos);
    else
        return (big_pos);
}
