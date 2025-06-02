#include <stdlib.h>
#include "ft_stock_par.h"

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

char *ft_strdup(char *src)
{
    int i = 0;
    char *dup;

    dup = malloc(ft_strlen(src) + 1);
    if (!dup)
        return NULL;
    while (src[i])
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return dup;
}

char **ft_split_whitespaces(char *str);

t_stock_par *ft_param_to_tab(int ac, char **av)
{
    t_stock_par *arr;
    int i;

    arr = malloc(sizeof(t_stock_par) * (ac + 1));
    if (!arr)
        return NULL;
    i = 0;
    while (i < ac)
    {
        arr[i].size_param = ft_strlen(av[i]);
        arr[i].str = av[i];
        arr[i].copy = ft_strdup(av[i]);
        arr[i].tab = ft_split_whitespaces(av[i]);
        i++;
    }
    arr[i].str = 0;
    return arr;
}

