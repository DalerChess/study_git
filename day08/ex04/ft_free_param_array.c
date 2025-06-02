#include <stdlib.h>
#include "ft_stock_par.h"

void ft_free_param_array(t_stock_par *par)
{
    int i = 0;
    int j;

    while (par[i].str)
    {
        free(par[i].copy);
        j = 0;
        while (par[i].tab && par[i].tab[j])
        {
            free(par[i].tab[j]);
            j++;
        }
        free(par[i].tab);
        i++;
    }
    free(par);
}

