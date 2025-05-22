#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max) {
	int *arr;
	int i;

	if (min >= max) {
		return NULL;
	}
	arr = (int *)malloc(sizeof(int) * (max-min));
	if (!arr) {
		return NULL;
	}
	i = 0;
	while (min < max) {
		arr[i] = min;
		i++;
		min++;
	}
	return arr;
}

int main (void) {
	int min = 5;
	int max = 9;
	int *range;
	int i;
	range = ft_range(min, max);
	if (!range) {
		return 1;
	}
	i = 0;
	while (i < (max - min)) {
		printf("%d\n", range[i]);
		i++;
	}
	printf("\n");
	free(range);
	return 0;
}

