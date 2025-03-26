#include <unistd.h>

void ft_putchr(char c) {
	write(1, &c, 1);
}

void print_hex(unsigned char c) {
	char hex[] = "0123456789abcdef";
	ft_putchr('\\');
	ft_putchr(hex[c / 16]);
	ft_putchr(hex[c % 16]);
}

void ft_putstr_non_printable(char *str) {
	int i = 0;
	while (str[i] != '\0') {
		if (str[i] >= 32 && str[i] <= 126) {
			ft_putchr(str[i]); 
		}
		else {
			print_hex((unsigned char) str[i]);
		}
		i++;
	}
}

int main() {
	ft_putstr_non_printable("Coucou\n tu vas bien ?");
	return 0;
}
