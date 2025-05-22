#include <unistd.h>
#include <stdlib.h>

char **ft_split_whitespace(char *str);

void ft_putchr(char c) {
	write(1, &c, 1);
}

void ft_print_words_tables(char **tab) {
	int i = 0;
	int j;
	while (tab[i]) {
		j = 0;
		while (tab[i][j]) {
			ft_putchr(tab[i][j]);
			j++;
		}
		ft_putchr('\n');
		i++;
	}
}

int main() {
	char *input = "hello\tword\nthis is a test";
	char **words = ft_split_whitespace(input);
	ft_print_words_tables(words);

	int i = 0;
	while (words[i]) {
		free(words[i]);
		i++;
	}
	free(words);
	return 0;
}
