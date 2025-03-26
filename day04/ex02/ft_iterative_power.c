#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int result = 1;

    if (power < 0)
        return 0;  // Если степень меньше 0, возвращаем 0
    while (power > 0)
    {
        result *= nb;
        power--;
    }
    return result;
}

int main() {
	printf("%d\n", ft_iterative_power(2, 4));
	printf("%d\n", ft_iterative_power(3, 1));
	printf("%d\n", ft_iterative_power(5, 3));
	printf("%d\n", ft_iterative_power(2, 0));
	return 0;
}

			 

