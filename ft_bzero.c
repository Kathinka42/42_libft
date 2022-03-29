/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 10:55:08 by kczichow          #+#    #+#             */
/*   Updated: 2022/03/25 13:38:22 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

// The bzero() function writes n zeroed bytes to the string str;

void	*ft_bzero(void *str1, size_t len)
{
	size_t i;
	char *str2;

	i = 0;
	str2 = str1;
	if (len != 0)
		while (i < len)
		{
			str2[i] = '\0';
			i++;
		}
	return (0);
}

int	main()
{
	char str1[20] = "Hello 42";
	char str2[20] = "Hello 42";
	size_t i;
	i = 5;

	printf("%s\n", ft_bzero(str1, i));
	printf("%s\n", bzero(str2, i));

	return (0);
}
