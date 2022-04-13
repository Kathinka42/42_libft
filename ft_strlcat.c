/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichowsky <kczichowsky@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 14:19:54 by kczichow          #+#    #+#             */
/*   Updated: 2022/04/12 10:49:20 by kczichowsky      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// function appends string src to the end of dst.  It will append at most
// size - strlen(dst) - 1 characters.  It will then NUL- terminate, unless
// size is 0 or the original dst string was longer than dstsize (in practice
// this should not happen as it means that either dstsize is incorrect or that
// dst is not a proper string)
//
// Characters from string src are appended to string dst. The dstsize argument
// is equal to the size of the dst buffer, which caps the number of characters
// copied to this size, minus one for the null character.

size_t	ft_strlcat(char	*dst, const char	*src, size_t	dstsize)
{
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);

	if (dstsize <= dstlen)
		return (dstsize + srclen);
	
	if ((dstsize - dstlen - 1) > srclen)
	{
		ft_memcpy(dst + dstlen, src, srclen);
		dst[dstlen + srclen] = '\0';
	}
	else
	{
		ft_memcpy((dst + dstlen), src, (dstsize - dstlen- 1));
		dst[dstlen + dstsize] = '\0';
	}
	return (dstlen + srclen);
}
// int main()
// {
//     const char  src[] = "Hallo42K";
//     char dst[25] = "AAA";
//     size_t dstsize = 19;

//     printf("Erster Test: %zu\n", ft_strlcat(dst, src, dstsize));

// 	const char  src1[] = "Hallo42K";
//     char dst1[25] = "AAA";
//     size_t dstsize1 = 19;

//     printf("Zweiter Test: %zu\n", strlcat(dst1, src1, dstsize1));

//     return (0);
// }