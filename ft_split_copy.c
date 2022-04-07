/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split copy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:07:35 by kczichow          #+#    #+#             */
/*   Updated: 2022/04/07 09:23:12 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates (with malloc(3)) and returns an array of strings obtained by
// splitting ’s’ using the character ’c’ as a delimiter. The array must end
// with a NULL pointer.

// static int count_delim(const char *s, char c)
// {
// 	size_t count;
// 	int	i;
// 	count = 0;
// 	i = 0;

// 	while (s[i] != '\0')
// 	{
// 		if (s[i] == c)
// 		count++;
// 	i++;
// 	}
// 	return (count);
// }

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
		
	res = malloc(sizeof(char *) * (ft_strlen(s)+1));
	if (res == NULL)
		return (NULL);
	
	while (s[i] != '\0')
	{
		if (s[i] != c)
			i++;
		else
		{
			res[j] = word_dup(s, i, start);
			//printf("TEST: %s\n", res[j]);
			j++;
			start = i+1;
			i++;
		}
	}
	//printf("TEST vor letztem: %s\n", res[0]);
	res[j] = word_dup(s, ft_strlen(s), start);
	//printf("TEST nach letztem: %d\n", j);
	//printf("TEST nach letztem: %s\n", res[0]);
    res[j+1] = NULL;
	return (res);
}

// int main()
// {
// 	char const s[40] = "Hallox42xhierxxxxxxxxxsindxwir";
// 	char c;
// 	c = 'x';
// 	char **result;
// 	int i;

// 	i = 0;
// 	result = ft_split(s, c);

// 	while(result[i] != NULL)
// 	{
// 		printf("%s\n", result[i]);
// 		i++;
// 	}
// 	return (0);
// }