#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int result = 1;
    
    if (nb < 0) {
        return 0;
    }	
    
    while (nb > 1)
    {
        result *= nb;
        nb--;
    }
    
    return result;
}

int main()
{
    printf("Factorial of 5: %d\n", ft_iterative_factorial(5));  
    printf("Factorial of 0: %d\n", ft_iterative_factorial(0));  
    printf("Factorial of 1: %d\n", ft_iterative_factorial(1));  
    printf("Factorial of -3: %d\n", ft_iterative_factorial(-3));
    printf("Factorial of 7: %d\n", ft_iterative_factorial(7));  

    return 0;
}

