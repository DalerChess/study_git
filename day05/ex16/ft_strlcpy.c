#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size) {
	unsigned int i = 0;
	unsigned int j = 0;

	while (src[i] != '\0') {
		i++;
	}

	if (size == 0) {
		return i;
	}

	while (src[j] != '\0' && j < size - 1) {
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return i;
}

int main() {
	char dest[8];
	char src[] = "worldddd";
	printf("%s\n", dest);
	printf("%d\n", ft_strlcpy(dest, src, 50));
	printf("%s\n", dest);
	return 0;
}
