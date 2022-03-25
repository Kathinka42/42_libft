/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 11:46:33 by kczichow          #+#    #+#             */
/*   Updated: 2022/03/25 13:54:46 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

// locate the first occurence of c in string str, whereas the terminating
// null is considered part of the string; int i is converted to char;

char	*ft_strchr(char *str, int c)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((char)c == str[i])
		{
			return (&str[i]);
		}
		i++;
	}
	if (str[i] == '\0')
		return ('\0');
	return (NULL);
}

int	main()
{
	char str1[20] = "Hello 42";
	int a;
	a = '\0';

	printf("%s\n", ft_strchr(str1, a));

	printf("%s\n", strchr(str1, a));

	return (0);
}