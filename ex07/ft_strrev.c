#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str) {
	int count = 0;
	if (str == NULL) {
		return 0;
	}

	while (str[count] != '\0') {
		count++;
	}
	return count;
}

void ft_swap(char *a, char *b) {
	char save = *a;
	*a = *b;
	*b = save;
}

char *ft_strrev(char *str){
	int begin = 0;
	int end = ft_strlen(str) - 1;
	while (begin < end) {
		ft_swap(&str[begin++], &str[end--]);
	}
	return str;
}

int main(void) {
	char str[] = "hello";
	printf("after: %s\n", ft_strrev(str));
	return 0;
}
