#include "ft_stock_par.h"
#include <stdlib.h>

void ft_free_param_array(t_stock_par *par);

int main(int argc, char **argv)
{
    t_stock_par *params;

    params = ft_param_to_tab(argc, argv);
    ft_show_tab(params);
    ft_free_param_array(params);
    return 0;
}

