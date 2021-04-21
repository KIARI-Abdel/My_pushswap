/*
** EPITECH PROJECT, 2019
** concat_params
** File description:
** task02
*/

#include "../../include/my.h"

int get_len(int ac, char **av)
{
    int len = my_strlen(my_strdup(av[0]));
    int i = 1;
    if (ac > 1) {
        while (i < ac) {
            len += my_strlen(my_strdup(av[i]));
            i++;
        }
        len += i;
    }
    return (len);

}

char *my_concat_str(char *dest, char *src, int j)
{
    int i = 0;
    while (src[i] != '\0') {
        dest[j] = src[i];
        i++;
        j++;
    }
    return (dest);
}

char *concat_params(int ac, char **av)
{
    int i = 0;
    int j = 0;
    int len = get_len(ac, av);
    char *res = malloc(sizeof(char) * (len + 1));
    while (i < ac) {
        res = my_concat_str(res, av[i], j);
        j += my_strlen(av[i]);
        if (i + 1 < ac) {
            res[j] = '\n';
            j++;
        }
        i++;
    }
    res[j] = '\0';
    return (res);

}
