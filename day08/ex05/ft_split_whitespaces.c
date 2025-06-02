#include <stdlib.h>

int	is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int	word_count(char *str)
{
	int	count = 0;
	int	in_word = 0;

	while (*str)
	{
		if (!is_whitespace(*str) && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (is_whitespace(*str))
			in_word = 0;
		str++;
	}
	return (count);
}

char	*malloc_word(char *str)
{
	int		len = 0;
	char	*word;

	while (str[len] && !is_whitespace(str[len]))
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	for (int i = 0; i < len; i++)
		word[i] = str[i];
	word[len] = '\0';
	return (word);
}

char	**ft_split_whitespaces(char *str)
{
	int		i = 0;
	char	**tab;
	int		words = word_count(str);

	tab = (char **)malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);

	while (*str)
	{
		while (*str && is_whitespace(*str))
			str++;
		if (*str)
		{
			tab[i] = malloc_word(str);
			i++;
			while (*str && !is_whitespace(*str))
				str++;
		}
	}
	tab[i] = 0;
	return (tab);
}

