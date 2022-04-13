/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:44:29 by kczichow          #+#    #+#             */
/*   Updated: 2022/04/13 11:41:47 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The strlen() function computes the length of the string s.  The strnlen()
// function attempts to compute the length of s, but never scans beyond the
// first maxlen bytes of s.

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// int	main()
// {
// 	const char str1[20] = "";
// 	printf("%zu\n", ft_strlen(str1));

// 	const char str2[20] = "";
// 	printf("%zu\n", strlen(str2));

// 	return(0); 
// }
