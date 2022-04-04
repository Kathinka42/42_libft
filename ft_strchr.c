/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 11:46:33 by kczichow          #+#    #+#             */
/*   Updated: 2022/04/04 14:41:41 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// locate the first occurence of c in string str, whereas the terminating
// null is considered part of the string; int i is converted to char;
// The functions strchr() and strrchr() return a pointer to the located
// character, or NULL if the character does not appear in the string.

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((char)c == str[i])
		{
			return ((char *) &str[i]);
		}
		i++;
	}
	if (c == 0)
		return ((char *)str + ft_strlen(str));
	return (NULL);
}

// int	main() 
// {
// 	const char str1[20] = "Hello 42";
// 	int a;
// 	a = 0;

// 	printf("%s\n", ft_strchr(str1, a));

// 	printf("%s\n", strchr(str1, a));

// 	return (0);
// }