/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 13:57:57 by kczichow          #+#    #+#             */
/*   Updated: 2022/03/25 14:24:40 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

// Function lexicographically compares n characters of two strings.
// Lexicographically bigger or smaller depends on the order in the alphabet (a<b);

int	ft_strncmp(char *str1, char *str2, size_t n)
{
	size_t i;

	i = 0;
	while((i < (n-1)) && str1[i] != '\0' && str2[i] != '\0')
	{
		if (str1[i] == str2[i])
		i++;
		else
			return (str1[i] - str2[i]);
	}
	return (str1[i] - str2[i]);
}

int	main()
{
	char str11[20] = "MMMMMX";
	char str21[20] = "MMMMMMMMMM";
	size_t n1 = 5;
	printf("%d\n", ft_strncmp(str11, str21, n1));

	char str12[20] = "MMMMMX";
	char str22[20] = "MMMMMMMMMM";
	size_t n2 = 5;
	printf("%d\n", strncmp(str12, str22, n2));

	return (0);
}