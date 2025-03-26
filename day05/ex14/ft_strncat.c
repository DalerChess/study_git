#include <stdio.h>

char *ft_strncat( char *dest, char *src, int nb) {
	int i = 0;
	int j = 0;
	while (dest[i] != '\0') {
		i++;
	}
	while (src[j] != '\0' && j != nb) {
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return dest;
}

int main() {
	char dest[50] = "hello";
	char src[] = ", world";
	printf("%s\n", ft_strncat(dest, src, 5));
	return 0;
}
