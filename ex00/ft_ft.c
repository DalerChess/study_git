#include <unistd.h>

void ft_ft(int *nbr) {
	*nbr = 42;
	char c = *nbr / 10 + '0';
	write(1, &c, 1);
	c = *nbr % 10 + '0';
	write(1, &c, 1);
	write(1, "\n", 1);
}

int main(void) {
	int a = 1;
	ft_ft(&a);
	return 0;
}


