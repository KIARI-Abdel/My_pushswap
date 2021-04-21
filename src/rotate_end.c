/*
** EPITECH PROJECT, 2018
** my_pushswap
** File description:
** rotate_functions_toward_end
*/

#include "../include/my.h"

int rotate_end_a(first_list_t *head)
{
    int tmp = 0;
    int last = 0;
    first_list_t *elem = head;
    while (elem->next != NULL)
        elem = elem->next;
    last = elem->nb;
    elem = head;
    while (elem->next != NULL) {
        tmp = elem->nb;
        elem->nb = last;
        elem = elem->next;
        last = tmp;
    }
    elem->nb = last;
    my_putstr("rra");
    return (0);
}

int rotate_end_a_noprint(first_list_t *head)
{
    int tmp = 0;
    int last = 0;
    first_list_t *elem = head;
    while (elem->next != NULL)
        elem = elem->next;
    last = elem->nb;
    elem = head;
    while (elem->next != NULL) {
        tmp = elem->nb;
        elem->nb = last;
        elem = elem->next;
        last = tmp;
    }
    elem->nb = last;
    return (0);
}

int rotate_end_b(first_list_t *head)
{
    int tmp = 0;
    int last = 0;
    first_list_t *elem = head;
    while (elem->next != NULL)
        elem = elem->next;
    last = elem->nb;
    elem = head;
    while (elem->next != NULL) {
        tmp = elem->nb;
        elem->nb = last;
        elem = elem->next;
        last = tmp;
    }
    elem->nb = last;
    my_putstr("rrb");
    return (0);
}

int rotate_end_b_noprint(first_list_t *head)
{
    int tmp = 0;
    int last = 0;
    first_list_t *elem = head;
    while (elem->next != NULL)
        elem = elem->next;
    last = elem->nb;
    elem = head;
    while (elem->next != NULL) {
        tmp = elem->nb;
        elem->nb = last;
        elem = elem->next;
        last = tmp;
    }
    elem->nb = last;
    return (0);
}

int rotate_end_both(first_list_t *la, first_list_t *lb)
{
    rotate_end_a(la);
    rotate_end_b(lb);
    return (0);
}