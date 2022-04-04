/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:35:12 by kczichow          #+#    #+#             */
/*   Updated: 2022/04/04 12:30:26 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//The memcpy() function copies n bytes from memory area src to memory area dst;

void	*ft_memcpy(void *dst1, const void *src, size_t n)
{
	size_t	i;
	char	*dst2;

	i = 0;
	dst2 = dst1;
	while (i < n)
	{
		dst2[i] = ((char *)src)[i];
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