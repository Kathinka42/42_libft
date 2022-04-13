/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 20:08:52 by kczichow          #+#    #+#             */
/*   Updated: 2022/04/13 14:10:29 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The memcmp() function compares byte string s1 against byte string s2. Both
// strings are assumed to be n bytes long. The memcmp() function returns zero
// if the two strings are identical, otherwise returns the difference between
// the first two differing bytes (treated as unsigned char values, so that
// `\200' is greater than `\0', for example).  Zero-length strings are always
// identical.

int	ft_memcmp(const void *str1, const void *str2, size_t	n)
{
	size_t			i;
	unsigned char	*str3;
	unsigned char	*str4;

	str3 = (unsigned char *) str1;
	str4 = (unsigned char *) str2;
	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (str3[i] != str4[i])
			return (str3[i] - str4[i]);
		i++;
	}
	return (0);
}

// int	main()

// 	const char str11[20] = "MMMMMX";
// 	const char str21[20] = "MMMMMMMMMM";
// 	size_t n1 = 9;
// 	printf("%d\n", ft_memcmp(str11, str21, n1));

// 	const char str12[20] = "MMMMMX";
// 	const char str22[20] = "MMMMMMMMMM";
// 	size_t n2 = 9;
// 	printf("%d\n", memcmp(str12, str22, n2));

// 	return (0);
// }