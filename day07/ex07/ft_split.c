#include <stdlib.h>
#include <stdio.h>

int is_separator(char c, char *charset) {
	int i = 0;
	while (charset[i]) {
		if (c == charset[i]) {
			return 1;
		}
		i++;
	}
	return 0;
}

int word_count(char *str, char *charset) {
	int count = 0;
	int in_word = 0;
	while (*str) {
		if (is_separator(*str, charset)) {
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

int word_length(char *str, char *charset) {
	int len = 0;
	while (str[len] && !is_separator(str[len], charset)) {
		len++;
	}
	return len;
}

char *copy_word(char *start, int len) {
	char *word = (char *)malloc(sizeof(char) * (len + 1));
	int i = 0;
	while (i < len) {
		word[i] = start[i];
		i++;
	}
	word[len] = '\0';
	return word;
}

char **ft_split(char *str, char *charset) {
	int words = word_count(str, charset);
	char **result = (char **)malloc(sizeof(char *) * (words + 1));
	int i = 0;

	while (*str) {
		while (*str && is_separator(*str, charset)) {
			str++;
		}
		if (*str) {
			int len = word_length(str, charset);
			result[i++] = copy_word(str, len);
			str += len;
		}
	}
	result[i] = 0;
	return result;
}

char **ft_split(char *str, char *charset); // Объявляем функцию

int main(void) {
    char *str = "Hello,,world;this:is|42";
    char *charset = ",;:|";

    char **result = ft_split(str, charset);

    for (int i = 0; result[i]; i++) {
        printf("Word %d: %s\n", i + 1, result[i]);
        free(result[i]); // освобождаем каждое слово
    }
    free(result); // и сам массив указателей

    return 0;
}
