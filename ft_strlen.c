/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichowsky <kczichowsky@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:44:29 by kczichow          #+#    #+#             */
/*   Updated: 2022/04/06 22:28:35 by kczichowsky      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
