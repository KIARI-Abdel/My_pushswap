/*
** EPITECH PROJECT, 2018
** my_pushswap
** File description:
** post_tri
*/

#include "../include/my.h"

int find_bigger_and_way(first_list_t *lb)
{
    first_list_t *browse = lb;
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
    count /= 2;
    if (pos >= count)
        pos *= -1;
    return (pos);
}

int merge_toward_end(pswp_t *p, int pos, int tmp)
{
    first_list_t *browse = p->h_lb;
    int count = 0;
    while (browse != NULL) {
        browse = browse->next;
        count++;
    }
    for (int i = 0; i < (count - pos); i++) {
        if (tmp >= p->h_lb->nb && tmp <= p->h_lb->next->nb)
            pb(p);
        rotate_end_b(p->h_lb);
        if (i != pos)
            my_putchar(' ');
    }
    return (0);
}

int merge_toward_beginin(pswp_t *p, int pos, int tmp)
{
    for (int i = 0; i < pos; i++) {
        if (tmp >= p->h_lb->nb && tmp <= p->h_lb->next->nb)
            pb(p);
        rotate_beginin_b(p->h_lb);
        if (i != pos)
            my_putchar(' ');
    }
    return (0);
}

int merge_list(pswp_t *p)
{
    int tmp = 0;
    int pos = 0;
    if (p->h_la != NULL)
        tmp = p->h_la->nb;
    pos = find_bigger_and_way(p->h_lb);
    if (pos < 0) {
        pos *= -1;
        merge_toward_end(p, pos, tmp);
    } else
        merge_toward_beginin(p, pos, tmp);
    back_to_final_list(p);
    return (0);
}