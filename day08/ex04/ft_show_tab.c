#include <unistd.h>
#include "ft_stock_par.h"

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    while (*str)
        ft_putchar(*str++);
}

void ft_putnbr(int nb)
{
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb >= 10)
        ft_putnbr(nb / 10);
    ft_putchar(nb % 10 + '0');
}

void ft_show_tab(t_stock_par *par)
{
    int i = 0;
    int j;

    while (par[i].str)
    {
        ft_putstr(par[i].copy);
        ft_putchar('\n');
        ft_putnbr(par[i].size_param);
        ft_putchar('\n');
        j = 0;
        while (par[i].tab[j])
        {
            ft_putstr(par[i].tab[j]);
            ft_putchar('\n');
            j++;
        }
        i++;
    }
}

