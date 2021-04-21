/*
** EPITECH PROJECT, 2018
** my_pushswap
** File description:
** struct_initialisation
*/

#include "../include/my.h"

int display_list(first_list_t *head)
{
    first_list_t *la = head;
    if (la == NULL)
        my_putstr("empty\n");
    while (la != NULL) {
        my_put_nbr(la->nb);
        my_putchar(' ');
        la = la->next;
    }
    my_putchar('\n');
    return (0);
}

first_list_t *add_first_elem(int arg)
{
    first_list_t *la = malloc(sizeof(first_list_t));
    la->nb = arg;
    la->next = NULL;
    return (la);
}

int add_element(first_list_t *head, int arg)
{
    first_list_t *elem = malloc(sizeof(first_list_t));
    first_list_t *tmp = head;
    elem->nb = arg;
    elem->next = NULL;
    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = elem;
    return (0);
}

int init_list(int ac, char **av, pswp_t *p)
{
    int i = 1;
    first_list_t *la = NULL;
    if (av[i][0] == '-')
        i = 2;
    for (; i < ac && av[i] != NULL; i++) {
        if (av[i][0] != '-' && la == NULL)
            la = add_first_elem(my_getnbr(av[i]));
        else if (av[i][0] != '-')
            add_element(la, my_getnbr(av[i]));
        if (av[i][0] != '-')
            p->s_la++;
    }
    p->h_la = la;
    tri(p);
    return (0);
}