#include <stdlib.h>
#include <stdio.h>

int is_space(char c) {
	return (c == ' ' || c == '\t' || c == '\n');
}

int count_words(char *str) {
	int count = 0;
	int in_word = 0;
	while (*str) {
		if (is_space(*str)) {
			in_word = 0;
		}
		else if (!in_word) {
			in_word = 1;
			count++;
		}
		str++;
	}
	return count;
}

int word_len(char *str) {
	int i = 0;
	while (str[i] && !is_space(str[i])) {
		i++;
	}
	return i;
}

char *copy_word(char *src, int len) {
	char *word = (char *)malloc(sizeof(char) * (len + 1));
	int i = 0;
	while (i < len) {
		word[i] = src[i];
		i++;
	}
	word[i] = '\0';
	return word;
}

char **ft_split_whitespace(char *str) {
	int words = count_words(str);
	char **result = (char **)malloc(sizeof(char *) * (words + 1));
	int i = 0 ;

	while (*str) {
		while (*str && is_space(*str)) {
			str++;
		}
		if (*str) {
			int len = word_len(str);
			result[i++] = copy_word(str, len);
			str += len;
		}
	}
	result[i] = NULL;
	return result;
}

/*int main() {
	char *input = "hello\tworld\nthis is a test";
	char **words = ft_split_whitespace(input);
	int i = 0;
	while (words[i]) {
		printf("%s\n", words[i]);
		free(words[i]);
		i++;
	}
	free(words);
	return 0;
}

*/


