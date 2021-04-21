/*
** EPITECH PROJECT, 2017
** bistro
** File description:
** header
*/

#ifndef MY_H
#define MY_H

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

typedef struct first_list {
    int nb;
    struct first_list *next;
}first_list_t;

typedef struct pswp {
    first_list_t *h_lb;
    first_list_t *h_la;
    int v_flag;
    int s_la;
}pswp_t;

// Main.c
int check_flag(char *, pswp_t *);
int check_list(int, char **, pswp_t *);
int manage_arg(int, char **);
int back_to_final_list(pswp_t *);
int main(int, char **);

// Swap.c
int swap_elem(first_list_t *);

// Rotate_beginin.c
int rotate_beginin_a(first_list_t *);
int rotate_beginin_b(first_list_t *);
int rotate_beginin_both(first_list_t *, first_list_t *);

// Rotate_end.c
int rotate_end_a(first_list_t *);
int rotate_end_a_noprint(first_list_t *);
int rotate_end_b(first_list_t *);
int rotate_end_b_noprint(first_list_t *);
int rotate_end_both(first_list_t *, first_list_t *);

// Push.c
int pa(pswp_t *);
int pb(pswp_t *);

// Tri.c
int add_smallest(pswp_t *);
int manage_element(pswp_t *, int, int, int);
int retrieve_element(pswp_t *, int, int);
int tri(pswp_t *);

// Get_sizes.c
int get_smaller(first_list_t *);
int get_bigger(first_list_t *);
int get_big_pos(int, int);
int get_small_pos(int, int);

// Post_tri.c
int find_bigger_and_way(first_list_t *);
int merge_toward_end(pswp_t *, int, int);
int merge_toward_beginin(pswp_t *, int, int);
int merge_list(pswp_t *);

// Struct_functions.c
int display_list(first_list_t *);
first_list_t *add_first_elem(int);
int add_element(first_list_t *, int );
int init_list(int, char **, pswp_t *);

// My_getnbr.c
int is_num(char);
int is_integer_size(char *, int);
int find_number(char *);
int my_getnbr2(int, char *);
int my_getnbr(char *);

// Little_functions.c
int my_strlen(char *);
void my_putchar(char);
void my_putstr(char *);
void my_puterr(char *);
int is_number(char *);

// Little_functions.c
int my_put_nbr(int);

#endif
