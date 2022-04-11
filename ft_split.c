/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichowsky <kczichowsky@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 09:06:32 by kczichowsky       #+#    #+#             */
/*   Updated: 2022/04/08 10:09:13 by kczichowsky      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t	count_word(char const *s, char c)
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
char *print_word(char const *s, char c)
{
	size_t	i;
	size_t	k;
	char	*dup;

	i = 0;
	k = 0;
	dup = ft_strdup(s);
	//printf("%s\n", s);

	while (s[i] == c && s[i] != '\0')
		i++;
	//printf("%s\n", s);
	while (s[i] != c && s[i] != '\0')
	{
		dup[k] = s[i];
		i++;
		k++;
	}
	dup[k] = '\0';
	return (dup);
}

char **ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	res = malloc(sizeof(char *) * (count_word(s, c))+1);
	if (res == NULL)
		return (s);
	while (j < count_word(s,c))
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			res[j] = print_word(&s[i], c);
		}	
		while (s[i] != c && s[i] != '\0')
			i++;
		printf("%zu\n", j);
		i++;
	j++;	
	}
	//res[j] = '\0';
	return (res);
}

int main()
{
	char const s[40] = "  Hallo 42, hier    bin ich.";
	char c;
	c = ' ';

	printf("%zu\n", count_word(s, c));
	printf("%s\n", print_word(s, c));
	return (0);
}