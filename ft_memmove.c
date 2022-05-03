/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichowsky <kczichowsky@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:57:10 by kczichow          #+#    #+#             */
/*   Updated: 2022/05/03 08:39:07 by kczichowsky      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The memmove() function copies len bytes from string src to string dst. The
// two strings may overlap; the copy is always done in a non-destructive manner.
// The memmove() function returns the original value of dst.

void	*ft_memmove(void *dst1, const void *src1, size_t len)
{
	unsigned char		*dst;

	if (dst1 == NULL && src1 == NULL)
		return (NULL);
	dst = (unsigned char *) dst1;
	if (dst < (unsigned char *)src1)
		ft_memcpy(dst1, src1, len);
	else
	{
		while (len > 0)
		{
			dst[len - 1] = ((unsigned char *)src1)[len - 1];
			len--;
		}
	}
	return (dst1);
}

// int	main()
// {
// 	const char src1[30] = "Dies ist ein Test";
// 	char dst1[30] = "XXXOO";

// 	printf("%s\n", ft_memmove(dst1+1, src1, 10));

// 	const char src2[30] = "Dies ist ein Test";
// 	char dst2[30] = "XXXOO";

// 	printf("%s\n", memmove(dst2+1, src2, 10));

// 	return (0);
// }