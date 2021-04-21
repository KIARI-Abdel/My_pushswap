/*
** EPITECH PROJECT, 2018
** my_pushswap
** File description:
** tri
*/

#include "../include/my.h"

int add_biggest(pswp_t *p)
{
    pb(p);
    my_putchar(' ');
    rotate_beginin_b(p->h_lb);
    my_putchar(' ');
    return (0);
}

int manage_element(pswp_t *p, int actual, int big_pos, int small_pos)
{
    if (actual == big_pos)
        add_biggest(p);
    else if (actual == small_pos) {
        pb(p);
        my_putchar(' ');
    }
    return (0);
}

int retrieve_element(pswp_t *p, int big_pos, int small_pos)
{
    int actual = 0;
    int pos = get_big_pos(big_pos, small_pos);
    int oth = get_small_pos(big_pos, small_pos);
    while (actual < pos) {
        if (actual == oth) {
            manage_element(p, actual, big_pos, small_pos);
            pos--;
        }
        rotate_beginin_a(p->h_la);
        my_putchar(' ');
        actual++;
    }
    if (actual == pos)
        manage_element(p, actual, big_pos, small_pos);
    return (0);
}

int tri(pswp_t *p)
{
    int big_pos = 0;
    int small_pos = 0;
    while (p->s_la > 0) {
        big_pos = get_bigger(p->h_la);
        small_pos = get_smaller(p->h_la);
        retrieve_element(p, big_pos, small_pos);
    }
    merge_list(p);
    my_putchar('\n');
    return (0);
}
