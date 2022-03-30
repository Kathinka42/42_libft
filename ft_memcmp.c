/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 20:08:52 by kczichow          #+#    #+#             */
/*   Updated: 2022/03/30 16:19:15 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t	n)
{
	size_t		i;
	const char	*str3;
	const char	*str4;

	str3 = str1;
	str4 = str2;
	i = 0;
	while ((i < (n - 1)) && str3[i] != '\0' && str4[i] != '\0')
	{
		if (str3[i] == str4[i])
		i++;
		else
			return (str3[i] - str4[i]);
	}
	return (str3[i] - str4[i]);
}

// int	main()
// {
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