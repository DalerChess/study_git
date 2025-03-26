#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size) {
	unsigned int i = 0;
	unsigned int j = 0;

	while (dest[i] != '\0' && i < size) {
		i++;
	}
	while (src[j] != '\0') {
		j++;
	}
	
	if (size <= i) {
		return size + j;
	}

	unsigned int k = 0;
	while (src[k] != '\0' && (i + k) < (size - 1)) {
        	dest[i + k] = src[k];
        	k++;
	}

	dest [i + k] = '\0';
	return i + j;
}



int main() {
        char dest[50] = "hello";
        char src[] = ", world";
        printf("%d\n", ft_strlcat(dest, src, 5));
        return 0;
}
