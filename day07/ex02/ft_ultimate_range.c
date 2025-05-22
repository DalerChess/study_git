#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max) {
	int size = max - min; 
	int i;

	if (min >= max) {
		*range = NULL;
		return 0;
	}

	*range = (int *)malloc(sizeof(int) * size);
	if (!*range) {
		return 0;
	}
	i = 0;
	while (i < size) {
		(*range)[i] = min + i;
		i++;
	}
	return size;
}

int main(void) {
	int *arr;
	int min = 5;
	int max = 12;
	int size = ft_ultimate_range(&arr, min, max);
	if (arr == NULL) {
		printf("недопустимый размер для выделенной памяти");
		return 1;
	}

	printf("Размер: %d\n", size);
	int i = 0;
	while (i < size) {
		printf("%d\n", arr[i]);
		i++;
	}
	free(arr);
	return 0;
}
