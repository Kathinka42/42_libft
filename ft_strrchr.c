/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 13:52:04 by kczichow          #+#    #+#             */
/*   Updated: 2022/03/31 11:03:05 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// locate the last occurence of c in string str, whereas the terminating
// null is considered part of the string; int i is converted to char;

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i++;
	while (i >= 0)
	{
		if ((char)c == str[i])
		{
			return ((char *) &str[i]);
		}
	i--;
	}
	return (0);
}

// int main()
// {
// 	const char str1[20] = "Hello 42"; 
// 	int a;
// 	a = 'l';

// 	printf("%s\n", ft_strrchr(str1, a));

// 	printf("%s\n", strrchr(str1, a));

// 	return (0);
// }