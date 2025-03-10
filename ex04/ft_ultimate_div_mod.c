#include <unistd.h>
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b) {
	int div = *a / *b;
	int mod = *a % *b;
	*a = div;
	*b = mod;
}

int main(void) {
	int a = 14;
	int b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf ("Результат a = %d, остаток b = %d\n", a, b);
	return 0;
}

