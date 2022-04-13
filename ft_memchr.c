/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:54:48 by kczichow          #+#    #+#             */
/*   Updated: 2022/04/13 14:45:46 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The memchr() function locates the first occurrence of c (converted to an
// unsigned char) in string s.

void	*ft_memchr(const void	*str, int c, size_t	n)
{
	size_t			i;
	unsigned char	*str2;

	str2 = (unsigned char *) str;
	i = 0;
	while (i < n)
	{
		if (str2[i] == (unsigned char)c)
		{
			return ((unsigned char *) &str2[i]);
		}
		i++;
	}
	return (NULL);
}

	// int	main()
	// {
	// 	const char str1[20] = "Hello 42";
	// 	// const char s[20] = {0, 1, 2 ,3 ,4 ,5};
	// 	const char s[20] = "012345";
	// 	int a;
	// 	a = 0;

	// 	printf("%s\n", ft_memchr(str1, a+256, 7));
	// 	printf("%s\n", memchr(str1, a+256 , 7));

	// 	printf("%s\n", ft_memchr(s, a, 3));
	// 	printf("%s\n", memchr(s, a, 3));

	// 	printf("%s\n", ft_memchr(str1, (int) str1+256, 7));
	// 	printf("%s\n", memchr(str1, (int) str1+256, 7));

	// 	return (0);
	// }