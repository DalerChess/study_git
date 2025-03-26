#include <unistd.h>

void ft_putnbr_base(int nbr, char *base) {
	int base_len = 0;
	int i = 0;
	int j;
	char buffer[33];
	int index = 0;
	int is_negative = 0;

	while (base[base_len] != '\0') {
		base_len++;
	}
	if (base_len < 2) {
		return;
	}

	while (i < base_len) {
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127)
			return;
		j = i + 1;
		while (j < base_len) {
			if (base[i] == base[j]) {
				return;
			}
			j++;
		}
		i++;
	}
	
	long nbr_long = nbr;

	if (nbr_long < 0) {
		is_negative = 1;
		nbr_long = -nbr_long;
	}
	while (nbr_long> 0) {
		buffer[index++] = base[nbr_long % base_len];
		nbr_long = nbr_long / base_len;
	}
	if (is_negative) {
		write(1, "-", 1);
	}
	while (index > 0) {
		write(1, &buffer[--index], 1);
	}
}

int main() {
	ft_putnbr_base(42, "01");
	write(1, "\n", 1);
	ft_putnbr_base(-255, "0123456789ABCDEF");
        write(1, "\n", 1);
	ft_putnbr_base(42, "poneyvif");
        write(1, "\n", 1);
	return 0;
}


