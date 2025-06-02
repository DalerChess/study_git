#include "ft_stock_par.h"
#include <stdlib.h> // для free

void ft_show_tab(struct s_stock_par *par);

struct s_stock_par *ft_param_to_tab(int ac, char **av);

// Функция для очистки памяти
void free_param_tab(struct s_stock_par *par) {
    int i = 0;
    while (par[i].str) {
        free(par[i].copy);

        int j = 0;
        while (par[i].tab[j]) {
            free(par[i].tab[j]);
            j++;
        }
        free(par[i].tab);
        i++;
    }
    free(par);
}

int main(int argc, char **argv) {
    struct s_stock_par *params = ft_param_to_tab(argc, argv);
    ft_show_tab(params);
    free_param_tab(params); // очистка памяти
    return 0;
}

