#include <stdio.h>

int ft_strlen(char *str) {
	int count = 0;
	while (str[count] != '\0') {
		count++;
	}
	return count;
}	

int main(void) {
	char *str = "hello";
	int length = ft_strlen(str);
	printf("Количество символов в строке = %d\n", length);
	return 0;
}


