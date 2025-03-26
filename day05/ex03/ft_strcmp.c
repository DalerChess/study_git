#include <stdio.h>

int ft_strcmp(char *s1, char *s2) {
	while (*s1 == *s2 && *s1 != '\0') {
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0') {
		return 0;
	}
	if (*s1 > *s2) {
		return 1;
	}
	if (*s1 < *s2) {
		return -1;
	}
}

int main() {
	char *s1 = "hello";
	char *s2 = "hell";
	printf ("%d\n", ft_strcmp(s1, s2));
	return 0;
}

