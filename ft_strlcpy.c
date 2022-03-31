/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 14:23:48 by kczichow          #+#    #+#             */
/*   Updated: 2022/03/31 13:30:54 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// kann im Moment die Funktion nicht aus der Lib aufrufen, Warum?

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
