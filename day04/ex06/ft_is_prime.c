#include <stdio.h>

int ft_is_prime(int nb) {
    if (nb <= 1) return 0; 
    if (nb == 2) return 1; 

    int i = 2;
    while (i * i <= nb) {  
        if (nb % i == 0) return 0;  
        i++;
    }
    return 1;  
}

int main() {
    printf("%d\n", ft_is_prime(5));  
    printf("%d\n", ft_is_prime(1));  
    printf("%d\n", ft_is_prime(0));  
    printf("%d\n", ft_is_prime(9));  
    printf("%d\n", ft_is_prime(11)); 
    return 0;
}

