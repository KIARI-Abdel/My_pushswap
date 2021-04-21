/*
** EPITECH PROJECT, 2019
** my_sort_int_array
** File description:
** task06
*/

#include "../../include/my.h"

void my_sort_int_array(int *array, int size)
{
    int check = 0;

    while (check == 0) {
        check = 1;
        for (int i = 0; i < size; i++) {
            if (array[i] > array[i + 1]) {
                check = 0;
                my_swap(&array[i], &array[i + 1]);
            }
        }
    }
}
