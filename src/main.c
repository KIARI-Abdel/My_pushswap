/*
** EPITECH PROJECT, 2018
** my_pushswap
** File description:
** my_pushswap_main
*/

#include "../include/my.h"

int check_flag(char *arg, pswp_t *p)
{
    if (arg[0] == '-' && arg[1] == 'v') {
        p->v_flag = 1;
        return (0);
    }
    return (-1);
}

int check_list(int ac, char **av, pswp_t *p)
{
    int check = 0;
    for (int i = 1; i < ac; i++) {
        check = check_flag(av[i], p);
        if (check == -1)
            check = is_number(av[i]);
    }
    return (check);
}

int manage_arg(int ac, char **av)
{
    pswp_t *p = malloc(sizeof(pswp_t));
    p->h_lb = NULL;
    p->h_la = NULL;
    p->s_la = 0;
    int check = check_list(ac, av, p);
    if (check == -1) {
        my_puterr("Invalid argument, expected numbers to be sorted\n");
        return (84);
    }
    init_list(ac, av, p);
    return (0);
}

int back_to_final_list(pswp_t *p)
{
    first_list_t *tmp = p->h_lb;
    p->h_la = NULL;
    int count = 0;
    while (tmp != NULL) {
        tmp = tmp->next;
        count++;
    }
    for (int i = 0; i < count; i++)
        pa(p);

    return (0);
}

int main(int ac, char **av)
{
    int check = 0;
    if (ac == 1) {
        my_puterr("Invalid number of arguments\n");
        return (84);
    } else
        check = manage_arg(ac, av);
    return (check);
}
