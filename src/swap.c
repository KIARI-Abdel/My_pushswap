/*
** EPITECH PROJECT, 2018
** my_pushswap
** File description:
** swap_functions
*/

#include "../include/my.h"

int swap_elem_a(first_list_t *head)
{
    int tmp = head->next->nb;
    head->next->nb = head->nb;
    head->nb = tmp;
    my_putstr("sa");
    return (0);
}

int swap_elem_b(first_list_t *head)
{
    int tmp = head->next->nb;
    head->next->nb = head->nb;
    head->nb = tmp;
    my_putstr("sb");
    return (0);
}

int swap_elem_both(first_list_t *la, first_list_t *lb)
{
    swap_elem_a(la);
    swap_elem_b(lb);
    return (0);
}