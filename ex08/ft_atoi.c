#include <stdio.h>

int ft_atoi(char *str) {
    int i = 0;
    int sign = 1;
    int count = 0;

    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
           str[i] == '\v' || str[i] == '\f' || str[i] == '\r') {
        i++;
    }


    if (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            sign = -1;
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9') {
        count = count * 10 + (str[i] - '0');
        i++;
    }

    return count * sign;
}

int main(void) {
    printf("%d\n", ft_atoi("42"));       
    printf("%d\n", ft_atoi("   -42"));   
    printf("%d\n", ft_atoi("+123"));     
    printf("%d\n", ft_atoi("0"));        
    printf("%d\n", ft_atoi("99999abc")); 
    return 0;
}

