#include <stdlib.h>
#include <stdio.h>
int ft_strlen(char *str) {
	int i = 0;
	while (str[i]) {
		i++;
	}
	return i;
}

int ft_base_valid(char *base) {
	int i, j;
	if (ft_strlen(base) < 2) {
		return 0;
	}
	i = 0;
	while (base[i]) {
		if (base[i] == '+' || base[i] == '-' || base[i] <=32 || base[i] > 126) {
			return 0;
		}
		j = i + 1;
		while (base[j]) {
			if (base[i] == base[j]) {
				return 0;
			}
			j++;
		}
		i++;
	}
	return 1;
}

int ft_base_index(char c, char *base) {
	int i = 0;
	while (base[i]) {
		if (base[i] == c) {
			return i;
		}
		i++;
	}
	return -1;
}

int ft_atoi_base(char *str, char *base) {
	int i = 0;
	int sign = 1;
	int result = 0;
	int base_len = ft_strlen(base);

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)) {
		i++;
	}
	while (str[i] == '+' || str[i] == '-') {
		if (str[i] == '-') {
			sign *= -1;
		}
		i++;
	}
	while (ft_base_index(str[i], base) != -1) {
		result = result * base_len + ft_base_index(str[i], base);
		i++;
	}
	return (result * sign);
}

int ft_nbrlen(int nbr, int base_len) {
	int len = (nbr <= 0) ? 1 : 0;
	while (nbr) {
		nbr /= base_len;
		len ++;
	}
	return len;
}

char *ft_itoa_base(int nbr, char *base) {
	int base_len = ft_strlen(base);
	int len = ft_nbrlen(nbr, base_len);
	char *res = (char *)malloc(sizeof(char) * (len + 1));
	unsigned int nb;

	if (!res) {
		return NULL;
	}
	res[len] = '\0';
	nb = (nbr < 0) ? -nbr : nbr;
	while (len--) {
		res[len] = base[nb % base_len];
		nb /= base_len;
	}
	if (nbr < 0) {
		res[0] = '-';
	}
	return res;
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to) {
	if (!ft_base_valid(base_from) || !ft_base_valid(base_to)) {
		return NULL;
	}
	return ft_itoa_base(ft_atoi_base(nbr, base_from), base_to);
}

int main(void) {
    char *nbr = "1011";                     // число в бинарной системе
    char *base_from = "01";                // бинарная система
    char *base_to = "0123456789ABCDEF";    // шестнадцатеричная система

    char *converted = ft_convert_base(nbr, base_from, base_to);
    if (converted)
    {
        printf("Original: %s (base: %s)\n", nbr, base_from);
        printf("Converted: %s (base: %s)\n", converted, base_to);
        free(converted); // не забудь освободить память
    }
    else
    {
        printf("Conversion failed.\n");
    }

    return 0;
}

