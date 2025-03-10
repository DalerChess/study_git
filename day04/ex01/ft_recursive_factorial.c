#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    if (nb < 0)
        return 0;  // Ошибка для отрицательных чисел
    if (nb == 0 || nb == 1)
        return 1;  // Базовый случай: 0! = 1 и 1! = 1
    return nb * ft_recursive_factorial(nb - 1);  // Рекурсивный вызов
}

int main()
{
    printf("Factorial of 5: %d\n", ft_recursive_factorial(5));
    printf("Factorial of 5: %d\n", ft_recursive_factorial(0));
    printf("Factorial of 5: %d\n", ft_recursive_factorial(1));
    printf("Factorial of 5: %d\n", ft_recursive_factorial(-3));
    printf("Factorial of 5: %d\n", ft_recursive_factorial(7));
    return 0;
}

