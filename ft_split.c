/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichowsky <kczichowsky@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 09:06:32 by kczichowsky       #+#    #+#             */
/*   Updated: 2022/04/12 11:36:09 by kczichowsky      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_word(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

static char	*print_word(char const *word, char c)
{
	size_t	len;
	char	*new_word;

	len = 0;
	while (word[len] != c && word[len] != '\0')
		len++;
	new_word = ft_substr(word, 0, len + 1);
	if (new_word != NULL)
		new_word[len] = '\0';
	return (new_word);
}

static void	clean(char **res, size_t j)
{
	size_t	count;

	count = 0;
	if (res[j] == NULL)
	{
		while (count < j)
		{
			free(res[count]);
			count++;
		}
	}	
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	res = ft_calloc(sizeof(char *), count_word(s, c) + 1);
	if (res == NULL)
		return (res);
	while (j < count_word(s, c))
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		res[j] = print_word(s + i, c);
		clean (res, j);
		while (s[i] != c && s[i] != '\0')
			i++;
		j++;
	}
	res[j] = NULL;
	return (res);
}

// int main()
// {
// 	char const s[40] = "  Hallo 42, hier    bin ich.";
// 	char c;
// 	c = ' ';

// 	printf("%zu\n", count_word(s, c));
// 	ft_split(s, c);
// 	return (0);
// }