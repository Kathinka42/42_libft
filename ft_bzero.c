/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 10:55:08 by kczichow          #+#    #+#             */
/*   Updated: 2022/04/13 14:41:50 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

// The bzero() function writes n zeroed bytes to the string str; Empty string
// is not being considered -> segfault

void	*ft_bzero(void *str, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((char *)str)[i] = '\0';
		i++;
	}
	return (str);
}

// int	main()
// {
// 	char str1[] = "Hello 42";
// 	char str2[] = "Hello 42";
// 	size_t i;
// 	i = 5;

// 	printf("%s\n", str1);
// 	printf("%s\n", ft_bzero(str1, i));
// 	printf("%s\n", str1);
// 	printf("%s\n", str2);
// 	printf("%s\n", bzero(str2, i));
// 	printf("%s\n", str2);
// 	return (0);
// }
