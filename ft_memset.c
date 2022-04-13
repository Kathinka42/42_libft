/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 09:27:34 by kczichow          #+#    #+#             */
/*   Updated: 2022/04/13 14:42:17 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The memset() function writes len bytes of value c (converted to an unsigned
// char) to the string str1.
// Void pointer can't dereferenced, therefore new pointer needs to be created,
// which points to the same address like str1.
// Empty string is not being considered, segfault;

void	*ft_memset(void *str1, int c, size_t len)
{
	size_t			i;
	unsigned char	*str2;

	i = 0;
	str2 = (unsigned char *)str1;
	while (i < len)
	{
		str2[i] = (unsigned char) c;
		i++;
	}
	return (str1);
}

// int	main()
// {
// char str1[20] = "Hallo 42";
// 	printf("%s\n", ft_memset(str1, 43, 4));
// char str2[20] = "Hallo 42";
// 	printf("%s\n", memset(str2, 43, 4));
// 	return (0);
// }
