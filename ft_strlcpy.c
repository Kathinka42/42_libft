/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 14:23:48 by kczichow          #+#    #+#             */
/*   Updated: 2022/04/13 12:22:21 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// strlcpy() takes the full size of the destination buffer and guarantees
// NUL-termination if there is room.  Note that room for the NUL should be
// included in dstsize. strlcpy() copies up to dstsize - 1 characters from the
// string src to dst, NUL-terminating the result if dstsize is not 0.
// case distinction: if src < dst -> copy full src string (incl. '\0');
// if src < dst -> copy as many bytes possible from src + add '\0';

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (srclen + 1 < dstsize)
	{
		ft_memcpy(dst, src, srclen + 1);
	}
	else if (dstsize != 0)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (srclen);
}

// int	main()
// {
// 	char dst1[20]; 
// 	char dst2[20];
// 	char dst3[20];
// 	char dst4[20];
// 	const char src1[20] = "See you there";
// 	const char src2[20] = "See you there";

// 	printf("own function%zu\n", ft_strlcpy(dst1, src1, 0));
// 	printf("lib function%zu\n", strlcpy(dst2, src1, 0));
// 	printf("own function%s\n", dst1);
// 	printf("own function%s\n", dst2);

// 	return (0);
// }
