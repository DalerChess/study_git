#include <unistd.h>

void ft_swap(int *a, int *b) {
	int save = *a;
	*a = *b;
	*b = save;
	char c = *a / 10 + '0';
	write(1, &c, 1);
	c = *a % 10 + '0';
	write(1, &c, 1);
	write(1, " ", 1);
	c = *b / 10 + '0';
        write(1, &c, 1);
        c = *b % 10 + '0';
        write(1, &c, 1);
	write(1, "\n", 1);
}

int main(void) {
	int c = 21, d = 45;
	ft_swap(&c, &d);
	return 0;
}

