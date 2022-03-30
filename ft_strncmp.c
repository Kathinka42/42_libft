/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 13:57:57 by kczichow          #+#    #+#             */
/*   Updated: 2022/03/30 15:02:31 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function lexicographically compares n characters of two strings.
// Lexicographically bigger or smaller depends on the order in the alphabet
// (a<b);

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while ((i < (n - 1)) && str1[i] != '\0' && str2[i] != '\0')
	{
		if (str1[i] == str2[i])
		i++;
		else
			return (str1[i] - str2[i]);
	}
	return (str1[i] - str2[i]);
}

// int	main()
// {
// 	const char str11[20] = "MMMMMX";
// 	const char str21[20] = "MMMMMMMMMM";
// 	size_t n1 = 5;
// 	printf("%d\n", ft_strncmp(str11, str21, n1));

// 	const char str12[20] = "MMMMMX";
// 	const char str22[20] = "MMMMMMMMMM";
// 	size_t n2 = 5;
// 	printf("%d\n", strncmp(str12, str22, n2));

// 	return (0);
// }