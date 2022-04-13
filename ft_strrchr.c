/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichowsky <kczichowsky@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 13:52:04 by kczichow          #+#    #+#             */
/*   Updated: 2022/04/12 11:10:42 by kczichowsky      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// locate the last occurence of c in string str, whereas the terminating
// null is considered part of the string; int i is converted to char;
// The functions strchr() and strrchr() return a pointer to the located
// character, or NULL if the character does not appear in the string.

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if ((char)c == str[i])
		{
			return ((char *) &str[i]);
		}
	i--;
	}
	if (c == 0)
		return ((char *)str + ft_strlen(str));
	return (NULL);
}

// int main()
// { 
// 	const char str1[20] = "Hello 42"; 
// 	int a;
// 	a = 'l';

// 	printf("%s\n", ft_strrchr(str1, a));

// 	printf("%s\n", strrchr(str1, a));

// 	return (0);
// }