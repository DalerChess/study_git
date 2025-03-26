#include <stdio.h>

char *ft_strncpy (char *dest, char *scr, unsigned int n) {
	int i = 0;
	while (scr[i] != '\0' && i < n) {
		dest[i] = scr[i];
		i++;
	}
	while (i < n) {
		dest[i] = '\0';
		i++;
	}
	return dest;
}

int main() {
	char scr[] = "hello";
	char dest[20];
	ft_strncpy(dest, scr, 7);
	printf("%s\n", dest);
	return 0;
}
