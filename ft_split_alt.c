/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:07:35 by kczichow          #+#    #+#             */
/*   Updated: 2022/04/07 13:12:18 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates (with malloc(3)) and returns an array of strings obtained by
// splitting ’s’ using the character ’c’ as a delimiter. The array must end
// with a NULL pointer.

static size_t count_words(const char *s, char c)
{
	size_t	count;
	int		i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

// remove duplicates of charcter c in string and return cleansed string.
char *rem_dupl(const char *s, char c)
{
	char *clean_str;
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	clean_str = malloc(sizeof(char *) * (ft_strlen(s)+1));
	if(clean_str == NULL)
		return ((char *)s);
	//printf("%s\n", s);
	while (s[i] == c && s[i] != '\0')
		i++;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i+1] == s[i])
			i++;
	clean_str[j] = s[i];
	i++;
	j++;
	}
	//printf("%s\n", clean_str);
	return (clean_str);
}

char *word_dup(const char *str, size_t index, unsigned int start)
{
	size_t			len;

	len = index - start;
	//printf("%s\n", ft_substr(str, start, len));
	return (ft_substr(str, start, len));
}

char	**ft_split(char const *s, char c)
{
	char 			**res;
	char			*clean_s;
	size_t			i;
	size_t			j;
	size_t			res_len;
	unsigned int	start;

	i =	0;
	j = 0;
	start = 0;
	
	if (s == NULL)
		return (NULL);
	res_len = count_words(s, c);
	clean_s = rem_dupl(s, c);
	// if (res_len == 0)
	// 	return (NULL);
	
	res = malloc(sizeof(char *) * (res_len + 1));
	if (res == NULL)
		return (NULL);
	
	while (clean_s[i] != '\0')
	{
		if (clean_s[i] != c)
			i++;
		else
		{
			res[j] = word_dup(clean_s, i, start);
			//printf("TEST: %s\n", res[j]);
			j++;
			start = i+1;
			i++;
		}
	}
	//printf("TEST vor letztem: %s\n", res[0]);
	res[j] = word_dup(clean_s, ft_strlen(clean_s), start);
	//printf("TEST nach letztem: %d\n", j);
	//printf("TEST nach letztem: %s\n", res[0]);
    res[j+1] = NULL;
	// printf("TEST nach letztem: %zu\n", j);
	// if (j == 0)
	// 	return (NULL);
	return (res);
}

// int main()
// {
// 	char const s[70] = "   tripouille  42  ";
// 	char c;
// 	c = ' ';
// 	char **result;
// 	int i;

// 	i = 0;
// 	result = ft_split(s, c);

// 	while(result && result[i] != NULL)
// 	{
// 		printf("%s\n", result[i]);
// 		i++;
// 	}
// 	return (0);
// }

