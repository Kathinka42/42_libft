/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:54:48 by kczichow          #+#    #+#             */
/*   Updated: 2022/03/28 20:08:41 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(void	*str, int	c, size_t	n)
{
	size_t i;
	char *str2;

	str2 = str;

	i = 0;
	while (str2[i] != '\0' && i < n)
	{
		if ((char)c == str2[i])
		{
			return (&str2[i]);
		}
		i++;
	}
	if (str2[i] == '\0' )
		return ('\0');
	return (0);
}
int	main()
{
	char str1[20] = "Hello 42";
	int a;
	a = ' ';

	printf("%s\n", ft_memchr(str1, a, 7));

	printf("%s\n", memchr(str1, a, 7));

	return (0);
}