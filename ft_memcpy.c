/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:35:12 by kczichow          #+#    #+#             */
/*   Updated: 2022/04/13 14:56:37 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//The memcpy() function copies n bytes from memory area src to memory area dst;

void	*ft_memcpy(void *dst1, const void *src1, size_t n)
{
	unsigned char		*dst;
	unsigned const char	*src;
	size_t				i;

	i = 0;
	if (dst1 == NULL && src1 == NULL)
		return (NULL);
	dst = (unsigned char *)dst1;
	src = (unsigned const char *) src1;
	while (i < n)
	{
		dst[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst1);
}

// int	main()
// {
// 	const char src1[20] = "Hello";
// 	char dst1[20] = "This is 42";

// 	printf("%s\n", ft_memcpy(dst1, src1, 1));

// 	const char src2[20] = "Hello";
// 	char dst2[20] = "This is 42";

// 	printf("%s\n", memcpy(dst2, src2, 1));

// 	const char src3[20] = "Hello";
// 	char dst3[20] = "This";

// 	printf("%s\n", ft_memcpy(dst3, src3, 20));

// 	const char src4[20] = "Hello";
// 	char dst4[20] = "This";

// 	printf("%s\n", memcpy(dst4, src4, 20));

// 	return (0);
// }