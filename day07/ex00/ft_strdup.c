#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(char *src) {
	int i;
	char *dup;

	i = 0;
	while (src[i]) {
		i++;
	}
	dup = (char *)malloc(sizeof(char) * (i + 1));
	if (!dup) {
		return 0;
	}
	i = 0;
	while (src[i]) {
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return dup;
}

int main() {
	char *original = "hello";
	char *copy = ft_strdup(original);

	if (copy == NULL) {
		printf("Ошибка (NULL)\n");
		return 1;
	}

	printf("Оригинал: %s\n", original);
	printf("Копия: %s\n", copy);
	if (copy != original)
		printf("копия в другой области - все ок\n");
	else
		printf("копия в этой же области - ошибка\n");
	
	free(copy);
	return 0 ;
}	
