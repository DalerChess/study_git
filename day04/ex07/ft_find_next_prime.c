#include <stdio.h>

// Функция для проверки, является ли число простым
int ft_is_prime(int nb) {
    if (nb < 2) { 
	    return 0;
    } 
    if (nb == 2) {
	    return 1;
    } 
    if (nb % 2 == 0) {
	    return 0;
    } 

    int i = 3;
    while (i * i <= nb) { 
        if (nb % i == 0) return 0;
        i += 2; 
    }
    return 1; 
}

int ft_find_next_prime(int nb) {
    if (nb < 2) {
	    return 2;
    } 
    while (!ft_is_prime(nb)) { 
        nb++;
    }
    return nb;
}

int main() {
    printf("%d\n", ft_find_next_prime(5));  // 5
    printf("%d\n", ft_find_next_prime(10)); // 11
    printf("%d\n", ft_find_next_prime(0));  // 2
    printf("%d\n", ft_find_next_prime(23)); // 23
    printf("%d\n", ft_find_next_prime(7));  // 7
    printf("%d\n", ft_find_next_prime(20)); // 23
    return 0;
}

