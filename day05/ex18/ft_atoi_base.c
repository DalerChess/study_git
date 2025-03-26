#include <stdio.h>

int is_valid_base(char *base) {
    int base_len = 0;
    int i, j;

    while (base[base_len])
        base_len++;

    if (base_len < 2)
        return 0;

    for (i = 0; i < base_len; i++) {
        if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127)
            return 0;
        for (j = i + 1; j < base_len; j++) {
            if (base[i] == base[j])
                return 0;
        }
    }
    return base_len;
}

int get_index(char c, char *base) {
    int i = 0;

    while (base[i]) {
        if (base[i] == c)
            return i;
        i++;
    }
    return -1;
}

int ft_atoi_base(char *str, char *base) {
    int base_len = is_valid_base(base);
    if (!base_len)
        return 0;

    int i = 0, sign = 1, result = 0;

    // Пропускаем пробельные символы
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;

    // Определяем знак числа
    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }

    // Конвертация числа
    int digit;
    while ((digit = get_index(str[i], base)) != -1) {
        result = result * base_len + digit;
        i++;
    }

    return result * sign;
}


int main() {
	printf("%d\n", ft_atoi_base("101010", "01"));
	printf("%d\n", ft_atoi_base("FF", "0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base("-FF", "0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base(" -2A", "0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base("ex", "poneyfiv"));
	printf("%d\n", ft_atoi_base("42", ""));
	printf("%d\n", ft_atoi_base("42", "1"));
	printf("%d\n", ft_atoi_base("42", "012+345"));
	return 0;
}



	


