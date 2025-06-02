#ifndef FT_STOCK_H
#define FT_STOCK_H

typedef struct s_stock_par {
	int size_param;
	char *str;
	char *copy;
	char **tab;
} t_stock_par;
t_stock_par *ft_param_to_tab(int ac, char **av);
void ft_show_tab(t_stock_par *par);

#endif
