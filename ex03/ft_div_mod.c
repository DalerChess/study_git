#include <unistd.h>
#include <stdio.h>
void ft_div_mod(int a, int b, int *div, int *mod) {
	*div = a / b;
	*mod = a % b;
}

int main(void) {
	int a = 14;
	int b = 5;
	int div, mod;
	ft_div_mod(a, b, &div, &mod);
	printf ("выводим результат: %d\n", div);
	printf ("выводим остаток: %d\n", mod);
	return 0;
}


