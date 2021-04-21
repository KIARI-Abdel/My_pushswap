/*
** EPITECH PROJECT, 2018
** my_pushswap
** File description:
** rotate_functions_toward_beginin
*/

#include "../include/my.h"

int rotate_beginin_a(first_list_t *head)
{
    int first_val = head->nb;
    first_list_t *tmp = head;
    while (tmp->next != NULL) {
        tmp->nb = tmp->next->nb;
        tmp = tmp->next;
    }
    tmp->nb = first_val;
    my_putstr("ra");
    return (0);
}

int rotate_beginin_b(first_list_t *head)
{
    int first_val = head->nb;
    first_list_t *tmp = head;
    while (tmp->next != NULL) {
        tmp->nb = tmp->next->nb;
        tmp = tmp->next;
    }
    tmp->nb = first_val;
    my_putstr("rb");
    return (0);
}

int rotate_beginin_both(first_list_t *la, first_list_t *lb)
{
    rotate_beginin_a(la);
    rotate_beginin_b(lb);
    return (0);
}