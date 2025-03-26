#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    if (power < 0) {
        return 0; 
    }
    if (power == 0) {
        return 1; 
    }
    return nb * ft_recursive_power(nb, power - 1);
}

int main () {
	printf("%d\n", ft_recursive_power(2, 4));
	printf("%d\n", ft_recursive_power(2, 0));
	printf("%d\n", ft_recursive_power(2, -2));
	printf("%d\n", ft_recursive_power(5, 3));
	printf("%d\n", ft_recursive_power(4, 5));
	return 0;
}


