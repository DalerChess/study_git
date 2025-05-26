#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str) {
	int i = 0;
	while (str[i]) {
		i++;
	}
	return i;
}

char *ft_concat_params(int argc, char **argv) {
	int total_len = 0;
	int i, j, k;
	char *result;
	i = 1;
	while (i < argc) {
		total_len = total_len + ft_strlen(argv[i]) + 1;
		i++;
	}

	result = (char *)malloc(sizeof(char) * total_len);
	if (!result) {
		return NULL;
	}

	k = 0;
	i = 1;
	while (i < argc) {
		j = 0;
		while (argv[i][j]) {
			result[k++] = argv[i][j++];
		}
		result[k++] = '\n';
		i++;
	}
	result[k - 1] = '\0';
	return result;
}

int main(int argc, char **argv) {
	char *res = ft_concat_params(argc, argv);
	if (res) {
		printf("%s\n", res);
		free(res);
	}
	return 0;
}
