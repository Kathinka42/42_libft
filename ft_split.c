/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichowsky <kczichowsky@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:07:35 by kczichow          #+#    #+#             */
/*   Updated: 2022/04/06 22:39:34 by kczichowsky      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates (with malloc(3)) and returns an array of strings obtained by
// splitting ’s’ using the character ’c’ as a delimiter. The array must end
// with a NULL pointer.

static int count_delim(const char *s, char c)
{
	size_t count;
	int	i;
	count = 0;
	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		count++;
	i++;
	}
	return (count);
}

char *word_dup(const char *str, size_t index, unsigned int start)
{
	size_t			len;

	len = index - start;
	//printf("%zu\n", len);
	printf("%s\n", ft_substr(str, start, len));
	return (ft_substr(str, start, len));
}

char	**ft_split(char const *s, char c)
{
	char 			**res;
	size_t			i;
	size_t			j;
	unsigned int	start;

	i =	0;
	j = 0;
	start = 0;
	
	if (s == NULL)
		return (NULL);
	// if (c == '\0')
	// 	return (NULL);
	// if (count_delim(s, c) == 0)
	// 	return (s);
		
	res = malloc(sizeof(char) * ((ft_strlen(s)+1) + (count_delim(s, c))));
	if (res == NULL)
		return (NULL);

	// if (i == 0)
	// 	res[j] = word_dup(s, i, start);
	// i++;
	// j++;
	
	while (s[i] != '\0')
	{
		if (s[i] != c)
			i++;
		else
		{
			res[j] = word_dup(s, i, start);
			j++;
			start = i+1;
			i++;
		}
	}
	res[j] = word_dup(s, ft_strlen(s), start);
	return (res);
}

// int main()
// {
// 	char const s[40] = "Hallox42xhierxsindxwir";
// 	char c;
// 	c = 'x';

// 	ft_split(s, c);

// 	return (0);
// }

