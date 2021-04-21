/*
** EPITECH PROJECT, 2018
** my_pushswap
** File description:
** push_functions
*/

#include "../include/my.h"

int pb(pswp_t *p)
{
    first_list_t *to_del = p->h_la;
    first_list_t *lb = p->h_lb;
    if (to_del == NULL || p->s_la == 0)
        return (0);
    if (lb == NULL)
        lb = add_first_elem(to_del->nb);
    else {
        add_element(lb, to_del->nb);
        rotate_end_b_noprint(lb);
        my_putchar(' ');
    }
    p->h_la = p->h_la->next;
    p->h_lb = lb;
    free(to_del);
    p->s_la--;
    if (p->s_la == 0)
        p->h_la = NULL;
    my_putstr("pb");
    return (0);
}

int pa(pswp_t *p)
{
    first_list_t *to_del = p->h_lb;
    first_list_t *la = p->h_la;
    if (to_del == NULL)
        return (0);
    if (la == NULL)
        la = add_first_elem(to_del->nb);
    else {
        add_element(la, to_del->nb);
        rotate_end_a_noprint(la);
        my_putchar(' ');
    }
    p->h_lb = p->h_lb->next;
    p->h_la = la;
    free(to_del);
    my_putstr("pa");
    return (0);
}