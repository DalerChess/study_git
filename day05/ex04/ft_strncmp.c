#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n) {
	unsigned int i = 0;
	if (n == 0) {
		return 0;
	}
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n) {
		i++;
	}
	if (i == n) {
		return 0;
	}
	if (s1[i] > s2[i]) {
		return 1;
	}
	if (s1[i] < s2[i]) {
		return -1;
	}
}

int main() {
	char *s1 = "hello";
	char *s2 = "heilo";
	printf("%d\n", ft_strncmp(s1, s2, 4));
	return 0;
}


