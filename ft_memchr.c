/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:54:48 by kczichow          #+#    #+#             */
/*   Updated: 2022/03/30 16:19:02 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void	*str1, int c, size_t	n)
{
	size_t		i;
	const char	*str2;

	str2 = str1;
	i = 0;
	while (str2[i] != '\0' && i < n)
	{
		if ((char)c == str2[i])
		{
			return ((char *) &str2[i]);
		}
		i++;
	}
	if (str2[i] == '\0' )
		return (NULL);
	return (NULL);
}

// int	main()
// {
// 	const char str1[20] = "Hello 42";
// 	int a;
// 	a = ' ';

// 	printf("%s\n", ft_memchr(str1, a, 7));

// 	printf("%s\n", memchr(str1, a, 7));

// 	return (0);
// }